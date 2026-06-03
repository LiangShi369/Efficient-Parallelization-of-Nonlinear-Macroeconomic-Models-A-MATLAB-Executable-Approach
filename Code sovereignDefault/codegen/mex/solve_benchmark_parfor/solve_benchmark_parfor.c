/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * solve_benchmark_parfor.c
 *
 * Code generation for function 'solve_benchmark_parfor'
 *
 */

/* Include files */
#include "solve_benchmark_parfor.h"
#include "mpower.h"
#include "mtimes.h"
#include "repmat.h"
#include "rt_nonfinite.h"
#include "solve_benchmark_parfor_data.h"
#include "solve_benchmark_parfor_mexutil.h"
#include "solve_benchmark_parfor_types.h"
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
    40,                       /* lineNo */
    "solve_benchmark_parfor", /* fcnName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_github\\Code sovereignDefault\\solve_benchmark_parfor.m" /* pathName
                                                                         */
};

static emlrtRSInfo b_emlrtRSI = {
    41,                       /* lineNo */
    "solve_benchmark_parfor", /* fcnName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_github\\Code sovereignDefault\\solve_benchmark_parfor.m" /* pathName
                                                                         */
};

static emlrtRSInfo c_emlrtRSI = {
    45,                       /* lineNo */
    "solve_benchmark_parfor", /* fcnName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_github\\Code sovereignDefault\\solve_benchmark_parfor.m" /* pathName
                                                                         */
};

static emlrtRSInfo d_emlrtRSI = {
    51,                       /* lineNo */
    "solve_benchmark_parfor", /* fcnName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_github\\Code sovereignDefault\\solve_benchmark_parfor.m" /* pathName
                                                                         */
};

static emlrtRSInfo e_emlrtRSI = {
    52,                       /* lineNo */
    "solve_benchmark_parfor", /* fcnName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_github\\Code sovereignDefault\\solve_benchmark_parfor.m" /* pathName
                                                                         */
};

static emlrtRSInfo f_emlrtRSI = {
    62,                       /* lineNo */
    "solve_benchmark_parfor", /* fcnName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_github\\Code sovereignDefault\\solve_benchmark_parfor.m" /* pathName
                                                                         */
};

static emlrtRSInfo i_emlrtRSI = {
    111,                      /* lineNo */
    "solve_benchmark_parfor", /* fcnName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_github\\Code sovereignDefault\\solve_benchmark_parfor.m" /* pathName
                                                                         */
};

static emlrtRSInfo j_emlrtRSI = {
    146,                      /* lineNo */
    "solve_benchmark_parfor", /* fcnName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_github\\Code sovereignDefault\\solve_benchmark_parfor.m" /* pathName
                                                                         */
};

static emlrtRSInfo k_emlrtRSI = {
    150,                      /* lineNo */
    "solve_benchmark_parfor", /* fcnName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_github\\Code sovereignDefault\\solve_benchmark_parfor.m" /* pathName
                                                                         */
};

static emlrtRSInfo l_emlrtRSI = {
    152,                      /* lineNo */
    "solve_benchmark_parfor", /* fcnName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_github\\Code sovereignDefault\\solve_benchmark_parfor.m" /* pathName
                                                                         */
};

static emlrtRSInfo m_emlrtRSI = {
    154,                      /* lineNo */
    "solve_benchmark_parfor", /* fcnName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_github\\Code sovereignDefault\\solve_benchmark_parfor.m" /* pathName
                                                                         */
};

static emlrtRSInfo n_emlrtRSI = {
    162,                      /* lineNo */
    "solve_benchmark_parfor", /* fcnName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_github\\Code sovereignDefault\\solve_benchmark_parfor.m" /* pathName
                                                                         */
};

static emlrtRSInfo o_emlrtRSI = {
    164,                      /* lineNo */
    "solve_benchmark_parfor", /* fcnName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_github\\Code sovereignDefault\\solve_benchmark_parfor.m" /* pathName
                                                                         */
};

static emlrtRSInfo p_emlrtRSI = {
    166,                      /* lineNo */
    "solve_benchmark_parfor", /* fcnName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_github\\Code sovereignDefault\\solve_benchmark_parfor.m" /* pathName
                                                                         */
};

static emlrtRSInfo q_emlrtRSI = {
    184,                      /* lineNo */
    "solve_benchmark_parfor", /* fcnName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_github\\Code sovereignDefault\\solve_benchmark_parfor.m" /* pathName
                                                                         */
};

static emlrtRSInfo
    v_emlrtRSI =
        {
            93,                  /* lineNo */
            "eml_mtimes_helper", /* fcnName */
            "D:\\Matlab_2026a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_"
            "helper.m" /* pathName */
};

static emlrtRSInfo y_emlrtRSI = {
    15,                                                           /* lineNo */
    "max",                                                        /* fcnName */
    "D:\\Matlab_2026a\\toolbox\\eml\\lib\\matlab\\datafun\\max.m" /* pathName */
};

static emlrtRSInfo ab_emlrtRSI = {
    73,         /* lineNo */
    "minOrMax", /* fcnName */
    "D:\\Matlab_2026a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m" /* pathName
                                                                          */
};

