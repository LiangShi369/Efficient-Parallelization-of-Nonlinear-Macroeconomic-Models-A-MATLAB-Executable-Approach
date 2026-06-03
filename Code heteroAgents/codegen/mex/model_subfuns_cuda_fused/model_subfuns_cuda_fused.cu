//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// model_subfuns_cuda_fused.cu
//
// Code generation for function 'model_subfuns_cuda_fused'
//

// Include files
#include "model_subfuns_cuda_fused.h"
#include "model_subfuns_cuda_fused_data.h"
#include "model_subfuns_cuda_fused_mexutil.h"
#include "model_subfuns_cuda_fused_types.h"
#include "rt_nonfinite.h"
#include "MWAtomicUtility.hpp"
#include "MWCUBLASUtils.hpp"
#include "MWCudaDimUtility.hpp"
#include "MWCudaMemoryFunctions.hpp"
#include "math_constants.h"
#include <cmath>

// Variable Definitions
static emlrtMCInfo emlrtMCI{
    66,                                                             // lineNo
    18,                                                             // colNo
    "fprintf",                                                      // fName
    "D:\\Matlab_2026a\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m" // pName
};

// Function Declarations
static __global__ void
ab_model_subfuns_cuda_fused_ker(const real_T E_vec[80040], real_T *crra);

static
#ifdef __CUDACC__
    __device__
#endif
        real_T
        atomicOpreal_T(real_T *address, real_T b_value);

static __global__ void
bb_model_subfuns_cuda_fused_ker(const real_T E_vec[80040], real_T *crra);

static __global__ void c_model_subfuns_cuda_fused_kern(
    const real_T a_grid[2001], const real_T z_grid[40], const real_T r,
    const real_T w, const real_T lambda, const real_T delta, const real_T alpha,
    const real_T upsilon, real_T cash[80040]);

static void checkCudaError(cudaError_t errorCode, const char_T *file,
                           int32_T b_line);

static __global__ void
d_model_subfuns_cuda_fused_kern(const real_T a_grid[2001], const real_T crra,
                                const real_T cash[80040],
                                real_T ReturnMatrix[160160040]);

static __global__ void e_model_subfuns_cuda_fused_kern(real_T V[80040],
                                                       real_T Policy[80040],
                                                       real_T V0[80040],
                                                       real_T E_vec[80040]);

static real_T emlrt_marshallIn(const mxArray *a__output_of_feval_,
                               const char_T *identifier);

static __global__ void
f_model_subfuns_cuda_fused_kern(const real_T pi_z[1600],
                                real_T pi_z_transposed[1600]);

static const mxArray *feval(const mxArray *m1, const mxArray *m2,
                            const mxArray *m3, const mxArray *m4,
                            emlrtMCInfo *location);

static const mxArray *feval(const mxArray *m1, const mxArray *m2,
                            const mxArray *m3, emlrtMCInfo *location);

static __global__ void
g_model_subfuns_cuda_fused_kern(const real_T beta, const real_T cash[80040],
                                const real_T ReturnMatrix[160160040],
                                real_T V[80040], real_T Policy[80040]);

static void gpuThrowError(uint32_T errorCode, const char_T *errorName,
                          const char_T *errorString, const char_T *file,
                          int32_T b_line);

static __global__ void h_model_subfuns_cuda_fused_kern(
    const real_T Policy[80040], const real_T beta, const real_T cash[80040],
    const real_T ReturnMatrix[160160040], real_T V[80040]);

static __global__ void i_model_subfuns_cuda_fused_kern(const real_T V[80040],
                                                       real_T cash[80040],
                                                       real_T V0[80040]);

static __global__ void j_model_subfuns_cuda_fused_kern(const real_T V[80040],
                                                       real_T V0[80040]);

static __global__ void k_model_subfuns_cuda_fused_kern(real_T StatDist[80040],
                                                       real_T V0[80040]);

static __global__ void l_model_subfuns_cuda_fused_kern(real_T cash[80040]);

static __global__ void
m_model_subfuns_cuda_fused_kern(const real_T Policy[80040],
                                const real_T V0[80040], real_T cash[80040]);

static __global__ void
n_model_subfuns_cuda_fused_kern(const real_T StatDist[80040],
                                real_T cash[80040], real_T V0[80040]);

static __global__ void
o_model_subfuns_cuda_fused_kern(const real_T StatDist[80040], real_T V0[80040]);

static __global__ void
p_model_subfuns_cuda_fused_kern(const real_T StatDist[80040],
                                real_T *check_sum);

static __global__ void
q_model_subfuns_cuda_fused_kern(const real_T StatDist[80040],
                                real_T *check_sum);

static __global__ void r_model_subfuns_cuda_fused_kern(const real_T *check_sum,
                                                       real_T StatDist[80040],
                                                       real_T cash[80040],
                                                       real_T V0[80040]);

static __global__ void s_model_subfuns_cuda_fused_kern(
    const real_T a_grid[2001], const real_T z_grid[40],
    const real_T StatDist[80040], const real_T r, const real_T w,
    const real_T lambda, const real_T delta, const real_T alpha,
    const real_T upsilon, real_T cash[80040], real_T V0[80040],
    real_T A_vec[80040], real_T E_vec[80040]);

static
#ifdef __CUDACC__
    __device__
#endif
        real_T
        shflDown2(real_T in1, uint32_T offset, uint32_T mask);

static __global__ void
t_model_subfuns_cuda_fused_kern(const real_T A_vec[80040], real_T *check_sum);

static
#ifdef __CUDACC__
    __device__
#endif
        real_T
        threadGroupReduction(real_T val, uint32_T lane, uint32_T mask);

static __global__ void
u_model_subfuns_cuda_fused_kern(const real_T A_vec[80040], real_T *check_sum);

static __global__ void v_model_subfuns_cuda_fused_kern(const real_T cash[80040],
                                                       real_T *beta);

static __global__ void w_model_subfuns_cuda_fused_kern(const real_T cash[80040],
                                                       real_T *beta);

static
#ifdef __CUDACC__
    __device__
#endif
        real_T
        workGroupReduction(real_T val, uint32_T mask, uint32_T numActiveWarps);

static __global__ void x_model_subfuns_cuda_fused_kern(const real_T V0[80040],
                                                       real_T *err);

static __global__ void y_model_subfuns_cuda_fused_kern(const real_T V0[80040],
                                                       real_T *err);

