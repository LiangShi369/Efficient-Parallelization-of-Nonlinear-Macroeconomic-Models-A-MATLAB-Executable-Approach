/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * solver_interp_parfor_mexutil.c
 *
 * Code generation for function 'solver_interp_parfor_mexutil'
 *
 */

/* Include files */
#include "solver_interp_parfor_mexutil.h"
#include "rt_nonfinite.h"
#include "solver_interp_parfor_types.h"
#include "omp.h"

/* Variable Definitions */
static solver_interp_parforTLS *solver_interp_parforTLSGlobal;
#pragma omp threadprivate(solver_interp_parforTLSGlobal)

/* Function Definitions */
real_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                          const emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = k_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

void emlrtFreeThreadStackData(const emlrtStack *sp)
{
  jmp_buf *volatile emlrtJBStack;
  int32_T b;
  int32_T emlrtFreeThreadStackData_numThreads;
  int32_T i;
  b = omp_get_max_threads();
  emlrtEnterParallelRegion((emlrtCTX)sp, omp_in_parallel());
  emlrtPushJmpBuf((emlrtCTX)sp, &emlrtJBStack);
  emlrtFreeThreadStackData_numThreads = emlrtAllocRegionTLSs(
      sp->tls, omp_in_parallel(), omp_get_max_threads(), omp_get_num_procs());
#pragma omp parallel for schedule(static)                                      \
    num_threads(emlrtFreeThreadStackData_numThreads)

  for (i = 1; i <= b; i++) {
    free(solver_interp_parforTLSGlobal);
  }
  emlrtPopJmpBuf((emlrtCTX)sp, &emlrtJBStack);
  emlrtExitParallelRegion((emlrtCTX)sp, omp_in_parallel());
}

solver_interp_parforTLS *emlrtGetThreadStackData(void)
{
  return solver_interp_parforTLSGlobal;
}

void emlrtInitThreadStackData(const emlrtStack *sp)
{
  jmp_buf *volatile emlrtJBStack;
  int32_T b;
  int32_T emlrtInitThreadStackData_numThreads;
  int32_T i;
  b = omp_get_max_threads();
  emlrtEnterParallelRegion((emlrtCTX)sp, omp_in_parallel());
  emlrtPushJmpBuf((emlrtCTX)sp, &emlrtJBStack);
  emlrtInitThreadStackData_numThreads = emlrtAllocRegionTLSs(
      sp->tls, omp_in_parallel(), omp_get_max_threads(), omp_get_num_procs());
#pragma omp parallel for schedule(static)                                      \
    num_threads(emlrtInitThreadStackData_numThreads)

  for (i = 1; i <= b; i++) {
    solver_interp_parforTLSGlobal = (solver_interp_parforTLS *)malloc(
        (size_t)1U * sizeof(solver_interp_parforTLS));
  }
  emlrtPopJmpBuf((emlrtCTX)sp, &emlrtJBStack);
  emlrtExitParallelRegion((emlrtCTX)sp, omp_in_parallel());
}

const mxArray *emlrt_marshallOut(const real_T u)
{
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateDoubleScalar(u);
  emlrtAssign(&y, m);
  return y;
}

real_T k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                          const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims = 0;
  real_T ret;
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 0U,
                          (const void *)&dims);
  ret = *(real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

/* End of code generation (solver_interp_parfor_mexutil.c) */
