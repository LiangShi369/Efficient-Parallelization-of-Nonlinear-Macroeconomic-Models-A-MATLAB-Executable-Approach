/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * solve_benchmark_initialize.c
 *
 * Code generation for function 'solve_benchmark_initialize'
 *
 */

/* Include files */
#include "solve_benchmark_initialize.h"
#include "_coder_solve_benchmark_mex.h"
#include "rt_nonfinite.h"
#include "solve_benchmark_data.h"

/* Function Declarations */
static void solve_benchmark_once(void);

/* Function Definitions */
static void solve_benchmark_once(void)
{
  mex_InitInfAndNan();
}

void solve_benchmark_initialize(void)
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
    solve_benchmark_once();
  }
}

/* End of code generation (solve_benchmark_initialize.c) */
