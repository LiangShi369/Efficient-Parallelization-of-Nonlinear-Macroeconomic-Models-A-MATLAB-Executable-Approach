//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// _coder_solver_bruteforce_cuda_mex.cu
//
// Code generation for function '_coder_solver_bruteforce_cuda_mex'
//

// Include files
#include "_coder_solver_bruteforce_cuda_mex.h"
#include "_coder_solver_bruteforce_cuda_api.h"
#include "rt_nonfinite.h"
#include "solver_bruteforce_cuda_data.h"
#include "solver_bruteforce_cuda_initialize.h"
#include "solver_bruteforce_cuda_terminate.h"
#include "solver_bruteforce_cuda_types.h"
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
  solver_bruteforce_cudaStackData *c_solver_bruteforce_cudaStackDa{nullptr};
  c_solver_bruteforce_cudaStackDa =
      static_cast<solver_bruteforce_cudaStackData *>(
          new solver_bruteforce_cudaStackData);
  mexAtExit(&solver_bruteforce_cuda_atexit);
  // Module initialization.
  solver_bruteforce_cuda_initialize();
  try {
    // Dispatch the entry-point.
    unsafe_solver_bruteforce_cuda_mexFunction(c_solver_bruteforce_cudaStackDa,
                                              nlhs, plhs, nrhs, prhs);
    // Module termination.
    solver_bruteforce_cuda_terminate();
  } catch (...) {
    emlrtCleanupOnException((emlrtCTX *)emlrtRootTLSGlobal);
    throw;
  }
  delete c_solver_bruteforce_cudaStackDa;
}

emlrtCTX mexFunctionCreateRootTLS()
{
  emlrtCreateRootTLSR2022a(&emlrtRootTLSGlobal, &emlrtContextGlobal, nullptr, 1,
                           (void *)&emlrtExceptionBridge, "windows-1252", true);
  return emlrtRootTLSGlobal;
}

void unsafe_solver_bruteforce_cuda_mexFunction(
    solver_bruteforce_cudaStackData *SD, int32_T nlhs, mxArray *plhs[6],
    int32_T nrhs, const mxArray *prhs[5])
{
  const mxArray *outputs[6];
  int32_T b;
  // Check for proper number of arguments.
  if (nrhs != 5) {
    emlrtErrMsgIdAndTxt(emlrtRootTLSGlobal, "EMLRT:runTime:WrongNumberOfInputs",
                        5, 12, 5, 4, 22, "solver_bruteforce_cuda");
  }
  if (nlhs > 6) {
    emlrtErrMsgIdAndTxt(emlrtRootTLSGlobal,
                        "EMLRT:runTime:TooManyOutputArguments", 3, 4, 22,
                        "solver_bruteforce_cuda");
  }
  // Call the function.
  solver_bruteforce_cuda_api(SD, prhs, nlhs, outputs);
  // Copy over outputs to the caller.
  if (nlhs < 1) {
    b = 1;
  } else {
    b = nlhs;
  }
  emlrtReturnArrays(b, &plhs[0], &outputs[0]);
}

// End of code generation (_coder_solver_bruteforce_cuda_mex.cu)