static emlrtRSInfo mb_emlrtRSI = {
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

static emlrtBCInfo emlrtBCI = {
    1,                        /* iFirst */
    400,                      /* iLast */
    182,                      /* lineNo */
    50,                       /* colNo */
    "q",                      /* aName */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_github\\Code sovereignDefault\\solve_benchmark_parfor.m", /* pName
                                                                          */
    0 /* checkKind */
};

static emlrtRSInfo nb_emlrtRSI = {
    171,                      /* lineNo */
    "solve_benchmark_parfor", /* fcnName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_github\\Code sovereignDefault\\solve_benchmark_parfor.m" /* pathName
                                                                         */
};

static emlrtRSInfo ob_emlrtRSI = {
    158,                      /* lineNo */
    "solve_benchmark_parfor", /* fcnName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_github\\Code sovereignDefault\\solve_benchmark_parfor.m" /* pathName
                                                                         */
};

static emlrtRSInfo pb_emlrtRSI = {
    66,        /* lineNo */
    "fprintf", /* fcnName */
    "D:\\Matlab_2026a\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m" /* pathName
                                                                     */
};

static emlrtRSInfo qb_emlrtRSI = {
    68,        /* lineNo */
    "fprintf", /* fcnName */
    "D:\\Matlab_2026a\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m" /* pathName
                                                                     */
};

/* Function Declarations */
static real_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId);

static const mxArray *c_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[31]);

static real_T emlrt_marshallIn(const emlrtStack *sp,
                               const mxArray *a__output_of_feval_,
                               const char_T *identifier);

static const mxArray *emlrt_marshallOut(const emlrtStack *sp,
                                        const char_T u[7]);

static const mxArray *feval(const emlrtStack *sp, const mxArray *m,
                            const mxArray *m1, const mxArray *m2,
                            const mxArray *m3, const mxArray *m4,
                            const mxArray *m5, const mxArray *m6,
                            emlrtMCInfo *location);

static real_T k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                 const emlrtMsgIdentifier *msgId);

/* Function Definitions */
static real_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = k_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static const mxArray *c_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[31])
{
  static const int32_T iv[2] = {1, 31};
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 31, m, &u[0]);
  emlrtAssign(&y, m);
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

static const mxArray *emlrt_marshallOut(const emlrtStack *sp, const char_T u[7])
{
  static const int32_T iv[2] = {1, 7};
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 7, m, &u[0]);
  emlrtAssign(&y, m);
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

static real_T k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
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

