//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// fun_return_cuda.cu
//
// Code generation for function 'fun_return_cuda'
//

// Include files
#include "fun_return_cuda.h"
#include "fun_return_cuda_data.h"
#include "fun_return_cuda_emxutil.h"
#include "fun_return_cuda_types.h"
#include "rt_nonfinite.h"
#include "tic.h"
#include "toc.h"
#include "MWCudaDimUtility.hpp"
#include "MWCudaMemoryFunctions.hpp"
#include "MWLaunchParametersUtilities.hpp"
#include "emlrt.h"
#include "math_constants.h"
#include <cstring>

// Variable Definitions
static emlrtMCInfo emlrtMCI{
    15,                // lineNo
    5,                 // colNo
    "fun_return_cuda", // fName
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_github\\Code heteroAgents\\fun_return_cuda.m" // pName
};

static emlrtRTEInfo b_emlrtRTEI{
    28,                // lineNo
    31,                // colNo
    "fun_return_cuda", // fName
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_github\\Code heteroAgents\\fun_return_cuda.m" // pName
};

__constant__ static real_T const_z_grid[40];

// Function Declarations
static void checkCudaError(cudaError_t errorCode, const char_T *file,
                           int32_T b_line);

static uint64_T computeNumIters(int32_T ub, int32_T b_ub);

static uint64_T computeNumIters(int32_T ub, int32_T b_ub, int32_T c_ub);

static void disp(const mxArray *m, emlrtMCInfo *location);

static __global__ void
fun_return_cuda_kernel1(const real_T a_grid_data[], const real_T r,
                        const real_T w, const real_T lambda, const real_T delta,
                        const real_T alpha, const real_T upsilon,
                        const int32_T cash_size_dim0, const int32_T b,
                        real_T cash_data[120040]);

static __global__ void
fun_return_cuda_kernel2(const real_T a_grid_data[], const real_T crra,
                        const real_T cash_data[120040],
                        const int32_T cash_size_dim0, const int32_T b,
                        const int32_T c, emxArray_real_T ReturnMatrix,
                        int32_T ReturnMatrix_dim0, int32_T ReturnMatrix_dim1);

static void gpuEmxEnsureCapacity_real_T(const emxArray_real_T *cpu,
                                        emxArray_real_T *gpu,
                                        boolean_T needsCopy);

static void gpuEmxFree_real_T(emxArray_real_T *gpu);

static void gpuEmxMemcpyGpuToCpu_real_T(emxArray_real_T *cpu,
                                        const emxArray_real_T *gpu);

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

static void disp(const mxArray *m, emlrtMCInfo *location)
{
  emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 0, nullptr, 1, &m, "disp", true,
                        location);
}

static __global__ __launch_bounds__(256, 1) void fun_return_cuda_kernel1(
    const real_T a_grid_data[], const real_T r, const real_T w,
    const real_T lambda, const real_T delta, const real_T alpha,
    const real_T upsilon, const int32_T cash_size_dim0, const int32_T b,
    real_T cash_data[120040])
{
  real_T b_kstar_tmp;
  real_T c;
  real_T cash_is;
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
    cash_is = (1.0 - alpha) * (1.0 - upsilon);
    kstar_tmp = 1.0 / w * (1.0 - alpha) * (1.0 - upsilon) * const_z_grid[z_c];
    b_kstar_tmp = r + delta;
    c = a_grid_data[a_c];
    kstar = fmin(pow(pow(1.0 / fmax(b_kstar_tmp, 1.0E-8) * alpha *
                             (1.0 - upsilon) * const_z_grid[z_c],
                         1.0 - cash_is) *
                         pow(kstar_tmp, cash_is),
                     1.0 / upsilon),
                 lambda * c);
    cash_is = pow(kstar_tmp * pow(kstar, alpha * (1.0 - upsilon)),
                  1.0 / (1.0 - cash_is));
    //  Evaluate profit if do choose to be entrepreneur
    cash_data[a_c + cash_size_dim0 * z_c] =
        fmax(w, (const_z_grid[z_c] *
                     pow(pow(kstar, alpha) * pow(cash_is, 1.0 - alpha),
                         1.0 - upsilon) -
                 w * cash_is) -
                    b_kstar_tmp * kstar) +
        (r + 1.0) * c;
    //  cash depends only on (a,z)
  }
}