// Function Definitions
static __global__ __launch_bounds__(32, 1) void ab_model_subfuns_cuda_fused_ker(
    const real_T E_vec[80040], real_T *crra)
{
  int32_T tmpIdx;
  tmpIdx = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (tmpIdx < 1) {
    *crra = E_vec[0];
  }
}

static __device__ real_T atomicOpreal_T(real_T *address, real_T b_value)
{
  unsigned long long int assumed;
  unsigned long long int old;
  unsigned long long int *address_as_up;
  address_as_up = (unsigned long long int *)address;
  old = *address_as_up;
  do {
    assumed = old;
    old = atomicCAS(address_as_up, old,
                    __double_as_longlong(b_value + __longlong_as_double(old)));
  } while (assumed != old);
  return __longlong_as_double(old);
}

static __global__ __launch_bounds__(
    1024, 1) void bb_model_subfuns_cuda_fused_ker(const real_T E_vec[80040],
                                                  real_T *crra)
{
  real_T tmpRed0;
  uint64_T idx;
  uint64_T loopEnd;
  uint64_T threadId;
  uint64_T threadStride;
  uint32_T blockStride;
  uint32_T m;
  threadStride = mwGetTotalThreadsLaunched();
  threadId = mwGetGlobalThreadIndex();
  blockStride = mwGetThreadsPerBlock();
  loopEnd = 80039ULL - 1ULL;
  if (mwGetBlockIndex() == 80039U / blockStride) {
    m = 80039ULL % static_cast<uint64_T>(blockStride);
    if (m > 0U) {
      blockStride = m;
    }
  }
  if (threadId <= loopEnd) {
    tmpRed0 = E_vec[static_cast<int32_T>(threadId) + 1];
  }
  m = __ballot_sync(MAX_uint32_T, threadId <= loopEnd);
  for (idx = threadId + threadStride; idx <= loopEnd; idx += threadStride) {
    tmpRed0 += E_vec[static_cast<int32_T>(idx) + 1];
  }
  tmpRed0 = workGroupReduction(tmpRed0, m,
                               (uint32_T)(blockStride + (32U - 1U)) / 32U);
  if ((threadId <= loopEnd) && (mwGetThreadIndexWithinBlock() == 0U)) {
    atomicOpreal_T(&crra[0], tmpRed0);
  }
}

static __global__
    __launch_bounds__(256, 1) void c_model_subfuns_cuda_fused_kern(
        const real_T a_grid[2001], const real_T z_grid[40], const real_T r,
        const real_T w, const real_T lambda, const real_T delta,
        const real_T alpha, const real_T upsilon, real_T cash[80040])
{
  real_T b;
  real_T b_kstar_tmp;
  real_T c;
  real_T kstar;
  real_T kstar_tmp;
  real_T tmpmax;
  uint64_T gThreadId;
  int32_T a_c;
  int32_T z_c;
  gThreadId = mwGetGlobalThreadIndex();
  a_c = static_cast<int32_T>(gThreadId % 2001ULL);
  z_c =
      static_cast<int32_T>((gThreadId - static_cast<uint64_T>(a_c)) / 2001ULL);
  if ((z_c < 40) && (a_c < 2001)) {
    //  This function solve the entrepreneurs' static maximization problem. See
    //  Robert's App_BueraShin2013.pdf for more details.
    //  Get k1, kstar, lstar
    // aux    = 1-(1-alpha)*(1-upsilon);
    tmpmax = (1.0 - alpha) * (1.0 - upsilon);
    b = z_grid[z_c];
    kstar_tmp = 1.0 / w * (1.0 - alpha) * (1.0 - upsilon) * b;
    b_kstar_tmp = r + delta;
    c = a_grid[a_c];
    kstar = fmin(
        pow(pow(1.0 / fmax(b_kstar_tmp, 1.0E-8) * alpha * (1.0 - upsilon) * b,
                1.0 - tmpmax) *
                pow(kstar_tmp, tmpmax),
            1.0 / upsilon),
        lambda * c);
    tmpmax = pow(kstar_tmp * pow(kstar, alpha * (1.0 - upsilon)),
                 1.0 / (1.0 - tmpmax));
    //  Evaluate profit if do choose to be entrepreneur
    cash[a_c + 2001 * z_c] =
        fmax(w, (b * pow(pow(kstar, alpha) * pow(tmpmax, 1.0 - alpha),
                         1.0 - upsilon) -
                 w * tmpmax) -
                    b_kstar_tmp * kstar) +
        (r + 1.0) * c;
  }
}

static void checkCudaError(cudaError_t errorCode, const char_T *file,
                           int32_T b_line)
{
  if (errorCode != cudaSuccess) {
    gpuThrowError(errorCode, cudaGetErrorName(errorCode),
                  cudaGetErrorString(errorCode), file, b_line);
  }
}

static __global__ __launch_bounds__(
    256, 1) void d_model_subfuns_cuda_fused_kern(const real_T a_grid[2001],
                                                 const real_T crra,
                                                 const real_T cash[80040],
                                                 real_T ReturnMatrix[160160040])
{
  real_T tmpmax;
  uint64_T gThreadId;
  int32_T a_c;
  int32_T aprime_c;
  int32_T z_c;
  gThreadId = mwGetGlobalThreadIndex();
  aprime_c = static_cast<int32_T>(gThreadId % 2001ULL);
  gThreadId = (gThreadId - static_cast<uint64_T>(aprime_c)) / 2001ULL;
  a_c = static_cast<int32_T>(gThreadId % 2001ULL);
  gThreadId = (gThreadId - static_cast<uint64_T>(a_c)) / 2001ULL;
  z_c = static_cast<int32_T>(gThreadId);
  if ((z_c < 40) && (a_c < 2001) && (aprime_c < 2001)) {
    tmpmax = cash[a_c + 2001 * z_c] - a_grid[aprime_c];
    if (tmpmax > 0.0) {
      if (crra == 1.5) {
        ReturnMatrix[(aprime_c + 2001 * a_c) + 4004001 * z_c] =
            -2.0 / sqrt(tmpmax);
      } else {
        ReturnMatrix[(aprime_c + 2001 * a_c) + 4004001 * z_c] =
            pow(tmpmax, 1.0 - crra) / (1.0 - crra);
      }
    } else {
      ReturnMatrix[(aprime_c + 2001 * a_c) + 4004001 * z_c] = -CUDART_INF;
    }
  }
}

