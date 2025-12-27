/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * solver_bf_parfor2.c
 *
 * Code generation for function 'solver_bf_parfor2'
 *
 */

/* Include files */
#include "solver_bf_parfor2.h"
#include "mtimes.h"
#include "power.h"
#include "rt_nonfinite.h"
#include "solver_bf_parfor2_data.h"
#include "solver_bf_parfor2_mexutil.h"
#include "solver_bf_parfor2_types.h"
#include "tic.h"
#include "toc.h"
#include "emlrt.h"
#include "mwmathutil.h"
#include "omp.h"
#include <emmintrin.h>
#include <stdio.h>
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = {
    23,                  /* lineNo */
    "solver_bf_parfor2", /* fcnName */
    "D:\\GitHub\\Efficient-Parallelization-of-Nonlinear-Macroeconomic-Models-A-"
    "MATLAB-Executable-Approach\\Code sovereignDefault\\sol"
    "ver_bf_parfor2.m" /* pathName */
};

static emlrtRSInfo b_emlrtRSI = {
    30,                  /* lineNo */
    "solver_bf_parfor2", /* fcnName */
    "D:\\GitHub\\Efficient-Parallelization-of-Nonlinear-Macroeconomic-Models-A-"
    "MATLAB-Executable-Approach\\Code sovereignDefault\\sol"
    "ver_bf_parfor2.m" /* pathName */
};

static emlrtRSInfo c_emlrtRSI = {
    34,                  /* lineNo */
    "solver_bf_parfor2", /* fcnName */
    "D:\\GitHub\\Efficient-Parallelization-of-Nonlinear-Macroeconomic-Models-A-"
    "MATLAB-Executable-Approach\\Code sovereignDefault\\sol"
    "ver_bf_parfor2.m" /* pathName */
};

static emlrtRSInfo d_emlrtRSI = {
    36,                  /* lineNo */
    "solver_bf_parfor2", /* fcnName */
    "D:\\GitHub\\Efficient-Parallelization-of-Nonlinear-Macroeconomic-Models-A-"
    "MATLAB-Executable-Approach\\Code sovereignDefault\\sol"
    "ver_bf_parfor2.m" /* pathName */
};

static emlrtRSInfo e_emlrtRSI = {
    44,                  /* lineNo */
    "solver_bf_parfor2", /* fcnName */
    "D:\\GitHub\\Efficient-Parallelization-of-Nonlinear-Macroeconomic-Models-A-"
    "MATLAB-Executable-Approach\\Code sovereignDefault\\sol"
    "ver_bf_parfor2.m" /* pathName */
};

static emlrtRSInfo f_emlrtRSI = {
    64,                  /* lineNo */
    "solver_bf_parfor2", /* fcnName */
    "D:\\GitHub\\Efficient-Parallelization-of-Nonlinear-Macroeconomic-Models-A-"
    "MATLAB-Executable-Approach\\Code sovereignDefault\\sol"
    "ver_bf_parfor2.m" /* pathName */
};

static emlrtRSInfo g_emlrtRSI = {
    71,                  /* lineNo */
    "solver_bf_parfor2", /* fcnName */
    "D:\\GitHub\\Efficient-Parallelization-of-Nonlinear-Macroeconomic-Models-A-"
    "MATLAB-Executable-Approach\\Code sovereignDefault\\sol"
    "ver_bf_parfor2.m" /* pathName */
};

static emlrtRSInfo h_emlrtRSI = {
    74,                  /* lineNo */
    "solver_bf_parfor2", /* fcnName */
    "D:\\GitHub\\Efficient-Parallelization-of-Nonlinear-Macroeconomic-Models-A-"
    "MATLAB-Executable-Approach\\Code sovereignDefault\\sol"
    "ver_bf_parfor2.m" /* pathName */
};

static emlrtRSInfo n_emlrtRSI =
    {
        94,                  /* lineNo */
        "eml_mtimes_helper", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_"
        "helper.m" /* pathName */
};

static emlrtRSInfo q_emlrtRSI = {
    38,        /* lineNo */
    "fprintf", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m" /* pathName
                                                                          */
};

static emlrtMCInfo emlrtMCI = {
    66,        /* lineNo */
    18,        /* colNo */
    "fprintf", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m" /* pName
                                                                          */
};

static emlrtRSInfo s_emlrtRSI = {
    66,        /* lineNo */
    "fprintf", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m" /* pathName
                                                                          */
};

