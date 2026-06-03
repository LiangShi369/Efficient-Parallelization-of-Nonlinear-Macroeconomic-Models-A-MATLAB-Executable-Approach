/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * rbc_solver_interp_parfor.h
 *
 * Code generation for function 'rbc_solver_interp_parfor'
 *
 */

#pragma once

/* Include files */
#include "rbc_solver_interp_parfor_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
real_T c_rbc_solver_interp_parfor_anon(real_T wealth, const real_T k[500],
                                       const real_T ev[100500], real_T iz,
                                       real_T x);

emlrtCTX emlrtGetRootTLSGlobal(void);

void emlrtLockerFunction(EmlrtLockeeFunction aLockee, emlrtConstCTX aTLS,
                         void *aData);

void rbc_solver_interp_parfor(c_rbc_solver_interp_parforStack *SD,
                              const emlrtStack *sp, const real_T c0[100500],
                              const real_T k[500], const real_T pdfz[40401],
                              real_T v[100500], real_T pol_kp[100500]);

/* End of code generation (rbc_solver_interp_parfor.h) */
