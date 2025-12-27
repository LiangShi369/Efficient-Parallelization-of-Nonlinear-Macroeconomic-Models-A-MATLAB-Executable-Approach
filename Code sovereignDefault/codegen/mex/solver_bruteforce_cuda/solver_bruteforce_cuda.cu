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
#include "emlrt.h"
#include "math_constants.h"
#include <cmath>

// Variable Definitions
static emlrtMCInfo emlrtMCI{
    66,        // lineNo
    18,        // colNo
    "fprintf", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m" // pName
};

__constant__ static real_T const_b[400];

// Function Declarations
static real_T emlrt_marshallIn(const mxArray *a__output_of_feval_,
                               const char_T *identifier);

static const mxArray *feval(const mxArray *m1, const mxArray *m2,
                            const mxArray *m3, const mxArray *m4,
                            const mxArray *m5, const mxArray *m6,
                            emlrtMCInfo *location);

static const mxArray *feval(const mxArray *m1, const mxArray *m2,
                            const mxArray *m3, const mxArray *m4,
                            const mxArray *m5, emlrtMCInfo *location);

static __global__ void solver_bruteforce_cuda_kernel1(const struct0_T para,
                                                      real_T *sigg,
                                                      real_T *betta);

static __global__ void solver_bruteforce_cuda_kernel10(const real_T vd[625],
                                                       const real_T d,
                                                       const real_T theta,
                                                       real_T vo[625]);

static __global__ void solver_bruteforce_cuda_kernel11(const real_T z[625],
                                                       const real_T ua[625],
                                                       real_T x[625],
                                                       real_T vd1[625]);

static __global__ void solver_bruteforce_cuda_kernel12(const real_T m[625],
                                                       const real_T x[625],
                                                       const real_T q[250000],
                                                       real_T w[250000]);

static __global__ void solver_bruteforce_cuda_kernel13(const real_T evp[250000],
                                                       const real_T *sigg,
                                                       const real_T w[250000],
                                                       real_T vp1[250000],
                                                       real_T bp[250000]);

static __global__ void solver_bruteforce_cuda_kernel14(const real_T vd1[625],
                                                       real_T evp[250000]);

static __global__ void solver_bruteforce_cuda_kernel15(const real_T evp[250000],
                                                       const real_T vp1[250000],
                                                       boolean_T def[250000]);

static __global__ void
solver_bruteforce_cuda_kernel16(const boolean_T def[250000],
                                const real_T pdf[390625], const real_T diff,
                                real_T evp[250000]);

static __global__ void solver_bruteforce_cuda_kernel17(const real_T q[250000],
                                                       const real_T evp[250000],
                                                       real_T y[250000]);

static __global__ void solver_bruteforce_cuda_kernel18(const real_T vp[250000],
                                                       const real_T vp1[250000],
                                                       real_T y[250000]);

static __global__ void solver_bruteforce_cuda_kernel19(const real_T vd1[625],
                                                       real_T x[625],
                                                       real_T vd[625]);

static __global__ void solver_bruteforce_cuda_kernel2(real_T y[400]);

static __global__ void solver_bruteforce_cuda_kernel20(const real_T vp1[250000],
                                                       const int32_T iindx,
                                                       real_T vo[625]);

static __global__ void solver_bruteforce_cuda_kernel21(const real_T vp1[250000],
                                                       real_T vp[250000]);

static __global__ void solver_bruteforce_cuda_kernel22(const real_T vd1[625],
                                                       real_T vd[625]);

static __global__ void solver_bruteforce_cuda_kernel23(const real_T evp[250000],
                                                       real_T q[250000]);

static __global__ void solver_bruteforce_cuda_kernel3(const real_T vd[625],
                                                      real_T vo[625]);

static __global__ void solver_bruteforce_cuda_kernel4(const struct0_T para,
                                                      real_T q[250000]);

static __global__ void
solver_bruteforce_cuda_kernel5(const real_T diff, const real_T *sigg,
                               const real_T d, const real_T m[625],
                               const real_T z[625], real_T ua[625]);

static __global__ void solver_bruteforce_cuda_kernel6(const real_T *sigg,
                                                      const real_T m[625],
                                                      real_T x[625]);

