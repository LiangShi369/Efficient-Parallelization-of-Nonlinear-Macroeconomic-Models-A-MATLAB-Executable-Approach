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
#include "solve_benchmark_cuda_types.h"
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
void solve_benchmark_cuda(
    solve_benchmark_cudaStackData *SD, const real_T cpu_z_data[],
    const int32_T z_size[1], const real_T cpu_m_data[], const int32_T m_size[1],
    const real_T cpu_b_data[], const int32_T b_size[1],
    const real_T cpu_pdf_data[], const int32_T pdf_size[2],
    const real_T para[8], real_T cpu_vp_data[], int32_T vp_size[2],
    real_T cpu_vd_data[], int32_T vd_size[1], real_T cpu_q_data[],
    int32_T q_size[2], real_T cpu_bp_data[], int32_T bp_size[2],
    real_T cpu_bpr_data[], int32_T bpr_size[1], boolean_T cpu_def_data[],
    int32_T def_size[2], real_T cpu_rr_data[], int32_T rr_size[2],
    real_T *totaltime, real_T *avgtime);

// End of code generation (solve_benchmark_cuda.h)
