//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// _coder_fun_VFI_cuda_api.cu
//
// Code generation for function '_coder_fun_VFI_cuda_api'
//

// Include files
#include "_coder_fun_VFI_cuda_api.h"
#include "fun_VFI_cuda.h"
#include "fun_VFI_cuda_data.h"
#include "fun_VFI_cuda_types.h"
#include "rt_nonfinite.h"

// Function Declarations
static real_T *b_emlrt_marshallIn(const mxArray *src,
                                  const emlrtMsgIdentifier *msgId,
                                  int32_T *ret_size);

static real_T (*b_emlrt_marshallIn(const mxArray *b_nullptr,
                                   const char_T *identifier))[40];

static real_T (*b_emlrt_marshallIn(const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[40];

static real_T (*c_emlrt_marshallIn(const mxArray *b_nullptr,
                                   const char_T *identifier))[1600];

static real_T (*c_emlrt_marshallIn(const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[1600];

static struct1_T d_emlrt_marshallIn(const mxArray *b_nullptr,
                                    const char_T *identifier);

static real_T d_emlrt_marshallIn(const mxArray *u,
                                 const emlrtMsgIdentifier *parentId);

static struct1_T e_emlrt_marshallIn(const mxArray *u,
                                    const emlrtMsgIdentifier *parentId);

static real_T (*emlrt_marshallIn(const mxArray *b_nullptr,
                                 const char_T *identifier))[2];

static real_T (*emlrt_marshallIn(const mxArray *u,
                                 const emlrtMsgIdentifier *parentId))[2];

static real_T *emlrt_marshallIn(const mxArray *b_nullptr,
                                const char_T *identifier, int32_T *y_size);

static real_T *emlrt_marshallIn(const mxArray *u,
                                const emlrtMsgIdentifier *parentId,
                                int32_T *y_size);

static void emlrt_marshallIn(const mxArray *b_nullptr, const char_T *identifier,
                             struct0_T *y);

static void emlrt_marshallIn(const mxArray *u,
                             const emlrtMsgIdentifier *parentId, struct0_T *y);

static const mxArray *emlrt_marshallOut(real_T u_data[],
                                        const int32_T u_size[2]);

static const mxArray *emlrt_marshallOut(const struct0_T *u);

static real_T (*f_emlrt_marshallIn(const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[2];

static real_T (*g_emlrt_marshallIn(const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[40];

static real_T (*h_emlrt_marshallIn(const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[1600];

static real_T i_emlrt_marshallIn(const mxArray *src,
                                 const emlrtMsgIdentifier *msgId);

// Function Definitions
static real_T *b_emlrt_marshallIn(const mxArray *src,
                                  const emlrtMsgIdentifier *msgId,
                                  int32_T *ret_size)
{
  static const int32_T dims{3001};
  real_T *ret_data;
  boolean_T bv{true};
  emlrtCheckVsBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", false, 1U,
                            (const void *)&dims, &bv, ret_size);
  ret_data = static_cast<real_T *>(emlrtMxGetData(src));
  emlrtDestroyArray(&src);
  return ret_data;
}

static real_T (*b_emlrt_marshallIn(const mxArray *b_nullptr,
                                   const char_T *identifier))[40]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[40];
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(emlrtAlias(b_nullptr), &thisId);
  emlrtDestroyArray(&b_nullptr);
  return y;
}

static real_T (*b_emlrt_marshallIn(const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[40]
{
  real_T(*y)[40];
  y = g_emlrt_marshallIn(emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T (*c_emlrt_marshallIn(const mxArray *b_nullptr,
                                   const char_T *identifier))[1600]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[1600];
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  y = c_emlrt_marshallIn(emlrtAlias(b_nullptr), &thisId);
  emlrtDestroyArray(&b_nullptr);
  return y;
}

static real_T (*c_emlrt_marshallIn(const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[1600]
{
  real_T(*y)[1600];
  y = h_emlrt_marshallIn(emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static struct1_T d_emlrt_marshallIn(const mxArray *b_nullptr,
                                    const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  struct1_T y;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  y = e_emlrt_marshallIn(emlrtAlias(b_nullptr), &thisId);
  emlrtDestroyArray(&b_nullptr);
  return y;
}

static real_T d_emlrt_marshallIn(const mxArray *u,
                                 const emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = i_emlrt_marshallIn(emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static struct1_T e_emlrt_marshallIn(const mxArray *u,
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
  y.verbose = d_emlrt_marshallIn(
      emlrtAlias(emlrtGetFieldR2017b(emlrtRootTLSGlobal, u, 0, 0, "verbose")),
      &thisId);
  thisId.fIdentifier = "lowmemory";
  y.lowmemory = d_emlrt_marshallIn(
      emlrtAlias(emlrtGetFieldR2017b(emlrtRootTLSGlobal, u, 0, 1, "lowmemory")),
      &thisId);
  thisId.fIdentifier = "tolerance";
  y.tolerance = d_emlrt_marshallIn(
      emlrtAlias(emlrtGetFieldR2017b(emlrtRootTLSGlobal, u, 0, 2, "tolerance")),
      &thisId);
  thisId.fIdentifier = "howards";
  y.howards = d_emlrt_marshallIn(
      emlrtAlias(emlrtGetFieldR2017b(emlrtRootTLSGlobal, u, 0, 3, "howards")),
      &thisId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T (*emlrt_marshallIn(const mxArray *b_nullptr,
                                 const char_T *identifier))[2]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[2];
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  y = emlrt_marshallIn(emlrtAlias(b_nullptr), &thisId);
  emlrtDestroyArray(&b_nullptr);
  return y;
}

static real_T (*emlrt_marshallIn(const mxArray *u,
                                 const emlrtMsgIdentifier *parentId))[2]
{
  real_T(*y)[2];
  y = f_emlrt_marshallIn(emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T *emlrt_marshallIn(const mxArray *b_nullptr,
                                const char_T *identifier, int32_T *y_size)
{
  emlrtMsgIdentifier thisId;
  real_T *y_data;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  y_data = emlrt_marshallIn(emlrtAlias(b_nullptr), &thisId, y_size);
  emlrtDestroyArray(&b_nullptr);
  return y_data;
}

static real_T *emlrt_marshallIn(const mxArray *u,
                                const emlrtMsgIdentifier *parentId,
                                int32_T *y_size)
{
  real_T *y_data;
  y_data = b_emlrt_marshallIn(emlrtAlias(u), parentId, y_size);
  emlrtDestroyArray(&u);
  return y_data;
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
  y->crra = d_emlrt_marshallIn(
      emlrtAlias(emlrtGetFieldR2017b(emlrtRootTLSGlobal, u, 0, 0, "crra")),
      &thisId);
  thisId.fIdentifier = "beta";
  y->beta = d_emlrt_marshallIn(
      emlrtAlias(emlrtGetFieldR2017b(emlrtRootTLSGlobal, u, 0, 1, "beta")),
      &thisId);
  thisId.fIdentifier = "delta";
  y->delta = d_emlrt_marshallIn(
      emlrtAlias(emlrtGetFieldR2017b(emlrtRootTLSGlobal, u, 0, 2, "delta")),
      &thisId);
  thisId.fIdentifier = "alpha";
  y->alpha = d_emlrt_marshallIn(
      emlrtAlias(emlrtGetFieldR2017b(emlrtRootTLSGlobal, u, 0, 3, "alpha")),
      &thisId);
  thisId.fIdentifier = "upsilon";
  y->upsilon = d_emlrt_marshallIn(
      emlrtAlias(emlrtGetFieldR2017b(emlrtRootTLSGlobal, u, 0, 4, "upsilon")),
      &thisId);
  thisId.fIdentifier = "psi";
  y->psi = d_emlrt_marshallIn(
      emlrtAlias(emlrtGetFieldR2017b(emlrtRootTLSGlobal, u, 0, 5, "psi")),
      &thisId);
  thisId.fIdentifier = "eta";
  y->eta = d_emlrt_marshallIn(
      emlrtAlias(emlrtGetFieldR2017b(emlrtRootTLSGlobal, u, 0, 6, "eta")),
      &thisId);
  thisId.fIdentifier = "lambda";
  y->lambda = d_emlrt_marshallIn(
      emlrtAlias(emlrtGetFieldR2017b(emlrtRootTLSGlobal, u, 0, 7, "lambda")),
      &thisId);
  thisId.fIdentifier = "r";
  y->r = d_emlrt_marshallIn(
      emlrtAlias(emlrtGetFieldR2017b(emlrtRootTLSGlobal, u, 0, 8, "r")),
      &thisId);
  thisId.fIdentifier = "w";
  y->w = d_emlrt_marshallIn(
      emlrtAlias(emlrtGetFieldR2017b(emlrtRootTLSGlobal, u, 0, 9, "w")),
      &thisId);
  emlrtDestroyArray(&u);
}

static const mxArray *emlrt_marshallOut(real_T u_data[],
                                        const int32_T u_size[2])
{
  static const int32_T iv[2]{0, 0};
  const mxArray *m;
  const mxArray *y;
  void *existingData;
  y = nullptr;
  m = emlrtCreateNumericArray(2, (const void *)&iv[0], mxDOUBLE_CLASS, mxREAL);
  existingData = emlrtMxGetData((mxArray *)m);
  if (existingData != (void *)&u_data[0]) {
    emlrtFreeMex(existingData);
  }
  emlrtMxSetData((mxArray *)m, &u_data[0]);
  emlrtSetDimensions((mxArray *)m, &u_size[0], 2);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *emlrt_marshallOut(const struct0_T *u)
{
  static const char_T *sv1[10]{"crra", "beta", "delta",  "alpha", "upsilon",
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
  y = nullptr;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 10, (const char_T **)&sv1[0]));
  b_y = nullptr;
  m = emlrtCreateDoubleScalar(u->crra);
  emlrtAssign(&b_y, m);
  emlrtSetFieldR2017b(y, 0, "crra", b_y, 0);
  c_y = nullptr;
  m = emlrtCreateDoubleScalar(u->beta);
  emlrtAssign(&c_y, m);
  emlrtSetFieldR2017b(y, 0, "beta", c_y, 1);
  d_y = nullptr;
  m = emlrtCreateDoubleScalar(u->delta);
  emlrtAssign(&d_y, m);
  emlrtSetFieldR2017b(y, 0, "delta", d_y, 2);
  e_y = nullptr;
  m = emlrtCreateDoubleScalar(u->alpha);
  emlrtAssign(&e_y, m);
  emlrtSetFieldR2017b(y, 0, "alpha", e_y, 3);
  f_y = nullptr;
  m = emlrtCreateDoubleScalar(u->upsilon);
  emlrtAssign(&f_y, m);
  emlrtSetFieldR2017b(y, 0, "upsilon", f_y, 4);
  g_y = nullptr;
  m = emlrtCreateDoubleScalar(u->psi);
  emlrtAssign(&g_y, m);
  emlrtSetFieldR2017b(y, 0, "psi", g_y, 5);
  h_y = nullptr;
  m = emlrtCreateDoubleScalar(u->eta);
  emlrtAssign(&h_y, m);
  emlrtSetFieldR2017b(y, 0, "eta", h_y, 6);
  i_y = nullptr;
  m = emlrtCreateDoubleScalar(u->lambda);
  emlrtAssign(&i_y, m);
  emlrtSetFieldR2017b(y, 0, "lambda", i_y, 7);
  j_y = nullptr;
  m = emlrtCreateDoubleScalar(u->r);
  emlrtAssign(&j_y, m);
  emlrtSetFieldR2017b(y, 0, "r", j_y, 8);
  k_y = nullptr;
  m = emlrtCreateDoubleScalar(u->w);
  emlrtAssign(&k_y, m);
  emlrtSetFieldR2017b(y, 0, "w", k_y, 9);
  return y;
}

static real_T (*f_emlrt_marshallIn(const mxArray *src,
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

static real_T (*g_emlrt_marshallIn(const mxArray *src,
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

static real_T (*h_emlrt_marshallIn(const mxArray *src,
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

static real_T i_emlrt_marshallIn(const mxArray *src,
                                 const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims{0};
  real_T ret;
  emlrtCheckBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", false, 0U,
                          (const void *)&dims);
  ret = *static_cast<real_T *>(emlrtMxGetData(src));
  emlrtDestroyArray(&src);
  return ret;
}

void fun_VFI_cuda_api(fun_VFI_cudaStackData *SD, const mxArray *const prhs[6],
                      int32_T nlhs, const mxArray *plhs[3])
{
  struct0_T Params;
  struct1_T vfoptions;
  real_T(*Policy_data)[120040];
  real_T(*V_data)[120040];
  real_T(*a_grid_data)[3001];
  real_T(*pi_z)[1600];
  real_T(*z_grid)[40];
  real_T(*p_eqm)[2];
  int32_T Policy_size[2];
  int32_T V_size[2];
  int32_T a_grid_size;
  V_data = (real_T(*)[120040])mxMalloc(sizeof(real_T[120040]));
  Policy_data = (real_T(*)[120040])mxMalloc(sizeof(real_T[120040]));
  // Marshall function inputs
  p_eqm = emlrt_marshallIn(emlrtAlias(prhs[0]), "p_eqm");
  *(real_T **)&a_grid_data =
      emlrt_marshallIn(emlrtAlias(prhs[1]), "a_grid", &a_grid_size);
  z_grid = b_emlrt_marshallIn(emlrtAlias(prhs[2]), "z_grid");
  pi_z = c_emlrt_marshallIn(emlrtAlias(prhs[3]), "pi_z");
  emlrt_marshallIn(emlrtAliasP(prhs[4]), "Params", &Params);
  vfoptions = d_emlrt_marshallIn(emlrtAliasP(prhs[5]), "vfoptions");
  // Invoke the target function
  fun_VFI_cuda(SD, *p_eqm, *a_grid_data, &a_grid_size, *z_grid, *pi_z, &Params,
               &vfoptions, *V_data, V_size, *Policy_data, Policy_size);
  // Marshall function outputs
  plhs[0] = emlrt_marshallOut(*V_data, V_size);
  if (nlhs > 1) {
    plhs[1] = emlrt_marshallOut(*Policy_data, Policy_size);
  }
  if (nlhs > 2) {
    plhs[2] = emlrt_marshallOut(&Params);
  }
}

// End of code generation (_coder_fun_VFI_cuda_api.cu)
