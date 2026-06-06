//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// solver_interp_cuda.cu
//
// Code generation for function 'solver_interp_cuda'
//

// Include files
#include "solver_interp_cuda.h"
#include "rt_nonfinite.h"
#include "solver_interp_cuda_data.h"
#include "solver_interp_cuda_mexutil.h"
#include "solver_interp_cuda_types.h"
#include "tic.h"
#include "toc.h"
#include "MWCUBLASUtils.hpp"
#include "MWCudaDimUtility.hpp"
#include "MWCudaMemoryFunctions.hpp"
#include "MWGpuFunctionImplUtility.hpp"
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

static __global__ void solver_interp_cuda_kernel01(const struct0_T para,
                                                   real_T *betta);

static __global__ void solver_interp_cuda_kernel02(real_T vp[50000]);

static __global__ void solver_interp_cuda_kernel03(real_T vd[625]);

static __global__ void solver_interp_cuda_kernel04(real_T def[50000]);

static __global__ void solver_interp_cuda_kernel05(real_T vo[625]);

static __global__ void solver_interp_cuda_kernel06(const struct0_T para,
                                                   real_T q[50000],
                                                   real_T bp[50000],
                                                   real_T vp1[50000]);

static __global__ void solver_interp_cuda_kernel07(const real_T b[80],
                                                   real_T *bp_u);

static __global__ void
solver_interp_cuda_kernel08(const real_T z[625], const real_T m[625],
                            const real_T diff, const real_T b, const real_T c,
                            real_T ua[625], real_T x[625]);

static __global__ void solver_interp_cuda_kernel09(const real_T m[625],
                                                   const real_T pdf[390625],
                                                   const real_T *betta,
                                                   const real_T b,
                                                   real_T a[390625]);

static __global__ void solver_interp_cuda_kernel10(const real_T theta,
                                                   const real_T vd[625],
                                                   const real_T b,
                                                   real_T vo[625]);

static __global__ void solver_interp_cuda_kernel11(const real_T ua[625],
                                                   real_T vd1[625]);

static __global__ void solver_interp_cuda_kernel12(const real_T b[80],
                                                   const real_T q[50000],
                                                   const real_T x[625],
                                                   real_T w[50000]);

static __global__ void
solver_interp_cuda_kernel13(const real_T b[80], const real_T def[50000],
                            const real_T *bp_u, const real_T evp[50000],
                            const real_T w[50000], real_T bp[50000],
                            real_T vp1[50000]);

static __global__ void solver_interp_cuda_kernel14(const real_T vd1[625],
                                                   real_T bp[50000],
                                                   real_T def[50000],
                                                   real_T vp1[50000]);

static __global__ void solver_interp_cuda_kernel15(const real_T diff,
                                                   real_T q[50000],
                                                   real_T evp[50000],
                                                   real_T w[50000]);

static __global__ void solver_interp_cuda_kernel16(const real_T vp1[50000],
                                                   real_T vp[50000],
                                                   real_T w[50000]);

static __global__ void solver_interp_cuda_kernel17(const real_T vd1[625],
                                                   real_T vd[625],
                                                   real_T vo[625]);

static __global__ void solver_interp_cuda_kernel18(const int32_T nb0,
                                                   const real_T vp1[50000],
                                                   real_T vo[625]);

static __global__ void solver_interp_cuda_kernel19(const real_T vp1[50000],
                                                   real_T vp[50000]);

static __global__ void solver_interp_cuda_kernel20(const real_T vd1[625],
                                                   real_T vd[625]);

static __global__ void solver_interp_cuda_kernel21(const real_T evp[50000],
                                                   real_T q[50000]);

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

static __global__ __launch_bounds__(32, 1) void solver_interp_cuda_kernel01(
    const struct0_T para, real_T *betta)
{
  int32_T tmpIdx;
  tmpIdx = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (tmpIdx < 1) {
    *betta = para.betta;
  }
}

static __global__
    __launch_bounds__(256, 1) void solver_interp_cuda_kernel02(real_T vp[50000])
{
  int32_T dx_tmp_tmp;
  dx_tmp_tmp = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (dx_tmp_tmp < 50000) {
    vp[dx_tmp_tmp] = 0.0;
  }
}

static __global__
    __launch_bounds__(128, 1) void solver_interp_cuda_kernel03(real_T vd[625])
{
  int32_T dx_tmp_tmp;
  dx_tmp_tmp = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (dx_tmp_tmp < 625) {
    vd[dx_tmp_tmp] = 0.0;
  }
}

