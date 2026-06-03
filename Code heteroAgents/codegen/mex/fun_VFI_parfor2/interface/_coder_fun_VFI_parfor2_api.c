/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_fun_VFI_parfor2_api.c
 *
 * Code generation for function '_coder_fun_VFI_parfor2_api'
 *
 */

/* Include files */
#include "_coder_fun_VFI_parfor2_api.h"
#include "fun_VFI_parfor2.h"
#include "fun_VFI_parfor2_data.h"
#include "fun_VFI_parfor2_types.h"
#include "rt_nonfinite.h"

/* Function Declarations */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[2];

static const mxArray *b_emlrt_marshallOut(const struct0_T *u);

static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                                   const char_T *identifier))[2001];

static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[2001];

static real_T (*e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                                   const char_T *identifier))[40];

static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                                 const char_T *identifier))[2];

static const mxArray *emlrt_marshallOut(real_T u[80040]);

static real_T (*f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[40];

static real_T (*g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                                   const char_T *identifier))[1600];

static real_T (*h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[1600];

static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                               const char_T *identifier, struct0_T *y);

static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               struct0_T *y);

static real_T k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId);

static struct1_T l_emlrt_marshallIn(const emlrtStack *sp,
                                    const mxArray *nullptr,
                                    const char_T *identifier);

static struct1_T m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                    const emlrtMsgIdentifier *parentId);

static real_T (*n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[2];

static real_T (*o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[2001];

static real_T (*p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[40];

static real_T (*q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[1600];

static real_T r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                 const emlrtMsgIdentifier *msgId);

/* Function Definitions */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[2]
{
  real_T(*y)[2];
  y = n_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static const mxArray *b_emlrt_marshallOut(const struct0_T *u)
{
  static const char_T *sv[10] = {"crra", "beta", "delta",  "alpha", "upsilon",
                                 "psi",  "eta",  "lambda", "r",     "w"};
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *i_y;
  const mxArray *j_y;
  const mxArray *k_y;
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 10, (const char_T **)&sv[0]));
  b_y = NULL;
  m = emlrtCreateDoubleScalar(u->crra);
  emlrtAssign(&b_y, m);
  emlrtSetFieldR2017b(y, 0, "crra", b_y, 0);
  c_y = NULL;
  m = emlrtCreateDoubleScalar(u->beta);
  emlrtAssign(&c_y, m);
  emlrtSetFieldR2017b(y, 0, "beta", c_y, 1);
  d_y = NULL;
  m = emlrtCreateDoubleScalar(u->delta);
  emlrtAssign(&d_y, m);
  emlrtSetFieldR2017b(y, 0, "delta", d_y, 2);
  e_y = NULL;
  m = emlrtCreateDoubleScalar(u->alpha);
  emlrtAssign(&e_y, m);
  emlrtSetFieldR2017b(y, 0, "alpha", e_y, 3);
  f_y = NULL;
  m = emlrtCreateDoubleScalar(u->upsilon);
  emlrtAssign(&f_y, m);
  emlrtSetFieldR2017b(y, 0, "upsilon", f_y, 4);
  g_y = NULL;
  m = emlrtCreateDoubleScalar(u->psi);
  emlrtAssign(&g_y, m);
  emlrtSetFieldR2017b(y, 0, "psi", g_y, 5);
  h_y = NULL;
  m = emlrtCreateDoubleScalar(u->eta);
  emlrtAssign(&h_y, m);
  emlrtSetFieldR2017b(y, 0, "eta", h_y, 6);
  i_y = NULL;
  m = emlrtCreateDoubleScalar(u->lambda);
  emlrtAssign(&i_y, m);
  emlrtSetFieldR2017b(y, 0, "lambda", i_y, 7);
  j_y = NULL;
  m = emlrtCreateDoubleScalar(u->r);
  emlrtAssign(&j_y, m);
  emlrtSetFieldR2017b(y, 0, "r", j_y, 8);
  k_y = NULL;
  m = emlrtCreateDoubleScalar(u->w);
  emlrtAssign(&k_y, m);
  emlrtSetFieldR2017b(y, 0, "w", k_y, 9);
  return y;
}

static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                                   const char_T *identifier))[2001]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[2001];
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = d_emlrt_marshallIn(sp, emlrtAlias(nullptr), &thisId);
  emlrtDestroyArray(&nullptr);
  return y;
}

static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[2001]
{
  real_T(*y)[2001];
  y = o_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T (*e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                                   const char_T *identifier))[40]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[40];
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = f_emlrt_marshallIn(sp, emlrtAlias(nullptr), &thisId);
  emlrtDestroyArray(&nullptr);
  return y;
}

static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                                 const char_T *identifier))[2]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[2];
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(nullptr), &thisId);
  emlrtDestroyArray(&nullptr);
  return y;
}