void solve_benchmark_parfor(solve_benchmark_parforStackData *SD,
                            const emlrtStack *sp, const real_T z[625],
                            const real_T m[625], const real_T b[400],
                            const real_T pdf[390625], const real_T para[8],
                            real_T vp[250000], real_T vd[625], real_T q[250000],
                            real_T bp[250000], real_T bpr[625],
                            boolean_T b_default[250000], real_T rr[250000],
                            real_T *totaltime, real_T *avgtime)
{
  static const char_T cv1[31] = {'%', '8', '.', '0', 'f', ' ',  '~', '%',
                                 '8', '.', '8', 'f', ' ', '~',  '%', '8',
                                 '.', '5', 'f', 's', ' ', '~',  '%', '8',
                                 '.', '5', 'f', 's', ' ', '\\', 'n'};
  static const char_T b_cv[7] = {'f', 'p', 'r', 'i', 'n', 't', 'f'};
  __m128d r;
  __m128d r1;
  __m128d r2;
  jmp_buf emlrtJBEnviron;
  jmp_buf *volatile emlrtJBStack;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  emlrtStack j_st;
  emlrtStack st;
  emlrtTimespec expl_temp;
  real_T Gamma[625];
  real_T probDcre[625];
  real_T probVp[625];
  real_T vaut[625];
  real_T W[400];
  real_T maxval[400];
  real_T dv[2];
  real_T dv1[2];
  real_T dv2[2];
  real_T dv3[2];
  real_T dv4[2];
  real_T Dsov;
  real_T WW1;
  real_T alfa;
  real_T b_ex;
  real_T betta;
  real_T c_ex;
  real_T cv_bp;
  real_T cv_bpr;
  real_T d;
  real_T d1;
  real_T d2;
  real_T d3;
  real_T d4;
  real_T dist;
  real_T ex;
  real_T maxWW;
  real_T probDcre_is;
  real_T probVp_is;
  real_T sigg_bp;
  real_T sigg_bpr;
  real_T sigg_defp;
  real_T smctime_tv_nsec;
  real_T smctime_tv_sec;
  real_T sumExp;
  real_T sumExpQ;
  real_T temp;
  real_T theExp;
  int32_T Dsov_tmp;
  int32_T b_Dsov_tmp;
  int32_T b_i;
  int32_T b_ib;
  int32_T b_idx;
  int32_T b_is;
  int32_T c_i;
  int32_T c_ib;
  int32_T c_is;
  int32_T d_ib;
  int32_T d_is;
  int32_T evp_tmp_tmp;
  int32_T i;
  int32_T ib;
  int32_T idx;
  int32_T iindx;
  int32_T is;
  int32_T its;
  int32_T k;
  int32_T maxIdx;
  int32_T probDcre_is_tmp;
  int32_T solve_benchmark_parfor_numThreads;
  int32_T vpnew_tmp;
  boolean_T emlrtHadParallelError = false;
  boolean_T exitg1;
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  d_st.prev = &st;
  d_st.tls = st.tls;
  h_st.prev = &d_st;
  h_st.tls = d_st.tls;
  i_st.prev = &d_st;
  i_st.tls = d_st.tls;
  /*  para = [alfa, betta, phi1, phi2, sigg_bp, sigg_bpr, sigg_defp ] ; */
  alfa = para[0];
  betta = para[1];
  sigg_bp = para[5];
  sigg_bpr = para[6];
  sigg_defp = para[7];
  /* 0.03, long-term bond, coupon rate */
  /* long-term bond, average maturity */
  memset(&vp[0], 0, 250000U * sizeof(real_T));
  memset(&vd[0], 0, 625U * sizeof(real_T));
  /* debt policy function (expressed in indices)   */
  /*  debt policy (index) when decided renegotiate (right after every default)
   */
  /* q is price of debt; it is a function of  (y_t, d_{t+1})  */
  for (k = 0; k < 250000; k++) {
    SD->f0.V[k] = 0.0;
    SD->f0.vpnew[k] = 0.0;
    bp[k] = 0.0;
    q[k] = 0.9615384615384615;
    rr[k] = 0.4807692307692307;
  }
  /*  pdf = sparse(pdf_joint) ; */
  dist = para[2];
  for (k = 0; k < 625; k++) {
    bpr[k] = -(1.0 / (muDoubleScalarExp(z[k]) * m[k] * (1.0 - dist)) - 1.0);
  }
  /*  to incorporate taste shocks */
  st.site = &emlrtRSI;
  cv_bp = para[5] * -34.538776394910684;
  /*  critical value */
  st.site = &b_emlrtRSI;
  cv_bpr = para[6] * -34.538776394910684;
  /*  critical value */
  st.site = &c_emlrtRSI;
  expl_temp = tic(&st);
  smctime_tv_sec = expl_temp.tv_sec;
  smctime_tv_nsec = expl_temp.tv_nsec;
  *totaltime = 0.0;
  *avgtime = 0.0;
  dist = 1.0;
  memset(&vaut[0], 0, 625U * sizeof(real_T));
  while (dist > 1.0E-8) {
    st.site = &d_emlrtRSI;
    for (k = 0; k <= 622; k += 2) {
      _mm_storeu_pd(&Gamma[k],
                    _mm_div_pd(_mm_set1_pd(1.0), _mm_loadu_pd(&m[k])));
    }
    Gamma[624] = 1.0 / m[624];
    for (i = 0; i < 625; i++) {
      for (k = 0; k <= 622; k += 2) {
        r = _mm_loadu_pd(&Gamma[k]);
        evp_tmp_tmp = k + 625 * i;
        _mm_storeu_pd(&SD->f0.evp_tmp[evp_tmp_tmp],
                      _mm_mul_pd(_mm_mul_pd(r, _mm_loadu_pd(&pdf[evp_tmp_tmp])),
                                 _mm_set1_pd(betta)));
      }
      evp_tmp_tmp = 625 * i + 624;
      SD->f0.evp_tmp[evp_tmp_tmp] = Gamma[624] * pdf[evp_tmp_tmp] * betta;
    }
    d_st.site = &v_emlrtRSI;
    mtimes(SD->f0.evp_tmp, vaut, Gamma);
    for (k = 0; k <= 622; k += 2) {
      r = _mm_loadu_pd(&bpr[k]);
      r1 = _mm_loadu_pd(&Gamma[k]);
      _mm_storeu_pd(&Gamma[k], _mm_add_pd(r, r1));
    }
    Gamma[624] += bpr[624];
    st.site = &e_emlrtRSI;
    for (k = 0; k <= 622; k += 2) {
      r = _mm_loadu_pd(&Gamma[k]);
      r1 = _mm_loadu_pd(&vaut[k]);
      r = _mm_sub_pd(r, r1);
      _mm_storeu_pd(&vaut[k], r);
      _mm_storeu_pd(&dv[0], r);
      dv1[0] = muDoubleScalarAbs(dv[0]);
      dv1[1] = muDoubleScalarAbs(dv[1]);
      r = _mm_loadu_pd(&dv1[0]);
      _mm_storeu_pd(&probVp[k], r);
    }
    probVp[624] = muDoubleScalarAbs(Gamma[624] - vaut[624]);
    d_st.site = &y_emlrtRSI;
    h_st.site = &ab_emlrtRSI;
    if (!muDoubleScalarIsNaN(probVp[0])) {
      idx = 1;
    } else {
      idx = 0;
      evp_tmp_tmp = 2;
      exitg1 = false;
      while (!exitg1 && (evp_tmp_tmp < 626)) {
        if (!muDoubleScalarIsNaN(probVp[evp_tmp_tmp - 1])) {
          idx = evp_tmp_tmp;
          exitg1 = true;
        } else {
          evp_tmp_tmp++;
        }
      }
    }
    if (idx == 0) {
      dist = probVp[0];
    } else {
      dist = probVp[idx - 1];
      for (k = idx + 1; k < 626; k++) {
        d2 = probVp[k - 1];
        if (dist < d2) {
          dist = d2;
        }
      }
    }
    memcpy(&vaut[0], &Gamma[0], 625U * sizeof(real_T));
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  /*   the main VFI */
  dist = 1.0;
  its = 1;
  while ((dist > 1.0E-7) && (its < 2000)) {
    for (k = 0; k <= 622; k += 2) {
      _mm_storeu_pd(&Gamma[k],
                    _mm_div_pd(_mm_set1_pd(1.0), _mm_loadu_pd(&m[k])));
    }
    Gamma[624] = 1.0 / m[624];
    for (i = 0; i < 625; i++) {
      for (k = 0; k <= 622; k += 2) {
        r = _mm_loadu_pd(&Gamma[k]);
        evp_tmp_tmp = k + 625 * i;
        _mm_storeu_pd(&SD->f0.evp_tmp[evp_tmp_tmp],
                      _mm_mul_pd(_mm_mul_pd(r, _mm_set1_pd(betta)),
                                 _mm_loadu_pd(&pdf[evp_tmp_tmp])));
      }
      evp_tmp_tmp = 625 * i + 624;
      SD->f0.evp_tmp[evp_tmp_tmp] = Gamma[624] * betta * pdf[evp_tmp_tmp];
    }
    st.site = &f_emlrtRSI;
    d_st.site = &v_emlrtRSI;
    b_mtimes(SD->f0.evp_tmp, SD->f0.V, SD->f0.evp);
    emlrtEnterParallelRegion((emlrtCTX)sp, omp_in_parallel());
    emlrtPushJmpBuf((emlrtCTX)sp, &emlrtJBStack);
    solve_benchmark_parfor_numThreads = emlrtAllocRegionTLSs(
        sp->tls, omp_in_parallel(), omp_get_max_threads(), omp_get_num_procs());
#pragma omp parallel num_threads(solve_benchmark_parfor_numThreads) private(   \
        theExp, temp, sumExpQ, sumExp, ex, W, e_st, c_ib, c_i, vpnew_tmp,      \
            b_idx, iindx, exitg1, emlrtJBEnviron)                              \
    firstprivate(emlrtHadParallelError)
    {
      if (setjmp(emlrtJBEnviron) == 0) {
        e_st.prev = sp;
        e_st.tls = emlrtAllocTLS((emlrtCTX)sp, omp_get_thread_num());
        e_st.site = NULL;
        emlrtSetJmpBuf(&e_st, &emlrtJBEnviron);
      } else {
        emlrtHadParallelError = true;
      }
#pragma omp for nowait
      for (b_is = 0; b_is < 625; b_is++) {
        if (emlrtHadParallelError) {
          continue;
        }
        if (setjmp(emlrtJBEnviron) == 0) {
          /*  change the loop to y first d second */
          for (c_ib = 0; c_ib < 400; c_ib++) {
            for (c_i = 0; c_i < 400; c_i++) {
              vpnew_tmp = b_is + 625 * c_i;
              sumExpQ = q[vpnew_tmp];
              if (sumExpQ >= 0.45) {
                ex = m[b_is];
                sumExpQ = (muDoubleScalarExp(z[b_is]) * ex - 0.1993 * b[c_ib]) +
                          sumExpQ * (b[c_i] * ex - 0.85 * b[c_ib]);
                if (sumExpQ <= 0.0) {
                  W[c_i] = rtMinusInf;
                } else {
                  W[c_i] = (1.0 - 1.0 / sumExpQ) + SD->f0.evp[vpnew_tmp];
                }
              } else {
                W[c_i] = rtMinusInf;
              }
              if (*emlrtBreakCheckR2012bFlagVar != 0) {
                emlrtBreakCheckR2012b(&e_st);
              }
            }
            if (!muDoubleScalarIsNaN(W[0])) {
              b_idx = 1;
            } else {
              b_idx = 0;
              vpnew_tmp = 2;
              exitg1 = false;
              while (!exitg1 && (vpnew_tmp < 401)) {
                if (!muDoubleScalarIsNaN(W[vpnew_tmp - 1])) {
                  b_idx = vpnew_tmp;
                  exitg1 = true;
                } else {
                  vpnew_tmp++;
                }
              }
            }
            if (b_idx == 0) {
              ex = W[0];
              iindx = 1;
            } else {
              ex = W[b_idx - 1];
              iindx = b_idx;
              for (c_i = b_idx + 1; c_i < 401; c_i++) {
                sumExpQ = W[c_i - 1];
                if (ex < sumExpQ) {
                  ex = sumExpQ;
                  iindx = c_i;
                }
              }
            }
            vpnew_tmp = b_is + 625 * c_ib;
            SD->f0.vpnew[vpnew_tmp] = ex;
            bp[vpnew_tmp] = iindx;
            sumExp = 0.0;
            sumExpQ = 0.0;
            for (c_i = 0; c_i < 400; c_i++) {
              temp = (W[c_i] - ex) - cv_bp;
              if (temp > 0.0) {
                theExp = muDoubleScalarExp((temp + cv_bp) / sigg_bp);
                /*  Compute theExp */
                sumExp += theExp;
                /*  Accumulate theExp */
                sumExpQ += theExp * q[b_is + 625 * c_i];
                /*  Accumulate theExpQ */
              }
              if (*emlrtBreakCheckR2012bFlagVar != 0) {
                emlrtBreakCheckR2012b(&e_st);
              }
            }
            SD->f0.qnew[vpnew_tmp] = 0.85 * (sumExpQ / sumExp + 0.058) + 0.15;
            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b(&e_st);
            }
          }
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(&e_st);
          }
        } else {
          emlrtHadParallelError = true;
        }
      }
    }
    emlrtPopJmpBuf((emlrtCTX)sp, &emlrtJBStack);
    emlrtExitParallelRegion((emlrtCTX)sp, omp_in_parallel());
    emlrtEnterParallelRegion((emlrtCTX)sp, omp_in_parallel());
    emlrtPushJmpBuf((emlrtCTX)sp, &emlrtJBStack);
    solve_benchmark_parfor_numThreads = emlrtAllocRegionTLSs(
        sp->tls, omp_in_parallel(), omp_get_max_threads(), omp_get_num_procs());
