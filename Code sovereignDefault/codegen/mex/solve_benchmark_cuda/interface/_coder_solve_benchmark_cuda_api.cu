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
#include "solve_benchmark_cuda_types.h"

// Function Declarations
static real_T *b_emlrt_marshallIn(const mxArray *b_nullptr,
                                  const char_T *identifier, int32_T y_size[2]);

static real_T *b_emlrt_marshallIn(const mxArray *u,
                                  const emlrtMsgIdentifier *parentId,
                                  int32_T y_size[2]);

static real_T (*b_emlrt_marshallIn(const mxArray *b_nullptr,
                                   const char_T *identifier))[8];

static real_T (*b_emlrt_marshallIn(const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[8];

static const mxArray *b_emlrt_marshallOut(real_T u_data[],
                                          const int32_T *u_size);

static real_T *c_emlrt_marshallIn(const mxArray *src,
                                  const emlrtMsgIdentifier *msgId,
                                  int32_T *ret_size);

static const mxArray *c_emlrt_marshallOut(boolean_T u_data[],
                                          const int32_T u_size[2]);

static real_T *d_emlrt_marshallIn(const mxArray *src,
                                  const emlrtMsgIdentifier *msgId,
                                  int32_T ret_size[2]);

static real_T (*d_emlrt_marshallIn(const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[8];

static real_T *emlrt_marshallIn(const mxArray *b_nullptr,
                                const char_T *identifier, int32_T *y_size);

static real_T *emlrt_marshallIn(const mxArray *u,
                                const emlrtMsgIdentifier *parentId,
                                int32_T *y_size);

static const mxArray *emlrt_marshallOut(real_T u_data[],
                                        const int32_T u_size[2]);

// Function Definitions
static real_T *b_emlrt_marshallIn(const mxArray *b_nullptr,
                                  const char_T *identifier, int32_T y_size[2])
{
  emlrtMsgIdentifier thisId;
  real_T *y_data;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  y_data = b_emlrt_marshallIn(emlrtAlias(b_nullptr), &thisId, y_size);
  emlrtDestroyArray(&b_nullptr);
  return y_data;
}

static real_T *b_emlrt_marshallIn(const mxArray *u,
                                  const emlrtMsgIdentifier *parentId,
                                  int32_T y_size[2])
{
  real_T *y_data;
  y_data = d_emlrt_marshallIn(emlrtAlias(u), parentId, y_size);
  emlrtDestroyArray(&u);
  return y_data;
}

static real_T (*b_emlrt_marshallIn(const mxArray *b_nullptr,
                                   const char_T *identifier))[8]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[8];
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(emlrtAlias(b_nullptr), &thisId);
  emlrtDestroyArray(&b_nullptr);
  return y;
}

static real_T (*b_emlrt_marshallIn(const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[8]
{
  real_T(*y)[8];
  y = d_emlrt_marshallIn(emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static const mxArray *b_emlrt_marshallOut(real_T u_data[],
                                          const int32_T *u_size)
{
  static const int32_T iv{0};
  const mxArray *m;
  const mxArray *y;
  void *existingData;
  y = nullptr;
  m = emlrtCreateNumericArray(1, (const void *)&iv, mxDOUBLE_CLASS, mxREAL);
  existingData = emlrtMxGetData((mxArray *)m);
  if (existingData != (void *)&u_data[0]) {
    emlrtFreeMex(existingData);
  }
  emlrtMxSetData((mxArray *)m, &u_data[0]);
  emlrtSetDimensions((mxArray *)m, u_size, 1);
  emlrtAssign(&y, m);
  return y;
}

static real_T *c_emlrt_marshallIn(const mxArray *src,
                                  const emlrtMsgIdentifier *msgId,
                                  int32_T *ret_size)
{
  static const int32_T dims{1000};
  real_T *ret_data;
  boolean_T bv{true};
  emlrtCheckVsBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", false, 1U,
                            (const void *)&dims, &bv, ret_size);
  ret_data = static_cast<real_T *>(emlrtMxGetData(src));
  emlrtDestroyArray(&src);
  return ret_data;
}

static const mxArray *c_emlrt_marshallOut(boolean_T u_data[],
                                          const int32_T u_size[2])
{
  static const int32_T iv[2]{0, 0};
  const mxArray *m;
  const mxArray *y;
  void *existingData;
  y = nullptr;
  m = emlrtCreateLogicalArray(2, &iv[0]);
  existingData = emlrtMxGetData((mxArray *)m);
  if (existingData != (void *)&u_data[0]) {
    emlrtFreeMex(existingData);
  }
  emlrtMxSetData((mxArray *)m, &u_data[0]);
  emlrtSetDimensions((mxArray *)m, &u_size[0], 2);
  emlrtAssign(&y, m);
  return y;
}

static real_T *d_emlrt_marshallIn(const mxArray *src,
                                  const emlrtMsgIdentifier *msgId,
                                  int32_T ret_size[2])
{
  static const int32_T dims[2]{1000, 1000};
  real_T *ret_data;
  boolean_T bv[2]{true, true};
  emlrtCheckVsBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", false, 2U,
                            (const void *)&dims[0], &bv[0], &ret_size[0]);
  ret_data = static_cast<real_T *>(emlrtMxGetData(src));
  emlrtDestroyArray(&src);
  return ret_data;
}

static real_T (*d_emlrt_marshallIn(const mxArray *src,
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
  y_data = c_emlrt_marshallIn(emlrtAlias(u), parentId, y_size);
  emlrtDestroyArray(&u);
  return y_data;
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

void solve_benchmark_cuda_api(solve_benchmark_cudaStackData *SD,
                              const mxArray *const prhs[5], int32_T nlhs,
                              const mxArray *plhs[9])
{
  real_T(*bp_data)[1000000];
  real_T(*pdf_data)[1000000];
  real_T(*q_data)[1000000];
  real_T(*rr_data)[1000000];
  real_T(*vp_data)[1000000];
  real_T(*b_data)[1000];
  real_T(*bpr_data)[1000];
  real_T(*m_data)[1000];
  real_T(*vd_data)[1000];
  real_T(*z_data)[1000];
  real_T(*para)[8];
  real_T avgtime;
  real_T totaltime;
  int32_T bp_size[2];
  int32_T def_size[2];
  int32_T pdf_size[2];
  int32_T q_size[2];
  int32_T rr_size[2];
  int32_T vp_size[2];
  int32_T b_size;
  int32_T bpr_size;
  int32_T m_size;
  int32_T vd_size;
  int32_T z_size;
  boolean_T(*def_data)[1000000];
  vp_data = (real_T(*)[1000000])mxMalloc(sizeof(real_T[1000000]));
  vd_data = (real_T(*)[1000])mxMalloc(sizeof(real_T[1000]));
  q_data = (real_T(*)[1000000])mxMalloc(sizeof(real_T[1000000]));
  bp_data = (real_T(*)[1000000])mxMalloc(sizeof(real_T[1000000]));
  bpr_data = (real_T(*)[1000])mxMalloc(sizeof(real_T[1000]));
  def_data = (boolean_T(*)[1000000])mxMalloc(sizeof(boolean_T[1000000]));
  rr_data = (real_T(*)[1000000])mxMalloc(sizeof(real_T[1000000]));
  // Marshall function inputs
  *(real_T **)&z_data = emlrt_marshallIn(emlrtAlias(prhs[0]), "z", &z_size);
  *(real_T **)&m_data = emlrt_marshallIn(emlrtAlias(prhs[1]), "m", &m_size);
  *(real_T **)&b_data = emlrt_marshallIn(emlrtAlias(prhs[2]), "b", &b_size);
  *(real_T **)&pdf_data =
      b_emlrt_marshallIn(emlrtAlias(prhs[3]), "pdf", pdf_size);
  para = b_emlrt_marshallIn(emlrtAlias(prhs[4]), "para");
  // Invoke the target function
  solve_benchmark_cuda(SD, *z_data, &z_size, *m_data, &m_size, *b_data, &b_size,
                       *pdf_data, pdf_size, *para, *vp_data, vp_size, *vd_data,
                       &vd_size, *q_data, q_size, *bp_data, bp_size, *bpr_data,
                       &bpr_size, *def_data, def_size, *rr_data, rr_size,
                       &totaltime, &avgtime);
  // Marshall function outputs
  plhs[0] = emlrt_marshallOut(*vp_data, vp_size);
  if (nlhs > 1) {
    plhs[1] = b_emlrt_marshallOut(*vd_data, &vd_size);
  }
  if (nlhs > 2) {
    plhs[2] = emlrt_marshallOut(*q_data, q_size);
  }
  if (nlhs > 3) {
    plhs[3] = emlrt_marshallOut(*bp_data, bp_size);
  }
  if (nlhs > 4) {
    plhs[4] = b_emlrt_marshallOut(*bpr_data, &bpr_size);
  }
  if (nlhs > 5) {
    plhs[5] = c_emlrt_marshallOut(*def_data, def_size);
  }
  if (nlhs > 6) {
    plhs[6] = emlrt_marshallOut(*rr_data, rr_size);
  }
  if (nlhs > 7) {
    plhs[7] = emlrt_marshallOut(totaltime);
  }
  if (nlhs > 8) {
    plhs[8] = emlrt_marshallOut(avgtime);
  }
}

// End of code generation (_coder_solve_benchmark_cuda_api.cu)
