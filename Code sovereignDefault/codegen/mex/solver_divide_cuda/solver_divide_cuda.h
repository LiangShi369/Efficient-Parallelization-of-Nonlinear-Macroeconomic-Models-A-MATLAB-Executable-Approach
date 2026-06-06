//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// solver_divide_cuda.h
//
// Code generation for function 'solver_divide_cuda'
//

#pragma once

// Include files
#include "rtwtypes.h"
#include "solver_divide_cuda_types.h"
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
void solver_divide_cuda(const real_T cpu_b[400], const real_T cpu_z[625],
                        const real_T cpu_m[625], const real_T cpu_pdf[390625],
                        const struct0_T *para, real_T cpu_q[250000],
                        real_T cpu_bp[250000], real_T cpu_vp[250000],
                        real_T cpu_def[250000], real_T *totaltime,
                        real_T *avgtime);

// End of code generation (solver_divide_cuda.h)
