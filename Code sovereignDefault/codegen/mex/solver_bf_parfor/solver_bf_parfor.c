/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * solver_bf_parfor.c
 *
 * Code generation for function 'solver_bf_parfor'
 *
 */

/* Include files */
#include "solver_bf_parfor.h"
#include "mtimes.h"
#include "power.h"
#include "rt_nonfinite.h"
#include "solver_bf_parfor_data.h"
#include "solver_bf_parfor_mexutil.h"
#include "solver_bf_parfor_types.h"
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
    23,                 /* lineNo */
    "solver_bf_parfor", /* fcnName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_github\\Code sovereignDefault\\solver_bf_parfor.m" /* pathName */
};

static emlrtRSInfo b_emlrtRSI = {
    30,                 /* lineNo */
    "solver_bf_parfor", /* fcnName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_github\\Code sovereignDefault\\solver_bf_parfor.m" /* pathName */
};

static emlrtRSInfo c_emlrtRSI = {
    34,                 /* lineNo */
    "solver_bf_parfor", /* fcnName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_github\\Code sovereignDefault\\solver_bf_parfor.m" /* pathName */
};

static emlrtRSInfo d_emlrtRSI = {
    36,                 /* lineNo */
    "solver_bf_parfor", /* fcnName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_github\\Code sovereignDefault\\solver_bf_parfor.m" /* pathName */
};

static emlrtRSInfo e_emlrtRSI = {
    63,                 /* lineNo */
    "solver_bf_parfor", /* fcnName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_github\\Code sovereignDefault\\solver_bf_parfor.m" /* pathName */
};

static emlrtRSInfo f_emlrtRSI = {
    70,                 /* lineNo */
    "solver_bf_parfor", /* fcnName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_github\\Code sovereignDefault\\solver_bf_parfor.m" /* pathName */
};

static emlrtRSInfo g_emlrtRSI = {
    73,                 /* lineNo */
    "solver_bf_parfor", /* fcnName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_github\\Code sovereignDefault\\solver_bf_parfor.m" /* pathName */
};

static emlrtRSInfo
    m_emlrtRSI =
        {
            93,                  /* lineNo */
            "eml_mtimes_helper", /* fcnName */
            "D:\\Matlab_2026a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_"
            "helper.m" /* pathName */
};

static emlrtRSInfo p_emlrtRSI = {
    38,        /* lineNo */
    "fprintf", /* fcnName */
    "D:\\Matlab_2026a\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m" /* pathName
                                                                     */
};

static emlrtMCInfo emlrtMCI = {
    66,                                                             /* lineNo */
    18,                                                             /* colNo */
    "fprintf",                                                      /* fName */
    "D:\\Matlab_2026a\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m" /* pName */
};

static emlrtRSInfo r_emlrtRSI = {
    66,        /* lineNo */
    "fprintf", /* fcnName */
    "D:\\Matlab_2026a\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m" /* pathName
                                                                     */
};

/* Function Declarations */
static const mxArray *b_feval(const emlrtStack *sp, const mxArray *m,
                              const mxArray *m1, const mxArray *m2,
                              const mxArray *m3, const mxArray *m4,
                              const mxArray *m5, emlrtMCInfo *location);

static real_T emlrt_marshallIn(const emlrtStack *sp,
                               const mxArray *a__output_of_feval_,
                               const char_T *identifier);

static const mxArray *feval(const emlrtStack *sp, const mxArray *m,
                            const mxArray *m1, const mxArray *m2,
                            const mxArray *m3, const mxArray *m4,
                            emlrtMCInfo *location);

