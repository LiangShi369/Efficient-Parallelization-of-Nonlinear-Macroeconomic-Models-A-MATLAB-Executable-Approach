/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * fun_VFI_parfor2.c
 *
 * Code generation for function 'fun_VFI_parfor2'
 *
 */

/* Include files */
#include "fun_VFI_parfor2.h"
#include "fun_VFI_parfor2_data.h"
#include "fun_VFI_parfor2_types.h"
#include "mtimes.h"
#include "rt_nonfinite.h"
#include "solve_entre.h"
#include "mwmathutil.h"
#include "omp.h"
#include <emmintrin.h>
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = {
    34,                /* lineNo */
    "fun_VFI_parfor2", /* fcnName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_github\\Code heteroAgents\\fun_VFI_parfor2.m" /* pathName */
};

static emlrtRSInfo b_emlrtRSI = {
    38,                /* lineNo */
    "fun_VFI_parfor2", /* fcnName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_github\\Code heteroAgents\\fun_VFI_parfor2.m" /* pathName */
};

static emlrtRTEInfo emlrtRTEI = {
    13,                /* lineNo */
    10,                /* colNo */
    "fun_VFI_parfor2", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_github\\Code heteroAgents\\fun_VFI_parfor2.m" /* pName */
};

static emlrtMCInfo emlrtMCI = {
    13,                /* lineNo */
    5,                 /* colNo */
    "fun_VFI_parfor2", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_github\\Code heteroAgents\\fun_VFI_parfor2.m" /* pName */
};

static emlrtRSInfo o_emlrtRSI = {
    13,                /* lineNo */
    "fun_VFI_parfor2", /* fcnName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_github\\Code heteroAgents\\fun_VFI_parfor2.m" /* pathName */
};

/* Function Declarations */
static void disp(const emlrtStack *sp, const mxArray *m, emlrtMCInfo *location);

