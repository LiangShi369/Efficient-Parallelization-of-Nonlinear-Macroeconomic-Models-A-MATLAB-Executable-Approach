//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// model_subfuns_cuda_fused.h
//
// Code generation for function 'model_subfuns_cuda_fused'
//

#pragma once

// Include files
#include "model_subfuns_cuda_fused_types.h"
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
void model_subfuns_cuda_fused(
    c_model_subfuns_cuda_fusedStack *SD, const real_T p_eqm[2],
    const real_T cpu_a_grid[2001], const real_T cpu_z_grid[40],
    const real_T cpu_pi_z[1600], const struct0_T *Params,
    const struct1_T *vfoptions, const struct2_T *simoptions,
    const struct3_T *heteroagentoptions, real_T *val, real_T cpu_V[80040],
    real_T cpu_Policy[80040], real_T cpu_StatDist[80040]);

// End of code generation (model_subfuns_cuda_fused.h)
