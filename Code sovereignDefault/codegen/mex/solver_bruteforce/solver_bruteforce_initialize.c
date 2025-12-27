/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * solver_bruteforce_initialize.c
 *
 * Code generation for function 'solver_bruteforce_initialize'
 *
 */

/* Include files */
#include "solver_bruteforce_initialize.h"
#include "_coder_solver_bruteforce_mex.h"
#include "rt_nonfinite.h"
#include "solver_bruteforce_data.h"

/* Function Declarations */
static void solver_bruteforce_once(void);

/* Function Definitions */
static void solver_bruteforce_once(void)
{
  mex_InitInfAndNan();
}

void solver_bruteforce_initialize(void)
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
    solver_bruteforce_once();
  }
}

/* End of code generation (solver_bruteforce_initialize.c) */
