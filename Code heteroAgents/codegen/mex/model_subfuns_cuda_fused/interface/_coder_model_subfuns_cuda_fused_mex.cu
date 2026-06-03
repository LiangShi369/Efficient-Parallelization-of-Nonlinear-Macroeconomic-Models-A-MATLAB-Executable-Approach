//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// _coder_model_subfuns_cuda_fused_mex.cu
//
// Code generation for function '_coder_model_subfuns_cuda_fused_mex'
//

// Include files
#include "_coder_model_subfuns_cuda_fused_mex.h"
#include "_coder_model_subfuns_cuda_fused_api.h"
#include "model_subfuns_cuda_fused_data.h"
#include "model_subfuns_cuda_fused_initialize.h"
#include "model_subfuns_cuda_fused_terminate.h"
#include "model_subfuns_cuda_fused_types.h"
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
  c_model_subfuns_cuda_fusedStack *d_model_subfuns_cuda_fusedStack{nullptr};
  d_model_subfuns_cuda_fusedStack =
      static_cast<c_model_subfuns_cuda_fusedStack *>(
          new c_model_subfuns_cuda_fusedStack);
  mexAtExit(&model_subfuns_cuda_fused_atexit);
  model_subfuns_cuda_fused_initialize();
  try {
    unsafe_model_subfuns_cuda_fused_mexFunction(d_model_subfuns_cuda_fusedStack,
                                                nlhs, plhs, nrhs, prhs);
    model_subfuns_cuda_fused_terminate();
  } catch (...) {
    emlrtCleanupOnException((emlrtCTX *)emlrtRootTLSGlobal);
    throw;
  }
  delete d_model_subfuns_cuda_fusedStack;
}

emlrtCTX mexFunctionCreateRootTLS()
{
  emlrtCreateRootTLSR2022a(&emlrtRootTLSGlobal, &emlrtContextGlobal, nullptr, 1,
                           (void *)&emlrtExceptionBridge, "windows-1252", true);
  return emlrtRootTLSGlobal;
}

void unsafe_model_subfuns_cuda_fused_mexFunction(
    c_model_subfuns_cuda_fusedStack *SD, int32_T nlhs, mxArray *plhs[4],
    int32_T nrhs, const mxArray *prhs[8])
{
  const mxArray *outputs[4];
  int32_T b;
  // Check for proper number of arguments.
  if (nrhs != 8) {
    emlrtErrMsgIdAndTxt(emlrtRootTLSGlobal, "EMLRT:runTime:WrongNumberOfInputs",
                        5, 12, 8, 4, 24, "model_subfuns_cuda_fused");
  }
  if (nlhs > 4) {
    emlrtErrMsgIdAndTxt(emlrtRootTLSGlobal,
                        "EMLRT:runTime:TooManyOutputArguments", 3, 4, 24,
                        "model_subfuns_cuda_fused");
  }
  // Call the function.
  model_subfuns_cuda_fused_api(SD, prhs, nlhs, outputs);
  // Copy over outputs to the caller.
  if (nlhs < 1) {
    b = 1;
  } else {
    b = nlhs;
  }
  emlrtReturnArrays(b, &plhs[0], &outputs[0]);
}

// End of code generation (_coder_model_subfuns_cuda_fused_mex.cu)
