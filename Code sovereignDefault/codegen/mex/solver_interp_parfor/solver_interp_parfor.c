/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * solver_interp_parfor.c
 *
 * Code generation for function 'solver_interp_parfor'
 *
 */

/* Include files */
#include "solver_interp_parfor.h"
#include "brent_min.h"
#include "mtimes.h"
#include "power.h"
#include "rt_nonfinite.h"
#include "solver_interp_parfor_data.h"
#include "solver_interp_parfor_mexutil.h"
#include "solver_interp_parfor_types.h"
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
    28,                     /* lineNo */
    "solver_interp_parfor", /* fcnName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_github\\Code sovereignDefault\\solver_interp_parfor.m" /* pathName
                                                                       */
};

static emlrtRSInfo b_emlrtRSI = {
    36,                     /* lineNo */
    "solver_interp_parfor", /* fcnName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_github\\Code sovereignDefault\\solver_interp_parfor.m" /* pathName
                                                                       */
};

static emlrtRSInfo c_emlrtRSI = {
    40,                     /* lineNo */
    "solver_interp_parfor", /* fcnName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_github\\Code sovereignDefault\\solver_interp_parfor.m" /* pathName
                                                                       */
};

static emlrtRSInfo d_emlrtRSI = {
    42,                     /* lineNo */
    "solver_interp_parfor", /* fcnName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_github\\Code sovereignDefault\\solver_interp_parfor.m" /* pathName
                                                                       */
};

static emlrtRSInfo e_emlrtRSI = {
    50,                     /* lineNo */
    "solver_interp_parfor", /* fcnName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_github\\Code sovereignDefault\\solver_interp_parfor.m" /* pathName
                                                                       */
};

static emlrtRSInfo f_emlrtRSI = {
    75,                     /* lineNo */
    "solver_interp_parfor", /* fcnName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_github\\Code sovereignDefault\\solver_interp_parfor.m" /* pathName
                                                                       */
};

static emlrtRSInfo g_emlrtRSI = {
    86,                     /* lineNo */
    "solver_interp_parfor", /* fcnName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_github\\Code sovereignDefault\\solver_interp_parfor.m" /* pathName
                                                                       */
};

static emlrtRSInfo h_emlrtRSI = {
    92,                     /* lineNo */
    "solver_interp_parfor", /* fcnName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_github\\Code sovereignDefault\\solver_interp_parfor.m" /* pathName
                                                                       */
};

static emlrtRSInfo i_emlrtRSI = {
    94,                     /* lineNo */
    "solver_interp_parfor", /* fcnName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_github\\Code sovereignDefault\\solver_interp_parfor.m" /* pathName
                                                                       */
};

static emlrtRSInfo
    o_emlrtRSI =
        {
            93,                  /* lineNo */
            "eml_mtimes_helper", /* fcnName */
            "D:\\Matlab_2026a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_"
            "helper.m" /* pathName */
};

