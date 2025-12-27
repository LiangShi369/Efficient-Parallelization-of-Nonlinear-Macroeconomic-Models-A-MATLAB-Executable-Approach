/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * solver_bf_parfor2_initialize.c
 *
 * Code generation for function 'solver_bf_parfor2_initialize'
 *
 */

/* Include files */
#include "solver_bf_parfor2_initialize.h"
#include "_coder_solver_bf_parfor2_mex.h"
#include "rt_nonfinite.h"
#include "solver_bf_parfor2_data.h"

/* Function Declarations */
static void solver_bf_parfor2_once(void);

/* Function Definitions */
static void solver_bf_parfor2_once(void)
{
  mex_InitInfAndNan();
}

void solver_bf_parfor2_initialize(void)
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2022b(&st);
  emlrtClearAllocCountR2012b(&st, false, 0U, NULL);
  emlrtEnterRtStackR2012b(&st);
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    solver_bf_parfor2_once();
  }
}

/* End of code generation (solver_bf_parfor2_initialize.c) */
