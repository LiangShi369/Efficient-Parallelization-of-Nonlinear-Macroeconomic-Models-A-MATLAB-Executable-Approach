# Efficient-Parallelization-of-Nonlinear-Macroeconomic-Models-A-MATLAB-Executable-Approach



This repository saves replication files for the paper "Efficient Parallelization of Nonlinear Macroeconomic Models: A MATLAB Executable Approach", 2025 version, in folders "Code sovereignDefault" and "Code heteroAgents". 

Folder `Code sovereignDefault` includes:
- main_benchmark.m, the sovereign default model with long-maturity debt and debt renegotiation, as in Kuang and Shi (2026);
- main_benchmark_varSZ.m, the variable-size-input variant of main_benchmark.m.
- main_binary_monotonic.m, the sovereign default model with the canonical one-period defaultable debt, solved by brute-force (benchmark in the paper) and the binary-monontonicity method as in Gordon and Qiu (2018).
- main_interpolation.m, where the one-period defaultable debt model is solved via interpolation on debt choices.
- main_vectorized.m, where the one-period defaultable debt model is solved by fully vectorized brute force method, as in Uribe and Schmitt-Grohé (2017).
- folder `Fortran brute force` includes Fotran code to solve the one-period defaultable debt model with brute-force value function iteration, following the coding of MATLAB/MEX counterparts. 
- folder `PyTorch Mex comparison` includes PyTorch and MATLAB/MEX code to solve the one-period defaultable debt model with fully vectorized brute-force, as in Duarte et al. (2020).

Folder `Code heteroAgents` includes:
- main_BS.m, where the heterogeneous-agent model (Buera and Shin, 2013) is solved in different implementations.
- main_BS_vs.m, the variable-size-input variant of main_BS.m.

This repository includes Matlab code that generates Mex files to solve sovereign default (as well as folders of Fortran/PyTorch code for comparison) and heterogeneous agents models. Details for setting up the environment are documented in the paper.

Folder "Code stochasticGrowth" includes tutorial code for a simple stochastic growth model that is solved with linear interpolation methods, using native Matlab, Mex parfor and Mex CUDA.

**Authors:** Alessandro Di Nola and Liang Shi


**References:**

Buera, F. J. and Shin, Y. (2013). Financial frictions and the persistence of history: A quantitative
exploration. *Journal of Political Economy*, 121(2):221-272.

Duarte, V., Duarte, D., Fonseca, J., and Montecinos, A. (2020). Benchmarking machine-learning
software and hardware for quantitative economics. *Journal of Economic Dynamics and Control*, 111:103796.

Gordon, G. and Qiu, S. (2018). A divide and conquer algorithm for exploiting policy function
monotonicity. *Quantitative Economics*, 9(2):521-540.

Kuang, P. and Shi, L. (2026). Sovereign debt pricing with shifting long-run growth expectations.
*European Economic Review*, 186(105310).

Uribe, M. and Schmitt-Grohé, S., 2017. Open economy macroeconomics. *Princeton University Press*.