static __global__
    __launch_bounds__(256,
                      1) void solver_interp_cuda_kernel04(real_T def[50000])
{
  int32_T dx_tmp_tmp;
  dx_tmp_tmp = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (dx_tmp_tmp < 50000) {
    def[dx_tmp_tmp] = 0.0;
  }
}

static __global__
    __launch_bounds__(128, 1) void solver_interp_cuda_kernel05(real_T vo[625])
{
  int32_T dx_tmp_tmp;
  dx_tmp_tmp = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (dx_tmp_tmp < 625) {
    vo[dx_tmp_tmp] = 0.0;
  }
}

static __global__ __launch_bounds__(256, 1) void solver_interp_cuda_kernel06(
    const struct0_T para, real_T q[50000], real_T bp[50000], real_T vp1[50000])
{
  int32_T dx_tmp_tmp;
  dx_tmp_tmp = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (dx_tmp_tmp < 50000) {
    vp1[dx_tmp_tmp] = 0.0;
    bp[dx_tmp_tmp] = 0.0;
    q[dx_tmp_tmp] = 1.0 / (para.rstar + 1.0);
  }
}

static __global__ __launch_bounds__(32, 1) void solver_interp_cuda_kernel07(
    const real_T b[80], real_T *bp_u)
{
  int32_T tmpIdx;
  tmpIdx = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (tmpIdx < 1) {
    *bp_u = b[79];
  }
}

static __global__ __launch_bounds__(128, 1) void solver_interp_cuda_kernel08(
    const real_T z[625], const real_T m[625], const real_T diff, const real_T b,
    const real_T c, real_T ua[625], real_T x[625])
{
  real_T p;
  int32_T funccount;
  funccount = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (funccount < 625) {
    p = exp(z[funccount]) * m[funccount];
    x[funccount] = p;
    ua[funccount] = (pow(p * c, b) - 1.0) / diff;
  }
}

static __global__ __launch_bounds__(256, 1) void solver_interp_cuda_kernel09(
    const real_T m[625], const real_T pdf[390625], const real_T *betta,
    const real_T b, real_T a[390625])
{
  uint64_T gThreadId;
  int32_T c;
  int32_T dx_tmp_tmp;
  gThreadId = mwGetGlobalThreadIndex();
  c = static_cast<int32_T>(gThreadId % 625ULL);
  dx_tmp_tmp =
      static_cast<int32_T>((gThreadId - static_cast<uint64_T>(c)) / 625ULL);
  if ((dx_tmp_tmp < 625) && (c < 625)) {
    dx_tmp_tmp = c + 625 * dx_tmp_tmp;
    a[dx_tmp_tmp] = pow(m[c], b) * *betta * pdf[dx_tmp_tmp];
  }
}

static __global__ __launch_bounds__(128, 1) void solver_interp_cuda_kernel10(
    const real_T theta, const real_T vd[625], const real_T b, real_T vo[625])
{
  int32_T dx_tmp_tmp;
  dx_tmp_tmp = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (dx_tmp_tmp < 625) {
    vo[dx_tmp_tmp] = theta * vo[dx_tmp_tmp] + b * vd[dx_tmp_tmp];
  }
}

static __global__ __launch_bounds__(128, 1) void solver_interp_cuda_kernel11(
    const real_T ua[625], real_T vd1[625])
{
  int32_T dx_tmp_tmp;
  dx_tmp_tmp = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (dx_tmp_tmp < 625) {
    vd1[dx_tmp_tmp] += ua[dx_tmp_tmp];
  }
}

static __global__ __launch_bounds__(256, 1) void solver_interp_cuda_kernel12(
    const real_T b[80], const real_T q[50000], const real_T x[625],
    real_T w[50000])
{
  uint64_T gThreadId;
  int32_T c;
  int32_T dx_tmp_tmp;
  int32_T funccount;
  gThreadId = mwGetGlobalThreadIndex();
  c = static_cast<int32_T>(gThreadId % 625ULL);
  dx_tmp_tmp =
      static_cast<int32_T>((gThreadId - static_cast<uint64_T>(c)) / 625ULL);
  if ((dx_tmp_tmp < 80) && (c < 625)) {
    funccount = c + 625 * dx_tmp_tmp;
    w[funccount] = b[dx_tmp_tmp] * q[funccount] + x[c];
  }
}

