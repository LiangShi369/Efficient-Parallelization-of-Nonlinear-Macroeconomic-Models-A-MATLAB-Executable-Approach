//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// _coder_solver_bruteforce_cuda_api.cu
//
// Code generation for function '_coder_solver_bruteforce_cuda_api'
//

// Include files
#include "_coder_solver_bruteforce_cuda_api.h"
#include "rt_nonfinite.h"
#include "solver_bruteforce_cuda.h"
#include "solver_bruteforce_cuda_data.h"
#include "solver_bruteforce_cuda_mexutil.h"
#include "solver_bruteforce_cuda_types.h"

// Function Declarations
static real_T (*b_emlrt_marshallIn(const mxArray *b_nullptr,
                                   const char_T *identifier))[400];

static real_T (*b_emlrt_marshallIn(const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[400];

static const mxArray *b_emlrt_marshallOut(const boolean_T u[250000]);

static real_T (*c_emlrt_marshallIn(const mxArray *b_nullptr,
                                   const char_T *identifier))[625];

static real_T (*c_emlrt_marshallIn(const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[625];

static real_T (*d_emlrt_marshallIn(const mxArray *b_nullptr,
                                   const char_T *identifier))[390625];

static real_T (*d_emlrt_marshallIn(const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[390625];

static struct0_T e_emlrt_marshallIn(const mxArray *b_nullptr,
                                    const char_T *identifier);

static struct0_T e_emlrt_marshallIn(const mxArray *u,
                                    const emlrtMsgIdentifier *parentId);

static const mxArray *emlrt_marshallOut(const real_T u[250000]);

static real_T (*g_emlrt_marshallIn(const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[400];

static real_T (*h_emlrt_marshallIn(const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[625];

static real_T (*i_emlrt_marshallIn(const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[390625];

// Function Definitions
static real_T (*b_emlrt_marshallIn(const mxArray *b_nullptr,
                                   const char_T *identifier))[400]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[400];
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(emlrtAlias(b_nullptr), &thisId);
  emlrtDestroyArray(&b_nullptr);
  return y;
}

static real_T (*b_emlrt_marshallIn(const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[400]
{
  real_T(*y)[400];
  y = g_emlrt_marshallIn(emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static const mxArray *b_emlrt_marshallOut(const boolean_T u[250000])
{
  static const int32_T iv[2]{0, 0};
  static const int32_T iv1[2]{625, 400};
  const mxArray *m;
  const mxArray *y;
  y = nullptr;
  m = emlrtCreateLogicalArray(2, &iv[0]);
  emlrtMxSetData((mxArray *)m, (void *)&u[0]);
  emlrtSetDimensions((mxArray *)m, &iv1[0], 2);
  emlrtAssign(&y, m);
  return y;
}

static real_T (*c_emlrt_marshallIn(const mxArray *b_nullptr,
                                   const char_T *identifier))[625]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[625];
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  y = c_emlrt_marshallIn(emlrtAlias(b_nullptr), &thisId);
  emlrtDestroyArray(&b_nullptr);
  return y;
}

static real_T (*c_emlrt_marshallIn(const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[625]
{
  real_T(*y)[625];
  y = h_emlrt_marshallIn(emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
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

static struct0_T e_emlrt_marshallIn(const mxArray *b_nullptr,
                                    const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  struct0_T y;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  y = e_emlrt_marshallIn(emlrtAlias(b_nullptr), &thisId);
  emlrtDestroyArray(&b_nullptr);
  return y;
}

static struct0_T e_emlrt_marshallIn(const mxArray *u,
                                    const emlrtMsgIdentifier *parentId)
{
  static const int32_T dims{0};
  static const char_T *fieldNames[5]{"phi0", "rstar", "theta", "sigg", "betta"};
  emlrtMsgIdentifier thisId;
  struct0_T y;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b(emlrtRootTLSGlobal, parentId, u, 5,
                         (const char_T **)&fieldNames[0], 0U,
                         (const void *)&dims);
  thisId.fIdentifier = "phi0";
  y.phi0 = emlrt_marshallIn(
      emlrtAlias(emlrtGetFieldR2017b(emlrtRootTLSGlobal, u, 0, 0, "phi0")),
      &thisId);
  thisId.fIdentifier = "rstar";
  y.rstar = emlrt_marshallIn(
      emlrtAlias(emlrtGetFieldR2017b(emlrtRootTLSGlobal, u, 0, 1, "rstar")),
      &thisId);
  thisId.fIdentifier = "theta";
  y.theta = emlrt_marshallIn(
      emlrtAlias(emlrtGetFieldR2017b(emlrtRootTLSGlobal, u, 0, 2, "theta")),
      &thisId);
  thisId.fIdentifier = "sigg";
  y.sigg = emlrt_marshallIn(
      emlrtAlias(emlrtGetFieldR2017b(emlrtRootTLSGlobal, u, 0, 3, "sigg")),
      &thisId);
  thisId.fIdentifier = "betta";
  y.betta = emlrt_marshallIn(
      emlrtAlias(emlrtGetFieldR2017b(emlrtRootTLSGlobal, u, 0, 4, "betta")),
      &thisId);
  emlrtDestroyArray(&u);
  return y;
}

static const mxArray *emlrt_marshallOut(const real_T u[250000])
{
  static const int32_T iv[2]{0, 0};
  static const int32_T iv1[2]{625, 400};
  const mxArray *m;
  const mxArray *y;
  y = nullptr;
  m = emlrtCreateNumericArray(2, (const void *)&iv[0], mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m, (void *)&u[0]);
  emlrtSetDimensions((mxArray *)m, &iv1[0], 2);
  emlrtAssign(&y, m);
  return y;
}

static real_T (*g_emlrt_marshallIn(const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[400]
{
  static const int32_T dims[1]{400};
  real_T(*ret)[400];
  int32_T iv[1];
  boolean_T bv[1]{false};
  emlrtCheckVsBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", false, 1U,
                            (const void *)&dims[0], &bv[0], &iv[0]);
  ret = (real_T(*)[400])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T (*h_emlrt_marshallIn(const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[625]
{
  static const int32_T dims[1]{625};
  real_T(*ret)[625];
  int32_T iv[1];
  boolean_T bv[1]{false};
  emlrtCheckVsBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", false, 1U,
                            (const void *)&dims[0], &bv[0], &iv[0]);
  ret = (real_T(*)[625])emlrtMxGetData(src);
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

void solver_bruteforce_cuda_api(solver_bruteforce_cudaStackData *SD,
                                const mxArray *const prhs[5], int32_T nlhs,
                                const mxArray *plhs[6])
{
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
  q = (real_T(*)[250000])mxMalloc(sizeof(real_T[250000]));
  bp = (real_T(*)[250000])mxMalloc(sizeof(real_T[250000]));
  vp = (real_T(*)[250000])mxMalloc(sizeof(real_T[250000]));
  def = (boolean_T(*)[250000])mxMalloc(sizeof(boolean_T[250000]));
  // Marshall function inputs
  b = b_emlrt_marshallIn(emlrtAlias(prhs[0]), "b");
  z = c_emlrt_marshallIn(emlrtAlias(prhs[1]), "z");
  m = c_emlrt_marshallIn(emlrtAlias(prhs[2]), "m");
  pdf = d_emlrt_marshallIn(emlrtAlias(prhs[3]), "pdf");
  para = e_emlrt_marshallIn(emlrtAliasP(prhs[4]), "para");
  // Invoke the target function
  solver_bruteforce_cuda(SD, *b, *z, *m, *pdf, &para, *q, *bp, *vp, *def,
                         &totaltime, &avgtime);
  // Marshall function outputs
  plhs[0] = emlrt_marshallOut(*q);
  if (nlhs > 1) {
    plhs[1] = emlrt_marshallOut(*bp);
  }
  if (nlhs > 2) {
    plhs[2] = emlrt_marshallOut(*vp);
  }
  if (nlhs > 3) {
    plhs[3] = b_emlrt_marshallOut(*def);
  }
  if (nlhs > 4) {
    plhs[4] = emlrt_marshallOut(totaltime);
  }
  if (nlhs > 5) {
    plhs[5] = emlrt_marshallOut(avgtime);
  }
}

// End of code generation (_coder_solver_bruteforce_cuda_api.cu)