static __global__ __launch_bounds__(
    256, 1) void e_model_subfuns_cuda_fused_kern(real_T V[80040],
                                                 real_T Policy[80040],
                                                 real_T V0[80040],
                                                 real_T E_vec[80040])
{
  int32_T k;
  k = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (k < 80040) {
    E_vec[k] = 0.0;
    V0[k] = 0.0;
    V[k] = 0.0;
    Policy[k] = 0.0;
  }
}

static real_T emlrt_marshallIn(const mxArray *a__output_of_feval_,
                               const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  real_T y;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  y = emlrt_marshallIn(emlrtAlias(a__output_of_feval_), &thisId);
  emlrtDestroyArray(&a__output_of_feval_);
  return y;
}

static __global__ __launch_bounds__(
    128, 1) void f_model_subfuns_cuda_fused_kern(const real_T pi_z[1600],
                                                 real_T pi_z_transposed[1600])
{
  uint64_T gThreadId;
  int32_T aprime_c;
  int32_T k;
  gThreadId = mwGetGlobalThreadIndex();
  aprime_c = static_cast<int32_T>(gThreadId % 40ULL);
  k = static_cast<int32_T>((gThreadId - static_cast<uint64_T>(aprime_c)) /
                           40ULL);
  if ((k < 40) && (aprime_c < 40)) {
    pi_z_transposed[aprime_c + 40 * k] = pi_z[k + 40 * aprime_c];
  }
}

static const mxArray *feval(const mxArray *m1, const mxArray *m2,
                            const mxArray *m3, const mxArray *m4,
                            emlrtMCInfo *location)
{
  const mxArray *pArrays[4];
  const mxArray *m5;
  pArrays[0] = m1;
  pArrays[1] = m2;
  pArrays[2] = m3;
  pArrays[3] = m4;
  return emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 1, &m5, 4, &pArrays[0],
                               "feval", true, location);
}

static const mxArray *feval(const mxArray *m1, const mxArray *m2,
                            const mxArray *m3, emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  const mxArray *m4;
  pArrays[0] = m1;
  pArrays[1] = m2;
  pArrays[2] = m3;
  return emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 1, &m4, 3, &pArrays[0],
                               "feval", true, location);
}

