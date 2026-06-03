/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_solve_benchmark_parfor_mex.c
 *
 * Code generation for function '_coder_solve_benchmark_parfor_mex'
 *
 */

/* Include files */
#include "_coder_solve_benchmark_parfor_mex.h"
#include "_coder_solve_benchmark_parfor_api.h"
#include "rt_nonfinite.h"
#include "solve_benchmark_parfor.h"
#include "solve_benchmark_parfor_data.h"
#include "solve_benchmark_parfor_initialize.h"
#include "solve_benchmark_parfor_terminate.h"
#include "solve_benchmark_parfor_types.h"
#include "omp.h"

/* Function Definitions */
void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  static jmp_buf emlrtJBEnviron;
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  solve_benchmark_parforStackData *c_solve_benchmark_parforStackDa = NULL;
  c_solve_benchmark_parforStackDa =
      (solve_benchmark_parforStackData *)emlrtMxCalloc(
          (size_t)1, (size_t)1U * sizeof(solve_benchmark_parforStackData));
  mexAtExit(&solve_benchmark_parfor_atexit);
  /* Initialize the memory manager. */
  omp_init_lock(&emlrtLockGlobal);
  omp_init_nest_lock(&solve_benchmark_parfor_nestLockGlobal);
  solve_benchmark_parfor_initialize();
  st.tls = emlrtRootTLSGlobal;
  emlrtSetJmpBuf(&st, &emlrtJBEnviron);
  if (setjmp(emlrtJBEnviron) == 0) {
    solve_benchmark_parfor_mexFunction(c_solve_benchmark_parforStackDa, nlhs,
                                       plhs, nrhs, prhs);
    solve_benchmark_parfor_terminate();
    omp_destroy_lock(&emlrtLockGlobal);
    omp_destroy_nest_lock(&solve_benchmark_parfor_nestLockGlobal);
  } else {
    omp_destroy_lock(&emlrtLockGlobal);
    omp_destroy_nest_lock(&solve_benchmark_parfor_nestLockGlobal);
    emlrtReportParallelRunTimeError(&st);
  }
  emlrtMxFree(c_solve_benchmark_parforStackDa);
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLSR2022a(&emlrtRootTLSGlobal, &emlrtContextGlobal,
                           &emlrtLockerFunction, omp_get_num_procs(), NULL,
                           "windows-1252", true);
  return emlrtRootTLSGlobal;
}

void solve_benchmark_parfor_mexFunction(solve_benchmark_parforStackData *SD,
                                        int32_T nlhs, mxArray *plhs[9],
                                        int32_T nrhs, const mxArray *prhs[5])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  const mxArray *outputs[9];
  int32_T i;
  st.tls = emlrtRootTLSGlobal;
  /* Check for proper number of arguments. */
  if (nrhs != 5) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 5, 4,
                        22, "solve_benchmark_parfor");
  }
  if (nlhs > 9) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 22,
                        "solve_benchmark_parfor");
  }
  /* Call the function. */
  solve_benchmark_parfor_api(SD, prhs, nlhs, outputs);
  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    i = 1;
  } else {
    i = nlhs;
  }
  emlrtReturnArrays(i, &plhs[0], &outputs[0]);
}

/* End of code generation (_coder_solve_benchmark_parfor_mex.c) */
