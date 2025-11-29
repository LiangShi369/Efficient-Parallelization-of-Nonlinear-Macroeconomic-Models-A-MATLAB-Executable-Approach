function [v,pol_kp]  = rbc_solver_interp(c0,k,pdfz)

tol = 1e-6;    % Tolerance for V
maxit = 2000;
diff = 1;
its = 1;

beta = 0.95;      % Discount rate
eta = 2;

[nk,nz] = size(c0);
k_min = k(1);
k_max = k(nk);

v = zeros(nk,nz);     % Value Function
v0 = zeros(nk,nz);    % v at the previous iteration
pol_kp = zeros(nk,nz);
pdfz = pdfz';

smctime   = tic;
totaltime = 0;

while diff > tol && its < maxit
    ev = beta*v*pdfz;

    for iz = 1:nz % z today (exogenous state)

        for ik = 1:nk % k today (endo state)

            wealth = c0(ik,iz);
            kp_lb = k_min;
            kp_ub = min(k_max,wealth)-1e-8;
            myfun = @(x) rhs_bellman(x,wealth,k,ev(:,iz),eta);
            [xf,fval] = brent_min(myfun,kp_lb,kp_ub,1e-8,500,500);
            v0(ik,iz) = -fval;
            pol_kp(ik,iz) = xf;

        end %end ik
    end %end iz

    diff = max(max(abs(v-v0)));   % Check convergence:

    v = v0;          % Update

totaltime = totaltime + toc(smctime);
avgtime   = totaltime/its;
if mod(its, 50) == 0 || diff<=tol; fprintf('%8.0f ~%8.8f ~%8.5fs ~%8.5fs \n', its, diff, totaltime, avgtime); end
its = its+1;
smctime = tic; % re-start clock

end %end while

end %end function


%--------------------------- SUBFUNCTIONS --------------------------------%
function F = rhs_bellman(kprime,wealth,k_grid,EV_z,eta)
% This calls user-written function interp1_scal

% c1 = wealth-kprime;
EV_z_interp = interp1_scal_v2(k_grid,EV_z,kprime);
F = - ( (wealth-kprime)^(1-eta)/(1-eta) + EV_z_interp ) ;

end