static __global__
    __launch_bounds__(256, 1) void g_model_subfuns_cuda_fused_kern(
        const real_T beta, const real_T cash[80040],
        const real_T ReturnMatrix[160160040], real_T V[80040],
        real_T Policy[80040])
{
  real_T rhs;
  real_T tmpmax;
  uint64_T gThreadId;
  int32_T a_c;
  int32_T aprime_c;
  int32_T k;
  int32_T z_c;
  gThreadId = mwGetGlobalThreadIndex();
  a_c = static_cast<int32_T>(gThreadId % 2001ULL);
  z_c =
      static_cast<int32_T>((gThreadId - static_cast<uint64_T>(a_c)) / 2001ULL);
  if ((z_c < 40) && (a_c < 2001)) {
    tmpmax = -CUDART_INF;
    k = a_c + 2001 * z_c;
    Policy[k] = 1.0;
    for (aprime_c = 0; aprime_c < 2001; aprime_c++) {
      rhs = ReturnMatrix[(aprime_c + 2001 * a_c) + 4004001 * z_c] +
            beta * cash[aprime_c + 2001 * z_c];
      if (rhs > tmpmax) {
        tmpmax = rhs;
        Policy[k] = static_cast<real_T>(aprime_c) + 1.0;
      }
    }
    V[k] = tmpmax;
  }
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

static __global__
    __launch_bounds__(256, 1) void h_model_subfuns_cuda_fused_kern(
        const real_T Policy[80040], const real_T beta, const real_T cash[80040],
        const real_T ReturnMatrix[160160040], real_T V[80040])
{
  real_T b;
  uint64_T gThreadId;
  int32_T a_c;
  int32_T aprime_c;
  int32_T k;
  int32_T z_c;
  gThreadId = mwGetGlobalThreadIndex();
  a_c = static_cast<int32_T>(gThreadId % 2001ULL);
  z_c =
      static_cast<int32_T>((gThreadId - static_cast<uint64_T>(a_c)) / 2001ULL);
  if ((z_c < 40) && (a_c < 2001)) {
    aprime_c = a_c + 2001 * z_c;
    b = Policy[aprime_c];
    if (b < 2.147483648E+9) {
      k = static_cast<int32_T>(b);
    } else {
      k = MAX_int32_T;
    }
    V[aprime_c] = ReturnMatrix[((k + 2001 * a_c) + 4004001 * z_c) - 1] +
                  beta * cash[(k + 2001 * z_c) - 1];
  }
}

static __global__
    __launch_bounds__(256, 1) void i_model_subfuns_cuda_fused_kern(
        const real_T V[80040], real_T cash[80040], real_T V0[80040])
{
  real_T b;
  int32_T k;
  k = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (k < 80040) {
    b = V[k] - V0[k];
    V0[k] = b;
    cash[k] = fabs(b);
  }
}

static __global__ __launch_bounds__(
    256, 1) void j_model_subfuns_cuda_fused_kern(const real_T V[80040],
                                                 real_T V0[80040])
{
  int32_T k;
  k = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (k < 80040) {
    V0[k] = V[k];
  }
}

static __global__ __launch_bounds__(
    256, 1) void k_model_subfuns_cuda_fused_kern(real_T StatDist[80040],
                                                 real_T V0[80040])
{
  int32_T k;
  k = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (k < 80040) {
    V0[k] = 1.2493753123438281E-5;
    StatDist[k] = 0.0;
  }
}

static __global__ __launch_bounds__(
    256, 1) void l_model_subfuns_cuda_fused_kern(real_T cash[80040])
{
  int32_T k;
  k = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (k < 80040) {
    cash[k] = 0.0;
  }
}

static __global__
    __launch_bounds__(256, 1) void m_model_subfuns_cuda_fused_kern(
        const real_T Policy[80040], const real_T V0[80040], real_T cash[80040])
{
  real_T b;
  uint64_T gThreadId;
  int32_T a_c;
  int32_T k;
  int32_T z_c;
  gThreadId = mwGetGlobalThreadIndex();
  a_c = static_cast<int32_T>(gThreadId % 2001ULL);
  z_c =
      static_cast<int32_T>((gThreadId - static_cast<uint64_T>(a_c)) / 2001ULL);
  if ((z_c < 40) && (a_c < 2001)) {
    a_c += 2001 * z_c;
    b = Policy[a_c];
    if (b < 2.147483648E+9) {
      k = static_cast<int32_T>(b);
    } else {
      k = MAX_int32_T;
    }
    gpu_atomicAdd(&cash[(k + 2001 * z_c) - 1], V0[a_c]);
  }
}

static __global__
    __launch_bounds__(256, 1) void n_model_subfuns_cuda_fused_kern(
        const real_T StatDist[80040], real_T cash[80040], real_T V0[80040])
{
  real_T b;
  int32_T k;
  k = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (k < 80040) {
    b = StatDist[k] - V0[k];
    V0[k] = b;
    cash[k] = fabs(b);
  }
}

static __global__ __launch_bounds__(
    256, 1) void o_model_subfuns_cuda_fused_kern(const real_T StatDist[80040],
                                                 real_T V0[80040])
{
  int32_T k;
  k = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (k < 80040) {
    V0[k] = StatDist[k];
  }
}

static __global__ __launch_bounds__(32, 1) void p_model_subfuns_cuda_fused_kern(
    const real_T StatDist[80040], real_T *check_sum)
{
  int32_T tmpIdx;
  tmpIdx = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (tmpIdx < 1) {
    *check_sum = StatDist[0];
  }
}

static __global__ __launch_bounds__(
    1024, 1) void q_model_subfuns_cuda_fused_kern(const real_T StatDist[80040],
                                                  real_T *check_sum)
{
  real_T tmpRed0;
  uint64_T idx;
  uint64_T loopEnd;
  uint64_T threadId;
  uint64_T threadStride;
  uint32_T blockStride;
  uint32_T m;
  threadStride = mwGetTotalThreadsLaunched();
  threadId = mwGetGlobalThreadIndex();
  blockStride = mwGetThreadsPerBlock();
  loopEnd = 80039ULL - 1ULL;
  if (mwGetBlockIndex() == 80039U / blockStride) {
    m = 80039ULL % static_cast<uint64_T>(blockStride);
    if (m > 0U) {
      blockStride = m;
    }
  }
  if (threadId <= loopEnd) {
    tmpRed0 = StatDist[static_cast<int32_T>(threadId) + 1];
  }
  m = __ballot_sync(MAX_uint32_T, threadId <= loopEnd);
  for (idx = threadId + threadStride; idx <= loopEnd; idx += threadStride) {
    tmpRed0 += StatDist[static_cast<int32_T>(idx) + 1];
  }
  tmpRed0 = workGroupReduction(tmpRed0, m,
                               (uint32_T)(blockStride + (32U - 1U)) / 32U);
  if ((threadId <= loopEnd) && (mwGetThreadIndexWithinBlock() == 0U)) {
    atomicOpreal_T(&check_sum[0], tmpRed0);
  }
}

static __global__ __launch_bounds__(
    256, 1) void r_model_subfuns_cuda_fused_kern(const real_T *check_sum,
                                                 real_T StatDist[80040],
                                                 real_T cash[80040],
                                                 real_T V0[80040])
{
  int32_T k;
  k = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (k < 80040) {
    StatDist[k] /= *check_sum;
    cash[k] = 0.0;
    V0[k] = 0.0;
  }
}

static __global__
    __launch_bounds__(256, 1) void s_model_subfuns_cuda_fused_kern(
        const real_T a_grid[2001], const real_T z_grid[40],
        const real_T StatDist[80040], const real_T r, const real_T w,
        const real_T lambda, const real_T delta, const real_T alpha,
        const real_T upsilon, real_T cash[80040], real_T V0[80040],
        real_T A_vec[80040], real_T E_vec[80040])
{
  real_T b;
  real_T b_kstar_tmp;
  real_T kstar;
  real_T kstar_tmp;
  real_T rhs;
  real_T tmpmax;
  uint64_T gThreadId;
  int32_T a_c;
  int32_T z_c;
  gThreadId = mwGetGlobalThreadIndex();
  a_c = static_cast<int32_T>(gThreadId % 2001ULL);
  z_c =
      static_cast<int32_T>((gThreadId - static_cast<uint64_T>(a_c)) / 2001ULL);
  if ((z_c < 40) && (a_c < 2001)) {
    //  This function solve the entrepreneurs' static maximization problem. See
    //  Robert's App_BueraShin2013.pdf for more details.
    //  Get k1, kstar, lstar
    // aux    = 1-(1-alpha)*(1-upsilon);
    tmpmax = (1.0 - alpha) * (1.0 - upsilon);
    b = z_grid[z_c];
    kstar_tmp = 1.0 / w * (1.0 - alpha) * (1.0 - upsilon) * b;
    b_kstar_tmp = r + delta;
    rhs = a_grid[a_c];
    kstar = fmin(
        pow(pow(1.0 / fmax(b_kstar_tmp, 1.0E-8) * alpha * (1.0 - upsilon) * b,
                1.0 - tmpmax) *
                pow(kstar_tmp, tmpmax),
            1.0 / upsilon),
        lambda * rhs);
    tmpmax = pow(kstar_tmp * pow(kstar, alpha * (1.0 - upsilon)),
                 1.0 / (1.0 - tmpmax));
    //  Evaluate profit if do choose to be entrepreneur
    a_c += 2001 * z_c;
    kstar_tmp = StatDist[a_c];
    A_vec[a_c] = rhs * kstar_tmp;
    if (w <=
        (b * pow(pow(kstar, alpha) * pow(tmpmax, 1.0 - alpha), 1.0 - upsilon) -
         w * tmpmax) -
            b_kstar_tmp * kstar) {
      E_vec[a_c] = kstar_tmp;
      cash[a_c] = kstar * kstar_tmp;
      V0[a_c] = tmpmax * kstar_tmp;
    }
  }
}

static __device__ real_T shflDown2(real_T in1, uint32_T offset, uint32_T mask)
{
  int2 tmp;
  tmp.x = __shfl_down_sync(mask, ((int2 *)&in1)->x, offset);
  tmp.y = __shfl_down_sync(mask, ((int2 *)&in1)->y, offset);
  return *(real_T *)&tmp;
}

static __global__ __launch_bounds__(32, 1) void t_model_subfuns_cuda_fused_kern(
    const real_T A_vec[80040], real_T *check_sum)
{
  int32_T tmpIdx;
  tmpIdx = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (tmpIdx < 1) {
    *check_sum = A_vec[0];
  }
}

static __device__ real_T threadGroupReduction(real_T val, uint32_T lane,
                                              uint32_T mask)
{
  real_T b_val;
  uint32_T offset;
  mask = __popc(mask);
  offset = (mask + 1U) / 2U;
  while (mask > 1U) {
    b_val = shflDown2(val, offset, MAX_uint32_T);
    if (lane + offset < mask) {
      val += b_val;
    }
    mask = offset;
    offset = (offset + 1U) / 2U;
  }
  return val;
}

static __global__ __launch_bounds__(
    1024, 1) void u_model_subfuns_cuda_fused_kern(const real_T A_vec[80040],
                                                  real_T *check_sum)
{
  real_T tmpRed0;
  uint64_T idx;
  uint64_T loopEnd;
  uint64_T threadId;
  uint64_T threadStride;
  uint32_T blockStride;
  uint32_T m;
  threadStride = mwGetTotalThreadsLaunched();
  threadId = mwGetGlobalThreadIndex();
  blockStride = mwGetThreadsPerBlock();
  loopEnd = 80039ULL - 1ULL;
  if (mwGetBlockIndex() == 80039U / blockStride) {
    m = 80039ULL % static_cast<uint64_T>(blockStride);
    if (m > 0U) {
      blockStride = m;
    }
  }
  if (threadId <= loopEnd) {
    tmpRed0 = A_vec[static_cast<int32_T>(threadId) + 1];
  }
  m = __ballot_sync(MAX_uint32_T, threadId <= loopEnd);
  for (idx = threadId + threadStride; idx <= loopEnd; idx += threadStride) {
    tmpRed0 += A_vec[static_cast<int32_T>(idx) + 1];
  }
  tmpRed0 = workGroupReduction(tmpRed0, m,
                               (uint32_T)(blockStride + (32U - 1U)) / 32U);
  if ((threadId <= loopEnd) && (mwGetThreadIndexWithinBlock() == 0U)) {
    atomicOpreal_T(&check_sum[0], tmpRed0);
  }
}

static __global__ __launch_bounds__(32, 1) void v_model_subfuns_cuda_fused_kern(
    const real_T cash[80040], real_T *beta)
{
  int32_T tmpIdx;
  tmpIdx = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (tmpIdx < 1) {
    *beta = cash[0];
  }
}

static __global__ __launch_bounds__(
    1024, 1) void w_model_subfuns_cuda_fused_kern(const real_T cash[80040],
                                                  real_T *beta)
{
  real_T tmpRed0;
  uint64_T idx;
  uint64_T loopEnd;
  uint64_T threadId;
  uint64_T threadStride;
  uint32_T blockStride;
  uint32_T m;
  threadStride = mwGetTotalThreadsLaunched();
  threadId = mwGetGlobalThreadIndex();
  blockStride = mwGetThreadsPerBlock();
  loopEnd = 80039ULL - 1ULL;
  if (mwGetBlockIndex() == 80039U / blockStride) {
    m = 80039ULL % static_cast<uint64_T>(blockStride);
    if (m > 0U) {
      blockStride = m;
    }
  }
  if (threadId <= loopEnd) {
    tmpRed0 = cash[static_cast<int32_T>(threadId) + 1];
  }
  m = __ballot_sync(MAX_uint32_T, threadId <= loopEnd);
  for (idx = threadId + threadStride; idx <= loopEnd; idx += threadStride) {
    tmpRed0 += cash[static_cast<int32_T>(idx) + 1];
  }
  tmpRed0 = workGroupReduction(tmpRed0, m,
                               (uint32_T)(blockStride + (32U - 1U)) / 32U);
  if ((threadId <= loopEnd) && (mwGetThreadIndexWithinBlock() == 0U)) {
    atomicOpreal_T(&beta[0], tmpRed0);
  }
}

static __device__ real_T workGroupReduction(real_T val, uint32_T mask,
                                            uint32_T numActiveWarps)
{
  __shared__ real_T shared[32];
  uint32_T lane;
  uint32_T thBlkId;
  thBlkId = mwGetThreadIndexWithinBlock();
  lane = thBlkId % 32U;
  thBlkId /= 32U;
  val = threadGroupReduction(val, lane, mask);
  if (lane == 0U) {
    shared[thBlkId] = val;
  }
  __syncthreads();
  mask = __ballot_sync(MAX_uint32_T, lane < numActiveWarps);
  val = shared[lane];
  if (thBlkId == 0U) {
    val = threadGroupReduction(val, lane, mask);
  }
  return val;
}

static __global__ __launch_bounds__(32, 1) void x_model_subfuns_cuda_fused_kern(
    const real_T V0[80040], real_T *err)
{
  int32_T tmpIdx;
  tmpIdx = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (tmpIdx < 1) {
    *err = V0[0];
  }
}

static __global__ __launch_bounds__(
    1024, 1) void y_model_subfuns_cuda_fused_kern(const real_T V0[80040],
                                                  real_T *err)
{
  real_T tmpRed0;
  uint64_T idx;
  uint64_T loopEnd;
  uint64_T threadId;
  uint64_T threadStride;
  uint32_T blockStride;
  uint32_T m;
  threadStride = mwGetTotalThreadsLaunched();
  threadId = mwGetGlobalThreadIndex();
  blockStride = mwGetThreadsPerBlock();
  loopEnd = 80039ULL - 1ULL;
  if (mwGetBlockIndex() == 80039U / blockStride) {
    m = 80039ULL % static_cast<uint64_T>(blockStride);
    if (m > 0U) {
      blockStride = m;
    }
  }
  if (threadId <= loopEnd) {
    tmpRed0 = V0[static_cast<int32_T>(threadId) + 1];
  }
  m = __ballot_sync(MAX_uint32_T, threadId <= loopEnd);
  for (idx = threadId + threadStride; idx <= loopEnd; idx += threadStride) {
    tmpRed0 += V0[static_cast<int32_T>(idx) + 1];
  }
  tmpRed0 = workGroupReduction(tmpRed0, m,
                               (uint32_T)(blockStride + (32U - 1U)) / 32U);
  if ((threadId <= loopEnd) && (mwGetThreadIndexWithinBlock() == 0U)) {
    atomicOpreal_T(&err[0], tmpRed0);
  }
}

void model_subfuns_cuda_fused(
    c_model_subfuns_cuda_fusedStack *SD, const real_T p_eqm[2],
    const real_T cpu_a_grid[2001], const real_T cpu_z_grid[40],
    const real_T cpu_pi_z[1600], const struct0_T *Params,
    const struct1_T *vfoptions, const struct2_T *simoptions,
    const struct3_T *heteroagentoptions, real_T *val, real_T cpu_V[80040],
    real_T cpu_Policy[80040], real_T cpu_StatDist[80040])
{
  static const int32_T iv[2]{1, 7};
  static const int32_T iv1[2]{1, 21};
  static const int32_T iv10[2]{1, 7};
  static const int32_T iv11[2]{1, 24};
  static const int32_T iv12[2]{1, 7};
  static const int32_T iv13[2]{1, 43};
  static const int32_T iv2[2]{1, 7};
  static const int32_T iv3[2]{1, 27};
  static const int32_T iv4[2]{1, 7};
  static const int32_T iv5[2]{1, 27};
  static const int32_T iv6[2]{1, 7};
  static const int32_T iv7[2]{1, 26};
  static const int32_T iv8[2]{1, 7};
  static const int32_T iv9[2]{1, 24};
  static const char_T h_u[43]{'-', '-', '-', '-', '-', '-',  '-', '-', '-',
                              '-', '-', '-', '-', '-', '-',  '-', '-', '-',
                              '-', '-', '-', '-', '-', '-',  '-', '-', '-',
                              '-', '-', '-', '-', '-', '-',  '-', '-', '-',
                              '-', '-', '-', '-', '-', '\\', 'n'};
  static const char_T c_u[27]{' ', ' ', ' ', ' ', 'G', 'E', ' ', 'p',  'r',
                              'i', 'c', 'e', 's', ':', ' ', 'r', ' ',  '=',
                              ' ', '%', '8', '.', '6', 'f', ' ', '\\', 'n'};
  static const char_T d_u[27]{' ', ' ', ' ', ' ', 'G', 'E', ' ', 'p',  'r',
                              'i', 'c', 'e', 's', ':', ' ', 'w', ' ',  '=',
                              ' ', '%', '8', '.', '6', 'f', ' ', '\\', 'n'};
  static const char_T e_u[26]{'C', 'u', 'r', 'r', 'e', 'n', 't',  ' ', 'G',
                              'e', 'n', 'e', 'r', 'a', 'l', 'E',  'q', 'm',
                              'E', 'q', 'n', 's', ':', ' ', '\\', 'n'};
  static const char_T f_u[24]{' ', ' ', ' ', ' ', 'G', 'E', ' ',  'c',
                              'a', 'p', 'i', 't', 'a', 'l', ':',  ' ',
                              '%', '8', '.', '6', 'f', ' ', '\\', 'n'};
  static const char_T g_u[24]{' ', ' ', ' ', ' ', 'G', 'E', ' ',  'l',
                              'a', 'b', 'o', 'r', ':', ' ', ' ',  ' ',
                              '%', '8', '.', '6', 'f', ' ', '\\', 'n'};
  static const char_T b_u[21]{'C', 'u', 'r', 'r', 'e', 'n',  't',
                              ' ', 'G', 'E', ' ', 'p', 'r',  'i',
                              'c', 'e', 's', ':', ' ', '\\', 'n'};
  static const char_T u[7]{'f', 'p', 'r', 'i', 'n', 't', 'f'};
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *i_y;
  const mxArray *j_y;
  const mxArray *k_y;
  const mxArray *l_y;
  const mxArray *m;
  const mxArray *m_y;
  const mxArray *n_y;
  const mxArray *y;
  real_T(*gpu_ReturnMatrix)[160160040];
  real_T(*gpu_A_vec)[80040];
  real_T(*gpu_E_vec)[80040];
  real_T(*gpu_Policy)[80040];
  real_T(*gpu_StatDist)[80040];
  real_T(*gpu_V)[80040];
  real_T(*gpu_V0)[80040];
  real_T(*gpu_cash)[80040];
  real_T(*gpu_a_grid)[2001];
  real_T(*gpu_pi_z)[1600];
  real_T(*gpu_pi_z_transposed)[1600];
  real_T(*gpu_z_grid)[40];
  real_T cpu_beta;
  real_T cpu_check_sum;
  real_T cpu_crra;
  real_T cpu_err;
  real_T *gpu_beta;
  real_T *gpu_check_sum;
  real_T *gpu_crra;
  real_T *gpu_err;
  int32_T dist_iter;
  int32_T i;
  boolean_T p;
  checkCudaError(mwCudaMalloc(&gpu_A_vec, 80040ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_check_sum, sizeof(real_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_pi_z_transposed, 1600ULL * sizeof(real_T)),
                 __FILE__, __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_err, sizeof(real_T)), __FILE__, __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_V0, 80040ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_E_vec, 80040ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_cash, 80040ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_ReturnMatrix, 160160040ULL * sizeof(real_T)),
                 __FILE__, __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_beta, sizeof(real_T)), __FILE__, __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_crra, sizeof(real_T)), __FILE__, __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_StatDist, 80040ULL * sizeof(real_T)),
                 __FILE__, __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_Policy, 80040ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_V, 80040ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_pi_z, 1600ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_z_grid, 40ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_a_grid, 2001ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  cpu_beta = Params->beta;
  //  VFI: cash and return matrix
  checkCudaError(cudaMemcpy(*gpu_a_grid, cpu_a_grid, 2001ULL * sizeof(real_T),
                            cudaMemcpyHostToDevice),
                 __FILE__, __LINE__);
  checkCudaError(cudaMemcpy(*gpu_z_grid, cpu_z_grid, 40ULL * sizeof(real_T),
                            cudaMemcpyHostToDevice),
                 __FILE__, __LINE__);
  c_model_subfuns_cuda_fused_kern<<<dim3(313U, 1U, 1U), dim3(256U, 1U, 1U)>>>(
      *gpu_a_grid, *gpu_z_grid, p_eqm[0], p_eqm[1], Params->lambda,
      Params->delta, Params->alpha, Params->upsilon, *gpu_cash);
  d_model_subfuns_cuda_fused_kern<<<dim3(625626U, 1U, 1U),
                                    dim3(256U, 1U, 1U)>>>(
      *gpu_a_grid, Params->crra, *gpu_cash, *gpu_ReturnMatrix);
  //  VFI: policy iteration
  e_model_subfuns_cuda_fused_kern<<<dim3(313U, 1U, 1U), dim3(256U, 1U, 1U)>>>(
      *gpu_V, *gpu_Policy, *gpu_V0, *gpu_E_vec);
  cpu_err = vfoptions->tolerance + 1.0;
  checkCudaError(cudaMemcpy(*gpu_pi_z, cpu_pi_z, 1600ULL * sizeof(real_T),
                            cudaMemcpyHostToDevice),
                 __FILE__, __LINE__);
  f_model_subfuns_cuda_fused_kern<<<dim3(13U, 1U, 1U), dim3(128U, 1U, 1U)>>>(
      *gpu_pi_z, *gpu_pi_z_transposed);
  while (cpu_err > vfoptions->tolerance) {
    cpu_crra = 1.0;
    cpu_check_sum = 0.0;
    cublasDgemm(getCublasGlobalHandle(), CUBLAS_OP_N, CUBLAS_OP_N, 2001, 40, 40,
                &cpu_crra, &(*gpu_V0)[0], 2001, &(*gpu_pi_z_transposed)[0], 40,
                &cpu_check_sum, &(*gpu_cash)[0], 2001);
    g_model_subfuns_cuda_fused_kern<<<dim3(313U, 1U, 1U), dim3(256U, 1U, 1U)>>>(
        cpu_beta, *gpu_cash, *gpu_ReturnMatrix, *gpu_V, *gpu_Policy);
    i = static_cast<int32_T>(vfoptions->howards);
    for (dist_iter = 0; dist_iter < i; dist_iter++) {
      cublasDgemm(getCublasGlobalHandle(), CUBLAS_OP_N, CUBLAS_OP_N, 2001, 40,
                  40, &cpu_crra, &(*gpu_V)[0], 2001, &(*gpu_pi_z_transposed)[0],
                  40, &cpu_check_sum, &(*gpu_cash)[0], 2001);
      h_model_subfuns_cuda_fused_kern<<<dim3(313U, 1U, 1U),
                                        dim3(256U, 1U, 1U)>>>(
          *gpu_Policy, cpu_beta, *gpu_cash, *gpu_ReturnMatrix, *gpu_V);
    }
    i_model_subfuns_cuda_fused_kern<<<dim3(313U, 1U, 1U), dim3(256U, 1U, 1U)>>>(
        *gpu_V, *gpu_cash, *gpu_V0);
    checkCudaError(cudaMemcpy(SD->f0.cpu_cash, *gpu_cash,
                              80040ULL * sizeof(real_T),
                              cudaMemcpyDeviceToHost),
                   __FILE__, __LINE__);
    cpu_err = SD->f0.cpu_cash[0];
    for (i = 0; i < 80039; i++) {
      cpu_crra = SD->f0.cpu_cash[i + 1];
      if (std::isnan(cpu_crra)) {
        p = false;
      } else if (std::isnan(cpu_err)) {
        p = true;
      } else {
        p = (cpu_err < cpu_crra);
      }
      if (p) {
        cpu_err = cpu_crra;
      }
    }
    j_model_subfuns_cuda_fused_kern<<<dim3(313U, 1U, 1U), dim3(256U, 1U, 1U)>>>(
        *gpu_V, *gpu_V0);
  }
  //  Stationary distribution: scatter with atomicAdd
  k_model_subfuns_cuda_fused_kern<<<dim3(313U, 1U, 1U), dim3(256U, 1U, 1U)>>>(
      *gpu_StatDist, *gpu_V0);
  cpu_beta = simoptions->tolerance + 1.0;
  dist_iter = 1;
  while ((cpu_beta > simoptions->tolerance) &&
         (dist_iter <= simoptions->maxit)) {
    l_model_subfuns_cuda_fused_kern<<<dim3(313U, 1U, 1U), dim3(256U, 1U, 1U)>>>(
        *gpu_cash);
    m_model_subfuns_cuda_fused_kern<<<dim3(313U, 1U, 1U), dim3(256U, 1U, 1U)>>>(
        *gpu_Policy, *gpu_V0, *gpu_cash);
    cpu_crra = 1.0;
    cpu_check_sum = 0.0;
    cublasDgemm(getCublasGlobalHandle(), CUBLAS_OP_N, CUBLAS_OP_N, 2001, 40, 40,
                &cpu_crra, &(*gpu_cash)[0], 2001, &(*gpu_pi_z)[0], 40,
                &cpu_check_sum, &(*gpu_StatDist)[0], 2001);
    n_model_subfuns_cuda_fused_kern<<<dim3(313U, 1U, 1U), dim3(256U, 1U, 1U)>>>(
        *gpu_StatDist, *gpu_cash, *gpu_V0);
    checkCudaError(cudaMemcpy(SD->f0.cpu_cash, *gpu_cash,
                              80040ULL * sizeof(real_T),
                              cudaMemcpyDeviceToHost),
                   __FILE__, __LINE__);
    cpu_beta = SD->f0.cpu_cash[0];
    for (i = 0; i < 80039; i++) {
      cpu_crra = SD->f0.cpu_cash[i + 1];
      if (std::isnan(cpu_crra)) {
        p = false;
      } else if (std::isnan(cpu_beta)) {
        p = true;
      } else {
        p = (cpu_beta < cpu_crra);
      }
      if (p) {
        cpu_beta = cpu_crra;
      }
    }
    o_model_subfuns_cuda_fused_kern<<<dim3(313U, 1U, 1U), dim3(256U, 1U, 1U)>>>(
        *gpu_StatDist, *gpu_V0);
    if (dist_iter <= 2147483646) {
      dist_iter++;
    }
  }
  p_model_subfuns_cuda_fused_kern<<<dim3(1U, 1U, 1U), dim3(32U, 1U, 1U)>>>(
      *gpu_StatDist, gpu_check_sum);
  q_model_subfuns_cuda_fused_kern<<<dim3(79U, 1U, 1U), dim3(1024U, 1U, 1U)>>>(
      *gpu_StatDist, gpu_check_sum);
  //  Aggregates
  r_model_subfuns_cuda_fused_kern<<<dim3(313U, 1U, 1U), dim3(256U, 1U, 1U)>>>(
      gpu_check_sum, *gpu_StatDist, *gpu_cash, *gpu_V0);
  s_model_subfuns_cuda_fused_kern<<<dim3(313U, 1U, 1U), dim3(256U, 1U, 1U)>>>(
      *gpu_a_grid, *gpu_z_grid, *gpu_StatDist, p_eqm[0], p_eqm[1],
      Params->lambda, Params->delta, Params->alpha, Params->upsilon, *gpu_cash,
      *gpu_V0, *gpu_A_vec, *gpu_E_vec);
  t_model_subfuns_cuda_fused_kern<<<dim3(1U, 1U, 1U), dim3(32U, 1U, 1U)>>>(
      *gpu_A_vec, gpu_check_sum);
  u_model_subfuns_cuda_fused_kern<<<dim3(79U, 1U, 1U), dim3(1024U, 1U, 1U)>>>(
      *gpu_A_vec, gpu_check_sum);
  v_model_subfuns_cuda_fused_kern<<<dim3(1U, 1U, 1U), dim3(32U, 1U, 1U)>>>(
      *gpu_cash, gpu_beta);
  w_model_subfuns_cuda_fused_kern<<<dim3(79U, 1U, 1U), dim3(1024U, 1U, 1U)>>>(
      *gpu_cash, gpu_beta);
  x_model_subfuns_cuda_fused_kern<<<dim3(1U, 1U, 1U), dim3(32U, 1U, 1U)>>>(
      *gpu_V0, gpu_err);
  y_model_subfuns_cuda_fused_kern<<<dim3(79U, 1U, 1U), dim3(1024U, 1U, 1U)>>>(
      *gpu_V0, gpu_err);
  ab_model_subfuns_cuda_fused_ker<<<dim3(1U, 1U, 1U), dim3(32U, 1U, 1U)>>>(
      *gpu_E_vec, gpu_crra);
  bb_model_subfuns_cuda_fused_ker<<<dim3(79U, 1U, 1U), dim3(1024U, 1U, 1U)>>>(
      *gpu_E_vec, gpu_crra);
  checkCudaError(
      cudaMemcpy(&cpu_beta, gpu_beta, sizeof(real_T), cudaMemcpyDeviceToHost),
      __FILE__, __LINE__);
  checkCudaError(cudaMemcpy(&cpu_check_sum, gpu_check_sum, sizeof(real_T),
                            cudaMemcpyDeviceToHost),
                 __FILE__, __LINE__);
  cpu_beta -= cpu_check_sum;
  checkCudaError(
      cudaMemcpy(&cpu_err, gpu_err, sizeof(real_T), cudaMemcpyDeviceToHost),
      __FILE__, __LINE__);
  checkCudaError(
      cudaMemcpy(&cpu_crra, gpu_crra, sizeof(real_T), cudaMemcpyDeviceToHost),
      __FILE__, __LINE__);
  cpu_check_sum = cpu_err - (1.0 - cpu_crra);
  *val = cpu_beta * cpu_beta + cpu_check_sum * cpu_check_sum;
  if (heteroagentoptions->verbose == 1.0) {
    y = nullptr;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 7, m, &u[0]);
    emlrtAssign(&y, m);
    b_y = nullptr;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 21, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    emlrt_marshallIn(feval(y, emlrt_marshallOut(1.0), b_y, &emlrtMCI),
                     "<output of feval>");
    c_y = nullptr;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 7, m, &u[0]);
    emlrtAssign(&c_y, m);
    d_y = nullptr;
    m = emlrtCreateCharArray(2, &iv3[0]);
    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 27, m, &c_u[0]);
    emlrtAssign(&d_y, m);
    emlrt_marshallIn(feval(c_y, emlrt_marshallOut(1.0), d_y,
                           emlrt_marshallOut(p_eqm[0]), &emlrtMCI),
                     "<output of feval>");
    e_y = nullptr;
    m = emlrtCreateCharArray(2, &iv4[0]);
    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 7, m, &u[0]);
    emlrtAssign(&e_y, m);
    f_y = nullptr;
    m = emlrtCreateCharArray(2, &iv5[0]);
    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 27, m, &d_u[0]);
    emlrtAssign(&f_y, m);
    emlrt_marshallIn(feval(e_y, emlrt_marshallOut(1.0), f_y,
                           emlrt_marshallOut(p_eqm[1]), &emlrtMCI),
                     "<output of feval>");
    g_y = nullptr;
    m = emlrtCreateCharArray(2, &iv6[0]);
    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 7, m, &u[0]);
    emlrtAssign(&g_y, m);
    h_y = nullptr;
    m = emlrtCreateCharArray(2, &iv7[0]);
    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 26, m, &e_u[0]);
    emlrtAssign(&h_y, m);
    emlrt_marshallIn(feval(g_y, emlrt_marshallOut(1.0), h_y, &emlrtMCI),
                     "<output of feval>");
    i_y = nullptr;
    m = emlrtCreateCharArray(2, &iv8[0]);
    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 7, m, &u[0]);
    emlrtAssign(&i_y, m);
    j_y = nullptr;
    m = emlrtCreateCharArray(2, &iv9[0]);
    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 24, m, &f_u[0]);
    emlrtAssign(&j_y, m);
    emlrt_marshallIn(feval(i_y, emlrt_marshallOut(1.0), j_y,
                           emlrt_marshallOut(cpu_beta), &emlrtMCI),
                     "<output of feval>");
    k_y = nullptr;
    m = emlrtCreateCharArray(2, &iv10[0]);
    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 7, m, &u[0]);
    emlrtAssign(&k_y, m);
    l_y = nullptr;
    m = emlrtCreateCharArray(2, &iv11[0]);
    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 24, m, &g_u[0]);
    emlrtAssign(&l_y, m);
    emlrt_marshallIn(feval(k_y, emlrt_marshallOut(1.0), l_y,
                           emlrt_marshallOut(cpu_check_sum), &emlrtMCI),
                     "<output of feval>");
    m_y = nullptr;
    m = emlrtCreateCharArray(2, &iv12[0]);
    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 7, m, &u[0]);
    emlrtAssign(&m_y, m);
    n_y = nullptr;
    m = emlrtCreateCharArray(2, &iv13[0]);
    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 43, m, &h_u[0]);
    emlrtAssign(&n_y, m);
    emlrt_marshallIn(feval(m_y, emlrt_marshallOut(1.0), n_y, &emlrtMCI),
                     "<output of feval>");
  }
  checkCudaError(cudaMemcpy(cpu_V, *gpu_V, 80040ULL * sizeof(real_T),
                            cudaMemcpyDeviceToHost),
                 __FILE__, __LINE__);
  checkCudaError(cudaMemcpy(cpu_Policy, *gpu_Policy, 80040ULL * sizeof(real_T),
                            cudaMemcpyDeviceToHost),
                 __FILE__, __LINE__);
  checkCudaError(cudaMemcpy(cpu_StatDist, *gpu_StatDist,
                            80040ULL * sizeof(real_T), cudaMemcpyDeviceToHost),
                 __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_a_grid), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_z_grid), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_pi_z), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_V), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_Policy), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_StatDist), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(gpu_crra), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(gpu_beta), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_ReturnMatrix), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_cash), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_E_vec), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_V0), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(gpu_err), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_pi_z_transposed), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(gpu_check_sum), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_A_vec), __FILE__, __LINE__);
}

// End of code generation (model_subfuns_cuda_fused.cu)
