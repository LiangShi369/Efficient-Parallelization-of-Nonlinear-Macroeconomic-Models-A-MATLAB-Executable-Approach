//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// model_subfuns_cuda_fused_types.h
//
// Code generation for function 'model_subfuns_cuda_fused'
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

struct struct2_T {
  real_T verbose;
  real_T tolerance;
  real_T maxit;
};

struct struct3_T {
  real_T do_GE;
  real_T maxiter;
  real_T verbose;
  real_T toleranceGEprices;
  real_T toleranceGEcondns;
};

struct b_model_subfuns_cuda_fused {
  real_T cpu_cash[80040];
};

struct c_model_subfuns_cuda_fusedStack {
  b_model_subfuns_cuda_fused f0;
};

// End of code generation (model_subfuns_cuda_fused_types.h)
