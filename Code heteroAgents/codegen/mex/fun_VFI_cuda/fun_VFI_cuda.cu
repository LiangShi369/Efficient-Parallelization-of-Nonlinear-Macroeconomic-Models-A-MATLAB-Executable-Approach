//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// fun_VFI_cuda.cu
//
// Code generation for function 'fun_VFI_cuda'
//

// Include files
#include "fun_VFI_cuda.h"
#include "fun_VFI_cuda_data.h"
#include "fun_VFI_cuda_emxutil.h"
#include "fun_VFI_cuda_types.h"
#include "rt_nonfinite.h"
#include "MWCUBLASUtils.hpp"
#include "MWCudaDimUtility.hpp"
#include "MWCudaMemoryFunctions.hpp"
#include "MWLaunchParametersUtilities.hpp"
#include "math_constants.h"
#include <cmath>
#include <cstring>

// Variable Definitions
static emlrtMCInfo emlrtMCI{
    15,             // lineNo
    5,              // colNo
    "fun_VFI_cuda", // fName
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code heteroAgents\\fun_VFI_cuda.m" // pName
};

static emlrtRTEInfo emlrtRTEI{
    28,             // lineNo
    1,              // colNo
    "fun_VFI_cuda", // fName
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code heteroAgents\\fun_VFI_cuda.m" // pName
};

__constant__ static real_T const_z_grid[40];

// Function Declarations
static void checkCudaError(cudaError_t errorCode, const char_T *file,
                           int32_T b_line);

static uint64_T computeNumIters(int32_T ub, int32_T b_ub, int32_T c_ub);

static uint64_T computeNumIters(int32_T ub, int32_T b_ub);

static uint64_T computeNumIters(int32_T ub);

static void disp(const mxArray *m, emlrtMCInfo *location);

static __global__ void fun_VFI_cuda_kernel1(const struct0_T *Params,
                                            real_T *delta, real_T *alpha,
                                            real_T *upsilon, real_T *crra,
                                            real_T *beta);

static __global__ void
fun_VFI_cuda_kernel2(const real_T a_grid_data[], const struct0_T *Params,
                     const real_T r, const real_T w, const real_T *delta,
                     const real_T *alpha, const real_T *upsilon,
                     const int32_T cash_size_dim0, const int32_T b,
                     real_T cash_data[120040]);

static __global__ void
fun_VFI_cuda_kernel3(const real_T a_grid_data[], const real_T *crra,
                     const real_T cash_data[120040],
                     const int32_T cash_size_dim0, const int32_T b,
                     const int32_T c, emxArray_real_T ReturnMatrix,
                     int32_T ReturnMatrix_dim0, int32_T ReturnMatrix_dim1);

static __global__ void fun_VFI_cuda_kernel4(const real_T pi_z[1600],
                                            real_T pi_z_tranposed[1600]);

static __global__ void fun_VFI_cuda_kernel5(
    const int32_T n_a, const real_T *beta, const emxArray_real_T ReturnMatrix,
    const real_T cash_data[120040], const int32_T Policy_size_dim0,
    const int32_T cash_size_dim0, const int32_T b, real_T V_data[],
    real_T Policy_data[], int32_T ReturnMatrix_dim0, int32_T ReturnMatrix_dim1);

static __global__ void fun_VFI_cuda_kernel6(
    const real_T Policy_data[], const real_T *beta,
    const emxArray_real_T ReturnMatrix, const real_T cash_data[120040],
    const int32_T Policy_size_dim0, const int32_T cash_size_dim0,
    const int32_T b, real_T V_data[], int32_T ReturnMatrix_dim0,
    int32_T ReturnMatrix_dim1);

static __global__ void fun_VFI_cuda_kernel7(const real_T V_data[],
                                            const real_T V0_data[120040],
                                            const int32_T V_size,
                                            real_T x_data[120040]);

static __global__ void fun_VFI_cuda_kernel8(const real_T x_data[120040],
                                            const int32_T b,
                                            real_T cash_data[120040]);

static __global__ void fun_VFI_cuda_kernel9(const real_T V_data[],
                                            const int32_T V_size,
                                            real_T V0_data[120040]);

static void gpuEmxEnsureCapacity_real_T(const emxArray_real_T *cpu,
                                        emxArray_real_T *gpu,
                                        boolean_T needsCopy);

static void gpuEmxFree_real_T(emxArray_real_T *gpu);

static void gpuEmxReset_real_T(emxArray_real_T *gpu);

static void gpuThrowError(const char_T *file, int32_T b_line);

static void gpuThrowError(uint32_T errorCode, const char_T *errorName,
                          const char_T *errorString, const char_T *file,
                          int32_T b_line);

