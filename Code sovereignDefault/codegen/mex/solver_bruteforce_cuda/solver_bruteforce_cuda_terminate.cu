//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// solver_bruteforce_cuda_terminate.cu
//
// Code generation for function 'solver_bruteforce_cuda_terminate'
//

// Include files
#include "solver_bruteforce_cuda_terminate.h"
#include "_coder_solver_bruteforce_cuda_mex.h"
#include "rt_nonfinite.h"
#include "solver_bruteforce_cuda_data.h"
#include "MWCUBLASUtils.hpp"

// Function Definitions
void solver_bruteforce_cuda_atexit()
{
  mexFunctionCreateRootTLS();
  emlrtEnterRtStackR2012b(emlrtRootTLSGlobal);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
  emlrtExitTimeCleanup(&emlrtContextGlobal);
}

void solver_bruteforce_cuda_terminate()
{
  cudaError_t errCode;
  errCode = cudaGetLastError();
  if (errCode != cudaSuccess) {
    emlrtThinCUDAError(static_cast<uint32_T>(errCode),
                       (char_T *)cudaGetErrorName(errCode),
                       (char_T *)cudaGetErrorString(errCode),
                       (char_T *)"SafeBuild", emlrtRootTLSGlobal);
  }
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
  cublasEnsureDestruction();
}

// End of code generation (solver_bruteforce_cuda_terminate.cu)
