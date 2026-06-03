//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// solver_vec_cuda.cu
//
// Code generation for function 'solver_vec_cuda'
//

// Include files
#include "solver_vec_cuda.h"
#include "rt_nonfinite.h"
#include "solver_vec_cuda_data.h"
#include "solver_vec_cuda_mexutil.h"
#include "solver_vec_cuda_types.h"
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
                            const mxArray *m5, const mxArray *m6,
                            const mxArray *m7, emlrtMCInfo *location);

static void gpuThrowError(uint32_T errorCode, const char_T *errorName,
                          const char_T *errorString, const char_T *file,
                          int32_T b_line);

static __global__ void solver_vec_cuda_kernel01(const struct0_T para,
                                                real_T *betta);

static __global__ void solver_vec_cuda_kernel02(const struct0_T para,
                                                const int32_T nb0,
                                                real_T b[200], real_T *c);

static __global__ void solver_vec_cuda_kernel03(const real_T z[625],
                                                const real_T m[625],
                                                const real_T diff,
                                                const real_T *b, const real_T c,
                                                real_T ua[625]);

static __global__ void solver_vec_cuda_kernel04(const real_T m[625],
                                                real_T mtry[125000]);

static __global__ void solver_vec_cuda_kernel05(const real_T mtry[125000],
                                                real_T b_mtry[25000000]);

static __global__ void solver_vec_cuda_kernel06(const real_T z[625],
                                                real_T mtry[125000]);

static __global__ void solver_vec_cuda_kernel07(const real_T b[200],
                                                const real_T mtry[125000],
                                                real_T btry[25000000],
                                                real_T ztry[25000000]);

static __global__ void solver_vec_cuda_kernel08(const real_T b[200],
                                                real_T bptry[25000000]);

static __global__ void solver_vec_cuda_kernel09(real_T vp[125000]);

static __global__ void solver_vec_cuda_kernel10(real_T vd[625], real_T vo[625]);

static __global__ void solver_vec_cuda_kernel11(const struct0_T para,
                                                real_T q[125000],
                                                real_T bp[125000],
                                                real_T def[125000]);

static __global__ void solver_vec_cuda_kernel12(const real_T q[125000],
                                                real_T qtry[25000000]);

static __global__ void solver_vec_cuda_kernel13(
    const real_T btry[25000000], const real_T bptry[25000000],
    const real_T mtry[25000000], const real_T ztry[25000000], const real_T *b,
    real_T qtry[25000000], real_T utry[25000000]);

static __global__ void solver_vec_cuda_kernel14(const real_T m[625],
                                                const real_T *b, real_T y[625]);

static __global__ void solver_vec_cuda_kernel15(const real_T pdf[390625],
                                                const real_T y[625],
                                                real_T a[390625]);

static __global__ void solver_vec_cuda_kernel16(const real_T mtry[125000],
                                                real_T qtry[25000000]);

static __global__ void solver_vec_cuda_kernel17(const real_T *betta,
                                                const real_T qtry[25000000],
                                                real_T utry[25000000]);

static __global__ void solver_vec_cuda_kernel18(uint8_T idx[125000]);

static __global__ void solver_vec_cuda_kernel19(const real_T utry[25000000],
                                                real_T ex[125000],
                                                uint8_T idx[125000]);

static __global__ void solver_vec_cuda_kernel20(const uint8_T idx[125000],
                                                real_T bp[125000]);

static __global__ void solver_vec_cuda_kernel21(const real_T pdf[390625],
                                                const real_T *betta,
                                                const real_T y[625],
                                                real_T a[390625]);

static __global__ void solver_vec_cuda_kernel22(const real_T theta,
                                                const real_T vd[625],
                                                const real_T b, real_T vo[625]);

static __global__ void solver_vec_cuda_kernel23(const real_T ua[625],
                                                real_T vd1[625]);

static __global__ void solver_vec_cuda_kernel24(const real_T vd1[625],
                                                real_T mtry[125000]);

static __global__ void solver_vec_cuda_kernel25(const real_T mtry[125000],
                                                const real_T ex[125000],
                                                real_T def[125000]);

static __global__ void
solver_vec_cuda_kernel26(const real_T diff, const real_T ex[125000],
                         real_T q[125000], real_T mtry[125000],
                         real_T qnew[125000], real_T vp_1[125000]);

static __global__ void solver_vec_cuda_kernel27(const real_T vp_1[125000],
                                                real_T vp[125000],
                                                real_T mtry[125000]);

static __global__ void solver_vec_cuda_kernel28(const real_T vd1[625],
                                                real_T vd[625], real_T y[625]);

static __global__ void solver_vec_cuda_kernel29(const int32_T nb0,
                                                const real_T vp_1[125000],
                                                real_T vo[625]);

