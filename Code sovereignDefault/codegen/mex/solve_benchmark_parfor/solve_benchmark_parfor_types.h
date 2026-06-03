/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * solve_benchmark_parfor_types.h
 *
 * Code generation for function 'solve_benchmark_parfor'
 *
 */

#pragma once

/* Include files */
#include "rtwtypes.h"
#include "emlrt.h"

/* Type Definitions */
#ifndef c_typedef_b_solve_benchmark_par
#define c_typedef_b_solve_benchmark_par
typedef struct {
  real_T evp_tmp[390625];
  real_T V[250000];
  real_T vpnew[250000];
  real_T evp[250000];
  real_T qnew[250000];
} b_solve_benchmark_parfor;
#endif /* c_typedef_b_solve_benchmark_par */

#ifndef c_typedef_solve_benchmark_parfo
#define c_typedef_solve_benchmark_parfo
typedef struct {
  b_solve_benchmark_parfor f0;
} solve_benchmark_parforStackData;
#endif /* c_typedef_solve_benchmark_parfo */

/* End of code generation (solve_benchmark_parfor_types.h) */