/* Function Definitions */
static void disp(const emlrtStack *sp, const mxArray *m, emlrtMCInfo *location)
{
  emlrtCallMATLABR2012b((emlrtConstCTX)sp, 0, NULL, 1, &m, "disp", true,
                        location);
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

void fun_VFI_parfor2(fun_VFI_parfor2StackData *SD, const emlrtStack *sp,
                     const real_T p_eqm[2], const real_T a_grid[2001],
                     const real_T z_grid[40], const real_T pi_z[1600],
                     struct0_T *Params, const struct1_T *vfoptions,
                     real_T V[80040], real_T Policy[80040])
{
  static const int32_T iv[2] = {1, 30};
  static const char_T u[30] = {'S', 't', 'a', 'r', 't', ' ', 'V', 'a',
                               'l', 'u', 'e', ' ', 'F', 'u', 'n', 'c',
                               't', 'i', 'o', 'n', ' ', 'I', 't', 'e',
                               'r', 'a', 't', 'i', 'o', 'n'};
  __m128d b_r;
  __m128d r1;
  jmp_buf emlrtJBEnviron;
  jmp_buf *volatile emlrtJBStack;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  const mxArray *m;
  const mxArray *y;
  real_T F[2001];
  real_T cons[2001];
  real_T pi_z_transposed[1600];
  real_T dv[2];
  real_T dv1[2];
  real_T alpha;
  real_T beta;
  real_T cash;
  real_T crra;
  real_T d;
  real_T delta;
  real_T entireRHS;
  real_T lambda;
  real_T r;
  real_T tmpmax;
  real_T upsilon;
  real_T w;
  real_T z;
  int32_T a_c;
  int32_T aprime_c;
  int32_T b_a_c;
  int32_T b_i;
  int32_T b_k;
  int32_T b_z_c;
  int32_T c_a_c;
  int32_T c_z_c;
  int32_T fun_VFI_parfor2_numThreads;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T idx;
  int32_T k;
  int32_T maxid;
  int32_T partialTrueCount;
  int32_T trueCount;
  int32_T z_c;
  int16_T tmp_data[2001];
  int16_T i4;
  boolean_T emlrtHadParallelError = false;
  boolean_T exitg1;
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  Params->r = p_eqm[0];
  Params->w = p_eqm[1];
  /*  1 First solve the value function */
  if (vfoptions->verbose >= 1.0) {
    emlrtAssertMATLABThread((emlrtCTX)sp, &emlrtRTEI);
    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 30, m, &u[0]);
    emlrtAssign(&y, m);
    st.site = &o_emlrtRSI;
    disp(&st, y, &emlrtMCI);
  }
  r = p_eqm[0];
  w = p_eqm[1];
  lambda = Params->lambda;
  delta = Params->delta;
  alpha = Params->alpha;
  upsilon = Params->upsilon;
  crra = Params->crra;
  beta = Params->beta;
  /*  1.1 the return matrix */
  /*  tic */
  emlrtEnterParallelRegion((emlrtCTX)sp, omp_in_parallel());
  emlrtPushJmpBuf((emlrtCTX)sp, &emlrtJBStack);
  fun_VFI_parfor2_numThreads = emlrtAllocRegionTLSs(
      sp->tls, omp_in_parallel(), omp_get_max_threads(), omp_get_num_procs());
#pragma omp parallel num_threads(fun_VFI_parfor2_numThreads) private(          \
        F, cons, cash, z, emlrtJBEnviron, f_st, a_c, d, trueCount,             \
            partialTrueCount, b_i, tmp_data, p, i4)                            \
    firstprivate(b_st, e_st, emlrtHadParallelError)
  {
    if (setjmp(emlrtJBEnviron) == 0) {
      b_st.prev = sp;
      b_st.tls = emlrtAllocTLS((emlrtCTX)sp, omp_get_thread_num());
      b_st.site = NULL;
      emlrtSetJmpBuf(&b_st, &emlrtJBEnviron);
      e_st.prev = &b_st;
      e_st.tls = b_st.tls;
      f_st.prev = &e_st;
      f_st.tls = e_st.tls;
    } else {
      emlrtHadParallelError = true;
    }
#pragma omp for nowait
    for (z_c = 0; z_c < 40; z_c++) {
      if (emlrtHadParallelError) {
        continue;
      }
      if (setjmp(emlrtJBEnviron) == 0) {
        z = z_grid[z_c];
        for (a_c = 0; a_c < 2001; a_c++) {
          d = a_grid[a_c];
          e_st.site = &emlrtRSI;
          cash = solve_entre(&e_st, d, z, w, r, lambda, delta, alpha, upsilon);
          cash = muDoubleScalarMax(w, cash) + (r + 1.0) * d;
          /*  cash depends only on (a,z) */
          /*  Now introduce a' */
          trueCount = 0;
          partialTrueCount = 0;
          for (b_i = 0; b_i < 2001; b_i++) {
            d = cash - a_grid[b_i];
            cons[b_i] = d;
            F[b_i] = rtMinusInf;
            if (d > 0.0) {
              trueCount++;
              tmp_data[partialTrueCount] = (int16_T)b_i;
              partialTrueCount++;
            }
          }
          e_st.site = &b_emlrtRSI;
          f_st.site = &k_emlrtRSI;
          if (trueCount == 1) {
            if ((cons[tmp_data[0]] < 0.0) && !muDoubleScalarIsNaN(1.0 - crra) &&
                (muDoubleScalarFloor(1.0 - crra) != 1.0 - crra)) {
              p = true;
            } else {
              p = false;
            }
          } else if (!muDoubleScalarIsNaN(1.0 - crra) &&
                     (muDoubleScalarFloor(1.0 - crra) != 1.0 - crra)) {
            p = false;
            for (b_i = 0; b_i < trueCount; b_i++) {
              if (p || (cons[tmp_data[b_i]] < 0.0)) {
                p = true;
              }
            }
          } else {
            p = false;
          }
          if (p) {
            emlrtErrorWithMessageIdR2018a(&f_st, &b_emlrtRTEI,
                                          "Coder:toolbox:power_domainError",
                                          "Coder:toolbox:power_domainError", 0);
          }
          for (b_i = 0; b_i < trueCount; b_i++) {
            i4 = tmp_data[b_i];
            F[i4] = muDoubleScalarPower(cons[i4], 1.0 - crra) / (1.0 - crra);
          }
          memcpy(&SD->f0.ReturnMatrix[z_c * 4004001 + a_c * 2001], &F[0],
                 2001U * sizeof(real_T));
          /*  for aprime_c = 1 : n_a  % Now introduce a' */
          /*     cons = cash(a_c,z_c) - a_grid(aprime_c);    */
          /*     if cons > 0 */
          /*         ReturnMatrix(aprime_c,a_c,z_c) = (cons^(1-crra))/(1-crra);
           */
          /*     else */
          /*         ReturnMatrix(aprime_c,a_c,z_c) = - Inf ; */
          /*     end %end if */
          /*  end %end aprime */
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(&b_st);
          }
        }
        /* end a */
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
  /* end z */
  /*  time_ret = toc; */
  /*  1.1 the value and policy function */
  /*  Initial guess V0 */
  r = vfoptions->tolerance + 1.0;
  for (k = 0; k < 40; k++) {
    for (i = 0; i < 40; i++) {
      pi_z_transposed[i + 40 * k] = pi_z[k + 40 * i];
    }
  }
  /*  tic */
  while (r > vfoptions->tolerance) {
    mtimes(SD->f0.V0, pi_z_transposed, SD->f0.EV);
    /* EV(a',z) */
    emlrtEnterParallelRegion((emlrtCTX)sp, omp_in_parallel());
    emlrtPushJmpBuf((emlrtCTX)sp, &emlrtJBStack);
    fun_VFI_parfor2_numThreads = emlrtAllocRegionTLSs(
        sp->tls, omp_in_parallel(), omp_get_max_threads(), omp_get_num_procs());
#pragma omp parallel num_threads(fun_VFI_parfor2_numThreads) private(          \
        entireRHS, maxid, tmpmax, c_st, b_a_c, aprime_c, i1, emlrtJBEnviron)   \
    firstprivate(emlrtHadParallelError)
    {
      if (setjmp(emlrtJBEnviron) == 0) {
        c_st.prev = sp;
        c_st.tls = emlrtAllocTLS((emlrtCTX)sp, omp_get_thread_num());
        c_st.site = NULL;
        emlrtSetJmpBuf(&c_st, &emlrtJBEnviron);
      } else {
        emlrtHadParallelError = true;
      }
#pragma omp for nowait
      for (b_z_c = 0; b_z_c < 40; b_z_c++) {
        if (emlrtHadParallelError) {
          continue;
        }
        if (setjmp(emlrtJBEnviron) == 0) {
          for (b_a_c = 0; b_a_c < 2001; b_a_c++) {
            tmpmax = rtMinusInf;
            maxid = 1;
            for (aprime_c = 0; aprime_c < 2001; aprime_c++) {
              entireRHS = SD->f0.ReturnMatrix[(aprime_c + 2001 * b_a_c) +
                                              4004001 * b_z_c] +
                          beta * SD->f0.EV[aprime_c + 2001 * b_z_c];
              if (tmpmax < entireRHS) {
                tmpmax = entireRHS;
                maxid = aprime_c + 1;
              }
              entireRHS = tmpmax;
              i1 = maxid;
              if (*emlrtBreakCheckR2012bFlagVar != 0) {
                emlrtBreakCheckR2012b(&c_st);
              }
            }
            maxid = b_a_c + 2001 * b_z_c;
            Policy[maxid] = i1;
            V[maxid] = entireRHS;
            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b(&c_st);
            }
          }
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
    /*  -------------------------- Howard ----------------------------------% */
    r = 1.0;
    while (r < vfoptions->howards) {
      /*  for h_c = 1 : vfoptions.howards */
      mtimes(V, pi_z_transposed, SD->f0.EV);
      emlrtEnterParallelRegion((emlrtCTX)sp, omp_in_parallel());
      emlrtPushJmpBuf((emlrtCTX)sp, &emlrtJBStack);
      fun_VFI_parfor2_numThreads =
          emlrtAllocRegionTLSs(sp->tls, omp_in_parallel(),
                               omp_get_max_threads(), omp_get_num_procs());
#pragma omp parallel num_threads(fun_VFI_parfor2_numThreads) private(          \
        d_st, c_a_c, i2, i3, emlrtJBEnviron)                                   \
    firstprivate(emlrtHadParallelError)
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
        for (c_z_c = 0; c_z_c < 40; c_z_c++) {
          if (emlrtHadParallelError) {
            continue;
          }
          if (setjmp(emlrtJBEnviron) == 0) {
            for (c_a_c = 0; c_a_c < 2001; c_a_c++) {
              i2 = c_a_c + 2001 * c_z_c;
              i3 = (int32_T)Policy[i2];
              V[i2] =
                  SD->f0.ReturnMatrix[((i3 + 2001 * c_a_c) + 4004001 * c_z_c) -
                                      1] +
                  beta * SD->f0.EV[(i3 + 2001 * c_z_c) - 1];
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
      r++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)sp);
      }
    }
    /* end howards */
    /*  --------------------------------- ----------------------------------% */
    /*  Update */
    for (k = 0; k <= 80038; k += 2) {
      b_r = _mm_loadu_pd(&V[k]);
      r1 = _mm_loadu_pd(&SD->f0.V0[k]);
      b_r = _mm_sub_pd(b_r, r1);
      _mm_storeu_pd(&SD->f0.V0[k], b_r);
      _mm_storeu_pd(&dv[0], b_r);
      dv1[0] = muDoubleScalarAbs(dv[0]);
      dv1[1] = muDoubleScalarAbs(dv[1]);
      b_r = _mm_loadu_pd(&dv1[0]);
      _mm_storeu_pd(&SD->f0.EV[k], b_r);
    }
    if (!muDoubleScalarIsNaN(SD->f0.EV[0])) {
      idx = 1;
    } else {
      idx = 0;
      b_k = 2;
      exitg1 = false;
      while (!exitg1 && (b_k < 80041)) {
        if (!muDoubleScalarIsNaN(SD->f0.EV[b_k - 1])) {
          idx = b_k;
          exitg1 = true;
        } else {
          b_k++;
        }
      }
    }
    if (idx == 0) {
      r = SD->f0.EV[0];
    } else {
      r = SD->f0.EV[idx - 1];
      for (k = idx + 1; k < 80041; k++) {
        w = SD->f0.EV[k - 1];
        if (r < w) {
          r = w;
        }
      }
    }
    /*  if verbose == 2 */
    /*      fprintf('iter = %4.0f, err = %f \n',iter,err) */
    /*  end */
    memcpy(&SD->f0.V0[0], &V[0], 80040U * sizeof(real_T));
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  /* end while */
  /*  time_vfi = toc; */
  /*   */
  /*  if verbose >= 1 */
  /*      fprintf('Time return matrix:       %8.6f \n',time_ret); */
  /*      fprintf('Time vfi:                 %8.6f \n',time_vfi); */
  /*      fprintf('Time return matrix + vfi: %8.6f \n',time_ret+time_vfi); */
  /*  end */
}

/* End of code generation (fun_VFI_parfor2.c) */