static const mxArray *emlrt_marshallOut(real_T u[80040])
{
  static const int32_T iv[2] = {0, 0};
  static const int32_T iv1[2] = {2001, 40};
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

static real_T (*f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[40]
{
  real_T(*y)[40];
  y = p_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T (*g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                                   const char_T *identifier))[1600]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[1600];
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = h_emlrt_marshallIn(sp, emlrtAlias(nullptr), &thisId);
  emlrtDestroyArray(&nullptr);
  return y;
}

static real_T (*h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[1600]
{
  real_T(*y)[1600];
  y = q_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                               const char_T *identifier, struct0_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  j_emlrt_marshallIn(sp, emlrtAlias(nullptr), &thisId, y);
  emlrtDestroyArray(&nullptr);
}

static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, struct0_T *y)
{
  static const int32_T dims = 0;
  static const char_T *fieldNames[10] = {"crra",    "beta", "delta", "alpha",
                                         "upsilon", "psi",  "eta",   "lambda",
                                         "r",       "w"};
  emlrtMsgIdentifier thisId;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b((emlrtConstCTX)sp, parentId, u, 10,
                         (const char_T **)&fieldNames[0], 0U,
                         (const void *)&dims);
  thisId.fIdentifier = "crra";
  y->crra = k_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 0, "crra")),
      &thisId);
  thisId.fIdentifier = "beta";
  y->beta = k_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 1, "beta")),
      &thisId);
  thisId.fIdentifier = "delta";
  y->delta = k_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 2, "delta")),
      &thisId);
  thisId.fIdentifier = "alpha";
  y->alpha = k_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 3, "alpha")),
      &thisId);
  thisId.fIdentifier = "upsilon";
  y->upsilon = k_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 4, "upsilon")),
      &thisId);
  thisId.fIdentifier = "psi";
  y->psi = k_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 5, "psi")),
      &thisId);
  thisId.fIdentifier = "eta";
  y->eta = k_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 6, "eta")),
      &thisId);
  thisId.fIdentifier = "lambda";
  y->lambda = k_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 7, "lambda")),
      &thisId);
  thisId.fIdentifier = "r";
  y->r = k_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 8, "r")),
      &thisId);
  thisId.fIdentifier = "w";
  y->w = k_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 9, "w")),
      &thisId);
  emlrtDestroyArray(&u);
}

static real_T k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = r_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static struct1_T l_emlrt_marshallIn(const emlrtStack *sp,
                                    const mxArray *nullptr,
                                    const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  struct1_T y;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = m_emlrt_marshallIn(sp, emlrtAlias(nullptr), &thisId);
  emlrtDestroyArray(&nullptr);
  return y;
}

static struct1_T m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                    const emlrtMsgIdentifier *parentId)
{
  static const int32_T dims = 0;
  static const char_T *fieldNames[4] = {"verbose", "lowmemory", "tolerance",
                                        "howards"};
  emlrtMsgIdentifier thisId;
  struct1_T y;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b((emlrtConstCTX)sp, parentId, u, 4,
                         (const char_T **)&fieldNames[0], 0U,
                         (const void *)&dims);
  thisId.fIdentifier = "verbose";
  y.verbose = k_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 0, "verbose")),
      &thisId);
  thisId.fIdentifier = "lowmemory";
  y.lowmemory = k_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 1, "lowmemory")),
      &thisId);
  thisId.fIdentifier = "tolerance";
  y.tolerance = k_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 2, "tolerance")),
      &thisId);
  thisId.fIdentifier = "howards";
  y.howards = k_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 3, "howards")),
      &thisId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T (*n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[2]
{
  static const int32_T dims[2] = {1, 2};
  real_T(*ret)[2];
  int32_T iv[2];
  boolean_T bv[2] = {false, false};
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 2U,
                            (const void *)&dims[0], &bv[0], &iv[0]);
  ret = (real_T(*)[2])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T (*o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[2001]
{
  static const int32_T dims = 2001;
  real_T(*ret)[2001];
  int32_T i;
  boolean_T b = false;
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 1U,
                            (const void *)&dims, &b, &i);
  ret = (real_T(*)[2001])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T (*p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[40]
{
  static const int32_T dims = 40;
  real_T(*ret)[40];
  int32_T i;
  boolean_T b = false;
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 1U,
                            (const void *)&dims, &b, &i);
  ret = (real_T(*)[40])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T (*q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[1600]
{
  static const int32_T dims[2] = {40, 40};
  real_T(*ret)[1600];
  int32_T iv[2];
  boolean_T bv[2] = {false, false};
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 2U,
                            (const void *)&dims[0], &bv[0], &iv[0]);
  ret = (real_T(*)[1600])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
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

void fun_VFI_parfor2_api(fun_VFI_parfor2StackData *SD,
                         const mxArray *const prhs[6], int32_T nlhs,
                         const mxArray *plhs[3])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  struct0_T Params;
  struct1_T vfoptions;
  real_T(*Policy)[80040];
  real_T(*V)[80040];
  real_T(*a_grid)[2001];
  real_T(*pi_z)[1600];
  real_T(*z_grid)[40];
  real_T(*p_eqm)[2];
  st.tls = emlrtRootTLSGlobal;
  V = (real_T(*)[80040])mxMalloc(sizeof(real_T[80040]));
  Policy = (real_T(*)[80040])mxMalloc(sizeof(real_T[80040]));
  /* Marshall function inputs */
  p_eqm = emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "p_eqm");
  a_grid = c_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "a_grid");
  z_grid = e_emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "z_grid");
  pi_z = g_emlrt_marshallIn(&st, emlrtAlias(prhs[3]), "pi_z");
  i_emlrt_marshallIn(&st, emlrtAliasP(prhs[4]), "Params", &Params);
  vfoptions = l_emlrt_marshallIn(&st, emlrtAliasP(prhs[5]), "vfoptions");
  /* Invoke the target function */
  fun_VFI_parfor2(SD, &st, *p_eqm, *a_grid, *z_grid, *pi_z, &Params, &vfoptions,
                  *V, *Policy);
  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(*V);
  if (nlhs > 1) {
    plhs[1] = emlrt_marshallOut(*Policy);
  }
  if (nlhs > 2) {
    plhs[2] = b_emlrt_marshallOut(&Params);
  }
}

/* End of code generation (_coder_fun_VFI_parfor2_api.c) */
