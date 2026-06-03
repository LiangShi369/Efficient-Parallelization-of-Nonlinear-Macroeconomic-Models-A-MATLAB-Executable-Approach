//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// _coder_fun_return_cuda_mex.cu
//
// Code generation for function '_coder_fun_return_cuda_mex'
//

// Include files
#include "_coder_fun_return_cuda_mex.h"
#include "_coder_fun_return_cuda_api.h"
#include "fun_return_cuda_data.h"
#include "fun_return_cuda_initialize.h"
#include "fun_return_cuda_terminate.h"
#include "rt_nonfinite.h"
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
  mexAtExit(&fun_return_cuda_atexit);
  fun_return_cuda_initialize();
  try {
    unsafe_fun_return_cuda_mexFunction(nlhs, plhs, nrhs, prhs);
    fun_return_cuda_terminate();
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

void unsafe_fun_return_cuda_mexFunction(int32_T nlhs, mxArray *plhs[3],
                                        int32_T nrhs, const mxArray *prhs[5])
{
  const mxArray *outputs[3];
  int32_T b;
  // Check for proper number of arguments.
  if (nrhs != 5) {
    emlrtErrMsgIdAndTxt(emlrtRootTLSGlobal, "EMLRT:runTime:WrongNumberOfInputs",
                        5, 12, 5, 4, 15, "fun_return_cuda");
  }
  if (nlhs > 3) {
    emlrtErrMsgIdAndTxt(emlrtRootTLSGlobal,
                        "EMLRT:runTime:TooManyOutputArguments", 3, 4, 15,
                        "fun_return_cuda");
  }
  // Call the function.
  fun_return_cuda_api(prhs, nlhs, outputs);
  // Copy over outputs to the caller.
  if (nlhs < 1) {
    b = 1;
  } else {
    b = nlhs;
  }
  emlrtReturnArrays(b, &plhs[0], &outputs[0]);
}

// End of code generation (_coder_fun_return_cuda_mex.cu)
