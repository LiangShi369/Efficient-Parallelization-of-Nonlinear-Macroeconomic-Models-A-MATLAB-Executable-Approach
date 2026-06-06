//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// solver_interp_cuda_terminate.cu
//
// Code generation for function 'solver_interp_cuda_terminate'
//

// Include files
#include "solver_interp_cuda_terminate.h"
#include "_coder_solver_interp_cuda_mex.h"
#include "rt_nonfinite.h"
#include "solver_interp_cuda_data.h"
#include "MWCUBLASUtils.hpp"

// Function Declarations
static void checkCudaError(cudaError_t errorCode);

static void emlrtExitTimeCleanupDtorFcn(const void *r);

static void gpuThrowError(uint32_T errorCode, const char_T *errorName,
                          const char_T *errorString);

// Function Definitions
static void checkCudaError(cudaError_t errorCode)
{
  if (errorCode != cudaSuccess) {
    gpuThrowError(errorCode, cudaGetErrorName(errorCode),
                  cudaGetErrorString(errorCode));
  }
}

static void emlrtExitTimeCleanupDtorFcn(const void *r)
{
  emlrtExitTimeCleanup(&emlrtContextGlobal);
}

static void gpuThrowError(uint32_T errorCode, const char_T *errorName,
                          const char_T *errorString)
{
  emlrtThinCUDAError(errorCode, (char_T *)errorName, (char_T *)errorString,
                     (char_T *)"SafeBuild", emlrtRootTLSGlobal);
}

void solver_interp_cuda_atexit()
{
  mexFunctionCreateRootTLS();
  try {
    emlrtPushHeapReferenceStackR2021a(emlrtRootTLSGlobal, false, nullptr,
                                      (void *)&emlrtExitTimeCleanupDtorFcn,
                                      nullptr, nullptr, nullptr);
    emlrtEnterRtStackR2012b(emlrtRootTLSGlobal);
    emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
    emlrtExitTimeCleanup(&emlrtContextGlobal);
  } catch (...) {
    emlrtCleanupOnException((emlrtCTX *)emlrtRootTLSGlobal);
    throw;
  }
  cublasEnsureDestruction();
}

void solver_interp_cuda_terminate()
{
  checkCudaError(cudaGetLastError());
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

// End of code generation (solver_interp_cuda_terminate.cu)
