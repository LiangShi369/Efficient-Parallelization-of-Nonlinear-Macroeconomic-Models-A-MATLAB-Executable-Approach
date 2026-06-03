//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// model_subfuns_cuda_fused_terminate.h
//
// Code generation for function 'model_subfuns_cuda_fused_terminate'
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

// Function Declarations
void model_subfuns_cuda_fused_atexit();

void model_subfuns_cuda_fused_terminate();

// End of code generation (model_subfuns_cuda_fused_terminate.h)