static __global__ void solver_bruteforce_cuda_kernel7(const real_T pdf[390625],
                                                      const real_T *betta,
                                                      const real_T x[625],
                                                      real_T a[390625]);

static __global__ void solver_bruteforce_cuda_kernel8(const real_T *sigg,
                                                      const real_T m[625],
                                                      real_T x[625]);

static __global__ void solver_bruteforce_cuda_kernel9(const real_T pdf[390625],
                                                      const real_T *betta,
                                                      const real_T x[625],
                                                      real_T a[390625]);

// Function Definitions
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
                            const mxArray *m5, const mxArray *m6,
                            emlrtMCInfo *location)
{
  const mxArray *pArrays[6];
  const mxArray *m;
  pArrays[0] = m1;
  pArrays[1] = m2;
  pArrays[2] = m3;
  pArrays[3] = m4;
  pArrays[4] = m5;
  pArrays[5] = m6;
  return emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 1, &m, 6, &pArrays[0],
                               "feval", true, location);
}

static const mxArray *feval(const mxArray *m1, const mxArray *m2,
                            const mxArray *m3, const mxArray *m4,
                            const mxArray *m5, emlrtMCInfo *location)
{
  const mxArray *pArrays[5];
  const mxArray *m;
  pArrays[0] = m1;
  pArrays[1] = m2;
  pArrays[2] = m3;
  pArrays[3] = m4;
  pArrays[4] = m5;
  return emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 1, &m, 5, &pArrays[0],
                               "feval", true, location);
}

static __global__ __launch_bounds__(32, 1) void solver_bruteforce_cuda_kernel1(
    const struct0_T para, real_T *sigg, real_T *betta)
{
  uint64_T threadId;
  int32_T tmpIdx;
  threadId = static_cast<uint64_T>(mwGetGlobalThreadIndexInXDimension());
  tmpIdx = static_cast<int32_T>(threadId);
  if (tmpIdx < 1) {
    *betta = para.betta;
    *sigg = para.sigg;
  }
}

static __global__ __launch_bounds__(
    512, 1) void solver_bruteforce_cuda_kernel10(const real_T vd[625],
                                                 const real_T d,
                                                 const real_T theta,
                                                 real_T vo[625])
{
  uint64_T threadId;
  int32_T k;
  threadId = static_cast<uint64_T>(mwGetGlobalThreadIndexInXDimension());
  k = static_cast<int32_T>(threadId);
  if (k < 625) {
    vo[k] = theta * vo[k] + d * vd[k];
  }
}

static __global__ __launch_bounds__(
    512, 1) void solver_bruteforce_cuda_kernel11(const real_T z[625],
                                                 const real_T ua[625],
                                                 real_T x[625], real_T vd1[625])
{
  uint64_T threadId;
  int32_T k;
  threadId = static_cast<uint64_T>(mwGetGlobalThreadIndexInXDimension());
  k = static_cast<int32_T>(threadId);
  if (k < 625) {
    vd1[k] += ua[k];
    x[k] = exp(z[k]);
  }
}

static __global__ __launch_bounds__(
    512, 1) void solver_bruteforce_cuda_kernel12(const real_T m[625],
                                                 const real_T x[625],
                                                 const real_T q[250000],
                                                 real_T w[250000])
{
  uint64_T threadId;
  int32_T ibtile;
  int32_T k;
  threadId = static_cast<uint64_T>(mwGetGlobalThreadIndexInXDimension());
  ibtile = static_cast<int32_T>(threadId % 625ULL);
  k = static_cast<int32_T>((threadId - static_cast<uint64_T>(ibtile)) / 625ULL);
  if ((k < 400) && (ibtile < 625)) {
    w[ibtile + 625 * k] =
        const_b[k] * q[ibtile + 625 * k] + x[ibtile] * m[ibtile];
  }
}

