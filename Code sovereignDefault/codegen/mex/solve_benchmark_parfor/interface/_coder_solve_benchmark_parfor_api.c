/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_solve_benchmark_parfor_api.c
 *
 * Code generation for function '_coder_solve_benchmark_parfor_api'
 *
 */

/* Include files */
#include "_coder_solve_benchmark_parfor_api.h"
#include "rt_nonfinite.h"
#include "solve_benchmark_parfor.h"
#include "solve_benchmark_parfor_data.h"
#include "solve_benchmark_parfor_mexutil.h"
#include "solve_benchmark_parfor_types.h"

/* Function Declarations */
static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                                   const char_T *identifier))[625];

static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[625];

static const mxArray *d_emlrt_marshallOut(real_T u[250000]);

static real_T (*e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                                   const char_T *identifier))[400];

static const mxArray *e_emlrt_marshallOut(real_T u[625]);

static real_T (*f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[400];

static const mxArray *f_emlrt_marshallOut(boolean_T u[250000]);

static real_T (*g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                                   const char_T *identifier))[390625];

static real_T (*h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[390625];

static real_T (*i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                                   const char_T *identifier))[8];

static real_T (*j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[8];

static real_T (*l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[625];

static real_T (*m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[400];

static real_T (*n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[390625];

static real_T (*o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[8];

/* Function Definitions */
static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                                   const char_T *identifier))[625]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[625];
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = d_emlrt_marshallIn(sp, emlrtAlias(nullptr), &thisId);
  emlrtDestroyArray(&nullptr);
  return y;
}

static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[625]
{
  real_T(*y)[625];
  y = l_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static const mxArray *d_emlrt_marshallOut(real_T u[250000])
{
  static const int32_T iv[2] = {0, 0};
  static const int32_T iv1[2] = {625, 400};
  const mxArray *m;
  const mxArray *y;
  void *existingData;
  y = NULL;
  m = emlrtCreateNumericArray(2, (const void *)&iv[0], mxDOUBLE_CLASS, mxREAL);
  existingData = emlrtMxGetData((mxArray *)m);
  if (existingData != (void *)&u[0]) {
    emlrtFreeMex(existingData);
  }
  emlrtMxSetData((mxArray *)m, &u[0]);
  emlrtSetDimensions((mxArray *)m, &iv1[0], 2);
  emlrtAssign(&y, m);
  return y;
}

static real_T (*e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                                   const char_T *identifier))[400]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[400];
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = f_emlrt_marshallIn(sp, emlrtAlias(nullptr), &thisId);
  emlrtDestroyArray(&nullptr);
  return y;
}

static const mxArray *e_emlrt_marshallOut(real_T u[625])
{
  static const int32_T i = 0;
  static const int32_T i1 = 625;
  const mxArray *m;
  const mxArray *y;
  void *existingData;
  y = NULL;
  m = emlrtCreateNumericArray(1, (const void *)&i, mxDOUBLE_CLASS, mxREAL);
  existingData = emlrtMxGetData((mxArray *)m);
  if (existingData != (void *)&u[0]) {
    emlrtFreeMex(existingData);
  }
  emlrtMxSetData((mxArray *)m, &u[0]);
  emlrtSetDimensions((mxArray *)m, &i1, 1);
  emlrtAssign(&y, m);
  return y;
}

static real_T (*f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[400]
{
  real_T(*y)[400];
  y = m_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static const mxArray *f_emlrt_marshallOut(boolean_T u[250000])
{
  static const int32_T iv[2] = {0, 0};
  static const int32_T iv1[2] = {625, 400};
  const mxArray *m;
  const mxArray *y;
  void *existingData;
  y = NULL;
  m = emlrtCreateLogicalArray(2, &iv[0]);
  existingData = emlrtMxGetData((mxArray *)m);
  if (existingData != (void *)&u[0]) {
    emlrtFreeMex(existingData);
  }
  emlrtMxSetData((mxArray *)m, &u[0]);
  emlrtSetDimensions((mxArray *)m, &iv1[0], 2);
  emlrtAssign(&y, m);
  return y;
}

static real_T (*g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                                   const char_T *identifier))[390625]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[390625];
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = h_emlrt_marshallIn(sp, emlrtAlias(nullptr), &thisId);
  emlrtDestroyArray(&nullptr);
  return y;
}

static real_T (*h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[390625]
{
  real_T(*y)[390625];
  y = n_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T (*i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                                   const char_T *identifier))[8]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[8];
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = j_emlrt_marshallIn(sp, emlrtAlias(nullptr), &thisId);
  emlrtDestroyArray(&nullptr);
  return y;
}

static real_T (*j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[8]
{
  real_T(*y)[8];
  y = o_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T (*l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[625]
{
  static const int32_T dims = 625;
  real_T(*ret)[625];
  int32_T i;
  boolean_T b = false;
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 1U,
                            (const void *)&dims, &b, &i);
  ret = (real_T(*)[625])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T (*m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[400]
{
  static const int32_T dims = 400;
  real_T(*ret)[400];
  int32_T i;
  boolean_T b = false;
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 1U,
                            (const void *)&dims, &b, &i);
  ret = (real_T(*)[400])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T (*n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[390625]
{
  static const int32_T dims[2] = {625, 625};
  real_T(*ret)[390625];
  int32_T iv[2];
  boolean_T bv[2] = {false, false};
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 2U,
                            (const void *)&dims[0], &bv[0], &iv[0]);
  ret = (real_T(*)[390625])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T (*o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[8]
{
  static const int32_T dims[2] = {1, 8};
  real_T(*ret)[8];
  int32_T iv[2];
  boolean_T bv[2] = {false, false};
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 2U,
                            (const void *)&dims[0], &bv[0], &iv[0]);
  ret = (real_T(*)[8])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

void solve_benchmark_parfor_api(solve_benchmark_parforStackData *SD,
                                const mxArray *const prhs[5], int32_T nlhs,
                                const mxArray *plhs[9])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  real_T(*pdf)[390625];
  real_T(*bp)[250000];
  real_T(*q)[250000];
  real_T(*rr)[250000];
  real_T(*vp)[250000];
  real_T(*bpr)[625];
  real_T(*m)[625];
  real_T(*vd)[625];
  real_T(*z)[625];
  real_T(*b)[400];
  real_T(*para)[8];
  real_T avgtime;
  real_T totaltime;
  boolean_T(*b_default)[250000];
  st.tls = emlrtRootTLSGlobal;
  vp = (real_T(*)[250000])mxMalloc(sizeof(real_T[250000]));
  vd = (real_T(*)[625])mxMalloc(sizeof(real_T[625]));
  q = (real_T(*)[250000])mxMalloc(sizeof(real_T[250000]));
  bp = (real_T(*)[250000])mxMalloc(sizeof(real_T[250000]));
  bpr = (real_T(*)[625])mxMalloc(sizeof(real_T[625]));
  b_default = (boolean_T(*)[250000])mxMalloc(sizeof(boolean_T[250000]));
  rr = (real_T(*)[250000])mxMalloc(sizeof(real_T[250000]));
  /* Marshall function inputs */
  z = c_emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "z");
  m = c_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "m");
  b = e_emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "b");
  pdf = g_emlrt_marshallIn(&st, emlrtAlias(prhs[3]), "pdf");
  para = i_emlrt_marshallIn(&st, emlrtAlias(prhs[4]), "para");
  /* Invoke the target function */
  solve_benchmark_parfor(SD, &st, *z, *m, *b, *pdf, *para, *vp, *vd, *q, *bp,
                         *bpr, *b_default, *rr, &totaltime, &avgtime);
  /* Marshall function outputs */
  plhs[0] = d_emlrt_marshallOut(*vp);
  if (nlhs > 1) {
    plhs[1] = e_emlrt_marshallOut(*vd);
  }
  if (nlhs > 2) {
    plhs[2] = d_emlrt_marshallOut(*q);
  }
  if (nlhs > 3) {
    plhs[3] = d_emlrt_marshallOut(*bp);
  }
  if (nlhs > 4) {
    plhs[4] = e_emlrt_marshallOut(*bpr);
  }
  if (nlhs > 5) {
    plhs[5] = f_emlrt_marshallOut(*b_default);
  }
  if (nlhs > 6) {
    plhs[6] = d_emlrt_marshallOut(*rr);
  }
  if (nlhs > 7) {
    plhs[7] = b_emlrt_marshallOut(totaltime);
  }
  if (nlhs > 8) {
    plhs[8] = b_emlrt_marshallOut(avgtime);
  }
}

/* End of code generation (_coder_solve_benchmark_parfor_api.c) */