static __global__ __launch_bounds__(256, 1) void solver_interp_cuda_kernel13(
    const real_T b[80], const real_T def[50000], const real_T *bp_u,
    const real_T evp[50000], const real_T w[50000], real_T bp[50000],
    real_T vp1[50000])
{
  real_T c_vec[80];
  real_T a;
  real_T b_b;
  real_T b_w;
  real_T d;
  real_T e;
  real_T fv;
  real_T fw;
  real_T fx;
  real_T jm;
  real_T ju;
  real_T p;
  real_T r;
  real_T tol1;
  real_T tol2;
  real_T v;
  real_T x;
  real_T xf;
  real_T xm;
  uint64_T gThreadId;
  int32_T c;
  int32_T dx_tmp_tmp;
  int32_T exitg1;
  int32_T ib;
  int32_T is;
  int32_T iter;
  boolean_T guard1;
  gThreadId = mwGetGlobalThreadIndex();
  ib = static_cast<int32_T>(gThreadId % 80ULL);
  is = static_cast<int32_T>((gThreadId - static_cast<uint64_T>(ib)) / 80ULL);
  if ((is < 625) && (ib < 80)) {
    c = is + 625 * ib;
    if (def[c] == 0.0) {
      // brent_min: Single-variable bounded function minimization without
      // derivatives
      //  INPUT ARGUMENTS
      //    funfcn: function to be minimized
      //    ax: lower bound
      //    bx: upper bound
      //    tol: tolerance criterion for X
      //    maxfun: Max number of function evaluations
      //    maxiter: Max number of iterations
      //  DEFAULT OPTIONS:
      //  tol     = 1e-8;
      //  maxfun  = 500;
      //  maxiter = 500;
      iter = 0;
      //  Assume we'll converge
      //  Compute the start point
      //  0.381966011250105
      a = -0.05;
      b_b = *bp_u;
      v = 0.3819660112501051 * (*bp_u - -0.05) - 0.05;
      b_w = v;
      xf = v;
      d = 0.0;
      e = 0.0;
      p = b[ib];
      for (dx_tmp_tmp = 0; dx_tmp_tmp < 80; dx_tmp_tmp++) {
        c_vec[dx_tmp_tmp] = w[is + 625 * dx_tmp_tmp] - p;
      }
      //  SUBFUNCTIONS
      //  Custom linear interpolation with extrapolation, matching
      //  interp1(x,y,xi,'linear','extrap') x and y are vectors of the same
      //  length, x strictly increasing Handle exact match with first or last
      //  point (avoid extrapolation)
      if (v <= b[0]) {
        p = 1.0;
        //  extrapolate using [x(1), x(2)]
      } else if (v >= b[79]) {
        p = 79.0;
        //  extrapolate using [x(n-1), x(n)]

        //  xi is in-bounds; locate correct interval
        // function jl = locate(xx,x)
        //  x is between xx(jl) and xx(jl+1)
        //  jl = 0 and jl = n means x is out of range
        //  xx is assumed to be monotone increasing
      } else if (v < b[0]) {
        p = 0.0;
      } else if (v > b[79]) {
        p = 80.0;
      } else {
        p = 1.0;
        ju = 80.0;
        while (ju - p > 1.0) {
          jm = floor((ju + p) / 2.0);
          if (v >= b[static_cast<int32_T>(jm) - 1]) {
            p = jm;
          } else {
            ju = jm;
          }
        }
      }
      //  Enforce valid index range
      p = fmax(fmin(p, 79.0), 1.0);
      //  Avoid divide-by-zero (can happen if x has duplicate points)
      dx_tmp_tmp = static_cast<int32_T>(p);
      ju = b[dx_tmp_tmp - 1];
      p = b[dx_tmp_tmp] - ju;
      if (p == 0.0) {
        p = 0.0;
      } else {
        p = (c_vec[dx_tmp_tmp] - c_vec[dx_tmp_tmp - 1]) / p;
      }
      r = c_vec[dx_tmp_tmp - 1] + p * (v - ju);
      if (r <= 0.0) {
        fx = CUDART_INF;
      } else {
        //  Custom linear interpolation with extrapolation, matching
        //  interp1(x,y,xi,'linear','extrap') x and y are vectors of the same
        //  length, x strictly increasing Handle exact match with first or last
        //  point (avoid extrapolation)
        if (v <= b[0]) {
          p = 1.0;
          //  extrapolate using [x(1), x(2)]
        } else if (v >= b[79]) {
          p = 79.0;
          //  extrapolate using [x(n-1), x(n)]

          //  xi is in-bounds; locate correct interval
          // function jl = locate(xx,x)
          //  x is between xx(jl) and xx(jl+1)
          //  jl = 0 and jl = n means x is out of range
          //  xx is assumed to be monotone increasing
        } else if (v < b[0]) {
          p = 0.0;
        } else if (v > b[79]) {
          p = 80.0;
        } else {
          p = 1.0;
          ju = 80.0;
          while (ju - p > 1.0) {
            jm = floor((ju + p) / 2.0);
            if (v >= b[static_cast<int32_T>(jm) - 1]) {
              p = jm;
            } else {
              ju = jm;
            }
          }
        }
        //  Enforce valid index range
        p = fmax(fmin(p, 79.0), 1.0);
        //  Avoid divide-by-zero (can happen if x has duplicate points)
        dx_tmp_tmp = static_cast<int32_T>(p);
        ju = b[dx_tmp_tmp - 1];
        p = b[dx_tmp_tmp] - ju;
        if (p == 0.0) {
          p = 0.0;
        } else {
          p = (evp[is + 625 * dx_tmp_tmp] - evp[is + 625 * (dx_tmp_tmp - 1)]) /
              p;
        }
        fx =
            (1.0 / r - 1.0) - (evp[is + 625 * (dx_tmp_tmp - 1)] + p * (v - ju));
      }
      ib = 1;
      fv = fx;
      fw = fx;
      xm = 0.5 * (*bp_u - 0.05);
      tol1 = 1.4901161193847656E-8 * fabs(v) + 3.3333333333333334E-8;
      tol2 = 2.0 * tol1;
      //  Main loop
      do {
        exitg1 = 0;
        if (fabs(xf - xm) > tol2 - 0.5 * (b_b - a)) {
          //  Is a parabolic fit possible
          guard1 = false;
          if (fabs(e) > tol1) {
            //  Yes, so fit parabola
            jm = xf - b_w;
            r = jm * (fx - fv);
            ju = xf - v;
            x = ju * (fx - fw);
            p = ju * x - jm * r;
            x = 2.0 * (x - r);
            if (x > 0.0) {
              p = -p;
            }
            x = fabs(x);
            r = e;
            e = d;
            //  Is the parabola acceptable
            if ((fabs(p) < fabs(0.5 * x * r)) && (p > x * (a - xf)) &&
                (p < x * (b_b - xf))) {
              //  Yes, parabolic interpolation step
              d = p / x;
              x = xf + d;
              // procedure = '       parabolic';
              //  f must not be evaluated too close to ax or bx
              if ((x - a < tol2) || (b_b - x < tol2)) {
                p = xm - xf;
                d = tol1 * (mwGpuSign(p) + static_cast<real_T>(p == 0.0));
              }
            } else {
              //  Not acceptable, must do a golden section step
              guard1 = true;
            }
          } else {
            guard1 = true;
          }
          if (guard1) {
            //  A golden-section step is required
            if (xf >= xm) {
              e = a - xf;
            } else {
              e = b_b - xf;
            }
            d = 0.3819660112501051 * e;
            // procedure = '       golden';
          }
          //  The function must not be evaluated too close to xf
          x = xf + (mwGpuSign(d) + static_cast<real_T>(d == 0.0)) *
                       fmax(fabs(d), tol1);
          //  SUBFUNCTIONS
          //  Custom linear interpolation with extrapolation, matching
          //  interp1(x,y,xi,'linear','extrap') x and y are vectors of the same
          //  length, x strictly increasing Handle exact match with first or
          //  last point (avoid extrapolation)
          if (x <= b[0]) {
            p = 1.0;
            //  extrapolate using [x(1), x(2)]
          } else if (x >= b[79]) {
            p = 79.0;
            //  extrapolate using [x(n-1), x(n)]

            //  xi is in-bounds; locate correct interval
            // function jl = locate(xx,x)
            //  x is between xx(jl) and xx(jl+1)
            //  jl = 0 and jl = n means x is out of range
            //  xx is assumed to be monotone increasing
          } else if (x < b[0]) {
            p = 0.0;
          } else if (x > b[79]) {
            p = 80.0;
          } else {
            p = 1.0;
            ju = 80.0;
            while (ju - p > 1.0) {
              jm = floor((ju + p) / 2.0);
              if (x >= b[static_cast<int32_T>(jm) - 1]) {
                p = jm;
              } else {
                ju = jm;
              }
            }
          }
          //  Enforce valid index range
          p = fmax(fmin(p, 79.0), 1.0);
          //  Avoid divide-by-zero (can happen if x has duplicate points)
          dx_tmp_tmp = static_cast<int32_T>(p);
          ju = b[dx_tmp_tmp - 1];
          p = b[dx_tmp_tmp] - ju;
          if (p == 0.0) {
            p = 0.0;
          } else {
            p = (c_vec[dx_tmp_tmp] - c_vec[dx_tmp_tmp - 1]) / p;
          }
          r = c_vec[dx_tmp_tmp - 1] + p * (x - ju);
          if (r <= 0.0) {
            p = CUDART_INF;
          } else {
            //  Custom linear interpolation with extrapolation, matching
            //  interp1(x,y,xi,'linear','extrap') x and y are vectors of the
            //  same length, x strictly increasing Handle exact match with first
            //  or last point (avoid extrapolation)
            if (x <= b[0]) {
              p = 1.0;
              //  extrapolate using [x(1), x(2)]
            } else if (x >= b[79]) {
              p = 79.0;
              //  extrapolate using [x(n-1), x(n)]

              //  xi is in-bounds; locate correct interval
              // function jl = locate(xx,x)
              //  x is between xx(jl) and xx(jl+1)
              //  jl = 0 and jl = n means x is out of range
              //  xx is assumed to be monotone increasing
            } else if (x < b[0]) {
              p = 0.0;
            } else if (x > b[79]) {
              p = 80.0;
            } else {
              p = 1.0;
              ju = 80.0;
              while (ju - p > 1.0) {
                jm = floor((ju + p) / 2.0);
                if (x >= b[static_cast<int32_T>(jm) - 1]) {
                  p = jm;
                } else {
                  ju = jm;
                }
              }
            }
            //  Enforce valid index range
            p = fmax(fmin(p, 79.0), 1.0);
            //  Avoid divide-by-zero (can happen if x has duplicate points)
            dx_tmp_tmp = static_cast<int32_T>(p);
            ju = b[dx_tmp_tmp - 1];
            p = b[dx_tmp_tmp] - ju;
            if (p == 0.0) {
              p = 0.0;
            } else {
              p = (evp[is + 625 * dx_tmp_tmp] -
                   evp[is + 625 * (dx_tmp_tmp - 1)]) /
                  p;
            }
            p = (1.0 / r - 1.0) -
                (evp[is + 625 * (dx_tmp_tmp - 1)] + p * (x - ju));
          }
          ib++;
          iter++;
          //  Update a, b, v, w, x, xm, tol1, tol2
          if (p <= fx) {
            if (x >= xf) {
              a = xf;
            } else {
              b_b = xf;
            }
            v = b_w;
            fv = fw;
            b_w = xf;
            fw = fx;
            xf = x;
            fx = p;
          } else {
            //  fu > fx
            if (x < xf) {
              a = x;
            } else {
              b_b = x;
            }
            if ((p <= fw) || (b_w == xf)) {
              v = b_w;
              fv = fw;
              b_w = x;
              fw = p;
            } else if ((p <= fv) || (v == xf) || (v == b_w)) {
              v = x;
              fv = p;
            }
          }
          xm = 0.5 * (a + b_b);
          tol1 = 1.4901161193847656E-8 * fabs(xf) + 3.3333333333333334E-8;
          tol2 = 2.0 * tol1;
          if ((ib >= 400) || (iter >= 400)) {
            exitg1 = 1;
          }
        } else {
          //  while
          exitg1 = 1;
        }
      } while (exitg1 == 0);
      vp1[c] = -fx;
      bp[c] = xf;
    }
  }
}

