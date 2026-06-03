/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * rbc_solver_interp_parfor.c
 *
 * Code generation for function 'rbc_solver_interp_parfor'
 *
 */

/* Include files */
#include "rbc_solver_interp_parfor.h"
#include "brent_min.h"
#include "mtimes.h"
#include "rbc_solver_interp_parfor_data.h"
#include "rbc_solver_interp_parfor_mexutil.h"
#include "rbc_solver_interp_parfor_types.h"
#include "rt_nonfinite.h"
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
    20,                         /* lineNo */
    "rbc_solver_interp_parfor", /* fcnName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_github\\Code stochastGrowth\\rbc_solver_interp_parfor.m" /* pathName
                                                                         */
};

static emlrtRSInfo b_emlrtRSI = {
    25,                         /* lineNo */
    "rbc_solver_interp_parfor", /* fcnName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_github\\Code stochastGrowth\\rbc_solver_interp_parfor.m" /* pathName
                                                                         */
};

static emlrtRSInfo c_emlrtRSI = {
    36,                         /* lineNo */
    "rbc_solver_interp_parfor", /* fcnName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_github\\Code stochastGrowth\\rbc_solver_interp_parfor.m" /* pathName
                                                                         */
};

static emlrtRSInfo d_emlrtRSI = {
    43,                         /* lineNo */
    "rbc_solver_interp_parfor", /* fcnName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_github\\Code stochastGrowth\\rbc_solver_interp_parfor.m" /* pathName
                                                                         */
};

static emlrtRSInfo e_emlrtRSI = {
    47,                         /* lineNo */
    "rbc_solver_interp_parfor", /* fcnName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_github\\Code stochastGrowth\\rbc_solver_interp_parfor.m" /* pathName
                                                                         */
};

static emlrtRSInfo f_emlrtRSI = {
    49,                         /* lineNo */
    "rbc_solver_interp_parfor", /* fcnName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_github\\Code stochastGrowth\\rbc_solver_interp_parfor.m" /* pathName
                                                                         */
};

static emlrtRSInfo g_emlrtRSI = {
    51,                         /* lineNo */
    "rbc_solver_interp_parfor", /* fcnName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_github\\Code stochastGrowth\\rbc_solver_interp_parfor.m" /* pathName
                                                                         */
};

static emlrtRSInfo
    l_emlrtRSI =
        {
            93,                  /* lineNo */
            "eml_mtimes_helper", /* fcnName */
            "D:\\Matlab_2026a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_"
            "helper.m" /* pathName */
};

static emlrtRSInfo bb_emlrtRSI = {
    15,                                                           /* lineNo */
    "max",                                                        /* fcnName */
    "D:\\Matlab_2026a\\toolbox\\eml\\lib\\matlab\\datafun\\max.m" /* pathName */
};

static emlrtRSInfo cb_emlrtRSI = {
    73,         /* lineNo */
    "minOrMax", /* fcnName */
    "D:\\Matlab_2026a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m" /* pathName
                                                                          */
};

static emlrtRSInfo jb_emlrtRSI = {
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

static emlrtRSInfo kb_emlrtRSI = {
    66,        /* lineNo */
    "fprintf", /* fcnName */
    "D:\\Matlab_2026a\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m" /* pathName
                                                                     */
};

/* Function Declarations */
static real_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId);

static real_T emlrt_marshallIn(const emlrtStack *sp,
                               const mxArray *a__output_of_feval_,
                               const char_T *identifier);

static const mxArray *feval(const emlrtStack *sp, const mxArray *m,
                            const mxArray *m1, const mxArray *m2,
                            const mxArray *m3, const mxArray *m4,
                            const mxArray *m5, const mxArray *m6,
                            emlrtMCInfo *location);

static real_T i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                 const emlrtMsgIdentifier *msgId);

/* Function Definitions */
static real_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = i_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
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
                            const mxArray *m5, const mxArray *m6,
                            emlrtMCInfo *location)
{
  const mxArray *pArrays[7];
  const mxArray *m7;
  pArrays[0] = m;
  pArrays[1] = m1;
  pArrays[2] = m2;
  pArrays[3] = m3;
  pArrays[4] = m4;
  pArrays[5] = m5;
  pArrays[6] = m6;
  return emlrtCallMATLABR2012b((emlrtConstCTX)sp, 1, &m7, 7, &pArrays[0],
                               "feval", true, location);
}

