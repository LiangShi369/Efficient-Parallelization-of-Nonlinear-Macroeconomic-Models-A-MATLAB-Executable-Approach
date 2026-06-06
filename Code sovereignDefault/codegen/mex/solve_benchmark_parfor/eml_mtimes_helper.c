/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * eml_mtimes_helper.c
 *
 * Code generation for function 'eml_mtimes_helper'
 *
 */

/* Include files */
#include "eml_mtimes_helper.h"
#include "rt_nonfinite.h"
#include "solve_benchmark_parfor_data.h"
#include "solve_benchmark_parfor_emxutil.h"
#include "solve_benchmark_parfor_types.h"

/* Variable Definitions */
static emlrtRTEInfo
    d_emlrtRTEI =
        {
            137,                   /* lineNo */
            31,                    /* colNo */
            "dynamic_size_checks", /* fName */
            "D:\\Matlab_2026a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_"
            "helper.m" /* pName */
};

static emlrtRTEInfo
    e_emlrtRTEI =
        {
            132,                   /* lineNo */
            31,                    /* colNo */
            "dynamic_size_checks", /* fName */
            "D:\\Matlab_2026a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_"
            "helper.m" /* pName */
};

/* Function Definitions */
void b_dynamic_size_checks(const emlrtStack *sp, const emxArray_real_T *a,
                           const emxArray_real_T *b, int32_T innerDimA,
                           int32_T innerDimB)
{
  if (innerDimA != innerDimB) {
    if (((a->size[0] == 1) && (a->size[1] == 1)) ||
        ((b->size[0] == 1) && (b->size[1] == 1))) {
      emlrtErrorWithMessageIdR2018a(
          sp, &e_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(sp, &d_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
}

void binary_expand_op_1(const emlrtStack *sp, emxArray_real_T *in1,
                        const real_T in2_data[], const int32_T *in2_size,
                        const emxArray_real_T *in3, real_T in4)
{
  const real_T *in3_data;
  real_T *in1_data;
  int32_T b_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T in2_idx_0;
  int32_T loop_ub;
  int32_T stride_0_0;
  in3_data = in3->data;
  in2_idx_0 = *in2_size;
  if (in3->size[0] == 1) {
    loop_ub = in2_idx_0;
  } else {
    loop_ub = in3->size[0];
  }
  stride_0_0 = in1->size[0] * in1->size[1];
  in1->size[0] = loop_ub;
  emxEnsureCapacity_real_T(sp, in1, stride_0_0, &s_emlrtRTEI);
  b_loop_ub = in3->size[1];
  stride_0_0 = in1->size[0] * in1->size[1];
  in1->size[1] = b_loop_ub;
  emxEnsureCapacity_real_T(sp, in1, stride_0_0, &s_emlrtRTEI);
  in1_data = in1->data;
  stride_0_0 = (in2_idx_0 != 1);
  in2_idx_0 = (in3->size[0] != 1);
  for (i = 0; i < b_loop_ub; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      in1_data[i1 + in1->size[0] * i] =
          in2_data[i1 * stride_0_0] *
          in3_data[i1 * in2_idx_0 + in3->size[0] * i] * in4;
    }
  }
}

void dynamic_size_checks(const emlrtStack *sp, const emxArray_real_T *a,
                         int32_T b_size, int32_T innerDimA, int32_T innerDimB)
{
  if (innerDimA != innerDimB) {
    if (((a->size[0] == 1) && (a->size[1] == 1)) || (b_size == 1)) {
      emlrtErrorWithMessageIdR2018a(
          sp, &e_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(sp, &d_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
}

/* End of code generation (eml_mtimes_helper.c) */
