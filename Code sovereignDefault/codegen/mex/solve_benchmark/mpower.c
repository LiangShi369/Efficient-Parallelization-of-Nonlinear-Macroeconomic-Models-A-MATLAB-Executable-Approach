/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * mpower.c
 *
 * Code generation for function 'mpower'
 *
 */

/* Include files */
#include "mpower.h"
#include "rt_nonfinite.h"
#include "solve_benchmark_data.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo lb_emlrtRSI = {
    44,       /* lineNo */
    "mpower", /* fcnName */
    "D:\\Matlab_2026a\\toolbox\\eml\\lib\\matlab\\matfun\\mpower.m" /* pathName
                                                                     */
};

static emlrtRTEInfo f_emlrtRTEI = {
    82,                                                         /* lineNo */
    5,                                                          /* colNo */
    "fltpower",                                                 /* fName */
    "D:\\Matlab_2026a\\toolbox\\eml\\lib\\matlab\\ops\\power.m" /* pName */
};

/* Function Definitions */
real_T mpower(const emlrtStack *sp, real_T a, real_T b)
{
  emlrtStack b_st;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  st.site = &lb_emlrtRSI;
  b_st.site = &u_emlrtRSI;
  if ((a < 0.0) && !muDoubleScalarIsNaN(b) && (muDoubleScalarFloor(b) != b)) {
    emlrtErrorWithMessageIdR2018a(&b_st, &f_emlrtRTEI,
                                  "Coder:toolbox:power_domainError",
                                  "Coder:toolbox:power_domainError", 0);
  }
  return muDoubleScalarPower(a, b);
}

/* End of code generation (mpower.c) */
