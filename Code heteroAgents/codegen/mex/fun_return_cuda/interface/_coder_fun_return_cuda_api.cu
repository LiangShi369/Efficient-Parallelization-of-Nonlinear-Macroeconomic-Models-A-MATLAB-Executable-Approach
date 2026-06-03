//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// _coder_fun_return_cuda_api.cu
//
// Code generation for function '_coder_fun_return_cuda_api'
//

// Include files
#include "_coder_fun_return_cuda_api.h"
#include "fun_return_cuda.h"
#include "fun_return_cuda_data.h"
#include "fun_return_cuda_emxutil.h"
#include "fun_return_cuda_types.h"
#include "rt_nonfinite.h"

// Variable Definitions
static emlrtRTEInfo emlrtRTEI{
    1,                            // lineNo
    1,                            // colNo
    "_coder_fun_return_cuda_api", // fName
    ""                            // pName
};

// Function Declarations
static real_T *b_emlrt_marshallIn(const mxArray *src,
                                  const emlrtMsgIdentifier *msgId,
                                  int32_T *ret_size);

static real_T (*b_emlrt_marshallIn(const mxArray *b_nullptr,
                                   const char_T *identifier))[40];

static real_T (*b_emlrt_marshallIn(const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[40];

static struct1_T c_emlrt_marshallIn(const mxArray *b_nullptr,
                                    const char_T *identifier);

static real_T c_emlrt_marshallIn(const mxArray *u,
                                 const emlrtMsgIdentifier *parentId);

static struct1_T d_emlrt_marshallIn(const mxArray *u,
                                    const emlrtMsgIdentifier *parentId);

static real_T (*e_emlrt_marshallIn(const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[2];

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

static const mxArray *emlrt_marshallOut(emxArray_real_T *u);

static const mxArray *emlrt_marshallOut(const struct0_T *u);

static const mxArray *emlrt_marshallOut(const real_T u);

static real_T (*f_emlrt_marshallIn(const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[40];

static real_T g_emlrt_marshallIn(const mxArray *src,
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
  y = f_emlrt_marshallIn(emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static struct1_T c_emlrt_marshallIn(const mxArray *b_nullptr,
                                    const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  struct1_T y;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  y = d_emlrt_marshallIn(emlrtAlias(b_nullptr), &thisId);
  emlrtDestroyArray(&b_nullptr);
  return y;
}

static real_T c_emlrt_marshallIn(const mxArray *u,
                                 const emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = g_emlrt_marshallIn(emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static struct1_T d_emlrt_marshallIn(const mxArray *u,
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
  y.verbose = c_emlrt_marshallIn(
      emlrtAlias(emlrtGetFieldR2017b(emlrtRootTLSGlobal, u, 0, 0, "verbose")),
      &thisId);
  thisId.fIdentifier = "lowmemory";
  y.lowmemory = c_emlrt_marshallIn(
      emlrtAlias(emlrtGetFieldR2017b(emlrtRootTLSGlobal, u, 0, 1, "lowmemory")),
      &thisId);
  thisId.fIdentifier = "tolerance";
  y.tolerance = c_emlrt_marshallIn(
      emlrtAlias(emlrtGetFieldR2017b(emlrtRootTLSGlobal, u, 0, 2, "tolerance")),
      &thisId);
  thisId.fIdentifier = "howards";
  y.howards = c_emlrt_marshallIn(
      emlrtAlias(emlrtGetFieldR2017b(emlrtRootTLSGlobal, u, 0, 3, "howards")),
      &thisId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T (*e_emlrt_marshallIn(const mxArray *src,
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
  y = e_emlrt_marshallIn(emlrtAlias(u), parentId);
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
  y->crra = c_emlrt_marshallIn(
      emlrtAlias(emlrtGetFieldR2017b(emlrtRootTLSGlobal, u, 0, 0, "crra")),
      &thisId);
  thisId.fIdentifier = "beta";
  y->beta = c_emlrt_marshallIn(
      emlrtAlias(emlrtGetFieldR2017b(emlrtRootTLSGlobal, u, 0, 1, "beta")),
      &thisId);
  thisId.fIdentifier = "delta";
  y->delta = c_emlrt_marshallIn(
      emlrtAlias(emlrtGetFieldR2017b(emlrtRootTLSGlobal, u, 0, 2, "delta")),
      &thisId);
  thisId.fIdentifier = "alpha";
  y->alpha = c_emlrt_marshallIn(
      emlrtAlias(emlrtGetFieldR2017b(emlrtRootTLSGlobal, u, 0, 3, "alpha")),
      &thisId);
  thisId.fIdentifier = "upsilon";
  y->upsilon = c_emlrt_marshallIn(
      emlrtAlias(emlrtGetFieldR2017b(emlrtRootTLSGlobal, u, 0, 4, "upsilon")),
      &thisId);
  thisId.fIdentifier = "psi";
  y->psi = c_emlrt_marshallIn(
      emlrtAlias(emlrtGetFieldR2017b(emlrtRootTLSGlobal, u, 0, 5, "psi")),
      &thisId);
  thisId.fIdentifier = "eta";
  y->eta = c_emlrt_marshallIn(
      emlrtAlias(emlrtGetFieldR2017b(emlrtRootTLSGlobal, u, 0, 6, "eta")),
      &thisId);
  thisId.fIdentifier = "lambda";
  y->lambda = c_emlrt_marshallIn(
      emlrtAlias(emlrtGetFieldR2017b(emlrtRootTLSGlobal, u, 0, 7, "lambda")),
      &thisId);
  thisId.fIdentifier = "r";
  y->r = c_emlrt_marshallIn(
      emlrtAlias(emlrtGetFieldR2017b(emlrtRootTLSGlobal, u, 0, 8, "r")),
      &thisId);
  thisId.fIdentifier = "w";
  y->w = c_emlrt_marshallIn(
      emlrtAlias(emlrtGetFieldR2017b(emlrtRootTLSGlobal, u, 0, 9, "w")),
      &thisId);
  emlrtDestroyArray(&u);
}

static const mxArray *emlrt_marshallOut(emxArray_real_T *u)
{
  static const int32_T iv[3]{0, 0, 0};
  const mxArray *m;
  const mxArray *y;
  void *existingData;
  y = nullptr;
  m = emlrtCreateNumericArray(3, (const void *)&iv[0], mxDOUBLE_CLASS, mxREAL);
  existingData = emlrtMxGetData((mxArray *)m);
  if (existingData != (void *)&u->data[0]) {
    emlrtFreeMex(existingData);
  }
  emlrtMxSetData((mxArray *)m, &u->data[0]);
  emlrtSetDimensions((mxArray *)m, &u->size[0], 3);
  u->canFreeData = false;
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *emlrt_marshallOut(const struct0_T *u)
{
  static const char_T *sv1[10]{"crra", "beta", "delta",  "alpha", "upsilon",
                               "psi",  "eta",  "lambda", "r",     "w"};
  const mxArray *y;
  y = nullptr;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 10, (const char_T **)&sv1[0]));
  emlrtSetFieldR2017b(y, 0, "crra", emlrt_marshallOut(u->crra), 0);
  emlrtSetFieldR2017b(y, 0, "beta", emlrt_marshallOut(u->beta), 1);
  emlrtSetFieldR2017b(y, 0, "delta", emlrt_marshallOut(u->delta), 2);
  emlrtSetFieldR2017b(y, 0, "alpha", emlrt_marshallOut(u->alpha), 3);
  emlrtSetFieldR2017b(y, 0, "upsilon", emlrt_marshallOut(u->upsilon), 4);
  emlrtSetFieldR2017b(y, 0, "psi", emlrt_marshallOut(u->psi), 5);
  emlrtSetFieldR2017b(y, 0, "eta", emlrt_marshallOut(u->eta), 6);
  emlrtSetFieldR2017b(y, 0, "lambda", emlrt_marshallOut(u->lambda), 7);
  emlrtSetFieldR2017b(y, 0, "r", emlrt_marshallOut(u->r), 8);
  emlrtSetFieldR2017b(y, 0, "w", emlrt_marshallOut(u->w), 9);
  return y;
}

static const mxArray *emlrt_marshallOut(const real_T u)
{
  const mxArray *m;
  const mxArray *y;
  y = nullptr;
  m = emlrtCreateDoubleScalar(u);
  emlrtAssign(&y, m);
  return y;
}

static real_T (*f_emlrt_marshallIn(const mxArray *src,
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

static real_T g_emlrt_marshallIn(const mxArray *src,
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

void fun_return_cuda_api(const mxArray *const prhs[5], int32_T nlhs,
                         const mxArray *plhs[3])
{
  emxArray_real_T *ReturnMatrix;
  struct0_T Params;
  struct1_T vfoptions;
  real_T(*a_grid_data)[3001];
  real_T(*z_grid)[40];
  real_T(*p_eqm)[2];
  real_T time_ret;
  int32_T a_grid_size;
  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);
  // Marshall function inputs
  p_eqm = emlrt_marshallIn(emlrtAlias(prhs[0]), "p_eqm");
  *(real_T **)&a_grid_data =
      emlrt_marshallIn(emlrtAlias(prhs[1]), "a_grid", &a_grid_size);
  z_grid = b_emlrt_marshallIn(emlrtAlias(prhs[2]), "z_grid");
  emlrt_marshallIn(emlrtAliasP(prhs[3]), "Params", &Params);
  vfoptions = c_emlrt_marshallIn(emlrtAliasP(prhs[4]), "vfoptions");
  // Invoke the target function
  emxInit_real_T(&ReturnMatrix, &emlrtRTEI);
  fun_return_cuda(*p_eqm, *a_grid_data, &a_grid_size, *z_grid, &Params,
                  &vfoptions, ReturnMatrix, &time_ret);
  // Marshall function outputs
  plhs[0] = emlrt_marshallOut(ReturnMatrix);
  emxFree_real_T(&ReturnMatrix);
  if (nlhs > 1) {
    plhs[1] = emlrt_marshallOut(&Params);
  }
  if (nlhs > 2) {
    plhs[2] = emlrt_marshallOut(time_ret);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b(emlrtRootTLSGlobal);
}

// End of code generation (_coder_fun_return_cuda_api.cu)
