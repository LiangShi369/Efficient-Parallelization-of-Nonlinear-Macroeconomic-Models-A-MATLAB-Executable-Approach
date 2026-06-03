/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * rbc_solver_interp_parfor_types.h
 *
 * Code generation for function 'rbc_solver_interp_parfor'
 *
 */

#pragma once

/* Include files */
#include "rtwtypes.h"
#include "emlrt.h"

/* Type Definitions */
#ifndef typedef_struct_T
#define typedef_struct_T
typedef struct {
  real_T k[500];
  real_T ev[100500];
} struct_T;
#endif /* typedef_struct_T */

#ifndef typedef_anonymous_function
#define typedef_anonymous_function
typedef struct {
  struct_T workspace;
} anonymous_function;
#endif /* typedef_anonymous_function */

#ifndef c_typedef_b_rbc_solver_interp_p
#define c_typedef_b_rbc_solver_interp_p
typedef struct {
  anonymous_function myfun;
} b_rbc_solver_interp_parfor;
#endif /* c_typedef_b_rbc_solver_interp_p */

#ifndef c_typedef_rbc_solver_interp_par
#define c_typedef_rbc_solver_interp_par
typedef struct {
  b_rbc_solver_interp_parfor f0;
} rbc_solver_interp_parforTLS;
#endif /* c_typedef_rbc_solver_interp_par */

#ifndef c_typedef_c_rbc_solver_interp_p
#define c_typedef_c_rbc_solver_interp_p
typedef struct {
  real_T v0[100500];
  real_T ev[100500];
} c_rbc_solver_interp_parfor;
#endif /* c_typedef_c_rbc_solver_interp_p */

#ifndef d_typedef_c_rbc_solver_interp_p
#define d_typedef_c_rbc_solver_interp_p
typedef struct {
  c_rbc_solver_interp_parfor f0;
} c_rbc_solver_interp_parforStack;
#endif /* d_typedef_c_rbc_solver_interp_p */

/* End of code generation (rbc_solver_interp_parfor_types.h) */
