/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_solver_bf_parfor_mex.c
 *
 * Code generation for function '_coder_solver_bf_parfor_mex'
 *
 */

/* Include files */
#include "_coder_solver_bf_parfor_mex.h"
#include "_coder_solver_bf_parfor_api.h"
#include "rt_nonfinite.h"
#include "solver_bf_parfor.h"
#include "solver_bf_parfor_data.h"
#include "solver_bf_parfor_initialize.h"
#include "solver_bf_parfor_terminate.h"
#include "solver_bf_parfor_types.h"
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
  solver_bf_parforStackData *solver_bf_parforStackDataGlobal = NULL;
  solver_bf_parforStackDataGlobal = (solver_bf_parforStackData *)emlrtMxCalloc(
      (size_t)1, (size_t)1U * sizeof(solver_bf_parforStackData));
  mexAtExit(&solver_bf_parfor_atexit);
  /* Initialize the memory manager. */
  omp_init_lock(&emlrtLockGlobal);
  omp_init_nest_lock(&solver_bf_parfor_nestLockGlobal);
  /* Module initialization. */
  solver_bf_parfor_initialize();
  st.tls = emlrtRootTLSGlobal;
  emlrtSetJmpBuf(&st, &emlrtJBEnviron);
  if (setjmp(emlrtJBEnviron) == 0) {
    /* Dispatch the entry-point. */
    solver_bf_parfor_mexFunction(solver_bf_parforStackDataGlobal, nlhs, plhs,
                                 nrhs, prhs);
    /* Module termination. */
    solver_bf_parfor_terminate();
    omp_destroy_lock(&emlrtLockGlobal);
    omp_destroy_nest_lock(&solver_bf_parfor_nestLockGlobal);
  } else {
    omp_destroy_lock(&emlrtLockGlobal);
    omp_destroy_nest_lock(&solver_bf_parfor_nestLockGlobal);
    emlrtReportParallelRunTimeError(&st);
  }
  emlrtMxFree(solver_bf_parforStackDataGlobal);
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLSR2022a(&emlrtRootTLSGlobal, &emlrtContextGlobal,
                           &emlrtLockerFunction, omp_get_num_procs(), NULL,
                           "windows-1252", true);
  return emlrtRootTLSGlobal;
}

void solver_bf_parfor_mexFunction(solver_bf_parforStackData *SD, int32_T nlhs,
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
                        16, "solver_bf_parfor");
  }
  if (nlhs > 6) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 16,
                        "solver_bf_parfor");
  }
  /* Call the function. */
  solver_bf_parfor_api(SD, prhs, nlhs, outputs);
  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    i = 1;
  } else {
    i = nlhs;
  }
  emlrtReturnArrays(i, &plhs[0], &outputs[0]);
}

/* End of code generation (_coder_solver_bf_parfor_mex.c) */
