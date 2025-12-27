/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * solver_bf_parfor_terminate.c
 *
 * Code generation for function 'solver_bf_parfor_terminate'
 *
 */

/* Include files */
#include "solver_bf_parfor_terminate.h"
#include "_coder_solver_bf_parfor_mex.h"
#include "rt_nonfinite.h"
#include "solver_bf_parfor_data.h"

/* Function Definitions */
void solver_bf_parfor_atexit(void)
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
  emlrtExitTimeCleanup(&emlrtContextGlobal);
}

void solver_bf_parfor_terminate(void)
{
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (solver_bf_parfor_terminate.c) */