static __global__ void solver_vec_cuda_kernel30(const real_T vp_1[125000],
                                                real_T vp[125000]);

static __global__ void solver_vec_cuda_kernel31(const real_T vd1[625],
                                                real_T vd[625]);

static __global__ void solver_vec_cuda_kernel32(const real_T qnew[125000],
                                                real_T q[125000]);

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

static __global__
    __launch_bounds__(32, 1) void solver_vec_cuda_kernel01(const struct0_T para,
                                                           real_T *betta)
{
  int32_T tmpIdx;
  tmpIdx = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (tmpIdx < 1) {
    *betta = para.betta;
  }
}

static __global__ __launch_bounds__(32, 1) void solver_vec_cuda_kernel02(
    const struct0_T para, const int32_T nb0, real_T b[200], real_T *c)
{
  int32_T tmpIdx;
  tmpIdx = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (tmpIdx < 1) {
    b[nb0] = 0.0;
    *c = 1.0 - para.sigg;
  }
}

static __global__ __launch_bounds__(128, 1) void solver_vec_cuda_kernel03(
    const real_T z[625], const real_T m[625], const real_T diff,
    const real_T *b, const real_T c, real_T ua[625])
{
  int32_T k;
  k = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (k < 625) {
    ua[k] = (pow(exp(z[k]) * m[k] * c, *b) - 1.0) / diff;
  }
}

static __global__
    __launch_bounds__(256, 1) void solver_vec_cuda_kernel04(const real_T m[625],
                                                            real_T mtry[125000])
{
  uint64_T gThreadId;
  int32_T ibmat;
  int32_T k;
  gThreadId = mwGetGlobalThreadIndex();
  k = static_cast<int32_T>(gThreadId % 625ULL);
  ibmat = static_cast<int32_T>((gThreadId - static_cast<uint64_T>(k)) / 625ULL);
  if ((ibmat < 200) && (k < 625)) {
    mtry[ibmat * 625 + k] = m[k];
  }
}

static __global__ __launch_bounds__(256, 1) void solver_vec_cuda_kernel05(
    const real_T mtry[125000], real_T b_mtry[25000000])
{
  uint64_T gThreadId;
  int32_T itilerow;
  int32_T jcol;
  int32_T k;
  gThreadId = mwGetGlobalThreadIndex();
  k = static_cast<int32_T>(gThreadId % 625ULL);
  gThreadId = (gThreadId - static_cast<uint64_T>(k)) / 625ULL;
  itilerow = static_cast<int32_T>(gThreadId % 200ULL);
  gThreadId = (gThreadId - static_cast<uint64_T>(itilerow)) / 200ULL;
  jcol = static_cast<int32_T>(gThreadId);
  if ((jcol < 200) && (itilerow < 200) && (k < 625)) {
    b_mtry[(jcol * 125000 + itilerow * 625) + k] = mtry[jcol * 625 + k];
  }
}

static __global__
    __launch_bounds__(256, 1) void solver_vec_cuda_kernel06(const real_T z[625],
                                                            real_T mtry[125000])
{
  uint64_T gThreadId;
  int32_T ibmat;
  int32_T k;
  gThreadId = mwGetGlobalThreadIndex();
  k = static_cast<int32_T>(gThreadId % 625ULL);
  ibmat = static_cast<int32_T>((gThreadId - static_cast<uint64_T>(k)) / 625ULL);
  if ((ibmat < 200) && (k < 625)) {
    mtry[ibmat * 625 + k] = z[k];
  }
}

static __global__ __launch_bounds__(256, 1) void solver_vec_cuda_kernel07(
    const real_T b[200], const real_T mtry[125000], real_T btry[25000000],
    real_T ztry[25000000])
{
  uint64_T gThreadId;
  int32_T ibmat;
  int32_T itilerow;
  int32_T jcol;
  int32_T k;
  gThreadId = mwGetGlobalThreadIndex();
  k = static_cast<int32_T>(gThreadId % 625ULL);
  gThreadId = (gThreadId - static_cast<uint64_T>(k)) / 625ULL;
  itilerow = static_cast<int32_T>(gThreadId % 200ULL);
  gThreadId = (gThreadId - static_cast<uint64_T>(itilerow)) / 200ULL;
  jcol = static_cast<int32_T>(gThreadId);
  if ((jcol < 200) && (itilerow < 200) && (k < 625)) {
    ibmat = (jcol * 125000 + itilerow * 625) + k;
    ztry[ibmat] = mtry[jcol * 625 + k];
    btry[ibmat] = b[itilerow];
  }
}

