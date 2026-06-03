//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// fun_return_cuda.h
//
// Code generation for function 'fun_return_cuda'
//

#pragma once

// Include files
#include "fun_return_cuda_types.h"
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
void fun_return_cuda(const real_T p_eqm[2], const real_T cpu_a_grid_data[],
                     const int32_T a_grid_size[1], const real_T z_grid[40],
                     struct0_T *Params, const struct1_T *vfoptions,
                     emxArray_real_T *cpu_ReturnMatrix, real_T *time_ret);

// End of code generation (fun_return_cuda.h)
