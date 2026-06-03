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
#include "omp.h"
#include <string.h>

/* Function Definitions */
void repmat(const emlrtStack *sp, const real_T a[625], real_T b[250000])
{
  jmp_buf *volatile emlrtJBStack;
  int32_T ibcol;
  int32_T jtilecol;
  int32_T repmat_numThreads;
  emlrtEnterParallelRegion((emlrtCTX)sp, omp_in_parallel());
  emlrtPushJmpBuf((emlrtCTX)sp, &emlrtJBStack);
  repmat_numThreads = emlrtAllocRegionTLSs(
      sp->tls, omp_in_parallel(), omp_get_max_threads(), omp_get_num_procs());
#pragma omp parallel for num_threads(repmat_numThreads) private(ibcol)

  for (jtilecol = 0; jtilecol < 400; jtilecol++) {
    ibcol = jtilecol * 625;
    memcpy(&b[ibcol], &a[0], 625U * sizeof(real_T));
  }
  emlrtPopJmpBuf((emlrtCTX)sp, &emlrtJBStack);
  emlrtExitParallelRegion((emlrtCTX)sp, omp_in_parallel());
}

/* End of code generation (repmat.c) */