// Function Definitions
static void checkCudaError(cudaError_t errorCode, const char_T *file,
                           int32_T b_line)
{
  if (errorCode != cudaSuccess) {
    gpuThrowError(errorCode, cudaGetErrorName(errorCode),
                  cudaGetErrorString(errorCode), file, b_line);
  }
}

static uint64_T computeNumIters(int32_T ub, int32_T b_ub, int32_T c_ub)
{
  uint64_T n;
  uint64_T numIters;
  boolean_T overflow;
  overflow = false;
  n = 0ULL;
  if (ub >= 0) {
    n = static_cast<uint64_T>(ub + 1);
  }
  numIters = n;
  n = 0ULL;
  if (b_ub >= 0) {
    n = static_cast<uint64_T>(b_ub + 1);
    overflow = (numIters > MAX_uint64_T / n);
  }
  numIters *= n;
  n = 0ULL;
  if (c_ub >= 0) {
    n = static_cast<uint64_T>(c_ub + 1);
    overflow = ((numIters > MAX_uint64_T / n) || overflow);
  }
  numIters *= n;
  if (overflow) {
    gpuThrowError(__FILE__, __LINE__);
  }
  return numIters;
}

static uint64_T computeNumIters(int32_T ub, int32_T b_ub)
{
  uint64_T n;
  uint64_T numIters;
  boolean_T overflow;
  overflow = false;
  n = 0ULL;
  if (ub >= 0) {
    n = static_cast<uint64_T>(ub + 1);
  }
  numIters = n;
  n = 0ULL;
  if (b_ub >= 0) {
    n = static_cast<uint64_T>(b_ub + 1);
    overflow = (numIters > MAX_uint64_T / n);
  }
  numIters *= n;
  if (overflow) {
    gpuThrowError(__FILE__, __LINE__);
  }
  return numIters;
}

static uint64_T computeNumIters(int32_T ub)
{
  uint64_T numIters;
  numIters = 0ULL;
  if (ub >= 0) {
    numIters = static_cast<uint64_T>(ub + 1);
  }
  return numIters;
}

static void disp(const mxArray *m, emlrtMCInfo *location)
{
  emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 0, nullptr, 1, &m, "disp", true,
                        location);
}

static __global__ __launch_bounds__(32, 1) void fun_VFI_cuda_kernel1(
    const struct0_T *Params, real_T *delta, real_T *alpha, real_T *upsilon,
    real_T *crra, real_T *beta)
{
  int32_T tmpIdx;
  tmpIdx = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (tmpIdx < 1) {
    *delta = Params->delta;
    *alpha = Params->alpha;
    *upsilon = Params->upsilon;
    *crra = Params->crra;
    *beta = Params->beta;
  }
}

static __global__ __launch_bounds__(256, 1) void fun_VFI_cuda_kernel2(
    const real_T a_grid_data[], const struct0_T *Params, const real_T r,
    const real_T w, const real_T *delta, const real_T *alpha,
    const real_T *upsilon, const int32_T cash_size_dim0, const int32_T b,
    real_T cash_data[120040])
{
  real_T aprime_opt;
  real_T c;
  real_T entireRHS;
  real_T kstar;
  real_T kstar_tmp;
  uint64_T gStride;
  uint64_T gThreadId;
  uint64_T idx;
  uint64_T loopEnd;
  int32_T a_c;
  int32_T z_c;
  gThreadId = mwGetGlobalThreadIndex();
  gStride = mwGetTotalThreadsLaunched();
  loopEnd = 40ULL * (static_cast<uint64_T>(b) + 1ULL) - 1ULL;
  for (idx = gThreadId; idx <= loopEnd; idx += gStride) {
    a_c = static_cast<int32_T>(idx % (static_cast<uint64_T>(b) + 1ULL));
    z_c = static_cast<int32_T>((idx - static_cast<uint64_T>(a_c)) /
                               (static_cast<uint64_T>(b) + 1ULL));
    //  This function solve the entrepreneurs' static maximization problem. See
    //  Robert's App_BueraShin2013.pdf for more details.
    //  Get k1, kstar, lstar
    // aux    = 1-(1-alpha)*(1-upsilon);
    aprime_opt = (1.0 - *alpha) * (1.0 - *upsilon);
    entireRHS = 1.0 / w * (1.0 - *alpha) * (1.0 - *upsilon) * const_z_grid[z_c];
    kstar_tmp = r + *delta;
    c = a_grid_data[a_c];
    kstar = fmin(pow(pow(1.0 / fmax(kstar_tmp, 1.0E-8) * *alpha *
                             (1.0 - *upsilon) * const_z_grid[z_c],
                         1.0 - aprime_opt) *
                         pow(entireRHS, aprime_opt),
                     1.0 / *upsilon),
                 Params->lambda * c);
    aprime_opt = pow(entireRHS * pow(kstar, *alpha * (1.0 - *upsilon)),
                     1.0 / (1.0 - aprime_opt));
    //  Evaluate profit if do choose to be entrepreneur
    cash_data[a_c + cash_size_dim0 * z_c] =
        fmax(w, (const_z_grid[z_c] *
                     pow(pow(kstar, *alpha) * pow(aprime_opt, 1.0 - *alpha),
                         1.0 - *upsilon) -
                 w * aprime_opt) -
                    kstar_tmp * kstar) +
        (r + 1.0) * c;
    //  cash depends only on (a,z)
  }
}

