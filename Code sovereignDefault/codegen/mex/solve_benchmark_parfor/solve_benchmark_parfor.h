/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * solve_benchmark_parfor.h
 *
 * Code generation for function 'solve_benchmark_parfor'
 *
 */

#pragma once

/* Include files */
#include "rtwtypes.h"
#include "solve_benchmark_parfor_types.h"
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

void solve_benchmark_parfor(const emlrtStack *sp, const real_T z_data[],
                            const int32_T z_size[1], const real_T m_data[],
                            const int32_T m_size[1], const real_T b_data[],
                            const int32_T b_size[1], const emxArray_real_T *pdf,
                            const real_T para[8], emxArray_real_T *vp,
                            real_T vd_data[], int32_T vd_size[1],
                            emxArray_real_T *q, emxArray_real_T *bp,
                            real_T bpr_data[], int32_T bpr_size[1],
                            emxArray_boolean_T *b_default, emxArray_real_T *rr,
                            real_T *totaltime, real_T *avgtime);

/* End of code generation (solve_benchmark_parfor.h) */
