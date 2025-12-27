/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_solver_bruteforce_api.c
 *
 * Code generation for function '_coder_solver_bruteforce_api'
 *
 */

/* Include files */
#include "_coder_solver_bruteforce_api.h"
#include "rt_nonfinite.h"
#include "solver_bruteforce.h"
#include "solver_bruteforce_data.h"
#include "solver_bruteforce_mexutil.h"
#include "solver_bruteforce_types.h"

/* Function Declarations */
static const mxArray *b_emlrt_marshallOut(const real_T u[250000]);

static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                                   const char_T *identifier))[400];

static const mxArray *c_emlrt_marshallOut(const boolean_T u[250000]);

static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[400];

static real_T (*e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                                   const char_T *identifier))[625];

static real_T (*f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[625];

static real_T (*g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                                   const char_T *identifier))[390625];

static real_T (*h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[390625];

static struct0_T i_emlrt_marshallIn(const emlrtStack *sp,
                                    const mxArray *nullptr,
                                    const char_T *identifier);

static struct0_T j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                    const emlrtMsgIdentifier *parentId);

static real_T (*l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[400];

static real_T (*m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[625];

static real_T (*n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[390625];

/* Function Definitions */
static const mxArray *b_emlrt_marshallOut(const real_T u[250000])
{
  static const int32_T iv[2] = {0, 0};
  static const int32_T iv1[2] = {625, 400};
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateNumericArray(2, (const void *)&iv[0], mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m, (void *)&u[0]);
  emlrtSetDimensions((mxArray *)m, &iv1[0], 2);
  emlrtAssign(&y, m);
  return y;
}

static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                                   const char_T *identifier))[400]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[400];
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = d_emlrt_marshallIn(sp, emlrtAlias(nullptr), &thisId);
  emlrtDestroyArray(&nullptr);
  return y;
}

static const mxArray *c_emlrt_marshallOut(const boolean_T u[250000])
{
  static const int32_T iv[2] = {0, 0};
  static const int32_T iv1[2] = {625, 400};
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateLogicalArray(2, &iv[0]);
  emlrtMxSetData((mxArray *)m, (void *)&u[0]);
  emlrtSetDimensions((mxArray *)m, &iv1[0], 2);
  emlrtAssign(&y, m);
  return y;
}

static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[400]
{
  real_T(*y)[400];
  y = l_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T (*e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                                   const char_T *identifier))[625]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[625];
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = f_emlrt_marshallIn(sp, emlrtAlias(nullptr), &thisId);
  emlrtDestroyArray(&nullptr);
  return y;
}

static real_T (*f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[625]
{
  real_T(*y)[625];
  y = m_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
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

static struct0_T i_emlrt_marshallIn(const emlrtStack *sp,
                                    const mxArray *nullptr,
                                    const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  struct0_T y;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = j_emlrt_marshallIn(sp, emlrtAlias(nullptr), &thisId);
  emlrtDestroyArray(&nullptr);
  return y;
}

static struct0_T j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                    const emlrtMsgIdentifier *parentId)
{
  static const int32_T dims = 0;
  static const char_T *fieldNames[5] = {"phi0", "rstar", "theta", "sigg",
                                        "betta"};
  emlrtMsgIdentifier thisId;
  struct0_T y;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b((emlrtConstCTX)sp, parentId, u, 5,
                         (const char_T **)&fieldNames[0], 0U,
                         (const void *)&dims);
  thisId.fIdentifier = "phi0";
  y.phi0 = b_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 0, "phi0")),
      &thisId);
  thisId.fIdentifier = "rstar";
  y.rstar = b_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 1, "rstar")),
      &thisId);
  thisId.fIdentifier = "theta";
  y.theta = b_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 2, "theta")),
      &thisId);
  thisId.fIdentifier = "sigg";
  y.sigg = b_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 3, "sigg")),
      &thisId);
  thisId.fIdentifier = "betta";
  y.betta = b_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 4, "betta")),
      &thisId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T (*l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
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

static real_T (*m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
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

void solver_bruteforce_api(solver_bruteforceStackData *SD,
                           const mxArray *const prhs[5], int32_T nlhs,
                           const mxArray *plhs[6])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  struct0_T para;
  real_T(*pdf)[390625];
  real_T(*bp)[250000];
  real_T(*q)[250000];
  real_T(*vp)[250000];
  real_T(*m)[625];
  real_T(*z)[625];
  real_T(*b)[400];
  real_T avgtime;
  real_T totaltime;
  boolean_T(*def)[250000];
  st.tls = emlrtRootTLSGlobal;
  q = (real_T(*)[250000])mxMalloc(sizeof(real_T[250000]));
  bp = (real_T(*)[250000])mxMalloc(sizeof(real_T[250000]));
  vp = (real_T(*)[250000])mxMalloc(sizeof(real_T[250000]));
  def = (boolean_T(*)[250000])mxMalloc(sizeof(boolean_T[250000]));
  /* Marshall function inputs */
  b = c_emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "b");
  z = e_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "z");
  m = e_emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "m");
  pdf = g_emlrt_marshallIn(&st, emlrtAlias(prhs[3]), "pdf");
  para = i_emlrt_marshallIn(&st, emlrtAliasP(prhs[4]), "para");
  /* Invoke the target function */
  solver_bruteforce(SD, &st, *b, *z, *m, *pdf, &para, *q, *bp, *vp, *def,
                    &totaltime, &avgtime);
  /* Marshall function outputs */
  plhs[0] = b_emlrt_marshallOut(*q);
  if (nlhs > 1) {
    plhs[1] = b_emlrt_marshallOut(*bp);
  }
  if (nlhs > 2) {
    plhs[2] = b_emlrt_marshallOut(*vp);
  }
  if (nlhs > 3) {
    plhs[3] = c_emlrt_marshallOut(*def);
  }
  if (nlhs > 4) {
    plhs[4] = emlrt_marshallOut(totaltime);
  }
  if (nlhs > 5) {
    plhs[5] = emlrt_marshallOut(avgtime);
  }
}

/* End of code generation (_coder_solver_bruteforce_api.c) */
