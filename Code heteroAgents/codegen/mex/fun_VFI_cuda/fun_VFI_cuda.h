//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// fun_VFI_cuda.h
//
// Code generation for function 'fun_VFI_cuda'
//

#pragma once

// Include files
#include "fun_VFI_cuda_types.h"
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
void fun_VFI_cuda(fun_VFI_cudaStackData *SD, const real_T p_eqm[2],
                  const real_T cpu_a_grid_data[], const int32_T a_grid_size[1],
                  const real_T z_grid[40], const real_T cpu_pi_z[1600],
                  struct0_T *cpu_Params, const struct1_T *vfoptions,
                  real_T cpu_V_data[], int32_T V_size[2],
                  real_T cpu_Policy_data[], int32_T Policy_size[2]);

// End of code generation (fun_VFI_cuda.h)