static __global__ __launch_bounds__(256, 1) void fun_VFI_cuda_kernel3(
    const real_T a_grid_data[], const real_T *crra,
    const real_T cash_data[120040], const int32_T cash_size_dim0,
    const int32_T b, const int32_T c, emxArray_real_T ReturnMatrix,
    int32_T ReturnMatrix_dim0, int32_T ReturnMatrix_dim1)
{
  real_T aprime_opt;
  uint64_T gStride;
  uint64_T gThreadId;
  uint64_T idx;
  uint64_T loopEnd;
  uint64_T tmpIndex;
  int32_T a_c;
  int32_T aprime_c;
  int32_T z_c;
  gThreadId = mwGetGlobalThreadIndex();
  gStride = mwGetTotalThreadsLaunched();
  loopEnd = 40ULL * (static_cast<uint64_T>(b) + 1ULL) *
                (static_cast<uint64_T>(c) + 1ULL) -
            1ULL;
  for (idx = gThreadId; idx <= loopEnd; idx += gStride) {
    aprime_c = static_cast<int32_T>(idx % (static_cast<uint64_T>(c) + 1ULL));
    tmpIndex = (idx - static_cast<uint64_T>(aprime_c)) /
               (static_cast<uint64_T>(c) + 1ULL);
    a_c = static_cast<int32_T>(tmpIndex % (static_cast<uint64_T>(b) + 1ULL));
    tmpIndex = (tmpIndex - static_cast<uint64_T>(a_c)) /
               (static_cast<uint64_T>(b) + 1ULL);
    z_c = static_cast<int32_T>(tmpIndex);
    //  Now introduce a'
    aprime_opt = cash_data[a_c + cash_size_dim0 * z_c] - a_grid_data[aprime_c];
    if (aprime_opt > 0.0) {
      ReturnMatrix.data[(aprime_c + ReturnMatrix_dim0 * a_c) +
                        ReturnMatrix_dim0 * ReturnMatrix_dim1 * z_c] =
          pow(aprime_opt, 1.0 - *crra) / (1.0 - *crra);
    } else {
      ReturnMatrix.data[(aprime_c + ReturnMatrix_dim0 * a_c) +
                        ReturnMatrix_dim0 * ReturnMatrix_dim1 * z_c] =
          -CUDART_INF;
    }
    // end if
  }
}

static __global__ __launch_bounds__(128, 1) void fun_VFI_cuda_kernel4(
    const real_T pi_z[1600], real_T pi_z_tranposed[1600])
{
  uint64_T gThreadId;
  int32_T aprime_opt_tmp;
  int32_T z_c;
  gThreadId = mwGetGlobalThreadIndex();
  z_c = static_cast<int32_T>(gThreadId % 40ULL);
  aprime_opt_tmp =
      static_cast<int32_T>((gThreadId - static_cast<uint64_T>(z_c)) / 40ULL);
  if ((aprime_opt_tmp < 40) && (z_c < 40)) {
    pi_z_tranposed[z_c + 40 * aprime_opt_tmp] = pi_z[aprime_opt_tmp + 40 * z_c];
  }
}

