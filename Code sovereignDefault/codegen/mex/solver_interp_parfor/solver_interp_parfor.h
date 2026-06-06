/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * solver_interp_parfor.h
 *
 * Code generation for function 'solver_interp_parfor'
 *
 */

#pragma once

/* Include files */
#include "rtwtypes.h"
#include "solver_interp_parfor_types.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
emlrtCTX emlrtGetRootTLSGlobal(void);

void emlrtLockerFunction(EmlrtLockeeFunction aLockee, emlrtConstCTX aTLS,
                         void *aData);

void solver_interp_parfor(solver_interp_parforStackData *SD,
                          const emlrtStack *sp, const real_T b[80],
                          const real_T z[625], const real_T m[625],
                          const real_T pdf[390625], const struct0_T *para,
                          real_T q[50000], real_T bp[50000], real_T vp[50000],
                          real_T def[50000], real_T *totaltime,
                          real_T *avgtime);

/* End of code generation (solver_interp_parfor.h) */
