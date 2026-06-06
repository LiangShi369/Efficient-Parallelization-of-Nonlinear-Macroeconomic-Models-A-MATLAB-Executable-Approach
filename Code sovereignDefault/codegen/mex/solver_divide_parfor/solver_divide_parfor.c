/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * solver_divide_parfor.c
 *
 * Code generation for function 'solver_divide_parfor'
 *
 */

/* Include files */
#include "solver_divide_parfor.h"
#include "mtimes.h"
#include "power.h"
#include "rt_nonfinite.h"
#include "solver_divide_parfor_data.h"
#include "solver_divide_parfor_mexutil.h"
#include "solver_divide_parfor_types.h"
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
    23,                     /* lineNo */
    "solver_divide_parfor", /* fcnName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solver_divide_parfor.m" /* pathName
                                                                        */
};

static emlrtRSInfo b_emlrtRSI = {
    30,                     /* lineNo */
    "solver_divide_parfor", /* fcnName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solver_divide_parfor.m" /* pathName
                                                                        */
};

static emlrtRSInfo c_emlrtRSI = {
    34,                     /* lineNo */
    "solver_divide_parfor", /* fcnName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solver_divide_parfor.m" /* pathName
                                                                        */
};

static emlrtRSInfo d_emlrtRSI = {
    36,                     /* lineNo */
    "solver_divide_parfor", /* fcnName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solver_divide_parfor.m" /* pathName
                                                                        */
};

static emlrtRSInfo e_emlrtRSI = {
    41,                     /* lineNo */
    "solver_divide_parfor", /* fcnName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solver_divide_parfor.m" /* pathName
                                                                        */
};

static emlrtRSInfo f_emlrtRSI = {
    56,                     /* lineNo */
    "solver_divide_parfor", /* fcnName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solver_divide_parfor.m" /* pathName
                                                                        */
};

static emlrtRSInfo g_emlrtRSI = {
    61,                     /* lineNo */
    "solver_divide_parfor", /* fcnName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solver_divide_parfor.m" /* pathName
                                                                        */
};

static emlrtRSInfo h_emlrtRSI = {
    63,                     /* lineNo */
    "solver_divide_parfor", /* fcnName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solver_divide_parfor.m" /* pathName
                                                                        */
};

static emlrtRSInfo
    n_emlrtRSI =
        {
            93,                  /* lineNo */
            "eml_mtimes_helper", /* fcnName */
            "D:\\Matlab_2026a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_"
            "helper.m" /* pathName */
};

static emlrtRSInfo q_emlrtRSI = {
    78,            /* lineNo */
    "bmonoNonRec", /* fcnName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solver_divide_parfor.m" /* pathName
                                                                        */
};

static emlrtRSInfo r_emlrtRSI = {
    84,            /* lineNo */
    "bmonoNonRec", /* fcnName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solver_divide_parfor.m" /* pathName
                                                                        */
};

static emlrtRSInfo s_emlrtRSI = {
    107,           /* lineNo */
    "bmonoNonRec", /* fcnName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solver_divide_parfor.m" /* pathName
                                                                        */
};

