/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * repmat.c
 *
 * Code generation for function 'repmat'
 *
 */

/* Include files */
#include "repmat.h"
#include "rt_nonfinite.h"
#include "solve_benchmark_emxutil.h"
#include "solve_benchmark_types.h"

/* Variable Definitions */
static emlrtRTEInfo jb_emlrtRTEI = {
    82,                                                            /* lineNo */
    28,                                                            /* colNo */
    "repmat",                                                      /* fName */
    "D:\\Matlab_2026a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m" /* pName */
};

/* Function Definitions */
void repmat(const emlrtStack *sp, const real_T a_data[], int32_T a_size,
            real_T varargin_2, emxArray_real_T *b)
{
  real_T *b_data;
  int32_T i;
  int32_T ibtile;
  int32_T jtilecol;
  int32_T k;
  ibtile = b->size[0] * b->size[1];
  b->size[0] = a_size;
  i = (int32_T)varargin_2;
  b->size[1] = (int32_T)varargin_2;
  emxEnsureCapacity_real_T(sp, b, ibtile, &jb_emlrtRTEI);
  b_data = b->data;
  for (jtilecol = 0; jtilecol < i; jtilecol++) {
    ibtile = jtilecol * a_size;
    for (k = 0; k < a_size; k++) {
      b_data[ibtile + k] = a_data[k];
    }
  }
}

/* End of code generation (repmat.c) */