#pragma omp parallel num_threads(solve_benchmark_parfor_numThreads) private(   \
        Dsov, maxWW, j_st, d1, b_ib, b_Dsov_tmp, d3, emlrtJBEnviron)           \
    firstprivate(f_st, emlrtHadParallelError)
    {
      if (setjmp(emlrtJBEnviron) == 0) {
        f_st.prev = sp;
        f_st.tls = emlrtAllocTLS((emlrtCTX)sp, omp_get_thread_num());
        f_st.site = NULL;
        emlrtSetJmpBuf(&f_st, &emlrtJBEnviron);
        j_st.prev = &f_st;
        j_st.tls = f_st.tls;
      } else {
        emlrtHadParallelError = true;
      }
#pragma omp for nowait
      for (c_is = 0; c_is < 625; c_is++) {
        if (emlrtHadParallelError) {
          continue;
        }
        if (setjmp(emlrtJBEnviron) == 0) {
          maxWW = rtMinusInf;
          /*  To store the maximum value of WW */
          d1 = vaut[c_is];
          for (b_ib = 0; b_ib < 400; b_ib++) {
            b_Dsov_tmp = c_is + 625 * b_ib;
            Dsov = muDoubleScalarMax(0.0, SD->f0.vpnew[b_Dsov_tmp] - d1);
            d3 = (0.85 *
                      (q[c_is + 625 * ((int32_T)bp[b_Dsov_tmp] - 1)] + 0.058) +
                  0.15) *
                 b[b_ib];
            SD->f0.evp[b_Dsov_tmp] = d3;
            j_st.site = &i_emlrtRSI;
            d3 = mpower(&j_st, Dsov, alfa) * mpower(&j_st, d3, 1.0 - alfa);
            SD->f0.V[b_ib + 400 * c_is] = d3;
            if (d3 > maxWW) {
              maxWW = d3;
              /*  Update maximum value */
            }
            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b(&f_st);
            }
          }
          Gamma[c_is] = maxWW;
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(&f_st);
          }
        } else {
          emlrtHadParallelError = true;
        }
      }
    }
    emlrtPopJmpBuf((emlrtCTX)sp, &emlrtJBStack);
    emlrtExitParallelRegion((emlrtCTX)sp, omp_in_parallel());
    emlrtEnterParallelRegion((emlrtCTX)sp, omp_in_parallel());
    emlrtPushJmpBuf((emlrtCTX)sp, &emlrtJBStack);
    solve_benchmark_parfor_numThreads = emlrtAllocRegionTLSs(
        sp->tls, omp_in_parallel(), omp_get_max_threads(), omp_get_num_procs());
