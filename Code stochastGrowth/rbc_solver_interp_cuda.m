function [v,pol_kp]  = rbc_solver_interp_cuda(c0,k,pdfz)

coder.gpu.kernelfun;

tol = 1e-6;    % Tolerance for V
maxit = 2000;
diff = 1;
its = 1;

beta = 0.95;      % Discount rate
eta = 2;

[nk,nz] = size(c0);
k_min = k(1);
k_max = k(nk);

v = coder.nullcopy(zeros(nk,nz)) ;     % Value Function
v0 = coder.nullcopy(zeros(nk,nz)) ;    % v at the previous iteration
pol_kp = coder.nullcopy(zeros(nk,nz)) ;
pdfz = pdfz' ;

smctime   = tic;
totaltime = 0;

while diff > tol && its < maxit

    ev = beta*v*pdfz;
    
    coder.gpu.kernel()
    for iz = 1:nz % z today (exogenous state)
        ev_iz = ev(:,iz) ;
        
        for ik = 1:nk % k today (endo state)

            coder.gpu.constantMemory(k) 
            coder.gpu.constantMemory(c0) 

            wealth = c0(ik,iz); % Impose that k' lies in interval [0,wealth]
            kp_lb = k_min;
            kp_ub = min(k_max, wealth ) - 1e-8 ;
            
            coder.gpu.constantMemory(k) 
            myfun = @(x) rhs_bellman(x,wealth,k,ev_iz,eta) ;

            [xf,fval] = brent_min(myfun,kp_lb,kp_ub,1e-8,500,500) ;
            v0(ik,iz) = -fval;
            pol_kp(ik,iz) = xf;

        end %end ik
    end %end iz

    diff = max(max(abs(v-v0)));   % Check convergence:
    v = v0;          % Update

totaltime = totaltime + toc(smctime);
avgtime   = totaltime/its;

if mod(its, 50) == 0 || diff<=tol 
    fprintf('%8.0f ~%8.8f ~%8.5fs ~%8.5fs \n', its, diff, totaltime, avgtime); 
end
its = its+1;
smctime = tic; % re-start clock

end %end while

end %end function


%--------------------------- SUBFUNCTIONS --------------------------------%
function F = rhs_bellman(kprime,wealth,k_grid,EV_z,eta)
% This calls user-written function interp1_scal
coder.gpu.kernelfun;

% c1 = wealth-kprime;
EV_z_interp = interp1_scal_v2(k_grid,EV_z,kprime);

F = - ( (wealth-kprime) ^(1-eta) / (1-eta) + EV_z_interp );

% F = -F;

end

