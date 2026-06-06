/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * abs.c
 *
 * Code generation for function 'abs'
 *
 */

/* Include files */
#include "abs.h"
#include "rt_nonfinite.h"
#include "solve_benchmark_emxutil.h"
#include "solve_benchmark_types.h"
#include "mwmathutil.h"
#include "omp.h"

/* Variable Definitions */
static emlrtRTEInfo ib_emlrtRTEI = {
    30,                    /* lineNo */
    21,                    /* colNo */
    "applyScalarFunction", /* fName */
    "D:\\Matlab_2026a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\applyScalarFunction.m" /* pName */
};

/* Function Definitions */
void b_abs(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *y)
{
  jmp_buf *volatile emlrtJBStack;
  const real_T *x_data;
  real_T *y_data;
  int32_T b_abs_numThreads;
  int32_T i;
  int32_T k;
  int32_T nx;
  x_data = x->data;
  nx = x->size[0];
  i = y->size[0];
  y->size[0] = x->size[0];
  emxEnsureCapacity_real_T(sp, y, i, &ib_emlrtRTEI);
  y_data = y->data;
  if (x->size[0] < 2000) {
    for (k = 0; k < nx; k++) {
      y_data[k] = muDoubleScalarAbs(x_data[k]);
    }
  } else {
    emlrtEnterParallelRegion((emlrtCTX)sp, omp_in_parallel());
    emlrtPushJmpBuf((emlrtCTX)sp, &emlrtJBStack);
    b_abs_numThreads = emlrtAllocRegionTLSs(
        sp->tls, omp_in_parallel(), omp_get_max_threads(), omp_get_num_procs());
#pragma omp parallel for num_threads(b_abs_numThreads)

    for (k = 0; k < nx; k++) {
      y_data[k] = muDoubleScalarAbs(x_data[k]);
    }
    emlrtPopJmpBuf((emlrtCTX)sp, &emlrtJBStack);
    emlrtExitParallelRegion((emlrtCTX)sp, omp_in_parallel());
  }
}

void c_abs(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *y)
{
  jmp_buf *volatile emlrtJBStack;
  const real_T *x_data;
  real_T *y_data;
  int32_T c_abs_numThreads;
  int32_T i;
  int32_T k;
  int32_T nx;
  x_data = x->data;
  nx = x->size[0] * x->size[1];
  i = y->size[0] * y->size[1];
  y->size[0] = (int16_T)x->size[0];
  y->size[1] = (int16_T)x->size[1];
  emxEnsureCapacity_real_T(sp, y, i, &ib_emlrtRTEI);
  y_data = y->data;
  if (nx < 2000) {
    for (k = 0; k < nx; k++) {
      y_data[k] = muDoubleScalarAbs(x_data[k]);
    }
  } else {
    emlrtEnterParallelRegion((emlrtCTX)sp, omp_in_parallel());
    emlrtPushJmpBuf((emlrtCTX)sp, &emlrtJBStack);
    c_abs_numThreads = emlrtAllocRegionTLSs(
        sp->tls, omp_in_parallel(), omp_get_max_threads(), omp_get_num_procs());
#pragma omp parallel for num_threads(c_abs_numThreads)

    for (k = 0; k < nx; k++) {
      y_data[k] = muDoubleScalarAbs(x_data[k]);
    }
    emlrtPopJmpBuf((emlrtCTX)sp, &emlrtJBStack);
    emlrtExitParallelRegion((emlrtCTX)sp, omp_in_parallel());
  }
}

/* End of code generation (abs.c) */