/* Function Definitions */
static const mxArray *b_feval(const emlrtStack *sp, const mxArray *m,
                              const mxArray *m1, const mxArray *m2,
                              const mxArray *m3, const mxArray *m4,
                              const mxArray *m5, emlrtMCInfo *location)
{
  const mxArray *pArrays[6];
  const mxArray *m6;
  pArrays[0] = m;
  pArrays[1] = m1;
  pArrays[2] = m2;
  pArrays[3] = m3;
  pArrays[4] = m4;
  pArrays[5] = m5;
  return emlrtCallMATLABR2012b((emlrtConstCTX)sp, 1, &m6, 6, &pArrays[0],
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

static const mxArray *feval(const emlrtStack *sp, const mxArray *m,
                            const mxArray *m1, const mxArray *m2,
                            const mxArray *m3, const mxArray *m4,
                            emlrtMCInfo *location)
{
  const mxArray *pArrays[5];
  const mxArray *m5;
  pArrays[0] = m;
  pArrays[1] = m1;
  pArrays[2] = m2;
  pArrays[3] = m3;
  pArrays[4] = m4;
  return emlrtCallMATLABR2012b((emlrtConstCTX)sp, 1, &m5, 5, &pArrays[0],
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

void solver_bf_parfor(solver_bf_parforStackData *SD, const emlrtStack *sp,
                      const real_T b[400], const real_T z[625],
                      const real_T m[625], const real_T pdf[390625],
                      const struct0_T *para, real_T q[250000],
                      real_T bp[250000], real_T vp[250000],
                      boolean_T def[250000], real_T *totaltime, real_T *avgtime)
{
  static const int32_T iv[2] = {1, 7};
  static const int32_T iv1[2] = {1, 42};
  static const int32_T iv2[2] = {1, 7};
  static const int32_T iv3[2] = {1, 17};
  static const char_T b_u[42] = {
      '#', ' ', 'i', 't', 's', '%', '4', '.', '0', 'f', ' ', '~', 'T',  'i',
      'm', 'e', ' ', '%', '8', '.', '8', 'f', 's', ' ', '~', 'A', 'v',  'g',
      't', 'i', 'm', 'e', ' ', '%', '8', '.', '8', 'f', 's', ' ', '\\', 'n'};
  static const char_T c_u[17] = {'%', '5', '.', '0', 'f', ' ', '~',  ' ', '%',
                                 '8', '.', '1', '0', 'f', ' ', '\\', 'n'};
  static const char_T u[7] = {'f', 'p', 'r', 'i', 'n', 't', 'f'};
  __m128d r;
  __m128d r1;
  jmp_buf emlrtJBEnviron;
  jmp_buf *volatile emlrtJBStack;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emlrtTimespec expl_temp;
  const mxArray *b_m;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *y;
  real_T b_x[625];
  real_T ua[625];
  real_T vd[625];
  real_T vd1[625];
  real_T vo[625];
  real_T x[625];
  real_T c1[400];
  real_T varargin_1[400];
  real_T dv[2];
  real_T dv1[2];
  real_T dv2[2];
  real_T dv3[2];
  real_T b_ex;
  real_T betta;
  real_T c_ex;
  real_T d;
  real_T d1;
  real_T d2;
  real_T diff;
  real_T ex;
  real_T rstar;
  real_T sigg;
  real_T theta;
  real_T timer_tv_nsec;
  real_T timer_tv_sec;
  int32_T aoffset;
  int32_T b_i;
  int32_T b_k;
  int32_T c_i;
  int32_T coffset;
  int32_T i;
  int32_T i1;
  int32_T ib;
  int32_T ibtile;
  int32_T idx;
  int32_T iindx;
  int32_T is;
  int32_T its;
  int32_T k;
  int32_T nb0;
  int32_T solver_bf_parfor_numThreads;
  int32_T vp1_tmp;
  boolean_T bkj;
  boolean_T emlrtHadParallelError = false;
  boolean_T exitg1;
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
  for (k = 0; k < 400; k++) {
    varargin_1[k] = muDoubleScalarAbs(b[k]);
  }
  if (!muDoubleScalarIsNaN(varargin_1[0])) {
    ibtile = 1;
  } else {
    ibtile = 0;
    coffset = 2;
    exitg1 = false;
    while (!exitg1 && (coffset < 401)) {
      if (!muDoubleScalarIsNaN(varargin_1[coffset - 1])) {
        ibtile = coffset;
        exitg1 = true;
      } else {
        coffset++;
      }
    }
  }
  if (ibtile == 0) {
    nb0 = 1;
  } else {
    diff = varargin_1[ibtile - 1];
    nb0 = ibtile;
    for (k = ibtile + 1; k < 401; k++) {
      d = varargin_1[k - 1];
      if (diff > d) {
        diff = d;
        nb0 = k;
      }
    }
  }
  /* Initialize the Value functions */
  memset(&vp[0], 0, 250000U * sizeof(real_T));
  /* continue repaying */
  memset(&vd[0], 0, 625U * sizeof(real_T));
  memset(&def[0], 0, 250000U * sizeof(boolean_T));
  memset(&vo[0], 0, 625U * sizeof(real_T));
  /* debt policy function (expressed in indices)   */
  diff = para->rstar;
  emlrtEnterParallelRegion((emlrtCTX)sp, omp_in_parallel());
  emlrtPushJmpBuf((emlrtCTX)sp, &emlrtJBStack);
  solver_bf_parfor_numThreads = emlrtAllocRegionTLSs(
      sp->tls, omp_in_parallel(), omp_get_max_threads(), omp_get_num_procs());
#pragma omp parallel for num_threads(solver_bf_parfor_numThreads)

  for (i = 0; i < 250000; i++) {
    bp[i] = 0.0;
    q[i] = 1.0 / (diff + 1.0);
  }
  emlrtPopJmpBuf((emlrtCTX)sp, &emlrtJBStack);
  emlrtExitParallelRegion((emlrtCTX)sp, omp_in_parallel());
  /* q is price of debt; it is a function of  (y_t, d_{t+1})  */
  for (k = 0; k < 625; k++) {
    diff = muDoubleScalarExp(z[k]) * m[k];
    b_x[k] = diff;
    x[k] = diff * (1.0 - para->phi0);
  }
  st.site = &emlrtRSI;
  power(&st, x, 1.0 - para->sigg, ua);
  for (k = 0; k <= 622; k += 2) {
    r = _mm_loadu_pd(&ua[k]);
    _mm_storeu_pd(&ua[k], _mm_div_pd(_mm_sub_pd(r, _mm_set1_pd(1.0)),
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
    for (b_k = 0; b_k < 625; b_k++) {
      for (k = 0; k <= 622; k += 2) {
        r = _mm_loadu_pd(&x[k]);
        coffset = k + 625 * b_k;
        _mm_storeu_pd(&SD->f0.a[coffset],
                      _mm_mul_pd(_mm_mul_pd(r, _mm_set1_pd(betta)),
                                 _mm_loadu_pd(&pdf[coffset])));
      }
      coffset = 625 * b_k + 624;
      SD->f0.a[coffset] = x[624] * betta * pdf[coffset];
    }
    b_st.site = &m_emlrtRSI;
    mtimes(SD->f0.a, vp, SD->f0.evp);
    st.site = &d_emlrtRSI;
    b_st.site = &d_emlrtRSI;
    power(&b_st, m, 1.0 - sigg, x);
    for (b_k = 0; b_k < 625; b_k++) {
      for (k = 0; k <= 622; k += 2) {
        r = _mm_loadu_pd(&x[k]);
        coffset = k + 625 * b_k;
        _mm_storeu_pd(&SD->f0.a[coffset],
                      _mm_mul_pd(_mm_mul_pd(r, _mm_set1_pd(betta)),
                                 _mm_loadu_pd(&pdf[coffset])));
      }
      ibtile = 625 * b_k + 624;
      SD->f0.a[ibtile] = x[624] * betta * pdf[ibtile];
    }
    for (k = 0; k <= 622; k += 2) {
      r = _mm_loadu_pd(&vo[k]);
      r1 = _mm_loadu_pd(&vd[k]);
      _mm_storeu_pd(&vo[k],
                    _mm_add_pd(_mm_mul_pd(_mm_set1_pd(theta), r),
                               _mm_mul_pd(_mm_set1_pd(1.0 - theta), r1)));
    }
    vo[624] = theta * vo[624] + (1.0 - theta) * vd[624];
    b_st.site = &m_emlrtRSI;
    b_mtimes(SD->f0.a, vo, vd1);
    for (k = 0; k <= 622; k += 2) {
      r = _mm_loadu_pd(&ua[k]);
      r1 = _mm_loadu_pd(&vd1[k]);
      _mm_storeu_pd(&vd1[k], _mm_add_pd(r, r1));
    }
    vd1[624] += ua[624];
    for (b_k = 0; b_k < 400; b_k++) {
      d = b[b_k];
      for (k = 0; k <= 622; k += 2) {
        coffset = k + 625 * b_k;
        r = _mm_loadu_pd(&q[coffset]);
        r1 = _mm_loadu_pd(&b_x[k]);
        _mm_storeu_pd(&SD->f0.w[coffset],
                      _mm_add_pd(_mm_mul_pd(_mm_set1_pd(d), r), r1));
      }
      ibtile = 625 * b_k + 624;
      SD->f0.w[ibtile] = d * q[ibtile] + b_x[624];
    }
    emlrtEnterParallelRegion((emlrtCTX)sp, omp_in_parallel());
    emlrtPushJmpBuf((emlrtCTX)sp, &emlrtJBStack);
    solver_bf_parfor_numThreads = emlrtAllocRegionTLSs(
        sp->tls, omp_in_parallel(), omp_get_max_threads(), omp_get_num_procs());
#pragma omp parallel num_threads(solver_bf_parfor_numThreads) private(         \
        ex, c1, d_st, emlrtJBEnviron, ib, c_i, vp1_tmp, d1, d2, idx, iindx,    \
            exitg1) firstprivate(emlrtHadParallelError)
    {
      if (setjmp(emlrtJBEnviron) == 0) {
        d_st.prev = sp;
        d_st.tls = emlrtAllocTLS((emlrtCTX)sp, omp_get_thread_num());
        d_st.site = NULL;
        emlrtSetJmpBuf(&d_st, &emlrtJBEnviron);
      } else {
        emlrtHadParallelError = true;
      }
#pragma omp for nowait
      for (is = 0; is < 625; is++) {
        if (emlrtHadParallelError) {
          continue;
        }
        if (setjmp(emlrtJBEnviron) == 0) {
          for (ib = 0; ib < 400; ib++) {
            ex = b[ib];
            for (c_i = 0; c_i < 400; c_i++) {
              vp1_tmp = is + 625 * c_i;
              d1 = SD->f0.w[vp1_tmp] - ex;
              d2 = 1.0 - 1.0 / d1;
              if (d1 <= 0.0) {
                d2 = rtMinusInf;
              }
              d2 += SD->f0.evp[vp1_tmp];
              c1[c_i] = d2;
            }
            if (!muDoubleScalarIsNaN(c1[0])) {
              idx = 1;
            } else {
              idx = 0;
              vp1_tmp = 2;
              exitg1 = false;
              while (!exitg1 && (vp1_tmp < 401)) {
                if (!muDoubleScalarIsNaN(c1[vp1_tmp - 1])) {
                  idx = vp1_tmp;
                  exitg1 = true;
                } else {
                  vp1_tmp++;
                }
              }
            }
            if (idx == 0) {
              ex = c1[0];
              iindx = 1;
            } else {
              ex = c1[idx - 1];
              iindx = idx;
              for (c_i = idx + 1; c_i < 401; c_i++) {
                d1 = c1[c_i - 1];
                if (ex < d1) {
                  ex = d1;
                  iindx = c_i;
                }
              }
            }
            vp1_tmp = is + 625 * ib;
            SD->f0.vp1[vp1_tmp] = ex;
            bp[vp1_tmp] = iindx;
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
    for (k = 0; k < 400; k++) {
      ibtile = k * 625;
      memcpy(&SD->f0.evp[ibtile], &vd1[0], 625U * sizeof(real_T));
    }
    for (k = 0; k < 250000; k++) {
      def[k] = (SD->f0.vp1[k] < SD->f0.evp[k]);
    }
    for (k = 0; k < 400; k++) {
      coffset = k * 625;
      ibtile = k * 625;
      memset(&SD->f0.evp[coffset], 0, 625U * sizeof(real_T));
      for (b_k = 0; b_k < 625; b_k++) {
        aoffset = b_k * 625;
        bkj = def[ibtile + b_k];
        for (b_i = 0; b_i <= 622; b_i += 2) {
          i1 = coffset + b_i;
          r = _mm_loadu_pd(&SD->f0.evp[i1]);
          _mm_storeu_pd(
              &SD->f0.evp[i1],
              _mm_add_pd(r, _mm_mul_pd(_mm_loadu_pd(&pdf[aoffset + b_i]),
                                       _mm_set1_pd(bkj))));
        }
        SD->f0.evp[coffset + 624] += pdf[aoffset + 624] * (real_T)bkj;
      }
    }
    for (k = 0; k <= 249998; k += 2) {
      r = _mm_loadu_pd(&SD->f0.evp[k]);
      r = _mm_div_pd(_mm_sub_pd(_mm_set1_pd(1.0), r), _mm_set1_pd(rstar + 1.0));
      _mm_storeu_pd(&SD->f0.evp[k], r);
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
      coffset = 2;
      exitg1 = false;
      while (!exitg1 && (coffset < 250001)) {
        if (!muDoubleScalarIsNaN(SD->f0.w[coffset - 1])) {
          ibtile = coffset;
          exitg1 = true;
        } else {
          coffset++;
        }
      }
    }
    if (ibtile == 0) {
      b_ex = SD->f0.w[0];
    } else {
      b_ex = SD->f0.w[ibtile - 1];
      for (k = ibtile + 1; k < 250001; k++) {
        diff = SD->f0.w[k - 1];
        if (b_ex < diff) {
          b_ex = diff;
        }
      }
    }
    for (k = 0; k <= 249998; k += 2) {
      r = _mm_loadu_pd(&SD->f0.vp1[k]);
      r1 = _mm_loadu_pd(&vp[k]);
      r = _mm_sub_pd(r, r1);
      _mm_storeu_pd(&vp[k], r);
      _mm_storeu_pd(&dv2[0], r);
      dv1[0] = muDoubleScalarAbs(dv2[0]);
      dv1[1] = muDoubleScalarAbs(dv2[1]);
      r = _mm_loadu_pd(&dv1[0]);
      _mm_storeu_pd(&SD->f0.w[k], r);
    }
    if (!muDoubleScalarIsNaN(SD->f0.w[0])) {
      ibtile = 1;
    } else {
      ibtile = 0;
      coffset = 2;
      exitg1 = false;
      while (!exitg1 && (coffset < 250001)) {
        if (!muDoubleScalarIsNaN(SD->f0.w[coffset - 1])) {
          ibtile = coffset;
          exitg1 = true;
        } else {
          coffset++;
        }
      }
    }
    if (ibtile == 0) {
      c_ex = SD->f0.w[0];
    } else {
      c_ex = SD->f0.w[ibtile - 1];
      for (k = ibtile + 1; k < 250001; k++) {
        diff = SD->f0.w[k - 1];
        if (c_ex < diff) {
          c_ex = diff;
        }
      }
    }
    for (k = 0; k <= 622; k += 2) {
      r = _mm_loadu_pd(&vd1[k]);
      r1 = _mm_loadu_pd(&vd[k]);
      r = _mm_sub_pd(r, r1);
      _mm_storeu_pd(&vd[k], r);
      _mm_storeu_pd(&dv3[0], r);
      dv1[0] = muDoubleScalarAbs(dv3[0]);
      dv1[1] = muDoubleScalarAbs(dv3[1]);
      r = _mm_loadu_pd(&dv1[0]);
      _mm_storeu_pd(&x[k], r);
    }
    x[624] = muDoubleScalarAbs(vd1[624] - vd[624]);
    if (!muDoubleScalarIsNaN(x[0])) {
      ibtile = 1;
    } else {
      ibtile = 0;
      coffset = 2;
      exitg1 = false;
      while (!exitg1 && (coffset < 626)) {
        if (!muDoubleScalarIsNaN(x[coffset - 1])) {
          ibtile = coffset;
          exitg1 = true;
        } else {
          coffset++;
        }
      }
    }
    if (ibtile == 0) {
      diff = x[0];
    } else {
      diff = x[ibtile - 1];
      for (k = ibtile + 1; k < 626; k++) {
        d = x[k - 1];
        if (diff < d) {
          diff = d;
        }
      }
    }
    diff += b_ex + c_ex;
    memcpy(&vo[0], &SD->f0.vp1[nb0 * 625 + -625], 625U * sizeof(real_T));
    memcpy(&vp[0], &SD->f0.vp1[0], 250000U * sizeof(real_T));
    memcpy(&vd[0], &vd1[0], 625U * sizeof(real_T));
    memcpy(&q[0], &SD->f0.evp[0], 250000U * sizeof(real_T));
    if (muDoubleScalarRem(its, 50.0) == 0.0) {
      st.site = &e_emlrtRSI;
      b_st.site = &p_emlrtRSI;
      c_y = NULL;
      b_m = emlrtCreateCharArray(2, &iv2[0]);
      emlrtInitCharArrayR2013a(&b_st, 7, b_m, &u[0]);
      emlrtAssign(&c_y, b_m);
      d_y = NULL;
      b_m = emlrtCreateCharArray(2, &iv3[0]);
      emlrtInitCharArrayR2013a(&b_st, 17, b_m, &c_u[0]);
      emlrtAssign(&d_y, b_m);
      c_st.site = &r_emlrtRSI;
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
  st.site = &f_emlrtRSI;
  *totaltime = toc(&st, timer_tv_sec, timer_tv_nsec);
  *avgtime = *totaltime / ((real_T)its - 1.0);
  st.site = &g_emlrtRSI;
  b_st.site = &p_emlrtRSI;
  y = NULL;
  b_m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a(&b_st, 7, b_m, &u[0]);
  emlrtAssign(&y, b_m);
  b_y = NULL;
  b_m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a(&b_st, 42, b_m, &b_u[0]);
  emlrtAssign(&b_y, b_m);
  c_st.site = &r_emlrtRSI;
  emlrt_marshallIn(&c_st,
                   b_feval(&c_st, y, emlrt_marshallOut(1.0), b_y,
                           emlrt_marshallOut((real_T)its - 1.0),
                           emlrt_marshallOut(*totaltime),
                           emlrt_marshallOut(*avgtime), &emlrtMCI),
                   "<output of feval>");
}

/* End of code generation (solver_bf_parfor.c) */
