//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// rtwtypes.h
//
// Code generation for function 'solver_bruteforce_cuda'
//

#pragma once

/*=======================================================================*
 * Complex types for GPU Coder:                                          *
 *   creal32_T                      - complex float with align           *
 *   creal64_T                      - complex double with align          *
 *=======================================================================*/

#ifndef __gpu_align__
#ifdef _MSC_VER
#define __gpu_align__(n) __declspec(align(n))
#else
#define __gpu_align__(n) __attribute__((aligned(n)))
#endif
#endif

#ifndef CREAL32_T
typedef struct __gpu_align__(8) {
  float re, im;
} creal32_T;
#define CREAL32_T creal32_T
#endif

#ifndef CREAL64_T
typedef struct __gpu_align__(16) {
  double re, im;
} creal64_T;
#define CREAL64_T creal64_T
#endif

#ifndef CREAL_T
typedef struct __gpu_align__(16) {
  double re, im;
} creal_T;
#define CREAL_T creal_T
#endif
// Include files
#include "tmwtypes.h"

/*
 * TRUE/FALSE definitions
 */
#ifndef TRUE
#define TRUE (1U)
#endif
#ifndef FALSE
#define FALSE (0U)
#endif

// End of code generation (rtwtypes.h)
