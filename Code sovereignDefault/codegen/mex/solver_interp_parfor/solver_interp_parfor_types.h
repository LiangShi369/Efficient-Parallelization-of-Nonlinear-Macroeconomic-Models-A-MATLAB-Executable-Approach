/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * solver_interp_parfor_types.h
 *
 * Code generation for function 'solver_interp_parfor'
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

#ifndef typedef_struct_T
#define typedef_struct_T
typedef struct {
  real_T w[50000];
  real_T b[80];
  real_T evp[50000];
} struct_T;
#endif /* typedef_struct_T */

#ifndef typedef_anonymous_function
#define typedef_anonymous_function
typedef struct {
  struct_T workspace;
} anonymous_function;
#endif /* typedef_anonymous_function */

#ifndef typedef_b_solver_interp_parfor
#define typedef_b_solver_interp_parfor
typedef struct {
  anonymous_function myfun;
} b_solver_interp_parfor;
#endif /* typedef_b_solver_interp_parfor */

#ifndef typedef_solver_interp_parforTLS
#define typedef_solver_interp_parforTLS
typedef struct {
  b_solver_interp_parfor f0;
} solver_interp_parforTLS;
#endif /* typedef_solver_interp_parforTLS */

#ifndef typedef_c_solver_interp_parfor
#define typedef_c_solver_interp_parfor
typedef struct {
  real_T a[390625];
  real_T vp1[50000];
  real_T evp[50000];
  real_T w[50000];
} c_solver_interp_parfor;
#endif /* typedef_c_solver_interp_parfor */

#ifndef c_typedef_solver_interp_parforS
#define c_typedef_solver_interp_parforS
typedef struct {
  c_solver_interp_parfor f0;
} solver_interp_parforStackData;
#endif /* c_typedef_solver_interp_parforS */

/* End of code generation (solver_interp_parfor_types.h) */
