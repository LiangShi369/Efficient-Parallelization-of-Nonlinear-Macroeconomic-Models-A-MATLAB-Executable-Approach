//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// solver_bruteforce_cuda_types.h
//
// Code generation for function 'solver_bruteforce_cuda'
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
  real_T phi0;
  real_T rstar;
  real_T theta;
  real_T sigg;
  real_T betta;
};

struct b_solver_bruteforce_cuda {
  real_T cpu_y[250000];
};

struct solver_bruteforce_cudaStackData {
  b_solver_bruteforce_cuda f0;
};

// End of code generation (solver_bruteforce_cuda_types.h)