static __global__ __launch_bounds__(256, 1) void fun_VFI_cuda_kernel5(
    const int32_T n_a, const real_T *beta, const emxArray_real_T ReturnMatrix,
    const real_T cash_data[120040], const int32_T Policy_size_dim0,
    const int32_T cash_size_dim0, const int32_T b, real_T V_data[],
    real_T Policy_data[], int32_T ReturnMatrix_dim0, int32_T ReturnMatrix_dim1)
{
  real_T aprime_opt;
  real_T entireRHS;
  uint64_T gStride;
  uint64_T gThreadId;
  uint64_T idx;
  uint64_T loopEnd;
  int32_T a_c;
  int32_T aprime_c;
  int32_T aprime_opt_tmp;
  int32_T z_c;
  gThreadId = mwGetGlobalThreadIndex();
  gStride = mwGetTotalThreadsLaunched();
  loopEnd = 40ULL * (static_cast<uint64_T>(b) + 1ULL) - 1ULL;
  for (idx = gThreadId; idx <= loopEnd; idx += gStride) {
    a_c = static_cast<int32_T>(idx % (static_cast<uint64_T>(b) + 1ULL));
    z_c = static_cast<int32_T>((idx - static_cast<uint64_T>(a_c)) /
                               (static_cast<uint64_T>(b) + 1ULL));
    aprime_opt = -CUDART_INF;
    aprime_opt_tmp = a_c + Policy_size_dim0 * z_c;
    Policy_data[aprime_opt_tmp] = 1.0;
    for (aprime_c = 0; aprime_c < n_a; aprime_c++) {
      entireRHS =
          ReturnMatrix.data[(aprime_c + ReturnMatrix_dim0 * a_c) +
                            ReturnMatrix_dim0 * ReturnMatrix_dim1 * z_c] +
          *beta * cash_data[aprime_c + cash_size_dim0 * z_c];
      if (entireRHS > aprime_opt) {
        aprime_opt = entireRHS;
        Policy_data[aprime_opt_tmp] = static_cast<real_T>(aprime_c) + 1.0;
      }
    }
    V_data[aprime_opt_tmp] = aprime_opt;
  }
}

static __global__ __launch_bounds__(256, 1) void fun_VFI_cuda_kernel6(
    const real_T Policy_data[], const real_T *beta,
    const emxArray_real_T ReturnMatrix, const real_T cash_data[120040],
    const int32_T Policy_size_dim0, const int32_T cash_size_dim0,
    const int32_T b, real_T V_data[], int32_T ReturnMatrix_dim0,
    int32_T ReturnMatrix_dim1)
{
  real_T aprime_opt;
  uint64_T gStride;
  uint64_T gThreadId;
  uint64_T idx;
  uint64_T loopEnd;
  int32_T a_c;
  int32_T aprime_opt_tmp;
  int32_T z_c;
  gThreadId = mwGetGlobalThreadIndex();
  gStride = mwGetTotalThreadsLaunched();
  loopEnd = 40ULL * (static_cast<uint64_T>(b) + 1ULL) - 1ULL;
  for (idx = gThreadId; idx <= loopEnd; idx += gStride) {
    a_c = static_cast<int32_T>(idx % (static_cast<uint64_T>(b) + 1ULL));
    z_c = static_cast<int32_T>((idx - static_cast<uint64_T>(a_c)) /
                               (static_cast<uint64_T>(b) + 1ULL));
    aprime_opt_tmp = a_c + Policy_size_dim0 * z_c;
    aprime_opt = Policy_data[aprime_opt_tmp];
    V_data[aprime_opt_tmp] =
        ReturnMatrix.data[((static_cast<int32_T>(aprime_opt) +
                            ReturnMatrix_dim0 * a_c) +
                           ReturnMatrix_dim0 * ReturnMatrix_dim1 * z_c) -
                          1] +
        *beta * cash_data[(static_cast<int32_T>(aprime_opt) +
                           cash_size_dim0 * z_c) -
                          1];
  }
}

static __global__ __launch_bounds__(256, 1) void fun_VFI_cuda_kernel7(
    const real_T V_data[], const real_T V0_data[120040], const int32_T V_size,
    real_T x_data[120040])
{
  uint64_T gStride;
  uint64_T gThreadId;
  uint64_T idx;
  uint64_T loopEnd;
  int32_T aprime_opt_tmp;
  gThreadId = mwGetGlobalThreadIndex();
  gStride = mwGetTotalThreadsLaunched();
  loopEnd = static_cast<uint64_T>(V_size);
  for (idx = gThreadId; idx <= loopEnd; idx += gStride) {
    aprime_opt_tmp = static_cast<int32_T>(idx);
    x_data[aprime_opt_tmp] = V_data[aprime_opt_tmp] - V0_data[aprime_opt_tmp];
  }
}

static __global__ __launch_bounds__(256, 1) void fun_VFI_cuda_kernel8(
    const real_T x_data[120040], const int32_T b, real_T cash_data[120040])
{
  uint64_T gStride;
  uint64_T gThreadId;
  uint64_T idx;
  uint64_T loopEnd;
  int32_T aprime_opt_tmp;
  gThreadId = mwGetGlobalThreadIndex();
  gStride = mwGetTotalThreadsLaunched();
  loopEnd = static_cast<uint64_T>(b);
  for (idx = gThreadId; idx <= loopEnd; idx += gStride) {
    aprime_opt_tmp = static_cast<int32_T>(idx);
    cash_data[aprime_opt_tmp] = fabs(x_data[aprime_opt_tmp]);
  }
}

