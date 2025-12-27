/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * solver_bruteforce_types.h
 *
 * Code generation for function 'solver_bruteforce'
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

#ifndef typedef_b_solver_bruteforce
#define typedef_b_solver_bruteforce
typedef struct {
  real_T a[390625];
  real_T evp[250000];
  real_T w[250000];
  real_T vp1[250000];
} b_solver_bruteforce;
#endif /* typedef_b_solver_bruteforce */

#ifndef typedef_solver_bruteforceStackData
#define typedef_solver_bruteforceStackData
typedef struct {
  b_solver_bruteforce f0;
} solver_bruteforceStackData;
#endif /* typedef_solver_bruteforceStackData */

/* End of code generation (solver_bruteforce_types.h) */
