/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * exp.c
 *
 * Code generation for function 'exp'
 *
 */

/* Include files */
#include "exp.h"
#include "rt_nonfinite.h"
#include "solve_benchmark_types.h"
#include "mwmathutil.h"
#include "omp.h"

/* Function Definitions */
void b_exp(real_T x_data[], const int32_T *x_size)
{
  int32_T i;
  int32_T k;
  i = *x_size;
  for (k = 0; k < i; k++) {
    x_data[k] = muDoubleScalarExp(x_data[k]);
  }
}

void c_exp(const emlrtStack *sp, emxArray_real_T *x)
{
  jmp_buf *volatile emlrtJBStack;
  real_T *x_data;
  int32_T c_exp_numThreads;
  int32_T k;
  int32_T nx;
  x_data = x->data;
  nx = x->size[0] * x->size[1];
  if (nx < 2000) {
    for (k = 0; k < nx; k++) {
      x_data[k] = muDoubleScalarExp(x_data[k]);
    }
  } else {
    emlrtEnterParallelRegion((emlrtCTX)sp, omp_in_parallel());
    emlrtPushJmpBuf((emlrtCTX)sp, &emlrtJBStack);
    c_exp_numThreads = emlrtAllocRegionTLSs(
        sp->tls, omp_in_parallel(), omp_get_max_threads(), omp_get_num_procs());
#pragma omp parallel for num_threads(c_exp_numThreads)

    for (k = 0; k < nx; k++) {
      x_data[k] = muDoubleScalarExp(x_data[k]);
    }
    emlrtPopJmpBuf((emlrtCTX)sp, &emlrtJBStack);
    emlrtExitParallelRegion((emlrtCTX)sp, omp_in_parallel());
  }
}

/* End of code generation (exp.c) */
