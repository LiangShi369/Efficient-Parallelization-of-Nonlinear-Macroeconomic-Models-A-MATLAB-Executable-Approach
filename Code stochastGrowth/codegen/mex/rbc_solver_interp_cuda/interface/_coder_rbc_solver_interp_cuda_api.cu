//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// _coder_rbc_solver_interp_cuda_api.cu
//
// Code generation for function '_coder_rbc_solver_interp_cuda_api'
//

// Include files
#include "_coder_rbc_solver_interp_cuda_api.h"
#include "rbc_solver_interp_cuda.h"
#include "rbc_solver_interp_cuda_data.h"
#include "rt_nonfinite.h"

// Function Declarations
static real_T (*b_emlrt_marshallIn(const mxArray *b_nullptr,
                                   const char_T *identifier))[100500];

static real_T (*b_emlrt_marshallIn(const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[100500];

static real_T (*c_emlrt_marshallIn(const mxArray *b_nullptr,
                                   const char_T *identifier))[500];

static real_T (*c_emlrt_marshallIn(const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[500];

static real_T (*d_emlrt_marshallIn(const mxArray *b_nullptr,
                                   const char_T *identifier))[40401];

static real_T (*d_emlrt_marshallIn(const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[40401];

static const mxArray *emlrt_marshallOut(real_T u[100500]);

static real_T (*f_emlrt_marshallIn(const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[100500];

static real_T (*g_emlrt_marshallIn(const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[500];

static real_T (*h_emlrt_marshallIn(const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[40401];

// Function Definitions
static real_T (*b_emlrt_marshallIn(const mxArray *b_nullptr,
                                   const char_T *identifier))[100500]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[100500];
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(emlrtAlias(b_nullptr), &thisId);
  emlrtDestroyArray(&b_nullptr);
  return y;
}

static real_T (*b_emlrt_marshallIn(const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[100500]
{
  real_T(*y)[100500];
  y = f_emlrt_marshallIn(emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T (*c_emlrt_marshallIn(const mxArray *b_nullptr,
                                   const char_T *identifier))[500]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[500];
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  y = c_emlrt_marshallIn(emlrtAlias(b_nullptr), &thisId);
  emlrtDestroyArray(&b_nullptr);
  return y;
}

static real_T (*c_emlrt_marshallIn(const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[500]
{
  real_T(*y)[500];
  y = g_emlrt_marshallIn(emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T (*d_emlrt_marshallIn(const mxArray *b_nullptr,
                                   const char_T *identifier))[40401]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[40401];
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  y = d_emlrt_marshallIn(emlrtAlias(b_nullptr), &thisId);
  emlrtDestroyArray(&b_nullptr);
  return y;
}

static real_T (*d_emlrt_marshallIn(const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[40401]
{
  real_T(*y)[40401];
  y = h_emlrt_marshallIn(emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static const mxArray *emlrt_marshallOut(real_T u[100500])
{
  static const int32_T iv[2]{0, 0};
  static const int32_T iv1[2]{500, 201};
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

static real_T (*f_emlrt_marshallIn(const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[100500]
{
  static const int32_T dims[2]{500, 201};
  real_T(*ret)[100500];
  int32_T iv[2];
  boolean_T bv[2]{false, false};
  emlrtCheckVsBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", false, 2U,
                            (const void *)&dims[0], &bv[0], &iv[0]);
  ret = (real_T(*)[100500])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T (*g_emlrt_marshallIn(const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[500]
{
  static const int32_T dims{500};
  real_T(*ret)[500];
  int32_T iv;
  boolean_T bv{false};
  emlrtCheckVsBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", false, 1U,
                            (const void *)&dims, &bv, &iv);
  ret = (real_T(*)[500])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T (*h_emlrt_marshallIn(const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[40401]
{
  static const int32_T dims[2]{201, 201};
  real_T(*ret)[40401];
  int32_T iv[2];
  boolean_T bv[2]{false, false};
  emlrtCheckVsBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", false, 2U,
                            (const void *)&dims[0], &bv[0], &iv[0]);
  ret = (real_T(*)[40401])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

void rbc_solver_interp_cuda_api(const mxArray *const prhs[3], int32_T nlhs,
                                const mxArray *plhs[2])
{
  real_T(*c0)[100500];
  real_T(*pol_kp)[100500];
  real_T(*v)[100500];
  real_T(*pdfz)[40401];
  real_T(*k)[500];
  v = (real_T(*)[100500])mxMalloc(sizeof(real_T[100500]));
  pol_kp = (real_T(*)[100500])mxMalloc(sizeof(real_T[100500]));
  // Marshall function inputs
  c0 = b_emlrt_marshallIn(emlrtAlias(prhs[0]), "c0");
  k = c_emlrt_marshallIn(emlrtAlias(prhs[1]), "k");
  pdfz = d_emlrt_marshallIn(emlrtAlias(prhs[2]), "pdfz");
  // Invoke the target function
  rbc_solver_interp_cuda(*c0, *k, *pdfz, *v, *pol_kp);
  // Marshall function outputs
  plhs[0] = emlrt_marshallOut(*v);
  if (nlhs > 1) {
    plhs[1] = emlrt_marshallOut(*pol_kp);
  }
}

// End of code generation (_coder_rbc_solver_interp_cuda_api.cu)
