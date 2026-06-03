/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * rbc_solver_interp_parfor_mexutil.c
 *
 * Code generation for function 'rbc_solver_interp_parfor_mexutil'
 *
 */

/* Include files */
#include "rbc_solver_interp_parfor_mexutil.h"
#include "rbc_solver_interp_parfor_types.h"
#include "rt_nonfinite.h"
#include "omp.h"

/* Variable Definitions */
static rbc_solver_interp_parforTLS *c_rbc_solver_interp_parforTLSGl;
#pragma omp threadprivate(c_rbc_solver_interp_parforTLSGl)

/* Function Definitions */
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
    free(c_rbc_solver_interp_parforTLSGl);
  }
  emlrtPopJmpBuf((emlrtCTX)sp, &emlrtJBStack);
  emlrtExitParallelRegion((emlrtCTX)sp, omp_in_parallel());
}

rbc_solver_interp_parforTLS *emlrtGetThreadStackData(void)
{
  return c_rbc_solver_interp_parforTLSGl;
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
    c_rbc_solver_interp_parforTLSGl = (rbc_solver_interp_parforTLS *)malloc(
        (size_t)1U * sizeof(rbc_solver_interp_parforTLS));
  }
  emlrtPopJmpBuf((emlrtCTX)sp, &emlrtJBStack);
  emlrtExitParallelRegion((emlrtCTX)sp, omp_in_parallel());
}

/* End of code generation (rbc_solver_interp_parfor_mexutil.c) */