static __global__ __launch_bounds__(256, 1) void fun_VFI_cuda_kernel9(
    const real_T V_data[], const int32_T V_size, real_T V0_data[120040])
{
  uint64_T gStride;
  uint64_T gThreadId;
  uint64_T idx;
  uint64_T loopEnd;
  int32_T aprime_opt_tmp;
  gThreadId = mwGetGlobalThreadIndex();
  gStride = mwGetTotalThreadsLaunched();
  loopEnd = static_cast<uint64_T>(V_size);
  for (idx = gThreadId; idx <= loopEnd; idx += gStride) {
    aprime_opt_tmp = static_cast<int32_T>(idx);
    V0_data[aprime_opt_tmp] = V_data[aprime_opt_tmp];
  }
}

static void gpuEmxEnsureCapacity_real_T(const emxArray_real_T *cpu,
                                        emxArray_real_T *gpu,
                                        boolean_T needsCopy)
{
  real_T *newData;
  int32_T i;
  int32_T totalSizeCpu;
  int32_T totalSizeGpu;
  if (gpu->numDimensions == 0) {
    gpu->numDimensions = cpu->numDimensions;
    gpu->size = static_cast<int32_T *>(emlrtCallocMex(
        static_cast<uint32_T>(gpu->numDimensions), sizeof(int32_T)));
  }
  totalSizeCpu = 1;
  totalSizeGpu = 1;
  for (i = 0; i < cpu->numDimensions; i++) {
    totalSizeGpu *= gpu->size[i];
    totalSizeCpu *= cpu->size[i];
    gpu->size[i] = cpu->size[i];
  }
  if (((totalSizeCpu == 0) && (cpu->allocatedSize > 0)) ||
      (gpu->allocatedSize < totalSizeCpu)) {
    i = cpu->allocatedSize;
    if (i < totalSizeCpu) {
      i = totalSizeCpu;
    }
    checkCudaError(
        mwCudaMalloc(&newData, static_cast<uint32_T>(i) * sizeof(real_T)),
        __FILE__, __LINE__);
    needsCopy = (needsCopy && (totalSizeGpu > 0));
    if (needsCopy) {
      checkCudaError(
          cudaMemcpy(newData, gpu->data,
                     static_cast<uint32_T>(totalSizeGpu) * sizeof(real_T),
                     cudaMemcpyDeviceToDevice),
          __FILE__, __LINE__);
    }
    if (gpu->canFreeData) {
      checkCudaError(mwCudaFree(gpu->data), __FILE__, __LINE__);
    }
    gpu->data = newData;
    gpu->allocatedSize = i;
    gpu->canFreeData = true;
  }
}

static void gpuEmxFree_real_T(emxArray_real_T *gpu)
{
  if (gpu->data && gpu->canFreeData && (gpu->data != (void *)4207599121ULL)) {
    checkCudaError(mwCudaFree(gpu->data), __FILE__, __LINE__);
  }
  emlrtFreeMex(gpu->size);
}

static void gpuEmxReset_real_T(emxArray_real_T *gpu)
{
  std::memset(gpu, 0, sizeof(emxArray_real_T));
}

static void gpuThrowError(const char_T *file, int32_T b_line)
{
  emlrtRTEInfo rtInfo;
  rtInfo.lineNo = b_line;
  rtInfo.colNo = 0;
  rtInfo.fName = "";
  rtInfo.pName = file;
  emlrtCUDAError(
      0U, (char_T *)"_",
      (char_T
           *)"Unable to launch kernel. Loop nest contains too many iterations.",
      &rtInfo, emlrtRootTLSGlobal);
}

static void gpuThrowError(uint32_T errorCode, const char_T *errorName,
                          const char_T *errorString, const char_T *file,
                          int32_T b_line)
{
  emlrtRTEInfo rtInfo;
  rtInfo.lineNo = b_line;
  rtInfo.colNo = 0;
  rtInfo.fName = "";
  rtInfo.pName = file;
  emlrtCUDAError(errorCode, (char_T *)errorName, (char_T *)errorString, &rtInfo,
                 emlrtRootTLSGlobal);
}