static emlrtRSInfo bb_emlrtRSI = {
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

static emlrtRSInfo db_emlrtRSI = {
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

void solver_interp_parfor(solver_interp_parforStackData *SD,
                          const emlrtStack *sp, const real_T b[80],
                          const real_T z[625], const real_T m[625],
                          const real_T pdf[390625], const struct0_T *para,
                          real_T q[50000], real_T bp[50000], real_T vp[50000],
                          real_T def[50000], real_T *totaltime, real_T *avgtime)
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
  emlrtStack e_st;
  emlrtStack st;
  emlrtTimespec expl_temp;
  const mxArray *b_m;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *y;
  solver_interp_parforTLS *solver_interp_parforTLSThread;
  real_T b_x[625];
  real_T ua[625];
  real_T vd[625];
  real_T vd1[625];
  real_T vo[625];
  real_T x[625];
  real_T varargin_1[80];
  real_T dv[2];
  real_T dv1[2];
  real_T dv2[2];
  real_T dv3[2];
  real_T b_ex;
  real_T betta;
  real_T bp_u;
  real_T d;
  real_T diff;
  real_T ex;
  real_T fval;
  real_T rstar;
  real_T sigg;
  real_T theta;
  real_T timer_tv_nsec;
  real_T timer_tv_sec;
  real_T xf;
  int32_T a_tmp;
  int32_T b_ib;
  int32_T i;
  int32_T i1;
  int32_T ib;
  int32_T idx;
  int32_T is;
  int32_T its;
  int32_T k;
  int32_T nb0;
  int32_T solver_interp_parfor_numThreads;
  boolean_T emlrtHadParallelError = false;
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  solver_interp_parforTLSThread = emlrtGetThreadStackData();
  theta = para->theta;
  betta = para->betta;
  sigg = para->sigg;
  rstar = para->rstar;
  /*  dpgrid = b'; */
  for (k = 0; k < 80; k++) {
    varargin_1[k] = muDoubleScalarAbs(b[k]);
  }
  if (!muDoubleScalarIsNaN(varargin_1[0])) {
    idx = 1;
  } else {
    idx = 0;
    a_tmp = 2;
    exitg1 = false;
    while (!exitg1 && (a_tmp < 81)) {
      if (!muDoubleScalarIsNaN(varargin_1[a_tmp - 1])) {
        idx = a_tmp;
        exitg1 = true;
      } else {
        a_tmp++;
      }
    }
  }
  if (idx == 0) {
    nb0 = 1;
  } else {
    diff = varargin_1[idx - 1];
    nb0 = idx;
    for (k = idx + 1; k < 81; k++) {
      d = varargin_1[k - 1];
      if (diff > d) {
        diff = d;
        nb0 = k;
      }
    }
  }
  /* Initialize the Value functions */
  memset(&vp[0], 0, 50000U * sizeof(real_T));
  /* continue repaying */
  memset(&vd[0], 0, 625U * sizeof(real_T));
  memset(&def[0], 0, 50000U * sizeof(real_T));
  /*  vgood = vp ; */
  memset(&vo[0], 0, 625U * sizeof(real_T));
  /* debt policy function (expressed in indices)   */
  diff = para->rstar;
  emlrtEnterParallelRegion((emlrtCTX)sp, omp_in_parallel());
  emlrtPushJmpBuf((emlrtCTX)sp, &emlrtJBStack);
  solver_interp_parfor_numThreads = emlrtAllocRegionTLSs(
      sp->tls, omp_in_parallel(), omp_get_max_threads(), omp_get_num_procs());
#pragma omp parallel for num_threads(solver_interp_parfor_numThreads)

  for (i = 0; i < 50000; i++) {
    SD->f0.vp1[i] = 0.0;
    bp[i] = 0.0;
    q[i] = 1.0 / (diff + 1.0);
  }
  emlrtPopJmpBuf((emlrtCTX)sp, &emlrtJBStack);
  emlrtExitParallelRegion((emlrtCTX)sp, omp_in_parallel());
  /* q is price of debt; it is a function of  (y_t, d_{t+1})  */
  /*  u = zeros(1,nb) ; */
  bp_u = b[79];
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
    for (ib = 0; ib < 625; ib++) {
      for (k = 0; k <= 622; k += 2) {
        r = _mm_loadu_pd(&x[k]);
        idx = k + 625 * ib;
        _mm_storeu_pd(&SD->f0.a[idx],
                      _mm_mul_pd(_mm_mul_pd(r, _mm_set1_pd(betta)),
                                 _mm_loadu_pd(&pdf[idx])));
      }
      a_tmp = 625 * ib + 624;
      SD->f0.a[a_tmp] = x[624] * betta * pdf[a_tmp];
    }
    b_st.site = &o_emlrtRSI;
    mtimes(SD->f0.a, vp, SD->f0.evp);
    st.site = &d_emlrtRSI;
    b_st.site = &d_emlrtRSI;
    power(&b_st, m, 1.0 - sigg, x);
    for (ib = 0; ib < 625; ib++) {
      for (k = 0; k <= 622; k += 2) {
        r = _mm_loadu_pd(&x[k]);
        idx = k + 625 * ib;
        _mm_storeu_pd(&SD->f0.a[idx],
                      _mm_mul_pd(_mm_mul_pd(r, _mm_set1_pd(betta)),
                                 _mm_loadu_pd(&pdf[idx])));
      }
      idx = 625 * ib + 624;
      SD->f0.a[idx] = x[624] * betta * pdf[idx];
    }
    for (k = 0; k <= 622; k += 2) {
      r = _mm_loadu_pd(&vo[k]);
      r1 = _mm_loadu_pd(&vd[k]);
      _mm_storeu_pd(&vo[k],
                    _mm_add_pd(_mm_mul_pd(_mm_set1_pd(theta), r),
                               _mm_mul_pd(_mm_set1_pd(1.0 - theta), r1)));
    }
    vo[624] = theta * vo[624] + (1.0 - theta) * vd[624];
    b_st.site = &o_emlrtRSI;
    b_mtimes(SD->f0.a, vo, vd1);
    for (k = 0; k <= 622; k += 2) {
      r = _mm_loadu_pd(&ua[k]);
      r1 = _mm_loadu_pd(&vd1[k]);
      _mm_storeu_pd(&vd1[k], _mm_add_pd(r, r1));
    }
    vd1[624] += ua[624];
    for (ib = 0; ib < 80; ib++) {
      d = b[ib];
      for (k = 0; k <= 622; k += 2) {
        idx = k + 625 * ib;
        r = _mm_loadu_pd(&q[idx]);
        r1 = _mm_loadu_pd(&b_x[k]);
        _mm_storeu_pd(&SD->f0.w[idx],
                      _mm_add_pd(_mm_mul_pd(_mm_set1_pd(d), r), r1));
      }
      idx = 625 * ib + 624;
      SD->f0.w[idx] = d * q[idx] + b_x[624];
    }
    emlrtEnterParallelRegion((emlrtCTX)sp, omp_in_parallel());
    emlrtPushJmpBuf((emlrtCTX)sp, &emlrtJBStack);
    solver_interp_parfor_numThreads = emlrtAllocRegionTLSs(
        sp->tls, omp_in_parallel(), omp_get_max_threads(), omp_get_num_procs());
#pragma omp parallel num_threads(solver_interp_parfor_numThreads) private(     \
        solver_interp_parforTLSThread, fval, xf, emlrtJBEnviron, e_st, b_ib,   \
            i1) firstprivate(d_st, emlrtHadParallelError)
    {
      if (setjmp(emlrtJBEnviron) == 0) {
        d_st.prev = sp;
        d_st.tls = emlrtAllocTLS((emlrtCTX)sp, omp_get_thread_num());
        d_st.site = NULL;
        emlrtSetJmpBuf(&d_st, &emlrtJBEnviron);
        e_st.prev = &d_st;
        e_st.tls = d_st.tls;
        solver_interp_parforTLSThread = emlrtGetThreadStackData();
      } else {
        emlrtHadParallelError = true;
      }
#pragma omp for nowait
      for (is = 0; is < 625; is++) {
        if (emlrtHadParallelError) {
          continue;
        }
        if (setjmp(emlrtJBEnviron) == 0) {
          for (b_ib = 0; b_ib < 80; b_ib++) {
            i1 = is + 625 * b_ib;
            if (def[i1] == 0.0) {
              memcpy(&solver_interp_parforTLSThread->f0.myfun.workspace.w[0],
                     &SD->f0.w[0], 50000U * sizeof(real_T));
              memcpy(&solver_interp_parforTLSThread->f0.myfun.workspace.b[0],
                     &b[0], 80U * sizeof(real_T));
              memcpy(&solver_interp_parforTLSThread->f0.myfun.workspace.evp[0],
                     &SD->f0.evp[0], 50000U * sizeof(real_T));
              e_st.site = &e_emlrtRSI;
              xf = brent_min(
                  &e_st, solver_interp_parforTLSThread->f0.myfun.workspace.w,
                  (real_T)is + 1.0,
                  solver_interp_parforTLSThread->f0.myfun.workspace.b,
                  (real_T)b_ib + 1.0,
                  solver_interp_parforTLSThread->f0.myfun.workspace.evp, bp_u,
                  &fval);
              SD->f0.vp1[i1] = -fval;
              bp[i1] = xf;
            }
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
    for (k = 0; k < 625; k++) {
      for (ib = 0; ib < 80; ib++) {
        idx = k + 625 * ib;
        if (def[idx] == 1.0) {
          SD->f0.vp1[idx] = vd1[k];
          bp[idx] = 0.0;
        } else {
          def[idx] = !(SD->f0.vp1[idx] > vd1[k]);
        }
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtConstCTX)sp);
        }
      }
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)sp);
      }
    }
    /*  def = vp1 <= vd1 ;  */
    st.site = &f_emlrtRSI;
    b_st.site = &o_emlrtRSI;
    mtimes(pdf, def, SD->f0.evp);
    for (k = 0; k <= 49998; k += 2) {
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
      a_tmp = 1;
    } else {
      a_tmp = 0;
      idx = 2;
      exitg1 = false;
      while (!exitg1 && (idx < 50001)) {
        if (!muDoubleScalarIsNaN(SD->f0.w[idx - 1])) {
          a_tmp = idx;
          exitg1 = true;
        } else {
          idx++;
        }
      }
    }
    if (a_tmp == 0) {
      ex = SD->f0.w[0];
    } else {
      ex = SD->f0.w[a_tmp - 1];
      for (k = a_tmp + 1; k < 50001; k++) {
        diff = SD->f0.w[k - 1];
        if (ex < diff) {
          ex = diff;
        }
      }
    }
    for (k = 0; k <= 49998; k += 2) {
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
      a_tmp = 1;
    } else {
      a_tmp = 0;
      idx = 2;
      exitg1 = false;
      while (!exitg1 && (idx < 50001)) {
        if (!muDoubleScalarIsNaN(SD->f0.w[idx - 1])) {
          a_tmp = idx;
          exitg1 = true;
        } else {
          idx++;
        }
      }
    }
    if (a_tmp == 0) {
      b_ex = SD->f0.w[0];
    } else {
      b_ex = SD->f0.w[a_tmp - 1];
      for (k = a_tmp + 1; k < 50001; k++) {
        diff = SD->f0.w[k - 1];
        if (b_ex < diff) {
          b_ex = diff;
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
      a_tmp = 1;
    } else {
      a_tmp = 0;
      idx = 2;
      exitg1 = false;
      while (!exitg1 && (idx < 626)) {
        if (!muDoubleScalarIsNaN(x[idx - 1])) {
          a_tmp = idx;
          exitg1 = true;
        } else {
          idx++;
        }
      }
    }
    if (a_tmp == 0) {
      diff = x[0];
    } else {
      diff = x[a_tmp - 1];
      for (k = a_tmp + 1; k < 626; k++) {
        d = x[k - 1];
        if (diff < d) {
          diff = d;
        }
      }
    }
    diff += ex + b_ex;
    memcpy(&vo[0], &SD->f0.vp1[nb0 * 625 + -625], 625U * sizeof(real_T));
    memcpy(&vp[0], &SD->f0.vp1[0], 50000U * sizeof(real_T));
    memcpy(&vd[0], &vd1[0], 625U * sizeof(real_T));
    memcpy(&q[0], &SD->f0.evp[0], 50000U * sizeof(real_T));
    if (muDoubleScalarRem(its, 30.0) == 0.0) {
      st.site = &g_emlrtRSI;
      b_st.site = &bb_emlrtRSI;
      c_y = NULL;
      b_m = emlrtCreateCharArray(2, &iv2[0]);
      emlrtInitCharArrayR2013a(&b_st, 7, b_m, &u[0]);
      emlrtAssign(&c_y, b_m);
      d_y = NULL;
      b_m = emlrtCreateCharArray(2, &iv3[0]);
      emlrtInitCharArrayR2013a(&b_st, 17, b_m, &c_u[0]);
      emlrtAssign(&d_y, b_m);
      c_st.site = &db_emlrtRSI;
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
  st.site = &h_emlrtRSI;
  *totaltime = toc(&st, timer_tv_sec, timer_tv_nsec);
  *avgtime = *totaltime / ((real_T)its - 1.0);
  st.site = &i_emlrtRSI;
  b_st.site = &bb_emlrtRSI;
  y = NULL;
  b_m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a(&b_st, 7, b_m, &u[0]);
  emlrtAssign(&y, b_m);
  b_y = NULL;
  b_m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a(&b_st, 42, b_m, &b_u[0]);
  emlrtAssign(&b_y, b_m);
  c_st.site = &db_emlrtRSI;
  emlrt_marshallIn(&c_st,
                   b_feval(&c_st, y, emlrt_marshallOut(1.0), b_y,
                           emlrt_marshallOut((real_T)its - 1.0),
                           emlrt_marshallOut(*totaltime),
                           emlrt_marshallOut(*avgtime), &emlrtMCI),
                   "<output of feval>");
}

/* End of code generation (solver_interp_parfor.c) */