static __global__ __launch_bounds__(256, 1) void solver_vec_cuda_kernel08(
    const real_T b[200], real_T bptry[25000000])
{
  uint64_T gThreadId;
  int32_T itilerow;
  int32_T jcol;
  gThreadId = mwGetGlobalThreadIndex();
  itilerow = static_cast<int32_T>(gThreadId % 125000ULL);
  jcol = static_cast<int32_T>((gThreadId - static_cast<uint64_T>(itilerow)) /
                              125000ULL);
  if ((jcol < 200) && (itilerow < 125000)) {
    bptry[jcol * 125000 + itilerow] = b[jcol];
  }
}

static __global__
    __launch_bounds__(256, 1) void solver_vec_cuda_kernel09(real_T vp[125000])
{
  int32_T ibmat;
  ibmat = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (ibmat < 125000) {
    vp[ibmat] = 0.0;
  }
}

static __global__
    __launch_bounds__(128, 1) void solver_vec_cuda_kernel10(real_T vd[625],
                                                            real_T vo[625])
{
  int32_T ibmat;
  ibmat = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (ibmat < 625) {
    vd[ibmat] = 0.0;
    vo[ibmat] = 0.0;
  }
}

static __global__ __launch_bounds__(256, 1) void solver_vec_cuda_kernel11(
    const struct0_T para, real_T q[125000], real_T bp[125000],
    real_T def[125000])
{
  int32_T ibmat;
  ibmat = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (ibmat < 125000) {
    def[ibmat] = 0.0;
    bp[ibmat] = 0.0;
    q[ibmat] = 1.0 / (para.rstar + 1.0);
  }
}

static __global__ __launch_bounds__(256, 1) void solver_vec_cuda_kernel12(
    const real_T q[125000], real_T qtry[25000000])
{
  uint64_T gThreadId;
  int32_T itilerow;
  int32_T jcol;
  int32_T k;
  gThreadId = mwGetGlobalThreadIndex();
  k = static_cast<int32_T>(gThreadId % 625ULL);
  gThreadId = (gThreadId - static_cast<uint64_T>(k)) / 625ULL;
  itilerow = static_cast<int32_T>(gThreadId % 200ULL);
  gThreadId = (gThreadId - static_cast<uint64_T>(itilerow)) / 200ULL;
  jcol = static_cast<int32_T>(gThreadId);
  if ((jcol < 200) && (itilerow < 200) && (k < 625)) {
    qtry[(jcol * 125000 + itilerow * 625) + k] = q[jcol * 625 + k];
  }
}

static __global__ __launch_bounds__(256, 1) void solver_vec_cuda_kernel13(
    const real_T btry[25000000], const real_T bptry[25000000],
    const real_T mtry[25000000], const real_T ztry[25000000], const real_T *b,
    real_T qtry[25000000], real_T utry[25000000])
{
  real_T c;
  int32_T k;
  k = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (k < 25000000) {
    c = (bptry[k] * qtry[k] - btry[k]) + exp(ztry[k]) * mtry[k];
    qtry[k] = c;
    utry[k] = (pow(c, *b) - 1.0) / *b;
    if (c <= 0.0) {
      utry[k] = -CUDART_INF;
    }
  }
}

static __global__ __launch_bounds__(128, 1) void solver_vec_cuda_kernel14(
    const real_T m[625], const real_T *b, real_T y[625])
{
  int32_T ibmat;
  ibmat = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (ibmat < 625) {
    y[ibmat] = pow(m[ibmat], *b);
  }
}

static __global__ __launch_bounds__(256, 1) void solver_vec_cuda_kernel15(
    const real_T pdf[390625], const real_T y[625], real_T a[390625])
{
  uint64_T gThreadId;
  int32_T ibmat;
  int32_T ibtile;
  gThreadId = mwGetGlobalThreadIndex();
  ibtile = static_cast<int32_T>(gThreadId % 625ULL);
  ibmat = static_cast<int32_T>((gThreadId - static_cast<uint64_T>(ibtile)) /
                               625ULL);
  if ((ibmat < 625) && (ibtile < 625)) {
    ibmat = ibtile + 625 * ibmat;
    a[ibmat] = y[ibtile] * pdf[ibmat];
  }
}

static __global__ __launch_bounds__(256, 1) void solver_vec_cuda_kernel16(
    const real_T mtry[125000], real_T qtry[25000000])
{
  uint64_T gThreadId;
  int32_T itilerow;
  int32_T jcol;
  int32_T k;
  gThreadId = mwGetGlobalThreadIndex();
  k = static_cast<int32_T>(gThreadId % 625ULL);
  gThreadId = (gThreadId - static_cast<uint64_T>(k)) / 625ULL;
  itilerow = static_cast<int32_T>(gThreadId % 200ULL);
  gThreadId = (gThreadId - static_cast<uint64_T>(itilerow)) / 200ULL;
  jcol = static_cast<int32_T>(gThreadId);
  if ((jcol < 200) && (itilerow < 200) && (k < 625)) {
    qtry[(jcol * 125000 + itilerow * 625) + k] = mtry[jcol * 625 + k];
  }
}

