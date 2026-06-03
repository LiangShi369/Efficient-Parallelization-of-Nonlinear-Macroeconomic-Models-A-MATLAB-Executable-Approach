//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// _coder_model_subfuns_cuda_fused_api.cu
//
// Code generation for function '_coder_model_subfuns_cuda_fused_api'
//

// Include files
#include "_coder_model_subfuns_cuda_fused_api.h"
#include "model_subfuns_cuda_fused.h"
#include "model_subfuns_cuda_fused_data.h"
#include "model_subfuns_cuda_fused_mexutil.h"
#include "model_subfuns_cuda_fused_types.h"
#include "rt_nonfinite.h"

// Function Declarations
static real_T (*b_emlrt_marshallIn(const mxArray *b_nullptr,
                                   const char_T *identifier))[2];

static real_T (*b_emlrt_marshallIn(const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[2];

static real_T (*c_emlrt_marshallIn(const mxArray *b_nullptr,
                                   const char_T *identifier))[2001];

static real_T (*c_emlrt_marshallIn(const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[2001];

static real_T (*d_emlrt_marshallIn(const mxArray *b_nullptr,
                                   const char_T *identifier))[40];

static real_T (*d_emlrt_marshallIn(const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[40];

static real_T (*e_emlrt_marshallIn(const mxArray *b_nullptr,
                                   const char_T *identifier))[1600];

static real_T (*e_emlrt_marshallIn(const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[1600];

static void emlrt_marshallIn(const mxArray *b_nullptr, const char_T *identifier,
                             struct0_T *y);

static void emlrt_marshallIn(const mxArray *u,
                             const emlrtMsgIdentifier *parentId, struct0_T *y);

static const mxArray *emlrt_marshallOut(real_T u[80040]);

static struct1_T f_emlrt_marshallIn(const mxArray *b_nullptr,
                                    const char_T *identifier);

static struct1_T f_emlrt_marshallIn(const mxArray *u,
                                    const emlrtMsgIdentifier *parentId);

static struct2_T g_emlrt_marshallIn(const mxArray *b_nullptr,
                                    const char_T *identifier);

static struct2_T g_emlrt_marshallIn(const mxArray *u,
                                    const emlrtMsgIdentifier *parentId);

static struct3_T h_emlrt_marshallIn(const mxArray *b_nullptr,
                                    const char_T *identifier);

static struct3_T h_emlrt_marshallIn(const mxArray *u,
                                    const emlrtMsgIdentifier *parentId);

static real_T (*j_emlrt_marshallIn(const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[2];

static real_T (*k_emlrt_marshallIn(const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[2001];

static real_T (*l_emlrt_marshallIn(const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[40];

static real_T (*m_emlrt_marshallIn(const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[1600];

// Function Definitions
static real_T (*b_emlrt_marshallIn(const mxArray *b_nullptr,
                                   const char_T *identifier))[2]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[2];
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(emlrtAlias(b_nullptr), &thisId);
  emlrtDestroyArray(&b_nullptr);
  return y;
}

static real_T (*b_emlrt_marshallIn(const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[2]
{
  real_T(*y)[2];
  y = j_emlrt_marshallIn(emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T (*c_emlrt_marshallIn(const mxArray *b_nullptr,
                                   const char_T *identifier))[2001]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[2001];
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  y = c_emlrt_marshallIn(emlrtAlias(b_nullptr), &thisId);
  emlrtDestroyArray(&b_nullptr);
  return y;
}

static real_T (*c_emlrt_marshallIn(const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[2001]
{
  real_T(*y)[2001];
  y = k_emlrt_marshallIn(emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T (*d_emlrt_marshallIn(const mxArray *b_nullptr,
                                   const char_T *identifier))[40]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[40];
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  y = d_emlrt_marshallIn(emlrtAlias(b_nullptr), &thisId);
  emlrtDestroyArray(&b_nullptr);
  return y;
}

static real_T (*d_emlrt_marshallIn(const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[40]
{
  real_T(*y)[40];
  y = l_emlrt_marshallIn(emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T (*e_emlrt_marshallIn(const mxArray *b_nullptr,
                                   const char_T *identifier))[1600]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[1600];
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  y = e_emlrt_marshallIn(emlrtAlias(b_nullptr), &thisId);
  emlrtDestroyArray(&b_nullptr);
  return y;
}

static real_T (*e_emlrt_marshallIn(const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[1600]
{
  real_T(*y)[1600];
  y = m_emlrt_marshallIn(emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void emlrt_marshallIn(const mxArray *b_nullptr, const char_T *identifier,
                             struct0_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  emlrt_marshallIn(emlrtAlias(b_nullptr), &thisId, y);
  emlrtDestroyArray(&b_nullptr);
}

static void emlrt_marshallIn(const mxArray *u,
                             const emlrtMsgIdentifier *parentId, struct0_T *y)
{
  static const int32_T dims{0};
  static const char_T *fieldNames[10]{"crra",    "beta", "delta", "alpha",
                                      "upsilon", "psi",  "eta",   "lambda",
                                      "r",       "w"};
  emlrtMsgIdentifier thisId;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b(emlrtRootTLSGlobal, parentId, u, 10,
                         (const char_T **)&fieldNames[0], 0U,
                         (const void *)&dims);
  thisId.fIdentifier = "crra";
  y->crra = emlrt_marshallIn(
      emlrtAlias(emlrtGetFieldR2017b(emlrtRootTLSGlobal, u, 0, 0, "crra")),
      &thisId);
  thisId.fIdentifier = "beta";
  y->beta = emlrt_marshallIn(
      emlrtAlias(emlrtGetFieldR2017b(emlrtRootTLSGlobal, u, 0, 1, "beta")),
      &thisId);
  thisId.fIdentifier = "delta";
  y->delta = emlrt_marshallIn(
      emlrtAlias(emlrtGetFieldR2017b(emlrtRootTLSGlobal, u, 0, 2, "delta")),
      &thisId);
  thisId.fIdentifier = "alpha";
  y->alpha = emlrt_marshallIn(
      emlrtAlias(emlrtGetFieldR2017b(emlrtRootTLSGlobal, u, 0, 3, "alpha")),
      &thisId);
  thisId.fIdentifier = "upsilon";
  y->upsilon = emlrt_marshallIn(
      emlrtAlias(emlrtGetFieldR2017b(emlrtRootTLSGlobal, u, 0, 4, "upsilon")),
      &thisId);
  thisId.fIdentifier = "psi";
  y->psi = emlrt_marshallIn(
      emlrtAlias(emlrtGetFieldR2017b(emlrtRootTLSGlobal, u, 0, 5, "psi")),
      &thisId);
  thisId.fIdentifier = "eta";
  y->eta = emlrt_marshallIn(
      emlrtAlias(emlrtGetFieldR2017b(emlrtRootTLSGlobal, u, 0, 6, "eta")),
      &thisId);
  thisId.fIdentifier = "lambda";
  y->lambda = emlrt_marshallIn(
      emlrtAlias(emlrtGetFieldR2017b(emlrtRootTLSGlobal, u, 0, 7, "lambda")),
      &thisId);
  thisId.fIdentifier = "r";
  y->r = emlrt_marshallIn(
      emlrtAlias(emlrtGetFieldR2017b(emlrtRootTLSGlobal, u, 0, 8, "r")),
      &thisId);
  thisId.fIdentifier = "w";
  y->w = emlrt_marshallIn(
      emlrtAlias(emlrtGetFieldR2017b(emlrtRootTLSGlobal, u, 0, 9, "w")),
      &thisId);
  emlrtDestroyArray(&u);
}

static const mxArray *emlrt_marshallOut(real_T u[80040])
{
  static const int32_T iv[2]{0, 0};
  static const int32_T iv1[2]{2001, 40};
  const mxArray *m;
  const mxArray *y;
  void *existingData;
  y = nullptr;
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

static struct1_T f_emlrt_marshallIn(const mxArray *b_nullptr,
                                    const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  struct1_T y;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  y = f_emlrt_marshallIn(emlrtAlias(b_nullptr), &thisId);
  emlrtDestroyArray(&b_nullptr);
  return y;
}

static struct1_T f_emlrt_marshallIn(const mxArray *u,
                                    const emlrtMsgIdentifier *parentId)
{
  static const int32_T dims{0};
  static const char_T *fieldNames[4]{"verbose", "lowmemory", "tolerance",
                                     "howards"};
  emlrtMsgIdentifier thisId;
  struct1_T y;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b(emlrtRootTLSGlobal, parentId, u, 4,
                         (const char_T **)&fieldNames[0], 0U,
                         (const void *)&dims);
  thisId.fIdentifier = "verbose";
  y.verbose = emlrt_marshallIn(
      emlrtAlias(emlrtGetFieldR2017b(emlrtRootTLSGlobal, u, 0, 0, "verbose")),
      &thisId);
  thisId.fIdentifier = "lowmemory";
  y.lowmemory = emlrt_marshallIn(
      emlrtAlias(emlrtGetFieldR2017b(emlrtRootTLSGlobal, u, 0, 1, "lowmemory")),
      &thisId);
  thisId.fIdentifier = "tolerance";
  y.tolerance = emlrt_marshallIn(
      emlrtAlias(emlrtGetFieldR2017b(emlrtRootTLSGlobal, u, 0, 2, "tolerance")),
      &thisId);
  thisId.fIdentifier = "howards";
  y.howards = emlrt_marshallIn(
      emlrtAlias(emlrtGetFieldR2017b(emlrtRootTLSGlobal, u, 0, 3, "howards")),
      &thisId);
  emlrtDestroyArray(&u);
  return y;
}

static struct2_T g_emlrt_marshallIn(const mxArray *b_nullptr,
                                    const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  struct2_T y;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  y = g_emlrt_marshallIn(emlrtAlias(b_nullptr), &thisId);
  emlrtDestroyArray(&b_nullptr);
  return y;
}

static struct2_T g_emlrt_marshallIn(const mxArray *u,
                                    const emlrtMsgIdentifier *parentId)
{
  static const int32_T dims{0};
  static const char_T *fieldNames[3]{"verbose", "tolerance", "maxit"};
  emlrtMsgIdentifier thisId;
  struct2_T y;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b(emlrtRootTLSGlobal, parentId, u, 3,
                         (const char_T **)&fieldNames[0], 0U,
                         (const void *)&dims);
  thisId.fIdentifier = "verbose";
  y.verbose = emlrt_marshallIn(
      emlrtAlias(emlrtGetFieldR2017b(emlrtRootTLSGlobal, u, 0, 0, "verbose")),
      &thisId);
  thisId.fIdentifier = "tolerance";
  y.tolerance = emlrt_marshallIn(
      emlrtAlias(emlrtGetFieldR2017b(emlrtRootTLSGlobal, u, 0, 1, "tolerance")),
      &thisId);
  thisId.fIdentifier = "maxit";
  y.maxit = emlrt_marshallIn(
      emlrtAlias(emlrtGetFieldR2017b(emlrtRootTLSGlobal, u, 0, 2, "maxit")),
      &thisId);
  emlrtDestroyArray(&u);
  return y;
}

static struct3_T h_emlrt_marshallIn(const mxArray *b_nullptr,
                                    const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  struct3_T y;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  y = h_emlrt_marshallIn(emlrtAlias(b_nullptr), &thisId);
  emlrtDestroyArray(&b_nullptr);
  return y;
}

static struct3_T h_emlrt_marshallIn(const mxArray *u,
                                    const emlrtMsgIdentifier *parentId)
{
  static const int32_T dims{0};
  static const char_T *fieldNames[5]{"do_GE", "maxiter", "verbose",
                                     "toleranceGEprices", "toleranceGEcondns"};
  emlrtMsgIdentifier thisId;
  struct3_T y;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b(emlrtRootTLSGlobal, parentId, u, 5,
                         (const char_T **)&fieldNames[0], 0U,
                         (const void *)&dims);
  thisId.fIdentifier = "do_GE";
  y.do_GE = emlrt_marshallIn(
      emlrtAlias(emlrtGetFieldR2017b(emlrtRootTLSGlobal, u, 0, 0, "do_GE")),
      &thisId);
  thisId.fIdentifier = "maxiter";
  y.maxiter = emlrt_marshallIn(
      emlrtAlias(emlrtGetFieldR2017b(emlrtRootTLSGlobal, u, 0, 1, "maxiter")),
      &thisId);
  thisId.fIdentifier = "verbose";
  y.verbose = emlrt_marshallIn(
      emlrtAlias(emlrtGetFieldR2017b(emlrtRootTLSGlobal, u, 0, 2, "verbose")),
      &thisId);
  thisId.fIdentifier = "toleranceGEprices";
  y.toleranceGEprices =
      emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2017b(emlrtRootTLSGlobal, u, 0,
                                                      3, "toleranceGEprices")),
                       &thisId);
  thisId.fIdentifier = "toleranceGEcondns";
  y.toleranceGEcondns =
      emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2017b(emlrtRootTLSGlobal, u, 0,
                                                      4, "toleranceGEcondns")),
                       &thisId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T (*j_emlrt_marshallIn(const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[2]
{
  static const int32_T dims[2]{1, 2};
  real_T(*ret)[2];
  int32_T iv[2];
  boolean_T bv[2]{false, false};
  emlrtCheckVsBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", false, 2U,
                            (const void *)&dims[0], &bv[0], &iv[0]);
  ret = (real_T(*)[2])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T (*k_emlrt_marshallIn(const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[2001]
{
  static const int32_T dims{2001};
  real_T(*ret)[2001];
  int32_T iv;
  boolean_T bv{false};
  emlrtCheckVsBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", false, 1U,
                            (const void *)&dims, &bv, &iv);
  ret = (real_T(*)[2001])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T (*l_emlrt_marshallIn(const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[40]
{
  static const int32_T dims{40};
  real_T(*ret)[40];
  int32_T iv;
  boolean_T bv{false};
  emlrtCheckVsBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", false, 1U,
                            (const void *)&dims, &bv, &iv);
  ret = (real_T(*)[40])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T (*m_emlrt_marshallIn(const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[1600]
{
  static const int32_T dims[2]{40, 40};
  real_T(*ret)[1600];
  int32_T iv[2];
  boolean_T bv[2]{false, false};
  emlrtCheckVsBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", false, 2U,
                            (const void *)&dims[0], &bv[0], &iv[0]);
  ret = (real_T(*)[1600])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

void model_subfuns_cuda_fused_api(c_model_subfuns_cuda_fusedStack *SD,
                                  const mxArray *const prhs[8], int32_T nlhs,
                                  const mxArray *plhs[4])
{
  struct0_T Params;
  struct1_T vfoptions;
  struct2_T simoptions;
  struct3_T heteroagentoptions;
  real_T(*Policy)[80040];
  real_T(*StatDist)[80040];
  real_T(*V)[80040];
  real_T(*a_grid)[2001];
  real_T(*pi_z)[1600];
  real_T(*z_grid)[40];
  real_T(*p_eqm)[2];
  real_T val;
  V = (real_T(*)[80040])mxMalloc(sizeof(real_T[80040]));
  Policy = (real_T(*)[80040])mxMalloc(sizeof(real_T[80040]));
  StatDist = (real_T(*)[80040])mxMalloc(sizeof(real_T[80040]));
  // Marshall function inputs
  p_eqm = b_emlrt_marshallIn(emlrtAlias(prhs[0]), "p_eqm");
  a_grid = c_emlrt_marshallIn(emlrtAlias(prhs[1]), "a_grid");
  z_grid = d_emlrt_marshallIn(emlrtAlias(prhs[2]), "z_grid");
  pi_z = e_emlrt_marshallIn(emlrtAlias(prhs[3]), "pi_z");
  emlrt_marshallIn(emlrtAliasP(prhs[4]), "Params", &Params);
  vfoptions = f_emlrt_marshallIn(emlrtAliasP(prhs[5]), "vfoptions");
  simoptions = g_emlrt_marshallIn(emlrtAliasP(prhs[6]), "simoptions");
  heteroagentoptions =
      h_emlrt_marshallIn(emlrtAliasP(prhs[7]), "heteroagentoptions");
  // Invoke the target function
  model_subfuns_cuda_fused(SD, *p_eqm, *a_grid, *z_grid, *pi_z, &Params,
                           &vfoptions, &simoptions, &heteroagentoptions, &val,
                           *V, *Policy, *StatDist);
  // Marshall function outputs
  plhs[0] = emlrt_marshallOut(val);
  if (nlhs > 1) {
    plhs[1] = emlrt_marshallOut(*V);
  }
  if (nlhs > 2) {
    plhs[2] = emlrt_marshallOut(*Policy);
  }
  if (nlhs > 3) {
    plhs[3] = emlrt_marshallOut(*StatDist);
  }
}

// End of code generation (_coder_model_subfuns_cuda_fused_api.cu)
