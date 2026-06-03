/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * power.c
 *
 * Code generation for function 'power'
 *
 */

/* Include files */
#include "power.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo h_emlrtRSI = {
    71,                                                         /* lineNo */
    "power",                                                    /* fcnName */
    "D:\\Matlab_2026a\\toolbox\\eml\\lib\\matlab\\ops\\power.m" /* pathName */
};

static emlrtRTEInfo emlrtRTEI = {
    82,                                                         /* lineNo */
    5,                                                          /* colNo */
    "fltpower",                                                 /* fName */
    "D:\\Matlab_2026a\\toolbox\\eml\\lib\\matlab\\ops\\power.m" /* pName */
};

/* Function Definitions */
void power(const emlrtStack *sp, const real_T a[625], real_T b, real_T y[625])
{
  emlrtStack st;
  int32_T i;
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &h_emlrtRSI;
  if (!muDoubleScalarIsNaN(b) && (muDoubleScalarFloor(b) != b)) {
    p = false;
    for (i = 0; i < 625; i++) {
      if (p || (a[i] < 0.0)) {
        p = true;
      }
    }
  } else {
    p = false;
  }
  if (p) {
    emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI,
                                  "Coder:toolbox:power_domainError",
                                  "Coder:toolbox:power_domainError", 0);
  }
  for (i = 0; i < 625; i++) {
    y[i] = muDoubleScalarPower(a[i], b);
  }
}

/* End of code generation (power.c) */