static __global__ __launch_bounds__(256, 1) void solver_vec_cuda_kernel17(
    const real_T *betta, const real_T qtry[25000000], real_T utry[25000000])
{
  int32_T ibmat;
  ibmat = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (ibmat < 25000000) {
    utry[ibmat] += *betta * qtry[ibmat];
  }
}

static __global__
    __launch_bounds__(256, 1) void solver_vec_cuda_kernel18(uint8_T idx[125000])
{
  int32_T ibmat;
  ibmat = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (ibmat < 125000) {
    idx[ibmat] = static_cast<uint8_T>(1U);
  }
}

static __global__ __launch_bounds__(256, 1) void solver_vec_cuda_kernel19(
    const real_T utry[25000000], real_T ex[125000], uint8_T idx[125000])
{
  real_T b;
  real_T c;
  int32_T ibmat;
  int32_T jcol;
  boolean_T p;
  ibmat = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (ibmat < 125000) {
    ex[ibmat] = utry[ibmat];
    for (jcol = 0; jcol < 199; jcol++) {
      b = utry[ibmat + (jcol + 1) * 125000];
      if (isnan(b)) {
        p = false;
      } else {
        c = ex[ibmat];
        if (isnan(c)) {
          p = true;
        } else {
          p = (c < b);
        }
      }
      if (p) {
        ex[ibmat] = b;
        idx[ibmat] = static_cast<uint8_T>(jcol + 2);
      }
    }
  }
}

static __global__ __launch_bounds__(256, 1) void solver_vec_cuda_kernel20(
    const uint8_T idx[125000], real_T bp[125000])
{
  int32_T ibmat;
  ibmat = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (ibmat < 125000) {
    bp[ibmat] = static_cast<real_T>(idx[ibmat]);
  }
}

static __global__ __launch_bounds__(256, 1) void solver_vec_cuda_kernel21(
    const real_T pdf[390625], const real_T *betta, const real_T y[625],
    real_T a[390625])
{
  uint64_T gThreadId;
  int32_T ibmat;
  int32_T ibtile;
  gThreadId = mwGetGlobalThreadIndex();
  ibtile = static_cast<int32_T>(gThreadId % 625ULL);
  ibmat = static_cast<int32_T>((gThreadId - static_cast<uint64_T>(ibtile)) /
                               625ULL);
  if ((ibmat < 625) && (ibtile < 625)) {
    ibmat = ibtile + 625 * ibmat;
    a[ibmat] = y[ibtile] * *betta * pdf[ibmat];
  }
}

static __global__ __launch_bounds__(128, 1) void solver_vec_cuda_kernel22(
    const real_T theta, const real_T vd[625], const real_T b, real_T vo[625])
{
  int32_T ibmat;
  ibmat = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (ibmat < 625) {
    vo[ibmat] = theta * vo[ibmat] + b * vd[ibmat];
  }
}

static __global__ __launch_bounds__(128, 1) void solver_vec_cuda_kernel23(
    const real_T ua[625], real_T vd1[625])
{
  int32_T ibmat;
  ibmat = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (ibmat < 625) {
    vd1[ibmat] += ua[ibmat];
  }
}

static __global__ __launch_bounds__(256, 1) void solver_vec_cuda_kernel24(
    const real_T vd1[625], real_T mtry[125000])
{
  uint64_T gThreadId;
  int32_T ibmat;
  int32_T k;
  gThreadId = mwGetGlobalThreadIndex();
  k = static_cast<int32_T>(gThreadId % 625ULL);
  ibmat = static_cast<int32_T>((gThreadId - static_cast<uint64_T>(k)) / 625ULL);
  if ((ibmat < 200) && (k < 625)) {
    mtry[ibmat * 625 + k] = vd1[k];
  }
}

static __global__ __launch_bounds__(256, 1) void solver_vec_cuda_kernel25(
    const real_T mtry[125000], const real_T ex[125000], real_T def[125000])
{
  int32_T ibmat;
  ibmat = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (ibmat < 125000) {
    def[ibmat] = static_cast<real_T>(ex[ibmat] < mtry[ibmat]);
  }
}

static __global__ __launch_bounds__(256, 1) void solver_vec_cuda_kernel26(
    const real_T diff, const real_T ex[125000], real_T q[125000],
    real_T mtry[125000], real_T qnew[125000], real_T vp_1[125000])
{
  real_T b;
  int32_T k;
  k = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (k < 125000) {
    b = (1.0 - qnew[k]) / diff;
    qnew[k] = b;
    vp_1[k] = fmax(mtry[k], ex[k]);
    b -= q[k];
    q[k] = b;
    mtry[k] = fabs(b);
  }
}