/* Function Declarations */
static const mxArray *b_feval(const emlrtStack *sp, const mxArray *m1,
                              const mxArray *m2, const mxArray *m3,
                              const mxArray *m4, const mxArray *m5,
                              const mxArray *m6, emlrtMCInfo *location);

static real_T emlrt_marshallIn(const emlrtStack *sp,
                               const mxArray *a__output_of_feval_,
                               const char_T *identifier);

static const mxArray *feval(const emlrtStack *sp, const mxArray *m1,
                            const mxArray *m2, const mxArray *m3,
                            const mxArray *m4, const mxArray *m5,
                            emlrtMCInfo *location);

/* Function Definitions */
static const mxArray *b_feval(const emlrtStack *sp, const mxArray *m1,
                              const mxArray *m2, const mxArray *m3,
                              const mxArray *m4, const mxArray *m5,
                              const mxArray *m6, emlrtMCInfo *location)
{
  const mxArray *pArrays[6];
  const mxArray *m;
  pArrays[0] = m1;
  pArrays[1] = m2;
  pArrays[2] = m3;
  pArrays[3] = m4;
  pArrays[4] = m5;
  pArrays[5] = m6;
  return emlrtCallMATLABR2012b((emlrtConstCTX)sp, 1, &m, 6, &pArrays[0],
                               "feval", true, location);
}

static real_T emlrt_marshallIn(const emlrtStack *sp,
                               const mxArray *a__output_of_feval_,
                               const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  real_T y;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(a__output_of_feval_), &thisId);
  emlrtDestroyArray(&a__output_of_feval_);
  return y;
}

static const mxArray *feval(const emlrtStack *sp, const mxArray *m1,
                            const mxArray *m2, const mxArray *m3,
                            const mxArray *m4, const mxArray *m5,
                            emlrtMCInfo *location)
{
  const mxArray *pArrays[5];
  const mxArray *m;
  pArrays[0] = m1;
  pArrays[1] = m2;
  pArrays[2] = m3;
  pArrays[3] = m4;
  pArrays[4] = m5;
  return emlrtCallMATLABR2012b((emlrtConstCTX)sp, 1, &m, 5, &pArrays[0],
                               "feval", true, location);
}

emlrtCTX emlrtGetRootTLSGlobal(void)
{
  return emlrtRootTLSGlobal;
}

void emlrtLockerFunction(EmlrtLockeeFunction aLockee, emlrtConstCTX aTLS,
                         void *aData)
{
  omp_set_lock(&emlrtLockGlobal);
  emlrtCallLockeeFunction(aLockee, aTLS, aData);
  omp_unset_lock(&emlrtLockGlobal);
}

