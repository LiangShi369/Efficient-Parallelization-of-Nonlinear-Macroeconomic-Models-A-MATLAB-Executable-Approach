//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// solver_bruteforce_cuda.cu
//
// Code generation for function 'solver_bruteforce_cuda'
//

// Include files
#include "solver_bruteforce_cuda.h"
#include "rt_nonfinite.h"
#include "solver_bruteforce_cuda_data.h"
#include "solver_bruteforce_cuda_mexutil.h"
#include "solver_bruteforce_cuda_types.h"
#include "tic.h"
#include "toc.h"
#include "MWCUBLASUtils.hpp"
#include "MWCudaDimUtility.hpp"
#include "MWCudaMemoryFunctions.hpp"
#include "emlrt.h"
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
static void checkCudaError(cudaError_t errorCode, const char_T *file,
                           int32_T b_line);

static real_T emlrt_marshallIn(const mxArray *a__output_of_feval_,
                               const char_T *identifier);

static const mxArray *feval(const mxArray *m1, const mxArray *m2,
                            const mxArray *m3, const mxArray *m4,
                            const mxArray *m5, emlrtMCInfo *location);

static const mxArray *feval(const mxArray *m1, const mxArray *m2,
                            const mxArray *m3, const mxArray *m4,
                            const mxArray *m5, const mxArray *m6,
                            emlrtMCInfo *location);

static void gpuThrowError(uint32_T errorCode, const char_T *errorName,
                          const char_T *errorString, const char_T *file,
                          int32_T b_line);

static __global__ void solver_bruteforce_cuda_kernel01(const struct0_T para,
                                                       real_T *betta);

static __global__ void solver_bruteforce_cuda_kernel02(const real_T b[400],
                                                       real_T y[400]);

static __global__ void solver_bruteforce_cuda_kernel03(real_T vp[250000]);

static __global__ void solver_bruteforce_cuda_kernel04(real_T vd[625]);

static __global__ void solver_bruteforce_cuda_kernel05(real_T def[250000]);

static __global__ void solver_bruteforce_cuda_kernel06(real_T vo[625]);

static __global__ void solver_bruteforce_cuda_kernel07(const struct0_T para,
                                                       real_T q[250000],
                                                       real_T bp[250000]);

static __global__ void
solver_bruteforce_cuda_kernel08(const real_T z[625], const real_T m[625],
                                const real_T diff, const real_T b,
                                const real_T c, real_T ua[625], real_T x[625]);

static __global__ void solver_bruteforce_cuda_kernel09(const real_T m[625],
                                                       const real_T pdf[390625],
                                                       const real_T *betta,
                                                       const real_T b,
                                                       real_T a[390625]);

static __global__ void solver_bruteforce_cuda_kernel10(const real_T theta,
                                                       const real_T vd[625],
                                                       const real_T b,
                                                       real_T vo[625]);

static __global__ void solver_bruteforce_cuda_kernel11(const real_T ua[625],
                                                       real_T vd1[625]);

static __global__ void solver_bruteforce_cuda_kernel12(const real_T b[400],
                                                       const real_T q[250000],
                                                       const real_T x[625],
                                                       real_T w[250000]);

static __global__ void solver_bruteforce_cuda_kernel13(const real_T b[400],
                                                       const real_T evp[250000],
                                                       const real_T w[250000],
                                                       real_T bp[250000],
                                                       real_T vp1[250000]);

static __global__ void solver_bruteforce_cuda_kernel14(const real_T vp1[250000],
                                                       const real_T vd1[625],
                                                       real_T def[250000]);

static __global__ void solver_bruteforce_cuda_kernel15(const real_T diff,
                                                       real_T q[250000],
                                                       real_T evp[250000],
                                                       real_T w[250000]);

static __global__ void solver_bruteforce_cuda_kernel16(const real_T vp1[250000],
                                                       real_T vp[250000],
                                                       real_T w[250000]);

static __global__ void solver_bruteforce_cuda_kernel17(const real_T vd1[625],
                                                       real_T vd[625],
                                                       real_T vo[625]);

static __global__ void solver_bruteforce_cuda_kernel18(const int32_T nb0,
                                                       const real_T vp1[250000],
                                                       real_T vo[625]);

static __global__ void solver_bruteforce_cuda_kernel19(const real_T vp1[250000],
                                                       real_T vp[250000]);

