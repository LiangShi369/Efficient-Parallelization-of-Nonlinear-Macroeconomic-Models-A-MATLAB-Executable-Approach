//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// fun_return_cuda_initialize.cu
//
// Code generation for function 'fun_return_cuda_initialize'
//

// Include files
#include "fun_return_cuda_initialize.h"
#include "_coder_fun_return_cuda_mex.h"
#include "fun_return_cuda_data.h"
#include "rt_nonfinite.h"
#include "timeKeeper.h"

// Function Declarations
static void fun_return_cuda_once();

// Function Definitions
static void fun_return_cuda_once()
{
  mex_InitInfAndNan();
  emlrtInitGPU(emlrtRootTLSGlobal);
  cudaGetLastError();
  timeKeeper_init();
}

void fun_return_cuda_initialize()
{
  mexFunctionCreateRootTLS();
  emlrtClearAllocCountR2012b(emlrtRootTLSGlobal, false, 0U, nullptr);
  emlrtEnterRtStackR2012b(emlrtRootTLSGlobal);
  emlrtLicenseCheckR2022a(emlrtRootTLSGlobal,
                          "EMLRT:runTime:MexFunctionNeedsLicense",
                          "distrib_computing_toolbox", 2);
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    fun_return_cuda_once();
  }
}

// End of code generation (fun_return_cuda_initialize.cu)
