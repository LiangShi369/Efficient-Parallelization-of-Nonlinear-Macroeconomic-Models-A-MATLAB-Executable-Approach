//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// solve_benchmark_cuda_types.h
//
// Code generation for function 'solve_benchmark_cuda'
//

#pragma once

// Include files
#include "rtwtypes.h"
#include "emlrt.h"

// Custom Header Code

#ifdef __CUDA_ARCH__
#undef printf
#endif

// Type Definitions
struct emxArray_real_T {
  real_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

struct binary_expand_op_4 {
  real_T in1_data[1000000];
};

struct minus {
  real_T in2_data[1000000];
};

struct b_solve_benchmark_cuda {
  real_T cpu_V_data[1000000];
  real_T cpu_vpnew_data[1000000];
  real_T cpu_qnew_data[1000000];
  real_T cpu_evp_data[1000000];
  real_T cpu_pdef_data[1000000];
  real_T cpu_x_data[1000000];
};

struct solve_benchmark_cudaStackData {
  binary_expand_op_4 f0;
  minus f1;
  b_solve_benchmark_cuda f2;
};

// End of code generation (solve_benchmark_cuda_types.h)
