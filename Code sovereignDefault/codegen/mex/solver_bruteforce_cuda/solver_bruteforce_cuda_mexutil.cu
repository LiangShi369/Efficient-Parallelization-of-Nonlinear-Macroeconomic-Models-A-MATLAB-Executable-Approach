//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// solver_bruteforce_cuda_mexutil.cu
//
// Code generation for function 'solver_bruteforce_cuda_mexutil'
//

// Include files
#include "solver_bruteforce_cuda_mexutil.h"
#include "rt_nonfinite.h"
#include "solver_bruteforce_cuda_data.h"

// Function Definitions
real_T emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = f_emlrt_marshallIn(emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

const mxArray *emlrt_marshallOut(const real_T u)
{
  const mxArray *m;
  const mxArray *y;
  y = nullptr;
  m = emlrtCreateDoubleScalar(u);
  emlrtAssign(&y, m);
  return y;
}

real_T f_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims{0};
  real_T ret;
  emlrtCheckBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", false, 0U,
                          (const void *)&dims);
  ret = *static_cast<real_T *>(emlrtMxGetData(src));
  emlrtDestroyArray(&src);
  return ret;
}

// End of code generation (solver_bruteforce_cuda_mexutil.cu)
