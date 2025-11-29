%% Solve stochastic growth model with linear interp and Brent maximization
% See subfolder "StochasticGrowth_grid" for pure discretization method
% where choice variable k' is restricted to the grid
clear 

format compact

nz = 101;    % Grid size 
nk = 200;  % grid points + 1

compile_mexparfor = 0 ;
compile_mexparfor_vs = 0 ;
compile_mexcuda = 0 ;
compile_mexcuda_vs = 0 ;

%% Initialize the parameters
beta  = 0.95;   % Discount rate
eta   = 2;      % Risk aversion parameter
alpha = 0.33;   % Technology parameter
delta = 0.1;    % Depreciation rate
rho   = 0.90;   % Tech. shock persistence
sigma = 0.01;   % Tech. shock st. dev.
Tsim  = 10000;  % Num. periods for simulation

%% Grid for productivity z
muz   = 0;
width = 4.2; 

[z, pdfz] = tauchen(nz,muz,rho,sigma,width);
z = exp(z);

%% Grid for capital k
kstar = (alpha/(1/beta - (1-delta)))^(1/(1-alpha)); % steady state k
cstar = kstar^(alpha) - delta*kstar;
istar = delta*kstar;
ystar = kstar^(alpha);

kmin = 0.5*kstar;
kmax = 1.5*kstar;

k      = linspace(kmin,kmax,nk)'; % k today is (nk,1)
kpgrid = k'; % k' tomorrow is (1,nk)

c0 = zeros(nk,nz);  % total wealth
for iz=1:nz
    c0(:,iz) = z(iz)*k.^alpha + (1-delta)*k;
end

%% Matlab serial 

tic
[v, pol_kp_val] = rbc_solver_interp(c0,k,pdfz);
time_MatlaSerial = toc ;

%% Matlab parfor

tic
[v, pol_kp_val] = rbc_solver_interp_parfor(c0,k,pdfz);
time_MatlabParfor = toc ;

%% Mex parfor 
if compile_mexparfor
cfg = coder.config('mex');
cfg.GenerateReport = true;
codegen -config cfg rbc_solver_interp_parfor -args {c0,k,pdfz } -o rbc_solver_interp_parfor_mex
end

tic
[v, pol_kp_val] = rbc_solver_interp_parfor_mex( c0,k,pdfz ) ;
time_MexParfor = toc ;


%% Mex parfor variables input size
if compile_mexparfor_vs
cfg = coder.config('mex');
cfg.GenerateReport = true;
vs_c0 = coder.typeof(c0,[500,500],1) ;
vs_k = coder.typeof(k,[500,1],1) ;
vs_pdfz = coder.typeof(pdfz,[500,500],1) ;
codegen -config cfg rbc_solver_interp_parfor -args {vs_c0,vs_k,vs_pdfz } -o rbc_solver_interp_parfor_mex_vs
end

tic
[v, pol_kp_val] = rbc_solver_interp_parfor_mex_vs( c0,k,pdfz ) ;
time_MexParfor_vs = toc ;

%% Mex CUDA

if compile_mexcuda
cfg = coder.gpuConfig('mex');
cfg.GenerateReport = true;
codegen -config cfg rbc_solver_interp_cuda -args {c0,k,pdfz } -o rbc_solver_interp_cuda_mex
end 

reset(gpuDevice)

tic
[v_cuda, pol_kp_val_cuda] = rbc_solver_interp_cuda_mex( c0,k,pdfz) ;
time_MexCuda = toc ;

error_v = norm(v_cuda - v) ;
error_pol_kp = norm(pol_kp_val_cuda -pol_kp_val ) ;

%% Mex CUDA variable size inputs
if compile_mexcuda_vs
cfg = coder.gpuConfig('mex');
cfg.GenerateReport = true;
vs_c0 = coder.typeof(c0,[500,500],1) ;
vs_k = coder.typeof(k,[500,1],1) ;
vs_pdfz = coder.typeof(pdfz,[500,500],1) ;
codegen -config cfg rbc_solver_interp_cuda -args {vs_c0, vs_k, vs_pdfz } -o rbc_solver_interp_cuda_mex_vs
end 

reset(gpuDevice)

tic
[v_cuda, pol_kp_val_cuda] = rbc_solver_interp_cuda_mex_vs( c0,k,pdfz) ;
time_MexCuda_vs = toc  ;

%% Simulation with interpolation

tic

sim_k = zeros(Tsim+1,1);
sim_c = zeros(Tsim,1);
k0 = kstar;
z0 = floor((nz+1)/2);

% --- Step 1: Simulate exogenous state variable and get sequence {z(t)}
sim_z_ind = markov_simul(pdfz,Tsim,z0,1);
sim_z = z(sim_z_ind);

% --- Step 2: Given {z(t)}, simulate {k(t)} from t=1 to t=T as follows:
% k(0)>0 is given (initial condition)
% k(1) = policy(k(0),z(0))
% k(2) = policy(k(1),z(1))
% ...
% k(T) = policy(k(T-1),z(T-1))
sim_k(1) = k0;
for t=1:Tsim
    sim_k(t+1) = interp1_scal(k,pol_kp_val(:,sim_z_ind(t)),sim_k(t));
    sim_c(t) = sim_z(t)*sim_k(t)^alpha + (1-delta)*sim_k(t) - sim_k(t+1);
end
time_simulation = toc;

%% Results

fprintf('Time for VFI (seconds): Matlab serial  %f \n', time_MatlaSerial)
fprintf('Time for VFI (seconds): Matlab parfor  %f \n', time_MatlabParfor)
fprintf('Time for VFI (seconds): Mex Parfor     %f \n', time_MexParfor)
fprintf('Time for VFI (seconds): Mex Parfor variable size inputs   %f \n', time_MexParfor_vs)
fprintf('Time for VFI (seconds): Mex CUDA     %f \n', time_MexCuda)
fprintf('Time for VFI (seconds): Mex CUDA variable size inputs     %f \n', time_MexCuda_vs)
fprintf('Time for Simulation (seconds): %f \n', time_simulation)

figure
plot(k,v_cuda,"LineWidth",2)
xlabel('Capital, k')
title('Value function V(k,z)')
print('V','-dpng')

figure
plot(k,pol_kp_val_cuda,"LineWidth",2)
xlabel('Capital, k')
title('Policy function k''(k,z)')
print('pol_kp','-dpng')

figure
plot(k,k,'--',"LineWidth",2)
hold on
plot(k,pol_kp_val(:,1),"LineWidth",2)
hold on
plot(k,pol_kp_val(:,nz),"LineWidth",2)
xlabel('Capital, k')
title('Policy function k''(k,z)')
print('pol_kp2','-dpng')

figure
plot(sim_z(1:1000),"LineWidth",2)
hold on
plot(sim_k(1:1000),"LineWidth",2)
hold on
plot(sim_c(1:1000),"LineWidth",2)
legend('TFP','Capital','Consumption')
xlabel('Time periods')
title('Simulation')
print('simul','-dpng')


