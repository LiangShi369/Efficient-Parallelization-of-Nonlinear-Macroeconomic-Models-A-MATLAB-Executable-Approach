/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * solver_divide_initialize.c
 *
 * Code generation for function 'solver_divide_initialize'
 *
 */

/* Include files */
#include "solver_divide_initialize.h"
#include "_coder_solver_divide_mex.h"
#include "rt_nonfinite.h"
#include "solver_divide_data.h"

/* Function Declarations */
static void solver_divide_once(void);

/* Function Definitions */
static void solver_divide_once(void)
{
  mex_InitInfAndNan();
}

void solver_divide_initialize(void)
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
    solver_divide_once();
  }
}

/* End of code generation (solver_divide_initialize.c) */
