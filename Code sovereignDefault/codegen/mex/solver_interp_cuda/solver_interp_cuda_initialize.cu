//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// solver_interp_cuda_initialize.cu
//
// Code generation for function 'solver_interp_cuda_initialize'
//

// Include files
#include "solver_interp_cuda_initialize.h"
#include "_coder_solver_interp_cuda_mex.h"
#include "rt_nonfinite.h"
#include "solver_interp_cuda_data.h"
#include "MWCUBLASUtils.hpp"

// Function Declarations
static void solver_interp_cuda_once();

// Function Definitions
static void solver_interp_cuda_once()
{
  mex_InitInfAndNan();
  emlrtInitGPU(emlrtRootTLSGlobal);
  cudaGetLastError();
  cublasEnsureInitialization(CUBLAS_POINTER_MODE_HOST);
}

void solver_interp_cuda_initialize()
{
  mexFunctionCreateRootTLS();
  emlrtClearAllocCountR2012b(emlrtRootTLSGlobal, false, 0U, nullptr);
  emlrtEnterRtStackR2012b(emlrtRootTLSGlobal);
  emlrtLicenseCheckR2022a(emlrtRootTLSGlobal,
                          "EMLRT:runTime:MexFunctionNeedsLicense",
                          "distrib_computing_toolbox", 2);
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    solver_interp_cuda_once();
  }
}

// End of code generation (solver_interp_cuda_initialize.cu)
