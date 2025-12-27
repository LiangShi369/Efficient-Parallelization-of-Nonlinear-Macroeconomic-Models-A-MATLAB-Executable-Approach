//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// _coder_solver_bruteforce_cuda_mex.h
//
// Code generation for function '_coder_solver_bruteforce_cuda_mex'
//

#pragma once

// Include files
#include "rtwtypes.h"
#include "solver_bruteforce_cuda_types.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Custom Header Code

#ifdef __CUDA_ARCH__
#undef printf
#endif

// Function Declarations
MEXFUNCTION_LINKAGE void mexFunction(int32_T nlhs, mxArray *plhs[],
                                     int32_T nrhs, const mxArray *prhs[]);

emlrtCTX mexFunctionCreateRootTLS();

void unsafe_solver_bruteforce_cuda_mexFunction(
    solver_bruteforce_cudaStackData *SD, int32_T nlhs, mxArray *plhs[6],
    int32_T nrhs, const mxArray *prhs[5]);

// End of code generation (_coder_solver_bruteforce_cuda_mex.h)
