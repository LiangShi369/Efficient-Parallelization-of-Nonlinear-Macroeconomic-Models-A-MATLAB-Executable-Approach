/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * solve_benchmark_parfor_mexutil.c
 *
 * Code generation for function 'solve_benchmark_parfor_mexutil'
 *
 */

/* Include files */
#include "solve_benchmark_parfor_mexutil.h"
#include "rt_nonfinite.h"

/* Function Definitions */
const mxArray *b_emlrt_marshallOut(const real_T u)
{
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateDoubleScalar(u);
  emlrtAssign(&y, m);
  return y;
}

/* End of code generation (solve_benchmark_parfor_mexutil.c) */
