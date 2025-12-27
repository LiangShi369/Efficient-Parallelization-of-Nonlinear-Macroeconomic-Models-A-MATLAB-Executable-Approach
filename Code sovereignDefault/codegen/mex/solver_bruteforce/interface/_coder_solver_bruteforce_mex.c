/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_solver_bruteforce_mex.c
 *
 * Code generation for function '_coder_solver_bruteforce_mex'
 *
 */

/* Include files */
#include "_coder_solver_bruteforce_mex.h"
#include "_coder_solver_bruteforce_api.h"
#include "rt_nonfinite.h"
#include "solver_bruteforce_data.h"
#include "solver_bruteforce_initialize.h"
#include "solver_bruteforce_terminate.h"
#include "solver_bruteforce_types.h"

/* Function Definitions */
void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  solver_bruteforceStackData *c_solver_bruteforceStackDataGlo = NULL;
  c_solver_bruteforceStackDataGlo = (solver_bruteforceStackData *)emlrtMxCalloc(
      (size_t)1, (size_t)1U * sizeof(solver_bruteforceStackData));
  mexAtExit(&solver_bruteforce_atexit);
  /* Module initialization. */
  solver_bruteforce_initialize();
  /* Dispatch the entry-point. */
  solver_bruteforce_mexFunction(c_solver_bruteforceStackDataGlo, nlhs, plhs,
                                nrhs, prhs);
  /* Module termination. */
  solver_bruteforce_terminate();
  emlrtMxFree(c_solver_bruteforceStackDataGlo);
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLSR2022a(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1,
                           NULL, "windows-1252", true);
  return emlrtRootTLSGlobal;
}

void solver_bruteforce_mexFunction(solver_bruteforceStackData *SD, int32_T nlhs,
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
                        17, "solver_bruteforce");
  }
  if (nlhs > 6) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 17,
                        "solver_bruteforce");
  }
  /* Call the function. */
  solver_bruteforce_api(SD, prhs, nlhs, outputs);
  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    i = 1;
  } else {
    i = nlhs;
  }
  emlrtReturnArrays(i, &plhs[0], &outputs[0]);
}

/* End of code generation (_coder_solver_bruteforce_mex.c) */
