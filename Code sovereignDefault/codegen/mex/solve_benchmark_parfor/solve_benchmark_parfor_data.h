/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * solve_benchmark_parfor_data.h
 *
 * Code generation for function 'solve_benchmark_parfor_data'
 *
 */

#pragma once

/* Include files */
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include "omp.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern const volatile char_T *emlrtBreakCheckR2012bFlagVar;
extern emlrtContext emlrtContextGlobal;
extern emlrtRSInfo u_emlrtRSI;
extern emlrtRSInfo w_emlrtRSI;
extern emlrtRSInfo x_emlrtRSI;
extern emlrtRSInfo y_emlrtRSI;
extern omp_lock_t emlrtLockGlobal;
extern omp_nest_lock_t solve_benchmark_parfor_nestLockGlobal;
extern emlrtRTEInfo c_emlrtRTEI;
extern emlrtRTEInfo s_emlrtRTEI;
extern const char_T cv[26];

/* End of code generation (solve_benchmark_parfor_data.h) */
