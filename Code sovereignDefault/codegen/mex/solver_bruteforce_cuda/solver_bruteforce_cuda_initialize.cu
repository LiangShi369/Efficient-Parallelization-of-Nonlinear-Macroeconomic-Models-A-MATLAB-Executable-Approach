//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// solver_bruteforce_cuda_initialize.cu
//
// Code generation for function 'solver_bruteforce_cuda_initialize'
//

// Include files
#include "solver_bruteforce_cuda_initialize.h"
#include "_coder_solver_bruteforce_cuda_mex.h"
#include "rt_nonfinite.h"
#include "solver_bruteforce_cuda_data.h"
#include "MWCUBLASUtils.hpp"

// Function Definitions
void solver_bruteforce_cuda_initialize()
{
  mex_InitInfAndNan();
  mexFunctionCreateRootTLS();
  emlrtClearAllocCountR2012b(emlrtRootTLSGlobal, false, 0U, nullptr);
  emlrtEnterRtStackR2012b(emlrtRootTLSGlobal);
  emlrtLicenseCheckR2022a(emlrtRootTLSGlobal,
                          "EMLRT:runTime:MexFunctionNeedsLicense",
                          "distrib_computing_toolbox", 2);
  cublasEnsureInitialization(CUBLAS_POINTER_MODE_HOST);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
  emlrtInitGPU(emlrtRootTLSGlobal);
  cudaGetLastError();
}

// End of code generation (solver_bruteforce_cuda_initialize.cu)
