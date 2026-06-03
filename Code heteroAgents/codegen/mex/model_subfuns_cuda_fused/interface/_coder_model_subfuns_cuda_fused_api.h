//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// _coder_model_subfuns_cuda_fused_api.h
//
// Code generation for function '_coder_model_subfuns_cuda_fused_api'
//

#pragma once

// Include files
#include "rtwtypes.h"
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

// Type Declarations
struct c_model_subfuns_cuda_fusedStack;

// Function Declarations
void model_subfuns_cuda_fused_api(c_model_subfuns_cuda_fusedStack *SD,
                                  const mxArray *const prhs[8], int32_T nlhs,
                                  const mxArray *plhs[4]);

// End of code generation (_coder_model_subfuns_cuda_fused_api.h)
