/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * fun_VFI_parfor2_types.h
 *
 * Code generation for function 'fun_VFI_parfor2'
 *
 */

#pragma once

/* Include files */
#include "rtwtypes.h"
#include "emlrt.h"

/* Type Definitions */
#ifndef typedef_struct0_T
#define typedef_struct0_T
typedef struct {
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
} struct0_T;
#endif /* typedef_struct0_T */

#ifndef typedef_struct1_T
#define typedef_struct1_T
typedef struct {
  real_T verbose;
  real_T lowmemory;
  real_T tolerance;
  real_T howards;
} struct1_T;
#endif /* typedef_struct1_T */

#ifndef typedef_b_fun_VFI_parfor2
#define typedef_b_fun_VFI_parfor2
typedef struct {
  real_T ReturnMatrix[160160040];
  real_T V0[80040];
  real_T EV[80040];
} b_fun_VFI_parfor2;
#endif /* typedef_b_fun_VFI_parfor2 */

#ifndef c_typedef_fun_VFI_parfor2StackD
#define c_typedef_fun_VFI_parfor2StackD
typedef struct {
  b_fun_VFI_parfor2 f0;
} fun_VFI_parfor2StackData;
#endif /* c_typedef_fun_VFI_parfor2StackD */

/* End of code generation (fun_VFI_parfor2_types.h) */