static __global__
    __launch_bounds__(512, 1) void solver_bruteforce_cuda_kernel13(
        const real_T evp[250000], const real_T *sigg, const real_T w[250000],
        real_T vp1[250000], real_T bp[250000])
{
  uint64_T threadId;
  int32_T jtilecol;
  int32_T k;
  threadId = static_cast<uint64_T>(mwGetGlobalThreadIndexInXDimension());
  jtilecol = static_cast<int32_T>(threadId % 400ULL);
  k = static_cast<int32_T>((threadId - static_cast<uint64_T>(jtilecol)) /
                           400ULL);
  if ((k < 625) && (jtilecol < 400)) {
    real_T tmpmax;
    tmpmax = -CUDART_INF;
    bp[k + 625 * jtilecol] = 0.0;
    for (int32_T ibtile{0}; ibtile < 400; ibtile++) {
      real_T u;
      u = w[k + 625 * ibtile] - const_b[jtilecol];
      if (u <= 0.0) {
        u = -CUDART_INF;
      } else {
        u = (pow(u, 1.0 - *sigg) - 1.0) / (1.0 - *sigg) + evp[k + 625 * ibtile];
      }
      if (tmpmax < u) {
        tmpmax = u;
        bp[k + 625 * jtilecol] = static_cast<real_T>(ibtile) + 1.0;
      }
    }
    vp1[k + 625 * jtilecol] = tmpmax;
  }
}

static __global__ __launch_bounds__(
    512, 1) void solver_bruteforce_cuda_kernel14(const real_T vd1[625],
                                                 real_T evp[250000])
{
  uint64_T threadId;
  int32_T jtilecol;
  int32_T k;
  threadId = static_cast<uint64_T>(mwGetGlobalThreadIndexInXDimension());
  k = static_cast<int32_T>(threadId % 625ULL);
  jtilecol =
      static_cast<int32_T>((threadId - static_cast<uint64_T>(k)) / 625ULL);
  if ((jtilecol < 400) && (k < 625)) {
    evp[jtilecol * 625 + k] = vd1[k];
  }
}

static __global__ __launch_bounds__(
    512, 1) void solver_bruteforce_cuda_kernel15(const real_T evp[250000],
                                                 const real_T vp1[250000],
                                                 boolean_T def[250000])
{
  uint64_T threadId;
  int32_T k;
  threadId = static_cast<uint64_T>(mwGetGlobalThreadIndexInXDimension());
  k = static_cast<int32_T>(threadId);
  if (k < 250000) {
    def[k] = (vp1[k] < evp[k]);
  }
}

static __global__ __launch_bounds__(
    512, 1) void solver_bruteforce_cuda_kernel16(const boolean_T def[250000],
                                                 const real_T pdf[390625],
                                                 const real_T diff,
                                                 real_T evp[250000])
{
  uint64_T threadId;
  int32_T jtilecol;
  int32_T k;
  threadId = static_cast<uint64_T>(mwGetGlobalThreadIndexInXDimension());
  jtilecol = static_cast<int32_T>(threadId % 400ULL);
  k = static_cast<int32_T>((threadId - static_cast<uint64_T>(jtilecol)) /
                           400ULL);
  if ((k < 625) && (jtilecol < 400)) {
    real_T u;
    u = 0.0;
    for (int32_T ibtile{0}; ibtile < 625; ibtile++) {
      u += pdf[k + 625 * ibtile] *
           static_cast<real_T>(def[ibtile + 625 * jtilecol]);
    }
    evp[k + 625 * jtilecol] = (1.0 - u) / diff;
  }
}

static __global__
    __launch_bounds__(512, 1) void solver_bruteforce_cuda_kernel17(
        const real_T q[250000], const real_T evp[250000], real_T y[250000])
{
  uint64_T threadId;
  int32_T k;
  threadId = static_cast<uint64_T>(mwGetGlobalThreadIndexInXDimension());
  k = static_cast<int32_T>(threadId);
  if (k < 250000) {
    y[k] = fabs(evp[k] - q[k]);
  }
}

static __global__
    __launch_bounds__(512, 1) void solver_bruteforce_cuda_kernel18(
        const real_T vp[250000], const real_T vp1[250000], real_T y[250000])
{
  uint64_T threadId;
  int32_T k;
  threadId = static_cast<uint64_T>(mwGetGlobalThreadIndexInXDimension());
  k = static_cast<int32_T>(threadId);
  if (k < 250000) {
    y[k] = fabs(vp1[k] - vp[k]);
  }
}

static __global__ __launch_bounds__(
    512, 1) void solver_bruteforce_cuda_kernel19(const real_T vd1[625],
                                                 real_T x[625], real_T vd[625])
{
  uint64_T threadId;
  int32_T k;
  threadId = static_cast<uint64_T>(mwGetGlobalThreadIndexInXDimension());
  k = static_cast<int32_T>(threadId);
  if (k < 625) {
    real_T u;
    u = vd1[k] - vd[k];
    vd[k] = u;
    x[k] = fabs(u);
  }
}

