/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_solver_bf_parfor2_mex.c
 *
 * Code generation for function '_coder_solver_bf_parfor2_mex'
 *
 */

/* Include files */
#include "_coder_solver_bf_parfor2_mex.h"
#include "_coder_solver_bf_parfor2_api.h"
#include "rt_nonfinite.h"
#include "solver_bf_parfor2.h"
#include "solver_bf_parfor2_data.h"
#include "solver_bf_parfor2_initialize.h"
#include "solver_bf_parfor2_terminate.h"
#include "solver_bf_parfor2_types.h"
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
  solver_bf_parfor2StackData *c_solver_bf_parfor2StackDataGlo = NULL;
  c_solver_bf_parfor2StackDataGlo = (solver_bf_parfor2StackData *)emlrtMxCalloc(
      (size_t)1, (size_t)1U * sizeof(solver_bf_parfor2StackData));
  mexAtExit(&solver_bf_parfor2_atexit);
  /* Initialize the memory manager. */
  omp_init_lock(&emlrtLockGlobal);
  omp_init_nest_lock(&solver_bf_parfor2_nestLockGlobal);
  /* Module initialization. */
  solver_bf_parfor2_initialize();
  st.tls = emlrtRootTLSGlobal;
  emlrtSetJmpBuf(&st, &emlrtJBEnviron);
  if (setjmp(emlrtJBEnviron) == 0) {
    /* Dispatch the entry-point. */
    solver_bf_parfor2_mexFunction(c_solver_bf_parfor2StackDataGlo, nlhs, plhs,
                                  nrhs, prhs);
    /* Module termination. */
    solver_bf_parfor2_terminate();
    omp_destroy_lock(&emlrtLockGlobal);
    omp_destroy_nest_lock(&solver_bf_parfor2_nestLockGlobal);
  } else {
    omp_destroy_lock(&emlrtLockGlobal);
    omp_destroy_nest_lock(&solver_bf_parfor2_nestLockGlobal);
    emlrtReportParallelRunTimeError(&st);
  }
  emlrtMxFree(c_solver_bf_parfor2StackDataGlo);
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLSR2022a(&emlrtRootTLSGlobal, &emlrtContextGlobal,
                           &emlrtLockerFunction, omp_get_num_procs(), NULL,
                           "windows-1252", true);
  return emlrtRootTLSGlobal;
}

void solver_bf_parfor2_mexFunction(solver_bf_parfor2StackData *SD, int32_T nlhs,
                                   mxArray *plhs[6], int32_T nrhs,
                                   const mxArray *prhs[5])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  const mxArray *outputs[6];
  int32_T i;
  st.tls = emlrtRootTLSGlobal;
  /* Check for proper number of arguments. */
  if (nrhs != 5) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 5, 4,
                        17, "solver_bf_parfor2");
  }
  if (nlhs > 6) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 17,
                        "solver_bf_parfor2");
  }
  /* Call the function. */
  solver_bf_parfor2_api(SD, prhs, nlhs, outputs);
  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    i = 1;
  } else {
    i = nlhs;
  }
  emlrtReturnArrays(i, &plhs[0], &outputs[0]);
}

/* End of code generation (_coder_solver_bf_parfor2_mex.c) */