#pragma omp parallel num_threads(solve_benchmark_parfor_numThreads) private(   \
        theExp, temp, probVp_is, probDcre_is, sumExp, g_st, d4, d_ib,          \
            probDcre_is_tmp, emlrtJBEnviron)                                   \
    firstprivate(emlrtHadParallelError)
    {
      if (setjmp(emlrtJBEnviron) == 0) {
        g_st.prev = sp;
        g_st.tls = emlrtAllocTLS((emlrtCTX)sp, omp_get_thread_num());
        g_st.site = NULL;
        emlrtSetJmpBuf(&g_st, &emlrtJBEnviron);
      } else {
        emlrtHadParallelError = true;
      }
#pragma omp for nowait
      for (d_is = 0; d_is < 625; d_is++) {
        if (emlrtHadParallelError) {
          continue;
        }
        if (setjmp(emlrtJBEnviron) == 0) {
          sumExp = 0.0;
          probDcre_is = 0.0;
          probVp_is = 0.0;
          d4 = Gamma[d_is];
          for (d_ib = 0; d_ib < 400; d_ib++) {
            temp = (SD->f0.V[d_ib + 400 * d_is] - d4) - cv_bpr;
            if (temp > 0.0) {
              theExp = muDoubleScalarExp((temp + cv_bpr) / sigg_bpr);
              sumExp += theExp;
              /*  Accumulate sums directly */
              probDcre_is_tmp = d_is + 625 * d_ib;
              probDcre_is += theExp * SD->f0.evp[probDcre_is_tmp];
              probVp_is += theExp * SD->f0.vpnew[probDcre_is_tmp];
            }
            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b(&g_st);
            }
          }
          if (sumExp > 0.0) {
            probDcre[d_is] = probDcre_is / sumExp;
            probVp[d_is] = probVp_is / sumExp;
          } else {
            probDcre[d_is] = 0.0;
            probVp[d_is] = 0.0;
          }
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(&g_st);
          }
        } else {
          emlrtHadParallelError = true;
        }
      }
    }
    emlrtPopJmpBuf((emlrtCTX)sp, &emlrtJBStack);
    emlrtExitParallelRegion((emlrtCTX)sp, omp_in_parallel());
    st.site = &j_emlrtRSI;
    for (k = 0; k <= 622; k += 2) {
      r = _mm_loadu_pd(&probVp[k]);
      r1 = _mm_loadu_pd(&vd[k]);
      _mm_storeu_pd(&probVp[k], _mm_add_pd(_mm_mul_pd(_mm_set1_pd(0.154), r),
                                           _mm_mul_pd(_mm_set1_pd(0.846), r1)));
    }
    probVp[624] = 0.154 * probVp[624] + 0.846 * vd[624];
    d_st.site = &v_emlrtRSI;
    mtimes(SD->f0.evp_tmp, probVp, Gamma);
    for (k = 0; k <= 622; k += 2) {
      r = _mm_loadu_pd(&bpr[k]);
      r1 = _mm_loadu_pd(&Gamma[k]);
      _mm_storeu_pd(&Gamma[k], _mm_add_pd(r, r1));
    }
    Gamma[624] += bpr[624];
    for (i = 0; i < 400; i++) {
      for (k = 0; k <= 622; k += 2) {
        evp_tmp_tmp = k + 625 * i;
        r = _mm_loadu_pd(&SD->f0.vpnew[evp_tmp_tmp]);
        r1 = _mm_loadu_pd(&Gamma[k]);
        _mm_storeu_pd(&SD->f0.evp[evp_tmp_tmp],
                      _mm_div_pd(_mm_sub_pd(r, r1), _mm_set1_pd(sigg_defp)));
      }
      evp_tmp_tmp = 625 * i + 624;
      SD->f0.evp[evp_tmp_tmp] =
          (SD->f0.vpnew[evp_tmp_tmp] - Gamma[624]) / sigg_defp;
    }
    for (k = 0; k < 250000; k++) {
      SD->f0.evp[k] = 1.0 / (muDoubleScalarExp(SD->f0.evp[k]) + 1.0);
    }
    for (k = 0; k <= 622; k += 2) {
      r = _mm_loadu_pd(&probDcre[k]);
      _mm_storeu_pd(&probDcre[k], _mm_mul_pd(_mm_set1_pd(0.154), r));
    }
    probDcre[624] *= 0.154;
    st.site = &k_emlrtRSI;
    for (i = 0; i < 400; i++) {
      dist = b[i];
      for (k = 0; k <= 622; k += 2) {
        evp_tmp_tmp = k + 625 * i;
        r = _mm_loadu_pd(&rr[evp_tmp_tmp]);
        r1 = _mm_loadu_pd(&probDcre[k]);
        _mm_storeu_pd(&SD->f0.V[evp_tmp_tmp],
                      _mm_add_pd(_mm_mul_pd(_mm_set1_pd(0.846), r),
                                 _mm_div_pd(r1, _mm_set1_pd(dist))));
      }
      evp_tmp_tmp = 625 * i + 624;
      SD->f0.V[evp_tmp_tmp] = 0.846 * rr[evp_tmp_tmp] + probDcre[624] / dist;
    }
    d_st.site = &v_emlrtRSI;
    b_mtimes(pdf, SD->f0.V, rr);
    for (k = 0; k <= 249998; k += 2) {
      r = _mm_loadu_pd(&rr[k]);
      _mm_storeu_pd(&rr[k], _mm_div_pd(r, _mm_set1_pd(1.04)));
    }
    st.site = &l_emlrtRSI;
    for (k = 0; k <= 249998; k += 2) {
      r = _mm_loadu_pd(&SD->f0.evp[k]);
      r1 = _mm_loadu_pd(&rr[k]);
      r2 = _mm_loadu_pd(&SD->f0.qnew[k]);
      _mm_storeu_pd(
          &SD->f0.evp[k],
          _mm_add_pd(_mm_mul_pd(r, r1),
                     _mm_mul_pd(_mm_sub_pd(_mm_set1_pd(1.0), r), r2)));
    }
    d_st.site = &v_emlrtRSI;
    b_mtimes(pdf, SD->f0.evp, SD->f0.qnew);
    for (k = 0; k <= 249998; k += 2) {
      r = _mm_loadu_pd(&SD->f0.qnew[k]);
      r = _mm_div_pd(r, _mm_set1_pd(1.04));
      _mm_storeu_pd(&SD->f0.qnew[k], r);
      r1 = _mm_loadu_pd(&q[k]);
      r = _mm_sub_pd(r, r1);
      _mm_storeu_pd(&q[k], r);
      _mm_storeu_pd(&dv2[0], r);
      dv[0] = muDoubleScalarAbs(dv2[0]);
      dv[1] = muDoubleScalarAbs(dv2[1]);
      r = _mm_loadu_pd(&dv[0]);
      _mm_storeu_pd(&SD->f0.evp[k], r);
    }
    for (k = 0; k < 400; k++) {
      dist = SD->f0.evp[625 * k];
      for (i = 0; i < 624; i++) {
        d2 = SD->f0.evp[(i + 625 * k) + 1];
        if (muDoubleScalarIsNaN(d2)) {
          p = false;
        } else if (muDoubleScalarIsNaN(dist)) {
          p = true;
        } else {
          p = (dist < d2);
        }
        if (p) {
          dist = d2;
        }
      }
      maxval[k] = dist;
    }
    st.site = &m_emlrtRSI;
    d_st.site = &y_emlrtRSI;
    h_st.site = &ab_emlrtRSI;
    if (!muDoubleScalarIsNaN(maxval[0])) {
      idx = 1;
    } else {
      idx = 0;
      evp_tmp_tmp = 2;
      exitg1 = false;
      while (!exitg1 && (evp_tmp_tmp < 401)) {
        if (!muDoubleScalarIsNaN(maxval[evp_tmp_tmp - 1])) {
          idx = evp_tmp_tmp;
          exitg1 = true;
        } else {
          evp_tmp_tmp++;
        }
      }
    }
    if (idx == 0) {
      b_ex = maxval[0];
    } else {
      b_ex = maxval[idx - 1];
      for (k = idx + 1; k < 401; k++) {
        dist = maxval[k - 1];
        if (b_ex < dist) {
          b_ex = dist;
        }
      }
    }
    st.site = &m_emlrtRSI;
    for (k = 0; k <= 249998; k += 2) {
      r = _mm_loadu_pd(&SD->f0.vpnew[k]);
      r1 = _mm_loadu_pd(&vp[k]);
      r = _mm_sub_pd(r, r1);
      _mm_storeu_pd(&vp[k], r);
      _mm_storeu_pd(&dv3[0], r);
      dv[0] = muDoubleScalarAbs(dv3[0]);
      dv[1] = muDoubleScalarAbs(dv3[1]);
      r = _mm_loadu_pd(&dv[0]);
      _mm_storeu_pd(&SD->f0.evp[k], r);
    }
    d_st.site = &y_emlrtRSI;
    h_st.site = &ab_emlrtRSI;
    if (!muDoubleScalarIsNaN(SD->f0.evp[0])) {
      idx = 1;
    } else {
      idx = 0;
      evp_tmp_tmp = 2;
      exitg1 = false;
      while (!exitg1 && (evp_tmp_tmp < 250001)) {
        if (!muDoubleScalarIsNaN(SD->f0.evp[evp_tmp_tmp - 1])) {
          idx = evp_tmp_tmp;
          exitg1 = true;
        } else {
          evp_tmp_tmp++;
        }
      }
    }
    if (idx == 0) {
      c_ex = SD->f0.evp[0];
    } else {
      c_ex = SD->f0.evp[idx - 1];
      for (k = idx + 1; k < 250001; k++) {
        dist = SD->f0.evp[k - 1];
        if (c_ex < dist) {
          c_ex = dist;
        }
      }
    }
    st.site = &m_emlrtRSI;
    for (k = 0; k <= 622; k += 2) {
      r = _mm_loadu_pd(&Gamma[k]);
      r1 = _mm_loadu_pd(&vd[k]);
      r = _mm_sub_pd(r, r1);
      _mm_storeu_pd(&vd[k], r);
      _mm_storeu_pd(&dv4[0], r);
      dv[0] = muDoubleScalarAbs(dv4[0]);
      dv[1] = muDoubleScalarAbs(dv4[1]);
      r = _mm_loadu_pd(&dv[0]);
      _mm_storeu_pd(&probVp[k], r);
    }
    probVp[624] = muDoubleScalarAbs(Gamma[624] - vd[624]);
    d_st.site = &y_emlrtRSI;
    h_st.site = &ab_emlrtRSI;
    if (!muDoubleScalarIsNaN(probVp[0])) {
      idx = 1;
    } else {
      idx = 0;
      evp_tmp_tmp = 2;
      exitg1 = false;
      while (!exitg1 && (evp_tmp_tmp < 626)) {
        if (!muDoubleScalarIsNaN(probVp[evp_tmp_tmp - 1])) {
          idx = evp_tmp_tmp;
          exitg1 = true;
        } else {
          evp_tmp_tmp++;
        }
      }
    }
    if (idx == 0) {
      dist = probVp[0];
    } else {
      dist = probVp[idx - 1];
      for (k = idx + 1; k < 626; k++) {
        d2 = probVp[k - 1];
        if (dist < d2) {
          dist = d2;
        }
      }
    }
    dist += b_ex + c_ex;
    memcpy(&vp[0], &SD->f0.vpnew[0], 250000U * sizeof(real_T));
    memcpy(&vd[0], &Gamma[0], 625U * sizeof(real_T));
    st.site = &ob_emlrtRSI;
    repmat(&st, Gamma, SD->f0.evp);
    for (k = 0; k < 250000; k++) {
      SD->f0.V[k] = muDoubleScalarMax(SD->f0.vpnew[k], SD->f0.evp[k]);
      q[k] = SD->f0.qnew[k];
    }
    st.site = &n_emlrtRSI;
    *totaltime += toc(&st, smctime_tv_sec, smctime_tv_nsec);
    *avgtime = *totaltime / (real_T)its;
    if ((muDoubleScalarRem(its, 30.0) == 0.0) || (dist <= 1.0E-7)) {
      st.site = &o_emlrtRSI;
      d_st.site = &mb_emlrtRSI;
      h_st.site = &pb_emlrtRSI;
      i_st.site = &qb_emlrtRSI;
      emlrt_marshallIn(
          &h_st,
          feval(&h_st, emlrt_marshallOut(&h_st, b_cv), b_emlrt_marshallOut(1.0),
                c_emlrt_marshallOut(&i_st, cv1), b_emlrt_marshallOut(its),
                b_emlrt_marshallOut(dist), b_emlrt_marshallOut(*totaltime),
                b_emlrt_marshallOut(*avgtime), &emlrtMCI),
          "<output of feval>");
    }
    its++;
    st.site = &p_emlrtRSI;
    expl_temp = tic(&st);
    smctime_tv_sec = expl_temp.tv_sec;
    smctime_tv_nsec = expl_temp.tv_nsec;
    /*  re-start clock */
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  /*  end while */
  /*  */
  st.site = &nb_emlrtRSI;
  repmat(&st, vd, SD->f0.evp);
  emlrtEnterParallelRegion((emlrtCTX)sp, omp_in_parallel());
  emlrtPushJmpBuf((emlrtCTX)sp, &emlrtJBStack);
  solve_benchmark_parfor_numThreads = emlrtAllocRegionTLSs(
      sp->tls, omp_in_parallel(), omp_get_max_threads(), omp_get_num_procs());
