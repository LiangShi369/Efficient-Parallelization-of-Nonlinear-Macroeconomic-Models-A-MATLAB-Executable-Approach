//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// solve_benchmark_cuda.h
//
// Code generation for function 'solve_benchmark_cuda'
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
void solve_benchmark_cuda(const real_T z[625], const real_T m[625],
                          const real_T b[400], const real_T cpu_pdf[390625],
                          const real_T para[8], real_T cpu_vp[250000],
                          real_T cpu_vd[625], real_T cpu_q[250000],
                          real_T cpu_bp[250000], real_T cpu_bpr[625],
                          boolean_T cpu_def[250000], real_T cpu_rr[250000],
                          real_T *totaltime, real_T *avgtime);

// End of code generation (solve_benchmark_cuda.h)