static __global__ __launch_bounds__(256, 1) void solver_interp_cuda_kernel14(
    const real_T vd1[625], real_T bp[50000], real_T def[50000],
    real_T vp1[50000])
{
  uint64_T gThreadId;
  int32_T ib;
  int32_T is;
  gThreadId = mwGetGlobalThreadIndex();
  ib = static_cast<int32_T>(gThreadId % 80ULL);
  is = static_cast<int32_T>((gThreadId - static_cast<uint64_T>(ib)) / 80ULL);
  if ((is < 625) && (ib < 80)) {
    ib = is + 625 * ib;
    if (def[ib] == 1.0) {
      vp1[ib] = vd1[is];
      bp[ib] = 0.0;
    } else {
      def[ib] = static_cast<real_T>(!static_cast<int32_T>(vp1[ib] > vd1[is]));
    }
  }
}

static __global__ __launch_bounds__(256, 1) void solver_interp_cuda_kernel15(
    const real_T diff, real_T q[50000], real_T evp[50000], real_T w[50000])
{
  real_T p;
  int32_T funccount;
  funccount = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (funccount < 50000) {
    p = (1.0 - evp[funccount]) / diff;
    evp[funccount] = p;
    p -= q[funccount];
    q[funccount] = p;
    w[funccount] = fabs(p);
  }
}

