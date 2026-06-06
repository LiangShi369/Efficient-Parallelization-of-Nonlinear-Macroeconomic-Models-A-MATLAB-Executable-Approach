//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// solve_benchmark_cuda_emxutil.h
//
// Code generation for function 'solve_benchmark_cuda_emxutil'
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
struct emxArray_real_T;

// Function Declarations
void emxFree_real_T(emxArray_real_T **pEmxArray);

void emxInit_real_T(emxArray_real_T **pEmxArray,
                    const emlrtRTEInfo *srcLocation);

// End of code generation (solve_benchmark_cuda_emxutil.h)
