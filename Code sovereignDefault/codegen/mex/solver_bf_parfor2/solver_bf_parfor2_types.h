/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * solver_bf_parfor2_types.h
 *
 * Code generation for function 'solver_bf_parfor2'
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
  real_T phi0;
  real_T rstar;
  real_T theta;
  real_T sigg;
  real_T betta;
} struct0_T;
#endif /* typedef_struct0_T */

#ifndef typedef_b_solver_bf_parfor2
#define typedef_b_solver_bf_parfor2
typedef struct {
  real_T a[390625];
  real_T evp[125000];
  real_T w[125000];
  real_T vp1[125000];
} b_solver_bf_parfor2;
#endif /* typedef_b_solver_bf_parfor2 */

#ifndef typedef_solver_bf_parfor2StackData
#define typedef_solver_bf_parfor2StackData
typedef struct {
  b_solver_bf_parfor2 f0;
} solver_bf_parfor2StackData;
#endif /* typedef_solver_bf_parfor2StackData */

/* End of code generation (solver_bf_parfor2_types.h) */