static __global__ __launch_bounds__(256, 1) void solver_interp_cuda_kernel16(
    const real_T vp1[50000], real_T vp[50000], real_T w[50000])
{
  real_T p;
  int32_T funccount;
  funccount = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (funccount < 50000) {
    p = vp1[funccount] - vp[funccount];
    vp[funccount] = p;
    w[funccount] = fabs(p);
  }
}

static __global__ __launch_bounds__(128, 1) void solver_interp_cuda_kernel17(
    const real_T vd1[625], real_T vd[625], real_T vo[625])
{
  real_T p;
  int32_T funccount;
  funccount = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (funccount < 625) {
    p = vd1[funccount] - vd[funccount];
    vd[funccount] = p;
    vo[funccount] = fabs(p);
  }
}

static __global__ __launch_bounds__(128, 1) void solver_interp_cuda_kernel18(
    const int32_T nb0, const real_T vp1[50000], real_T vo[625])
{
  int32_T dx_tmp_tmp;
  dx_tmp_tmp = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (dx_tmp_tmp < 625) {
    vo[dx_tmp_tmp] = vp1[dx_tmp_tmp + 625 * nb0];
  }
}

static __global__ __launch_bounds__(256, 1) void solver_interp_cuda_kernel19(
    const real_T vp1[50000], real_T vp[50000])
{
  int32_T dx_tmp_tmp;
  dx_tmp_tmp = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (dx_tmp_tmp < 50000) {
    vp[dx_tmp_tmp] = vp1[dx_tmp_tmp];
  }
}

