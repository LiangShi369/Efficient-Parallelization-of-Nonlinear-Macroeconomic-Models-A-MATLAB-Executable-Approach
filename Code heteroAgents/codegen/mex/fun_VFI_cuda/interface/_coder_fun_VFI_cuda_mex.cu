//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// _coder_fun_VFI_cuda_mex.cu
//
// Code generation for function '_coder_fun_VFI_cuda_mex'
//

// Include files
#include "_coder_fun_VFI_cuda_mex.h"
#include "_coder_fun_VFI_cuda_api.h"
#include "fun_VFI_cuda_data.h"
#include "fun_VFI_cuda_initialize.h"
#include "fun_VFI_cuda_terminate.h"
#include "fun_VFI_cuda_types.h"
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
  fun_VFI_cudaStackData *fun_VFI_cudaStackDataGlobal{nullptr};
  fun_VFI_cudaStackDataGlobal =
      static_cast<fun_VFI_cudaStackData *>(new fun_VFI_cudaStackData);
  mexAtExit(&fun_VFI_cuda_atexit);
  fun_VFI_cuda_initialize();
  try {
    unsafe_fun_VFI_cuda_mexFunction(fun_VFI_cudaStackDataGlobal, nlhs, plhs,
                                    nrhs, prhs);
    fun_VFI_cuda_terminate();
  } catch (...) {
    emlrtCleanupOnException((emlrtCTX *)emlrtRootTLSGlobal);
    throw;
  }
  delete fun_VFI_cudaStackDataGlobal;
}

emlrtCTX mexFunctionCreateRootTLS()
{
  emlrtCreateRootTLSR2022a(&emlrtRootTLSGlobal, &emlrtContextGlobal, nullptr, 1,
                           (void *)&emlrtExceptionBridge, "windows-1252", true);
  return emlrtRootTLSGlobal;
}

void unsafe_fun_VFI_cuda_mexFunction(fun_VFI_cudaStackData *SD, int32_T nlhs,
                                     mxArray *plhs[3], int32_T nrhs,
                                     const mxArray *prhs[6])
{
  const mxArray *outputs[3];
  int32_T b;
  // Check for proper number of arguments.
  if (nrhs != 6) {
    emlrtErrMsgIdAndTxt(emlrtRootTLSGlobal, "EMLRT:runTime:WrongNumberOfInputs",
                        5, 12, 6, 4, 12, "fun_VFI_cuda");
  }
  if (nlhs > 3) {
    emlrtErrMsgIdAndTxt(emlrtRootTLSGlobal,
                        "EMLRT:runTime:TooManyOutputArguments", 3, 4, 12,
                        "fun_VFI_cuda");
  }
  // Call the function.
  fun_VFI_cuda_api(SD, prhs, nlhs, outputs);
  // Copy over outputs to the caller.
  if (nlhs < 1) {
    b = 1;
  } else {
    b = nlhs;
  }
  emlrtReturnArrays(b, &plhs[0], &outputs[0]);
}

// End of code generation (_coder_fun_VFI_cuda_mex.cu)
