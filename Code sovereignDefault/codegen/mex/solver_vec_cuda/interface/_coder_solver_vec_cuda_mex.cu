//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// _coder_solver_vec_cuda_mex.cu
//
// Code generation for function '_coder_solver_vec_cuda_mex'
//

// Include files
#include "_coder_solver_vec_cuda_mex.h"
#include "_coder_solver_vec_cuda_api.h"
#include "rt_nonfinite.h"
#include "solver_vec_cuda_data.h"
#include "solver_vec_cuda_initialize.h"
#include "solver_vec_cuda_terminate.h"
#include <stdexcept>

void emlrtExceptionBridge();
void emlrtExceptionBridge()
{
  throw std::runtime_error("");
}
// Function Definitions
void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  mexAtExit(&solver_vec_cuda_atexit);
  solver_vec_cuda_initialize();
  try {
    unsafe_solver_vec_cuda_mexFunction(nlhs, plhs, nrhs, prhs);
    solver_vec_cuda_terminate();
  } catch (...) {
    emlrtCleanupOnException((emlrtCTX *)emlrtRootTLSGlobal);
    throw;
  }
}

emlrtCTX mexFunctionCreateRootTLS()
{
  emlrtCreateRootTLSR2022a(&emlrtRootTLSGlobal, &emlrtContextGlobal, nullptr, 1,
                           (void *)&emlrtExceptionBridge, "windows-1252", true);
  return emlrtRootTLSGlobal;
}

void unsafe_solver_vec_cuda_mexFunction(int32_T nlhs, mxArray *plhs[6],
                                        int32_T nrhs, const mxArray *prhs[5])
{
  const mxArray *outputs[6];
  int32_T b;
  // Check for proper number of arguments.
  if (nrhs != 5) {
    emlrtErrMsgIdAndTxt(emlrtRootTLSGlobal, "EMLRT:runTime:WrongNumberOfInputs",
                        5, 12, 5, 4, 15, "solver_vec_cuda");
  }
  if (nlhs > 6) {
    emlrtErrMsgIdAndTxt(emlrtRootTLSGlobal,
                        "EMLRT:runTime:TooManyOutputArguments", 3, 4, 15,
                        "solver_vec_cuda");
  }
  // Call the function.
  solver_vec_cuda_api(prhs, nlhs, outputs);
  // Copy over outputs to the caller.
  if (nlhs < 1) {
    b = 1;
  } else {
    b = nlhs;
  }
  emlrtReturnArrays(b, &plhs[0], &outputs[0]);
}

// End of code generation (_coder_solver_vec_cuda_mex.cu)
