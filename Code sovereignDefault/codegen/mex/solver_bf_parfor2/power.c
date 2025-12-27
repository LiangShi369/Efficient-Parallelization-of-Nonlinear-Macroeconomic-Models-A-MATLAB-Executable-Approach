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
#include "solver_bf_parfor2_data.h"
#include "mwmathutil.h"

/* Function Definitions */
void power(const emlrtStack *sp, const real_T a[625], real_T b, real_T y[625])
{
  emlrtStack st;
  int32_T k;
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &i_emlrtRSI;
  if ((!muDoubleScalarIsNaN(b)) && (muDoubleScalarFloor(b) != b)) {
    p = false;
    for (k = 0; k < 625; k++) {
      if (p || (a[k] < 0.0)) {
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
  for (k = 0; k < 625; k++) {
    y[k] = muDoubleScalarPower(a[k], b);
  }
}

/* End of code generation (power.c) */
