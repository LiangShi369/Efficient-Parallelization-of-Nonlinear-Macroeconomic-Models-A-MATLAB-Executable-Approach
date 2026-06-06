/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_solve_benchmark_api.c
 *
 * Code generation for function '_coder_solve_benchmark_api'
 *
 */

/* Include files */
#include "_coder_solve_benchmark_api.h"
#include "rt_nonfinite.h"
#include "solve_benchmark.h"
#include "solve_benchmark_data.h"
#include "solve_benchmark_emxutil.h"
#include "solve_benchmark_mexutil.h"
#include "solve_benchmark_types.h"

/* Variable Definitions */
static emlrtRTEInfo lb_emlrtRTEI = {
    1,                            /* lineNo */
    1,                            /* colNo */
    "_coder_solve_benchmark_api", /* fName */
    ""                            /* pName */
};

/* Function Declarations */
static real_T *c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                                  const char_T *identifier, int32_T *y_size);

static real_T *d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                  const emlrtMsgIdentifier *parentId,
                                  int32_T *y_size);

static const mxArray *d_emlrt_marshallOut(emxArray_real_T *u);

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                               const char_T *identifier, emxArray_real_T *y);

static const mxArray *e_emlrt_marshallOut(real_T u_data[],
                                          const int32_T *u_size);

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y);

static const mxArray *f_emlrt_marshallOut(emxArray_boolean_T *u);

static real_T (*g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                                   const char_T *identifier))[8];

static real_T (*h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[8];

static real_T *j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                  const emlrtMsgIdentifier *msgId,
                                  int32_T *ret_size);

static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               emxArray_real_T *ret);

static real_T (*l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[8];

/* Function Definitions */
static real_T *c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                                  const char_T *identifier, int32_T *y_size)
{
  emlrtMsgIdentifier thisId;
  real_T *y_data;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y_data = d_emlrt_marshallIn(sp, emlrtAlias(nullptr), &thisId, y_size);
  emlrtDestroyArray(&nullptr);
  return y_data;
}

static real_T *d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                  const emlrtMsgIdentifier *parentId,
                                  int32_T *y_size)
{
  real_T *y_data;
  y_data = j_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y_size);
  emlrtDestroyArray(&u);
  return y_data;
}

static const mxArray *d_emlrt_marshallOut(emxArray_real_T *u)
{
  static const int32_T iv[2] = {0, 0};
  const mxArray *m;
  const mxArray *y;
  real_T *u_data;
  void *existingData;
  u_data = u->data;
  y = NULL;
  m = emlrtCreateNumericArray(2, (const void *)&iv[0], mxDOUBLE_CLASS, mxREAL);
  existingData = emlrtMxGetData((mxArray *)m);
  if (existingData != (void *)&u_data[0]) {
    emlrtFreeMex(existingData);
  }
  emlrtMxSetData((mxArray *)m, &u_data[0]);
  emlrtSetDimensions((mxArray *)m, &u->size[0], 2);
  u->canFreeData = false;
  emlrtAssign(&y, m);
  return y;
}

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                               const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  f_emlrt_marshallIn(sp, emlrtAlias(nullptr), &thisId, y);
  emlrtDestroyArray(&nullptr);
}

static const mxArray *e_emlrt_marshallOut(real_T u_data[],
                                          const int32_T *u_size)
{
  static const int32_T i = 0;
  const mxArray *m;
  const mxArray *y;
  void *existingData;
  y = NULL;
  m = emlrtCreateNumericArray(1, (const void *)&i, mxDOUBLE_CLASS, mxREAL);
  existingData = emlrtMxGetData((mxArray *)m);
  if (existingData != (void *)&u_data[0]) {
    emlrtFreeMex(existingData);
  }
  emlrtMxSetData((mxArray *)m, &u_data[0]);
  emlrtSetDimensions((mxArray *)m, u_size, 1);
  emlrtAssign(&y, m);
  return y;
}

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y)
{
  k_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *f_emlrt_marshallOut(emxArray_boolean_T *u)
{
  static const int32_T iv[2] = {0, 0};
  const mxArray *m;
  const mxArray *y;
  boolean_T *u_data;
  void *existingData;
  u_data = u->data;
  y = NULL;
  m = emlrtCreateLogicalArray(2, &iv[0]);
  existingData = emlrtMxGetData((mxArray *)m);
  if (existingData != (void *)&u_data[0]) {
    emlrtFreeMex(existingData);
  }
  emlrtMxSetData((mxArray *)m, &u_data[0]);
  emlrtSetDimensions((mxArray *)m, &u->size[0], 2);
  u->canFreeData = false;
  emlrtAssign(&y, m);
  return y;
}

static real_T (*g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                                   const char_T *identifier))[8]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[8];
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = h_emlrt_marshallIn(sp, emlrtAlias(nullptr), &thisId);
  emlrtDestroyArray(&nullptr);
  return y;
}

