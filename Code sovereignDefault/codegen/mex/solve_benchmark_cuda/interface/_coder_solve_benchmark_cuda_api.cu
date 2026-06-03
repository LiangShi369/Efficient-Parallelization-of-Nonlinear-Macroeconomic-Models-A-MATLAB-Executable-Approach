//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// _coder_solve_benchmark_cuda_api.cu
//
// Code generation for function '_coder_solve_benchmark_cuda_api'
//

// Include files
#include "_coder_solve_benchmark_cuda_api.h"
#include "rt_nonfinite.h"
#include "solve_benchmark_cuda.h"
#include "solve_benchmark_cuda_data.h"
#include "solve_benchmark_cuda_mexutil.h"

// Function Declarations
static real_T (*b_emlrt_marshallIn(const mxArray *b_nullptr,
                                   const char_T *identifier))[625];

static real_T (*b_emlrt_marshallIn(const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[625];

static const mxArray *b_emlrt_marshallOut(real_T u[625]);

static real_T (*c_emlrt_marshallIn(const mxArray *b_nullptr,
                                   const char_T *identifier))[400];

static real_T (*c_emlrt_marshallIn(const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[400];

static const mxArray *c_emlrt_marshallOut(boolean_T u[250000]);

static real_T (*d_emlrt_marshallIn(const mxArray *b_nullptr,
                                   const char_T *identifier))[390625];

static real_T (*d_emlrt_marshallIn(const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[390625];

static real_T (*e_emlrt_marshallIn(const mxArray *b_nullptr,
                                   const char_T *identifier))[8];

static real_T (*e_emlrt_marshallIn(const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[8];

static const mxArray *emlrt_marshallOut(real_T u[250000]);

static real_T (*g_emlrt_marshallIn(const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[625];

static real_T (*h_emlrt_marshallIn(const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[400];

static real_T (*i_emlrt_marshallIn(const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[390625];

static real_T (*j_emlrt_marshallIn(const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[8];

// Function Definitions
static real_T (*b_emlrt_marshallIn(const mxArray *b_nullptr,
                                   const char_T *identifier))[625]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[625];
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(emlrtAlias(b_nullptr), &thisId);
  emlrtDestroyArray(&b_nullptr);
  return y;
}

static real_T (*b_emlrt_marshallIn(const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[625]
{
  real_T(*y)[625];
  y = g_emlrt_marshallIn(emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static const mxArray *b_emlrt_marshallOut(real_T u[625])
{
  static const int32_T iv{0};
  static const int32_T iv1{625};
  const mxArray *m;
  const mxArray *y;
  void *existingData;
  y = nullptr;
  m = emlrtCreateNumericArray(1, (const void *)&iv, mxDOUBLE_CLASS, mxREAL);
  existingData = emlrtMxGetData((mxArray *)m);
  if (existingData != (void *)&u[0]) {
    emlrtFreeMex(existingData);
  }
  emlrtMxSetData((mxArray *)m, &u[0]);
  emlrtSetDimensions((mxArray *)m, &iv1, 1);
  emlrtAssign(&y, m);
  return y;
}

static real_T (*c_emlrt_marshallIn(const mxArray *b_nullptr,
                                   const char_T *identifier))[400]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[400];
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  y = c_emlrt_marshallIn(emlrtAlias(b_nullptr), &thisId);
  emlrtDestroyArray(&b_nullptr);
  return y;
}

static real_T (*c_emlrt_marshallIn(const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[400]
{
  real_T(*y)[400];
  y = h_emlrt_marshallIn(emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static const mxArray *c_emlrt_marshallOut(boolean_T u[250000])
{
  static const int32_T iv[2]{0, 0};
  static const int32_T iv1[2]{625, 400};
  const mxArray *m;
  const mxArray *y;
  void *existingData;
  y = nullptr;
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

static real_T (*d_emlrt_marshallIn(const mxArray *b_nullptr,
                                   const char_T *identifier))[390625]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[390625];
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  y = d_emlrt_marshallIn(emlrtAlias(b_nullptr), &thisId);
  emlrtDestroyArray(&b_nullptr);
  return y;
}

static real_T (*d_emlrt_marshallIn(const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[390625]
{
  real_T(*y)[390625];
  y = i_emlrt_marshallIn(emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T (*e_emlrt_marshallIn(const mxArray *b_nullptr,
                                   const char_T *identifier))[8]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[8];
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  y = e_emlrt_marshallIn(emlrtAlias(b_nullptr), &thisId);
  emlrtDestroyArray(&b_nullptr);
  return y;
}

static real_T (*e_emlrt_marshallIn(const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[8]
{
  real_T(*y)[8];
  y = j_emlrt_marshallIn(emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static const mxArray *emlrt_marshallOut(real_T u[250000])
{
  static const int32_T iv[2]{0, 0};
  static const int32_T iv1[2]{625, 400};
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

static real_T (*g_emlrt_marshallIn(const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[625]
{
  static const int32_T dims{625};
  real_T(*ret)[625];
  int32_T iv;
  boolean_T bv{false};
  emlrtCheckVsBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", false, 1U,
                            (const void *)&dims, &bv, &iv);
  ret = (real_T(*)[625])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T (*h_emlrt_marshallIn(const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[400]
{
  static const int32_T dims{400};
  real_T(*ret)[400];
  int32_T iv;
  boolean_T bv{false};
  emlrtCheckVsBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", false, 1U,
                            (const void *)&dims, &bv, &iv);
  ret = (real_T(*)[400])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T (*i_emlrt_marshallIn(const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[390625]
{
  static const int32_T dims[2]{625, 625};
  real_T(*ret)[390625];
  int32_T iv[2];
  boolean_T bv[2]{false, false};
  emlrtCheckVsBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", false, 2U,
                            (const void *)&dims[0], &bv[0], &iv[0]);
  ret = (real_T(*)[390625])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T (*j_emlrt_marshallIn(const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[8]
{
  static const int32_T dims[2]{1, 8};
  real_T(*ret)[8];
  int32_T iv[2];
  boolean_T bv[2]{false, false};
  emlrtCheckVsBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", false, 2U,
                            (const void *)&dims[0], &bv[0], &iv[0]);
  ret = (real_T(*)[8])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

void solve_benchmark_cuda_api(const mxArray *const prhs[5], int32_T nlhs,
                              const mxArray *plhs[9])
{
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
  boolean_T(*def)[250000];
  vp = (real_T(*)[250000])mxMalloc(sizeof(real_T[250000]));
  vd = (real_T(*)[625])mxMalloc(sizeof(real_T[625]));
  q = (real_T(*)[250000])mxMalloc(sizeof(real_T[250000]));
  bp = (real_T(*)[250000])mxMalloc(sizeof(real_T[250000]));
  bpr = (real_T(*)[625])mxMalloc(sizeof(real_T[625]));
  def = (boolean_T(*)[250000])mxMalloc(sizeof(boolean_T[250000]));
  rr = (real_T(*)[250000])mxMalloc(sizeof(real_T[250000]));
  // Marshall function inputs
  z = b_emlrt_marshallIn(emlrtAlias(prhs[0]), "z");
  m = b_emlrt_marshallIn(emlrtAlias(prhs[1]), "m");
  b = c_emlrt_marshallIn(emlrtAlias(prhs[2]), "b");
  pdf = d_emlrt_marshallIn(emlrtAlias(prhs[3]), "pdf");
  para = e_emlrt_marshallIn(emlrtAlias(prhs[4]), "para");
  // Invoke the target function
  solve_benchmark_cuda(*z, *m, *b, *pdf, *para, *vp, *vd, *q, *bp, *bpr, *def,
                       *rr, &totaltime, &avgtime);
  // Marshall function outputs
  plhs[0] = emlrt_marshallOut(*vp);
  if (nlhs > 1) {
    plhs[1] = b_emlrt_marshallOut(*vd);
  }
  if (nlhs > 2) {
    plhs[2] = emlrt_marshallOut(*q);
  }
  if (nlhs > 3) {
    plhs[3] = emlrt_marshallOut(*bp);
  }
  if (nlhs > 4) {
    plhs[4] = b_emlrt_marshallOut(*bpr);
  }
  if (nlhs > 5) {
    plhs[5] = c_emlrt_marshallOut(*def);
  }
  if (nlhs > 6) {
    plhs[6] = emlrt_marshallOut(*rr);
  }
  if (nlhs > 7) {
    plhs[7] = emlrt_marshallOut(totaltime);
  }
  if (nlhs > 8) {
    plhs[8] = emlrt_marshallOut(avgtime);
  }
}

// End of code generation (_coder_solve_benchmark_cuda_api.cu)