#pragma omp parallel for num_threads(solve_benchmark_parfor_numThreads)

  for (b_i = 0; b_i < 250000; b_i++) {
    b_default[b_i] = (vp[b_i] < SD->f0.evp[b_i]);
  }
  emlrtPopJmpBuf((emlrtCTX)sp, &emlrtJBStack);
  emlrtExitParallelRegion((emlrtCTX)sp, omp_in_parallel());
  /*  */
  emlrtEnterParallelRegion((emlrtCTX)sp, omp_in_parallel());
  emlrtPushJmpBuf((emlrtCTX)sp, &emlrtJBStack);
  solve_benchmark_parfor_numThreads = emlrtAllocRegionTLSs(
      sp->tls, omp_in_parallel(), omp_get_max_threads(), omp_get_num_procs());
#pragma omp parallel num_threads(solve_benchmark_parfor_numThreads) private(   \
        WW1, Dsov, maxIdx, maxWW, c_st, d, ib, Dsov_tmp, emlrtJBEnviron)       \
    firstprivate(b_st, emlrtHadParallelError)
  {
    if (setjmp(emlrtJBEnviron) == 0) {
      b_st.prev = sp;
      b_st.tls = emlrtAllocTLS((emlrtCTX)sp, omp_get_thread_num());
      b_st.site = NULL;
      emlrtSetJmpBuf(&b_st, &emlrtJBEnviron);
      c_st.prev = &b_st;
      c_st.tls = b_st.tls;
    } else {
      emlrtHadParallelError = true;
    }
#pragma omp for nowait
    for (is = 0; is < 625; is++) {
      if (emlrtHadParallelError) {
        continue;
      }
      if (setjmp(emlrtJBEnviron) == 0) {
        maxWW = rtMinusInf;
        /*  Initialize maximum WW */
        maxIdx = 1;
        /*  Initialize index for maximum WW */
        d = vaut[is];
        for (ib = 0; ib < 400; ib++) {
          Dsov_tmp = is + 625 * ib;
          Dsov = muDoubleScalarMax(0.0, SD->f0.vpnew[Dsov_tmp] - d);
          Dsov_tmp = (int32_T)bp[Dsov_tmp];
          if (Dsov_tmp < 1) {
            emlrtDynamicBoundsCheckR2012b(0, 1, 400, &emlrtBCI, &b_st);
          }
          WW1 = (0.85 * (q[is + 625 * (Dsov_tmp - 1)] + 0.058) + 0.15) * b[ib];
          c_st.site = &q_emlrtRSI;
          WW1 = mpower(&c_st, Dsov, alfa) * mpower(&c_st, WW1, 1.0 - alfa);
          if (WW1 > maxWW) {
            maxWW = WW1;
            maxIdx = ib + 1;
          }
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(&b_st);
          }
        }
        bpr[is] = maxIdx;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(&b_st);
        }
      } else {
        emlrtHadParallelError = true;
      }
    }
  }
  emlrtPopJmpBuf((emlrtCTX)sp, &emlrtJBStack);
  emlrtExitParallelRegion((emlrtCTX)sp, omp_in_parallel());
}

/* End of code generation (solve_benchmark_parfor.c) */
