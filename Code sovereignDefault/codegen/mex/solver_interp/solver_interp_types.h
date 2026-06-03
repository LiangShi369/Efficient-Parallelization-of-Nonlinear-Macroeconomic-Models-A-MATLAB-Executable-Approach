/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * solver_interp_types.h
 *
 * Code generation for function 'solver_interp'
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

#ifndef typedef_b_solver_interp
#define typedef_b_solver_interp
typedef struct {
  real_T a[390625];
  real_T vp1[50000];
  real_T evp[50000];
  real_T w[50000];
} b_solver_interp;
#endif /* typedef_b_solver_interp */

#ifndef typedef_solver_interpStackData
#define typedef_solver_interpStackData
typedef struct {
  b_solver_interp f0;
} solver_interpStackData;
#endif /* typedef_solver_interpStackData */

/* End of code generation (solver_interp_types.h) */
