/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_solver_interp_mex.c
 *
 * Code generation for function '_coder_solver_interp_mex'
 *
 */

/* Include files */
#include "_coder_solver_interp_mex.h"
#include "_coder_solver_interp_api.h"
#include "rt_nonfinite.h"
#include "solver_interp.h"
#include "solver_interp_data.h"
#include "solver_interp_initialize.h"
#include "solver_interp_terminate.h"
#include "solver_interp_types.h"
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
  solver_interpStackData *solver_interpStackDataGlobal = NULL;
  solver_interpStackDataGlobal = (solver_interpStackData *)emlrtMxCalloc(
      (size_t)1, (size_t)1U * sizeof(solver_interpStackData));
  mexAtExit(&solver_interp_atexit);
  /* Initialize the memory manager. */
  omp_init_lock(&emlrtLockGlobal);
  omp_init_nest_lock(&solver_interp_nestLockGlobal);
  solver_interp_initialize();
  st.tls = emlrtRootTLSGlobal;
  emlrtSetJmpBuf(&st, &emlrtJBEnviron);
  if (setjmp(emlrtJBEnviron) == 0) {
    solver_interp_mexFunction(solver_interpStackDataGlobal, nlhs, plhs, nrhs,
                              prhs);
    solver_interp_terminate();
    omp_destroy_lock(&emlrtLockGlobal);
    omp_destroy_nest_lock(&solver_interp_nestLockGlobal);
  } else {
    omp_destroy_lock(&emlrtLockGlobal);
    omp_destroy_nest_lock(&solver_interp_nestLockGlobal);
    emlrtReportParallelRunTimeError(&st);
  }
  emlrtMxFree(solver_interpStackDataGlobal);
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLSR2022a(&emlrtRootTLSGlobal, &emlrtContextGlobal,
                           &emlrtLockerFunction, omp_get_num_procs(), NULL,
                           "windows-1252", true);
  return emlrtRootTLSGlobal;
}

void solver_interp_mexFunction(solver_interpStackData *SD, int32_T nlhs,
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
                        13, "solver_interp");
  }
  if (nlhs > 6) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 13,
                        "solver_interp");
  }
  /* Call the function. */
  solver_interp_api(SD, prhs, nlhs, outputs);
  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    i = 1;
  } else {
    i = nlhs;
  }
  emlrtReturnArrays(i, &plhs[0], &outputs[0]);
}

/* End of code generation (_coder_solver_interp_mex.c) */
