//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// fun_VFI_cuda_types.h
//
// Code generation for function 'fun_VFI_cuda'
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
struct struct0_T {
  real_T crra;
  real_T beta;
  real_T delta;
  real_T alpha;
  real_T upsilon;
  real_T psi;
  real_T eta;
  real_T lambda;
  real_T r;
  real_T w;
};

struct struct1_T {
  real_T verbose;
  real_T lowmemory;
  real_T tolerance;
  real_T howards;
};

struct emxArray_real_T {
  real_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

struct b_fun_VFI_cuda {
  real_T cpu_cash_data[120040];
};

struct fun_VFI_cudaStackData {
  b_fun_VFI_cuda f0;
};

// End of code generation (fun_VFI_cuda_types.h)