static __global__ __launch_bounds__(128, 1) void solver_interp_cuda_kernel20(
    const real_T vd1[625], real_T vd[625])
{
  int32_T dx_tmp_tmp;
  dx_tmp_tmp = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (dx_tmp_tmp < 625) {
    vd[dx_tmp_tmp] = vd1[dx_tmp_tmp];
  }
}

static __global__ __launch_bounds__(256, 1) void solver_interp_cuda_kernel21(
    const real_T evp[50000], real_T q[50000])
{
  int32_T dx_tmp_tmp;
  dx_tmp_tmp = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (dx_tmp_tmp < 50000) {
    q[dx_tmp_tmp] = evp[dx_tmp_tmp];
  }
}

void solver_interp_cuda(const real_T cpu_b[80], const real_T cpu_z[625],
                        const real_T cpu_m[625], const real_T cpu_pdf[390625],
                        const struct0_T *para, real_T cpu_q[50000],
                        real_T cpu_bp[50000], real_T cpu_vp[50000],
                        real_T cpu_def[50000], real_T *totaltime,
                        real_T *avgtime)
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
  const mxArray *e_y;
  const mxArray *m;
  real_T(*gpu_a)[390625];
  real_T(*gpu_pdf)[390625];
  real_T(*gpu_bp)[50000];
  real_T(*gpu_def)[50000];
  real_T(*gpu_evp)[50000];
  real_T(*gpu_q)[50000];
  real_T(*gpu_vp)[50000];
  real_T(*gpu_vp1)[50000];
  real_T(*gpu_w)[50000];
  real_T cpu_vo[625];
  real_T(*gpu_m)[625];
  real_T(*gpu_ua)[625];
  real_T(*gpu_vd)[625];
  real_T(*gpu_vd1)[625];
  real_T(*gpu_vo)[625];
  real_T(*gpu_x)[625];
  real_T(*gpu_z)[625];
  real_T y[80];
  real_T(*gpu_b)[80];
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
  real_T *gpu_bp_u;
  int32_T funccount;
  int32_T its;
  int32_T nb0;
  boolean_T p;
  boolean_T pdf_outdatedOnGpu;
  checkCudaError(mwCudaMalloc(&gpu_w, 50000ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_vd1, 625ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_evp, 50000ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_a, 390625ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_ua, 625ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_x, 625ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_bp_u, sizeof(real_T)), __FILE__, __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_vp1, 50000ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_vo, 625ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_vd, 625ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_betta, sizeof(real_T)), __FILE__, __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_def, 50000ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_vp, 50000ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_bp, 50000ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_q, 50000ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_pdf, 390625ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_m, 625ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_z, 625ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_b, 80ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  pdf_outdatedOnGpu = true;
  theta = para->theta;
  solver_interp_cuda_kernel01<<<dim3(1U, 1U, 1U), dim3(32U, 1U, 1U)>>>(
      *para, gpu_betta);
  rstar = para->rstar;
  //  dpgrid = b';
  for (funccount = 0; funccount < 80; funccount++) {
    y[funccount] = std::abs(cpu_b[funccount]);
  }
  nb0 = 0;
  ex = y[0];
  for (funccount = 0; funccount < 79; funccount++) {
    c = y[funccount + 1];
    if (std::isnan(c)) {
      p = false;
    } else if (std::isnan(ex)) {
      p = true;
    } else {
      p = (ex > c);
    }
    if (p) {
      ex = c;
      nb0 = funccount + 1;
    }
  }
  // Initialize the Value functions
  solver_interp_cuda_kernel02<<<dim3(196U, 1U, 1U), dim3(256U, 1U, 1U)>>>(
      *gpu_vp);
  // continue repaying
  solver_interp_cuda_kernel03<<<dim3(5U, 1U, 1U), dim3(128U, 1U, 1U)>>>(
      *gpu_vd);
  solver_interp_cuda_kernel04<<<dim3(196U, 1U, 1U), dim3(256U, 1U, 1U)>>>(
      *gpu_def);
  //  vgood = vp ;
  solver_interp_cuda_kernel05<<<dim3(5U, 1U, 1U), dim3(128U, 1U, 1U)>>>(
      *gpu_vo);
  // debt policy function (expressed in indices)
  solver_interp_cuda_kernel06<<<dim3(196U, 1U, 1U), dim3(256U, 1U, 1U)>>>(
      *para, *gpu_q, *gpu_bp, *gpu_vp1);
  // q is price of debt; it is a function of  (y_t, d_{t+1})
  //  u = zeros(1,nb) ;
  checkCudaError(
      cudaMemcpy(*gpu_b, cpu_b, 80ULL * sizeof(real_T), cudaMemcpyHostToDevice),
      __FILE__, __LINE__);
  solver_interp_cuda_kernel07<<<dim3(1U, 1U, 1U), dim3(32U, 1U, 1U)>>>(
      *gpu_b, gpu_bp_u);
  b = 1.0 - para->sigg;
  checkCudaError(cudaMemcpy(*gpu_z, cpu_z, 625ULL * sizeof(real_T),
                            cudaMemcpyHostToDevice),
                 __FILE__, __LINE__);
  checkCudaError(cudaMemcpy(*gpu_m, cpu_m, 625ULL * sizeof(real_T),
                            cudaMemcpyHostToDevice),
                 __FILE__, __LINE__);
  solver_interp_cuda_kernel08<<<dim3(5U, 1U, 1U), dim3(128U, 1U, 1U)>>>(
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
    solver_interp_cuda_kernel09<<<dim3(1526U, 1U, 1U), dim3(256U, 1U, 1U)>>>(
        *gpu_m, *gpu_pdf, gpu_betta, b, *gpu_a);
    diff = 1.0;
    ex = 0.0;
    cublasDgemm(getCublasGlobalHandle(), CUBLAS_OP_N, CUBLAS_OP_N, 625, 80, 625,
                &diff, &(*gpu_a)[0], 625, &(*gpu_vp)[0], 625, &ex,
                &(*gpu_evp)[0], 625);
    solver_interp_cuda_kernel10<<<dim3(5U, 1U, 1U), dim3(128U, 1U, 1U)>>>(
        theta, *gpu_vd, 1.0 - theta, *gpu_vo);
    cublasDgemm(getCublasGlobalHandle(), CUBLAS_OP_N, CUBLAS_OP_N, 625, 1, 625,
                &diff, &(*gpu_a)[0], 625, &(*gpu_vo)[0], 625, &ex,
                &(*gpu_vd1)[0], 625);
    solver_interp_cuda_kernel11<<<dim3(5U, 1U, 1U), dim3(128U, 1U, 1U)>>>(
        *gpu_ua, *gpu_vd1);
    solver_interp_cuda_kernel12<<<dim3(196U, 1U, 1U), dim3(256U, 1U, 1U)>>>(
        *gpu_b, *gpu_q, *gpu_x, *gpu_w);
    solver_interp_cuda_kernel13<<<dim3(196U, 1U, 1U), dim3(256U, 1U, 1U)>>>(
        *gpu_b, *gpu_def, gpu_bp_u, *gpu_evp, *gpu_w, *gpu_bp, *gpu_vp1);
    solver_interp_cuda_kernel14<<<dim3(196U, 1U, 1U), dim3(256U, 1U, 1U)>>>(
        *gpu_vd1, *gpu_bp, *gpu_def, *gpu_vp1);
    //  def = vp1 <= vd1 ;
    pdf_outdatedOnGpu = false;
    cublasDgemm(getCublasGlobalHandle(), CUBLAS_OP_N, CUBLAS_OP_N, 625, 80, 625,
                &diff, &(*gpu_pdf)[0], 625, &(*gpu_def)[0], 625, &ex,
                &(*gpu_evp)[0], 625);
    solver_interp_cuda_kernel15<<<dim3(196U, 1U, 1U), dim3(256U, 1U, 1U)>>>(
        rstar + 1.0, *gpu_q, *gpu_evp, *gpu_w);
    checkCudaError(cudaMemcpy(cpu_vp, *gpu_w, 50000ULL * sizeof(real_T),
                              cudaMemcpyDeviceToHost),
                   __FILE__, __LINE__);
    ex = cpu_vp[0];
    for (funccount = 0; funccount < 49999; funccount++) {
      c = cpu_vp[funccount + 1];
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
    solver_interp_cuda_kernel16<<<dim3(196U, 1U, 1U), dim3(256U, 1U, 1U)>>>(
        *gpu_vp1, *gpu_vp, *gpu_w);
    checkCudaError(cudaMemcpy(cpu_vp, *gpu_w, 50000ULL * sizeof(real_T),
                              cudaMemcpyDeviceToHost),
                   __FILE__, __LINE__);
    b_ex = cpu_vp[0];
    for (funccount = 0; funccount < 49999; funccount++) {
      c = cpu_vp[funccount + 1];
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
    solver_interp_cuda_kernel17<<<dim3(5U, 1U, 1U), dim3(128U, 1U, 1U)>>>(
        *gpu_vd1, *gpu_vd, *gpu_vo);
    checkCudaError(cudaMemcpy(cpu_vo, *gpu_vo, 625ULL * sizeof(real_T),
                              cudaMemcpyDeviceToHost),
                   __FILE__, __LINE__);
    diff = cpu_vo[0];
    for (funccount = 0; funccount < 624; funccount++) {
      c = cpu_vo[funccount + 1];
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
    solver_interp_cuda_kernel18<<<dim3(5U, 1U, 1U), dim3(128U, 1U, 1U)>>>(
        nb0, *gpu_vp1, *gpu_vo);
    solver_interp_cuda_kernel19<<<dim3(196U, 1U, 1U), dim3(256U, 1U, 1U)>>>(
        *gpu_vp1, *gpu_vp);
    solver_interp_cuda_kernel20<<<dim3(5U, 1U, 1U), dim3(128U, 1U, 1U)>>>(
        *gpu_vd1, *gpu_vd);
    solver_interp_cuda_kernel21<<<dim3(196U, 1U, 1U), dim3(256U, 1U, 1U)>>>(
        *gpu_evp, *gpu_q);
    if (std::fmod(static_cast<real_T>(its), 30.0) == 0.0) {
      d_y = nullptr;
      m = emlrtCreateCharArray(2, &iv2[0]);
      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 7, m, &u[0]);
      emlrtAssign(&d_y, m);
      e_y = nullptr;
      m = emlrtCreateCharArray(2, &iv3[0]);
      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 17, m, &c_u[0]);
      emlrtAssign(&e_y, m);
      emlrt_marshallIn(feval(d_y, emlrt_marshallOut(1.0), e_y,
                             emlrt_marshallOut(static_cast<real_T>(its)),
                             emlrt_marshallOut(diff), &emlrtMCI),
                       "<output of feval>");
    }
    its++;
  }
  *totaltime = coder::toc(timer_tv_sec, timer_tv_nsec);
  *avgtime = *totaltime / (static_cast<real_T>(its) - 1.0);
  b_y = nullptr;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 7, m, &u[0]);
  emlrtAssign(&b_y, m);
  c_y = nullptr;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 42, m, &b_u[0]);
  emlrtAssign(&c_y, m);
  emlrt_marshallIn(feval(b_y, emlrt_marshallOut(1.0), c_y,
                         emlrt_marshallOut(static_cast<real_T>(its) - 1.0),
                         emlrt_marshallOut(*totaltime),
                         emlrt_marshallOut(*avgtime), &emlrtMCI),
                   "<output of feval>");
  checkCudaError(cudaMemcpy(cpu_q, *gpu_q, 50000ULL * sizeof(real_T),
                            cudaMemcpyDeviceToHost),
                 __FILE__, __LINE__);
  checkCudaError(cudaMemcpy(cpu_bp, *gpu_bp, 50000ULL * sizeof(real_T),
                            cudaMemcpyDeviceToHost),
                 __FILE__, __LINE__);
  checkCudaError(cudaMemcpy(cpu_vp, *gpu_vp, 50000ULL * sizeof(real_T),
                            cudaMemcpyDeviceToHost),
                 __FILE__, __LINE__);
  checkCudaError(cudaMemcpy(cpu_def, *gpu_def, 50000ULL * sizeof(real_T),
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
  checkCudaError(mwCudaFree(*gpu_vd), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_vo), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_vp1), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(gpu_bp_u), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_x), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_ua), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_a), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_evp), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_vd1), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_w), __FILE__, __LINE__);
}

// End of code generation (solver_interp_cuda.cu)