static __global__ void solver_bruteforce_cuda_kernel20(const real_T vd1[625],
                                                       real_T vd[625]);

static __global__ void solver_bruteforce_cuda_kernel21(const real_T evp[250000],
                                                       real_T q[250000]);

// Function Definitions
static void checkCudaError(cudaError_t errorCode, const char_T *file,
                           int32_T b_line)
{
  if (errorCode != cudaSuccess) {
    gpuThrowError(errorCode, cudaGetErrorName(errorCode),
                  cudaGetErrorString(errorCode), file, b_line);
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

static const mxArray *feval(const mxArray *m1, const mxArray *m2,
                            const mxArray *m3, const mxArray *m4,
                            const mxArray *m5, emlrtMCInfo *location)
{
  const mxArray *pArrays[5];
  const mxArray *m6;
  pArrays[0] = m1;
  pArrays[1] = m2;
  pArrays[2] = m3;
  pArrays[3] = m4;
  pArrays[4] = m5;
  return emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 1, &m6, 5, &pArrays[0],
                               "feval", true, location);
}

static const mxArray *feval(const mxArray *m1, const mxArray *m2,
                            const mxArray *m3, const mxArray *m4,
                            const mxArray *m5, const mxArray *m6,
                            emlrtMCInfo *location)
{
  const mxArray *pArrays[6];
  const mxArray *m7;
  pArrays[0] = m1;
  pArrays[1] = m2;
  pArrays[2] = m3;
  pArrays[3] = m4;
  pArrays[4] = m5;
  pArrays[5] = m6;
  return emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 1, &m7, 6, &pArrays[0],
                               "feval", true, location);
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

static __global__ __launch_bounds__(32, 1) void solver_bruteforce_cuda_kernel01(
    const struct0_T para, real_T *betta)
{
  int32_T tmpIdx;
  tmpIdx = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (tmpIdx < 1) {
    *betta = para.betta;
  }
}

static __global__ __launch_bounds__(
    128, 1) void solver_bruteforce_cuda_kernel02(const real_T b[400],
                                                 real_T y[400])
{
  int32_T k;
  k = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (k < 400) {
    y[k] = fabs(b[k]);
  }
}

static __global__
    __launch_bounds__(256,
                      1) void solver_bruteforce_cuda_kernel03(real_T vp[250000])
{
  int32_T bp_tmp;
  bp_tmp = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (bp_tmp < 250000) {
    vp[bp_tmp] = 0.0;
  }
}

static __global__
    __launch_bounds__(128,
                      1) void solver_bruteforce_cuda_kernel04(real_T vd[625])
{
  int32_T bp_tmp;
  bp_tmp = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (bp_tmp < 625) {
    vd[bp_tmp] = 0.0;
  }
}

static __global__ __launch_bounds__(
    256, 1) void solver_bruteforce_cuda_kernel05(real_T def[250000])
{
  int32_T bp_tmp;
  bp_tmp = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (bp_tmp < 250000) {
    def[bp_tmp] = 0.0;
  }
}

static __global__
    __launch_bounds__(128,
                      1) void solver_bruteforce_cuda_kernel06(real_T vo[625])
{
  int32_T bp_tmp;
  bp_tmp = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (bp_tmp < 625) {
    vo[bp_tmp] = 0.0;
  }
}

static __global__
    __launch_bounds__(256, 1) void solver_bruteforce_cuda_kernel07(
        const struct0_T para, real_T q[250000], real_T bp[250000])
{
  int32_T bp_tmp;
  bp_tmp = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (bp_tmp < 250000) {
    bp[bp_tmp] = 0.0;
    q[bp_tmp] = 1.0 / (para.rstar + 1.0);
  }
}

static __global__
    __launch_bounds__(128, 1) void solver_bruteforce_cuda_kernel08(
        const real_T z[625], const real_T m[625], const real_T diff,
        const real_T b, const real_T c, real_T ua[625], real_T x[625])
{
  real_T d;
  int32_T k;
  k = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (k < 625) {
    d = exp(z[k]) * m[k];
    x[k] = d;
    ua[k] = (pow(d * c, b) - 1.0) / diff;
  }
}

static __global__
    __launch_bounds__(256, 1) void solver_bruteforce_cuda_kernel09(
        const real_T m[625], const real_T pdf[390625], const real_T *betta,
        const real_T b, real_T a[390625])
{
  uint64_T gThreadId;
  int32_T bp_tmp;
  int32_T is;
  gThreadId = mwGetGlobalThreadIndex();
  is = static_cast<int32_T>(gThreadId % 625ULL);
  bp_tmp =
      static_cast<int32_T>((gThreadId - static_cast<uint64_T>(is)) / 625ULL);
  if ((bp_tmp < 625) && (is < 625)) {
    bp_tmp = is + 625 * bp_tmp;
    a[bp_tmp] = pow(m[is], b) * *betta * pdf[bp_tmp];
  }
}

static __global__ __launch_bounds__(
    128, 1) void solver_bruteforce_cuda_kernel10(const real_T theta,
                                                 const real_T vd[625],
                                                 const real_T b, real_T vo[625])
{
  int32_T bp_tmp;
  bp_tmp = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (bp_tmp < 625) {
    vo[bp_tmp] = theta * vo[bp_tmp] + b * vd[bp_tmp];
  }
}

static __global__ __launch_bounds__(
    128, 1) void solver_bruteforce_cuda_kernel11(const real_T ua[625],
                                                 real_T vd1[625])
{
  int32_T bp_tmp;
  bp_tmp = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (bp_tmp < 625) {
    vd1[bp_tmp] += ua[bp_tmp];
  }
}

static __global__ __launch_bounds__(
    256, 1) void solver_bruteforce_cuda_kernel12(const real_T b[400],
                                                 const real_T q[250000],
                                                 const real_T x[625],
                                                 real_T w[250000])
{
  uint64_T gThreadId;
  int32_T bp_tmp;
  int32_T is;
  int32_T k;
  gThreadId = mwGetGlobalThreadIndex();
  is = static_cast<int32_T>(gThreadId % 625ULL);
  bp_tmp =
      static_cast<int32_T>((gThreadId - static_cast<uint64_T>(is)) / 625ULL);
  if ((bp_tmp < 400) && (is < 625)) {
    k = is + 625 * bp_tmp;
    w[k] = b[bp_tmp] * q[k] + x[is];
  }
}

static __global__
    __launch_bounds__(256, 1) void solver_bruteforce_cuda_kernel13(
        const real_T b[400], const real_T evp[250000], const real_T w[250000],
        real_T bp[250000], real_T vp1[250000])
{
  real_T c;
  real_T d;
  real_T tmpmax;
  uint64_T gThreadId;
  int32_T bp_tmp;
  int32_T i;
  int32_T ib;
  int32_T is;
  gThreadId = mwGetGlobalThreadIndex();
  ib = static_cast<int32_T>(gThreadId % 400ULL);
  is = static_cast<int32_T>((gThreadId - static_cast<uint64_T>(ib)) / 400ULL);
  if ((is < 625) && (ib < 400)) {
    tmpmax = -CUDART_INF;
    bp_tmp = is + 625 * ib;
    bp[bp_tmp] = 1.0;
    d = b[ib];
    for (i = 0; i < 400; i++) {
      ib = is + 625 * i;
      c = w[ib] - d;
      if (c > 0.0) {
        c = (1.0 - 1.0 / c) + evp[ib];
      } else {
        c = -CUDART_INF;
      }
      if (c > tmpmax) {
        tmpmax = c;
        bp[bp_tmp] = static_cast<real_T>(i) + 1.0;
      }
    }
    vp1[bp_tmp] = tmpmax;
  }
}

static __global__
    __launch_bounds__(256, 1) void solver_bruteforce_cuda_kernel14(
        const real_T vp1[250000], const real_T vd1[625], real_T def[250000])
{
  uint64_T gThreadId;
  int32_T ib;
  int32_T is;
  gThreadId = mwGetGlobalThreadIndex();
  ib = static_cast<int32_T>(gThreadId % 400ULL);
  is = static_cast<int32_T>((gThreadId - static_cast<uint64_T>(ib)) / 400ULL);
  if ((is < 625) && (ib < 400)) {
    ib = is + 625 * ib;
    def[ib] = static_cast<real_T>(vp1[ib] < vd1[is]);
  }
}

static __global__ __launch_bounds__(
    256, 1) void solver_bruteforce_cuda_kernel15(const real_T diff,
                                                 real_T q[250000],
                                                 real_T evp[250000],
                                                 real_T w[250000])
{
  real_T b;
  int32_T k;
  k = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (k < 250000) {
    b = (1.0 - evp[k]) / diff;
    evp[k] = b;
    b -= q[k];
    q[k] = b;
    w[k] = fabs(b);
  }
}

static __global__
    __launch_bounds__(256, 1) void solver_bruteforce_cuda_kernel16(
        const real_T vp1[250000], real_T vp[250000], real_T w[250000])
{
  real_T b;
  int32_T k;
  k = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (k < 250000) {
    b = vp1[k] - vp[k];
    vp[k] = b;
    w[k] = fabs(b);
  }
}

static __global__ __launch_bounds__(
    128, 1) void solver_bruteforce_cuda_kernel17(const real_T vd1[625],
                                                 real_T vd[625], real_T vo[625])
{
  real_T b;
  int32_T k;
  k = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (k < 625) {
    b = vd1[k] - vd[k];
    vd[k] = b;
    vo[k] = fabs(b);
  }
}

static __global__
    __launch_bounds__(128, 1) void solver_bruteforce_cuda_kernel18(
        const int32_T nb0, const real_T vp1[250000], real_T vo[625])
{
  int32_T bp_tmp;
  bp_tmp = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (bp_tmp < 625) {
    vo[bp_tmp] = vp1[bp_tmp + 625 * nb0];
  }
}

static __global__ __launch_bounds__(
    256, 1) void solver_bruteforce_cuda_kernel19(const real_T vp1[250000],
                                                 real_T vp[250000])
{
  int32_T bp_tmp;
  bp_tmp = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (bp_tmp < 250000) {
    vp[bp_tmp] = vp1[bp_tmp];
  }
}

static __global__ __launch_bounds__(
    128, 1) void solver_bruteforce_cuda_kernel20(const real_T vd1[625],
                                                 real_T vd[625])
{
  int32_T bp_tmp;
  bp_tmp = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (bp_tmp < 625) {
    vd[bp_tmp] = vd1[bp_tmp];
  }
}

static __global__ __launch_bounds__(
    256, 1) void solver_bruteforce_cuda_kernel21(const real_T evp[250000],
                                                 real_T q[250000])
{
  int32_T bp_tmp;
  bp_tmp = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (bp_tmp < 250000) {
    q[bp_tmp] = evp[bp_tmp];
  }
}

void solver_bruteforce_cuda(const real_T cpu_b[400], const real_T cpu_z[625],
                            const real_T cpu_m[625],
                            const real_T cpu_pdf[390625], const struct0_T *para,
                            real_T cpu_q[250000], real_T cpu_bp[250000],
                            real_T cpu_vp[250000], real_T cpu_def[250000],
                            real_T *totaltime, real_T *avgtime)
{
  static const int32_T iv[2]{1, 7};
  static const int32_T iv1[2]{1, 42};
  static const int32_T iv2[2]{1, 7};
  static const int32_T iv3[2]{1, 17};
  static const char_T b_u[42]{
      '#', ' ', 'i', 't', 's', '%', '4', '.', '0', 'f', ' ', '~', 'T',  'i',
      'm', 'e', ' ', '%', '8', '.', '8', 'f', 's', ' ', '~', 'A', 'v',  'g',
      't', 'i', 'm', 'e', ' ', '%', '8', '.', '8', 'f', 's', ' ', '\\', 'n'};
  static const char_T c_u[17]{'%', '5', '.', '0', 'f', ' ', '~',  ' ', '%',
                              '8', '.', '1', '0', 'f', ' ', '\\', 'n'};
  static const char_T u[7]{'f', 'p', 'r', 'i', 'n', 't', 'f'};
  emlrtTimespec expl_temp;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *m;
  const mxArray *y;
  real_T(*gpu_a)[390625];
  real_T(*gpu_pdf)[390625];
  real_T(*gpu_bp)[250000];
  real_T(*gpu_def)[250000];
  real_T(*gpu_evp)[250000];
  real_T(*gpu_q)[250000];
  real_T(*gpu_vp)[250000];
  real_T(*gpu_vp1)[250000];
  real_T(*gpu_w)[250000];
  real_T cpu_vo[625];
  real_T(*gpu_m)[625];
  real_T(*gpu_ua)[625];
  real_T(*gpu_vd)[625];
  real_T(*gpu_vd1)[625];
  real_T(*gpu_vo)[625];
  real_T(*gpu_x)[625];
  real_T(*gpu_z)[625];
  real_T cpu_y[400];
  real_T(*gpu_b)[400];
  real_T(*gpu_y)[400];
  real_T b;
  real_T b_ex;
  real_T c;
  real_T diff;
  real_T ex;
  real_T rstar;
  real_T theta;
  real_T timer_tv_nsec;
  real_T timer_tv_sec;
  real_T *gpu_betta;
  int32_T i;
  int32_T its;
  int32_T nb0;
  boolean_T p;
  boolean_T pdf_outdatedOnGpu;
  checkCudaError(mwCudaMalloc(&gpu_vp1, 250000ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_w, 250000ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_vd1, 625ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_evp, 250000ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_a, 390625ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_ua, 625ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_x, 625ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_vo, 625ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_vd, 625ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_y, 400ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_betta, sizeof(real_T)), __FILE__, __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_def, 250000ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_vp, 250000ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_bp, 250000ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_q, 250000ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_pdf, 390625ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_m, 625ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_z, 625ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_b, 400ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  pdf_outdatedOnGpu = true;
  theta = para->theta;
  solver_bruteforce_cuda_kernel01<<<dim3(1U, 1U, 1U), dim3(32U, 1U, 1U)>>>(
      *para, gpu_betta);
  rstar = para->rstar;
  //  dpgrid = b';
  checkCudaError(cudaMemcpy(*gpu_b, cpu_b, 400ULL * sizeof(real_T),
                            cudaMemcpyHostToDevice),
                 __FILE__, __LINE__);
  solver_bruteforce_cuda_kernel02<<<dim3(4U, 1U, 1U), dim3(128U, 1U, 1U)>>>(
      *gpu_b, *gpu_y);
  nb0 = 0;
  checkCudaError(cudaMemcpy(cpu_y, *gpu_y, 400ULL * sizeof(real_T),
                            cudaMemcpyDeviceToHost),
                 __FILE__, __LINE__);
  ex = cpu_y[0];
  for (i = 0; i < 399; i++) {
    c = cpu_y[i + 1];
    if (std::isnan(c)) {
      p = false;
    } else if (std::isnan(ex)) {
      p = true;
    } else {
      p = (ex > c);
    }
    if (p) {
      ex = c;
      nb0 = i + 1;
    }
  }
  // Initialize the Value functions
  solver_bruteforce_cuda_kernel03<<<dim3(977U, 1U, 1U), dim3(256U, 1U, 1U)>>>(
      *gpu_vp);
  // continue repaying
  solver_bruteforce_cuda_kernel04<<<dim3(5U, 1U, 1U), dim3(128U, 1U, 1U)>>>(
      *gpu_vd);
  solver_bruteforce_cuda_kernel05<<<dim3(977U, 1U, 1U), dim3(256U, 1U, 1U)>>>(
      *gpu_def);
  //  vgood = vp ;
  solver_bruteforce_cuda_kernel06<<<dim3(5U, 1U, 1U), dim3(128U, 1U, 1U)>>>(
      *gpu_vo);
  // debt policy function (expressed in indices)
  solver_bruteforce_cuda_kernel07<<<dim3(977U, 1U, 1U), dim3(256U, 1U, 1U)>>>(
      *para, *gpu_q, *gpu_bp);
  // q is price of debt; it is a function of  (y_t, d_{t+1})
  //  u = zeros(1,nb) ;
  b = 1.0 - para->sigg;
  checkCudaError(cudaMemcpy(*gpu_z, cpu_z, 625ULL * sizeof(real_T),
                            cudaMemcpyHostToDevice),
                 __FILE__, __LINE__);
  checkCudaError(cudaMemcpy(*gpu_m, cpu_m, 625ULL * sizeof(real_T),
                            cudaMemcpyHostToDevice),
                 __FILE__, __LINE__);
  solver_bruteforce_cuda_kernel08<<<dim3(5U, 1U, 1U), dim3(128U, 1U, 1U)>>>(
      *gpu_z, *gpu_m, 1.0 - para->sigg, 1.0 - para->sigg, 1.0 - para->phi0,
      *gpu_ua, *gpu_x);
  diff = 1.0;
  its = 1;
  expl_temp = coder::tic();
  timer_tv_sec = expl_temp.tv_sec;
  timer_tv_nsec = expl_temp.tv_nsec;
  //  <----- Start the timer
  while ((diff > 1.0E-7) && (its < 1000)) {
    if (pdf_outdatedOnGpu) {
      checkCudaError(cudaMemcpy(*gpu_pdf, cpu_pdf, 390625ULL * sizeof(real_T),
                                cudaMemcpyHostToDevice),
                     __FILE__, __LINE__);
    }
    solver_bruteforce_cuda_kernel09<<<dim3(1526U, 1U, 1U),
                                      dim3(256U, 1U, 1U)>>>(
        *gpu_m, *gpu_pdf, gpu_betta, b, *gpu_a);
    diff = 1.0;
    ex = 0.0;
    cublasDgemm(getCublasGlobalHandle(), CUBLAS_OP_N, CUBLAS_OP_N, 625, 400,
                625, &diff, &(*gpu_a)[0], 625, &(*gpu_vp)[0], 625, &ex,
                &(*gpu_evp)[0], 625);
    solver_bruteforce_cuda_kernel10<<<dim3(5U, 1U, 1U), dim3(128U, 1U, 1U)>>>(
        theta, *gpu_vd, 1.0 - theta, *gpu_vo);
    cublasDgemm(getCublasGlobalHandle(), CUBLAS_OP_N, CUBLAS_OP_N, 625, 1, 625,
                &diff, &(*gpu_a)[0], 625, &(*gpu_vo)[0], 625, &ex,
                &(*gpu_vd1)[0], 625);
    solver_bruteforce_cuda_kernel11<<<dim3(5U, 1U, 1U), dim3(128U, 1U, 1U)>>>(
        *gpu_ua, *gpu_vd1);
    solver_bruteforce_cuda_kernel12<<<dim3(977U, 1U, 1U), dim3(256U, 1U, 1U)>>>(
        *gpu_b, *gpu_q, *gpu_x, *gpu_w);
    solver_bruteforce_cuda_kernel13<<<dim3(977U, 1U, 1U), dim3(256U, 1U, 1U)>>>(
        *gpu_b, *gpu_evp, *gpu_w, *gpu_bp, *gpu_vp1);
    //  def = vp1 < repmat(vd1,1,nb);
    solver_bruteforce_cuda_kernel14<<<dim3(977U, 1U, 1U), dim3(256U, 1U, 1U)>>>(
        *gpu_vp1, *gpu_vd1, *gpu_def);
    pdf_outdatedOnGpu = false;
    cublasDgemm(getCublasGlobalHandle(), CUBLAS_OP_N, CUBLAS_OP_N, 625, 400,
                625, &diff, &(*gpu_pdf)[0], 625, &(*gpu_def)[0], 625, &ex,
                &(*gpu_evp)[0], 625);
    solver_bruteforce_cuda_kernel15<<<dim3(977U, 1U, 1U), dim3(256U, 1U, 1U)>>>(
        rstar + 1.0, *gpu_q, *gpu_evp, *gpu_w);
    checkCudaError(cudaMemcpy(cpu_vp, *gpu_w, 250000ULL * sizeof(real_T),
                              cudaMemcpyDeviceToHost),
                   __FILE__, __LINE__);
    ex = cpu_vp[0];
    for (i = 0; i < 249999; i++) {
      c = cpu_vp[i + 1];
      if (std::isnan(c)) {
        p = false;
      } else if (std::isnan(ex)) {
        p = true;
      } else {
        p = (ex < c);
      }
      if (p) {
        ex = c;
      }
    }
    solver_bruteforce_cuda_kernel16<<<dim3(977U, 1U, 1U), dim3(256U, 1U, 1U)>>>(
        *gpu_vp1, *gpu_vp, *gpu_w);
    checkCudaError(cudaMemcpy(cpu_vp, *gpu_w, 250000ULL * sizeof(real_T),
                              cudaMemcpyDeviceToHost),
                   __FILE__, __LINE__);
    b_ex = cpu_vp[0];
    for (i = 0; i < 249999; i++) {
      c = cpu_vp[i + 1];
      if (std::isnan(c)) {
        p = false;
      } else if (std::isnan(b_ex)) {
        p = true;
      } else {
        p = (b_ex < c);
      }
      if (p) {
        b_ex = c;
      }
    }
    solver_bruteforce_cuda_kernel17<<<dim3(5U, 1U, 1U), dim3(128U, 1U, 1U)>>>(
        *gpu_vd1, *gpu_vd, *gpu_vo);
    checkCudaError(cudaMemcpy(cpu_vo, *gpu_vo, 625ULL * sizeof(real_T),
                              cudaMemcpyDeviceToHost),
                   __FILE__, __LINE__);
    diff = cpu_vo[0];
    for (i = 0; i < 624; i++) {
      c = cpu_vo[i + 1];
      if (std::isnan(c)) {
        p = false;
      } else if (std::isnan(diff)) {
        p = true;
      } else {
        p = (diff < c);
      }
      if (p) {
        diff = c;
      }
    }
    diff += ex + b_ex;
    solver_bruteforce_cuda_kernel18<<<dim3(5U, 1U, 1U), dim3(128U, 1U, 1U)>>>(
        nb0, *gpu_vp1, *gpu_vo);
    solver_bruteforce_cuda_kernel19<<<dim3(977U, 1U, 1U), dim3(256U, 1U, 1U)>>>(
        *gpu_vp1, *gpu_vp);
    solver_bruteforce_cuda_kernel20<<<dim3(5U, 1U, 1U), dim3(128U, 1U, 1U)>>>(
        *gpu_vd1, *gpu_vd);
    solver_bruteforce_cuda_kernel21<<<dim3(977U, 1U, 1U), dim3(256U, 1U, 1U)>>>(
        *gpu_evp, *gpu_q);
    if (std::fmod(static_cast<real_T>(its), 50.0) == 0.0) {
      c_y = nullptr;
      m = emlrtCreateCharArray(2, &iv2[0]);
      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 7, m, &u[0]);
      emlrtAssign(&c_y, m);
      d_y = nullptr;
      m = emlrtCreateCharArray(2, &iv3[0]);
      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 17, m, &c_u[0]);
      emlrtAssign(&d_y, m);
      emlrt_marshallIn(feval(c_y, emlrt_marshallOut(1.0), d_y,
                             emlrt_marshallOut(static_cast<real_T>(its)),
                             emlrt_marshallOut(diff), &emlrtMCI),
                       "<output of feval>");
    }
    its++;
  }
  *totaltime = coder::toc(timer_tv_sec, timer_tv_nsec);
  *avgtime = *totaltime / (static_cast<real_T>(its) - 1.0);
  y = nullptr;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 7, m, &u[0]);
  emlrtAssign(&y, m);
  b_y = nullptr;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 42, m, &b_u[0]);
  emlrtAssign(&b_y, m);
  emlrt_marshallIn(feval(y, emlrt_marshallOut(1.0), b_y,
                         emlrt_marshallOut(static_cast<real_T>(its) - 1.0),
                         emlrt_marshallOut(*totaltime),
                         emlrt_marshallOut(*avgtime), &emlrtMCI),
                   "<output of feval>");
  checkCudaError(cudaMemcpy(cpu_q, *gpu_q, 250000ULL * sizeof(real_T),
                            cudaMemcpyDeviceToHost),
                 __FILE__, __LINE__);
  checkCudaError(cudaMemcpy(cpu_bp, *gpu_bp, 250000ULL * sizeof(real_T),
                            cudaMemcpyDeviceToHost),
                 __FILE__, __LINE__);
  checkCudaError(cudaMemcpy(cpu_vp, *gpu_vp, 250000ULL * sizeof(real_T),
                            cudaMemcpyDeviceToHost),
                 __FILE__, __LINE__);
  checkCudaError(cudaMemcpy(cpu_def, *gpu_def, 250000ULL * sizeof(real_T),
                            cudaMemcpyDeviceToHost),
                 __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_b), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_z), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_m), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_pdf), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_q), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_bp), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_vp), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_def), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(gpu_betta), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_y), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_vd), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_vo), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_x), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_ua), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_a), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_evp), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_vd1), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_w), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_vp1), __FILE__, __LINE__);
}

// End of code generation (solver_bruteforce_cuda.cu)