static __global__ __launch_bounds__(256, 1) void fun_return_cuda_kernel2(
    const real_T a_grid_data[], const real_T crra,
    const real_T cash_data[120040], const int32_T cash_size_dim0,
    const int32_T b, const int32_T c, emxArray_real_T ReturnMatrix,
    int32_T ReturnMatrix_dim0, int32_T ReturnMatrix_dim1)
{
  real_T cash_is;
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
    cash_is = cash_data[a_c + cash_size_dim0 * z_c] - a_grid_data[aprime_c];
    if (cash_is > 0.0) {
      ReturnMatrix.data[(aprime_c + ReturnMatrix_dim0 * a_c) +
                        ReturnMatrix_dim0 * ReturnMatrix_dim1 * z_c] =
          pow(cash_is, 1.0 - crra) / (1.0 - crra);
    } else {
      ReturnMatrix.data[(aprime_c + ReturnMatrix_dim0 * a_c) +
                        ReturnMatrix_dim0 * ReturnMatrix_dim1 * z_c] =
          -CUDART_INF;
    }
    // end if
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

static void gpuEmxMemcpyGpuToCpu_real_T(emxArray_real_T *cpu,
                                        const emxArray_real_T *gpu)
{
  int32_T actualSize;
  int32_T i;
  actualSize = 1;
  for (i = 0; i < cpu->numDimensions; i++) {
    actualSize *= cpu->size[i];
  }
  if (gpu->data) {
    checkCudaError(
        cudaMemcpy(cpu->data, gpu->data,
                   static_cast<uint32_T>(actualSize) * sizeof(real_T),
                   cudaMemcpyDeviceToHost),
        __FILE__, __LINE__);
  }
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

void fun_return_cuda(const real_T p_eqm[2], const real_T cpu_a_grid_data[],
                     const int32_T a_grid_size[1], const real_T z_grid[40],
                     struct0_T *Params, const struct1_T *vfoptions,
                     emxArray_real_T *cpu_ReturnMatrix, real_T *time_ret)
{
  static const int32_T iv[2]{1, 30};
  static const char_T u[30]{'S', 't', 'a', 'r', 't', ' ', 'V', 'a', 'l', 'u',
                            'e', ' ', 'F', 'u', 'n', 'c', 't', 'i', 'o', 'n',
                            ' ', 'I', 't', 'e', 'r', 'a', 't', 'i', 'o', 'n'};
  dim3 block;
  dim3 grid;
  emlrtTimespec savedTime;
  emxArray_real_T gpu_ReturnMatrix;
  const mxArray *m;
  const mxArray *y;
  real_T(*gpu_cash_data)[120040];
  real_T alpha;
  real_T crra;
  real_T delta;
  real_T lambda;
  real_T r;
  real_T upsilon;
  real_T w;
  real_T *gpu_a_grid_data;
  uint64_T numIters;
  int32_T cash_size[2];
  int32_T b;
  int32_T n_a;
  boolean_T validLaunchParams;
  checkCudaError(mwCudaMalloc(&gpu_cash_data, 120040ULL * sizeof(real_T)),
                 __FILE__, __LINE__);
  gpuEmxReset_real_T(&gpu_ReturnMatrix);
  checkCudaError(mwCudaMalloc(&gpu_a_grid_data, 3001ULL * sizeof(real_T)),
                 __FILE__, __LINE__);
  Params->r = p_eqm[0];
  Params->w = p_eqm[1];
  //  1 First solve the value function
  n_a = a_grid_size[0];
  if (vfoptions->verbose >= 1.0) {
    y = nullptr;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 30, m, &u[0]);
    emlrtAssign(&y, m);
    disp(y, &emlrtMCI);
  }
  r = p_eqm[0];
  w = p_eqm[1];
  lambda = Params->lambda;
  delta = Params->delta;
  alpha = Params->alpha;
  upsilon = Params->upsilon;
  crra = Params->crra;
  //  beta    = Params.beta;
  //  1.1 the return matrix
  b = cpu_ReturnMatrix->size[0] * cpu_ReturnMatrix->size[1] *
      cpu_ReturnMatrix->size[2];
  cpu_ReturnMatrix->size[0] = n_a;
  cpu_ReturnMatrix->size[1] = n_a;
  cpu_ReturnMatrix->size[2] = 40;
  emxEnsureCapacity_real_T(cpu_ReturnMatrix, b, &b_emlrtRTEI);
  cash_size[0] = n_a;
  coder::tic(&savedTime);
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
    fun_return_cuda_kernel1<<<grid, block>>>(
        gpu_a_grid_data, r, w, lambda, delta, alpha, upsilon, cash_size[0],
        n_a - 1, *gpu_cash_data);
  }
  numIters = computeNumIters(39, n_a - 1, n_a - 1);
  mwGetLaunchParameters(numIters, &grid, &block, 2147483647U);
  gpuEmxEnsureCapacity_real_T(cpu_ReturnMatrix, &gpu_ReturnMatrix, true);
  validLaunchParams = mwValidateLaunchParameters(grid, block);
  if (validLaunchParams) {
    fun_return_cuda_kernel2<<<grid, block>>>(
        gpu_a_grid_data, crra, *gpu_cash_data, cash_size[0], n_a - 1, n_a - 1,
        gpu_ReturnMatrix, cpu_ReturnMatrix->size[0U],
        cpu_ReturnMatrix->size[1U]);
  }
  // end z
  *time_ret = coder::toc(&savedTime);
  //  %% 1.1 the value and policy function
  //
  //  V0     = coder.nullcopy(zeros(n_a,n_z)) ; % Initial guess V0
  //  V      = coder.nullcopy(zeros(n_a,n_z)) ;
  //  Policy = coder.nullcopy(zeros(n_a,n_z)) ;
  //
  //  err  = vfoptions.tolerance+1;
  //  iter = 1;
  //
  //  pi_z_tranposed = pi_z';
  //
  //  tic
  //  while err > vfoptions.tolerance
  //
  //      EV = V0*pi_z_tranposed; %EV(a',z)
  //
  //      coder.gpu.kernel()
  //      for z_c=1:n_z
  //          for a_c=1:n_a
  //              tmpmax = - Inf ;
  //              maxid = 1 ;
  //              for aprime_c = 1 : n_a
  //
  //                  coder.gpu.constantMemory(ReturnMatrix);
  //                  coder.gpu.constantMemory(EV);
  //
  //                  entireRHS = ReturnMatrix(aprime_c,a_c,z_c) +
  //                  beta*EV(aprime_c,z_c); if tmpmax < entireRHS
  //                      tmpmax = entireRHS ;
  //                      maxid = aprime_c ;
  //                  end
  //                  V(a_c,z_c)      = tmpmax;
  //                  Policy(a_c,z_c) = maxid;
  //              end
  //          end
  //      end
  //
  //      % -------------------------- Howard
  //      ----------------------------------% for h_c = 1 : vfoptions.howards
  //
  //          EVh = V*pi_z_tranposed;
  //
  //          coder.gpu.kernel()
  //          for z_c = 1:n_z
  //              for a_c = 1:n_a
  //
  //                  coder.gpu.constantMemory(Policy);
  //                  coder.gpu.constantMemory(ReturnMatrix);
  //                  coder.gpu.constantMemory(EVh);
  //
  //                  aprime_opt = Policy(a_c,z_c) ;
  //                  V(a_c,z_c) = ReturnMatrix(aprime_opt,a_c,z_c) +
  //                  beta*EVh(aprime_opt,z_c) ;
  //              end
  //          end
  //      end %end howards
  //      % ---------------------------------
  //      ----------------------------------%
  //
  //      % Update
  //      err = max(abs(V(:)-V0(:)));
  //      % if verbose == 2
  //      %     fprintf('iter = %4.0f, err = %f \n',iter,err)
  //      % end
  //      V0 = V;
  //      iter = iter+1;
  //
  //  end %end while
  //  time_vfi = toc;
  //
  //  if verbose >= 1
  //      fprintf('Time return matrix:       %8.6f \n',time_ret);
  //      fprintf('Time vfi:                 %8.6f \n',time_vfi);
  //      fprintf('Time return matrix + vfi: %8.6f \n',time_ret+time_vfi);
  //  end
  gpuEmxMemcpyGpuToCpu_real_T(cpu_ReturnMatrix, &gpu_ReturnMatrix);
  checkCudaError(mwCudaFree(gpu_a_grid_data), __FILE__, __LINE__);
  gpuEmxFree_real_T(&gpu_ReturnMatrix);
  checkCudaError(mwCudaFree(*gpu_cash_data), __FILE__, __LINE__);
}

// End of code generation (fun_return_cuda.cu)