static emlrtRSInfo v_emlrtRSI = {
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
    1,             /* iFirst */
    400,           /* iLast */
    105,           /* lineNo */
    36,            /* colNo */
    "bprow",       /* aName */
    "bmonoNonRec", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solver_divide_parfor.m", /* pName
                                                                         */
    0 /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = {
    1,             /* iFirst */
    400,           /* iLast */
    106,           /* lineNo */
    37,            /* colNo */
    "bprow",       /* aName */
    "bmonoNonRec", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solver_divide_parfor.m", /* pName
                                                                         */
    0 /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = {
    1,             /* iFirst */
    11,            /* iLast */
    98,            /* lineNo */
    15,            /* colNo */
    "L",           /* aName */
    "bmonoNonRec", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solver_divide_parfor.m", /* pName
                                                                         */
    3 /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = {
    1,             /* iFirst */
    400,           /* iLast */
    102,           /* lineNo */
    23,            /* colNo */
    "def_is",      /* aName */
    "bmonoNonRec", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solver_divide_parfor.m", /* pName
                                                                         */
    0 /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = {
    1,             /* iFirst */
    11,            /* iLast */
    124,           /* lineNo */
    18,            /* colNo */
    "U",           /* aName */
    "bmonoNonRec", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solver_divide_parfor.m", /* pName
                                                                         */
    0 /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = {
    1,         /* iFirst */
    400,       /* iLast */
    140,       /* lineNo */
    16,        /* colNo */
    "w",       /* aName */
    "maxStep", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solver_divide_parfor.m", /* pName
                                                                         */
    0 /* checkKind */
};

static emlrtRSInfo x_emlrtRSI = {
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

static void bmonoNonRec(const emlrtStack *sp, const real_T b[400],
                        const real_T w[400], const real_T evpv[400],
                        real_T vd_is, const boolean_T def_is[400],
                        real_T Vrow[400], real_T bprow[400],
                        real_T defrow[400]);

static real_T emlrt_marshallIn(const emlrtStack *sp,
                               const mxArray *a__output_of_feval_,
                               const char_T *identifier);

static const mxArray *feval(const emlrtStack *sp, const mxArray *m,
                            const mxArray *m1, const mxArray *m2,
                            const mxArray *m3, const mxArray *m4,
                            emlrtMCInfo *location);

static real_T maxStep(const emlrtStack *sp, real_T ibp_min, real_T ibp_max,
                      real_T bib, const real_T w[400], const real_T evpv[400],
                      real_T *bestIp);

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

static void bmonoNonRec(const emlrtStack *sp, const real_T b[400],
                        const real_T w[400], const real_T evpv[400],
                        real_T vd_is, const boolean_T def_is[400],
                        real_T Vrow[400], real_T bprow[400], real_T defrow[400])
{
  emlrtStack st;
  int32_T i;
  int32_T k;
  int16_T L[11];
  int16_T U[11];
  st.prev = sp;
  st.tls = sp->tls;
  memset(&Vrow[0], 0, 400U * sizeof(real_T));
  memset(&bprow[0], 0, 400U * sizeof(real_T));
  memset(&defrow[0], 0, 400U * sizeof(real_T));
  if (def_is[0]) {
    Vrow[0] = vd_is;
    bprow[0] = 1.0;
  } else {
    st.site = &q_emlrtRSI;
    Vrow[0] = maxStep(&st, 1.0, 400.0, b[0], w, evpv, &bprow[0]);
  }
  if (def_is[399]) {
    Vrow[399] = vd_is;
    bprow[399] = 400.0;
  } else {
    st.site = &r_emlrtRSI;
    Vrow[399] = maxStep(&st, 1.0, 400.0, b[399], w, evpv, &bprow[399]);
  }
  for (i = 0; i < 11; i++) {
    L[i] = 0;
    U[i] = 0;
  }
  L[0] = 1;
  U[0] = 400;
  k = 0;
  int32_T exitg1;
  do {
    exitg1 = 0;
    while (U[k] != L[k] + 1) {
      int32_T U_tmp;
      int32_T b_i;
      k++;
      if ((k + 1 < 1) || (k + 1 > 11)) {
        emlrtDynamicBoundsCheckR2012b(k + 1, 1, 11, &c_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      L[k] = L[k - 1];
      U_tmp = L[k - 1];
      U[k] = (int16_T)muDoubleScalarFloor((real_T)(U_tmp + U[k - 1]) / 2.0);
      /*  m is the ib state index */
      if (U[k] < 1) {
        emlrtDynamicBoundsCheckR2012b(U[k], 1, 400, &d_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      b_i = U[k] - 1;
      if (def_is[b_i]) {
        Vrow[b_i] = vd_is;
        bprow[b_i] = U[k];
      } else {
        int32_T i1;
        if (U_tmp < 1) {
          emlrtDynamicBoundsCheckR2012b(0, 1, 400, &emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        i1 = U[k - 1];
        if (i1 < 1) {
          emlrtDynamicBoundsCheckR2012b(0, 1, 400, &b_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        st.site = &s_emlrtRSI;
        Vrow[U[k] - 1] = maxStep(&st, bprow[U_tmp - 1], bprow[i1 - 1], b[b_i],
                                 w, evpv, &bprow[U[k] - 1]);
      }
      defrow[b_i] = !(Vrow[b_i] > vd_is);
    }
    while (!((k + 1 == 1) || (U[k] != U[k - 1]))) {
      k--;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)sp);
      }
    }
    if ((k + 1 == 1) && (U[0] == 400)) {
      exitg1 = 1;
    } else {
      L[k] = U[k];
      if ((k < 1) || (k > 11)) {
        emlrtDynamicBoundsCheckR2012b(k, 1, 11, &e_emlrtBCI, (emlrtConstCTX)sp);
      }
      U[k] = U[k - 1];
    }
  } while (exitg1 == 0);
  defrow[0] = !(Vrow[0] > vd_is);
  defrow[399] = !(Vrow[399] > vd_is);
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

static real_T maxStep(const emlrtStack *sp, real_T ibp_min, real_T ibp_max,
                      real_T bib, const real_T w[400], const real_T evpv[400],
                      real_T *bestIp)
{
  real_T bestVal;
  int32_T i;
  int32_T ibp;
  bestVal = rtMinusInf;
  *bestIp = 1.0;
  i = (int32_T)(ibp_max + (1.0 - ibp_min));
  for (ibp = 0; ibp < i; ibp++) {
    real_T b_ibp;
    real_T c1;
    b_ibp = ibp_min + (real_T)ibp;
    /*  c1 = b(ibp) * qv(ibp) - b(ib) + yis ; */
    if (((int32_T)b_ibp < 1) || ((int32_T)b_ibp > 400)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)b_ibp, 1, 400, &f_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    c1 = w[(int32_T)b_ibp - 1] - bib;
    if (c1 > 0.0) {
      c1 = -(1.0 / c1 - 1.0) + evpv[(int32_T)b_ibp - 1];
    } else {
      c1 = rtMinusInf;
    }
    if (c1 > bestVal) {
      bestVal = c1;
      *bestIp = b_ibp;
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  return bestVal;
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

void solver_divide_parfor(solver_divide_parforStackData *SD,
                          const emlrtStack *sp, const real_T b[400],
                          const real_T z[625], const real_T m[625],
                          const real_T pdf[390625], const struct0_T *para,
                          real_T q[250000], real_T bp[250000],
                          real_T vp[250000], boolean_T def[250000],
                          real_T *totaltime, real_T *avgtime)
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
  real_T b_x[625];
  real_T ua[625];
  real_T vd[625];
  real_T vd1[625];
  real_T vo[625];
  real_T x[625];
  real_T dv[400];
  real_T dv1[400];
  real_T dv2[400];
  real_T evp[400];
  real_T varargin_1[400];
  real_T w[400];
  real_T dv3[2];
  real_T dv4[2];
  real_T dv5[2];
  real_T dv6[2];
  real_T b_ex;
  real_T betta;
  real_T d;
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
  int32_T boffset;
  int32_T coffset;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T is;
  int32_T its;
  int32_T k;
  int32_T nb0;
  int32_T solver_divide_parfor_numThreads;
  int32_T w_tmp;
  boolean_T b_def[400];
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
    coffset = 1;
  } else {
    coffset = 0;
    boffset = 2;
    exitg1 = false;
    while (!exitg1 && (boffset < 401)) {
      if (!muDoubleScalarIsNaN(varargin_1[boffset - 1])) {
        coffset = boffset;
        exitg1 = true;
      } else {
        boffset++;
      }
    }
  }
  if (coffset == 0) {
    nb0 = 1;
  } else {
    diff = varargin_1[coffset - 1];
    nb0 = coffset;
    for (k = coffset + 1; k < 401; k++) {
      d = varargin_1[k - 1];
      if (diff > d) {
        diff = d;
        nb0 = k;
      }
    }
  }
  /*  index of b=0 ? */
  /*  Initialize */
  memset(&vp[0], 0, 250000U * sizeof(real_T));
  /*  continue repaying */
  /*  default region */
  memset(&vd[0], 0, 625U * sizeof(real_T));
  memset(&vo[0], 0, 625U * sizeof(real_T));
  /*  debt policy function (indices) */
  diff = para->rstar;
  emlrtEnterParallelRegion((emlrtCTX)sp, omp_in_parallel());
  emlrtPushJmpBuf((emlrtCTX)sp, &emlrtJBStack);
  solver_divide_parfor_numThreads = emlrtAllocRegionTLSs(
      sp->tls, omp_in_parallel(), omp_get_max_threads(), omp_get_num_procs());
#pragma omp parallel for num_threads(solver_divide_parfor_numThreads)

  for (i = 0; i < 250000; i++) {
    bp[i] = 1.0;
    q[i] = 1.0 / (diff + 1.0);
    def[i] = false;
  }
  emlrtPopJmpBuf((emlrtCTX)sp, &emlrtJBStack);
  emlrtExitParallelRegion((emlrtCTX)sp, omp_in_parallel());
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
  /*  Start timer */
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
      boffset = 625 * b_k + 624;
      SD->f0.a[boffset] = x[624] * betta * pdf[boffset];
    }
    b_st.site = &n_emlrtRSI;
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
      coffset = 625 * b_k + 624;
      SD->f0.a[coffset] = x[624] * betta * pdf[coffset];
    }
    for (k = 0; k <= 622; k += 2) {
      r = _mm_loadu_pd(&vo[k]);
      r1 = _mm_loadu_pd(&vd[k]);
      _mm_storeu_pd(&vo[k],
                    _mm_add_pd(_mm_mul_pd(_mm_set1_pd(theta), r),
                               _mm_mul_pd(_mm_set1_pd(1.0 - theta), r1)));
    }
    vo[624] = theta * vo[624] + (1.0 - theta) * vd[624];
    b_st.site = &n_emlrtRSI;
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
      coffset = 625 * b_k + 624;
      SD->f0.w[coffset] = d * q[coffset] + b_x[624];
    }
    emlrtEnterParallelRegion((emlrtCTX)sp, omp_in_parallel());
    emlrtPushJmpBuf((emlrtCTX)sp, &emlrtJBStack);
    solver_divide_parfor_numThreads = emlrtAllocRegionTLSs(
        sp->tls, omp_in_parallel(), omp_get_max_threads(), omp_get_num_procs());
#pragma omp parallel num_threads(solver_divide_parfor_numThreads) private(     \
        dv, dv1, dv2, emlrtJBEnviron, e_st, i2, w_tmp, w, evp, b_def)          \
    firstprivate(d_st, emlrtHadParallelError)
    {
      if (setjmp(emlrtJBEnviron) == 0) {
        d_st.prev = sp;
        d_st.tls = emlrtAllocTLS((emlrtCTX)sp, omp_get_thread_num());
        d_st.site = NULL;
        emlrtSetJmpBuf(&d_st, &emlrtJBEnviron);
        e_st.prev = &d_st;
        e_st.tls = d_st.tls;
      } else {
        emlrtHadParallelError = true;
      }
#pragma omp for nowait
      for (is = 0; is < 625; is++) {
        if (emlrtHadParallelError) {
          continue;
        }
        if (setjmp(emlrtJBEnviron) == 0) {
          for (i2 = 0; i2 < 400; i2++) {
            w_tmp = is + 625 * i2;
            w[i2] = SD->f0.w[w_tmp];
            evp[i2] = SD->f0.evp[w_tmp];
            b_def[i2] = def[w_tmp];
          }
          e_st.site = &e_emlrtRSI;
          bmonoNonRec(&e_st, b, w, evp, vd1[is], b_def, dv2, dv1, dv);
          for (i2 = 0; i2 < 400; i2++) {
            w_tmp = is + 625 * i2;
            SD->f0.vp1[w_tmp] = dv2[i2];
            bp[w_tmp] = dv1[i2];
            SD->f0.def1[w_tmp] = (dv[i2] != 0.0);
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
      coffset = k * 625;
      boffset = k * 625;
      memset(&SD->f0.evp[coffset], 0, 625U * sizeof(real_T));
      for (b_k = 0; b_k < 625; b_k++) {
        aoffset = b_k * 625;
        bkj = def[boffset + b_k];
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
      _mm_storeu_pd(&dv3[0], r);
      dv4[0] = muDoubleScalarAbs(dv3[0]);
      dv4[1] = muDoubleScalarAbs(dv3[1]);
      r = _mm_loadu_pd(&dv4[0]);
      _mm_storeu_pd(&SD->f0.w[k], r);
    }
    if (!muDoubleScalarIsNaN(SD->f0.w[0])) {
      boffset = 1;
    } else {
      boffset = 0;
      coffset = 2;
      exitg1 = false;
      while (!exitg1 && (coffset < 250001)) {
        if (!muDoubleScalarIsNaN(SD->f0.w[coffset - 1])) {
          boffset = coffset;
          exitg1 = true;
        } else {
          coffset++;
        }
      }
    }
    if (boffset == 0) {
      ex = SD->f0.w[0];
    } else {
      ex = SD->f0.w[boffset - 1];
      for (k = boffset + 1; k < 250001; k++) {
        diff = SD->f0.w[k - 1];
        if (ex < diff) {
          ex = diff;
        }
      }
    }
    for (k = 0; k <= 249998; k += 2) {
      r = _mm_loadu_pd(&SD->f0.vp1[k]);
      r1 = _mm_loadu_pd(&vp[k]);
      r = _mm_sub_pd(r, r1);
      _mm_storeu_pd(&vp[k], r);
      _mm_storeu_pd(&dv5[0], r);
      dv4[0] = muDoubleScalarAbs(dv5[0]);
      dv4[1] = muDoubleScalarAbs(dv5[1]);
      r = _mm_loadu_pd(&dv4[0]);
      _mm_storeu_pd(&SD->f0.w[k], r);
    }
    if (!muDoubleScalarIsNaN(SD->f0.w[0])) {
      boffset = 1;
    } else {
      boffset = 0;
      coffset = 2;
      exitg1 = false;
      while (!exitg1 && (coffset < 250001)) {
        if (!muDoubleScalarIsNaN(SD->f0.w[coffset - 1])) {
          boffset = coffset;
          exitg1 = true;
        } else {
          coffset++;
        }
      }
    }
    if (boffset == 0) {
      b_ex = SD->f0.w[0];
    } else {
      b_ex = SD->f0.w[boffset - 1];
      for (k = boffset + 1; k < 250001; k++) {
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
      _mm_storeu_pd(&dv6[0], r);
      dv4[0] = muDoubleScalarAbs(dv6[0]);
      dv4[1] = muDoubleScalarAbs(dv6[1]);
      r = _mm_loadu_pd(&dv4[0]);
      _mm_storeu_pd(&x[k], r);
    }
    x[624] = muDoubleScalarAbs(vd1[624] - vd[624]);
    if (!muDoubleScalarIsNaN(x[0])) {
      boffset = 1;
    } else {
      boffset = 0;
      coffset = 2;
      exitg1 = false;
      while (!exitg1 && (coffset < 626)) {
        if (!muDoubleScalarIsNaN(x[coffset - 1])) {
          boffset = coffset;
          exitg1 = true;
        } else {
          coffset++;
        }
      }
    }
    if (boffset == 0) {
      diff = x[0];
    } else {
      diff = x[boffset - 1];
      for (k = boffset + 1; k < 626; k++) {
        d = x[k - 1];
        if (diff < d) {
          diff = d;
        }
      }
    }
    diff += ex + b_ex;
    memcpy(&vo[0], &SD->f0.vp1[nb0 * 625 + -625], 625U * sizeof(real_T));
    memcpy(&vp[0], &SD->f0.vp1[0], 250000U * sizeof(real_T));
    memcpy(&vd[0], &vd1[0], 625U * sizeof(real_T));
    memcpy(&def[0], &SD->f0.def1[0], 250000U * sizeof(boolean_T));
    memcpy(&q[0], &SD->f0.evp[0], 250000U * sizeof(real_T));
    if (muDoubleScalarRem(its, 50.0) == 0.0) {
      st.site = &f_emlrtRSI;
      b_st.site = &v_emlrtRSI;
      c_y = NULL;
      b_m = emlrtCreateCharArray(2, &iv2[0]);
      emlrtInitCharArrayR2013a(&b_st, 7, b_m, &u[0]);
      emlrtAssign(&c_y, b_m);
      d_y = NULL;
      b_m = emlrtCreateCharArray(2, &iv3[0]);
      emlrtInitCharArrayR2013a(&b_st, 17, b_m, &c_u[0]);
      emlrtAssign(&d_y, b_m);
      c_st.site = &x_emlrtRSI;
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
  b_st.site = &v_emlrtRSI;
  y = NULL;
  b_m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a(&b_st, 7, b_m, &u[0]);
  emlrtAssign(&y, b_m);
  b_y = NULL;
  b_m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a(&b_st, 42, b_m, &b_u[0]);
  emlrtAssign(&b_y, b_m);
  c_st.site = &x_emlrtRSI;
  emlrt_marshallIn(&c_st,
                   b_feval(&c_st, y, emlrt_marshallOut(1.0), b_y,
                           emlrt_marshallOut((real_T)its - 1.0),
                           emlrt_marshallOut(*totaltime),
                           emlrt_marshallOut(*avgtime), &emlrtMCI),
                   "<output of feval>");
}

/* End of code generation (solver_divide_parfor.c) */