static __global__
    __launch_bounds__(416, 1) void solver_bruteforce_cuda_kernel2(real_T y[400])
{
  uint64_T threadId;
  int32_T k;
  threadId = static_cast<uint64_T>(mwGetGlobalThreadIndexInXDimension());
  k = static_cast<int32_T>(threadId);
  if (k < 400) {
    //  dpgrid = b';
    y[k] = fabs(const_b[k]);
  }
}

static __global__
    __launch_bounds__(512, 1) void solver_bruteforce_cuda_kernel20(
        const real_T vp1[250000], const int32_T iindx, real_T vo[625])
{
  uint64_T threadId;
  int32_T k;
  threadId = static_cast<uint64_T>(mwGetGlobalThreadIndexInXDimension());
  k = static_cast<int32_T>(threadId);
  if (k < 625) {
    vo[k] = vp1[k + 625 * iindx];
  }
}

static __global__ __launch_bounds__(
    512, 1) void solver_bruteforce_cuda_kernel21(const real_T vp1[250000],
                                                 real_T vp[250000])
{
  uint64_T threadId;
  int32_T k;
  threadId = static_cast<uint64_T>(mwGetGlobalThreadIndexInXDimension());
  k = static_cast<int32_T>(threadId);
  if (k < 250000) {
    vp[k] = vp1[k];
  }
}

static __global__ __launch_bounds__(
    512, 1) void solver_bruteforce_cuda_kernel22(const real_T vd1[625],
                                                 real_T vd[625])
{
  uint64_T threadId;
  int32_T k;
  threadId = static_cast<uint64_T>(mwGetGlobalThreadIndexInXDimension());
  k = static_cast<int32_T>(threadId);
  if (k < 625) {
    vd[k] = vd1[k];
  }
}

static __global__ __launch_bounds__(
    512, 1) void solver_bruteforce_cuda_kernel23(const real_T evp[250000],
                                                 real_T q[250000])
{
  uint64_T threadId;
  int32_T k;
  threadId = static_cast<uint64_T>(mwGetGlobalThreadIndexInXDimension());
  k = static_cast<int32_T>(threadId);
  if (k < 250000) {
    q[k] = evp[k];
  }
}

static __global__ __launch_bounds__(512, 1) void solver_bruteforce_cuda_kernel3(
    const real_T vd[625], real_T vo[625])
{
  uint64_T threadId;
  int32_T k;
  threadId = static_cast<uint64_T>(mwGetGlobalThreadIndexInXDimension());
  k = static_cast<int32_T>(threadId);
  if (k < 625) {
    // Initialize the Value functions
    // continue repaying
    //  vgood = vp ;
    vo[k] = vd[k];
  }
}

static __global__ __launch_bounds__(512, 1) void solver_bruteforce_cuda_kernel4(
    const struct0_T para, real_T q[250000])
{
  uint64_T threadId;
  int32_T k;
  threadId = static_cast<uint64_T>(mwGetGlobalThreadIndexInXDimension());
  k = static_cast<int32_T>(threadId);
  if (k < 250000) {
    // debt policy function (expressed in indices)
    q[k] = 1.0 / (para.rstar + 1.0);
  }
}

static __global__ __launch_bounds__(512, 1) void solver_bruteforce_cuda_kernel5(
    const real_T diff, const real_T *sigg, const real_T d, const real_T m[625],
    const real_T z[625], real_T ua[625])
{
  uint64_T threadId;
  int32_T k;
  threadId = static_cast<uint64_T>(mwGetGlobalThreadIndexInXDimension());
  k = static_cast<int32_T>(threadId);
  if (k < 625) {
    ua[k] = (pow(exp(z[k]) * m[k] * d, 1.0 - *sigg) - 1.0) / diff;
  }
}

static __global__ __launch_bounds__(512, 1) void solver_bruteforce_cuda_kernel6(
    const real_T *sigg, const real_T m[625], real_T x[625])
{
  uint64_T threadId;
  int32_T k;
  threadId = static_cast<uint64_T>(mwGetGlobalThreadIndexInXDimension());
  k = static_cast<int32_T>(threadId);
  if (k < 625) {
    x[k] = pow(m[k], 1.0 - *sigg);
  }
}

