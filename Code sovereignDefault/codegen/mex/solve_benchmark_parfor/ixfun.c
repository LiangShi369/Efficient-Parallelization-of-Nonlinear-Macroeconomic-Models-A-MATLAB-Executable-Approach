/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * ixfun.c
 *
 * Code generation for function 'ixfun'
 *
 */

/* Include files */
#include "ixfun.h"
#include "rt_nonfinite.h"
#include "solve_benchmark_parfor_emxutil.h"
#include "solve_benchmark_parfor_types.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRTEInfo g_emlrtRTEI = {
    236,          /* lineNo */
    23,           /* colNo */
    "expand_max", /* fName */
    "D:\\Matlab_2026a\\toolbox\\eml\\eml\\+coder\\+internal\\ixfun.m" /* pName
                                                                       */
};

static emlrtRTEInfo kb_emlrtRTEI = {
    245,     /* lineNo */
    20,      /* colNo */
    "ixfun", /* fName */
    "D:\\Matlab_2026a\\toolbox\\eml\\eml\\+coder\\+internal\\ixfun.m" /* pName
                                                                       */
};

/* Function Definitions */
void expand_max(const emlrtStack *sp, const emxArray_real_T *a,
                const emxArray_real_T *b, emxArray_real_T *c)
{
  const real_T *a_data;
  const real_T *b_data;
  real_T *c_data;
  int32_T b_k;
  int32_T k;
  int32_T sak;
  int32_T sbk;
  int16_T csz_idx_0;
  int16_T csz_idx_1;
  boolean_T dimagree;
  b_data = b->data;
  a_data = a->data;
  dimagree = true;
  sak = a->size[0];
  sbk = b->size[0];
  if (b->size[0] == 1) {
    csz_idx_0 = (int16_T)a->size[0];
  } else if (a->size[0] == 1) {
    csz_idx_0 = (int16_T)b->size[0];
  } else {
    csz_idx_0 = (int16_T)muIntScalarMin_sint32(sak, sbk);
    dimagree = (a->size[0] == b->size[0]);
  }
  sak = a->size[1];
  sbk = b->size[1];
  if (b->size[1] == 1) {
    csz_idx_1 = (int16_T)a->size[1];
  } else if (a->size[1] == 1) {
    csz_idx_1 = (int16_T)b->size[1];
  } else {
    csz_idx_1 = (int16_T)muIntScalarMin_sint32(sak, sbk);
    if (!dimagree || (a->size[1] != b->size[1])) {
      dimagree = false;
    }
  }
  if (!dimagree) {
    emlrtErrorWithMessageIdR2018a(sp, &g_emlrtRTEI,
                                  "MATLAB:sizeDimensionsMustMatch",
                                  "MATLAB:sizeDimensionsMustMatch", 0);
  }
  sak = c->size[0] * c->size[1];
  c->size[0] = csz_idx_0;
  c->size[1] = csz_idx_1;
  emxEnsureCapacity_real_T(sp, c, sak, &kb_emlrtRTEI);
  c_data = c->data;
  if ((csz_idx_0 != 0) && (csz_idx_1 != 0)) {
    boolean_T b1;
    boolean_T b2;
    boolean_T b_b;
    dimagree = (a->size[1] != 1);
    b_b = (b->size[1] != 1);
    sak = csz_idx_1;
    b1 = (a->size[0] != 1);
    b2 = (b->size[0] != 1);
    for (k = 0; k < sak; k++) {
      int32_T i;
      int32_T varargin_3;
      sbk = dimagree * k;
      varargin_3 = b_b * k;
      i = c->size[0];
      for (b_k = 0; b_k < i; b_k++) {
        c_data[b_k + c->size[0] * k] =
            muDoubleScalarMax(a_data[b1 * b_k + a->size[0] * sbk],
                              b_data[b2 * b_k + b->size[0] * varargin_3]);
      }
    }
  }
}

/* End of code generation (ixfun.c) */
