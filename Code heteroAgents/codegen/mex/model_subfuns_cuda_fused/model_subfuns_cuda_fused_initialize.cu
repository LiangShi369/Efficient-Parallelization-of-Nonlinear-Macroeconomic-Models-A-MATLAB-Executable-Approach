//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// model_subfuns_cuda_fused_initialize.cu
//
// Code generation for function 'model_subfuns_cuda_fused_initialize'
//

// Include files
#include "model_subfuns_cuda_fused_initialize.h"
#include "_coder_model_subfuns_cuda_fused_mex.h"
#include "model_subfuns_cuda_fused_data.h"
#include "rt_nonfinite.h"
#include "MWCUBLASUtils.hpp"

// Function Declarations
static void model_subfuns_cuda_fused_once();

// Function Definitions
static void model_subfuns_cuda_fused_once()
{
  mex_InitInfAndNan();
  emlrtInitGPU(emlrtRootTLSGlobal);
  cudaGetLastError();
  cublasEnsureInitialization(CUBLAS_POINTER_MODE_HOST);
}

void model_subfuns_cuda_fused_initialize()
{
  mexFunctionCreateRootTLS();
  emlrtClearAllocCountR2012b(emlrtRootTLSGlobal, false, 0U, nullptr);
  emlrtEnterRtStackR2012b(emlrtRootTLSGlobal);
  emlrtLicenseCheckR2022a(emlrtRootTLSGlobal,
                          "EMLRT:runTime:MexFunctionNeedsLicense",
                          "distrib_computing_toolbox", 2);
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    model_subfuns_cuda_fused_once();
  }
}

// End of code generation (model_subfuns_cuda_fused_initialize.cu)