static real_T (*h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[8]
{
  real_T(*y)[8];
  y = l_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T *j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                  const emlrtMsgIdentifier *msgId,
                                  int32_T *ret_size)
{
  static const int32_T dims = 1000;
  real_T *ret_data;
  boolean_T b = true;
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 1U,
                            (const void *)&dims, &b, ret_size);
  ret_data = (real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret_data;
}

static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               emxArray_real_T *ret)
{
  static const int32_T dims[2] = {1000, 1000};
  int32_T iv[2];
  int32_T i;
  boolean_T bv[2] = {true, true};
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 2U,
                            (const void *)&dims[0], &bv[0], &iv[0]);
  ret->allocatedSize = iv[0] * iv[1];
  i = ret->size[0] * ret->size[1];
  ret->size[0] = iv[0];
  ret->size[1] = iv[1];
  emxEnsureCapacity_real_T(sp, ret, i, (emlrtRTEInfo *)NULL);
  ret->data = (real_T *)emlrtMxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static real_T (*l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
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

void solve_benchmark_api(const mxArray *const prhs[5], int32_T nlhs,
                         const mxArray *plhs[9])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  emxArray_boolean_T *b_default;
  emxArray_real_T *bp;
  emxArray_real_T *pdf;
  emxArray_real_T *q;
  emxArray_real_T *rr;
  emxArray_real_T *vp;
  const mxArray *prhs_copy_idx_4;
  real_T(*b_data)[1000];
  real_T(*bpr_data)[1000];
  real_T(*m_data)[1000];
  real_T(*vd_data)[1000];
  real_T(*z_data)[1000];
  real_T(*para)[8];
  real_T avgtime;
  real_T totaltime;
  int32_T b_size;
  int32_T bpr_size;
  int32_T m_size;
  int32_T vd_size;
  int32_T z_size;
  st.tls = emlrtRootTLSGlobal;
  vd_data = (real_T(*)[1000])mxMalloc(sizeof(real_T[1000]));
  bpr_data = (real_T(*)[1000])mxMalloc(sizeof(real_T[1000]));
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  prhs_copy_idx_4 = prhs[4];
  /* Marshall function inputs */
  *(real_T **)&z_data =
      c_emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "z", &z_size);
  *(real_T **)&m_data =
      c_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "m", &m_size);
  *(real_T **)&b_data =
      c_emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "b", &b_size);
  emxInit_real_T(&st, &pdf, 2, &lb_emlrtRTEI);
  pdf->canFreeData = false;
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[3]), "pdf", pdf);
  para = g_emlrt_marshallIn(&st, emlrtAlias(prhs_copy_idx_4), "para");
  /* Invoke the target function */
  emxInit_real_T(&st, &vp, 2, &lb_emlrtRTEI);
  emxInit_real_T(&st, &q, 2, &lb_emlrtRTEI);
  emxInit_real_T(&st, &bp, 2, &lb_emlrtRTEI);
  emxInit_boolean_T(&st, &b_default, &lb_emlrtRTEI);
  emxInit_real_T(&st, &rr, 2, &lb_emlrtRTEI);
  solve_benchmark(&st, *z_data, &z_size, *m_data, &m_size, *b_data, &b_size,
                  pdf, *para, vp, *vd_data, &vd_size, q, bp, *bpr_data,
                  &bpr_size, b_default, rr, &totaltime, &avgtime);
  emxFree_real_T(&st, &pdf);
  /* Marshall function outputs */
  plhs[0] = d_emlrt_marshallOut(vp);
  emxFree_real_T(&st, &vp);
  if (nlhs > 1) {
    plhs[1] = e_emlrt_marshallOut(*vd_data, &vd_size);
  }
  if (nlhs > 2) {
    plhs[2] = d_emlrt_marshallOut(q);
  }
  emxFree_real_T(&st, &q);
  if (nlhs > 3) {
    plhs[3] = d_emlrt_marshallOut(bp);
  }
  emxFree_real_T(&st, &bp);
  if (nlhs > 4) {
    plhs[4] = e_emlrt_marshallOut(*bpr_data, &bpr_size);
  }
  if (nlhs > 5) {
    plhs[5] = f_emlrt_marshallOut(b_default);
  }
  emxFree_boolean_T(&st, &b_default);
  if (nlhs > 6) {
    plhs[6] = d_emlrt_marshallOut(rr);
  }
  emxFree_real_T(&st, &rr);
  if (nlhs > 7) {
    plhs[7] = b_emlrt_marshallOut(totaltime);
  }
  if (nlhs > 8) {
    plhs[8] = b_emlrt_marshallOut(avgtime);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_solve_benchmark_api.c) */
