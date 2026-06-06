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
#include "fun_VFI_parfor2_emxutil.h"
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
    "Mex\\code_gitrepo\\Code heteroAgents\\fun_VFI_parfor2.m" /* pathName */
};

static emlrtRSInfo b_emlrtRSI = {
    38,                /* lineNo */
    "fun_VFI_parfor2", /* fcnName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code heteroAgents\\fun_VFI_parfor2.m" /* pathName */
};

static emlrtRSInfo c_emlrtRSI = {
    67,                /* lineNo */
    "fun_VFI_parfor2", /* fcnName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code heteroAgents\\fun_VFI_parfor2.m" /* pathName */
};

static emlrtRSInfo d_emlrtRSI = {
    91,                /* lineNo */
    "fun_VFI_parfor2", /* fcnName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code heteroAgents\\fun_VFI_parfor2.m" /* pathName */
};

static emlrtRSInfo e_emlrtRSI = {
    104,               /* lineNo */
    "fun_VFI_parfor2", /* fcnName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code heteroAgents\\fun_VFI_parfor2.m" /* pathName */
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
    15,                                                           /* lineNo */
    "max",                                                        /* fcnName */
    "D:\\Matlab_2026a\\toolbox\\eml\\lib\\matlab\\datafun\\max.m" /* pathName */
};

static emlrtRSInfo q_emlrtRSI = {
    73,         /* lineNo */
    "minOrMax", /* fcnName */
    "D:\\Matlab_2026a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m" /* pathName
                                                                          */
};

static emlrtRSInfo r_emlrtRSI = {
    120,       /* lineNo */
    "maximum", /* fcnName */
    "D:\\Matlab_2026a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m" /* pathName
                                                                          */
};

static emlrtRSInfo s_emlrtRSI = {
    13,            /* lineNo */
    "maxCollapse", /* fcnName */
    "D:\\Matlab_2026a\\toolbox\\eml\\eml\\+coder\\+internal\\+crl\\maxCollapse."
    "m" /* pathName */
};

static emlrtRTEInfo emlrtRTEI = {
    13,                /* lineNo */
    10,                /* colNo */
    "fun_VFI_parfor2", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code heteroAgents\\fun_VFI_parfor2.m" /* pName */
};

static emlrtMCInfo emlrtMCI = {
    13,                /* lineNo */
    5,                 /* colNo */
    "fun_VFI_parfor2", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code heteroAgents\\fun_VFI_parfor2.m" /* pName */
};

