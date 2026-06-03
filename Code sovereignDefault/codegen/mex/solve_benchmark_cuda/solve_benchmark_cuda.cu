//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// solve_benchmark_cuda.cu
//
// Code generation for function 'solve_benchmark_cuda'
//

// Include files
#include "solve_benchmark_cuda.h"
#include "rt_nonfinite.h"
#include "solve_benchmark_cuda_data.h"
#include "solve_benchmark_cuda_mexutil.h"
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

__constant__ static real_T const_z[625];

__constant__ static real_T const_m[625];

__constant__ static real_T const_b[400];

// Function Declarations
static void checkCudaError(cudaError_t errorCode, const char_T *file,
                           int32_T b_line);

static real_T emlrt_marshallIn(const mxArray *u,
                               const emlrtMsgIdentifier *parentId);

static real_T emlrt_marshallIn(const mxArray *a__output_of_feval_,
                               const char_T *identifier);

static real_T f_emlrt_marshallIn(const mxArray *src,
                                 const emlrtMsgIdentifier *msgId);

static const mxArray *feval(const mxArray *m1, const mxArray *m2,
                            const mxArray *m3, const mxArray *m4,
                            const mxArray *m5, const mxArray *m6,
                            const mxArray *m7, emlrtMCInfo *location);

static void gpuThrowError(uint32_T errorCode, const char_T *errorName,
                          const char_T *errorString, const char_T *file,
                          int32_T b_line);

static __global__ void solve_benchmark_cuda_kernel01(real_T q[250000],
                                                     real_T rr[250000]);

static __global__ void solve_benchmark_cuda_kernel02(const real_T b,
                                                     real_T ua[625]);

static __global__ void solve_benchmark_cuda_kernel03(real_T probDcre[625]);

static __global__ void solve_benchmark_cuda_kernel04(const real_T pdf[390625],
                                                     const real_T betta,
                                                     const real_T probDcre[625],
                                                     real_T evp_tmp[390625]);

static __global__ void solve_benchmark_cuda_kernel05(const real_T ua[625],
                                                     real_T vdnew[625],
                                                     real_T probDcre[625],
                                                     real_T vaut[625]);

static __global__ void solve_benchmark_cuda_kernel06(const real_T vdnew[625],
                                                     real_T vaut[625]);

static __global__ void solve_benchmark_cuda_kernel07(real_T probDcre[625]);

static __global__ void solve_benchmark_cuda_kernel08(const real_T pdf[390625],
                                                     const real_T betta,
                                                     const real_T probDcre[625],
                                                     real_T evp_tmp[390625]);

static __global__ void solve_benchmark_cuda_kernel09(const real_T q[250000],
                                                     const real_T pdef[250000],
                                                     real_T bp[250000],
                                                     real_T vpnew[250000],
                                                     real_T W[100000000]);

static __global__ void solve_benchmark_cuda_kernel10(
    const real_T q[250000], const real_T sigg_bp, const real_T vpnew[250000],
    const real_T W[100000000], const real_T cv_bp, real_T qnew[250000]);

static __global__ void solve_benchmark_cuda_kernel11(
    const real_T q[250000], const real_T bp[250000], const real_T alfa,
    const real_T sigg_bpr, const real_T vpnew[250000], const real_T cv_bpr,
    const real_T vaut[625], real_T V[250000], real_T pdef[250000],
    real_T probDcre[625], real_T probVp[625]);

static __global__ void solve_benchmark_cuda_kernel12(const real_T vd[625],
                                                     real_T probVp[625]);

static __global__ void solve_benchmark_cuda_kernel13(const real_T ua[625],
                                                     real_T vdnew[625]);

static __global__ void solve_benchmark_cuda_kernel14(const real_T sigg_defp,
                                                     const real_T vdnew[625],
                                                     const real_T vpnew[250000],
                                                     real_T pdef[250000]);

static __global__ void solve_benchmark_cuda_kernel15(real_T pdef[250000]);

static __global__ void solve_benchmark_cuda_kernel16(real_T probDcre[625]);

static __global__ void solve_benchmark_cuda_kernel17(const real_T probDcre[625],
                                                     real_T rr[250000]);

static __global__ void solve_benchmark_cuda_kernel18(const real_T V[250000],
                                                     const real_T qnew[250000],
                                                     real_T rr[250000],
                                                     real_T pdef[250000]);

static __global__ void solve_benchmark_cuda_kernel19(real_T q[250000],
                                                     real_T V[250000],
                                                     real_T qnew[250000]);

static __global__ void solve_benchmark_cuda_kernel20(const real_T V[250000],
                                                     real_T maxval[400]);

static __global__ void solve_benchmark_cuda_kernel21(const real_T vpnew[250000],
                                                     real_T vp[250000],
                                                     real_T V[250000]);

static __global__ void solve_benchmark_cuda_kernel22(const real_T vdnew[625],
                                                     real_T vd[625],
                                                     real_T probDcre[625]);

static __global__ void solve_benchmark_cuda_kernel23(const real_T vpnew[250000],
                                                     real_T vp[250000]);

static __global__ void solve_benchmark_cuda_kernel24(const real_T vdnew[625],
                                                     real_T vd[625]);

static __global__ void solve_benchmark_cuda_kernel25(const real_T qnew[250000],
                                                     real_T q[250000]);

static __global__ void solve_benchmark_cuda_kernel26(const real_T vdnew[625],
                                                     real_T pdef[250000]);

static __global__ void solve_benchmark_cuda_kernel27(const real_T vpnew[250000],
                                                     const real_T pdef[250000],
                                                     real_T V[250000]);

