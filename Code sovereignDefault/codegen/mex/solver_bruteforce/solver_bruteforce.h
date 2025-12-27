/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * solver_bruteforce.h
 *
 * Code generation for function 'solver_bruteforce'
 *
 */

#pragma once

/* Include files */
#include "rtwtypes.h"
#include "solver_bruteforce_types.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void solver_bruteforce(solver_bruteforceStackData *SD, const emlrtStack *sp,
                       const real_T b[400], const real_T z[625],
                       const real_T m[625], const real_T pdf[390625],
                       const struct0_T *para, real_T q[250000],
                       real_T bp[250000], real_T vp[250000],
                       boolean_T def[250000], real_T *totaltime,
                       real_T *avgtime);

/* End of code generation (solver_bruteforce.h) */
