//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// _coder_solve_benchmark_cuda_mex.cu
//
// Code generation for function '_coder_solve_benchmark_cuda_mex'
//

// Include files
#include "_coder_solve_benchmark_cuda_mex.h"
#include "_coder_solve_benchmark_cuda_api.h"
#include "rt_nonfinite.h"
#include "solve_benchmark_cuda_data.h"
#include "solve_benchmark_cuda_initialize.h"
#include "solve_benchmark_cuda_terminate.h"
#include "solve_benchmark_cuda_types.h"
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
  solve_benchmark_cudaStackData *c_solve_benchmark_cudaStackData{nullptr};
  c_solve_benchmark_cudaStackData =
      static_cast<solve_benchmark_cudaStackData *>(
          new solve_benchmark_cudaStackData);
  mexAtExit(&solve_benchmark_cuda_atexit);
  solve_benchmark_cuda_initialize();
  try {
    unsafe_solve_benchmark_cuda_mexFunction(c_solve_benchmark_cudaStackData,
                                            nlhs, plhs, nrhs, prhs);
    solve_benchmark_cuda_terminate();
  } catch (...) {
    emlrtCleanupOnException((emlrtCTX *)emlrtRootTLSGlobal);
    throw;
  }
  delete c_solve_benchmark_cudaStackData;
}

emlrtCTX mexFunctionCreateRootTLS()
{
  emlrtCreateRootTLSR2022a(&emlrtRootTLSGlobal, &emlrtContextGlobal, nullptr, 1,
                           (void *)&emlrtExceptionBridge, "windows-1252", true);
  return emlrtRootTLSGlobal;
}

void unsafe_solve_benchmark_cuda_mexFunction(solve_benchmark_cudaStackData *SD,
                                             int32_T nlhs, mxArray *plhs[9],
                                             int32_T nrhs,
                                             const mxArray *prhs[5])
{
  const mxArray *outputs[9];
  int32_T b;
  // Check for proper number of arguments.
  if (nrhs != 5) {
    emlrtErrMsgIdAndTxt(emlrtRootTLSGlobal, "EMLRT:runTime:WrongNumberOfInputs",
                        5, 12, 5, 4, 20, "solve_benchmark_cuda");
  }
  if (nlhs > 9) {
    emlrtErrMsgIdAndTxt(emlrtRootTLSGlobal,
                        "EMLRT:runTime:TooManyOutputArguments", 3, 4, 20,
                        "solve_benchmark_cuda");
  }
  // Call the function.
  solve_benchmark_cuda_api(SD, prhs, nlhs, outputs);
  // Copy over outputs to the caller.
  if (nlhs < 1) {
    b = 1;
  } else {
    b = nlhs;
  }
  emlrtReturnArrays(b, &plhs[0], &outputs[0]);
}

// End of code generation (_coder_solve_benchmark_cuda_mex.cu)