static __global__ __launch_bounds__(256, 1) void solver_vec_cuda_kernel27(
    const real_T vp_1[125000], real_T vp[125000], real_T mtry[125000])
{
  real_T b;
  int32_T k;
  k = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (k < 125000) {
    b = vp_1[k] - vp[k];
    vp[k] = b;
    mtry[k] = fabs(b);
  }
}

static __global__ __launch_bounds__(128, 1) void solver_vec_cuda_kernel28(
    const real_T vd1[625], real_T vd[625], real_T y[625])
{
  real_T b;
  int32_T k;
  k = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (k < 625) {
    b = vd1[k] - vd[k];
    vd[k] = b;
    y[k] = fabs(b);
  }
}

static __global__ __launch_bounds__(128, 1) void solver_vec_cuda_kernel29(
    const int32_T nb0, const real_T vp_1[125000], real_T vo[625])
{
  int32_T ibmat;
  ibmat = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (ibmat < 625) {
    vo[ibmat] = vp_1[ibmat + 625 * nb0];
  }
}

static __global__ __launch_bounds__(256, 1) void solver_vec_cuda_kernel30(
    const real_T vp_1[125000], real_T vp[125000])
{
  int32_T ibmat;
  ibmat = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (ibmat < 125000) {
    vp[ibmat] = vp_1[ibmat];
  }
}

static __global__ __launch_bounds__(128, 1) void solver_vec_cuda_kernel31(
    const real_T vd1[625], real_T vd[625])
{
  int32_T ibmat;
  ibmat = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (ibmat < 625) {
    vd[ibmat] = vd1[ibmat];
  }
}

static __global__ __launch_bounds__(256, 1) void solver_vec_cuda_kernel32(
    const real_T qnew[125000], real_T q[125000])
{
  int32_T ibmat;
  ibmat = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (ibmat < 125000) {
    q[ibmat] = qnew[ibmat];
  }
}