static __global__ __launch_bounds__(512, 1) void solver_bruteforce_cuda_kernel7(
    const real_T pdf[390625], const real_T *betta, const real_T x[625],
    real_T a[390625])
{
  uint64_T threadId;
  int32_T ibtile;
  int32_T k;
  threadId = static_cast<uint64_T>(mwGetGlobalThreadIndexInXDimension());
  ibtile = static_cast<int32_T>(threadId % 625ULL);
  k = static_cast<int32_T>((threadId - static_cast<uint64_T>(ibtile)) / 625ULL);
  if ((k < 625) && (ibtile < 625)) {
    a[ibtile + 625 * k] = x[ibtile] * *betta * pdf[ibtile + 625 * k];
  }
}

static __global__ __launch_bounds__(512, 1) void solver_bruteforce_cuda_kernel8(
    const real_T *sigg, const real_T m[625], real_T x[625])
{
  uint64_T threadId;
  int32_T k;
  threadId = static_cast<uint64_T>(mwGetGlobalThreadIndexInXDimension());
  k = static_cast<int32_T>(threadId);
  if (k < 625) {
    x[k] = pow(m[k], 1.0 - *sigg);
  }
}

static __global__ __launch_bounds__(512, 1) void solver_bruteforce_cuda_kernel9(
    const real_T pdf[390625], const real_T *betta, const real_T x[625],
    real_T a[390625])
{
  uint64_T threadId;
  int32_T ibtile;
  int32_T k;
  threadId = static_cast<uint64_T>(mwGetGlobalThreadIndexInXDimension());
  ibtile = static_cast<int32_T>(threadId % 625ULL);
  k = static_cast<int32_T>((threadId - static_cast<uint64_T>(ibtile)) / 625ULL);
  if ((k < 625) && (ibtile < 625)) {
    a[ibtile + 625 * k] = x[ibtile] * *betta * pdf[ibtile + 625 * k];
  }
}