void fun_VFI_cuda(fun_VFI_cudaStackData *SD, const real_T p_eqm[2],
                  const real_T cpu_a_grid_data[], const int32_T a_grid_size[1],
                  const real_T z_grid[40], const real_T cpu_pi_z[1600],
                  struct0_T *cpu_Params, const struct1_T *vfoptions,
                  real_T cpu_V_data[], int32_T V_size[2],
                  real_T cpu_Policy_data[], int32_T Policy_size[2])
{
  static const int32_T iv[2]{1, 30};
  static const char_T u[30]{'S', 't', 'a', 'r', 't', ' ', 'V', 'a', 'l', 'u',
                            'e', ' ', 'F', 'u', 'n', 'c', 't', 'i', 'o', 'n',
                            ' ', 'I', 't', 'e', 'r', 'a', 't', 'i', 'o', 'n'};
  dim3 block;
  dim3 grid;
  emxArray_real_T gpu_ReturnMatrix;
  emxArray_real_T *cpu_ReturnMatrix;
  const mxArray *m;
  const mxArray *y;
  struct0_T *gpu_Params;
  real_T(*gpu_V0_data)[120040];
  real_T(*gpu_cash_data)[120040];
  real_T(*gpu_x_data)[120040];
  real_T(*gpu_pi_z)[1600];
  real_T(*gpu_pi_z_tranposed)[1600];
  real_T r;
  real_T w;
  real_T *gpu_Policy_data;
  real_T *gpu_V_data;
  real_T *gpu_a_grid_data;
  real_T *gpu_alpha;
  real_T *gpu_beta;
  real_T *gpu_crra;
  real_T *gpu_delta;
  real_T *gpu_upsilon;
  uint64_T numIters;
  int32_T V0_size_idx_0;
  int32_T h_c;
  int32_T n_a;
  int32_T nx;
  int16_T cash_size[2];
  int16_T iv1_idx_0;
  boolean_T Policy_data_outdatedOnCpu;
  boolean_T V_data_outdatedOnCpu;
  boolean_T p;
  boolean_T validLaunchParams;
  checkCudaError(mwCudaMalloc(&gpu_x_data, 120040ULL * sizeof(real_T)),
                 __FILE__, __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_pi_z_tranposed, 1600ULL * sizeof(real_T)),
                 __FILE__, __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_V0_data, 120040ULL * sizeof(real_T)),
                 __FILE__, __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_cash_data, 120040ULL * sizeof(real_T)),
                 __FILE__, __LINE__);
  gpuEmxReset_real_T(&gpu_ReturnMatrix);
  checkCudaError(mwCudaMalloc(&gpu_beta, sizeof(real_T)), __FILE__, __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_crra, sizeof(real_T)), __FILE__, __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_upsilon, sizeof(real_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_alpha, sizeof(real_T)), __FILE__, __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_delta, sizeof(real_T)), __FILE__, __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_Policy_data, 120040ULL * sizeof(real_T)),
                 __FILE__, __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_V_data, 120040ULL * sizeof(real_T)),
                 __FILE__, __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_Params, sizeof(struct0_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_pi_z, 1600ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_a_grid_data, 3001ULL * sizeof(real_T)),
                 __FILE__, __LINE__);
  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);
  cpu_Params->r = p_eqm[0];
  cpu_Params->w = p_eqm[1];
  //  1 First solve the value function
  n_a = a_grid_size[0];
  if (vfoptions->verbose >= 1.0) {
    y = nullptr;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 30, m, &u[0]);
    emlrtAssign(&y, m);
    disp(y, &emlrtMCI);
  }
  checkCudaError(cudaMemcpy(gpu_Params, cpu_Params, sizeof(struct0_T),
                            cudaMemcpyHostToDevice),
                 __FILE__, __LINE__);
  fun_VFI_cuda_kernel1<<<dim3(1U, 1U, 1U), dim3(32U, 1U, 1U)>>>(
      gpu_Params, gpu_delta, gpu_alpha, gpu_upsilon, gpu_crra, gpu_beta);
  //  1.1 the return matrix
  emxInit_real_T(&cpu_ReturnMatrix, &emlrtRTEI);
  cpu_ReturnMatrix->size[0] = n_a;
  cpu_ReturnMatrix->size[1] = n_a;
  cpu_ReturnMatrix->size[2] = 40;
  iv1_idx_0 = static_cast<int16_T>(a_grid_size[0]);
  //  tic
  numIters = computeNumIters(39, n_a - 1);
  mwGetLaunchParameters(numIters, &grid, &block, 2147483647U);
  checkCudaError(
      cudaMemcpy(gpu_a_grid_data, cpu_a_grid_data,
                 static_cast<uint64_T>(a_grid_size[0]) * sizeof(real_T),
                 cudaMemcpyHostToDevice),
      __FILE__, __LINE__);
  checkCudaError(cudaMemcpyToSymbol(const_z_grid, z_grid,
                                    40ULL * sizeof(real_T), 0ULL,
                                    cudaMemcpyHostToDevice),
                 __FILE__, __LINE__);
  validLaunchParams = mwValidateLaunchParameters(grid, block);
  if (validLaunchParams) {
    fun_VFI_cuda_kernel2<<<grid, block>>>(
        gpu_a_grid_data, gpu_Params, p_eqm[0], p_eqm[1], gpu_delta, gpu_alpha,
        gpu_upsilon, n_a, n_a - 1, *gpu_cash_data);
  }
  numIters = computeNumIters(39, n_a - 1, n_a - 1);
  mwGetLaunchParameters(numIters, &grid, &block, 2147483647U);
  gpuEmxEnsureCapacity_real_T(cpu_ReturnMatrix, &gpu_ReturnMatrix, true);
  validLaunchParams = mwValidateLaunchParameters(grid, block);
  if (validLaunchParams) {
    fun_VFI_cuda_kernel3<<<grid, block>>>(
        gpu_a_grid_data, gpu_crra, *gpu_cash_data, n_a, n_a - 1, n_a - 1,
        gpu_ReturnMatrix, cpu_ReturnMatrix->size[0U],
        cpu_ReturnMatrix->size[1U]);
  }
  // end z
  //  time_ret = toc;
  //  1.1 the value and policy function
  V0_size_idx_0 = static_cast<int16_T>(a_grid_size[0]);
  //  Initial guess V0
  V_data_outdatedOnCpu = false;
  V_size[0] = static_cast<int16_T>(a_grid_size[0]);
  V_size[1] = 40;
  Policy_data_outdatedOnCpu = false;
  Policy_size[0] = static_cast<int16_T>(a_grid_size[0]);
  Policy_size[1] = 40;
  r = vfoptions->tolerance + 1.0;
  checkCudaError(cudaMemcpy(*gpu_pi_z, cpu_pi_z, 1600ULL * sizeof(real_T),
                            cudaMemcpyHostToDevice),
                 __FILE__, __LINE__);
  fun_VFI_cuda_kernel4<<<dim3(13U, 1U, 1U), dim3(128U, 1U, 1U)>>>(
      *gpu_pi_z, *gpu_pi_z_tranposed);
  //  tic
  while (r > vfoptions->tolerance) {
    if (V0_size_idx_0 == 0) {
      cash_size[0] = 0;
    } else {
      cash_size[0] = static_cast<int16_T>(V0_size_idx_0);
      r = 1.0;
      w = 0.0;
      cublasDgemm(getCublasGlobalHandle(), CUBLAS_OP_N, CUBLAS_OP_N,
                  V0_size_idx_0, 40, 40, &r, &(*gpu_V0_data)[0], V0_size_idx_0,
                  &(*gpu_pi_z_tranposed)[0], 40, &w, &(*gpu_cash_data)[0],
                  V0_size_idx_0);
    }
    // EV(a',z)
    numIters = computeNumIters(39, n_a - 1);
    mwGetLaunchParameters(numIters, &grid, &block, 2147483647U);
    validLaunchParams = mwValidateLaunchParameters(grid, block);
    if (validLaunchParams) {
      fun_VFI_cuda_kernel5<<<grid, block>>>(
          n_a, gpu_beta, gpu_ReturnMatrix, *gpu_cash_data, Policy_size[0],
          static_cast<int32_T>(cash_size[0]), n_a - 1, gpu_V_data,
          gpu_Policy_data, cpu_ReturnMatrix->size[0U],
          cpu_ReturnMatrix->size[1U]);
    }
    Policy_data_outdatedOnCpu = true;
    V_data_outdatedOnCpu = true;
    //  -------------------------- Howard ----------------------------------%
    V0_size_idx_0 = static_cast<int32_T>(vfoptions->howards);
    for (h_c = 0; h_c < V0_size_idx_0; h_c++) {
      if (iv1_idx_0 == 0) {
        cash_size[0] = 0;
      } else {
        cash_size[0] = iv1_idx_0;
        r = 1.0;
        w = 0.0;
        cublasDgemm(getCublasGlobalHandle(), CUBLAS_OP_N, CUBLAS_OP_N,
                    static_cast<int32_T>(iv1_idx_0), 40, 40, &r, &gpu_V_data[0],
                    static_cast<int32_T>(iv1_idx_0), &(*gpu_pi_z_tranposed)[0],
                    40, &w, &(*gpu_cash_data)[0],
                    static_cast<int32_T>(iv1_idx_0));
      }
      numIters = computeNumIters(39, n_a - 1);
      mwGetLaunchParameters(numIters, &grid, &block, 2147483647U);
      validLaunchParams = mwValidateLaunchParameters(grid, block);
      if (validLaunchParams) {
        fun_VFI_cuda_kernel6<<<grid, block>>>(
            gpu_Policy_data, gpu_beta, gpu_ReturnMatrix, *gpu_cash_data,
            Policy_size[0], static_cast<int32_T>(cash_size[0]), n_a - 1,
            gpu_V_data, cpu_ReturnMatrix->size[0U], cpu_ReturnMatrix->size[1U]);
      }
    }
    // end howards
    //  --------------------------------- ----------------------------------%
    //  Update
    nx = V_size[0] * 40;
    V0_size_idx_0 = iv1_idx_0 * 40 - 1;
    mwGetLaunchParameters(computeNumIters(V0_size_idx_0), &grid, &block,
                          2147483647U);
    validLaunchParams = mwValidateLaunchParameters(grid, block);
    if (validLaunchParams) {
      fun_VFI_cuda_kernel7<<<grid, block>>>(gpu_V_data, *gpu_V0_data,
                                            V0_size_idx_0, *gpu_x_data);
    }
    mwGetLaunchParameters(computeNumIters(iv1_idx_0 * 40 - 1), &grid, &block,
                          2147483647U);
    validLaunchParams = mwValidateLaunchParameters(grid, block);
    if (validLaunchParams) {
      fun_VFI_cuda_kernel8<<<grid, block>>>(*gpu_x_data, nx - 1,
                                            *gpu_cash_data);
    }
    checkCudaError(cudaMemcpy(SD->f0.cpu_cash_data, *gpu_cash_data,
                              120040ULL * sizeof(real_T),
                              cudaMemcpyDeviceToHost),
                   __FILE__, __LINE__);
    r = SD->f0.cpu_cash_data[0];
    for (h_c = 0; h_c <= nx - 2; h_c++) {
      w = SD->f0.cpu_cash_data[h_c + 1];
      if (std::isnan(w)) {
        p = false;
      } else if (std::isnan(r)) {
        p = true;
      } else {
        p = (r < w);
      }
      if (p) {
        r = w;
      }
    }
    //  if verbose == 2
    //      fprintf('iter = %4.0f, err = %f \n',iter,err)
    //  end
    V0_size_idx_0 = iv1_idx_0;
    nx = iv1_idx_0 * 40 - 1;
    mwGetLaunchParameters(computeNumIters(nx), &grid, &block, 2147483647U);
    validLaunchParams = mwValidateLaunchParameters(grid, block);
    if (validLaunchParams) {
      fun_VFI_cuda_kernel9<<<grid, block>>>(gpu_V_data, nx, *gpu_V0_data);
    }
  }
  emxFree_real_T(&cpu_ReturnMatrix);
  // end while
  //  time_vfi = toc;
  //  if verbose >= 1
  //      fprintf('Time return matrix:       %8.6f \n',time_ret);
  //      fprintf('Time vfi:                 %8.6f \n',time_vfi);
  //      fprintf('Time return matrix + vfi: %8.6f \n',time_ret+time_vfi);
  //  end
  emlrtHeapReferenceStackLeaveFcnR2012b(emlrtRootTLSGlobal);
  if (V_data_outdatedOnCpu) {
    checkCudaError(cudaMemcpy(cpu_V_data, gpu_V_data,
                              static_cast<uint64_T>(
                                  static_cast<int16_T>(a_grid_size[0]) * 40) *
                                  sizeof(real_T),
                              cudaMemcpyDeviceToHost),
                   __FILE__, __LINE__);
  }
  if (Policy_data_outdatedOnCpu) {
    checkCudaError(cudaMemcpy(cpu_Policy_data, gpu_Policy_data,
                              static_cast<uint64_T>(
                                  static_cast<int16_T>(a_grid_size[0]) * 40) *
                                  sizeof(real_T),
                              cudaMemcpyDeviceToHost),
                   __FILE__, __LINE__);
  }
  checkCudaError(mwCudaFree(gpu_a_grid_data), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_pi_z), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(gpu_Params), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(gpu_V_data), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(gpu_Policy_data), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(gpu_delta), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(gpu_alpha), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(gpu_upsilon), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(gpu_crra), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(gpu_beta), __FILE__, __LINE__);
  gpuEmxFree_real_T(&gpu_ReturnMatrix);
  checkCudaError(mwCudaFree(*gpu_cash_data), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_V0_data), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_pi_z_tranposed), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_x_data), __FILE__, __LINE__);
}

// End of code generation (fun_VFI_cuda.cu)