static __global__ void solve_benchmark_cuda_kernel28(const real_T vd[625],
                                                     real_T pdef[250000]);

static __global__ void solve_benchmark_cuda_kernel29(const real_T vp[250000],
                                                     const real_T pdef[250000],
                                                     boolean_T def[250000]);

static __global__ void
solve_benchmark_cuda_kernel30(const real_T q[250000], const real_T bp[250000],
                              const real_T alfa, const real_T vpnew[250000],
                              const real_T vaut[625], real_T bpr[625]);

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

static real_T emlrt_marshallIn(const mxArray *u,
                               const emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = f_emlrt_marshallIn(emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T f_emlrt_marshallIn(const mxArray *src,
                                 const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims{0};
  real_T ret;
  emlrtCheckBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", false, 0U,
                          (const void *)&dims);
  ret = *static_cast<real_T *>(emlrtMxGetData(src));
  emlrtDestroyArray(&src);
  return ret;
}

static const mxArray *feval(const mxArray *m1, const mxArray *m2,
                            const mxArray *m3, const mxArray *m4,
                            const mxArray *m5, const mxArray *m6,
                            const mxArray *m7, emlrtMCInfo *location)
{
  const mxArray *pArrays[7];
  const mxArray *m8;
  pArrays[0] = m1;
  pArrays[1] = m2;
  pArrays[2] = m3;
  pArrays[3] = m4;
  pArrays[4] = m5;
  pArrays[5] = m6;
  pArrays[6] = m7;
  return emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 1, &m8, 7, &pArrays[0],
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

static __global__ __launch_bounds__(256, 1) void solve_benchmark_cuda_kernel01(
    real_T q[250000], real_T rr[250000])
{
  int32_T iv0;
  iv0 = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (iv0 < 250000) {
    q[iv0] = 0.9615384615384615;
    rr[iv0] = 0.4807692307692307;
  }
}

static __global__
    __launch_bounds__(128, 1) void solve_benchmark_cuda_kernel02(const real_T b,
                                                                 real_T ua[625])
{
  int32_T k;
  k = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (k < 625) {
    ua[k] = -(1.0 / (exp(const_z[k]) * const_m[k] * b) - 1.0);
  }
}

static __global__ __launch_bounds__(128, 1) void solve_benchmark_cuda_kernel03(
    real_T probDcre[625])
{
  int32_T k;
  k = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (k < 625) {
    probDcre[k] = 1.0 / const_m[k];
  }
}

static __global__ __launch_bounds__(256, 1) void solve_benchmark_cuda_kernel04(
    const real_T pdf[390625], const real_T betta, const real_T probDcre[625],
    real_T evp_tmp[390625])
{
  uint64_T gThreadId;
  int32_T ibcol;
  int32_T iv0;
  gThreadId = mwGetGlobalThreadIndex();
  ibcol = static_cast<int32_T>(gThreadId % 625ULL);
  iv0 =
      static_cast<int32_T>((gThreadId - static_cast<uint64_T>(ibcol)) / 625ULL);
  if ((iv0 < 625) && (ibcol < 625)) {
    iv0 = ibcol + 625 * iv0;
    evp_tmp[iv0] = probDcre[ibcol] * pdf[iv0] * betta;
  }
}

static __global__ __launch_bounds__(128, 1) void solve_benchmark_cuda_kernel05(
    const real_T ua[625], real_T vdnew[625], real_T probDcre[625],
    real_T vaut[625])
{
  real_T b;
  int32_T k;
  k = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (k < 625) {
    b = ua[k] + vdnew[k];
    vdnew[k] = b;
    b -= vaut[k];
    vaut[k] = b;
    probDcre[k] = fabs(b);
  }
}

static __global__ __launch_bounds__(128, 1) void solve_benchmark_cuda_kernel06(
    const real_T vdnew[625], real_T vaut[625])
{
  int32_T iv0;
  iv0 = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (iv0 < 625) {
    vaut[iv0] = vdnew[iv0];
  }
}

static __global__ __launch_bounds__(128, 1) void solve_benchmark_cuda_kernel07(
    real_T probDcre[625])
{
  int32_T k;
  k = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (k < 625) {
    probDcre[k] = 1.0 / const_m[k];
  }
}

static __global__ __launch_bounds__(256, 1) void solve_benchmark_cuda_kernel08(
    const real_T pdf[390625], const real_T betta, const real_T probDcre[625],
    real_T evp_tmp[390625])
{
  uint64_T gThreadId;
  int32_T ibcol;
  int32_T iv0;
  gThreadId = mwGetGlobalThreadIndex();
  ibcol = static_cast<int32_T>(gThreadId % 625ULL);
  iv0 =
      static_cast<int32_T>((gThreadId - static_cast<uint64_T>(ibcol)) / 625ULL);
  if ((iv0 < 625) && (ibcol < 625)) {
    iv0 = ibcol + 625 * iv0;
    evp_tmp[iv0] = probDcre[ibcol] * betta * pdf[iv0];
  }
}

static __global__ __launch_bounds__(256, 1) void solve_benchmark_cuda_kernel09(
    const real_T q[250000], const real_T pdef[250000], real_T bp[250000],
    real_T vpnew[250000], real_T W[100000000])
{
  real_T WW1;
  real_T b;
  real_T probVp_is;
  uint64_T gThreadId;
  int32_T i;
  int32_T ib;
  int32_T ibcol;
  int32_T is;
  int32_T iv0;
  boolean_T p;
  gThreadId = mwGetGlobalThreadIndex();
  ib = static_cast<int32_T>(gThreadId % 400ULL);
  is = static_cast<int32_T>((gThreadId - static_cast<uint64_T>(ib)) / 400ULL);
  if ((is < 625) && (ib < 400)) {
    //  to calculate the value of default
    probVp_is = exp(const_z[is]) * const_m[is];
    for (i = 0; i < 400; i++) {
      iv0 = is + 625 * i;
      b = q[iv0];
      if (b >= 0.45) {
        WW1 = (probVp_is - 0.1993 * const_b[ib]) +
              b * (const_b[i] * const_m[is] - 0.85 * const_b[ib]);
        if (WW1 <= 0.0) {
          W[(i + 400 * ib) + 160000 * is] = -CUDART_INF;
        } else {
          W[(i + 400 * ib) + 160000 * is] = (1.0 - 1.0 / WW1) + pdef[iv0];
        }
      } else {
        W[(i + 400 * ib) + 160000 * is] = -CUDART_INF;
      }
    }
    ibcol = 1;
    WW1 = W[400 * ib + 160000 * is];
    for (i = 0; i < 399; i++) {
      b = W[((i + 400 * ib) + 160000 * is) + 1];
      if (isnan(b)) {
        p = false;
      } else if (isnan(WW1)) {
        p = true;
      } else {
        p = (WW1 < b);
      }
      if (p) {
        WW1 = b;
        ibcol = i + 2;
      }
    }
    iv0 = is + 625 * ib;
    vpnew[iv0] = WW1;
    bp[iv0] = static_cast<real_T>(ibcol);
  }
}

static __global__ __launch_bounds__(256, 1) void solve_benchmark_cuda_kernel10(
    const real_T q[250000], const real_T sigg_bp, const real_T vpnew[250000],
    const real_T W[100000000], const real_T cv_bp, real_T qnew[250000])
{
  real_T WW1;
  real_T b;
  real_T sumExp;
  real_T temp;
  uint64_T gThreadId;
  int32_T i;
  int32_T ib;
  int32_T is;
  int32_T iv0;
  gThreadId = mwGetGlobalThreadIndex();
  ib = static_cast<int32_T>(gThreadId % 400ULL);
  is = static_cast<int32_T>((gThreadId - static_cast<uint64_T>(ib)) / 400ULL);
  if ((is < 625) && (ib < 400)) {
    //  to incorporate taste shocks on debt choice
    sumExp = 0.0;
    WW1 = 0.0;
    iv0 = is + 625 * ib;
    b = vpnew[iv0];
    for (i = 0; i < 400; i++) {
      temp = (W[(i + 400 * ib) + 160000 * is] - b) - cv_bp;
      if (temp > 0.0) {
        temp = exp((temp + cv_bp) / sigg_bp);
        //  Compute theExp
        sumExp += temp;
        //  Accumulate theExp
        WW1 += temp * q[is + 625 * i];
        //  Accumulate theExpQ
      }
    }
    qnew[iv0] = 0.85 * (WW1 / sumExp + 0.058) + 0.15;
  }
}

static __global__ __launch_bounds__(128, 1) void solve_benchmark_cuda_kernel11(
    const real_T q[250000], const real_T bp[250000], const real_T alfa,
    const real_T sigg_bpr, const real_T vpnew[250000], const real_T cv_bpr,
    const real_T vaut[625], real_T V[250000], real_T pdef[250000],
    real_T probDcre[625], real_T probVp[625])
{
  real_T WW1;
  real_T maxWW;
  real_T probVp_is;
  real_T sumExp;
  real_T temp;
  int32_T ib;
  int32_T is;
  int32_T iv0;
  is = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (is < 625) {
    maxWW = -CUDART_INF;
    //  To store the maximum value of WW
    WW1 = vaut[is];
    for (ib = 0; ib < 400; ib++) {
      iv0 = is + 625 * ib;
      sumExp =
          (0.85 * (q[is + 625 * (static_cast<int32_T>(bp[iv0]) - 1)] + 0.058) +
           0.15) *
          const_b[ib];
      pdef[iv0] = sumExp;
      sumExp = pow(fmax(0.0, vpnew[iv0] - WW1), alfa) * pow(sumExp, 1.0 - alfa);
      V[ib + 400 * is] = sumExp;
      if (sumExp > maxWW) {
        maxWW = sumExp;
        //  Update maximum value
      }
    }
    sumExp = 0.0;
    WW1 = 0.0;
    probVp_is = 0.0;
    for (ib = 0; ib < 400; ib++) {
      temp = (V[ib + 400 * is] - maxWW) - cv_bpr;
      if (temp > 0.0) {
        temp = exp((temp + cv_bpr) / sigg_bpr);
        sumExp += temp;
        //  Accumulate sums directly
        iv0 = is + 625 * ib;
        WW1 += temp * pdef[iv0];
        probVp_is += temp * vpnew[iv0];
      }
    }
    if (sumExp > 0.0) {
      probDcre[is] = WW1 / sumExp;
      probVp[is] = probVp_is / sumExp;
    } else {
      probDcre[is] = 0.0;
      probVp[is] = 0.0;
    }
  }
}

static __global__ __launch_bounds__(128, 1) void solve_benchmark_cuda_kernel12(
    const real_T vd[625], real_T probVp[625])
{
  int32_T iv0;
  iv0 = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (iv0 < 625) {
    probVp[iv0] = 0.154 * probVp[iv0] + 0.846 * vd[iv0];
  }
}

static __global__ __launch_bounds__(128, 1) void solve_benchmark_cuda_kernel13(
    const real_T ua[625], real_T vdnew[625])
{
  int32_T iv0;
  iv0 = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (iv0 < 625) {
    vdnew[iv0] += ua[iv0];
  }
}

static __global__ __launch_bounds__(256, 1) void solve_benchmark_cuda_kernel14(
    const real_T sigg_defp, const real_T vdnew[625], const real_T vpnew[250000],
    real_T pdef[250000])
{
  uint64_T gThreadId;
  int32_T ibcol;
  int32_T iv0;
  gThreadId = mwGetGlobalThreadIndex();
  ibcol = static_cast<int32_T>(gThreadId % 625ULL);
  iv0 =
      static_cast<int32_T>((gThreadId - static_cast<uint64_T>(ibcol)) / 625ULL);
  if ((iv0 < 400) && (ibcol < 625)) {
    iv0 = ibcol + 625 * iv0;
    pdef[iv0] = (vpnew[iv0] - vdnew[ibcol]) / sigg_defp;
  }
}

static __global__
    __launch_bounds__(256,
                      1) void solve_benchmark_cuda_kernel15(real_T pdef[250000])
{
  int32_T k;
  k = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (k < 250000) {
    pdef[k] = 1.0 / (exp(pdef[k]) + 1.0);
  }
}

static __global__ __launch_bounds__(128, 1) void solve_benchmark_cuda_kernel16(
    real_T probDcre[625])
{
  int32_T iv0;
  iv0 = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (iv0 < 625) {
    probDcre[iv0] *= 0.154;
  }
}

static __global__ __launch_bounds__(256, 1) void solve_benchmark_cuda_kernel17(
    const real_T probDcre[625], real_T rr[250000])
{
  uint64_T gThreadId;
  int32_T ibcol;
  int32_T iv0;
  int32_T k;
  gThreadId = mwGetGlobalThreadIndex();
  ibcol = static_cast<int32_T>(gThreadId % 625ULL);
  iv0 =
      static_cast<int32_T>((gThreadId - static_cast<uint64_T>(ibcol)) / 625ULL);
  if ((iv0 < 400) && (ibcol < 625)) {
    k = ibcol + 625 * iv0;
    rr[k] = 0.846 * rr[k] + probDcre[ibcol] / const_b[iv0];
  }
}

static __global__ __launch_bounds__(256, 1) void solve_benchmark_cuda_kernel18(
    const real_T V[250000], const real_T qnew[250000], real_T rr[250000],
    real_T pdef[250000])
{
  real_T WW1;
  real_T b;
  int32_T iv0;
  iv0 = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (iv0 < 250000) {
    b = V[iv0] / 1.04;
    rr[iv0] = b;
    WW1 = pdef[iv0];
    WW1 = WW1 * b + (1.0 - WW1) * qnew[iv0];
    pdef[iv0] = WW1;
  }
}

static __global__ __launch_bounds__(256, 1) void solve_benchmark_cuda_kernel19(
    real_T q[250000], real_T V[250000], real_T qnew[250000])
{
  real_T b;
  int32_T k;
  k = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (k < 250000) {
    b = qnew[k] / 1.04;
    qnew[k] = b;
    b -= q[k];
    q[k] = b;
    V[k] = fabs(b);
  }
}

static __global__ __launch_bounds__(128, 1) void solve_benchmark_cuda_kernel20(
    const real_T V[250000], real_T maxval[400])
{
  real_T WW1;
  real_T b;
  int32_T i;
  int32_T iv0;
  int32_T k;
  boolean_T p;
  k = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (k < 400) {
    iv0 = (k * 624 + k) + 1;
    maxval[k] = V[iv0 - 1];
    for (i = 0; i < 624; i++) {
      b = V[iv0 + i];
      if (isnan(b)) {
        p = false;
      } else {
        WW1 = maxval[k];
        if (isnan(WW1)) {
          p = true;
        } else {
          p = (WW1 < b);
        }
      }
      if (p) {
        maxval[k] = b;
      }
    }
  }
}

static __global__ __launch_bounds__(256, 1) void solve_benchmark_cuda_kernel21(
    const real_T vpnew[250000], real_T vp[250000], real_T V[250000])
{
  real_T b;
  int32_T k;
  k = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (k < 250000) {
    b = vpnew[k] - vp[k];
    vp[k] = b;
    V[k] = fabs(b);
  }
}

static __global__ __launch_bounds__(128, 1) void solve_benchmark_cuda_kernel22(
    const real_T vdnew[625], real_T vd[625], real_T probDcre[625])
{
  real_T b;
  int32_T k;
  k = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (k < 625) {
    b = vdnew[k] - vd[k];
    vd[k] = b;
    probDcre[k] = fabs(b);
  }
}

static __global__ __launch_bounds__(256, 1) void solve_benchmark_cuda_kernel23(
    const real_T vpnew[250000], real_T vp[250000])
{
  int32_T iv0;
  iv0 = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (iv0 < 250000) {
    vp[iv0] = vpnew[iv0];
  }
}

static __global__ __launch_bounds__(128, 1) void solve_benchmark_cuda_kernel24(
    const real_T vdnew[625], real_T vd[625])
{
  int32_T iv0;
  iv0 = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (iv0 < 625) {
    vd[iv0] = vdnew[iv0];
  }
}

static __global__ __launch_bounds__(256, 1) void solve_benchmark_cuda_kernel25(
    const real_T qnew[250000], real_T q[250000])
{
  int32_T iv0;
  iv0 = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (iv0 < 250000) {
    q[iv0] = qnew[iv0];
  }
}

static __global__ __launch_bounds__(256, 1) void solve_benchmark_cuda_kernel26(
    const real_T vdnew[625], real_T pdef[250000])
{
  uint64_T gThreadId;
  int32_T iv0;
  int32_T k;
  gThreadId = mwGetGlobalThreadIndex();
  k = static_cast<int32_T>(gThreadId % 625ULL);
  iv0 = static_cast<int32_T>((gThreadId - static_cast<uint64_T>(k)) / 625ULL);
  if ((iv0 < 400) && (k < 625)) {
    pdef[iv0 * 625 + k] = vdnew[k];
  }
}

static __global__ __launch_bounds__(256, 1) void solve_benchmark_cuda_kernel27(
    const real_T vpnew[250000], const real_T pdef[250000], real_T V[250000])
{
  int32_T k;
  k = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (k < 250000) {
    V[k] = fmax(vpnew[k], pdef[k]);
  }
}

static __global__ __launch_bounds__(256, 1) void solve_benchmark_cuda_kernel28(
    const real_T vd[625], real_T pdef[250000])
{
  uint64_T gThreadId;
  int32_T iv0;
  int32_T k;
  gThreadId = mwGetGlobalThreadIndex();
  k = static_cast<int32_T>(gThreadId % 625ULL);
  iv0 = static_cast<int32_T>((gThreadId - static_cast<uint64_T>(k)) / 625ULL);
  if ((iv0 < 400) && (k < 625)) {
    pdef[iv0 * 625 + k] = vd[k];
  }
}

static __global__ __launch_bounds__(256, 1) void solve_benchmark_cuda_kernel29(
    const real_T vp[250000], const real_T pdef[250000], boolean_T def[250000])
{
  int32_T iv0;
  iv0 = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (iv0 < 250000) {
    def[iv0] = (vp[iv0] < pdef[iv0]);
  }
}

static __global__ __launch_bounds__(128, 1) void solve_benchmark_cuda_kernel30(
    const real_T q[250000], const real_T bp[250000], const real_T alfa,
    const real_T vpnew[250000], const real_T vaut[625], real_T bpr[625])
{
  real_T WW1;
  real_T b;
  real_T maxWW;
  int32_T ib;
  int32_T is;
  int32_T k;
  is = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (is < 625) {
    maxWW = -CUDART_INF;
    //  Initialize maximum WW
    bpr[is] = 1.0;
    //  Initialize index for maximum WW
    b = vaut[is];
    for (ib = 0; ib < 400; ib++) {
      k = is + 625 * ib;
      WW1 = pow(fmax(0.0, vpnew[k] - b), alfa) *
            pow((0.85 *
                     (q[is + 625 * (static_cast<int32_T>(bp[k]) - 1)] + 0.058) +
                 0.15) *
                    const_b[ib],
                1.0 - alfa);
      if (WW1 > maxWW) {
        maxWW = WW1;
        bpr[is] = static_cast<real_T>(ib) + 1.0;
      }
    }
  }
}

void solve_benchmark_cuda(const real_T z[625], const real_T m[625],
                          const real_T b[400], const real_T cpu_pdf[390625],
                          const real_T para[8], real_T cpu_vp[250000],
                          real_T cpu_vd[625], real_T cpu_q[250000],
                          real_T cpu_bp[250000], real_T cpu_bpr[625],
                          boolean_T cpu_def[250000], real_T cpu_rr[250000],
                          real_T *totaltime, real_T *avgtime)
{
  static const int32_T iv[2]{1, 7};
  static const int32_T iv1[2]{1, 31};
  static const char_T b_u[31]{'%', '8', '.', '0', 'f', ' ',  '~', '%',
                              '8', '.', '8', 'f', ' ', '~',  '%', '8',
                              '.', '5', 'f', 's', ' ', '~',  '%', '8',
                              '.', '5', 'f', 's', ' ', '\\', 'n'};
  static const char_T u[7]{'f', 'p', 'r', 'i', 'n', 't', 'f'};
  emlrtTimespec expl_temp;
  const mxArray *b_m;
  const mxArray *b_y;
  const mxArray *y;
  real_T(*gpu_W)[100000000];
  real_T(*gpu_evp_tmp)[390625];
  real_T(*gpu_pdf)[390625];
  real_T(*gpu_V)[250000];
  real_T(*gpu_bp)[250000];
  real_T(*gpu_pdef)[250000];
  real_T(*gpu_q)[250000];
  real_T(*gpu_qnew)[250000];
  real_T(*gpu_rr)[250000];
  real_T(*gpu_vp)[250000];
  real_T(*gpu_vpnew)[250000];
  real_T(*gpu_bpr)[625];
  real_T(*gpu_probDcre)[625];
  real_T(*gpu_probVp)[625];
  real_T(*gpu_ua)[625];
  real_T(*gpu_vaut)[625];
  real_T(*gpu_vd)[625];
  real_T(*gpu_vdnew)[625];
  real_T cpu_maxval[400];
  real_T(*gpu_maxval)[400];
  real_T alfa;
  real_T beta1;
  real_T betta;
  real_T c;
  real_T cv_bp;
  real_T cv_bpr;
  real_T dist;
  real_T ex;
  real_T sigg_bp;
  real_T sigg_bpr;
  real_T sigg_defp;
  real_T smctime_tv_nsec;
  real_T smctime_tv_sec;
  int32_T i;
  int32_T its;
  boolean_T(*gpu_def)[250000];
  boolean_T b_outdatedOnConstGpu;
  boolean_T bp_outdatedOnCpu;
  boolean_T p;
  boolean_T pdf_outdatedOnGpu;
  boolean_T vd_outdatedOnCpu;
  boolean_T vp_outdatedOnCpu;
  checkCudaError(mwCudaMalloc(&gpu_maxval, 400ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_probVp, 625ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_probDcre, 625ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_evp_tmp, 390625ULL * sizeof(real_T)),
                 __FILE__, __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_vaut, 625ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_ua, 625ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_W, 100000000ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_pdef, 250000ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_qnew, 250000ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_vpnew, 250000ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_V, 250000ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_vdnew, 625ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_rr, 250000ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_def, 250000ULL * sizeof(boolean_T)),
                 __FILE__, __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_bpr, 625ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_bp, 250000ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_q, 250000ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_vd, 625ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_vp, 250000ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_pdf, 390625ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  pdf_outdatedOnGpu = true;
  b_outdatedOnConstGpu = true;
  //  para = [alfa, betta, phi1, phi2, sigg_bp, sigg_bpr, sigg_defp ] ;
  alfa = para[0];
  betta = para[1];
  sigg_bp = para[5];
  sigg_bpr = para[6];
  sigg_defp = para[7];
  // 0.03, long-term bond, coupon rate
  // long-term bond, average maturity
  vp_outdatedOnCpu = false;
  vd_outdatedOnCpu = false;
  bp_outdatedOnCpu = false;
  // debt policy function (expressed in indices)
  //  debt policy (index) when decided renegotiate (right after every default)
  // q is price of debt; it is a function of  (y_t, d_{t+1})
  solve_benchmark_cuda_kernel01<<<dim3(977U, 1U, 1U), dim3(256U, 1U, 1U)>>>(
      *gpu_q, *gpu_rr);
  //  pdf = sparse(pdf_joint) ;
  checkCudaError(cudaMemcpyToSymbol(const_z, z, 625ULL * sizeof(real_T), 0ULL,
                                    cudaMemcpyHostToDevice),
                 __FILE__, __LINE__);
  checkCudaError(cudaMemcpyToSymbol(const_m, m, 625ULL * sizeof(real_T), 0ULL,
                                    cudaMemcpyHostToDevice),
                 __FILE__, __LINE__);
  solve_benchmark_cuda_kernel02<<<dim3(5U, 1U, 1U), dim3(128U, 1U, 1U)>>>(
      1.0 - para[2], *gpu_ua);
  //  to incorporate taste shocks
  cv_bp = para[5] * -34.538776394910684;
  //  critical value
  cv_bpr = para[6] * -34.538776394910684;
  //  critical value
  expl_temp = coder::tic();
  smctime_tv_sec = expl_temp.tv_sec;
  smctime_tv_nsec = expl_temp.tv_nsec;
  *totaltime = 0.0;
  *avgtime = 0.0;
  dist = 1.0;
  while (dist > 1.0E-8) {
    solve_benchmark_cuda_kernel03<<<dim3(5U, 1U, 1U), dim3(128U, 1U, 1U)>>>(
        *gpu_probDcre);
    if (pdf_outdatedOnGpu) {
      checkCudaError(cudaMemcpy(*gpu_pdf, cpu_pdf, 390625ULL * sizeof(real_T),
                                cudaMemcpyHostToDevice),
                     __FILE__, __LINE__);
    }
    pdf_outdatedOnGpu = false;
    solve_benchmark_cuda_kernel04<<<dim3(1526U, 1U, 1U), dim3(256U, 1U, 1U)>>>(
        *gpu_pdf, betta, *gpu_probDcre, *gpu_evp_tmp);
    dist = 1.0;
    beta1 = 0.0;
    cublasDgemm(getCublasGlobalHandle(), CUBLAS_OP_N, CUBLAS_OP_N, 625, 1, 625,
                &dist, &(*gpu_evp_tmp)[0], 625, &(*gpu_vaut)[0], 625, &beta1,
                &(*gpu_vdnew)[0], 625);
    solve_benchmark_cuda_kernel05<<<dim3(5U, 1U, 1U), dim3(128U, 1U, 1U)>>>(
        *gpu_ua, *gpu_vdnew, *gpu_probDcre, *gpu_vaut);
    checkCudaError(cudaMemcpy(cpu_bpr, *gpu_probDcre, 625ULL * sizeof(real_T),
                              cudaMemcpyDeviceToHost),
                   __FILE__, __LINE__);
    dist = cpu_bpr[0];
    for (i = 0; i < 624; i++) {
      c = cpu_bpr[i + 1];
      if (std::isnan(c)) {
        p = false;
      } else if (std::isnan(dist)) {
        p = true;
      } else {
        p = (dist < c);
      }
      if (p) {
        dist = c;
      }
    }
    solve_benchmark_cuda_kernel06<<<dim3(5U, 1U, 1U), dim3(128U, 1U, 1U)>>>(
        *gpu_vdnew, *gpu_vaut);
  }
  // %%%%%%
  dist = 1.0;
  its = 1;
  while ((dist > 1.0E-7) && (its < 2000)) {
    solve_benchmark_cuda_kernel07<<<dim3(5U, 1U, 1U), dim3(128U, 1U, 1U)>>>(
        *gpu_probDcre);
    if (pdf_outdatedOnGpu) {
      checkCudaError(cudaMemcpy(*gpu_pdf, cpu_pdf, 390625ULL * sizeof(real_T),
                                cudaMemcpyHostToDevice),
                     __FILE__, __LINE__);
    }
    solve_benchmark_cuda_kernel08<<<dim3(1526U, 1U, 1U), dim3(256U, 1U, 1U)>>>(
        *gpu_pdf, betta, *gpu_probDcre, *gpu_evp_tmp);
    dist = 1.0;
    beta1 = 0.0;
    cublasDgemm(getCublasGlobalHandle(), CUBLAS_OP_N, CUBLAS_OP_N, 625, 400,
                625, &dist, &(*gpu_evp_tmp)[0], 625, &(*gpu_V)[0], 625, &beta1,
                &(*gpu_pdef)[0], 625);
    if (b_outdatedOnConstGpu) {
      checkCudaError(cudaMemcpyToSymbol(const_b, b, 400ULL * sizeof(real_T),
                                        0ULL, cudaMemcpyHostToDevice),
                     __FILE__, __LINE__);
    }
    solve_benchmark_cuda_kernel09<<<dim3(977U, 1U, 1U), dim3(256U, 1U, 1U)>>>(
        *gpu_q, *gpu_pdef, *gpu_bp, *gpu_vpnew, *gpu_W);
    bp_outdatedOnCpu = true;
    solve_benchmark_cuda_kernel10<<<dim3(977U, 1U, 1U), dim3(256U, 1U, 1U)>>>(
        *gpu_q, sigg_bp, *gpu_vpnew, *gpu_W, cv_bp, *gpu_qnew);
    solve_benchmark_cuda_kernel11<<<dim3(5U, 1U, 1U), dim3(128U, 1U, 1U)>>>(
        *gpu_q, *gpu_bp, alfa, sigg_bpr, *gpu_vpnew, cv_bpr, *gpu_vaut, *gpu_V,
        *gpu_pdef, *gpu_probDcre, *gpu_probVp);
    solve_benchmark_cuda_kernel12<<<dim3(5U, 1U, 1U), dim3(128U, 1U, 1U)>>>(
        *gpu_vd, *gpu_probVp);
    cublasDgemm(getCublasGlobalHandle(), CUBLAS_OP_N, CUBLAS_OP_N, 625, 1, 625,
                &dist, &(*gpu_evp_tmp)[0], 625, &(*gpu_probVp)[0], 625, &beta1,
                &(*gpu_vdnew)[0], 625);
    solve_benchmark_cuda_kernel13<<<dim3(5U, 1U, 1U), dim3(128U, 1U, 1U)>>>(
        *gpu_ua, *gpu_vdnew);
    solve_benchmark_cuda_kernel14<<<dim3(977U, 1U, 1U), dim3(256U, 1U, 1U)>>>(
        sigg_defp, *gpu_vdnew, *gpu_vpnew, *gpu_pdef);
    solve_benchmark_cuda_kernel15<<<dim3(977U, 1U, 1U), dim3(256U, 1U, 1U)>>>(
        *gpu_pdef);
    solve_benchmark_cuda_kernel16<<<dim3(5U, 1U, 1U), dim3(128U, 1U, 1U)>>>(
        *gpu_probDcre);
    b_outdatedOnConstGpu = false;
    solve_benchmark_cuda_kernel17<<<dim3(977U, 1U, 1U), dim3(256U, 1U, 1U)>>>(
        *gpu_probDcre, *gpu_rr);
    cublasDgemm(getCublasGlobalHandle(), CUBLAS_OP_N, CUBLAS_OP_N, 625, 400,
                625, &dist, &(*gpu_pdf)[0], 625, &(*gpu_rr)[0], 625, &beta1,
                &(*gpu_V)[0], 625);
    solve_benchmark_cuda_kernel18<<<dim3(977U, 1U, 1U), dim3(256U, 1U, 1U)>>>(
        *gpu_V, *gpu_qnew, *gpu_rr, *gpu_pdef);
    pdf_outdatedOnGpu = false;
    cublasDgemm(getCublasGlobalHandle(), CUBLAS_OP_N, CUBLAS_OP_N, 625, 400,
                625, &dist, &(*gpu_pdf)[0], 625, &(*gpu_pdef)[0], 625, &beta1,
                &(*gpu_qnew)[0], 625);
    solve_benchmark_cuda_kernel19<<<dim3(977U, 1U, 1U), dim3(256U, 1U, 1U)>>>(
        *gpu_q, *gpu_V, *gpu_qnew);
    solve_benchmark_cuda_kernel20<<<dim3(4U, 1U, 1U), dim3(128U, 1U, 1U)>>>(
        *gpu_V, *gpu_maxval);
    checkCudaError(cudaMemcpy(cpu_maxval, *gpu_maxval, 400ULL * sizeof(real_T),
                              cudaMemcpyDeviceToHost),
                   __FILE__, __LINE__);
    beta1 = cpu_maxval[0];
    for (i = 0; i < 399; i++) {
      c = cpu_maxval[i + 1];
      if (std::isnan(c)) {
        p = false;
      } else if (std::isnan(beta1)) {
        p = true;
      } else {
        p = (beta1 < c);
      }
      if (p) {
        beta1 = c;
      }
    }
    solve_benchmark_cuda_kernel21<<<dim3(977U, 1U, 1U), dim3(256U, 1U, 1U)>>>(
        *gpu_vpnew, *gpu_vp, *gpu_V);
    checkCudaError(cudaMemcpy(cpu_vp, *gpu_V, 250000ULL * sizeof(real_T),
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
    solve_benchmark_cuda_kernel22<<<dim3(5U, 1U, 1U), dim3(128U, 1U, 1U)>>>(
        *gpu_vdnew, *gpu_vd, *gpu_probDcre);
    checkCudaError(cudaMemcpy(cpu_bpr, *gpu_probDcre, 625ULL * sizeof(real_T),
                              cudaMemcpyDeviceToHost),
                   __FILE__, __LINE__);
    dist = cpu_bpr[0];
    for (i = 0; i < 624; i++) {
      c = cpu_bpr[i + 1];
      if (std::isnan(c)) {
        p = false;
      } else if (std::isnan(dist)) {
        p = true;
      } else {
        p = (dist < c);
      }
      if (p) {
        dist = c;
      }
    }
    dist += beta1 + ex;
    solve_benchmark_cuda_kernel23<<<dim3(977U, 1U, 1U), dim3(256U, 1U, 1U)>>>(
        *gpu_vpnew, *gpu_vp);
    vp_outdatedOnCpu = true;
    solve_benchmark_cuda_kernel24<<<dim3(5U, 1U, 1U), dim3(128U, 1U, 1U)>>>(
        *gpu_vdnew, *gpu_vd);
    vd_outdatedOnCpu = true;
    solve_benchmark_cuda_kernel25<<<dim3(977U, 1U, 1U), dim3(256U, 1U, 1U)>>>(
        *gpu_qnew, *gpu_q);
    solve_benchmark_cuda_kernel26<<<dim3(977U, 1U, 1U), dim3(256U, 1U, 1U)>>>(
        *gpu_vdnew, *gpu_pdef);
    solve_benchmark_cuda_kernel27<<<dim3(977U, 1U, 1U), dim3(256U, 1U, 1U)>>>(
        *gpu_vpnew, *gpu_pdef, *gpu_V);
    *totaltime += coder::toc(smctime_tv_sec, smctime_tv_nsec);
    *avgtime = *totaltime / static_cast<real_T>(its);
    if ((std::fmod(static_cast<real_T>(its), 30.0) == 0.0) ||
        (dist <= 1.0E-7)) {
      y = nullptr;
      b_m = emlrtCreateCharArray(2, &iv[0]);
      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 7, b_m, &u[0]);
      emlrtAssign(&y, b_m);
      b_y = nullptr;
      b_m = emlrtCreateCharArray(2, &iv1[0]);
      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 31, b_m, &b_u[0]);
      emlrtAssign(&b_y, b_m);
      emlrt_marshallIn(feval(y, emlrt_marshallOut(1.0), b_y,
                             emlrt_marshallOut(static_cast<real_T>(its)),
                             emlrt_marshallOut(dist),
                             emlrt_marshallOut(*totaltime),
                             emlrt_marshallOut(*avgtime), &emlrtMCI),
                       "<output of feval>");
    }
    its++;
    expl_temp = coder::tic();
    smctime_tv_sec = expl_temp.tv_sec;
    smctime_tv_nsec = expl_temp.tv_nsec;
    //  re-start clock
  }
  //  end while
  solve_benchmark_cuda_kernel28<<<dim3(977U, 1U, 1U), dim3(256U, 1U, 1U)>>>(
      *gpu_vd, *gpu_pdef);
  solve_benchmark_cuda_kernel29<<<dim3(977U, 1U, 1U), dim3(256U, 1U, 1U)>>>(
      *gpu_vp, *gpu_pdef, *gpu_def);
  if (b_outdatedOnConstGpu) {
    checkCudaError(cudaMemcpyToSymbol(const_b, b, 400ULL * sizeof(real_T), 0ULL,
                                      cudaMemcpyHostToDevice),
                   __FILE__, __LINE__);
  }
  solve_benchmark_cuda_kernel30<<<dim3(5U, 1U, 1U), dim3(128U, 1U, 1U)>>>(
      *gpu_q, *gpu_bp, alfa, *gpu_vpnew, *gpu_vaut, *gpu_bpr);
  if (vp_outdatedOnCpu) {
    checkCudaError(cudaMemcpy(cpu_vp, *gpu_vp, 250000ULL * sizeof(real_T),
                              cudaMemcpyDeviceToHost),
                   __FILE__, __LINE__);
  }
  if (vd_outdatedOnCpu) {
    checkCudaError(cudaMemcpy(cpu_vd, *gpu_vd, 625ULL * sizeof(real_T),
                              cudaMemcpyDeviceToHost),
                   __FILE__, __LINE__);
  }
  checkCudaError(cudaMemcpy(cpu_q, *gpu_q, 250000ULL * sizeof(real_T),
                            cudaMemcpyDeviceToHost),
                 __FILE__, __LINE__);
  if (bp_outdatedOnCpu) {
    checkCudaError(cudaMemcpy(cpu_bp, *gpu_bp, 250000ULL * sizeof(real_T),
                              cudaMemcpyDeviceToHost),
                   __FILE__, __LINE__);
  }
  checkCudaError(cudaMemcpy(cpu_bpr, *gpu_bpr, 625ULL * sizeof(real_T),
                            cudaMemcpyDeviceToHost),
                 __FILE__, __LINE__);
  checkCudaError(cudaMemcpy(cpu_def, *gpu_def, 250000ULL * sizeof(boolean_T),
                            cudaMemcpyDeviceToHost),
                 __FILE__, __LINE__);
  checkCudaError(cudaMemcpy(cpu_rr, *gpu_rr, 250000ULL * sizeof(real_T),
                            cudaMemcpyDeviceToHost),
                 __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_pdf), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_vp), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_vd), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_q), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_bp), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_bpr), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_def), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_rr), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_vdnew), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_V), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_vpnew), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_qnew), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_pdef), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_W), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_ua), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_vaut), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_evp_tmp), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_probDcre), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_probVp), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_maxval), __FILE__, __LINE__);
}

// End of code generation (solve_benchmark_cuda.cu)
