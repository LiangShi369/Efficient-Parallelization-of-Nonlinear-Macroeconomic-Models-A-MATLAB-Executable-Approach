//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// rbc_solver_interp_cuda.h
//
// Code generation for function 'rbc_solver_interp_cuda'
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
void rbc_solver_interp_cuda(const real_T cpu_c0[100500], const real_T k[500],
                            const real_T cpu_pdfz[40401], real_T cpu_v[100500],
                            real_T cpu_pol_kp[100500]);

// End of code generation (rbc_solver_interp_cuda.h)
