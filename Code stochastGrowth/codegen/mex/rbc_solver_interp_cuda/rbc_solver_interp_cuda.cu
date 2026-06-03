//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// rbc_solver_interp_cuda.cu
//
// Code generation for function 'rbc_solver_interp_cuda'
//

// Include files
#include "rbc_solver_interp_cuda.h"
#include "rbc_solver_interp_cuda_data.h"
#include "rt_nonfinite.h"
#include "tic.h"
#include "toc.h"
#include "MWCUBLASUtils.hpp"
#include "MWCudaDimUtility.hpp"
#include "MWCudaMemoryFunctions.hpp"
#include "MWGpuFunctionImplUtility.hpp"
#include "emlrt.h"
#include <cmath>

// Variable Definitions
static emlrtMCInfo emlrtMCI{
    66,                                                             // lineNo
    18,                                                             // colNo
    "fprintf",                                                      // fName
    "D:\\Matlab_2026a\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m" // pName
};

__constant__ static real_T const_k[500];

// Function Declarations
static void checkCudaError(cudaError_t errorCode, const char_T *file,
                           int32_T b_line);

static real_T e_emlrt_marshallIn(const mxArray *src,
                                 const emlrtMsgIdentifier *msgId);

static real_T emlrt_marshallIn(const mxArray *a__output_of_feval_,
                               const char_T *identifier);

static real_T emlrt_marshallIn(const mxArray *u,
                               const emlrtMsgIdentifier *parentId);

static const mxArray *feval(const mxArray *m1, const mxArray *m2,
                            const mxArray *m3, const mxArray *m4,
                            const mxArray *m5, const mxArray *m6,
                            const mxArray *m7, emlrtMCInfo *location);

static void gpuThrowError(uint32_T errorCode, const char_T *errorName,
                          const char_T *errorString, const char_T *file,
                          int32_T b_line);

static __global__ void rbc_solver_interp_cuda_kernel1(real_T *k_min,
                                                      real_T *k_max);

static __global__ void rbc_solver_interp_cuda_kernel2(const real_T v[100500],
                                                      real_T y[100500]);

static __global__ void rbc_solver_interp_cuda_kernel3(const real_T pdfz[40401],
                                                      real_T B[40401]);

static __global__ void
rbc_solver_interp_cuda_kernel4(const real_T c0[100500], const real_T *k_min,
                               const real_T *k_max, const real_T ev[100500],
                               real_T pol_kp[100500], real_T v0[100500]);

static __global__ void rbc_solver_interp_cuda_kernel5(const real_T v0[100500],
                                                      real_T v[100500],
                                                      real_T y[100500]);

static __global__ void rbc_solver_interp_cuda_kernel6(const real_T y[100500],
                                                      real_T maxval[201]);

static __global__ void rbc_solver_interp_cuda_kernel7(const real_T v0[100500],
                                                      real_T v[100500]);

// Function Definitions
static void checkCudaError(cudaError_t errorCode, const char_T *file,
                           int32_T b_line)
{
  if (errorCode != cudaSuccess) {
    gpuThrowError(errorCode, cudaGetErrorName(errorCode),
                  cudaGetErrorString(errorCode), file, b_line);
  }
}