static real_T i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                 const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims = 0;
  real_T ret;
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 0U,
                          (const void *)&dims);
  ret = *(real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

real_T c_rbc_solver_interp_parfor_anon(real_T wealth, const real_T k[500],
                                       const real_T ev[100500], real_T iz,
                                       real_T x)
{
  real_T ju;
  real_T varargout_1;
  int32_T varargout_1_tmp;
  int32_T varargout_1_tmp_tmp;
  /* end function */
  /* --------------------------- SUBFUNCTIONS --------------------------------%
   */
  /*  This calls user-written function interp1_scal */
  /*  c1 = wealth-kprime; */
  /*  Fast linear interpolation routine */
  /*  Usage: */
  /*  yi = interp1_scal(x,y,xi) */
  /*  where x and y are column vectors with n elements, xi is a scalar and yi */
  /*  is a scalar */
  /*  Input Arguments */
  /*  x - Sample points */
  /*    column vector */
  /*  Y - Sample data */
  /*    column vector */
  /*  xi - Query point */
  /*    scalar */
  /*  j = 0; */
  /*  for i = 1:n */
  /*      if x(i) <= xi */
  /*          j = j + 1; */
  /*      else */
  /*          break */
  /*      end */
  /*  end */
  /* function jl = locate(xx,x) */
  /*  */
  /*  x is between xx(jl) and xx(jl+1) */
  /*  */
  /*  jl = 0 and jl = n means x is out of range */
  /*  */
  /*  xx is assumed to be monotone increasing */
  if (x < k[0]) {
    varargout_1 = 0.0;
  } else if (x > k[499]) {
    varargout_1 = 500.0;
  } else {
    varargout_1 = 1.0;
    ju = 500.0;
    while (ju - varargout_1 > 1.0) {
      real_T jm;
      jm = muDoubleScalarFloor((ju + varargout_1) / 2.0);
      if (x >= k[(int32_T)jm - 1]) {
        varargout_1 = jm;
      } else {
        ju = jm;
      }
    }
  }
  varargout_1 = muDoubleScalarMax(muDoubleScalarMin(varargout_1, 499.0), 1.0);
  varargout_1_tmp_tmp = (int32_T)varargout_1;
  varargout_1_tmp = varargout_1_tmp_tmp + 500 * ((int32_T)iz - 1);
  varargout_1 = ev[varargout_1_tmp - 1];
  ju = k[varargout_1_tmp_tmp - 1];
  return -(-muDoubleScalarPower(wealth - x, -1.0) +
           (varargout_1 + (x - ju) * ((ev[varargout_1_tmp] - varargout_1) /
                                      (k[varargout_1_tmp_tmp] - ju))));
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

void rbc_solver_interp_parfor(c_rbc_solver_interp_parforStack *SD,
                              const emlrtStack *sp, const real_T c0[100500],
                              const real_T k[500], const real_T pdfz[40401],
                              real_T v[100500], real_T pol_kp[100500])
{
  static const int32_T iv[2] = {1, 7};
  static const int32_T iv1[2] = {1, 31};
  static const char_T b_u[31] = {'%', '8', '.', '0', 'f', ' ',  '~', '%',
                                 '8', '.', '8', 'f', ' ', '~',  '%', '8',
                                 '.', '5', 'f', 's', ' ', '~',  '%', '8',
                                 '.', '5', 'f', 's', ' ', '\\', 'n'};
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
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *m;
  const mxArray *y;
  rbc_solver_interp_parforTLS *c_rbc_solver_interp_parforTLSTh;
  real_T maxval[201];
  real_T dv[2];
  real_T dv1[2];
  real_T diff;
  real_T fval;
  real_T k_max;
  real_T k_min;
  real_T smctime_tv_nsec;
  real_T smctime_tv_sec;
  real_T totaltime;
  real_T varargin_4;
  real_T xf;
  int32_T b_k;
  int32_T c_k;
  int32_T i;
  int32_T idx;
  int32_T ik;
  int32_T its;
  int32_T iz;
  int32_T rbc_solver_interp_parfor_numThreads;
  int32_T workspace_wealth_tmp;
  boolean_T emlrtHadParallelError = false;
  boolean_T exitg1;
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  d_st.prev = &b_st;
  d_st.tls = b_st.tls;
  c_rbc_solver_interp_parforTLSTh = emlrtGetThreadStackData();
  /*  Tolerance for V */
  diff = 1.0;
  its = 1;
  /*  Discount rate */
  k_min = k[0];
  k_max = k[499];
  /*  Value Function */
  /*  v at the previous iteration */
  memset(&v[0], 0, 100500U * sizeof(real_T));
  memset(&pol_kp[0], 0, 100500U * sizeof(real_T));
  st.site = &emlrtRSI;
  expl_temp = tic(&st);
  smctime_tv_sec = expl_temp.tv_sec;
  smctime_tv_nsec = expl_temp.tv_nsec;
  totaltime = 0.0;
  while ((diff > 1.0E-6) && (its < 2000)) {
    st.site = &b_emlrtRSI;
    for (b_k = 0; b_k <= 100498; b_k += 2) {
      r = _mm_loadu_pd(&v[b_k]);
      _mm_storeu_pd(&SD->f0.v0[b_k], _mm_mul_pd(_mm_set1_pd(0.95), r));
    }
    b_st.site = &l_emlrtRSI;
    mtimes(SD->f0.v0, pdfz, SD->f0.ev);
    emlrtEnterParallelRegion((emlrtCTX)sp, omp_in_parallel());
    emlrtPushJmpBuf((emlrtCTX)sp, &emlrtJBStack);
    rbc_solver_interp_parfor_numThreads = emlrtAllocRegionTLSs(
        sp->tls, omp_in_parallel(), omp_get_max_threads(), omp_get_num_procs());
#pragma omp parallel num_threads(rbc_solver_interp_parfor_numThreads) private( \
        c_rbc_solver_interp_parforTLSTh, fval, xf, emlrtJBEnviron, e_st, ik,   \
            workspace_wealth_tmp) firstprivate(c_st, emlrtHadParallelError)
    {
      if (setjmp(emlrtJBEnviron) == 0) {
        c_st.prev = sp;
        c_st.tls = emlrtAllocTLS((emlrtCTX)sp, omp_get_thread_num());
        c_st.site = NULL;
        emlrtSetJmpBuf(&c_st, &emlrtJBEnviron);
        e_st.prev = &c_st;
        e_st.tls = c_st.tls;
        c_rbc_solver_interp_parforTLSTh = emlrtGetThreadStackData();
      } else {
        emlrtHadParallelError = true;
      }
#pragma omp for nowait
      for (iz = 0; iz < 201; iz++) {
        if (emlrtHadParallelError) {
          continue;
        }
        if (setjmp(emlrtJBEnviron) == 0) {
          /*  z today (exogenous state) */
          memcpy(&c_rbc_solver_interp_parforTLSTh->f0.myfun.workspace.k[0],
                 &k[0], 500U * sizeof(real_T));
          memcpy(&c_rbc_solver_interp_parforTLSTh->f0.myfun.workspace.ev[0],
                 &SD->f0.ev[0], 100500U * sizeof(real_T));
          for (ik = 0; ik < 500; ik++) {
            /*  k today (endo state) */
            /*  Impose that k' lies in interval [0,wealth] */
            workspace_wealth_tmp = ik + 500 * iz;
            xf = c0[workspace_wealth_tmp];
            e_st.site = &c_emlrtRSI;
            xf = brent_min(
                &e_st, xf,
                c_rbc_solver_interp_parforTLSTh->f0.myfun.workspace.k,
                c_rbc_solver_interp_parforTLSTh->f0.myfun.workspace.ev,
                (real_T)iz + 1.0, k_min, muDoubleScalarMin(k_max, xf) - 1.0E-8,
                &fval);
            SD->f0.v0[workspace_wealth_tmp] = -fval;
            pol_kp[workspace_wealth_tmp] = xf;
            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b(&c_st);
            }
          }
          /* end ik */
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(&c_st);
          }
        } else {
          emlrtHadParallelError = true;
        }
      }
    }
    emlrtPopJmpBuf((emlrtCTX)sp, &emlrtJBStack);
    emlrtExitParallelRegion((emlrtCTX)sp, omp_in_parallel());
    /* end iz */
    for (b_k = 0; b_k <= 100498; b_k += 2) {
      r = _mm_loadu_pd(&v[b_k]);
      r1 = _mm_loadu_pd(&SD->f0.v0[b_k]);
      r = _mm_sub_pd(r, r1);
      _mm_storeu_pd(&v[b_k], r);
      _mm_storeu_pd(&dv[0], r);
      dv1[0] = muDoubleScalarAbs(dv[0]);
      dv1[1] = muDoubleScalarAbs(dv[1]);
      r = _mm_loadu_pd(&dv1[0]);
      _mm_storeu_pd(&SD->f0.ev[b_k], r);
    }
    for (b_k = 0; b_k < 201; b_k++) {
      maxval[b_k] = SD->f0.ev[500 * b_k];
      for (i = 0; i < 499; i++) {
        varargin_4 = SD->f0.ev[(i + 500 * b_k) + 1];
        if (muDoubleScalarIsNaN(varargin_4)) {
          p = false;
        } else {
          diff = maxval[b_k];
          if (muDoubleScalarIsNaN(diff)) {
            p = true;
          } else {
            p = (diff < varargin_4);
          }
        }
        if (p) {
          maxval[b_k] = varargin_4;
        }
      }
    }
    st.site = &d_emlrtRSI;
    b_st.site = &bb_emlrtRSI;
    d_st.site = &cb_emlrtRSI;
    if (!muDoubleScalarIsNaN(maxval[0])) {
      idx = 1;
    } else {
      idx = 0;
      c_k = 2;
      exitg1 = false;
      while (!exitg1 && (c_k < 202)) {
        if (!muDoubleScalarIsNaN(maxval[c_k - 1])) {
          idx = c_k;
          exitg1 = true;
        } else {
          c_k++;
        }
      }
    }
    if (idx == 0) {
      diff = maxval[0];
    } else {
      diff = maxval[idx - 1];
      for (b_k = idx + 1; b_k < 202; b_k++) {
        varargin_4 = maxval[b_k - 1];
        if (diff < varargin_4) {
          diff = varargin_4;
        }
      }
    }
    /*  Check convergence: */
    memcpy(&v[0], &SD->f0.v0[0], 100500U * sizeof(real_T));
    /*  Update */
    st.site = &e_emlrtRSI;
    totaltime += toc(&st, smctime_tv_sec, smctime_tv_nsec);
    if ((muDoubleScalarRem(its, 50.0) == 0.0) || (diff <= 1.0E-6)) {
      st.site = &f_emlrtRSI;
      varargin_4 = totaltime / (real_T)its;
      b_st.site = &jb_emlrtRSI;
      y = NULL;
      m = emlrtCreateCharArray(2, &iv[0]);
      emlrtInitCharArrayR2013a(&b_st, 7, m, &u[0]);
      emlrtAssign(&y, m);
      b_y = NULL;
      m = emlrtCreateDoubleScalar(1.0);
      emlrtAssign(&b_y, m);
      c_y = NULL;
      m = emlrtCreateCharArray(2, &iv1[0]);
      emlrtInitCharArrayR2013a(&b_st, 31, m, &b_u[0]);
      emlrtAssign(&c_y, m);
      d_y = NULL;
      m = emlrtCreateDoubleScalar(its);
      emlrtAssign(&d_y, m);
      e_y = NULL;
      m = emlrtCreateDoubleScalar(diff);
      emlrtAssign(&e_y, m);
      f_y = NULL;
      m = emlrtCreateDoubleScalar(totaltime);
      emlrtAssign(&f_y, m);
      g_y = NULL;
      m = emlrtCreateDoubleScalar(varargin_4);
      emlrtAssign(&g_y, m);
      d_st.site = &kb_emlrtRSI;
      emlrt_marshallIn(&d_st,
                       feval(&d_st, y, b_y, c_y, d_y, e_y, f_y, g_y, &emlrtMCI),
                       "<output of feval>");
    }
    its++;
    st.site = &g_emlrtRSI;
    expl_temp = tic(&st);
    smctime_tv_sec = expl_temp.tv_sec;
    smctime_tv_nsec = expl_temp.tv_nsec;
    /*  re-start clock */
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  /* end while */
}

/* End of code generation (rbc_solver_interp_parfor.c) */
