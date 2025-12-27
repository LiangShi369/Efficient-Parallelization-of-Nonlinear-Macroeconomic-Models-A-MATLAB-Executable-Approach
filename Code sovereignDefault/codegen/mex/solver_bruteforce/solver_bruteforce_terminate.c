/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * solver_bruteforce_terminate.c
 *
 * Code generation for function 'solver_bruteforce_terminate'
 *
 */

/* Include files */
#include "solver_bruteforce_terminate.h"
#include "_coder_solver_bruteforce_mex.h"
#include "rt_nonfinite.h"
#include "solver_bruteforce_data.h"

/* Function Definitions */
void solver_bruteforce_atexit(void)
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

void solver_bruteforce_terminate(void)
{
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (solver_bruteforce_terminate.c) */