void solver_vec_cuda(const real_T cpu_b[200], const real_T cpu_z[625],
                     const real_T cpu_m[625], const real_T cpu_pdf[390625],
                     const struct0_T *para, real_T cpu_q[125000],
                     real_T cpu_bp[125000], real_T cpu_vp[125000],
                     real_T cpu_def[125000], real_T *totaltime, real_T *avgtime)
{
  static const int32_T iv1[2]{1, 7};
  static const int32_T iv2[2]{1, 31};
  static const char_T b_u[31]{'%', '5', '.', '0', 'f', ' ',  '~', '%',
                              '8', '.', '8', 'f', ' ', '~',  '%', '8',
                              '.', '5', 'f', 's', ' ', '~',  '%', '8',
                              '.', '5', 'f', 's', ' ', '\\', 'n'};
  static const char_T u[7]{'f', 'p', 'r', 'i', 'n', 't', 'f'};
  emlrtTimespec expl_temp;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  real_T(*b_gpu_mtry)[25000000];
  real_T(*gpu_bptry)[25000000];
  real_T(*gpu_btry)[25000000];
  real_T(*gpu_qtry)[25000000];
  real_T(*gpu_utry)[25000000];
  real_T(*gpu_ztry)[25000000];
  real_T(*gpu_a)[390625];
  real_T(*gpu_pdf)[390625];
  real_T(*gpu_bp)[125000];
  real_T(*gpu_def)[125000];
  real_T(*gpu_ex)[125000];
  real_T(*gpu_mtry)[125000];
  real_T(*gpu_q)[125000];
  real_T(*gpu_qnew)[125000];
  real_T(*gpu_vp)[125000];
  real_T(*gpu_vp_1)[125000];
  real_T cpu_y[625];
  real_T(*gpu_m)[625];
  real_T(*gpu_ua)[625];
  real_T(*gpu_vd)[625];
  real_T(*gpu_vd1)[625];
  real_T(*gpu_vo)[625];
  real_T(*gpu_y)[625];
  real_T(*gpu_z)[625];
  real_T y[200];
  real_T(*gpu_b)[200];
  real_T b;
  real_T b_ex;
  real_T diff;
  real_T ex;
  real_T rstar;
  real_T smctime_tv_nsec;
  real_T smctime_tv_sec;
  real_T theta;
  real_T *gpu_betta;
  real_T *gpu_tmp;
  int32_T its;
  int32_T k;
  int32_T nb0;
  uint8_T(*gpu_idx)[125000];
  boolean_T p;
  boolean_T pdf_outdatedOnGpu;
  checkCudaError(mwCudaMalloc(&gpu_tmp, sizeof(real_T)), __FILE__, __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_vp_1, 125000ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_qnew, 125000ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_vd1, 625ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_idx, 125000ULL * sizeof(uint8_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_ex, 125000ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_a, 390625ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_y, 625ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_utry, 25000000ULL * sizeof(real_T)),
                 __FILE__, __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_qtry, 25000000ULL * sizeof(real_T)),
                 __FILE__, __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_vo, 625ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_vd, 625ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_bptry, 25000000ULL * sizeof(real_T)),
                 __FILE__, __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_btry, 25000000ULL * sizeof(real_T)),
                 __FILE__, __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_ztry, 25000000ULL * sizeof(real_T)),
                 __FILE__, __LINE__);
  checkCudaError(mwCudaMalloc(&b_gpu_mtry, 25000000ULL * sizeof(real_T)),
                 __FILE__, __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_mtry, 125000ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_ua, 625ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_betta, sizeof(real_T)), __FILE__, __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_def, 125000ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_vp, 125000ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_bp, 125000ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_q, 125000ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_pdf, 390625ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_m, 625ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_z, 625ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_b, 200ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  pdf_outdatedOnGpu = true;
  rstar = para->rstar;
  theta = para->theta;
  // intertemporal elasticity of consumption substitution
  solver_vec_cuda_kernel01<<<dim3(1U, 1U, 1U), dim3(32U, 1U, 1U)>>>(*para,
                                                                    gpu_betta);
  // discount factor
  for (k = 0; k < 200; k++) {
    y[k] = std::abs(cpu_b[k]);
  }
  nb0 = 0;
  ex = y[0];
  for (k = 0; k < 199; k++) {
    b = y[k + 1];
    if (std::isnan(b)) {
      p = false;
    } else if (std::isnan(ex)) {
      p = true;
    } else {
      p = (ex > b);
    }
    if (p) {
      ex = b;
      nb0 = k + 1;
    }
  }
  // force the element closest to zero to be exactly zero
  checkCudaError(cudaMemcpy(*gpu_b, cpu_b, 200ULL * sizeof(real_T),
                            cudaMemcpyHostToDevice),
                 __FILE__, __LINE__);
  solver_vec_cuda_kernel02<<<dim3(1U, 1U, 1U), dim3(32U, 1U, 1U)>>>(
      *para, nb0, *gpu_b, gpu_tmp);
  checkCudaError(cudaMemcpy(*gpu_z, cpu_z, 625ULL * sizeof(real_T),
                            cudaMemcpyHostToDevice),
                 __FILE__, __LINE__);
  checkCudaError(cudaMemcpy(*gpu_m, cpu_m, 625ULL * sizeof(real_T),
                            cudaMemcpyHostToDevice),
                 __FILE__, __LINE__);
  solver_vec_cuda_kernel03<<<dim3(5U, 1U, 1U), dim3(128U, 1U, 1U)>>>(
      *gpu_z, *gpu_m, 1.0 - para->sigg, gpu_tmp, 1.0 - para->phi0, *gpu_ua);
  solver_vec_cuda_kernel04<<<dim3(489U, 1U, 1U), dim3(256U, 1U, 1U)>>>(
      *gpu_m, *gpu_mtry);
  solver_vec_cuda_kernel05<<<dim3(97657U, 1U, 1U), dim3(256U, 1U, 1U)>>>(
      *gpu_mtry, *b_gpu_mtry);
  solver_vec_cuda_kernel06<<<dim3(489U, 1U, 1U), dim3(256U, 1U, 1U)>>>(
      *gpu_z, *gpu_mtry);
  solver_vec_cuda_kernel07<<<dim3(97657U, 1U, 1U), dim3(256U, 1U, 1U)>>>(
      *gpu_b, *gpu_mtry, *gpu_btry, *gpu_ztry);
  solver_vec_cuda_kernel08<<<dim3(97657U, 1U, 1U), dim3(256U, 1U, 1U)>>>(
      *gpu_b, *gpu_bptry);
  //  Initialize the Value functions
  solver_vec_cuda_kernel09<<<dim3(489U, 1U, 1U), dim3(256U, 1U, 1U)>>>(*gpu_vp);
  // continue repaying
  solver_vec_cuda_kernel10<<<dim3(5U, 1U, 1U), dim3(128U, 1U, 1U)>>>(*gpu_vd,
                                                                     *gpu_vo);
  // debt policy function (expressed in indices)
  solver_vec_cuda_kernel11<<<dim3(489U, 1U, 1U), dim3(256U, 1U, 1U)>>>(
      *para, *gpu_q, *gpu_bp, *gpu_def);
  // q is price of debt; it is a function of  (y_t, d_{t+1})
  diff = 1.0;
  its = 1;
  expl_temp = coder::tic();
  smctime_tv_sec = expl_temp.tv_sec;
  smctime_tv_nsec = expl_temp.tv_nsec;
  *totaltime = 0.0;
  *avgtime = 0.0;
  while ((diff > 1.0E-7) && (its < 2000)) {
    solver_vec_cuda_kernel12<<<dim3(97657U, 1U, 1U), dim3(256U, 1U, 1U)>>>(
        *gpu_q, *gpu_qtry);
    solver_vec_cuda_kernel13<<<dim3(97657U, 1U, 1U), dim3(256U, 1U, 1U)>>>(
        *gpu_btry, *gpu_bptry, *b_gpu_mtry, *gpu_ztry, gpu_tmp, *gpu_qtry,
        *gpu_utry);
    solver_vec_cuda_kernel14<<<dim3(5U, 1U, 1U), dim3(128U, 1U, 1U)>>>(
        *gpu_m, gpu_tmp, *gpu_y);
    if (pdf_outdatedOnGpu) {
      checkCudaError(cudaMemcpy(*gpu_pdf, cpu_pdf, 390625ULL * sizeof(real_T),
                                cudaMemcpyHostToDevice),
                     __FILE__, __LINE__);
    }
    solver_vec_cuda_kernel15<<<dim3(1526U, 1U, 1U), dim3(256U, 1U, 1U)>>>(
        *gpu_pdf, *gpu_y, *gpu_a);
    diff = 1.0;
    ex = 0.0;
    cublasDgemm(getCublasGlobalHandle(), CUBLAS_OP_N, CUBLAS_OP_N, 625, 200,
                625, &diff, &(*gpu_a)[0], 625, &(*gpu_vp)[0], 625, &ex,
                &(*gpu_mtry)[0], 625);
    solver_vec_cuda_kernel16<<<dim3(97657U, 1U, 1U), dim3(256U, 1U, 1U)>>>(
        *gpu_mtry, *gpu_qtry);
    solver_vec_cuda_kernel17<<<dim3(97657U, 1U, 1U), dim3(256U, 1U, 1U)>>>(
        gpu_betta, *gpu_qtry, *gpu_utry);
    solver_vec_cuda_kernel18<<<dim3(489U, 1U, 1U), dim3(256U, 1U, 1U)>>>(
        *gpu_idx);
    solver_vec_cuda_kernel19<<<dim3(489U, 1U, 1U), dim3(256U, 1U, 1U)>>>(
        *gpu_utry, *gpu_ex, *gpu_idx);
    solver_vec_cuda_kernel20<<<dim3(489U, 1U, 1U), dim3(256U, 1U, 1U)>>>(
        *gpu_idx, *gpu_bp);
    solver_vec_cuda_kernel21<<<dim3(1526U, 1U, 1U), dim3(256U, 1U, 1U)>>>(
        *gpu_pdf, gpu_betta, *gpu_y, *gpu_a);
    solver_vec_cuda_kernel22<<<dim3(5U, 1U, 1U), dim3(128U, 1U, 1U)>>>(
        theta, *gpu_vd, 1.0 - theta, *gpu_vo);
    cublasDgemm(getCublasGlobalHandle(), CUBLAS_OP_N, CUBLAS_OP_N, 625, 1, 625,
                &diff, &(*gpu_a)[0], 625, &(*gpu_vo)[0], 625, &ex,
                &(*gpu_vd1)[0], 625);
    solver_vec_cuda_kernel23<<<dim3(5U, 1U, 1U), dim3(128U, 1U, 1U)>>>(
        *gpu_ua, *gpu_vd1);
    solver_vec_cuda_kernel24<<<dim3(489U, 1U, 1U), dim3(256U, 1U, 1U)>>>(
        *gpu_vd1, *gpu_mtry);
    solver_vec_cuda_kernel25<<<dim3(489U, 1U, 1U), dim3(256U, 1U, 1U)>>>(
        *gpu_mtry, *gpu_ex, *gpu_def);
    pdf_outdatedOnGpu = false;
    cublasDgemm(getCublasGlobalHandle(), CUBLAS_OP_N, CUBLAS_OP_N, 625, 200,
                625, &diff, &(*gpu_pdf)[0], 625, &(*gpu_def)[0], 625, &ex,
                &(*gpu_qnew)[0], 625);
    solver_vec_cuda_kernel26<<<dim3(489U, 1U, 1U), dim3(256U, 1U, 1U)>>>(
        rstar + 1.0, *gpu_ex, *gpu_q, *gpu_mtry, *gpu_qnew, *gpu_vp_1);
    checkCudaError(cudaMemcpy(cpu_vp, *gpu_mtry, 125000ULL * sizeof(real_T),
                              cudaMemcpyDeviceToHost),
                   __FILE__, __LINE__);
    ex = cpu_vp[0];
    for (k = 0; k < 124999; k++) {
      b = cpu_vp[k + 1];
      if (std::isnan(b)) {
        p = false;
      } else if (std::isnan(ex)) {
        p = true;
      } else {
        p = (ex < b);
      }
      if (p) {
        ex = b;
      }
    }
    solver_vec_cuda_kernel27<<<dim3(489U, 1U, 1U), dim3(256U, 1U, 1U)>>>(
        *gpu_vp_1, *gpu_vp, *gpu_mtry);
    checkCudaError(cudaMemcpy(cpu_vp, *gpu_mtry, 125000ULL * sizeof(real_T),
                              cudaMemcpyDeviceToHost),
                   __FILE__, __LINE__);
    b_ex = cpu_vp[0];
    for (k = 0; k < 124999; k++) {
      b = cpu_vp[k + 1];
      if (std::isnan(b)) {
        p = false;
      } else if (std::isnan(b_ex)) {
        p = true;
      } else {
        p = (b_ex < b);
      }
      if (p) {
        b_ex = b;
      }
    }
    solver_vec_cuda_kernel28<<<dim3(5U, 1U, 1U), dim3(128U, 1U, 1U)>>>(
        *gpu_vd1, *gpu_vd, *gpu_y);
    checkCudaError(cudaMemcpy(cpu_y, *gpu_y, 625ULL * sizeof(real_T),
                              cudaMemcpyDeviceToHost),
                   __FILE__, __LINE__);
    diff = cpu_y[0];
    for (k = 0; k < 624; k++) {
      b = cpu_y[k + 1];
      if (std::isnan(b)) {
        p = false;
      } else if (std::isnan(diff)) {
        p = true;
      } else {
        p = (diff < b);
      }
      if (p) {
        diff = b;
      }
    }
    diff += ex + b_ex;
    solver_vec_cuda_kernel29<<<dim3(5U, 1U, 1U), dim3(128U, 1U, 1U)>>>(
        nb0, *gpu_vp_1, *gpu_vo);
    solver_vec_cuda_kernel30<<<dim3(489U, 1U, 1U), dim3(256U, 1U, 1U)>>>(
        *gpu_vp_1, *gpu_vp);
    solver_vec_cuda_kernel31<<<dim3(5U, 1U, 1U), dim3(128U, 1U, 1U)>>>(*gpu_vd1,
                                                                       *gpu_vd);
    solver_vec_cuda_kernel32<<<dim3(489U, 1U, 1U), dim3(256U, 1U, 1U)>>>(
        *gpu_qnew, *gpu_q);
    *totaltime += coder::toc(smctime_tv_sec, smctime_tv_nsec);
    *avgtime = *totaltime / static_cast<real_T>(its);
    if ((std::fmod(static_cast<real_T>(its), 50.0) == 0.0) ||
        (diff <= 1.0E-7)) {
      b_y = nullptr;
      m = emlrtCreateCharArray(2, &iv1[0]);
      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 7, m, &u[0]);
      emlrtAssign(&b_y, m);
      c_y = nullptr;
      m = emlrtCreateCharArray(2, &iv2[0]);
      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 31, m, &b_u[0]);
      emlrtAssign(&c_y, m);
      emlrt_marshallIn(feval(b_y, emlrt_marshallOut(1.0), c_y,
                             emlrt_marshallOut(static_cast<real_T>(its)),
                             emlrt_marshallOut(diff),
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
  // while dist>...
  checkCudaError(cudaMemcpy(cpu_q, *gpu_q, 125000ULL * sizeof(real_T),
                            cudaMemcpyDeviceToHost),
                 __FILE__, __LINE__);
  checkCudaError(cudaMemcpy(cpu_bp, *gpu_bp, 125000ULL * sizeof(real_T),
                            cudaMemcpyDeviceToHost),
                 __FILE__, __LINE__);
  checkCudaError(cudaMemcpy(cpu_vp, *gpu_vp, 125000ULL * sizeof(real_T),
                            cudaMemcpyDeviceToHost),
                 __FILE__, __LINE__);
  checkCudaError(cudaMemcpy(cpu_def, *gpu_def, 125000ULL * sizeof(real_T),
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
  checkCudaError(mwCudaFree(*gpu_ua), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_mtry), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*b_gpu_mtry), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_ztry), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_btry), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_bptry), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_vd), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_vo), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_qtry), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_utry), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_y), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_a), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_ex), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_idx), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_vd1), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_qnew), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_vp_1), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(gpu_tmp), __FILE__, __LINE__);
}

// End of code generation (solver_vec_cuda.cu)