static real_T e_emlrt_marshallIn(const mxArray *src,
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
  y = e_emlrt_marshallIn(emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
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
    __launch_bounds__(32, 1) void rbc_solver_interp_cuda_kernel1(real_T *k_min,
                                                                 real_T *k_max)
{
  int32_T tmpIdx;
  tmpIdx = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (tmpIdx < 1) {
    *k_min = const_k[0];
    *k_max = const_k[499];
  }
}

static __global__ __launch_bounds__(256, 1) void rbc_solver_interp_cuda_kernel2(
    const real_T v[100500], real_T y[100500])
{
  int32_T funccount;
  funccount = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (funccount < 100500) {
    y[funccount] = 0.95 * v[funccount];
  }
}

static __global__ __launch_bounds__(256, 1) void rbc_solver_interp_cuda_kernel3(
    const real_T pdfz[40401], real_T B[40401])
{
  uint64_T gThreadId;
  int32_T funccount;
  int32_T iv0;
  gThreadId = mwGetGlobalThreadIndex();
  iv0 = static_cast<int32_T>(gThreadId % 201ULL);
  funccount =
      static_cast<int32_T>((gThreadId - static_cast<uint64_T>(iv0)) / 201ULL);
  if ((funccount < 201) && (iv0 < 201)) {
    B[iv0 + 201 * funccount] = pdfz[funccount + 201 * iv0];
  }
}

static __global__ __launch_bounds__(256, 1) void rbc_solver_interp_cuda_kernel4(
    const real_T c0[100500], const real_T *k_min, const real_T *k_max,
    const real_T ev[100500], real_T pol_kp[100500], real_T v0[100500])
{
  real_T a;
  real_T b;
  real_T d;
  real_T e;
  real_T fv;
  real_T fw;
  real_T fx;
  real_T j;
  real_T jm;
  real_T minval_tmp;
  real_T p;
  real_T q;
  real_T tol1;
  real_T tol2;
  real_T v;
  real_T w;
  real_T x;
  real_T xf;
  real_T xm;
  uint64_T gThreadId;
  int32_T exitg1;
  int32_T funccount;
  int32_T ik;
  int32_T iter;
  int32_T iv0;
  int32_T ix;
  int32_T iz;
  boolean_T guard1;
  gThreadId = mwGetGlobalThreadIndex();
  ik = static_cast<int32_T>(gThreadId % 500ULL);
  iz = static_cast<int32_T>((gThreadId - static_cast<uint64_T>(ik)) / 500ULL);
  if ((iz < 201) && (ik < 500)) {
    //  z today (exogenous state)
    //  k today (endo state)
    //  Impose that k' lies in interval [0,wealth]
    ik += 500 * iz;
    minval_tmp = c0[ik];
    x = fmin(*k_max, minval_tmp);
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
    a = *k_min;
    b = x - 1.0E-8;
    v = *k_min + 0.3819660112501051 * ((x - 1.0E-8) - *k_min);
    w = v;
    xf = v;
    d = 0.0;
    e = 0.0;
    // end function
    // --------------------------- SUBFUNCTIONS
    // --------------------------------%
    //  This calls user-written function interp1_scal
    //  c1 = wealth-kprime;
    //  Fast linear interpolation routine
    //  Usage:
    //  yi = interp1_scal(x,y,xi)
    //  where x and y are column vectors with n elements, xi is a scalar and yi
    //  is a scalar
    //  Input Arguments
    //  x - Sample points
    //    column vector
    //  Y - Sample data
    //    column vector
    //  xi - Query point
    //    scalar
    //  j = 0;
    //  for i = 1:n
    //      if x(i) <= xi
    //          j = j + 1;
    //      else
    //          break
    //      end
    //  end
    // function jl = locate(xx,x)
    //  x is between xx(jl) and xx(jl+1)
    //  jl = 0 and jl = n means x is out of range
    //  xx is assumed to be monotone increasing
    if (v < const_k[0]) {
      j = 0.0;
    } else if (v > const_k[499]) {
      j = 500.0;
    } else {
      j = 1.0;
      p = 500.0;
      while (p - j > 1.0) {
        jm = floor((p + j) / 2.0);
        if (v >= const_k[static_cast<int32_T>(jm) - 1]) {
          j = jm;
        } else {
          p = jm;
        }
      }
    }
    j = fmax(fmin(j, 499.0), 1.0);
    iv0 = static_cast<int32_T>(j);
    funccount = iv0 + 500 * iz;
    p = ev[funccount - 1];
    j = const_k[iv0 - 1];
    fx = -(-pow(minval_tmp - v, -1.0) +
           (p + (v - j) * ((ev[funccount] - p) / (const_k[iv0] - j))));
    //  F = -F;
    funccount = 1;
    fv = fx;
    fw = fx;
    xm = 0.5 * (*k_min + (x - 1.0E-8));
    tol1 = 1.4901161193847656E-8 * fabs(v) + 3.3333333333333334E-9;
    tol2 = 2.0 * tol1;
    //  Main loop
    do {
      exitg1 = 0;
      if (fabs(xf - xm) > tol2 - 0.5 * (b - a)) {
        //  Is a parabolic fit possible
        guard1 = false;
        if (fabs(e) > tol1) {
          //  Yes, so fit parabola
          jm = xf - w;
          x = jm * (fx - fv);
          j = xf - v;
          q = j * (fx - fw);
          p = j * q - jm * x;
          q = 2.0 * (q - x);
          if (q > 0.0) {
            p = -p;
          }
          q = fabs(q);
          x = e;
          e = d;
          //  Is the parabola acceptable
          if ((fabs(p) < fabs(0.5 * q * x)) && (p > q * (a - xf)) &&
              (p < q * (b - xf))) {
            //  Yes, parabolic interpolation step
            d = p / q;
            x = xf + d;
            // procedure = '       parabolic';
            //  f must not be evaluated too close to ax or bx
            if ((x - a < tol2) || (b - x < tol2)) {
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
            e = b - xf;
          }
          d = 0.3819660112501051 * e;
          // procedure = '       golden';
        }
        //  The function must not be evaluated too close to xf
        x = xf + (mwGpuSign(d) + static_cast<real_T>(d == 0.0)) *
                     fmax(fabs(d), tol1);
        // end function
        // --------------------------- SUBFUNCTIONS
        // --------------------------------%
        //  This calls user-written function interp1_scal
        //  c1 = wealth-kprime;
        //  Fast linear interpolation routine
        //  Usage:
        //  yi = interp1_scal(x,y,xi)
        //  where x and y are column vectors with n elements, xi is a scalar and
        //  yi is a scalar Input Arguments x - Sample points
        //    column vector
        //  Y - Sample data
        //    column vector
        //  xi - Query point
        //    scalar
        //  j = 0;
        //  for i = 1:n
        //      if x(i) <= xi
        //          j = j + 1;
        //      else
        //          break
        //      end
        //  end
        // function jl = locate(xx,x)
        //  x is between xx(jl) and xx(jl+1)
        //  jl = 0 and jl = n means x is out of range
        //  xx is assumed to be monotone increasing
        if (x < const_k[0]) {
          j = 0.0;
        } else if (x > const_k[499]) {
          j = 500.0;
        } else {
          j = 1.0;
          p = 500.0;
          while (p - j > 1.0) {
            jm = floor((p + j) / 2.0);
            if (x >= const_k[static_cast<int32_T>(jm) - 1]) {
              j = jm;
            } else {
              p = jm;
            }
          }
        }
        j = fmax(fmin(j, 499.0), 1.0);
        ix = static_cast<int32_T>(j);
        iv0 = ix + 500 * iz;
        j = ev[iv0 - 1];
        p = const_k[ix - 1];
        p = -(-pow(minval_tmp - x, -1.0) +
              (j + (x - p) * ((ev[iv0] - j) / (const_k[ix] - p))));
        //  F = -F;
        funccount++;
        iter++;
        //  Update a, b, v, w, x, xm, tol1, tol2
        if (p <= fx) {
          if (x >= xf) {
            a = xf;
          } else {
            b = xf;
          }
          v = w;
          fv = fw;
          w = xf;
          fw = fx;
          xf = x;
          fx = p;
        } else {
          //  fu > fx
          if (x < xf) {
            a = x;
          } else {
            b = x;
          }
          if ((p <= fw) || (w == xf)) {
            v = w;
            fv = fw;
            w = x;
            fw = p;
          } else if ((p <= fv) || (v == xf) || (v == w)) {
            v = x;
            fv = p;
          }
        }
        xm = 0.5 * (a + b);
        tol1 = 1.4901161193847656E-8 * fabs(xf) + 3.3333333333333334E-9;
        tol2 = 2.0 * tol1;
        if ((funccount >= 500) || (iter >= 500)) {
          exitg1 = 1;
        }
      } else {
        //  while
        exitg1 = 1;
      }
    } while (exitg1 == 0);
    v0[ik] = -fx;
    pol_kp[ik] = xf;
  }
}

static __global__ __launch_bounds__(256, 1) void rbc_solver_interp_cuda_kernel5(
    const real_T v0[100500], real_T v[100500], real_T y[100500])
{
  real_T p;
  int32_T funccount;
  funccount = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (funccount < 100500) {
    p = v[funccount] - v0[funccount];
    v[funccount] = p;
    y[funccount] = fabs(p);
  }
}

static __global__ __launch_bounds__(128, 1) void rbc_solver_interp_cuda_kernel6(
    const real_T y[100500], real_T maxval[201])
{
  real_T j;
  real_T p;
  int32_T funccount;
  int32_T iv0;
  int32_T iz;
  boolean_T b_p;
  funccount = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (funccount < 201) {
    iv0 = (funccount * 499 + funccount) + 1;
    maxval[funccount] = y[iv0 - 1];
    for (iz = 0; iz < 499; iz++) {
      p = y[iv0 + iz];
      if (isnan(p)) {
        b_p = false;
      } else {
        j = maxval[funccount];
        if (isnan(j)) {
          b_p = true;
        } else {
          b_p = (j < p);
        }
      }
      if (b_p) {
        maxval[funccount] = p;
      }
    }
  }
}

static __global__ __launch_bounds__(256, 1) void rbc_solver_interp_cuda_kernel7(
    const real_T v0[100500], real_T v[100500])
{
  int32_T funccount;
  funccount = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (funccount < 100500) {
    v[funccount] = v0[funccount];
  }
}

void rbc_solver_interp_cuda(const real_T cpu_c0[100500], const real_T k[500],
                            const real_T cpu_pdfz[40401], real_T cpu_v[100500],
                            real_T cpu_pol_kp[100500])
{
  static const int32_T iv[2]{1, 7};
  static const int32_T iv1[2]{1, 31};
  static const char_T b_u[31]{'%', '8', '.', '0', 'f', ' ',  '~', '%',
                              '8', '.', '8', 'f', ' ', '~',  '%', '8',
                              '.', '5', 'f', 's', ' ', '~',  '%', '8',
                              '.', '5', 'f', 's', ' ', '\\', 'n'};
  static const char_T u[7]{'f', 'p', 'r', 'i', 'n', 't', 'f'};
  emlrtTimespec expl_temp;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *m;
  const mxArray *y;
  real_T(*gpu_c0)[100500];
  real_T(*gpu_ev)[100500];
  real_T(*gpu_pol_kp)[100500];
  real_T(*gpu_v)[100500];
  real_T(*gpu_v0)[100500];
  real_T(*gpu_y)[100500];
  real_T(*gpu_B)[40401];
  real_T(*gpu_pdfz)[40401];
  real_T cpu_maxval[201];
  real_T(*gpu_maxval)[201];
  real_T beta1;
  real_T diff;
  real_T smctime_tv_nsec;
  real_T smctime_tv_sec;
  real_T totaltime;
  real_T *gpu_k_max;
  real_T *gpu_k_min;
  int32_T i;
  int32_T its;
  boolean_T c0_outdatedOnGpu;
  boolean_T pdfz_outdatedOnGpu;
  boolean_T pol_kp_outdatedOnCpu;
  boolean_T v_outdatedOnCpu;
  checkCudaError(mwCudaMalloc(&gpu_maxval, 201ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_ev, 100500ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_B, 40401ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_y, 100500ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_v0, 100500ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_k_max, sizeof(real_T)), __FILE__, __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_k_min, sizeof(real_T)), __FILE__, __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_pol_kp, 100500ULL * sizeof(real_T)),
                 __FILE__, __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_v, 100500ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_pdfz, 40401ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_c0, 100500ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  pdfz_outdatedOnGpu = true;
  c0_outdatedOnGpu = true;
  //  Tolerance for V
  diff = 1.0;
  its = 1;
  //  Discount rate
  checkCudaError(cudaMemcpyToSymbol(const_k, k, 500ULL * sizeof(real_T), 0ULL,
                                    cudaMemcpyHostToDevice),
                 __FILE__, __LINE__);
  rbc_solver_interp_cuda_kernel1<<<dim3(1U, 1U, 1U), dim3(32U, 1U, 1U)>>>(
      gpu_k_min, gpu_k_max);
  v_outdatedOnCpu = false;
  //  Value Function
  //  v at the previous iteration
  pol_kp_outdatedOnCpu = false;
  expl_temp = coder::tic();
  smctime_tv_sec = expl_temp.tv_sec;
  smctime_tv_nsec = expl_temp.tv_nsec;
  totaltime = 0.0;
  while ((diff > 1.0E-6) && (its < 2000)) {
    rbc_solver_interp_cuda_kernel2<<<dim3(393U, 1U, 1U), dim3(256U, 1U, 1U)>>>(
        *gpu_v, *gpu_y);
    if (pdfz_outdatedOnGpu) {
      checkCudaError(cudaMemcpy(*gpu_pdfz, cpu_pdfz, 40401ULL * sizeof(real_T),
                                cudaMemcpyHostToDevice),
                     __FILE__, __LINE__);
    }
    pdfz_outdatedOnGpu = false;
    rbc_solver_interp_cuda_kernel3<<<dim3(158U, 1U, 1U), dim3(256U, 1U, 1U)>>>(
        *gpu_pdfz, *gpu_B);
    diff = 1.0;
    beta1 = 0.0;
    cublasDgemm(getCublasGlobalHandle(), CUBLAS_OP_N, CUBLAS_OP_N, 500, 201,
                201, &diff, &(*gpu_y)[0], 500, &(*gpu_B)[0], 201, &beta1,
                &(*gpu_ev)[0], 500);
    if (c0_outdatedOnGpu) {
      checkCudaError(cudaMemcpy(*gpu_c0, cpu_c0, 100500ULL * sizeof(real_T),
                                cudaMemcpyHostToDevice),
                     __FILE__, __LINE__);
    }
    c0_outdatedOnGpu = false;
    rbc_solver_interp_cuda_kernel4<<<dim3(393U, 1U, 1U), dim3(256U, 1U, 1U)>>>(
        *gpu_c0, gpu_k_min, gpu_k_max, *gpu_ev, *gpu_pol_kp, *gpu_v0);
    pol_kp_outdatedOnCpu = true;
    // end iz
    rbc_solver_interp_cuda_kernel5<<<dim3(393U, 1U, 1U), dim3(256U, 1U, 1U)>>>(
        *gpu_v0, *gpu_v, *gpu_y);
    rbc_solver_interp_cuda_kernel6<<<dim3(2U, 1U, 1U), dim3(128U, 1U, 1U)>>>(
        *gpu_y, *gpu_maxval);
    checkCudaError(cudaMemcpy(cpu_maxval, *gpu_maxval, 201ULL * sizeof(real_T),
                              cudaMemcpyDeviceToHost),
                   __FILE__, __LINE__);
    diff = cpu_maxval[0];
    for (i = 0; i < 200; i++) {
      beta1 = cpu_maxval[i + 1];
      if (std::isnan(beta1)) {
        v_outdatedOnCpu = false;
      } else if (std::isnan(diff)) {
        v_outdatedOnCpu = true;
      } else {
        v_outdatedOnCpu = (diff < beta1);
      }
      if (v_outdatedOnCpu) {
        diff = beta1;
      }
    }
    //  Check convergence:
    rbc_solver_interp_cuda_kernel7<<<dim3(393U, 1U, 1U), dim3(256U, 1U, 1U)>>>(
        *gpu_v0, *gpu_v);
    v_outdatedOnCpu = true;
    //  Update
    totaltime += coder::toc(smctime_tv_sec, smctime_tv_nsec);
    if ((std::fmod(static_cast<real_T>(its), 50.0) == 0.0) ||
        (diff <= 1.0E-6)) {
      y = nullptr;
      m = emlrtCreateCharArray(2, &iv[0]);
      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 7, m, &u[0]);
      emlrtAssign(&y, m);
      b_y = nullptr;
      m = emlrtCreateDoubleScalar(1.0);
      emlrtAssign(&b_y, m);
      c_y = nullptr;
      m = emlrtCreateCharArray(2, &iv1[0]);
      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 31, m, &b_u[0]);
      emlrtAssign(&c_y, m);
      d_y = nullptr;
      m = emlrtCreateDoubleScalar(static_cast<real_T>(its));
      emlrtAssign(&d_y, m);
      e_y = nullptr;
      m = emlrtCreateDoubleScalar(diff);
      emlrtAssign(&e_y, m);
      f_y = nullptr;
      m = emlrtCreateDoubleScalar(totaltime);
      emlrtAssign(&f_y, m);
      g_y = nullptr;
      m = emlrtCreateDoubleScalar(totaltime / static_cast<real_T>(its));
      emlrtAssign(&g_y, m);
      emlrt_marshallIn(feval(y, b_y, c_y, d_y, e_y, f_y, g_y, &emlrtMCI),
                       "<output of feval>");
    }
    its++;
    expl_temp = coder::tic();
    smctime_tv_sec = expl_temp.tv_sec;
    smctime_tv_nsec = expl_temp.tv_nsec;
    //  re-start clock
  }
  // end while
  if (v_outdatedOnCpu) {
    checkCudaError(cudaMemcpy(cpu_v, *gpu_v, 100500ULL * sizeof(real_T),
                              cudaMemcpyDeviceToHost),
                   __FILE__, __LINE__);
  }
  if (pol_kp_outdatedOnCpu) {
    checkCudaError(cudaMemcpy(cpu_pol_kp, *gpu_pol_kp,
                              100500ULL * sizeof(real_T),
                              cudaMemcpyDeviceToHost),
                   __FILE__, __LINE__);
  }
  checkCudaError(mwCudaFree(*gpu_c0), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_pdfz), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_v), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_pol_kp), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(gpu_k_min), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(gpu_k_max), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_v0), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_y), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_B), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_ev), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_maxval), __FILE__, __LINE__);
}

// End of code generation (rbc_solver_interp_cuda.cu)