void solver_bruteforce_cuda(solver_bruteforce_cudaStackData *SD,
                            const real_T b[400], const real_T cpu_z[625],
                            const real_T cpu_m[625],
                            const real_T cpu_pdf[390625], const struct0_T *para,
                            real_T cpu_q[250000], real_T cpu_bp[250000],
                            real_T cpu_vp[250000], boolean_T cpu_def[250000],
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
  const mxArray *m1;
  const mxArray *m2;
  const mxArray *m3;
  const mxArray *y;
  real_T(*gpu_a)[390625];
  real_T(*gpu_pdf)[390625];
  real_T(*b_gpu_y)[250000];
  real_T(*gpu_bp)[250000];
  real_T(*gpu_evp)[250000];
  real_T(*gpu_q)[250000];
  real_T(*gpu_vp)[250000];
  real_T(*gpu_vp1)[250000];
  real_T(*gpu_w)[250000];
  real_T cpu_x[625];
  real_T(*gpu_m)[625];
  real_T(*gpu_ua)[625];
  real_T(*gpu_vd)[625];
  real_T(*gpu_vd1)[625];
  real_T(*gpu_vo)[625];
  real_T(*gpu_x)[625];
  real_T(*gpu_z)[625];
  real_T cpu_y[400];
  real_T(*gpu_y)[400];
  real_T d;
  real_T diff;
  real_T theta;
  real_T *gpu_betta;
  real_T *gpu_sigg;
  int32_T iindx;
  int32_T its;
  boolean_T(*gpu_def)[250000];
  boolean_T bp_outdatedOnCpu;
  boolean_T def_outdatedOnCpu;
  boolean_T p;
  boolean_T pdf_outdatedOnGpu;
  boolean_T vp_outdatedOnCpu;
  cudaMalloc(&b_gpu_y, 2000000ULL);
  cudaMalloc(&gpu_vp1, 2000000ULL);
  cudaMalloc(&gpu_w, 2000000ULL);
  cudaMalloc(&gpu_vd1, 5000ULL);
  cudaMalloc(&gpu_evp, 2000000ULL);
  cudaMalloc(&gpu_a, 3125000ULL);
  cudaMalloc(&gpu_ua, 5000ULL);
  cudaMalloc(&gpu_x, 5000ULL);
  cudaMalloc(&gpu_vo, 5000ULL);
  cudaMalloc(&gpu_vd, 5000ULL);
  cudaMalloc(&gpu_y, 3200ULL);
  cudaMalloc(&gpu_sigg, 8ULL);
  cudaMalloc(&gpu_betta, 8ULL);
  cudaMalloc(&gpu_def, 250000ULL);
  cudaMalloc(&gpu_vp, 2000000ULL);
  cudaMalloc(&gpu_bp, 2000000ULL);
  cudaMalloc(&gpu_q, 2000000ULL);
  cudaMalloc(&gpu_pdf, 3125000ULL);
  cudaMalloc(&gpu_m, 5000ULL);
  cudaMalloc(&gpu_z, 5000ULL);
  def_outdatedOnCpu = false;
  vp_outdatedOnCpu = false;
  bp_outdatedOnCpu = false;
  pdf_outdatedOnGpu = true;
  theta = para->theta;
  solver_bruteforce_cuda_kernel1<<<dim3(1U, 1U, 1U), dim3(32U, 1U, 1U)>>>(
      *para, gpu_sigg, gpu_betta);
  //  dpgrid = b';
  cudaMemcpyToSymbol(const_b, b, 3200ULL, 0ULL, cudaMemcpyHostToDevice);
  solver_bruteforce_cuda_kernel2<<<dim3(1U, 1U, 1U), dim3(416U, 1U, 1U)>>>(
      *gpu_y);
  iindx = 0;
  cudaMemcpy(cpu_y, *gpu_y, 3200ULL, cudaMemcpyDeviceToHost);
  diff = cpu_y[0];
  for (int32_T i{0}; i < 399; i++) {
    d = cpu_y[i + 1];
    if (std::isnan(d)) {
      p = false;
    } else if (std::isnan(diff)) {
      p = true;
    } else {
      p = (diff > d);
    }
    if (p) {
      diff = d;
      iindx = i + 1;
    }
  }
  // Initialize the Value functions
  // continue repaying
  //  vgood = vp ;
  solver_bruteforce_cuda_kernel3<<<dim3(2U, 1U, 1U), dim3(512U, 1U, 1U)>>>(
      *gpu_vd, *gpu_vo);
  // debt policy function (expressed in indices)
  solver_bruteforce_cuda_kernel4<<<dim3(489U, 1U, 1U), dim3(512U, 1U, 1U)>>>(
      *para, *gpu_q);
  // q is price of debt; it is a function of  (y_t, d_{t+1})
  //  u = zeros(1,nb) ;
  cudaMemcpy(*gpu_m, cpu_m, 5000ULL, cudaMemcpyHostToDevice);
  cudaMemcpy(*gpu_z, cpu_z, 5000ULL, cudaMemcpyHostToDevice);
  solver_bruteforce_cuda_kernel5<<<dim3(2U, 1U, 1U), dim3(512U, 1U, 1U)>>>(
      1.0 - para->sigg, gpu_sigg, 1.0 - para->phi0, *gpu_m, *gpu_z, *gpu_ua);
  //
  diff = 1.0;
  its = 1;
  expl_temp = coder::tic();
  //  <----- Start the timer
  while ((diff > 1.0E-7) && (its < 1000)) {
    real_T beta1;
    real_T maxval;
    solver_bruteforce_cuda_kernel6<<<dim3(2U, 1U, 1U), dim3(512U, 1U, 1U)>>>(
        gpu_sigg, *gpu_m, *gpu_x);
    if (pdf_outdatedOnGpu) {
      cudaMemcpy(*gpu_pdf, cpu_pdf, 3125000ULL, cudaMemcpyHostToDevice);
    }
    solver_bruteforce_cuda_kernel7<<<dim3(763U, 1U, 1U), dim3(512U, 1U, 1U)>>>(
        *gpu_pdf, gpu_betta, *gpu_x, *gpu_a);
    diff = 1.0;
    beta1 = 0.0;
    cublasDgemm(getCublasGlobalHandle(), CUBLAS_OP_N, CUBLAS_OP_N, 625, 400,
                625, (double *)&diff, (double *)&(*gpu_a)[0], 625,
                (double *)&(*gpu_vp)[0], 625, (double *)&beta1,
                (double *)&(*gpu_evp)[0], 625);
    solver_bruteforce_cuda_kernel8<<<dim3(2U, 1U, 1U), dim3(512U, 1U, 1U)>>>(
        gpu_sigg, *gpu_m, *gpu_x);
    solver_bruteforce_cuda_kernel9<<<dim3(763U, 1U, 1U), dim3(512U, 1U, 1U)>>>(
        *gpu_pdf, gpu_betta, *gpu_x, *gpu_a);
    solver_bruteforce_cuda_kernel10<<<dim3(2U, 1U, 1U), dim3(512U, 1U, 1U)>>>(
        *gpu_vd, 1.0 - theta, theta, *gpu_vo);
    cublasDgemm(getCublasGlobalHandle(), CUBLAS_OP_N, CUBLAS_OP_N, 625, 1, 625,
                (double *)&diff, (double *)&(*gpu_a)[0], 625,
                (double *)&(*gpu_vo)[0], 625, (double *)&beta1,
                (double *)&(*gpu_vd1)[0], 625);
    solver_bruteforce_cuda_kernel11<<<dim3(2U, 1U, 1U), dim3(512U, 1U, 1U)>>>(
        *gpu_z, *gpu_ua, *gpu_x, *gpu_vd1);
    solver_bruteforce_cuda_kernel12<<<dim3(489U, 1U, 1U), dim3(512U, 1U, 1U)>>>(
        *gpu_m, *gpu_x, *gpu_q, *gpu_w);
    solver_bruteforce_cuda_kernel13<<<dim3(489U, 1U, 1U), dim3(512U, 1U, 1U)>>>(
        *gpu_evp, gpu_sigg, *gpu_w, *gpu_vp1, *gpu_bp);
    bp_outdatedOnCpu = true;
    solver_bruteforce_cuda_kernel14<<<dim3(489U, 1U, 1U), dim3(512U, 1U, 1U)>>>(
        *gpu_vd1, *gpu_evp);
    solver_bruteforce_cuda_kernel15<<<dim3(489U, 1U, 1U), dim3(512U, 1U, 1U)>>>(
        *gpu_evp, *gpu_vp1, *gpu_def);
    def_outdatedOnCpu = true;
    pdf_outdatedOnGpu = false;
    solver_bruteforce_cuda_kernel16<<<dim3(489U, 1U, 1U), dim3(512U, 1U, 1U)>>>(
        *gpu_def, *gpu_pdf, para->rstar + 1.0, *gpu_evp);
    solver_bruteforce_cuda_kernel17<<<dim3(489U, 1U, 1U), dim3(512U, 1U, 1U)>>>(
        *gpu_q, *gpu_evp, *b_gpu_y);
    cudaMemcpy(SD->f0.cpu_y, *b_gpu_y, 2000000ULL, cudaMemcpyDeviceToHost);
    beta1 = SD->f0.cpu_y[0];
    for (int32_T i{0}; i < 249999; i++) {
      d = SD->f0.cpu_y[i + 1];
      if (std::isnan(d)) {
        p = false;
      } else if (std::isnan(beta1)) {
        p = true;
      } else {
        p = (beta1 < d);
      }
      if (p) {
        beta1 = d;
      }
    }
    solver_bruteforce_cuda_kernel18<<<dim3(489U, 1U, 1U), dim3(512U, 1U, 1U)>>>(
        *gpu_vp, *gpu_vp1, *b_gpu_y);
    cudaMemcpy(SD->f0.cpu_y, *b_gpu_y, 2000000ULL, cudaMemcpyDeviceToHost);
    maxval = SD->f0.cpu_y[0];
    for (int32_T i{0}; i < 249999; i++) {
      d = SD->f0.cpu_y[i + 1];
      if (std::isnan(d)) {
        p = false;
      } else if (std::isnan(maxval)) {
        p = true;
      } else {
        p = (maxval < d);
      }
      if (p) {
        maxval = d;
      }
    }
    solver_bruteforce_cuda_kernel19<<<dim3(2U, 1U, 1U), dim3(512U, 1U, 1U)>>>(
        *gpu_vd1, *gpu_x, *gpu_vd);
    cudaMemcpy(cpu_x, *gpu_x, 5000ULL, cudaMemcpyDeviceToHost);
    diff = cpu_x[0];
    for (int32_T i{0}; i < 624; i++) {
      d = cpu_x[i + 1];
      if (std::isnan(d)) {
        p = false;
      } else if (std::isnan(diff)) {
        p = true;
      } else {
        p = (diff < d);
      }
      if (p) {
        diff = d;
      }
    }
    diff += beta1 + maxval;
    solver_bruteforce_cuda_kernel20<<<dim3(2U, 1U, 1U), dim3(512U, 1U, 1U)>>>(
        *gpu_vp1, iindx, *gpu_vo);
    solver_bruteforce_cuda_kernel21<<<dim3(489U, 1U, 1U), dim3(512U, 1U, 1U)>>>(
        *gpu_vp1, *gpu_vp);
    vp_outdatedOnCpu = true;
    solver_bruteforce_cuda_kernel22<<<dim3(2U, 1U, 1U), dim3(512U, 1U, 1U)>>>(
        *gpu_vd1, *gpu_vd);
    solver_bruteforce_cuda_kernel23<<<dim3(489U, 1U, 1U), dim3(512U, 1U, 1U)>>>(
        *gpu_evp, *gpu_q);
    if (std::fmod(static_cast<real_T>(its), 50.0) == 0.0) {
      c_y = nullptr;
      m2 = emlrtCreateCharArray(2, &iv2[0]);
      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 7, m2, &u[0]);
      emlrtAssign(&c_y, m2);
      d_y = nullptr;
      m3 = emlrtCreateCharArray(2, &iv3[0]);
      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 17, m3, &c_u[0]);
      emlrtAssign(&d_y, m3);
      emlrt_marshallIn(feval(c_y, emlrt_marshallOut(1.0), d_y,
                             emlrt_marshallOut(static_cast<real_T>(its)),
                             emlrt_marshallOut(diff), &emlrtMCI),
                       "<output of feval>");
    }
    its++;
  }
  *totaltime = coder::toc(expl_temp.tv_sec, expl_temp.tv_nsec);
  *avgtime = *totaltime / (static_cast<real_T>(its) - 1.0);
  y = nullptr;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 7, m, &u[0]);
  emlrtAssign(&y, m);
  b_y = nullptr;
  m1 = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 42, m1, &b_u[0]);
  emlrtAssign(&b_y, m1);
  emlrt_marshallIn(feval(y, emlrt_marshallOut(1.0), b_y,
                         emlrt_marshallOut(static_cast<real_T>(its) - 1.0),
                         emlrt_marshallOut(*totaltime),
                         emlrt_marshallOut(*avgtime), &emlrtMCI),
                   "<output of feval>");
  cudaMemcpy(cpu_q, *gpu_q, 2000000ULL, cudaMemcpyDeviceToHost);
  if (bp_outdatedOnCpu) {
    cudaMemcpy(cpu_bp, *gpu_bp, 2000000ULL, cudaMemcpyDeviceToHost);
  }
  if (vp_outdatedOnCpu) {
    cudaMemcpy(cpu_vp, *gpu_vp, 2000000ULL, cudaMemcpyDeviceToHost);
  }
  if (def_outdatedOnCpu) {
    cudaMemcpy(cpu_def, *gpu_def, 250000ULL, cudaMemcpyDeviceToHost);
  }
  cudaFree(*gpu_z);
  cudaFree(*gpu_m);
  cudaFree(*gpu_pdf);
  cudaFree(*gpu_q);
  cudaFree(*gpu_bp);
  cudaFree(*gpu_vp);
  cudaFree(*gpu_def);
  cudaFree(gpu_betta);
  cudaFree(gpu_sigg);
  cudaFree(*gpu_y);
  cudaFree(*gpu_vd);
  cudaFree(*gpu_vo);
  cudaFree(*gpu_x);
  cudaFree(*gpu_ua);
  cudaFree(*gpu_a);
  cudaFree(*gpu_evp);
  cudaFree(*gpu_vd1);
  cudaFree(*gpu_w);
  cudaFree(*gpu_vp1);
  cudaFree(*b_gpu_y);
}

// End of code generation (solver_bruteforce_cuda.cu)