static emlrtBCInfo emlrtBCI = {
    -1,                /* iFirst */
    -1,                /* iLast */
    33,                /* lineNo */
    20,                /* colNo */
    "a_grid",          /* aName */
    "fun_VFI_parfor2", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code heteroAgents\\fun_VFI_parfor2.m", /* pName */
    0                                                          /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = {
    -1,                /* iFirst */
    -1,                /* iLast */
    39,                /* lineNo */
    24,                /* colNo */
    "ReturnMatrix",    /* aName */
    "fun_VFI_parfor2", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code heteroAgents\\fun_VFI_parfor2.m", /* pName */
    0                                                          /* checkKind */
};

static emlrtECInfo emlrtECI = {
    -1,                /* nDims */
    39,                /* lineNo */
    9,                 /* colNo */
    "fun_VFI_parfor2", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code heteroAgents\\fun_VFI_parfor2.m" /* pName */
};

static emlrtECInfo b_emlrtECI = {
    1,                 /* nDims */
    104,               /* lineNo */
    19,                /* colNo */
    "fun_VFI_parfor2", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code heteroAgents\\fun_VFI_parfor2.m" /* pName */
};

static emlrtRTEInfo d_emlrtRTEI =
    {
        197,             /* lineNo */
        27,              /* colNo */
        "unaryMinOrMax", /* fName */
        "D:\\Matlab_2026a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax."
        "m" /* pName */
};

static emlrtBCInfo c_emlrtBCI = {
    -1,                /* iFirst */
    -1,                /* iLast */
    38,                /* lineNo */
    26,                /* colNo */
    "cons",            /* aName */
    "fun_VFI_parfor2", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code heteroAgents\\fun_VFI_parfor2.m", /* pName */
    0                                                          /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = {
    -1,                /* iFirst */
    -1,                /* iLast */
    75,                /* lineNo */
    42,                /* colNo */
    "ReturnMatrix",    /* aName */
    "fun_VFI_parfor2", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code heteroAgents\\fun_VFI_parfor2.m", /* pName */
    0                                                          /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = {
    -1,                /* iFirst */
    -1,                /* iLast */
    75,                /* lineNo */
    51,                /* colNo */
    "ReturnMatrix",    /* aName */
    "fun_VFI_parfor2", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code heteroAgents\\fun_VFI_parfor2.m", /* pName */
    0                                                          /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = {
    -1,                /* iFirst */
    -1,                /* iLast */
    75,                /* lineNo */
    70,                /* colNo */
    "EV",              /* aName */
    "fun_VFI_parfor2", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code heteroAgents\\fun_VFI_parfor2.m", /* pName */
    0                                                          /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = {
    -1,                /* iFirst */
    -1,                /* iLast */
    80,                /* lineNo */
    19,                /* colNo */
    "V",               /* aName */
    "fun_VFI_parfor2", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code heteroAgents\\fun_VFI_parfor2.m", /* pName */
    0                                                          /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = {
    -1,                /* iFirst */
    -1,                /* iLast */
    95,                /* lineNo */
    37,                /* colNo */
    "Policy",          /* aName */
    "fun_VFI_parfor2", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code heteroAgents\\fun_VFI_parfor2.m", /* pName */
    0                                                          /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = {
    -1,                /* iFirst */
    -1,                /* iLast */
    81,                /* lineNo */
    24,                /* colNo */
    "Policy",          /* aName */
    "fun_VFI_parfor2", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code heteroAgents\\fun_VFI_parfor2.m", /* pName */
    0                                                          /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = {
    -1,                /* iFirst */
    -1,                /* iLast */
    96,                /* lineNo */
    43,                /* colNo */
    "ReturnMatrix",    /* aName */
    "fun_VFI_parfor2", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code heteroAgents\\fun_VFI_parfor2.m", /* pName */
    0                                                          /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = {
    -1,                /* iFirst */
    -1,                /* iLast */
    96,                /* lineNo */
    54,                /* colNo */
    "ReturnMatrix",    /* aName */
    "fun_VFI_parfor2", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code heteroAgents\\fun_VFI_parfor2.m", /* pName */
    0                                                          /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = {
    -1,                /* iFirst */
    -1,                /* iLast */
    96,                /* lineNo */
    74,                /* colNo */
    "EVh",             /* aName */
    "fun_VFI_parfor2", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code heteroAgents\\fun_VFI_parfor2.m", /* pName */
    0                                                          /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = {
    -1,                /* iFirst */
    -1,                /* iLast */
    96,                /* lineNo */
    19,                /* colNo */
    "V",               /* aName */
    "fun_VFI_parfor2", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code heteroAgents\\fun_VFI_parfor2.m", /* pName */
    0                                                          /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = {
    -1,                /* iFirst */
    -1,                /* iLast */
    38,                /* lineNo */
    9,                 /* colNo */
    "F",               /* aName */
    "fun_VFI_parfor2", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code heteroAgents\\fun_VFI_parfor2.m", /* pName */
    0                                                          /* checkKind */
};

static emlrtRTEInfo g_emlrtRTEI = {
    26,                /* lineNo */
    16,                /* colNo */
    "fun_VFI_parfor2", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code heteroAgents\\fun_VFI_parfor2.m" /* pName */
};

static emlrtRTEInfo h_emlrtRTEI = {
    55,                /* lineNo */
    25,                /* colNo */
    "fun_VFI_parfor2", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code heteroAgents\\fun_VFI_parfor2.m" /* pName */
};

static emlrtRTEInfo i_emlrtRTEI = {
    56,                /* lineNo */
    25,                /* colNo */
    "fun_VFI_parfor2", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code heteroAgents\\fun_VFI_parfor2.m" /* pName */
};

static emlrtRTEInfo j_emlrtRTEI = {
    57,                /* lineNo */
    25,                /* colNo */
    "fun_VFI_parfor2", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code heteroAgents\\fun_VFI_parfor2.m" /* pName */
};

static emlrtRTEInfo k_emlrtRTEI = {
    104,               /* lineNo */
    19,                /* colNo */
    "fun_VFI_parfor2", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code heteroAgents\\fun_VFI_parfor2.m" /* pName */
};

static emlrtRTEInfo l_emlrtRTEI = {
    30,                    /* lineNo */
    21,                    /* colNo */
    "applyScalarFunction", /* fName */
    "D:\\Matlab_2026a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\applyScalarFunction.m" /* pName */
};

static emlrtRTEInfo m_emlrtRTEI = {
    108,               /* lineNo */
    5,                 /* colNo */
    "fun_VFI_parfor2", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code heteroAgents\\fun_VFI_parfor2.m" /* pName */
};

static emlrtRTEInfo n_emlrtRTEI = {
    26,                /* lineNo */
    1,                 /* colNo */
    "fun_VFI_parfor2", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code heteroAgents\\fun_VFI_parfor2.m" /* pName */
};

static emlrtRTEInfo o_emlrtRTEI = {
    55,                /* lineNo */
    1,                 /* colNo */
    "fun_VFI_parfor2", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code heteroAgents\\fun_VFI_parfor2.m" /* pName */
};

static emlrtRTEInfo p_emlrtRTEI = {
    67,                /* lineNo */
    5,                 /* colNo */
    "fun_VFI_parfor2", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code heteroAgents\\fun_VFI_parfor2.m" /* pName */
};

static emlrtRTEInfo q_emlrtRTEI = {
    104,               /* lineNo */
    15,                /* colNo */
    "fun_VFI_parfor2", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code heteroAgents\\fun_VFI_parfor2.m" /* pName */
};

static emlrtRSInfo t_emlrtRSI = {
    13,                /* lineNo */
    "fun_VFI_parfor2", /* fcnName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code heteroAgents\\fun_VFI_parfor2.m" /* pathName */
};

/* Function Declarations */
static void binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                             const emxArray_real_T *in2,
                             const emxArray_real_T *in3);

static void disp(const emlrtStack *sp, const mxArray *m, emlrtMCInfo *location);

/* Function Definitions */
static void binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                             const emxArray_real_T *in2,
                             const emxArray_real_T *in3)
{
  jmp_buf *volatile emlrtJBStack;
  const real_T *in2_data;
  const real_T *in3_data;
  real_T *in1_data;
  int32_T binary_expand_op_numThreads;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_0_0_tmp;
  in3_data = in3->data;
  in2_data = in2->data;
  i = in3->size[0] * 40;
  if (i == 1) {
    loop_ub = in2->size[0] * 40;
  } else {
    loop_ub = i;
  }
  stride_0_0_tmp = in1->size[0];
  in1->size[0] = loop_ub;
  emxEnsureCapacity_real_T(sp, in1, stride_0_0_tmp, &k_emlrtRTEI);
  in1_data = in1->data;
  stride_0_0_tmp = in2->size[0] * 40;
  stride_0_0 = (stride_0_0_tmp != 1);
  stride_0_0_tmp = (i != 1);
  if (loop_ub < 2000) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      in1_data[i1] = in2_data[i1 * stride_0_0] - in3_data[i1 * stride_0_0_tmp];
    }
  } else {
    emlrtEnterParallelRegion((emlrtCTX)sp, omp_in_parallel());
    emlrtPushJmpBuf((emlrtCTX)sp, &emlrtJBStack);
    binary_expand_op_numThreads = emlrtAllocRegionTLSs(
        sp->tls, omp_in_parallel(), omp_get_max_threads(), omp_get_num_procs());
#pragma omp parallel for num_threads(binary_expand_op_numThreads)

    for (i1 = 0; i1 < loop_ub; i1++) {
      in1_data[i1] = in2_data[i1 * stride_0_0] - in3_data[i1 * stride_0_0_tmp];
    }
    emlrtPopJmpBuf((emlrtCTX)sp, &emlrtJBStack);
    emlrtExitParallelRegion((emlrtCTX)sp, omp_in_parallel());
  }
}

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

void fun_VFI_parfor2(const emlrtStack *sp, const real_T p_eqm[2],
                     const real_T a_grid_data[], const int32_T a_grid_size[1],
                     const real_T z_grid[40], const real_T pi_z[1600],
                     struct0_T *Params, const struct1_T *vfoptions,
                     emxArray_real_T *V, emxArray_real_T *Policy)
{
  static const int32_T iv[2] = {1, 30};
  static const char_T u[30] = {'S', 't', 'a', 'r', 't', ' ', 'V', 'a',
                               'l', 'u', 'e', ' ', 'F', 'u', 'n', 'c',
                               't', 'i', 'o', 'n', ' ', 'I', 't', 'e',
                               'r', 'a', 't', 'i', 'o', 'n'};
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
  emxArray_real_T *EV;
  emxArray_real_T *ReturnMatrix;
  emxArray_real_T *V0;
  emxArray_real_T *varargin_1;
  emxArray_real_T *x;
  const mxArray *m;
  const mxArray *y;
  real_T F_data[3001];
  real_T b_tmp_data[3001];
  real_T cons_data[3001];
  real_T pi_z_transposed[1600];
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
  real_T *EV_data;
  real_T *Policy_data;
  real_T *ReturnMatrix_data;
  real_T *V0_data;
  real_T *V_data;
  real_T *x_data;
  int32_T a_c;
  int32_T aprime_c;
  int32_T aprime_opt;
  int32_T b_a_c;
  int32_T b_k;
  int32_T b_scalarLB;
  int32_T b_vectorUB;
  int32_T b_z_c;
  int32_T c_a_c;
  int32_T c_z_c;
  int32_T cons_size;
  int32_T fun_VFI_parfor2_numThreads;
  int32_T i;
  int32_T k;
  int32_T maxid;
  int32_T n_a;
  int32_T nx;
  int32_T scalarLB;
  int32_T vectorUB;
  int32_T z_c;
  int16_T tmp_data[3001];
  int16_T b_i;
  boolean_T emlrtHadParallelError = false;
  boolean_T exitg1;
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  c_st.prev = &st;
  c_st.tls = st.tls;
  e_st.prev = &c_st;
  e_st.tls = c_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  Params->r = p_eqm[0];
  Params->w = p_eqm[1];
  /*  1 First solve the value function */
  n_a = a_grid_size[0];
  if (vfoptions->verbose >= 1.0) {
    emlrtAssertMATLABThread((emlrtCTX)sp, &emlrtRTEI);
    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 30, m, &u[0]);
    emlrtAssign(&y, m);
    st.site = &t_emlrtRSI;
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
  emxInit_real_T(sp, &ReturnMatrix, 3, &n_emlrtRTEI);
  scalarLB =
      ReturnMatrix->size[0] * ReturnMatrix->size[1] * ReturnMatrix->size[2];
  ReturnMatrix->size[0] = n_a;
  ReturnMatrix->size[1] = n_a;
  ReturnMatrix->size[2] = 40;
  emxEnsureCapacity_real_T(sp, ReturnMatrix, scalarLB, &g_emlrtRTEI);
  ReturnMatrix_data = ReturnMatrix->data;
  /*  tic */
  emlrtEnterParallelRegion((emlrtCTX)sp, omp_in_parallel());
  emlrtPushJmpBuf((emlrtCTX)sp, &emlrtJBStack);
  fun_VFI_parfor2_numThreads = emlrtAllocRegionTLSs(
      sp->tls, omp_in_parallel(), omp_get_max_threads(), omp_get_num_procs());
#pragma omp parallel num_threads(fun_VFI_parfor2_numThreads) private(          \
        F_data, cons_data, cons_size, cash, z, emlrtJBEnviron, j_st, a_c, d,   \
            b_scalarLB, vectorUB, i, tmp_data, b_i, p, b_tmp_data)             \
    firstprivate(b_st, i_st, emlrtHadParallelError)
  {
    if (setjmp(emlrtJBEnviron) == 0) {
      b_st.prev = sp;
      b_st.tls = emlrtAllocTLS((emlrtCTX)sp, omp_get_thread_num());
      b_st.site = NULL;
      emlrtSetJmpBuf(&b_st, &emlrtJBEnviron);
      i_st.prev = &b_st;
      i_st.tls = b_st.tls;
      j_st.prev = &i_st;
      j_st.tls = i_st.tls;
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
        for (a_c = 0; a_c < n_a; a_c++) {
          cons_size = a_grid_size[0];
          if (a_c + 1 > a_grid_size[0]) {
            emlrtDynamicBoundsCheckR2012b(a_c + 1, 1, a_grid_size[0], &emlrtBCI,
                                          &b_st);
          }
          d = a_grid_data[a_c];
          i_st.site = &emlrtRSI;
          cash = solve_entre(&i_st, d, z, w, r, lambda, delta, alpha, upsilon);
          cash = muDoubleScalarMax(w, cash) + (r + 1.0) * d;
          /*  cash depends only on (a,z) */
          b_scalarLB = (a_grid_size[0] / 2) << 1;
          vectorUB = b_scalarLB - 2;
          for (i = 0; i <= vectorUB; i += 2) {
            _mm_storeu_pd(
                &cons_data[i],
                _mm_sub_pd(_mm_set1_pd(cash), _mm_loadu_pd(&a_grid_data[i])));
          }
          for (i = b_scalarLB; i < cons_size; i++) {
            cons_data[i] = cash - a_grid_data[i];
          }
          /*  Now introduce a' */
          vectorUB = 0;
          b_scalarLB = 0;
          for (i = 0; i < cons_size; i++) {
            F_data[i] = rtMinusInf;
            if (cons_data[i] > 0.0) {
              vectorUB++;
              tmp_data[b_scalarLB] = (int16_T)i;
              b_scalarLB++;
            }
          }
          i_st.site = &b_emlrtRSI;
          for (i = 0; i < vectorUB; i++) {
            b_i = tmp_data[i];
            if (b_i > cons_size - 1) {
              emlrtDynamicBoundsCheckR2012b(b_i, 0, cons_size - 1, &c_emlrtBCI,
                                            &i_st);
            }
          }
          j_st.site = &l_emlrtRSI;
          if (vectorUB == 1) {
            if ((cons_data[tmp_data[0]] < 0.0) &&
                !muDoubleScalarIsNaN(1.0 - crra) &&
                (muDoubleScalarFloor(1.0 - crra) != 1.0 - crra)) {
              p = true;
            } else {
              p = false;
            }
          } else if (!muDoubleScalarIsNaN(1.0 - crra) &&
                     (muDoubleScalarFloor(1.0 - crra) != 1.0 - crra)) {
            p = false;
            for (i = 0; i < vectorUB; i++) {
              if (p || (cons_data[tmp_data[i]] < 0.0)) {
                p = true;
              }
            }
          } else {
            p = false;
          }
          if (p) {
            emlrtErrorWithMessageIdR2018a(&j_st, &b_emlrtRTEI,
                                          "Coder:toolbox:power_domainError",
                                          "Coder:toolbox:power_domainError", 0);
          }
          for (i = 0; i < vectorUB; i++) {
            b_tmp_data[i] =
                muDoubleScalarPower(cons_data[tmp_data[i]], 1.0 - crra) /
                (1.0 - crra);
          }
          if (vectorUB - 1 >= 0) {
            memcpy(&cons_data[0], &b_tmp_data[0],
                   (uint32_T)vectorUB * sizeof(real_T));
          }
          for (i = 0; i < vectorUB; i++) {
            b_i = tmp_data[i];
            if (b_i > cons_size - 1) {
              emlrtDynamicBoundsCheckR2012b(b_i, 0, cons_size - 1, &n_emlrtBCI,
                                            &b_st);
            }
            F_data[b_i] = cons_data[i];
          }
          if (a_c + 1 > a_grid_size[0]) {
            emlrtDynamicBoundsCheckR2012b(a_c + 1, 1, a_grid_size[0],
                                          &b_emlrtBCI, &b_st);
          }
          emlrtSubAssignSizeCheckR2012b(&a_grid_size[0], 1, &a_grid_size[0], 1,
                                        &emlrtECI, &b_st);
          for (i = 0; i < cons_size; i++) {
            ReturnMatrix_data[(i + ReturnMatrix->size[0] * a_c) +
                              ReturnMatrix->size[0] * ReturnMatrix->size[1] *
                                  z_c] = F_data[i];
          }
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
  emxInit_real_T(sp, &V0, 2, &o_emlrtRTEI);
  scalarLB = V0->size[0] * V0->size[1];
  V0->size[0] = n_a;
  V0->size[1] = 40;
  emxEnsureCapacity_real_T(sp, V0, scalarLB, &h_emlrtRTEI);
  V0_data = V0->data;
  /*  Initial guess V0 */
  scalarLB = V->size[0] * V->size[1];
  V->size[0] = n_a;
  V->size[1] = 40;
  emxEnsureCapacity_real_T(sp, V, scalarLB, &i_emlrtRTEI);
  V_data = V->data;
  scalarLB = Policy->size[0] * Policy->size[1];
  Policy->size[0] = n_a;
  Policy->size[1] = 40;
  emxEnsureCapacity_real_T(sp, Policy, scalarLB, &j_emlrtRTEI);
  Policy_data = Policy->data;
  r = vfoptions->tolerance + 1.0;
  for (k = 0; k < 40; k++) {
    for (b_k = 0; b_k < 40; b_k++) {
      pi_z_transposed[b_k + 40 * k] = pi_z[k + 40 * b_k];
    }
  }
  /*  tic */
  emxInit_real_T(sp, &EV, 2, &p_emlrtRTEI);
  emxInit_real_T(sp, &varargin_1, 1, &q_emlrtRTEI);
  emxInit_real_T(sp, &x, 1, &k_emlrtRTEI);
  while (r > vfoptions->tolerance) {
    st.site = &c_emlrtRSI;
    c_st.site = &m_emlrtRSI;
    mtimes(&c_st, V0, pi_z_transposed, EV);
    EV_data = EV->data;
    /* EV(a',z) */
    emlrtEnterParallelRegion((emlrtCTX)sp, omp_in_parallel());
    emlrtPushJmpBuf((emlrtCTX)sp, &emlrtJBStack);
    fun_VFI_parfor2_numThreads = emlrtAllocRegionTLSs(
        sp->tls, omp_in_parallel(), omp_get_max_threads(), omp_get_num_procs());
#pragma omp parallel num_threads(fun_VFI_parfor2_numThreads) private(          \
        entireRHS, maxid, tmpmax, d_st, b_a_c, aprime_c, emlrtJBEnviron)       \
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
      for (b_z_c = 0; b_z_c < 40; b_z_c++) {
        if (emlrtHadParallelError) {
          continue;
        }
        if (setjmp(emlrtJBEnviron) == 0) {
          for (b_a_c = 0; b_a_c < n_a; b_a_c++) {
            tmpmax = rtMinusInf;
            maxid = 1;
            for (aprime_c = 0; aprime_c < n_a; aprime_c++) {
              if (aprime_c + 1 > ReturnMatrix->size[0]) {
                emlrtDynamicBoundsCheckR2012b(
                    aprime_c + 1, 1, ReturnMatrix->size[0], &d_emlrtBCI, &d_st);
              }
              if (b_a_c + 1 > ReturnMatrix->size[0]) {
                emlrtDynamicBoundsCheckR2012b(
                    b_a_c + 1, 1, ReturnMatrix->size[0], &e_emlrtBCI, &d_st);
              }
              if (aprime_c + 1 > EV->size[0]) {
                emlrtDynamicBoundsCheckR2012b(aprime_c + 1, 1, EV->size[0],
                                              &f_emlrtBCI, &d_st);
              }
              entireRHS =
                  ReturnMatrix_data[(aprime_c + ReturnMatrix->size[0] * b_a_c) +
                                    ReturnMatrix->size[0] *
                                        ReturnMatrix->size[1] * b_z_c] +
                  beta * EV_data[aprime_c + EV->size[0] * b_z_c];
              if (tmpmax < entireRHS) {
                tmpmax = entireRHS;
                maxid = aprime_c + 1;
              }
              if (b_a_c + 1 > V->size[0]) {
                emlrtDynamicBoundsCheckR2012b(b_a_c + 1, 1, V->size[0],
                                              &g_emlrtBCI, &d_st);
              }
              V_data[b_a_c + V->size[0] * b_z_c] = tmpmax;
              if (b_a_c + 1 > Policy->size[0]) {
                emlrtDynamicBoundsCheckR2012b(b_a_c + 1, 1, Policy->size[0],
                                              &i_emlrtBCI, &d_st);
              }
              Policy_data[b_a_c + Policy->size[0] * b_z_c] = maxid;
              if (*emlrtBreakCheckR2012bFlagVar != 0) {
                emlrtBreakCheckR2012b(&d_st);
              }
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
    /*  -------------------------- Howard ----------------------------------% */
    r = 1.0;
    while (r < vfoptions->howards) {
      /*  for h_c = 1 : vfoptions.howards */
      st.site = &d_emlrtRSI;
      c_st.site = &m_emlrtRSI;
      mtimes(&c_st, V, pi_z_transposed, EV);
      EV_data = EV->data;
      emlrtEnterParallelRegion((emlrtCTX)sp, omp_in_parallel());
      emlrtPushJmpBuf((emlrtCTX)sp, &emlrtJBStack);
      fun_VFI_parfor2_numThreads =
          emlrtAllocRegionTLSs(sp->tls, omp_in_parallel(),
                               omp_get_max_threads(), omp_get_num_procs());
#pragma omp parallel num_threads(fun_VFI_parfor2_numThreads) private(          \
        aprime_opt, h_st, c_a_c, emlrtJBEnviron)                               \
    firstprivate(emlrtHadParallelError)
      {
        if (setjmp(emlrtJBEnviron) == 0) {
          h_st.prev = sp;
          h_st.tls = emlrtAllocTLS((emlrtCTX)sp, omp_get_thread_num());
          h_st.site = NULL;
          emlrtSetJmpBuf(&h_st, &emlrtJBEnviron);
        } else {
          emlrtHadParallelError = true;
        }
#pragma omp for nowait
        for (c_z_c = 0; c_z_c < 40; c_z_c++) {
          if (emlrtHadParallelError) {
            continue;
          }
          if (setjmp(emlrtJBEnviron) == 0) {
            for (c_a_c = 0; c_a_c < n_a; c_a_c++) {
              if (c_a_c + 1 > Policy->size[0]) {
                emlrtDynamicBoundsCheckR2012b(c_a_c + 1, 1, Policy->size[0],
                                              &h_emlrtBCI, &h_st);
              }
              aprime_opt =
                  (int32_T)Policy_data[c_a_c + Policy->size[0] * c_z_c];
              if (aprime_opt > ReturnMatrix->size[0]) {
                emlrtDynamicBoundsCheckR2012b(
                    aprime_opt, 1, ReturnMatrix->size[0], &j_emlrtBCI, &h_st);
              }
              if (c_a_c + 1 > ReturnMatrix->size[0]) {
                emlrtDynamicBoundsCheckR2012b(
                    c_a_c + 1, 1, ReturnMatrix->size[0], &k_emlrtBCI, &h_st);
              }
              if (aprime_opt > EV->size[0]) {
                emlrtDynamicBoundsCheckR2012b(aprime_opt, 1, EV->size[0],
                                              &l_emlrtBCI, &h_st);
              }
              if (c_a_c + 1 > V->size[0]) {
                emlrtDynamicBoundsCheckR2012b(c_a_c + 1, 1, V->size[0],
                                              &m_emlrtBCI, &h_st);
              }
              V_data[c_a_c + V->size[0] * c_z_c] =
                  ReturnMatrix_data
                      [((aprime_opt + ReturnMatrix->size[0] * c_a_c) +
                        ReturnMatrix->size[0] * ReturnMatrix->size[1] * c_z_c) -
                       1] +
                  beta * EV_data[(aprime_opt + EV->size[0] * c_z_c) - 1];
              if (*emlrtBreakCheckR2012bFlagVar != 0) {
                emlrtBreakCheckR2012b(&h_st);
              }
            }
            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b(&h_st);
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
    nx = V->size[0] * 40;
    scalarLB = V0->size[0] * 40;
    if ((nx != scalarLB) && ((nx != 1) && (scalarLB != 1))) {
      emlrtDimSizeImpxCheckR2021b(nx, scalarLB, &b_emlrtECI, (emlrtConstCTX)sp);
    }
    st.site = &e_emlrtRSI;
    if (nx == scalarLB) {
      scalarLB = x->size[0];
      x->size[0] = nx;
      emxEnsureCapacity_real_T(&st, x, scalarLB, &k_emlrtRTEI);
      x_data = x->data;
      scalarLB = (nx / 2) << 1;
      b_vectorUB = scalarLB - 2;
      for (k = 0; k <= b_vectorUB; k += 2) {
        _mm_storeu_pd(&x_data[k], _mm_sub_pd(_mm_loadu_pd(&V_data[k]),
                                             _mm_loadu_pd(&V0_data[k])));
      }
      for (k = scalarLB; k < nx; k++) {
        x_data[k] = V_data[k] - V0_data[k];
      }
    } else {
      c_st.site = &e_emlrtRSI;
      binary_expand_op(&c_st, x, V, V0);
      x_data = x->data;
    }
    nx = x->size[0];
    scalarLB = varargin_1->size[0];
    varargin_1->size[0] = x->size[0];
    emxEnsureCapacity_real_T(&st, varargin_1, scalarLB, &l_emlrtRTEI);
    EV_data = varargin_1->data;
    for (k = 0; k < nx; k++) {
      EV_data[k] = muDoubleScalarAbs(x_data[k]);
    }
    c_st.site = &p_emlrtRSI;
    e_st.site = &q_emlrtRSI;
    f_st.site = &r_emlrtRSI;
    g_st.site = &s_emlrtRSI;
    if (varargin_1->size[0] < 1) {
      emlrtErrorWithMessageIdR2018a(
          &g_st, &d_emlrtRTEI, "Coder:toolbox:eml_min_or_max_varDimZero",
          "Coder:toolbox:eml_min_or_max_varDimZero", 0);
    }
    if (varargin_1->size[0] <= 2) {
      if (varargin_1->size[0] == 1) {
        r = EV_data[0];
      } else if ((EV_data[0] < EV_data[1]) ||
                 (muDoubleScalarIsNaN(EV_data[0]) &&
                  !muDoubleScalarIsNaN(EV_data[1]))) {
        r = EV_data[1];
      } else {
        r = EV_data[0];
      }
    } else {
      if (!muDoubleScalarIsNaN(EV_data[0])) {
        b_vectorUB = 1;
      } else {
        b_vectorUB = 0;
        scalarLB = 2;
        exitg1 = false;
        while (!exitg1 && (scalarLB <= nx)) {
          if (!muDoubleScalarIsNaN(EV_data[scalarLB - 1])) {
            b_vectorUB = scalarLB;
            exitg1 = true;
          } else {
            scalarLB++;
          }
        }
      }
      if (b_vectorUB == 0) {
        r = EV_data[0];
      } else {
        r = EV_data[b_vectorUB - 1];
        for (b_k = b_vectorUB + 1; b_k <= nx; b_k++) {
          w = EV_data[b_k - 1];
          if (r < w) {
            r = w;
          }
        }
      }
    }
    /*  if verbose == 2 */
    /*      fprintf('iter = %4.0f, err = %f \n',iter,err) */
    /*  end */
    scalarLB = V0->size[0] * V0->size[1];
    V0->size[0] = V->size[0];
    V0->size[1] = 40;
    emxEnsureCapacity_real_T(sp, V0, scalarLB, &m_emlrtRTEI);
    V0_data = V0->data;
    scalarLB = V->size[0] * 40;
    for (b_k = 0; b_k < scalarLB; b_k++) {
      V0_data[b_k] = V_data[b_k];
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  emxFree_real_T(sp, &x);
  emxFree_real_T(sp, &varargin_1);
  emxFree_real_T(sp, &EV);
  emxFree_real_T(sp, &V0);
  emxFree_real_T(sp, &ReturnMatrix);
  /* end while */
  /*  time_vfi = toc; */
  /*   */
  /*  if verbose >= 1 */
  /*      fprintf('Time return matrix:       %8.6f \n',time_ret); */
  /*      fprintf('Time vfi:                 %8.6f \n',time_vfi); */
  /*      fprintf('Time return matrix + vfi: %8.6f \n',time_ret+time_vfi); */
  /*  end */
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

/* End of code generation (fun_VFI_parfor2.c) */