void solver_bf_parfor2(solver_bf_parfor2StackData *SD, const emlrtStack *sp,
                       const real_T b[200], const real_T z[625],
                       const real_T m[625], const real_T pdf[390625],
                       const struct0_T *para, real_T q[125000],
                       real_T bp[125000], real_T vp[125000],
                       boolean_T def[125000], real_T *totaltime,
                       real_T *avgtime)
{
  static const int32_T iv[2] = {1, 7};
  static const int32_T iv1[2] = {1, 42};
  static const int32_T iv2[2] = {1, 7};
  static const int32_T iv3[2] = {1, 17};
  static const char_T b_u[42] = {
      '#', ' ', 'i', 't', 's', '%', '4', '.', '0', 'f', ' ', '~', 'T',  'i',
      'm', 'e', ' ', '%', '8', '.', '8', 'f', 's', ' ', '~', 'A', 'v',  'g',
      't', 'i', 'm', 'e', ' ', '%', '8', '.', '8', 'f', 's', ' ', '\\', 'n'};
  static const char_T d_u[17] = {'%', '5', '.', '0', 'f', ' ', '~',  ' ', '%',
                                 '8', '.', '1', '0', 'f', ' ', '\\', 'n'};
  static const char_T u[7] = {'f', 'p', 'r', 'i', 'n', 't', 'f'};
  __m128d r;
  __m128d r1;
  __m128d r2;
  __m128d r3;
  jmp_buf emlrtJBEnviron;
  jmp_buf *volatile emlrtJBStack;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  emlrtTimespec expl_temp;
  const mxArray *b_m;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *y;
  real_T ua[625];
  real_T vd[625];
  real_T vd1[625];
  real_T vo[625];
  real_T x[625];
  real_T c1[200];
  real_T c_u[200];
  real_T varargin_1[200];
  real_T dv[2];
  real_T dv1[2];
  real_T dv2[2];
  real_T dv3[2];
  real_T dv4[2];
  real_T dv5[2];
  real_T b_ex;
  real_T betta;
  real_T c_ex;
  real_T d;
  real_T d1;
  real_T diff;
  real_T ex;
  real_T rstar;
  real_T sigg;
  real_T theta;
  real_T timer_tv_nsec;
  real_T timer_tv_sec;
  int32_T b_i;
  int32_T b_k;
  int32_T i;
  int32_T ib;
  int32_T ibtile;
  int32_T idx;
  int32_T is;
  int32_T its;
  int32_T k;
  int32_T nb0;
  int32_T solver_bf_parfor2_numThreads;
  boolean_T b_p;
  boolean_T emlrtHadParallelError = false;
  boolean_T exitg1;
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  theta = para->theta;
  betta = para->betta;
  sigg = para->sigg;
  rstar = para->rstar;
  for (k = 0; k < 200; k++) {
    varargin_1[k] = muDoubleScalarAbs(b[k]);
  }
  if (!muDoubleScalarIsNaN(varargin_1[0])) {
    nb0 = 1;
  } else {
    nb0 = 0;
    k = 2;
    exitg1 = false;
    while ((!exitg1) && (k < 201)) {
      if (!muDoubleScalarIsNaN(varargin_1[k - 1])) {
        nb0 = k;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }
  if (nb0 == 0) {
    nb0 = 1;
  } else {
    diff = varargin_1[nb0 - 1];
    i = nb0 + 1;
    for (k = i; k < 201; k++) {
      d = varargin_1[k - 1];
      if (diff > d) {
        diff = d;
        nb0 = k;
      }
    }
  }
  /* Initialize the Value functions */
  memset(&vp[0], 0, 125000U * sizeof(real_T));
  /* continue repaying */
  memset(&vd[0], 0, 625U * sizeof(real_T));
  memset(&def[0], 0, 125000U * sizeof(boolean_T));
  memset(&vo[0], 0, 625U * sizeof(real_T));
  /* debt policy function (expressed in indices)   */
  for (i = 0; i < 125000; i++) {
    bp[i] = 0.0;
    q[i] = 1.0 / (para->rstar + 1.0);
  }
  /* q is price of debt; it is a function of  (y_t, d_{t+1})  */
  for (k = 0; k < 625; k++) {
    d = muDoubleScalarExp(z[k]) * m[k] * (1.0 - para->phi0);
    x[k] = d;
  }
  st.site = &emlrtRSI;
  power(&st, x, 1.0 - para->sigg, ua);
  for (i = 0; i <= 622; i += 2) {
    r = _mm_loadu_pd(&ua[i]);
    _mm_storeu_pd(&ua[i], _mm_div_pd(_mm_sub_pd(r, _mm_set1_pd(1.0)),
                                     _mm_set1_pd(1.0 - para->sigg)));
  }
  ua[624] = (ua[624] - 1.0) / (1.0 - para->sigg);
  /*  */
  diff = 1.0;
  its = 1;
  st.site = &b_emlrtRSI;
  expl_temp = tic(&st);
  timer_tv_sec = expl_temp.tv_sec;
  timer_tv_nsec = expl_temp.tv_nsec;
  /*  <----- Start the timer */
  while ((diff > 1.0E-7) && (its < 1000)) {
    st.site = &c_emlrtRSI;
    b_st.site = &c_emlrtRSI;
    power(&b_st, m, 1.0 - sigg, x);
    for (i = 0; i < 625; i++) {
      for (ibtile = 0; ibtile <= 622; ibtile += 2) {
        r = _mm_loadu_pd(&x[ibtile]);
        k = ibtile + 625 * i;
        r1 = _mm_loadu_pd(&pdf[k]);
        _mm_storeu_pd(&SD->f0.a[k],
                      _mm_mul_pd(_mm_mul_pd(r, _mm_set1_pd(betta)), r1));
      }
      ibtile = 625 * i + 624;
      SD->f0.a[ibtile] = x[624] * betta * pdf[ibtile];
    }
    b_st.site = &n_emlrtRSI;
    mtimes(SD->f0.a, vp, SD->f0.evp);
    st.site = &d_emlrtRSI;
    b_st.site = &d_emlrtRSI;
    power(&b_st, m, 1.0 - sigg, x);
    for (i = 0; i < 625; i++) {
      for (ibtile = 0; ibtile <= 622; ibtile += 2) {
        r = _mm_loadu_pd(&x[ibtile]);
        k = ibtile + 625 * i;
        r1 = _mm_loadu_pd(&pdf[k]);
        _mm_storeu_pd(&SD->f0.a[k],
                      _mm_mul_pd(_mm_mul_pd(r, _mm_set1_pd(betta)), r1));
      }
      ibtile = 625 * i + 624;
      SD->f0.a[ibtile] = x[624] * betta * pdf[ibtile];
      vo[i] = theta * vo[i] + (1.0 - theta) * vd[i];
    }
    b_st.site = &n_emlrtRSI;
    b_mtimes(SD->f0.a, vo, vd1);
    for (k = 0; k < 625; k++) {
      vd1[k] += ua[k];
      x[k] = muDoubleScalarExp(z[k]);
    }
    for (i = 0; i < 200; i++) {
      for (ibtile = 0; ibtile <= 622; ibtile += 2) {
        k = ibtile + 625 * i;
        r = _mm_loadu_pd(&q[k]);
        r1 = _mm_loadu_pd(&x[ibtile]);
        r2 = _mm_loadu_pd(&m[ibtile]);
        _mm_storeu_pd(&SD->f0.w[k], _mm_add_pd(_mm_mul_pd(_mm_set1_pd(b[i]), r),
                                               _mm_mul_pd(r1, r2)));
      }
      ibtile = 625 * i + 624;
      SD->f0.w[ibtile] = b[i] * q[ibtile] + x[624] * m[624];
    }
    emlrtEnterParallelRegion((emlrtCTX)sp, omp_in_parallel());
    emlrtPushJmpBuf((emlrtCTX)sp, &emlrtJBStack);
    solver_bf_parfor2_numThreads = emlrtAllocRegionTLSs(
        sp->tls, omp_in_parallel(), omp_get_max_threads(), omp_get_num_procs());
#pragma omp parallel num_threads(solver_bf_parfor2_numThreads) private(        \
    ex, c_u, c1, emlrtJBEnviron, f_st, p, ib, b_i, b_p, b_k, r3, idx, d1,      \
    exitg1) firstprivate(d_st, e_st, emlrtHadParallelError)
    {
      if (setjmp(emlrtJBEnviron) == 0) {
        d_st.prev = sp;
        d_st.tls = emlrtAllocTLS((emlrtCTX)sp, omp_get_thread_num());
        d_st.site = NULL;
        emlrtSetJmpBuf(&d_st, &emlrtJBEnviron);
        e_st.prev = &d_st;
        e_st.tls = d_st.tls;
        f_st.prev = &e_st;
        f_st.tls = e_st.tls;
      } else {
        emlrtHadParallelError = true;
      }
#pragma omp for nowait
      for (is = 0; is < 625; is++) {
        if (emlrtHadParallelError) {
          continue;
        }
        if (setjmp(emlrtJBEnviron) == 0) {
          if ((!muDoubleScalarIsNaN(1.0 - sigg)) &&
              (muDoubleScalarFloor(1.0 - sigg) != 1.0 - sigg)) {
            p = true;
          } else {
            p = false;
          }
          for (ib = 0; ib < 200; ib++) {
            for (b_i = 0; b_i < 200; b_i++) {
              c1[b_i] = SD->f0.w[is + 625 * b_i] - b[ib];
            }
            e_st.site = &e_emlrtRSI;
            f_st.site = &i_emlrtRSI;
            if (p) {
              b_p = false;
              for (b_k = 0; b_k < 200; b_k++) {
                if (b_p || (c1[b_k] < 0.0)) {
                  b_p = true;
                }
              }
            } else {
              b_p = false;
            }
            if (b_p) {
              emlrtErrorWithMessageIdR2018a(
                  &f_st, &emlrtRTEI, "Coder:toolbox:power_domainError",
                  "Coder:toolbox:power_domainError", 0);
            }
            for (b_k = 0; b_k < 200; b_k++) {
              c_u[b_k] = muDoubleScalarPower(c1[b_k], 1.0 - sigg);
            }
            for (b_i = 0; b_i <= 198; b_i += 2) {
              r3 = _mm_loadu_pd(&c_u[b_i]);
              _mm_storeu_pd(&c_u[b_i],
                            _mm_div_pd(_mm_sub_pd(r3, _mm_set1_pd(1.0)),
                                       _mm_set1_pd(1.0 - sigg)));
            }
            for (b_i = 0; b_i < 200; b_i++) {
              if (c1[b_i] <= 0.0) {
                c_u[b_i] = rtMinusInf;
              }
              c_u[b_i] += SD->f0.evp[is + 625 * b_i];
            }
            if (!muDoubleScalarIsNaN(c_u[0])) {
              idx = 1;
            } else {
              idx = 0;
              b_k = 2;
              exitg1 = false;
              while ((!exitg1) && (b_k < 201)) {
                if (!muDoubleScalarIsNaN(c_u[b_k - 1])) {
                  idx = b_k;
                  exitg1 = true;
                } else {
                  b_k++;
                }
              }
            }
            if (idx == 0) {
              ex = c_u[0];
              idx = 1;
            } else {
              ex = c_u[idx - 1];
              b_i = idx + 1;
              for (b_k = b_i; b_k < 201; b_k++) {
                d1 = c_u[b_k - 1];
                if (ex < d1) {
                  ex = d1;
                  idx = b_k;
                }
              }
            }
            b_i = is + 625 * ib;
            SD->f0.vp1[b_i] = ex;
            bp[b_i] = idx;
            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b(&d_st);
            }
          }
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(&d_st);
          }
        } else {
          emlrtHadParallelError = true;
        }
      }
    }
    emlrtPopJmpBuf((emlrtCTX)sp, &emlrtJBStack);
    emlrtExitParallelRegion((emlrtCTX)sp, omp_in_parallel());
    for (k = 0; k < 200; k++) {
      ibtile = k * 625;
      memcpy(&SD->f0.evp[ibtile], &vd1[0], 625U * sizeof(real_T));
    }
    for (i = 0; i < 125000; i++) {
      def[i] = (SD->f0.vp1[i] < SD->f0.evp[i]);
    }
    for (i = 0; i < 625; i++) {
      for (ibtile = 0; ibtile < 200; ibtile++) {
        d = 0.0;
        for (k = 0; k < 625; k++) {
          d += pdf[i + 625 * k] * (real_T)def[k + 625 * ibtile];
        }
        SD->f0.evp[i + 625 * ibtile] = (1.0 - d) / (rstar + 1.0);
      }
    }
    for (k = 0; k <= 124998; k += 2) {
      r = _mm_loadu_pd(&SD->f0.evp[k]);
      r1 = _mm_loadu_pd(&q[k]);
      r = _mm_sub_pd(r, r1);
      _mm_storeu_pd(&q[k], r);
      _mm_storeu_pd(&dv[0], r);
      dv1[0] = muDoubleScalarAbs(dv[0]);
      dv1[1] = muDoubleScalarAbs(dv[1]);
      r = _mm_loadu_pd(&dv1[0]);
      _mm_storeu_pd(&SD->f0.w[k], r);
    }
    if (!muDoubleScalarIsNaN(SD->f0.w[0])) {
      ibtile = 1;
    } else {
      ibtile = 0;
      k = 2;
      exitg1 = false;
      while ((!exitg1) && (k < 125001)) {
        if (!muDoubleScalarIsNaN(SD->f0.w[k - 1])) {
          ibtile = k;
          exitg1 = true;
        } else {
          k++;
        }
      }
    }
    if (ibtile == 0) {
      diff = SD->f0.w[0];
    } else {
      diff = SD->f0.w[ibtile - 1];
      i = ibtile + 1;
      for (k = i; k < 125001; k++) {
        d = SD->f0.w[k - 1];
        if (diff < d) {
          diff = d;
        }
      }
    }
    for (k = 0; k <= 124998; k += 2) {
      r = _mm_loadu_pd(&SD->f0.vp1[k]);
      r1 = _mm_loadu_pd(&vp[k]);
      r = _mm_sub_pd(r, r1);
      _mm_storeu_pd(&vp[k], r);
      _mm_storeu_pd(&dv2[0], r);
      dv3[0] = muDoubleScalarAbs(dv2[0]);
      dv3[1] = muDoubleScalarAbs(dv2[1]);
      r = _mm_loadu_pd(&dv3[0]);
      _mm_storeu_pd(&SD->f0.w[k], r);
    }
    if (!muDoubleScalarIsNaN(SD->f0.w[0])) {
      ibtile = 1;
    } else {
      ibtile = 0;
      k = 2;
      exitg1 = false;
      while ((!exitg1) && (k < 125001)) {
        if (!muDoubleScalarIsNaN(SD->f0.w[k - 1])) {
          ibtile = k;
          exitg1 = true;
        } else {
          k++;
        }
      }
    }
    if (ibtile == 0) {
      b_ex = SD->f0.w[0];
    } else {
      b_ex = SD->f0.w[ibtile - 1];
      i = ibtile + 1;
      for (k = i; k < 125001; k++) {
        d = SD->f0.w[k - 1];
        if (b_ex < d) {
          b_ex = d;
        }
      }
    }
    for (k = 0; k <= 622; k += 2) {
      r = _mm_loadu_pd(&vd1[k]);
      r1 = _mm_loadu_pd(&vd[k]);
      r = _mm_sub_pd(r, r1);
      _mm_storeu_pd(&vd[k], r);
      _mm_storeu_pd(&dv4[0], r);
      dv5[0] = muDoubleScalarAbs(dv4[0]);
      dv5[1] = muDoubleScalarAbs(dv4[1]);
      r = _mm_loadu_pd(&dv5[0]);
      _mm_storeu_pd(&x[k], r);
    }
    d = vd[624];
    d = vd1[624] - d;
    vd[624] = d;
    x[624] = muDoubleScalarAbs(d);
    if (!muDoubleScalarIsNaN(x[0])) {
      ibtile = 1;
    } else {
      ibtile = 0;
      k = 2;
      exitg1 = false;
      while ((!exitg1) && (k < 626)) {
        if (!muDoubleScalarIsNaN(x[k - 1])) {
          ibtile = k;
          exitg1 = true;
        } else {
          k++;
        }
      }
    }
    if (ibtile == 0) {
      c_ex = x[0];
    } else {
      c_ex = x[ibtile - 1];
      i = ibtile + 1;
      for (k = i; k < 626; k++) {
        d = x[k - 1];
        if (c_ex < d) {
          c_ex = d;
        }
      }
    }
    diff = (diff + b_ex) + c_ex;
    memcpy(&vo[0], &SD->f0.vp1[nb0 * 625 + -625], 625U * sizeof(real_T));
    memcpy(&vp[0], &SD->f0.vp1[0], 125000U * sizeof(real_T));
    memcpy(&vd[0], &vd1[0], 625U * sizeof(real_T));
    memcpy(&q[0], &SD->f0.evp[0], 125000U * sizeof(real_T));
    if (muDoubleScalarRem(its, 50.0) == 0.0) {
      st.site = &f_emlrtRSI;
      b_st.site = &q_emlrtRSI;
      c_y = NULL;
      b_m = emlrtCreateCharArray(2, &iv2[0]);
      emlrtInitCharArrayR2013a(&b_st, 7, b_m, &u[0]);
      emlrtAssign(&c_y, b_m);
      d_y = NULL;
      b_m = emlrtCreateCharArray(2, &iv3[0]);
      emlrtInitCharArrayR2013a(&b_st, 17, b_m, &d_u[0]);
      emlrtAssign(&d_y, b_m);
      c_st.site = &s_emlrtRSI;
      emlrt_marshallIn(&c_st,
                       feval(&c_st, c_y, emlrt_marshallOut(1.0), d_y,
                             emlrt_marshallOut(its), emlrt_marshallOut(diff),
                             &emlrtMCI),
                       "<output of feval>");
    }
    its++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  st.site = &g_emlrtRSI;
  *totaltime = toc(&st, timer_tv_sec, timer_tv_nsec);
  *avgtime = *totaltime / ((real_T)its - 1.0);
  st.site = &h_emlrtRSI;
  b_st.site = &q_emlrtRSI;
  y = NULL;
  b_m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a(&b_st, 7, b_m, &u[0]);
  emlrtAssign(&y, b_m);
  b_y = NULL;
  b_m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a(&b_st, 42, b_m, &b_u[0]);
  emlrtAssign(&b_y, b_m);
  c_st.site = &s_emlrtRSI;
  emlrt_marshallIn(&c_st,
                   b_feval(&c_st, y, emlrt_marshallOut(1.0), b_y,
                           emlrt_marshallOut((real_T)its - 1.0),
                           emlrt_marshallOut(*totaltime),
                           emlrt_marshallOut(*avgtime), &emlrtMCI),
                   "<output of feval>");
}

/* End of code generation (solver_bf_parfor2.c) */
