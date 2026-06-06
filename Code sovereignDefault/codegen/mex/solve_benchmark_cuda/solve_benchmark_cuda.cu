//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// solve_benchmark_cuda.cu
//
// Code generation for function 'solve_benchmark_cuda'
//

// Include files
#include "solve_benchmark_cuda.h"
#include "eml_mtimes_helper.h"
#include "ixfun.h"
#include "rt_nonfinite.h"
#include "solve_benchmark_cuda_data.h"
#include "solve_benchmark_cuda_emxutil.h"
#include "solve_benchmark_cuda_mexutil.h"
#include "solve_benchmark_cuda_types.h"
#include "tic.h"
#include "toc.h"
#include "MWCUBLASUtils.hpp"
#include "MWCudaDimUtility.hpp"
#include "MWCudaMemoryFunctions.hpp"
#include "MWLaunchParametersUtilities.hpp"
#include "emlrt.h"
#include "math_constants.h"
#include <cmath>
#include <cstring>

// Variable Definitions
static emlrtMCInfo emlrtMCI{
    66,                                                             // lineNo
    18,                                                             // colNo
    "fprintf",                                                      // fName
    "D:\\Matlab_2026a\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m" // pName
};

static emlrtRTEInfo emlrtRTEI{
    31,                     // lineNo
    1,                      // colNo
    "solve_benchmark_cuda", // fName
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_cuda.m" // pName
};

// Function Declarations
static void b_binary_expand_op_4(solve_benchmark_cudaStackData *SD,
                                 real_T in1_data[], int32_T in1_size[2],
                                 const real_T in2_data[],
                                 const int32_T in2_size[2],
                                 const real_T in3_data[],
                                 const int32_T in3_size[2]);

static void b_minus(solve_benchmark_cudaStackData *SD, real_T in1_data[],
                    int32_T in1_size[2], const real_T in2_data[],
                    const int32_T in2_size[2]);

static void binary_expand_op(real_T in1_data[], int32_T *in1_size,
                             const real_T in2_data[], const int32_T *in2_size,
                             const real_T in3_data[], const int32_T *in3_size);

static void binary_expand_op_5(real_T in1_data[], int32_T in1_size[2],
                               const real_T in2_data[],
                               const int32_T in2_size[2],
                               const real_T in3_data[], const int32_T *in3_size,
                               const real_T in4_data[],
                               const int32_T *in4_size);

static void binary_expand_op_6(real_T in1_data[], int32_T in1_size[2],
                               const real_T in2_data[],
                               const int32_T in2_size[2],
                               const real_T in3_data[], const int32_T *in3_size,
                               real_T in4);

static void binary_expand_op_7(real_T in1_data[], int32_T *in1_size,
                               const real_T in2_data[], const int32_T *in2_size,
                               const real_T in3_data[],
                               const int32_T *in3_size);

static void binary_expand_op_8(real_T in1_data[], int32_T in1_size[2],
                               const real_T in2_data[], const int32_T *in2_size,
                               const real_T in3_data[],
                               const int32_T in3_size[2]);

static real_T c_emlrt_marshallIn(const mxArray *src,
                                 const emlrtMsgIdentifier *msgId);

static void checkCudaError(cudaError_t errorCode, const char_T *file,
                           int32_T b_line);

static uint64_T computeNumIters(int32_T ub, int32_T b_ub);

static uint64_T computeNumIters(int32_T ub);

static real_T emlrt_marshallIn(const mxArray *u,
                               const emlrtMsgIdentifier *parentId);

static real_T emlrt_marshallIn(const mxArray *a__output_of_feval_,
                               const char_T *identifier);

static const mxArray *feval(const mxArray *m1, const mxArray *m2,
                            const mxArray *m3, const mxArray *m4,
                            const mxArray *m5, const mxArray *m6,
                            const mxArray *m7, emlrtMCInfo *location);

static void gpuEmxEnsureCapacity_real_T(const emxArray_real_T *cpu,
                                        emxArray_real_T *gpu,
                                        boolean_T needsCopy);

static void gpuEmxFree_real_T(emxArray_real_T *gpu);

static void gpuEmxReset_real_T(emxArray_real_T *gpu);

static void gpuThrowError(uint32_T errorCode, const char_T *errorName,
                          const char_T *errorString, const char_T *file,
                          int32_T b_line);

static void gpuThrowError(const char_T *file, int32_T b_line);

static void lt(boolean_T in1_data[], int32_T in1_size[2],
               const real_T in2_data[], const int32_T in2_size[2],
               const real_T in3_data[], const int32_T in3_size[2]);

static void plus(real_T in1_data[], int32_T *in1_size, const real_T in2_data[],
                 const int32_T *in2_size);

static __global__ void solve_benchmark_cuda_kernel01(const int32_T z_size,
                                                     real_T vp_data[]);

static __global__ void solve_benchmark_cuda_kernel02(const int32_T z_size,
                                                     real_T vd_data[]);

static __global__ void
solve_benchmark_cuda_kernel03(const int32_T z_size, real_T bp_data[],
                              real_T V_data[1000000],
                              real_T vpnew_data[1000000]);

static __global__ void solve_benchmark_cuda_kernel04(const int32_T z_size,
                                                     real_T bpr_data[]);

static __global__ void solve_benchmark_cuda_kernel05(const int32_T z_size,
                                                     real_T q_data[],
                                                     real_T rr_data[],
                                                     real_T qnew_data[1000000]);

static __global__ void solve_benchmark_cuda_kernel06(const int32_T b_size,
                                                     emxArray_real_T W);

static __global__ void solve_benchmark_cuda_kernel07(const int32_T b_size,
                                                     real_T WW_data[1000000]);

static __global__ void solve_benchmark_cuda_kernel08(const int32_T z_size,
                                                     real_T Gamma_data[1000]);

static __global__ void solve_benchmark_cuda_kernel09(const int32_T z_size,
                                                     real_T Dcre_data[1000000]);

static __global__ void solve_benchmark_cuda_kernel10(const real_T z_data[],
                                                     const int32_T z_size,
                                                     real_T vautnew_data[1000]);

static __global__ void solve_benchmark_cuda_kernel11(const real_T m_data[],
                                                     const real_T b,
                                                     const int32_T c,
                                                     real_T vautnew_data[1000]);

static __global__ void
solve_benchmark_cuda_kernel12(const real_T vautnew_data[1000], const int32_T b,
                              real_T ua_data[1000]);

static __global__ void solve_benchmark_cuda_kernel13(const int32_T b,
                                                     real_T ua_data[1000]);

static __global__ void solve_benchmark_cuda_kernel14(const int32_T z_size,
                                                     real_T probDcre_data[1000],
                                                     real_T probVp_data[1000]);

static __global__ void solve_benchmark_cuda_kernel15(const int32_T b,
                                                     real_T vaut_data[1000]);

static __global__ void solve_benchmark_cuda_kernel16(const real_T m_data[],
                                                     const int32_T b,
                                                     real_T vdnew_data[1000]);

static __global__ void solve_benchmark_cuda_kernel17(
    const real_T pdf_data[], const real_T betta, const real_T vdnew_data[1000],
    const int32_T pdf_size, const int32_T vautnew, const int32_T pdef_size_dim0,
    const int32_T pdf_size_dim0, real_T pdef_data[1000000]);

static __global__ void solve_benchmark_cuda_kernel18(const int32_T pdef_size,
                                                     real_T vautnew_data[1000]);

static __global__ void solve_benchmark_cuda_kernel19(const real_T ua_data[1000],
                                                     const int32_T b,
                                                     real_T vautnew_data[1000]);

static __global__ void
solve_benchmark_cuda_kernel20(const real_T vaut_data[1000],
                              const real_T vautnew_data[1000], const int32_T b,
                              real_T x_data[1000000]);

static __global__ void
solve_benchmark_cuda_kernel21(const real_T x_data[1000000], const int32_T b,
                              real_T evp_data[1000000]);

static __global__ void
solve_benchmark_cuda_kernel22(const real_T vautnew_data[1000], const int32_T b,
                              real_T vaut_data[1000]);

static __global__ void solve_benchmark_cuda_kernel23(const real_T m_data[],
                                                     const int32_T b,
                                                     real_T y_data[1000]);

static __global__ void solve_benchmark_cuda_kernel24(const real_T betta,
                                                     const real_T y_data[1000],
                                                     const int32_T b,
                                                     real_T vautnew_data[1000]);

static __global__ void solve_benchmark_cuda_kernel25(
    const real_T pdf_data[], const real_T vautnew_data[1000],
    const int32_T pdf_size, const int32_T vautnew, const int32_T pdef_size_dim0,
    const int32_T pdf_size_dim0, real_T pdef_data[1000000]);

static __global__ void solve_benchmark_cuda_kernel26(const int32_T pdef_size,
                                                     real_T evp_data[1000000]);

static __global__ void solve_benchmark_cuda_kernel27(
    const real_T z_data[], const real_T m_data[], const real_T b_data[],
    const real_T q_data[], const int32_T nb, const real_T evp_data[1000000],
    const int32_T q_size_dim0, const int32_T evp_size_dim0,
    const int32_T vpnew_size_dim0, const int32_T b, const int32_T c,
    real_T bp_data[], real_T vpnew_data[1000000], emxArray_real_T W,
    int32_T W_dim0, int32_T W_dim1);

static __global__ void solve_benchmark_cuda_kernel28(
    const real_T q_data[], const real_T sigg_bp, const int32_T nb,
    const real_T vpnew_data[1000000], const emxArray_real_T W,
    const real_T cv_bp, const int32_T qnew_size_dim0,
    const int32_T vpnew_size_dim0, const int32_T q_size_dim0, const int32_T b,
    const int32_T c, real_T qnew_data[1000000], int32_T W_dim0, int32_T W_dim1);

static __global__ void solve_benchmark_cuda_kernel29(
    const real_T b_data[], const real_T q_data[], const real_T bp_data[],
    const real_T alfa, const real_T sigg_bpr, const int32_T nb,
    const real_T vpnew_data[1000000], const real_T cv_bpr,
    const real_T vaut_data[1000], const int32_T bp_size_dim0,
    const int32_T q_size_dim0, const int32_T WW_size_dim0,
    const int32_T Dcre_size_dim0, const int32_T b, real_T WW_data[1000000],
    real_T Gamma_data[1000], real_T Dcre_data[1000000],
    real_T probDcre_data[1000], real_T probVp_data[1000]);

static __global__ void solve_benchmark_cuda_kernel30(const real_T m_data[],
                                                     const int32_T b,
                                                     real_T y_data[1000]);

static __global__ void solve_benchmark_cuda_kernel31(const real_T betta,
                                                     const real_T y_data[1000],
                                                     const int32_T b,
                                                     real_T vautnew_data[1000]);

static __global__ void solve_benchmark_cuda_kernel32(
    const real_T pdf_data[], const real_T vautnew_data[1000],
    const int32_T pdf_size, const int32_T vautnew, const int32_T pdef_size_dim0,
    const int32_T pdf_size_dim0, real_T pdef_data[1000000]);

static __global__ void
solve_benchmark_cuda_kernel33(const real_T vd_data[],
                              const real_T probVp_data[1000], const int32_T b,
                              real_T vautnew_data[1000]);

static __global__ void solve_benchmark_cuda_kernel34(const int32_T pdef_size,
                                                     real_T vdnew_data[1000]);

static __global__ void solve_benchmark_cuda_kernel35(const real_T ua_data[1000],
                                                     const int32_T b,
                                                     real_T vdnew_data[1000]);

static __global__ void solve_benchmark_cuda_kernel36(
    const real_T sigg_defp, const real_T vdnew_data[1000],
    const real_T vpnew_data[1000000], const int32_T vpnew_size,
    const int32_T b_vpnew_size, const int32_T vpnew_size_dim0,
    real_T pdef_data[1000000]);

static __global__ void solve_benchmark_cuda_kernel37(const int32_T b,
                                                     real_T pdef_data[1000000]);

static __global__ void solve_benchmark_cuda_kernel38(const int32_T b,
                                                     real_T pdef_data[1000000]);

static __global__ void
solve_benchmark_cuda_kernel39(const real_T probDcre_data[1000], const int32_T b,
                              real_T vautnew_data[1000]);

static __global__ void
solve_benchmark_cuda_kernel40(const real_T b_data[], const real_T rr_data[],
                              const real_T vautnew_data[1000],
                              const int32_T rr_size, const int32_T b_rr_size,
                              const int32_T rr_size_dim0,
                              real_T evp_data[1000000]);

static __global__ void solve_benchmark_cuda_kernel41(const int32_T pdf_size,
                                                     real_T rr_data[]);

static __global__ void solve_benchmark_cuda_kernel42(const int32_T b,
                                                     real_T rr_data[]);

static __global__ void
solve_benchmark_cuda_kernel43(const real_T rr_data[],
                              const real_T qnew_data[1000000], const int32_T b,
                              real_T pdef_data[1000000]);

static __global__ void solve_benchmark_cuda_kernel44(const int32_T pdf_size,
                                                     real_T qnew_data[1000000]);

static __global__ void solve_benchmark_cuda_kernel45(const int32_T b,
                                                     real_T qnew_data[1000000]);

static __global__ void
solve_benchmark_cuda_kernel46(const real_T qnew_data[1000000], const int32_T b,
                              real_T q_data[]);

static __global__ void solve_benchmark_cuda_kernel47(const real_T q_data[],
                                                     const int32_T b,
                                                     real_T pdef_data[1000000]);

static __global__ void solve_benchmark_cuda_kernel48(const int32_T vautnew,
                                                     real_T vautnew_data[1000]);

static __global__ void
solve_benchmark_cuda_kernel49(const real_T vp_data[],
                              const real_T vpnew_data[1000000],
                              const int32_T vpnew_size, real_T x_data[1000000]);

static __global__ void
solve_benchmark_cuda_kernel50(const real_T x_data[1000000], const int32_T b,
                              real_T evp_data[1000000]);

static __global__ void
solve_benchmark_cuda_kernel51(const real_T vd_data[],
                              const real_T vdnew_data[1000], const int32_T b,
                              real_T x_data[1000000]);

static __global__ void
solve_benchmark_cuda_kernel52(const real_T x_data[1000000], const int32_T b,
                              real_T evp_data[1000000]);

static __global__ void
solve_benchmark_cuda_kernel53(const real_T vpnew_data[1000000],
                              const int32_T vpnew_size, real_T vp_data[]);

static __global__ void
solve_benchmark_cuda_kernel54(const real_T vdnew_data[1000], const int32_T b,
                              real_T vd_data[]);

static __global__ void
solve_benchmark_cuda_kernel55(const real_T qnew_data[1000000],
                              const int32_T qnew_size, real_T q_data[]);

static __global__ void
solve_benchmark_cuda_kernel56(const real_T vpnew_data[1000000],
                              const real_T evp_data[1000000], const int32_T b,
                              real_T V_data[1000000]);

static __global__ void
solve_benchmark_cuda_kernel57(const real_T pdef_data[1000000],
                              const int32_T vlen, const int32_T b,
                              real_T vautnew_data[1000]);

static __global__ void
solve_benchmark_cuda_kernel58(const real_T vp_data[],
                              const real_T pdef_data[1000000],
                              const int32_T vp_size, boolean_T def_data[]);

static __global__ void solve_benchmark_cuda_kernel59(
    const real_T b_data[], const real_T q_data[], const real_T bp_data[],
    const real_T alfa, const int32_T nb, const real_T vpnew_data[1000000],
    const real_T vaut_data[1000], const int32_T bp_size_dim0,
    const int32_T q_size_dim0, const int32_T b, real_T bpr_data[]);

// Function Definitions
static void b_binary_expand_op_4(solve_benchmark_cudaStackData *SD,
                                 real_T in1_data[], int32_T in1_size[2],
                                 const real_T in2_data[],
                                 const int32_T in2_size[2],
                                 const real_T in3_data[],
                                 const int32_T in3_size[2])
{
  real_T in1_tmp;
  int32_T b;
  int32_T b_loop_ub;
  int32_T c;
  int32_T in1_size_idx_0;
  int32_T loop_ub;
  int32_T stride_0_1;
  int32_T stride_1_0;
  int32_T stride_1_1;
  int32_T stride_3_0;
  int32_T stride_3_1;
  if (in3_size[0] == 1) {
    c = in1_size[0];
  } else {
    c = in3_size[0];
  }
  if (c == 1) {
    if (in2_size[0] == 1) {
      b_loop_ub = in1_size[0];
    } else {
      b_loop_ub = in2_size[0];
    }
  } else {
    b_loop_ub = c;
  }
  if (in3_size[1] == 1) {
    c = in1_size[1];
  } else {
    c = in3_size[1];
  }
  if (c == 1) {
    if (in2_size[1] == 1) {
      loop_ub = in1_size[1];
    } else {
      loop_ub = in2_size[1];
    }
  } else {
    loop_ub = c;
  }
  in1_size_idx_0 = (in1_size[0] != 1);
  stride_0_1 = (in1_size[1] != 1);
  stride_1_0 = (in2_size[0] != 1);
  stride_1_1 = (in2_size[1] != 1);
  stride_3_0 = (in3_size[0] != 1);
  stride_3_1 = (in3_size[1] != 1);
  for (c = 0; c < loop_ub; c++) {
    for (b = 0; b < b_loop_ub; b++) {
      in1_tmp = in1_data[b * in1_size_idx_0 + in1_size[0] * (c * stride_0_1)];
      SD->f0.in1_data[b + b_loop_ub * c] =
          in1_tmp * in2_data[b * stride_1_0 + in2_size[0] * (c * stride_1_1)] +
          (1.0 - in1_tmp) *
              in3_data[b * stride_3_0 + in3_size[0] * (c * stride_3_1)];
    }
  }
  in1_size[0] = b_loop_ub;
  in1_size[1] = loop_ub;
  for (c = 0; c < loop_ub; c++) {
    for (b = 0; b < b_loop_ub; b++) {
      in1_size_idx_0 = b_loop_ub * c;
      in1_data[b + in1_size_idx_0] = SD->f0.in1_data[b + in1_size_idx_0];
    }
  }
}

static void b_minus(solve_benchmark_cudaStackData *SD, real_T in1_data[],
                    int32_T in1_size[2], const real_T in2_data[],
                    const int32_T in2_size[2])
{
  int32_T b;
  int32_T b_loop_ub;
  int32_T c;
  int32_T in2_size_idx_0;
  int32_T loop_ub;
  int32_T stride_0_1;
  int32_T stride_1_0;
  int32_T stride_1_1;
  if (in1_size[0] == 1) {
    b_loop_ub = in2_size[0];
  } else {
    b_loop_ub = in1_size[0];
  }
  if (in1_size[1] == 1) {
    loop_ub = in2_size[1];
  } else {
    loop_ub = in1_size[1];
  }
  in2_size_idx_0 = (in2_size[0] != 1);
  stride_0_1 = (in2_size[1] != 1);
  stride_1_0 = (in1_size[0] != 1);
  stride_1_1 = (in1_size[1] != 1);
  for (c = 0; c < loop_ub; c++) {
    for (b = 0; b < b_loop_ub; b++) {
      SD->f1.in2_data[b + b_loop_ub * c] =
          in2_data[b * in2_size_idx_0 + in2_size[0] * (c * stride_0_1)] -
          in1_data[b * stride_1_0 + in1_size[0] * (c * stride_1_1)];
    }
  }
  in1_size[0] = b_loop_ub;
  in1_size[1] = loop_ub;
  for (c = 0; c < loop_ub; c++) {
    for (b = 0; b < b_loop_ub; b++) {
      in2_size_idx_0 = b_loop_ub * c;
      in1_data[b + in2_size_idx_0] = SD->f1.in2_data[b + in2_size_idx_0];
    }
  }
}

static void binary_expand_op(real_T in1_data[], int32_T *in1_size,
                             const real_T in2_data[], const int32_T *in2_size,
                             const real_T in3_data[], const int32_T *in3_size)
{
  int32_T b;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  if (*in3_size == 1) {
    loop_ub = *in2_size;
  } else {
    loop_ub = *in3_size;
  }
  *in1_size = loop_ub;
  stride_0_0 = (*in2_size != 1);
  stride_1_0 = (*in3_size != 1);
  for (b = 0; b < loop_ub; b++) {
    in1_data[b] = in2_data[b * stride_0_0] - in3_data[b * stride_1_0];
  }
}

static void binary_expand_op_5(real_T in1_data[], int32_T in1_size[2],
                               const real_T in2_data[],
                               const int32_T in2_size[2],
                               const real_T in3_data[], const int32_T *in3_size,
                               const real_T in4_data[], const int32_T *in4_size)
{
  int32_T b;
  int32_T b_loop_ub;
  int32_T c;
  int32_T in3_idx_0;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_0_1;
  int32_T stride_2_1;
  in3_idx_0 = *in3_size;
  if (in3_idx_0 == 1) {
    b_loop_ub = in2_size[0];
  } else {
    b_loop_ub = in3_idx_0;
  }
  in1_size[0] = b_loop_ub;
  if (*in4_size == 1) {
    c = 1;
  } else {
    c = *in4_size;
  }
  if (c == 1) {
    loop_ub = in2_size[1];
  } else {
    loop_ub = c;
  }
  in1_size[1] = loop_ub;
  stride_0_0 = (in2_size[0] != 1);
  stride_0_1 = (in2_size[1] != 1);
  in3_idx_0 = (in3_idx_0 != 1);
  stride_2_1 = (*in4_size != 1);
  for (c = 0; c < loop_ub; c++) {
    for (b = 0; b < b_loop_ub; b++) {
      in1_data[b + in1_size[0] * c] =
          0.846 * in2_data[b * stride_0_0 + in2_size[0] * (c * stride_0_1)] +
          in3_data[b * in3_idx_0] / in4_data[c * stride_2_1];
    }
  }
}

static void binary_expand_op_6(real_T in1_data[], int32_T in1_size[2],
                               const real_T in2_data[],
                               const int32_T in2_size[2],
                               const real_T in3_data[], const int32_T *in3_size,
                               real_T in4)
{
  int32_T b;
  int32_T b_loop_ub;
  int32_T c;
  int32_T in3_idx_0;
  int32_T loop_ub;
  int32_T stride_0_0;
  in3_idx_0 = *in3_size;
  if (in3_idx_0 == 1) {
    b_loop_ub = in2_size[0];
  } else {
    b_loop_ub = in3_idx_0;
  }
  in1_size[0] = b_loop_ub;
  loop_ub = in2_size[1];
  in1_size[1] = loop_ub;
  stride_0_0 = (in2_size[0] != 1);
  in3_idx_0 = (in3_idx_0 != 1);
  for (c = 0; c < loop_ub; c++) {
    for (b = 0; b < b_loop_ub; b++) {
      in1_data[b + in1_size[0] * c] =
          (in2_data[b * stride_0_0 + in2_size[0] * c] -
           in3_data[b * in3_idx_0]) /
          in4;
    }
  }
}

static void binary_expand_op_7(real_T in1_data[], int32_T *in1_size,
                               const real_T in2_data[], const int32_T *in2_size,
                               const real_T in3_data[], const int32_T *in3_size)
{
  int32_T b;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  if (*in3_size == 1) {
    loop_ub = *in2_size;
  } else {
    loop_ub = *in3_size;
  }
  *in1_size = loop_ub;
  stride_0_0 = (*in2_size != 1);
  stride_1_0 = (*in3_size != 1);
  for (b = 0; b < loop_ub; b++) {
    in1_data[b] =
        0.154 * in2_data[b * stride_0_0] + 0.846 * in3_data[b * stride_1_0];
  }
}

static void binary_expand_op_8(real_T in1_data[], int32_T in1_size[2],
                               const real_T in2_data[], const int32_T *in2_size,
                               const real_T in3_data[],
                               const int32_T in3_size[2])
{
  int32_T b;
  int32_T b_loop_ub;
  int32_T c;
  int32_T in2_idx_0;
  int32_T loop_ub;
  int32_T stride_1_0;
  in2_idx_0 = *in2_size;
  if (in3_size[0] == 1) {
    b_loop_ub = in2_idx_0;
  } else {
    b_loop_ub = in3_size[0];
  }
  in1_size[0] = b_loop_ub;
  loop_ub = in3_size[1];
  in1_size[1] = loop_ub;
  in2_idx_0 = (in2_idx_0 != 1);
  stride_1_0 = (in3_size[0] != 1);
  for (c = 0; c < loop_ub; c++) {
    for (b = 0; b < b_loop_ub; b++) {
      in1_data[b + in1_size[0] * c] =
          in2_data[b * in2_idx_0] * in3_data[b * stride_1_0 + in3_size[0] * c];
    }
  }
}

static real_T c_emlrt_marshallIn(const mxArray *src,
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

static void checkCudaError(cudaError_t errorCode, const char_T *file,
                           int32_T b_line)
{
  if (errorCode != cudaSuccess) {
    gpuThrowError(errorCode, cudaGetErrorName(errorCode),
                  cudaGetErrorString(errorCode), file, b_line);
  }
}

static uint64_T computeNumIters(int32_T ub)
{
  uint64_T numIters;
  numIters = 0ULL;
  if (ub >= 0) {
    numIters = static_cast<uint64_T>(ub + 1);
  }
  return numIters;
}

static uint64_T computeNumIters(int32_T ub, int32_T b_ub)
{
  uint64_T n;
  uint64_T numIters;
  boolean_T overflow;
  overflow = false;
  n = 0ULL;
  if (ub >= 0) {
    n = static_cast<uint64_T>(ub + 1);
  }
  numIters = n;
  n = 0ULL;
  if (b_ub >= 0) {
    n = static_cast<uint64_T>(b_ub + 1);
    overflow = (numIters > MAX_uint64_T / n);
  }
  numIters *= n;
  if (overflow) {
    gpuThrowError(__FILE__, __LINE__);
  }
  return numIters;
}

static real_T emlrt_marshallIn(const mxArray *u,
                               const emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = c_emlrt_marshallIn(emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T emlrt_marshallIn(const mxArray *a__output_of_feval_,
                               const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  real_T y;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  y = emlrt_marshallIn(emlrtAlias(a__output_of_feval_), &thisId);
  emlrtDestroyArray(&a__output_of_feval_);
  return y;
}

static const mxArray *feval(const mxArray *m1, const mxArray *m2,
                            const mxArray *m3, const mxArray *m4,
                            const mxArray *m5, const mxArray *m6,
                            const mxArray *m7, emlrtMCInfo *location)
{
  const mxArray *pArrays[7];
  const mxArray *m8;
  pArrays[0] = m1;
  pArrays[1] = m2;
  pArrays[2] = m3;
  pArrays[3] = m4;
  pArrays[4] = m5;
  pArrays[5] = m6;
  pArrays[6] = m7;
  return emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 1, &m8, 7, &pArrays[0],
                               "feval", true, location);
}

static void gpuEmxEnsureCapacity_real_T(const emxArray_real_T *cpu,
                                        emxArray_real_T *gpu,
                                        boolean_T needsCopy)
{
  real_T *newData;
  int32_T i;
  int32_T totalSizeCpu;
  int32_T totalSizeGpu;
  if (gpu->numDimensions == 0) {
    gpu->numDimensions = cpu->numDimensions;
    gpu->size = static_cast<int32_T *>(emlrtCallocMex(
        static_cast<uint32_T>(gpu->numDimensions), sizeof(int32_T)));
  }
  totalSizeCpu = 1;
  totalSizeGpu = 1;
  for (i = 0; i < cpu->numDimensions; i++) {
    totalSizeGpu *= gpu->size[i];
    totalSizeCpu *= cpu->size[i];
    gpu->size[i] = cpu->size[i];
  }
  if (((totalSizeCpu == 0) && (cpu->allocatedSize > 0)) ||
      (gpu->allocatedSize < totalSizeCpu)) {
    i = cpu->allocatedSize;
    if (i < totalSizeCpu) {
      i = totalSizeCpu;
    }
    checkCudaError(
        mwCudaMalloc(&newData, static_cast<uint32_T>(i) * sizeof(real_T)),
        __FILE__, __LINE__);
    needsCopy = (needsCopy && (totalSizeGpu > 0));
    if (needsCopy) {
      checkCudaError(
          cudaMemcpy(newData, gpu->data,
                     static_cast<uint32_T>(totalSizeGpu) * sizeof(real_T),
                     cudaMemcpyDeviceToDevice),
          __FILE__, __LINE__);
    }
    if (gpu->canFreeData) {
      checkCudaError(mwCudaFree(gpu->data), __FILE__, __LINE__);
    }
    gpu->data = newData;
    gpu->allocatedSize = i;
    gpu->canFreeData = true;
  }
}

static void gpuEmxFree_real_T(emxArray_real_T *gpu)
{
  if (gpu->data && gpu->canFreeData && (gpu->data != (void *)4207599121ULL)) {
    checkCudaError(mwCudaFree(gpu->data), __FILE__, __LINE__);
  }
  emlrtFreeMex(gpu->size);
}

static void gpuEmxReset_real_T(emxArray_real_T *gpu)
{
  std::memset(gpu, 0, sizeof(emxArray_real_T));
}

static void gpuThrowError(uint32_T errorCode, const char_T *errorName,
                          const char_T *errorString, const char_T *file,
                          int32_T b_line)
{
  emlrtRTEInfo rtInfo;
  rtInfo.lineNo = b_line;
  rtInfo.colNo = 0;
  rtInfo.fName = "";
  rtInfo.pName = file;
  emlrtCUDAError(errorCode, (char_T *)errorName, (char_T *)errorString, &rtInfo,
                 emlrtRootTLSGlobal);
}

static void gpuThrowError(const char_T *file, int32_T b_line)
{
  emlrtRTEInfo rtInfo;
  rtInfo.lineNo = b_line;
  rtInfo.colNo = 0;
  rtInfo.fName = "";
  rtInfo.pName = file;
  emlrtCUDAError(
      0U, (char_T *)"_",
      (char_T
           *)"Unable to launch kernel. Loop nest contains too many iterations.",
      &rtInfo, emlrtRootTLSGlobal);
}

static void lt(boolean_T in1_data[], int32_T in1_size[2],
               const real_T in2_data[], const int32_T in2_size[2],
               const real_T in3_data[], const int32_T in3_size[2])
{
  int32_T b;
  int32_T b_loop_ub;
  int32_T c;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_0_1;
  int32_T stride_1_0;
  int32_T stride_1_1;
  if (in3_size[0] == 1) {
    b_loop_ub = in2_size[0];
  } else {
    b_loop_ub = in3_size[0];
  }
  in1_size[0] = b_loop_ub;
  if (in3_size[1] == 1) {
    loop_ub = in2_size[1];
  } else {
    loop_ub = in3_size[1];
  }
  in1_size[1] = loop_ub;
  stride_0_0 = (in2_size[0] != 1);
  stride_0_1 = (in2_size[1] != 1);
  stride_1_0 = (in3_size[0] != 1);
  stride_1_1 = (in3_size[1] != 1);
  for (c = 0; c < loop_ub; c++) {
    for (b = 0; b < b_loop_ub; b++) {
      in1_data[b + in1_size[0] * c] =
          (in2_data[b * stride_0_0 + in2_size[0] * (c * stride_0_1)] <
           in3_data[b * stride_1_0 + in3_size[0] * (c * stride_1_1)]);
    }
  }
}

static void plus(real_T in1_data[], int32_T *in1_size, const real_T in2_data[],
                 const int32_T *in2_size)
{
  real_T b_in2_data[1000];
  int32_T b;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  if (*in1_size == 1) {
    loop_ub = *in2_size;
  } else {
    loop_ub = *in1_size;
  }
  stride_0_0 = (*in2_size != 1);
  stride_1_0 = (*in1_size != 1);
  for (b = 0; b < loop_ub; b++) {
    b_in2_data[b] = in2_data[b * stride_0_0] + in1_data[b * stride_1_0];
  }
  *in1_size = loop_ub;
  for (b = 0; b < loop_ub; b++) {
    in1_data[b] = b_in2_data[b];
  }
}

static __global__ __launch_bounds__(256, 1) void solve_benchmark_cuda_kernel01(
    const int32_T z_size, real_T vp_data[])
{
  uint64_T gStride;
  uint64_T gThreadId;
  uint64_T idx;
  uint64_T loopEnd;
  int32_T iv0;
  gThreadId = mwGetGlobalThreadIndex();
  gStride = mwGetTotalThreadsLaunched();
  loopEnd = static_cast<uint64_T>(z_size);
  for (idx = gThreadId; idx <= loopEnd; idx += gStride) {
    iv0 = static_cast<int32_T>(idx);
    vp_data[iv0] = 0.0;
  }
}

static __global__ __launch_bounds__(256, 1) void solve_benchmark_cuda_kernel02(
    const int32_T z_size, real_T vd_data[])
{
  uint64_T gStride;
  uint64_T gThreadId;
  uint64_T idx;
  uint64_T loopEnd;
  int32_T iv0;
  gThreadId = mwGetGlobalThreadIndex();
  gStride = mwGetTotalThreadsLaunched();
  loopEnd = static_cast<uint64_T>(z_size);
  for (idx = gThreadId; idx <= loopEnd; idx += gStride) {
    iv0 = static_cast<int32_T>(idx);
    vd_data[iv0] = 0.0;
  }
}

static __global__ __launch_bounds__(256, 1) void solve_benchmark_cuda_kernel03(
    const int32_T z_size, real_T bp_data[], real_T V_data[1000000],
    real_T vpnew_data[1000000])
{
  uint64_T gStride;
  uint64_T gThreadId;
  uint64_T idx;
  uint64_T loopEnd;
  int32_T iv0;
  gThreadId = mwGetGlobalThreadIndex();
  gStride = mwGetTotalThreadsLaunched();
  loopEnd = static_cast<uint64_T>(z_size);
  for (idx = gThreadId; idx <= loopEnd; idx += gStride) {
    iv0 = static_cast<int32_T>(idx);
    V_data[iv0] = 0.0;
    vpnew_data[iv0] = 0.0;
    bp_data[iv0] = 0.0;
  }
}

static __global__ __launch_bounds__(256, 1) void solve_benchmark_cuda_kernel04(
    const int32_T z_size, real_T bpr_data[])
{
  uint64_T gStride;
  uint64_T gThreadId;
  uint64_T idx;
  uint64_T loopEnd;
  int32_T iv0;
  gThreadId = mwGetGlobalThreadIndex();
  gStride = mwGetTotalThreadsLaunched();
  loopEnd = static_cast<uint64_T>(z_size);
  for (idx = gThreadId; idx <= loopEnd; idx += gStride) {
    iv0 = static_cast<int32_T>(idx);
    bpr_data[iv0] = 0.0;
  }
}

static __global__ __launch_bounds__(256, 1) void solve_benchmark_cuda_kernel05(
    const int32_T z_size, real_T q_data[], real_T rr_data[],
    real_T qnew_data[1000000])
{
  uint64_T gStride;
  uint64_T gThreadId;
  uint64_T idx;
  uint64_T loopEnd;
  int32_T iv0;
  gThreadId = mwGetGlobalThreadIndex();
  gStride = mwGetTotalThreadsLaunched();
  loopEnd = static_cast<uint64_T>(z_size);
  for (idx = gThreadId; idx <= loopEnd; idx += gStride) {
    iv0 = static_cast<int32_T>(idx);
    q_data[iv0] = 0.9615384615384615;
    qnew_data[iv0] = 0.0;
    rr_data[iv0] = 0.4807692307692307;
  }
}

static __global__ __launch_bounds__(256, 1) void solve_benchmark_cuda_kernel06(
    const int32_T b_size, emxArray_real_T W)
{
  uint64_T gStride;
  uint64_T gThreadId;
  uint64_T idx;
  uint64_T loopEnd;
  int32_T iv0;
  gThreadId = mwGetGlobalThreadIndex();
  gStride = mwGetTotalThreadsLaunched();
  loopEnd = static_cast<uint64_T>(b_size);
  for (idx = gThreadId; idx <= loopEnd; idx += gStride) {
    iv0 = static_cast<int32_T>(idx);
    W.data[iv0] = 0.0;
  }
}

static __global__ __launch_bounds__(256, 1) void solve_benchmark_cuda_kernel07(
    const int32_T b_size, real_T WW_data[1000000])
{
  uint64_T gStride;
  uint64_T gThreadId;
  uint64_T idx;
  uint64_T loopEnd;
  int32_T iv0;
  gThreadId = mwGetGlobalThreadIndex();
  gStride = mwGetTotalThreadsLaunched();
  loopEnd = static_cast<uint64_T>(b_size);
  for (idx = gThreadId; idx <= loopEnd; idx += gStride) {
    iv0 = static_cast<int32_T>(idx);
    WW_data[iv0] = 0.0;
  }
}

static __global__ __launch_bounds__(256, 1) void solve_benchmark_cuda_kernel08(
    const int32_T z_size, real_T Gamma_data[1000])
{
  uint64_T gStride;
  uint64_T gThreadId;
  uint64_T idx;
  uint64_T loopEnd;
  int32_T iv0;
  gThreadId = mwGetGlobalThreadIndex();
  gStride = mwGetTotalThreadsLaunched();
  loopEnd = static_cast<uint64_T>(z_size);
  for (idx = gThreadId; idx <= loopEnd; idx += gStride) {
    iv0 = static_cast<int32_T>(idx);
    Gamma_data[iv0] = 0.0;
  }
}

static __global__ __launch_bounds__(256, 1) void solve_benchmark_cuda_kernel09(
    const int32_T z_size, real_T Dcre_data[1000000])
{
  uint64_T gStride;
  uint64_T gThreadId;
  uint64_T idx;
  uint64_T loopEnd;
  int32_T iv0;
  gThreadId = mwGetGlobalThreadIndex();
  gStride = mwGetTotalThreadsLaunched();
  loopEnd = static_cast<uint64_T>(z_size);
  for (idx = gThreadId; idx <= loopEnd; idx += gStride) {
    iv0 = static_cast<int32_T>(idx);
    Dcre_data[iv0] = 0.0;
  }
}

static __global__ __launch_bounds__(256, 1) void solve_benchmark_cuda_kernel10(
    const real_T z_data[], const int32_T z_size, real_T vautnew_data[1000])
{
  uint64_T gStride;
  uint64_T gThreadId;
  uint64_T idx;
  uint64_T loopEnd;
  int32_T k;
  gThreadId = mwGetGlobalThreadIndex();
  gStride = mwGetTotalThreadsLaunched();
  loopEnd = static_cast<uint64_T>(z_size);
  for (idx = gThreadId; idx <= loopEnd; idx += gStride) {
    k = static_cast<int32_T>(idx);
    vautnew_data[k] = exp(z_data[k]);
  }
}

static __global__ __launch_bounds__(256, 1) void solve_benchmark_cuda_kernel11(
    const real_T m_data[], const real_T b, const int32_T c,
    real_T vautnew_data[1000])
{
  uint64_T gStride;
  uint64_T gThreadId;
  uint64_T idx;
  uint64_T loopEnd;
  int32_T iv0;
  gThreadId = mwGetGlobalThreadIndex();
  gStride = mwGetTotalThreadsLaunched();
  loopEnd = static_cast<uint64_T>(c);
  for (idx = gThreadId; idx <= loopEnd; idx += gStride) {
    iv0 = static_cast<int32_T>(idx);
    vautnew_data[iv0] = vautnew_data[iv0] * m_data[iv0] * b;
  }
}

static __global__ __launch_bounds__(256, 1) void solve_benchmark_cuda_kernel12(
    const real_T vautnew_data[1000], const int32_T b, real_T ua_data[1000])
{
  uint64_T gStride;
  uint64_T gThreadId;
  uint64_T idx;
  uint64_T loopEnd;
  int32_T k;
  gThreadId = mwGetGlobalThreadIndex();
  gStride = mwGetTotalThreadsLaunched();
  loopEnd = static_cast<uint64_T>(b);
  for (idx = gThreadId; idx <= loopEnd; idx += gStride) {
    k = static_cast<int32_T>(idx);
    ua_data[k] = pow(vautnew_data[k], -1.0);
  }
}

static __global__ __launch_bounds__(256, 1) void solve_benchmark_cuda_kernel13(
    const int32_T b, real_T ua_data[1000])
{
  uint64_T gStride;
  uint64_T gThreadId;
  uint64_T idx;
  uint64_T loopEnd;
  int32_T iv0;
  gThreadId = mwGetGlobalThreadIndex();
  gStride = mwGetTotalThreadsLaunched();
  loopEnd = static_cast<uint64_T>(b);
  for (idx = gThreadId; idx <= loopEnd; idx += gStride) {
    iv0 = static_cast<int32_T>(idx);
    ua_data[iv0] = -(ua_data[iv0] - 1.0);
  }
}

static __global__ __launch_bounds__(256, 1) void solve_benchmark_cuda_kernel14(
    const int32_T z_size, real_T probDcre_data[1000], real_T probVp_data[1000])
{
  uint64_T gStride;
  uint64_T gThreadId;
  uint64_T idx;
  uint64_T loopEnd;
  int32_T iv0;
  gThreadId = mwGetGlobalThreadIndex();
  gStride = mwGetTotalThreadsLaunched();
  loopEnd = static_cast<uint64_T>(z_size);
  for (idx = gThreadId; idx <= loopEnd; idx += gStride) {
    iv0 = static_cast<int32_T>(idx);
    probDcre_data[iv0] = 0.0;
    probVp_data[iv0] = 0.0;
  }
}

static __global__ __launch_bounds__(256, 1) void solve_benchmark_cuda_kernel15(
    const int32_T b, real_T vaut_data[1000])
{
  uint64_T gStride;
  uint64_T gThreadId;
  uint64_T idx;
  uint64_T loopEnd;
  int32_T iv0;
  gThreadId = mwGetGlobalThreadIndex();
  gStride = mwGetTotalThreadsLaunched();
  loopEnd = static_cast<uint64_T>(b);
  for (idx = gThreadId; idx <= loopEnd; idx += gStride) {
    iv0 = static_cast<int32_T>(idx);
    vaut_data[iv0] = 0.0;
  }
}

static __global__ __launch_bounds__(256, 1) void solve_benchmark_cuda_kernel16(
    const real_T m_data[], const int32_T b, real_T vdnew_data[1000])
{
  uint64_T gStride;
  uint64_T gThreadId;
  uint64_T idx;
  uint64_T loopEnd;
  int32_T k;
  gThreadId = mwGetGlobalThreadIndex();
  gStride = mwGetTotalThreadsLaunched();
  loopEnd = static_cast<uint64_T>(b);
  for (idx = gThreadId; idx <= loopEnd; idx += gStride) {
    k = static_cast<int32_T>(idx);
    vdnew_data[k] = pow(m_data[k], -1.0);
  }
}

static __global__ __launch_bounds__(256, 1) void solve_benchmark_cuda_kernel17(
    const real_T pdf_data[], const real_T betta, const real_T vdnew_data[1000],
    const int32_T pdf_size, const int32_T vautnew, const int32_T pdef_size_dim0,
    const int32_T pdf_size_dim0, real_T pdef_data[1000000])
{
  uint64_T gStride;
  uint64_T gThreadId;
  uint64_T idx;
  uint64_T loopEnd;
  int32_T b;
  int32_T iv0;
  gThreadId = mwGetGlobalThreadIndex();
  gStride = mwGetTotalThreadsLaunched();
  loopEnd = (static_cast<uint64_T>(pdf_size) + 1ULL) *
                (static_cast<uint64_T>(vautnew) + 1ULL) -
            1ULL;
  for (idx = gThreadId; idx <= loopEnd; idx += gStride) {
    b = static_cast<int32_T>(idx % (static_cast<uint64_T>(vautnew) + 1ULL));
    iv0 = static_cast<int32_T>((idx - static_cast<uint64_T>(b)) /
                               (static_cast<uint64_T>(vautnew) + 1ULL));
    pdef_data[b + pdef_size_dim0 * iv0] =
        vdnew_data[b] * pdf_data[b + pdf_size_dim0 * iv0] * betta;
  }
}

static __global__ __launch_bounds__(256, 1) void solve_benchmark_cuda_kernel18(
    const int32_T pdef_size, real_T vautnew_data[1000])
{
  uint64_T gStride;
  uint64_T gThreadId;
  uint64_T idx;
  uint64_T loopEnd;
  int32_T iv0;
  gThreadId = mwGetGlobalThreadIndex();
  gStride = mwGetTotalThreadsLaunched();
  loopEnd = static_cast<uint64_T>(pdef_size);
  for (idx = gThreadId; idx <= loopEnd; idx += gStride) {
    iv0 = static_cast<int32_T>(idx);
    vautnew_data[iv0] = 0.0;
  }
}

static __global__ __launch_bounds__(256, 1) void solve_benchmark_cuda_kernel19(
    const real_T ua_data[1000], const int32_T b, real_T vautnew_data[1000])
{
  uint64_T gStride;
  uint64_T gThreadId;
  uint64_T idx;
  uint64_T loopEnd;
  int32_T iv0;
  gThreadId = mwGetGlobalThreadIndex();
  gStride = mwGetTotalThreadsLaunched();
  loopEnd = static_cast<uint64_T>(b);
  for (idx = gThreadId; idx <= loopEnd; idx += gStride) {
    iv0 = static_cast<int32_T>(idx);
    vautnew_data[iv0] += ua_data[iv0];
  }
}

static __global__ __launch_bounds__(256, 1) void solve_benchmark_cuda_kernel20(
    const real_T vaut_data[1000], const real_T vautnew_data[1000],
    const int32_T b, real_T x_data[1000000])
{
  uint64_T gStride;
  uint64_T gThreadId;
  uint64_T idx;
  uint64_T loopEnd;
  int32_T iv0;
  gThreadId = mwGetGlobalThreadIndex();
  gStride = mwGetTotalThreadsLaunched();
  loopEnd = static_cast<uint64_T>(b);
  for (idx = gThreadId; idx <= loopEnd; idx += gStride) {
    iv0 = static_cast<int32_T>(idx);
    x_data[iv0] = vautnew_data[iv0] - vaut_data[iv0];
  }
}

static __global__ __launch_bounds__(256, 1) void solve_benchmark_cuda_kernel21(
    const real_T x_data[1000000], const int32_T b, real_T evp_data[1000000])
{
  uint64_T gStride;
  uint64_T gThreadId;
  uint64_T idx;
  uint64_T loopEnd;
  int32_T k;
  gThreadId = mwGetGlobalThreadIndex();
  gStride = mwGetTotalThreadsLaunched();
  loopEnd = static_cast<uint64_T>(b);
  for (idx = gThreadId; idx <= loopEnd; idx += gStride) {
    k = static_cast<int32_T>(idx);
    evp_data[k] = fabs(x_data[k]);
  }
}

static __global__ __launch_bounds__(256, 1) void solve_benchmark_cuda_kernel22(
    const real_T vautnew_data[1000], const int32_T b, real_T vaut_data[1000])
{
  uint64_T gStride;
  uint64_T gThreadId;
  uint64_T idx;
  uint64_T loopEnd;
  int32_T iv0;
  gThreadId = mwGetGlobalThreadIndex();
  gStride = mwGetTotalThreadsLaunched();
  loopEnd = static_cast<uint64_T>(b);
  for (idx = gThreadId; idx <= loopEnd; idx += gStride) {
    iv0 = static_cast<int32_T>(idx);
    vaut_data[iv0] = vautnew_data[iv0];
  }
}

static __global__ __launch_bounds__(256, 1) void solve_benchmark_cuda_kernel23(
    const real_T m_data[], const int32_T b, real_T y_data[1000])
{
  uint64_T gStride;
  uint64_T gThreadId;
  uint64_T idx;
  uint64_T loopEnd;
  int32_T k;
  gThreadId = mwGetGlobalThreadIndex();
  gStride = mwGetTotalThreadsLaunched();
  loopEnd = static_cast<uint64_T>(b);
  for (idx = gThreadId; idx <= loopEnd; idx += gStride) {
    k = static_cast<int32_T>(idx);
    y_data[k] = pow(m_data[k], -1.0);
  }
}

static __global__ __launch_bounds__(256, 1) void solve_benchmark_cuda_kernel24(
    const real_T betta, const real_T y_data[1000], const int32_T b,
    real_T vautnew_data[1000])
{
  uint64_T gStride;
  uint64_T gThreadId;
  uint64_T idx;
  uint64_T loopEnd;
  int32_T iv0;
  gThreadId = mwGetGlobalThreadIndex();
  gStride = mwGetTotalThreadsLaunched();
  loopEnd = static_cast<uint64_T>(b);
  for (idx = gThreadId; idx <= loopEnd; idx += gStride) {
    iv0 = static_cast<int32_T>(idx);
    vautnew_data[iv0] = y_data[iv0] * betta;
  }
}

static __global__ __launch_bounds__(256, 1) void solve_benchmark_cuda_kernel25(
    const real_T pdf_data[], const real_T vautnew_data[1000],
    const int32_T pdf_size, const int32_T vautnew, const int32_T pdef_size_dim0,
    const int32_T pdf_size_dim0, real_T pdef_data[1000000])
{
  uint64_T gStride;
  uint64_T gThreadId;
  uint64_T idx;
  uint64_T loopEnd;
  int32_T b;
  int32_T iv0;
  gThreadId = mwGetGlobalThreadIndex();
  gStride = mwGetTotalThreadsLaunched();
  loopEnd = (static_cast<uint64_T>(pdf_size) + 1ULL) *
                (static_cast<uint64_T>(vautnew) + 1ULL) -
            1ULL;
  for (idx = gThreadId; idx <= loopEnd; idx += gStride) {
    b = static_cast<int32_T>(idx % (static_cast<uint64_T>(vautnew) + 1ULL));
    iv0 = static_cast<int32_T>((idx - static_cast<uint64_T>(b)) /
                               (static_cast<uint64_T>(vautnew) + 1ULL));
    pdef_data[b + pdef_size_dim0 * iv0] =
        vautnew_data[b] * pdf_data[b + pdf_size_dim0 * iv0];
  }
}

static __global__ __launch_bounds__(256, 1) void solve_benchmark_cuda_kernel26(
    const int32_T pdef_size, real_T evp_data[1000000])
{
  uint64_T gStride;
  uint64_T gThreadId;
  uint64_T idx;
  uint64_T loopEnd;
  int32_T iv0;
  gThreadId = mwGetGlobalThreadIndex();
  gStride = mwGetTotalThreadsLaunched();
  loopEnd = static_cast<uint64_T>(pdef_size);
  for (idx = gThreadId; idx <= loopEnd; idx += gStride) {
    iv0 = static_cast<int32_T>(idx);
    evp_data[iv0] = 0.0;
  }
}

static __global__ __launch_bounds__(256, 1) void solve_benchmark_cuda_kernel27(
    const real_T z_data[], const real_T m_data[], const real_T b_data[],
    const real_T q_data[], const int32_T nb, const real_T evp_data[1000000],
    const int32_T q_size_dim0, const int32_T evp_size_dim0,
    const int32_T vpnew_size_dim0, const int32_T b, const int32_T c,
    real_T bp_data[], real_T vpnew_data[1000000], emxArray_real_T W,
    int32_T W_dim0, int32_T W_dim1)
{
  real_T varargin_1_data[1000];
  real_T WW1;
  real_T maxWW;
  real_T probVp_is;
  uint64_T gStride;
  uint64_T gThreadId;
  uint64_T idx;
  uint64_T loopEnd;
  int32_T i;
  int32_T ib;
  int32_T iv0;
  int32_T ix;
  boolean_T p;
  gThreadId = mwGetGlobalThreadIndex();
  gStride = mwGetTotalThreadsLaunched();
  //  to calculate the value of default
  loopEnd =
      (static_cast<uint64_T>(b) + 1ULL) * (static_cast<uint64_T>(c) + 1ULL) -
      1ULL;
  for (idx = gThreadId; idx <= loopEnd; idx += gStride) {
    ib = static_cast<int32_T>(idx % (static_cast<uint64_T>(c) + 1ULL));
    ix = static_cast<int32_T>((idx - static_cast<uint64_T>(ib)) /
                              (static_cast<uint64_T>(c) + 1ULL));
    maxWW = exp(z_data[ix]) * m_data[ix];
    for (i = 0; i < nb; i++) {
      probVp_is = q_data[ix + q_size_dim0 * i];
      if (probVp_is >= 0.45) {
        WW1 = (maxWW - 0.1993 * b_data[ib]) +
              probVp_is * (b_data[i] * m_data[ix] - 0.85 * b_data[ib]);
        if (WW1 <= 0.0) {
          W.data[(i + W_dim0 * ib) + W_dim0 * W_dim1 * ix] = -CUDART_INF;
        } else {
          W.data[(i + W_dim0 * ib) + W_dim0 * W_dim1 * ix] =
              (1.0 - 1.0 / WW1) + evp_data[ix + evp_size_dim0 * i];
        }
      } else {
        W.data[(i + W_dim0 * ib) + W_dim0 * W_dim1 * ix] = -CUDART_INF;
      }
    }
    for (iv0 = 0; iv0 < W_dim0; iv0++) {
      varargin_1_data[iv0] = W.data[(iv0 + W_dim0 * ib) + W_dim0 * W_dim1 * ix];
    }
    iv0 = 1;
    WW1 = W.data[W_dim0 * ib + W_dim0 * W_dim1 * ix];
    for (i = 0; i <= W_dim0 - 2; i++) {
      probVp_is = varargin_1_data[i + 1];
      if (isnan(probVp_is)) {
        p = false;
      } else if (isnan(WW1)) {
        p = true;
      } else {
        p = (WW1 < W.data[((i + W_dim0 * ib) + W_dim0 * W_dim1 * ix) + 1]);
      }
      if (p) {
        WW1 = probVp_is;
        iv0 = i + 2;
      }
    }
    ib = ix + vpnew_size_dim0 * ib;
    vpnew_data[ib] = WW1;
    bp_data[ib] = static_cast<real_T>(iv0);
  }
}

static __global__ __launch_bounds__(256, 1) void solve_benchmark_cuda_kernel28(
    const real_T q_data[], const real_T sigg_bp, const int32_T nb,
    const real_T vpnew_data[1000000], const emxArray_real_T W,
    const real_T cv_bp, const int32_T qnew_size_dim0,
    const int32_T vpnew_size_dim0, const int32_T q_size_dim0, const int32_T b,
    const int32_T c, real_T qnew_data[1000000], int32_T W_dim0, int32_T W_dim1)
{
  real_T WW1;
  real_T maxWW;
  real_T sumExp;
  uint64_T gStride;
  uint64_T gThreadId;
  uint64_T idx;
  uint64_T loopEnd;
  int32_T i;
  int32_T ib;
  int32_T ix;
  gThreadId = mwGetGlobalThreadIndex();
  gStride = mwGetTotalThreadsLaunched();
  //  to incorporate taste shocks on debt choice
  loopEnd =
      (static_cast<uint64_T>(b) + 1ULL) * (static_cast<uint64_T>(c) + 1ULL) -
      1ULL;
  for (idx = gThreadId; idx <= loopEnd; idx += gStride) {
    ib = static_cast<int32_T>(idx % (static_cast<uint64_T>(c) + 1ULL));
    ix = static_cast<int32_T>((idx - static_cast<uint64_T>(ib)) /
                              (static_cast<uint64_T>(c) + 1ULL));
    sumExp = 0.0;
    WW1 = 0.0;
    for (i = 0; i < nb; i++) {
      maxWW = (W.data[(i + W_dim0 * ib) + W_dim0 * W_dim1 * ix] -
               vpnew_data[ix + vpnew_size_dim0 * ib]) -
              cv_bp;
      if (maxWW > 0.0) {
        maxWW = exp((maxWW + cv_bp) / sigg_bp);
        //  Compute theExp
        sumExp += maxWW;
        //  Accumulate theExp
        WW1 += maxWW * q_data[ix + q_size_dim0 * i];
        //  Accumulate theExpQ
      }
    }
    qnew_data[ix + qnew_size_dim0 * ib] = 0.85 * (WW1 / sumExp + 0.058) + 0.15;
  }
}

static __global__ __launch_bounds__(256, 1) void solve_benchmark_cuda_kernel29(
    const real_T b_data[], const real_T q_data[], const real_T bp_data[],
    const real_T alfa, const real_T sigg_bpr, const int32_T nb,
    const real_T vpnew_data[1000000], const real_T cv_bpr,
    const real_T vaut_data[1000], const int32_T bp_size_dim0,
    const int32_T q_size_dim0, const int32_T WW_size_dim0,
    const int32_T Dcre_size_dim0, const int32_T b, real_T WW_data[1000000],
    real_T Gamma_data[1000], real_T Dcre_data[1000000],
    real_T probDcre_data[1000], real_T probVp_data[1000])
{
  real_T WW1;
  real_T maxWW;
  real_T probVp_is;
  real_T sumExp;
  uint64_T gStride;
  uint64_T gThreadId;
  uint64_T idx;
  uint64_T loopEnd;
  int32_T ib;
  int32_T iv0;
  int32_T ix;
  gThreadId = mwGetGlobalThreadIndex();
  gStride = mwGetTotalThreadsLaunched();
  loopEnd = static_cast<uint64_T>(b);
  for (idx = gThreadId; idx <= loopEnd; idx += gStride) {
    ix = static_cast<int32_T>(idx);
    maxWW = -CUDART_INF;
    //  To store the maximum value of WW
    for (ib = 0; ib < nb; ib++) {
      iv0 = ix + bp_size_dim0 * ib;
      probVp_is =
          (0.85 * (q_data[ix + q_size_dim0 *
                                   (static_cast<int32_T>(bp_data[iv0]) - 1)] +
                   0.058) +
           0.15) *
          b_data[ib];
      Dcre_data[iv0] = probVp_is;
      probVp_is = pow(fmax(0.0, vpnew_data[iv0] - vaut_data[ix]), alfa) *
                  pow(probVp_is, 1.0 - alfa);
      WW_data[ib + WW_size_dim0 * ix] = probVp_is;
      if (probVp_is > maxWW) {
        maxWW = probVp_is;
        //  Update maximum value
      }
    }
    Gamma_data[ix] = maxWW;
    sumExp = 0.0;
    WW1 = 0.0;
    probVp_is = 0.0;
    for (ib = 0; ib < nb; ib++) {
      maxWW = (WW_data[ib + WW_size_dim0 * ix] - Gamma_data[ix]) - cv_bpr;
      if (maxWW > 0.0) {
        maxWW = exp((maxWW + cv_bpr) / sigg_bpr);
        sumExp += maxWW;
        //  Accumulate sums directly
        iv0 = ix + Dcre_size_dim0 * ib;
        WW1 += maxWW * Dcre_data[iv0];
        probVp_is += maxWW * vpnew_data[iv0];
      }
    }
    if (sumExp > 0.0) {
      probDcre_data[ix] = WW1 / sumExp;
      probVp_data[ix] = probVp_is / sumExp;
    } else {
      probDcre_data[ix] = 0.0;
      probVp_data[ix] = 0.0;
    }
  }
}

static __global__ __launch_bounds__(256, 1) void solve_benchmark_cuda_kernel30(
    const real_T m_data[], const int32_T b, real_T y_data[1000])
{
  uint64_T gStride;
  uint64_T gThreadId;
  uint64_T idx;
  uint64_T loopEnd;
  int32_T k;
  gThreadId = mwGetGlobalThreadIndex();
  gStride = mwGetTotalThreadsLaunched();
  loopEnd = static_cast<uint64_T>(b);
  for (idx = gThreadId; idx <= loopEnd; idx += gStride) {
    k = static_cast<int32_T>(idx);
    y_data[k] = pow(m_data[k], -1.0);
  }
}

static __global__ __launch_bounds__(256, 1) void solve_benchmark_cuda_kernel31(
    const real_T betta, const real_T y_data[1000], const int32_T b,
    real_T vautnew_data[1000])
{
  uint64_T gStride;
  uint64_T gThreadId;
  uint64_T idx;
  uint64_T loopEnd;
  int32_T iv0;
  gThreadId = mwGetGlobalThreadIndex();
  gStride = mwGetTotalThreadsLaunched();
  loopEnd = static_cast<uint64_T>(b);
  for (idx = gThreadId; idx <= loopEnd; idx += gStride) {
    iv0 = static_cast<int32_T>(idx);
    vautnew_data[iv0] = y_data[iv0] * betta;
  }
}

static __global__ __launch_bounds__(256, 1) void solve_benchmark_cuda_kernel32(
    const real_T pdf_data[], const real_T vautnew_data[1000],
    const int32_T pdf_size, const int32_T vautnew, const int32_T pdef_size_dim0,
    const int32_T pdf_size_dim0, real_T pdef_data[1000000])
{
  uint64_T gStride;
  uint64_T gThreadId;
  uint64_T idx;
  uint64_T loopEnd;
  int32_T b;
  int32_T iv0;
  gThreadId = mwGetGlobalThreadIndex();
  gStride = mwGetTotalThreadsLaunched();
  loopEnd = (static_cast<uint64_T>(pdf_size) + 1ULL) *
                (static_cast<uint64_T>(vautnew) + 1ULL) -
            1ULL;
  for (idx = gThreadId; idx <= loopEnd; idx += gStride) {
    b = static_cast<int32_T>(idx % (static_cast<uint64_T>(vautnew) + 1ULL));
    iv0 = static_cast<int32_T>((idx - static_cast<uint64_T>(b)) /
                               (static_cast<uint64_T>(vautnew) + 1ULL));
    pdef_data[b + pdef_size_dim0 * iv0] =
        vautnew_data[b] * pdf_data[b + pdf_size_dim0 * iv0];
  }
}

static __global__ __launch_bounds__(256, 1) void solve_benchmark_cuda_kernel33(
    const real_T vd_data[], const real_T probVp_data[1000], const int32_T b,
    real_T vautnew_data[1000])
{
  uint64_T gStride;
  uint64_T gThreadId;
  uint64_T idx;
  uint64_T loopEnd;
  int32_T iv0;
  gThreadId = mwGetGlobalThreadIndex();
  gStride = mwGetTotalThreadsLaunched();
  loopEnd = static_cast<uint64_T>(b);
  for (idx = gThreadId; idx <= loopEnd; idx += gStride) {
    iv0 = static_cast<int32_T>(idx);
    vautnew_data[iv0] = 0.154 * probVp_data[iv0] + 0.846 * vd_data[iv0];
  }
}

static __global__ __launch_bounds__(256, 1) void solve_benchmark_cuda_kernel34(
    const int32_T pdef_size, real_T vdnew_data[1000])
{
  uint64_T gStride;
  uint64_T gThreadId;
  uint64_T idx;
  uint64_T loopEnd;
  int32_T iv0;
  gThreadId = mwGetGlobalThreadIndex();
  gStride = mwGetTotalThreadsLaunched();
  loopEnd = static_cast<uint64_T>(pdef_size);
  for (idx = gThreadId; idx <= loopEnd; idx += gStride) {
    iv0 = static_cast<int32_T>(idx);
    vdnew_data[iv0] = 0.0;
  }
}

static __global__ __launch_bounds__(256, 1) void solve_benchmark_cuda_kernel35(
    const real_T ua_data[1000], const int32_T b, real_T vdnew_data[1000])
{
  uint64_T gStride;
  uint64_T gThreadId;
  uint64_T idx;
  uint64_T loopEnd;
  int32_T iv0;
  gThreadId = mwGetGlobalThreadIndex();
  gStride = mwGetTotalThreadsLaunched();
  loopEnd = static_cast<uint64_T>(b);
  for (idx = gThreadId; idx <= loopEnd; idx += gStride) {
    iv0 = static_cast<int32_T>(idx);
    vdnew_data[iv0] += ua_data[iv0];
  }
}

static __global__ __launch_bounds__(256, 1) void solve_benchmark_cuda_kernel36(
    const real_T sigg_defp, const real_T vdnew_data[1000],
    const real_T vpnew_data[1000000], const int32_T vpnew_size,
    const int32_T b_vpnew_size, const int32_T vpnew_size_dim0,
    real_T pdef_data[1000000])
{
  uint64_T gStride;
  uint64_T gThreadId;
  uint64_T idx;
  uint64_T loopEnd;
  int32_T b;
  int32_T iv0;
  gThreadId = mwGetGlobalThreadIndex();
  gStride = mwGetTotalThreadsLaunched();
  loopEnd = (static_cast<uint64_T>(vpnew_size) + 1ULL) *
                (static_cast<uint64_T>(b_vpnew_size) + 1ULL) -
            1ULL;
  for (idx = gThreadId; idx <= loopEnd; idx += gStride) {
    b = static_cast<int32_T>(idx %
                             (static_cast<uint64_T>(b_vpnew_size) + 1ULL));
    iv0 = static_cast<int32_T>((idx - static_cast<uint64_T>(b)) /
                               (static_cast<uint64_T>(b_vpnew_size) + 1ULL));
    iv0 = b + vpnew_size_dim0 * iv0;
    pdef_data[iv0] = (vpnew_data[iv0] - vdnew_data[b]) / sigg_defp;
  }
}

static __global__ __launch_bounds__(256, 1) void solve_benchmark_cuda_kernel37(
    const int32_T b, real_T pdef_data[1000000])
{
  uint64_T gStride;
  uint64_T gThreadId;
  uint64_T idx;
  uint64_T loopEnd;
  int32_T k;
  gThreadId = mwGetGlobalThreadIndex();
  gStride = mwGetTotalThreadsLaunched();
  loopEnd = static_cast<uint64_T>(b);
  for (idx = gThreadId; idx <= loopEnd; idx += gStride) {
    k = static_cast<int32_T>(idx);
    pdef_data[k] = exp(pdef_data[k]);
  }
}

static __global__ __launch_bounds__(256, 1) void solve_benchmark_cuda_kernel38(
    const int32_T b, real_T pdef_data[1000000])
{
  uint64_T gStride;
  uint64_T gThreadId;
  uint64_T idx;
  uint64_T loopEnd;
  int32_T iv0;
  gThreadId = mwGetGlobalThreadIndex();
  gStride = mwGetTotalThreadsLaunched();
  loopEnd = static_cast<uint64_T>(b);
  for (idx = gThreadId; idx <= loopEnd; idx += gStride) {
    iv0 = static_cast<int32_T>(idx);
    pdef_data[iv0] = 1.0 / (pdef_data[iv0] + 1.0);
  }
}

static __global__ __launch_bounds__(256, 1) void solve_benchmark_cuda_kernel39(
    const real_T probDcre_data[1000], const int32_T b,
    real_T vautnew_data[1000])
{
  uint64_T gStride;
  uint64_T gThreadId;
  uint64_T idx;
  uint64_T loopEnd;
  int32_T iv0;
  gThreadId = mwGetGlobalThreadIndex();
  gStride = mwGetTotalThreadsLaunched();
  loopEnd = static_cast<uint64_T>(b);
  for (idx = gThreadId; idx <= loopEnd; idx += gStride) {
    iv0 = static_cast<int32_T>(idx);
    vautnew_data[iv0] = 0.154 * probDcre_data[iv0];
  }
}

static __global__ __launch_bounds__(256, 1) void solve_benchmark_cuda_kernel40(
    const real_T b_data[], const real_T rr_data[],
    const real_T vautnew_data[1000], const int32_T rr_size,
    const int32_T b_rr_size, const int32_T rr_size_dim0,
    real_T evp_data[1000000])
{
  uint64_T gStride;
  uint64_T gThreadId;
  uint64_T idx;
  uint64_T loopEnd;
  int32_T b;
  int32_T iv0;
  int32_T k;
  gThreadId = mwGetGlobalThreadIndex();
  gStride = mwGetTotalThreadsLaunched();
  loopEnd = (static_cast<uint64_T>(rr_size) + 1ULL) *
                (static_cast<uint64_T>(b_rr_size) + 1ULL) -
            1ULL;
  for (idx = gThreadId; idx <= loopEnd; idx += gStride) {
    b = static_cast<int32_T>(idx % (static_cast<uint64_T>(b_rr_size) + 1ULL));
    iv0 = static_cast<int32_T>((idx - static_cast<uint64_T>(b)) /
                               (static_cast<uint64_T>(b_rr_size) + 1ULL));
    k = b + rr_size_dim0 * iv0;
    evp_data[k] = 0.846 * rr_data[k] + vautnew_data[b] / b_data[iv0];
  }
}

static __global__ __launch_bounds__(256, 1) void solve_benchmark_cuda_kernel41(
    const int32_T pdf_size, real_T rr_data[])
{
  uint64_T gStride;
  uint64_T gThreadId;
  uint64_T idx;
  uint64_T loopEnd;
  int32_T iv0;
  gThreadId = mwGetGlobalThreadIndex();
  gStride = mwGetTotalThreadsLaunched();
  loopEnd = static_cast<uint64_T>(pdf_size);
  for (idx = gThreadId; idx <= loopEnd; idx += gStride) {
    iv0 = static_cast<int32_T>(idx);
    rr_data[iv0] = 0.0;
  }
}

static __global__ __launch_bounds__(256, 1) void solve_benchmark_cuda_kernel42(
    const int32_T b, real_T rr_data[])
{
  uint64_T gStride;
  uint64_T gThreadId;
  uint64_T idx;
  uint64_T loopEnd;
  int32_T iv0;
  gThreadId = mwGetGlobalThreadIndex();
  gStride = mwGetTotalThreadsLaunched();
  loopEnd = static_cast<uint64_T>(b);
  for (idx = gThreadId; idx <= loopEnd; idx += gStride) {
    iv0 = static_cast<int32_T>(idx);
    rr_data[iv0] /= 1.04;
  }
}

static __global__ __launch_bounds__(256, 1) void solve_benchmark_cuda_kernel43(
    const real_T rr_data[], const real_T qnew_data[1000000], const int32_T b,
    real_T pdef_data[1000000])
{
  real_T probVp_is;
  uint64_T gStride;
  uint64_T gThreadId;
  uint64_T idx;
  uint64_T loopEnd;
  int32_T iv0;
  gThreadId = mwGetGlobalThreadIndex();
  gStride = mwGetTotalThreadsLaunched();
  loopEnd = static_cast<uint64_T>(b);
  for (idx = gThreadId; idx <= loopEnd; idx += gStride) {
    iv0 = static_cast<int32_T>(idx);
    probVp_is = pdef_data[iv0];
    probVp_is = probVp_is * rr_data[iv0] + (1.0 - probVp_is) * qnew_data[iv0];
    pdef_data[iv0] = probVp_is;
  }
}

static __global__ __launch_bounds__(256, 1) void solve_benchmark_cuda_kernel44(
    const int32_T pdf_size, real_T qnew_data[1000000])
{
  uint64_T gStride;
  uint64_T gThreadId;
  uint64_T idx;
  uint64_T loopEnd;
  int32_T iv0;
  gThreadId = mwGetGlobalThreadIndex();
  gStride = mwGetTotalThreadsLaunched();
  loopEnd = static_cast<uint64_T>(pdf_size);
  for (idx = gThreadId; idx <= loopEnd; idx += gStride) {
    iv0 = static_cast<int32_T>(idx);
    qnew_data[iv0] = 0.0;
  }
}

static __global__ __launch_bounds__(256, 1) void solve_benchmark_cuda_kernel45(
    const int32_T b, real_T qnew_data[1000000])
{
  uint64_T gStride;
  uint64_T gThreadId;
  uint64_T idx;
  uint64_T loopEnd;
  int32_T iv0;
  gThreadId = mwGetGlobalThreadIndex();
  gStride = mwGetTotalThreadsLaunched();
  loopEnd = static_cast<uint64_T>(b);
  for (idx = gThreadId; idx <= loopEnd; idx += gStride) {
    iv0 = static_cast<int32_T>(idx);
    qnew_data[iv0] /= 1.04;
  }
}

static __global__ __launch_bounds__(256, 1) void solve_benchmark_cuda_kernel46(
    const real_T qnew_data[1000000], const int32_T b, real_T q_data[])
{
  uint64_T gStride;
  uint64_T gThreadId;
  uint64_T idx;
  uint64_T loopEnd;
  int32_T iv0;
  gThreadId = mwGetGlobalThreadIndex();
  gStride = mwGetTotalThreadsLaunched();
  loopEnd = static_cast<uint64_T>(b);
  for (idx = gThreadId; idx <= loopEnd; idx += gStride) {
    iv0 = static_cast<int32_T>(idx);
    q_data[iv0] = qnew_data[iv0] - q_data[iv0];
  }
}

static __global__ __launch_bounds__(256, 1) void solve_benchmark_cuda_kernel47(
    const real_T q_data[], const int32_T b, real_T pdef_data[1000000])
{
  uint64_T gStride;
  uint64_T gThreadId;
  uint64_T idx;
  uint64_T loopEnd;
  int32_T k;
  gThreadId = mwGetGlobalThreadIndex();
  gStride = mwGetTotalThreadsLaunched();
  loopEnd = static_cast<uint64_T>(b);
  for (idx = gThreadId; idx <= loopEnd; idx += gStride) {
    k = static_cast<int32_T>(idx);
    pdef_data[k] = fabs(q_data[k]);
  }
}

static __global__ __launch_bounds__(256, 1) void solve_benchmark_cuda_kernel48(
    const int32_T vautnew, real_T vautnew_data[1000])
{
  uint64_T gStride;
  uint64_T gThreadId;
  uint64_T idx;
  uint64_T loopEnd;
  int32_T iv0;
  gThreadId = mwGetGlobalThreadIndex();
  gStride = mwGetTotalThreadsLaunched();
  loopEnd = static_cast<uint64_T>(vautnew);
  for (idx = gThreadId; idx <= loopEnd; idx += gStride) {
    iv0 = static_cast<int32_T>(idx);
    vautnew_data[iv0] = CUDART_NAN;
  }
}

static __global__ __launch_bounds__(256, 1) void solve_benchmark_cuda_kernel49(
    const real_T vp_data[], const real_T vpnew_data[1000000],
    const int32_T vpnew_size, real_T x_data[1000000])
{
  uint64_T gStride;
  uint64_T gThreadId;
  uint64_T idx;
  uint64_T loopEnd;
  int32_T iv0;
  gThreadId = mwGetGlobalThreadIndex();
  gStride = mwGetTotalThreadsLaunched();
  loopEnd = static_cast<uint64_T>(vpnew_size);
  for (idx = gThreadId; idx <= loopEnd; idx += gStride) {
    iv0 = static_cast<int32_T>(idx);
    x_data[iv0] = vpnew_data[iv0] - vp_data[iv0];
  }
}

static __global__ __launch_bounds__(256, 1) void solve_benchmark_cuda_kernel50(
    const real_T x_data[1000000], const int32_T b, real_T evp_data[1000000])
{
  uint64_T gStride;
  uint64_T gThreadId;
  uint64_T idx;
  uint64_T loopEnd;
  int32_T k;
  gThreadId = mwGetGlobalThreadIndex();
  gStride = mwGetTotalThreadsLaunched();
  loopEnd = static_cast<uint64_T>(b);
  for (idx = gThreadId; idx <= loopEnd; idx += gStride) {
    k = static_cast<int32_T>(idx);
    evp_data[k] = fabs(x_data[k]);
  }
}

static __global__ __launch_bounds__(256, 1) void solve_benchmark_cuda_kernel51(
    const real_T vd_data[], const real_T vdnew_data[1000], const int32_T b,
    real_T x_data[1000000])
{
  uint64_T gStride;
  uint64_T gThreadId;
  uint64_T idx;
  uint64_T loopEnd;
  int32_T iv0;
  gThreadId = mwGetGlobalThreadIndex();
  gStride = mwGetTotalThreadsLaunched();
  loopEnd = static_cast<uint64_T>(b);
  for (idx = gThreadId; idx <= loopEnd; idx += gStride) {
    iv0 = static_cast<int32_T>(idx);
    x_data[iv0] = vdnew_data[iv0] - vd_data[iv0];
  }
}

static __global__ __launch_bounds__(256, 1) void solve_benchmark_cuda_kernel52(
    const real_T x_data[1000000], const int32_T b, real_T evp_data[1000000])
{
  uint64_T gStride;
  uint64_T gThreadId;
  uint64_T idx;
  uint64_T loopEnd;
  int32_T k;
  gThreadId = mwGetGlobalThreadIndex();
  gStride = mwGetTotalThreadsLaunched();
  loopEnd = static_cast<uint64_T>(b);
  for (idx = gThreadId; idx <= loopEnd; idx += gStride) {
    k = static_cast<int32_T>(idx);
    evp_data[k] = fabs(x_data[k]);
  }
}

static __global__ __launch_bounds__(256, 1) void solve_benchmark_cuda_kernel53(
    const real_T vpnew_data[1000000], const int32_T vpnew_size,
    real_T vp_data[])
{
  uint64_T gStride;
  uint64_T gThreadId;
  uint64_T idx;
  uint64_T loopEnd;
  int32_T iv0;
  gThreadId = mwGetGlobalThreadIndex();
  gStride = mwGetTotalThreadsLaunched();
  loopEnd = static_cast<uint64_T>(vpnew_size);
  for (idx = gThreadId; idx <= loopEnd; idx += gStride) {
    iv0 = static_cast<int32_T>(idx);
    vp_data[iv0] = vpnew_data[iv0];
  }
}

static __global__ __launch_bounds__(256, 1) void solve_benchmark_cuda_kernel54(
    const real_T vdnew_data[1000], const int32_T b, real_T vd_data[])
{
  uint64_T gStride;
  uint64_T gThreadId;
  uint64_T idx;
  uint64_T loopEnd;
  int32_T iv0;
  gThreadId = mwGetGlobalThreadIndex();
  gStride = mwGetTotalThreadsLaunched();
  loopEnd = static_cast<uint64_T>(b);
  for (idx = gThreadId; idx <= loopEnd; idx += gStride) {
    iv0 = static_cast<int32_T>(idx);
    vd_data[iv0] = vdnew_data[iv0];
  }
}

static __global__ __launch_bounds__(256, 1) void solve_benchmark_cuda_kernel55(
    const real_T qnew_data[1000000], const int32_T qnew_size, real_T q_data[])
{
  uint64_T gStride;
  uint64_T gThreadId;
  uint64_T idx;
  uint64_T loopEnd;
  int32_T iv0;
  gThreadId = mwGetGlobalThreadIndex();
  gStride = mwGetTotalThreadsLaunched();
  loopEnd = static_cast<uint64_T>(qnew_size);
  for (idx = gThreadId; idx <= loopEnd; idx += gStride) {
    iv0 = static_cast<int32_T>(idx);
    q_data[iv0] = qnew_data[iv0];
  }
}

static __global__ __launch_bounds__(256, 1) void solve_benchmark_cuda_kernel56(
    const real_T vpnew_data[1000000], const real_T evp_data[1000000],
    const int32_T b, real_T V_data[1000000])
{
  uint64_T gStride;
  uint64_T gThreadId;
  uint64_T idx;
  uint64_T loopEnd;
  int32_T k;
  gThreadId = mwGetGlobalThreadIndex();
  gStride = mwGetTotalThreadsLaunched();
  loopEnd = static_cast<uint64_T>(b);
  for (idx = gThreadId; idx <= loopEnd; idx += gStride) {
    k = static_cast<int32_T>(idx);
    V_data[k] = fmax(vpnew_data[k], evp_data[k]);
  }
}

static __global__ __launch_bounds__(256, 1) void solve_benchmark_cuda_kernel57(
    const real_T pdef_data[1000000], const int32_T vlen, const int32_T b,
    real_T vautnew_data[1000])
{
  real_T WW1;
  real_T probVp_is;
  uint64_T gStride;
  uint64_T gThreadId;
  uint64_T idx;
  uint64_T loopEnd;
  int32_T i;
  int32_T iv0;
  int32_T k;
  boolean_T p;
  gThreadId = mwGetGlobalThreadIndex();
  gStride = mwGetTotalThreadsLaunched();
  loopEnd = static_cast<uint64_T>(b);
  for (idx = gThreadId; idx <= loopEnd; idx += gStride) {
    k = static_cast<int32_T>(idx);
    iv0 = (k * (vlen - 1) + k) + 1;
    vautnew_data[k] = pdef_data[iv0 - 1];
    for (i = 0; i <= vlen - 2; i++) {
      WW1 = pdef_data[iv0 + i];
      if (isnan(WW1)) {
        p = false;
      } else {
        probVp_is = vautnew_data[k];
        if (isnan(probVp_is)) {
          p = true;
        } else {
          p = (probVp_is < WW1);
        }
      }
      if (p) {
        vautnew_data[k] = WW1;
      }
    }
  }
}

static __global__ __launch_bounds__(256, 1) void solve_benchmark_cuda_kernel58(
    const real_T vp_data[], const real_T pdef_data[1000000],
    const int32_T vp_size, boolean_T def_data[])
{
  uint64_T gStride;
  uint64_T gThreadId;
  uint64_T idx;
  uint64_T loopEnd;
  int32_T iv0;
  gThreadId = mwGetGlobalThreadIndex();
  gStride = mwGetTotalThreadsLaunched();
  loopEnd = static_cast<uint64_T>(vp_size);
  for (idx = gThreadId; idx <= loopEnd; idx += gStride) {
    iv0 = static_cast<int32_T>(idx);
    def_data[iv0] = (vp_data[iv0] < pdef_data[iv0]);
  }
}

static __global__ __launch_bounds__(256, 1) void solve_benchmark_cuda_kernel59(
    const real_T b_data[], const real_T q_data[], const real_T bp_data[],
    const real_T alfa, const int32_T nb, const real_T vpnew_data[1000000],
    const real_T vaut_data[1000], const int32_T bp_size_dim0,
    const int32_T q_size_dim0, const int32_T b, real_T bpr_data[])
{
  real_T WW1;
  real_T maxWW;
  uint64_T gStride;
  uint64_T gThreadId;
  uint64_T idx;
  uint64_T loopEnd;
  int32_T ib;
  int32_T ix;
  int32_T k;
  gThreadId = mwGetGlobalThreadIndex();
  gStride = mwGetTotalThreadsLaunched();
  loopEnd = static_cast<uint64_T>(b);
  for (idx = gThreadId; idx <= loopEnd; idx += gStride) {
    ix = static_cast<int32_T>(idx);
    maxWW = -CUDART_INF;
    //  Initialize maximum WW
    bpr_data[ix] = 1.0;
    //  Initialize index for maximum WW
    for (ib = 0; ib < nb; ib++) {
      k = ix + bp_size_dim0 * ib;
      WW1 =
          pow(fmax(0.0, vpnew_data[k] - vaut_data[ix]), alfa) *
          pow((0.85 * (q_data[ix + q_size_dim0 *
                                       (static_cast<int32_T>(bp_data[k]) - 1)] +
                       0.058) +
               0.15) *
                  b_data[ib],
              1.0 - alfa);
      if (WW1 > maxWW) {
        maxWW = WW1;
        bpr_data[ix] = static_cast<real_T>(ib) + 1.0;
      }
    }
  }
}

void solve_benchmark_cuda(
    solve_benchmark_cudaStackData *SD, const real_T cpu_z_data[],
    const int32_T z_size[1], const real_T cpu_m_data[], const int32_T m_size[1],
    const real_T cpu_b_data[], const int32_T b_size[1],
    const real_T cpu_pdf_data[], const int32_T pdf_size[2],
    const real_T para[8], real_T cpu_vp_data[], int32_T vp_size[2],
    real_T cpu_vd_data[], int32_T vd_size[1], real_T cpu_q_data[],
    int32_T q_size[2], real_T cpu_bp_data[], int32_T bp_size[2],
    real_T cpu_bpr_data[], int32_T bpr_size[1], boolean_T cpu_def_data[],
    int32_T def_size[2], real_T cpu_rr_data[], int32_T rr_size[2],
    real_T *totaltime, real_T *avgtime)
{
  static const int32_T iv[2]{1, 7};
  static const int32_T iv1[2]{1, 31};
  static const char_T b_u[31]{'%', '8', '.', '0', 'f', ' ',  '~', '%',
                              '8', '.', '8', 'f', ' ', '~',  '%', '8',
                              '.', '5', 'f', 's', ' ', '~',  '%', '8',
                              '.', '5', 'f', 's', ' ', '\\', 'n'};
  static const char_T u[7]{'f', 'p', 'r', 'i', 'n', 't', 'f'};
  dim3 block;
  dim3 grid;
  emlrtTimespec expl_temp;
  emxArray_real_T gpu_W;
  emxArray_real_T *cpu_W;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  real_T(*gpu_Dcre_data)[1000000];
  real_T(*gpu_V_data)[1000000];
  real_T(*gpu_WW_data)[1000000];
  real_T(*gpu_evp_data)[1000000];
  real_T(*gpu_pdef_data)[1000000];
  real_T(*gpu_qnew_data)[1000000];
  real_T(*gpu_vpnew_data)[1000000];
  real_T(*gpu_x_data)[1000000];
  real_T cpu_probVp_data[1000];
  real_T cpu_ua_data[1000];
  real_T cpu_vaut_data[1000];
  real_T cpu_vautnew_data[1000];
  real_T cpu_vdnew_data[1000];
  real_T(*b_gpu_y_data)[1000];
  real_T(*gpu_Gamma_data)[1000];
  real_T(*gpu_probDcre_data)[1000];
  real_T(*gpu_probVp_data)[1000];
  real_T(*gpu_ua_data)[1000];
  real_T(*gpu_vaut_data)[1000];
  real_T(*gpu_vautnew_data)[1000];
  real_T(*gpu_vdnew_data)[1000];
  real_T(*gpu_y_data)[1000];
  real_T alfa;
  real_T b;
  real_T beta1;
  real_T betta;
  real_T cv_bp;
  real_T cv_bpr;
  real_T dist;
  real_T ex;
  real_T sigg_bp;
  real_T sigg_bpr;
  real_T sigg_defp;
  real_T smctime_tv_nsec;
  real_T smctime_tv_sec;
  real_T *gpu_b_data;
  real_T *gpu_bp_data;
  real_T *gpu_bpr_data;
  real_T *gpu_m_data;
  real_T *gpu_pdf_data;
  real_T *gpu_q_data;
  real_T *gpu_rr_data;
  real_T *gpu_vd_data;
  real_T *gpu_vp_data;
  real_T *gpu_z_data;
  uint64_T numIters;
  int32_T V_size[2];
  int32_T WW_size[2];
  int32_T evp_size[2];
  int32_T pdef_size[2];
  int32_T qnew_size[2];
  int32_T b_nx;
  int32_T b_z_size;
  int32_T c;
  int32_T c_nx;
  int32_T ibtile;
  int32_T its;
  int32_T nb;
  int32_T ns;
  int32_T nx;
  int32_T ua_size;
  int32_T vdnew_size;
  int32_T vlen;
  int16_T vautnew[2];
  int16_T csz_idx_0;
  int16_T csz_idx_1;
  boolean_T V_data_outdatedOnGpu;
  boolean_T b_data_outdatedOnGpu;
  boolean_T def_data_outdatedOnCpu;
  boolean_T m_data_outdatedOnGpu;
  boolean_T pdef_data_outdatedOnCpu;
  boolean_T pdef_data_outdatedOnGpu;
  boolean_T pdf_data_outdatedOnGpu;
  boolean_T q_data_outdatedOnGpu;
  boolean_T rr_data_outdatedOnCpu;
  boolean_T ua_data_outdatedOnCpu;
  boolean_T validLaunchParams;
  boolean_T vautnew_data_outdatedOnCpu;
  boolean_T vautnew_data_outdatedOnGpu;
  boolean_T vd_data_outdatedOnCpu;
  boolean_T vp_data_outdatedOnCpu;
  boolean_T vpnew_data_outdatedOnCpu;
  boolean_T x_data_outdatedOnCpu;
  boolean_T *gpu_def_data;
  checkCudaError(mwCudaMalloc(&gpu_x_data, 1000000ULL * sizeof(real_T)),
                 __FILE__, __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_pdef_data, 1000000ULL * sizeof(real_T)),
                 __FILE__, __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_vdnew_data, 1000ULL * sizeof(real_T)),
                 __FILE__, __LINE__);
  checkCudaError(mwCudaMalloc(&b_gpu_y_data, 1000ULL * sizeof(real_T)),
                 __FILE__, __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_evp_data, 1000000ULL * sizeof(real_T)),
                 __FILE__, __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_vautnew_data, 1000ULL * sizeof(real_T)),
                 __FILE__, __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_y_data, 1000ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_vaut_data, 1000ULL * sizeof(real_T)),
                 __FILE__, __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_probVp_data, 1000ULL * sizeof(real_T)),
                 __FILE__, __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_probDcre_data, 1000ULL * sizeof(real_T)),
                 __FILE__, __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_ua_data, 1000ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_Dcre_data, 1000000ULL * sizeof(real_T)),
                 __FILE__, __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_Gamma_data, 1000ULL * sizeof(real_T)),
                 __FILE__, __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_WW_data, 1000000ULL * sizeof(real_T)),
                 __FILE__, __LINE__);
  gpuEmxReset_real_T(&gpu_W);
  checkCudaError(mwCudaMalloc(&gpu_qnew_data, 1000000ULL * sizeof(real_T)),
                 __FILE__, __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_vpnew_data, 1000000ULL * sizeof(real_T)),
                 __FILE__, __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_V_data, 1000000ULL * sizeof(real_T)),
                 __FILE__, __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_rr_data, 1000000ULL * sizeof(real_T)),
                 __FILE__, __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_def_data, 1000000ULL * sizeof(boolean_T)),
                 __FILE__, __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_bpr_data, 1000ULL * sizeof(real_T)),
                 __FILE__, __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_bp_data, 1000000ULL * sizeof(real_T)),
                 __FILE__, __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_q_data, 1000000ULL * sizeof(real_T)),
                 __FILE__, __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_vd_data, 1000ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_vp_data, 1000000ULL * sizeof(real_T)),
                 __FILE__, __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_pdf_data, 1000000ULL * sizeof(real_T)),
                 __FILE__, __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_b_data, 1000ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_m_data, 1000ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  checkCudaError(mwCudaMalloc(&gpu_z_data, 1000ULL * sizeof(real_T)), __FILE__,
                 __LINE__);
  x_data_outdatedOnCpu = false;
  pdef_data_outdatedOnCpu = false;
  def_data_outdatedOnCpu = false;
  pdf_data_outdatedOnGpu = true;
  b_data_outdatedOnGpu = true;
  m_data_outdatedOnGpu = true;
  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);
  //  para = [alfa, betta, phi1, phi2, sigg_bp, sigg_bpr, sigg_defp ] ;
  alfa = para[0];
  betta = para[1];
  sigg_bp = para[5];
  sigg_bpr = para[6];
  sigg_defp = para[7];
  // 0.03, long-term bond, coupon rate
  // long-term bond, average maturity
  ns = z_size[0];
  nb = b_size[0];
  vp_size[0] = z_size[0];
  vp_size[1] = b_size[0];
  b_z_size = z_size[0] * b_size[0] - 1;
  mwGetLaunchParameters(computeNumIters(b_z_size), &grid, &block, 2147483647U);
  validLaunchParams = mwValidateLaunchParameters(grid, block);
  if (validLaunchParams) {
    solve_benchmark_cuda_kernel01<<<grid, block>>>(b_z_size, gpu_vp_data);
  }
  vp_data_outdatedOnCpu = true;
  vd_size[0] = z_size[0];
  mwGetLaunchParameters(computeNumIters(z_size[0] - 1), &grid, &block,
                        2147483647U);
  validLaunchParams = mwValidateLaunchParameters(grid, block);
  if (validLaunchParams) {
    solve_benchmark_cuda_kernel02<<<grid, block>>>(z_size[0] - 1, gpu_vd_data);
  }
  vd_data_outdatedOnCpu = true;
  V_size[0] = z_size[0];
  V_size[1] = b_size[0];
  bp_size[0] = z_size[0];
  bp_size[1] = b_size[0];
  b_z_size = z_size[0] * b_size[0] - 1;
  mwGetLaunchParameters(computeNumIters(b_z_size), &grid, &block, 2147483647U);
  validLaunchParams = mwValidateLaunchParameters(grid, block);
  if (validLaunchParams) {
    solve_benchmark_cuda_kernel03<<<grid, block>>>(
        b_z_size, gpu_bp_data, *gpu_V_data, *gpu_vpnew_data);
  }
  V_data_outdatedOnGpu = false;
  // debt policy function (expressed in indices)
  bpr_size[0] = z_size[0];
  mwGetLaunchParameters(computeNumIters(z_size[0] - 1), &grid, &block,
                        2147483647U);
  validLaunchParams = mwValidateLaunchParameters(grid, block);
  if (validLaunchParams) {
    solve_benchmark_cuda_kernel04<<<grid, block>>>(z_size[0] - 1, gpu_bpr_data);
  }
  //  debt policy (index) when decided renegotiate (right after every default)
  q_size[0] = z_size[0];
  q_size[1] = b_size[0];
  // q is price of debt; it is a function of  (y_t, d_{t+1})
  qnew_size[0] = z_size[0];
  qnew_size[1] = b_size[0];
  rr_size[0] = z_size[0];
  rr_size[1] = b_size[0];
  b_z_size = z_size[0] * b_size[0] - 1;
  mwGetLaunchParameters(computeNumIters(b_z_size), &grid, &block, 2147483647U);
  validLaunchParams = mwValidateLaunchParameters(grid, block);
  if (validLaunchParams) {
    solve_benchmark_cuda_kernel05<<<grid, block>>>(b_z_size, gpu_q_data,
                                                   gpu_rr_data, *gpu_qnew_data);
  }
  rr_data_outdatedOnCpu = true;
  q_data_outdatedOnGpu = false;
  emxInit_real_T(&cpu_W, &emlrtRTEI);
  cpu_W->size[0] = b_size[0];
  cpu_W->size[1] = b_size[0];
  cpu_W->size[2] = z_size[0];
  b_z_size = b_size[0] * b_size[0] * z_size[0] - 1;
  mwGetLaunchParameters(computeNumIters(b_z_size), &grid, &block, 2147483647U);
  gpuEmxEnsureCapacity_real_T(cpu_W, &gpu_W, true);
  validLaunchParams = mwValidateLaunchParameters(grid, block);
  if (validLaunchParams) {
    solve_benchmark_cuda_kernel06<<<grid, block>>>(b_z_size, gpu_W);
  }
  WW_size[0] = b_size[0];
  b_z_size = b_size[0] * z_size[0] - 1;
  mwGetLaunchParameters(computeNumIters(b_z_size), &grid, &block, 2147483647U);
  validLaunchParams = mwValidateLaunchParameters(grid, block);
  if (validLaunchParams) {
    solve_benchmark_cuda_kernel07<<<grid, block>>>(b_z_size, *gpu_WW_data);
  }
  mwGetLaunchParameters(computeNumIters(z_size[0] - 1), &grid, &block,
                        2147483647U);
  validLaunchParams = mwValidateLaunchParameters(grid, block);
  if (validLaunchParams) {
    solve_benchmark_cuda_kernel08<<<grid, block>>>(z_size[0] - 1,
                                                   *gpu_Gamma_data);
  }
  b_z_size = z_size[0] * b_size[0] - 1;
  mwGetLaunchParameters(computeNumIters(b_z_size), &grid, &block, 2147483647U);
  validLaunchParams = mwValidateLaunchParameters(grid, block);
  if (validLaunchParams) {
    solve_benchmark_cuda_kernel09<<<grid, block>>>(b_z_size, *gpu_Dcre_data);
  }
  //  pdf = sparse(pdf_joint) ;
  nx = z_size[0];
  mwGetLaunchParameters(computeNumIters(z_size[0] - 1), &grid, &block,
                        2147483647U);
  checkCudaError(cudaMemcpy(gpu_z_data, cpu_z_data,
                            static_cast<uint64_T>(z_size[0]) * sizeof(real_T),
                            cudaMemcpyHostToDevice),
                 __FILE__, __LINE__);
  validLaunchParams = mwValidateLaunchParameters(grid, block);
  if (validLaunchParams) {
    solve_benchmark_cuda_kernel10<<<grid, block>>>(gpu_z_data, z_size[0] - 1,
                                                   *gpu_vautnew_data);
  }
  if (z_size[0] == m_size[0]) {
    mwGetLaunchParameters(computeNumIters(z_size[0] - 1), &grid, &block,
                          2147483647U);
    checkCudaError(cudaMemcpy(gpu_m_data, cpu_m_data,
                              static_cast<uint64_T>(m_size[0]) * sizeof(real_T),
                              cudaMemcpyHostToDevice),
                   __FILE__, __LINE__);
    m_data_outdatedOnGpu = false;
    validLaunchParams = mwValidateLaunchParameters(grid, block);
    if (validLaunchParams) {
      solve_benchmark_cuda_kernel11<<<grid, block>>>(
          gpu_m_data, 1.0 - para[2], z_size[0] - 1, *gpu_vautnew_data);
    }
    vautnew_data_outdatedOnGpu = false;
  } else {
    checkCudaError(cudaMemcpy(cpu_vautnew_data, *gpu_vautnew_data,
                              1000ULL * sizeof(real_T), cudaMemcpyDeviceToHost),
                   __FILE__, __LINE__);
    binary_expand_op_10(cpu_vautnew_data, &nx, cpu_m_data, &m_size[0], para);
    vautnew_data_outdatedOnGpu = true;
  }
  ua_size = nx;
  mwGetLaunchParameters(computeNumIters(nx - 1), &grid, &block, 2147483647U);
  if (vautnew_data_outdatedOnGpu) {
    checkCudaError(cudaMemcpy(*gpu_vautnew_data, cpu_vautnew_data,
                              1000ULL * sizeof(real_T), cudaMemcpyHostToDevice),
                   __FILE__, __LINE__);
  }
  validLaunchParams = mwValidateLaunchParameters(grid, block);
  if (validLaunchParams) {
    solve_benchmark_cuda_kernel12<<<grid, block>>>(*gpu_vautnew_data, nx - 1,
                                                   *gpu_ua_data);
  }
  mwGetLaunchParameters(computeNumIters(nx - 1), &grid, &block, 2147483647U);
  validLaunchParams = mwValidateLaunchParameters(grid, block);
  if (validLaunchParams) {
    solve_benchmark_cuda_kernel13<<<grid, block>>>(nx - 1, *gpu_ua_data);
  }
  ua_data_outdatedOnCpu = true;
  //  to incorporate taste shocks
  cv_bp = para[5] * -34.538776394910684;
  //  critical value
  cv_bpr = para[6] * -34.538776394910684;
  //  critical value
  mwGetLaunchParameters(computeNumIters(z_size[0] - 1), &grid, &block,
                        2147483647U);
  validLaunchParams = mwValidateLaunchParameters(grid, block);
  if (validLaunchParams) {
    solve_benchmark_cuda_kernel14<<<grid, block>>>(
        z_size[0] - 1, *gpu_probDcre_data, *gpu_probVp_data);
  }
  expl_temp = coder::tic();
  smctime_tv_sec = expl_temp.tv_sec;
  smctime_tv_nsec = expl_temp.tv_nsec;
  *totaltime = 0.0;
  *avgtime = 0.0;
  dist = 1.0;
  b_z_size = ns;
  mwGetLaunchParameters(computeNumIters(ns - 1), &grid, &block, 2147483647U);
  validLaunchParams = mwValidateLaunchParameters(grid, block);
  if (validLaunchParams) {
    solve_benchmark_cuda_kernel15<<<grid, block>>>(ns - 1, *gpu_vaut_data);
  }
  while (dist > 1.0E-8) {
    mwGetLaunchParameters(computeNumIters(m_size[0] - 1), &grid, &block,
                          2147483647U);
    if (m_data_outdatedOnGpu) {
      checkCudaError(
          cudaMemcpy(gpu_m_data, cpu_m_data,
                     static_cast<uint64_T>(m_size[0]) * sizeof(real_T),
                     cudaMemcpyHostToDevice),
          __FILE__, __LINE__);
    }
    m_data_outdatedOnGpu = false;
    validLaunchParams = mwValidateLaunchParameters(grid, block);
    if (validLaunchParams) {
      solve_benchmark_cuda_kernel16<<<grid, block>>>(gpu_m_data, m_size[0] - 1,
                                                     *gpu_vdnew_data);
    }
    if (m_size[0] == pdf_size[0]) {
      pdef_size[0] = m_size[0];
      pdef_size[1] = pdf_size[1];
      numIters = computeNumIters(pdf_size[1] - 1, m_size[0] - 1);
      mwGetLaunchParameters(numIters, &grid, &block, 2147483647U);
      if (pdf_data_outdatedOnGpu) {
        checkCudaError(
            cudaMemcpy(gpu_pdf_data, cpu_pdf_data,
                       static_cast<uint64_T>(pdf_size[0] * pdf_size[1]) *
                           sizeof(real_T),
                       cudaMemcpyHostToDevice),
            __FILE__, __LINE__);
      }
      pdf_data_outdatedOnGpu = false;
      validLaunchParams = mwValidateLaunchParameters(grid, block);
      if (validLaunchParams) {
        solve_benchmark_cuda_kernel17<<<grid, block>>>(
            gpu_pdf_data, betta, *gpu_vdnew_data, pdf_size[1] - 1,
            m_size[0] - 1, m_size[0], pdf_size[0], *gpu_pdef_data);
      }
      pdef_data_outdatedOnGpu = false;
      pdef_data_outdatedOnCpu = true;
    } else {
      if (pdef_data_outdatedOnCpu) {
        checkCudaError(cudaMemcpy(SD->f2.cpu_pdef_data, *gpu_pdef_data,
                                  1000000ULL * sizeof(real_T),
                                  cudaMemcpyDeviceToHost),
                       __FILE__, __LINE__);
      }
      checkCudaError(cudaMemcpy(cpu_vdnew_data, *gpu_vdnew_data,
                                1000ULL * sizeof(real_T),
                                cudaMemcpyDeviceToHost),
                     __FILE__, __LINE__);
      binary_expand_op_1(SD->f2.cpu_pdef_data, pdef_size, cpu_vdnew_data,
                         &m_size[0], cpu_pdf_data, pdf_size, betta);
      pdef_data_outdatedOnCpu = false;
      pdef_data_outdatedOnGpu = true;
    }
    if ((pdef_size[0] == 0) || (pdef_size[1] == 0) || (b_z_size == 0)) {
      nx = pdef_size[0];
      mwGetLaunchParameters(computeNumIters(pdef_size[0] - 1), &grid, &block,
                            2147483647U);
      validLaunchParams = mwValidateLaunchParameters(grid, block);
      if (validLaunchParams) {
        solve_benchmark_cuda_kernel18<<<grid, block>>>(pdef_size[0] - 1,
                                                       *gpu_vautnew_data);
      }
      vautnew_data_outdatedOnGpu = false;
      vautnew_data_outdatedOnCpu = true;
    } else {
      nx = pdef_size[0];
      dist = 1.0;
      beta1 = 0.0;
      if (pdef_data_outdatedOnGpu) {
        checkCudaError(cudaMemcpy(*gpu_pdef_data, SD->f2.cpu_pdef_data,
                                  1000000ULL * sizeof(real_T),
                                  cudaMemcpyHostToDevice),
                       __FILE__, __LINE__);
      }
      cublasDgemm(getCublasGlobalHandle(), CUBLAS_OP_N, CUBLAS_OP_N,
                  pdef_size[0], 1, pdef_size[1], &dist, &(*gpu_pdef_data)[0],
                  pdef_size[0], &(*gpu_vaut_data)[0], pdef_size[1], &beta1,
                  &(*gpu_vautnew_data)[0], pdef_size[0]);
      vautnew_data_outdatedOnGpu = false;
      vautnew_data_outdatedOnCpu = true;
    }
    if (ua_size == nx) {
      nx = ua_size;
      mwGetLaunchParameters(computeNumIters(ua_size - 1), &grid, &block,
                            2147483647U);
      validLaunchParams = mwValidateLaunchParameters(grid, block);
      if (validLaunchParams) {
        solve_benchmark_cuda_kernel19<<<grid, block>>>(
            *gpu_ua_data, ua_size - 1, *gpu_vautnew_data);
      }
    } else {
      checkCudaError(cudaMemcpy(cpu_vautnew_data, *gpu_vautnew_data,
                                1000ULL * sizeof(real_T),
                                cudaMemcpyDeviceToHost),
                     __FILE__, __LINE__);
      if (ua_data_outdatedOnCpu) {
        checkCudaError(cudaMemcpy(cpu_ua_data, *gpu_ua_data,
                                  1000ULL * sizeof(real_T),
                                  cudaMemcpyDeviceToHost),
                       __FILE__, __LINE__);
      }
      ua_data_outdatedOnCpu = false;
      plus(cpu_vautnew_data, &nx, cpu_ua_data, &ua_size);
      vautnew_data_outdatedOnCpu = false;
      vautnew_data_outdatedOnGpu = true;
    }
    if (nx == b_z_size) {
      c_nx = nx;
      mwGetLaunchParameters(computeNumIters(nx - 1), &grid, &block,
                            2147483647U);
      if (vautnew_data_outdatedOnGpu) {
        checkCudaError(cudaMemcpy(*gpu_vautnew_data, cpu_vautnew_data,
                                  1000ULL * sizeof(real_T),
                                  cudaMemcpyHostToDevice),
                       __FILE__, __LINE__);
      }
      vautnew_data_outdatedOnGpu = false;
      validLaunchParams = mwValidateLaunchParameters(grid, block);
      if (validLaunchParams) {
        solve_benchmark_cuda_kernel20<<<grid, block>>>(
            *gpu_vaut_data, *gpu_vautnew_data, nx - 1, *gpu_x_data);
      }
      vautnew_data_outdatedOnCpu = false;
      x_data_outdatedOnCpu = true;
    } else {
      if (x_data_outdatedOnCpu) {
        checkCudaError(cudaMemcpy(SD->f2.cpu_x_data, *gpu_x_data,
                                  1000000ULL * sizeof(real_T),
                                  cudaMemcpyDeviceToHost),
                       __FILE__, __LINE__);
      }
      if (vautnew_data_outdatedOnCpu) {
        checkCudaError(cudaMemcpy(cpu_vautnew_data, *gpu_vautnew_data,
                                  1000ULL * sizeof(real_T),
                                  cudaMemcpyDeviceToHost),
                       __FILE__, __LINE__);
      }
      checkCudaError(cudaMemcpy(cpu_vaut_data, *gpu_vaut_data,
                                1000ULL * sizeof(real_T),
                                cudaMemcpyDeviceToHost),
                     __FILE__, __LINE__);
      binary_expand_op(SD->f2.cpu_x_data, &c_nx, cpu_vautnew_data, &nx,
                       cpu_vaut_data, &b_z_size);
      x_data_outdatedOnCpu = false;
      vautnew_data_outdatedOnCpu = true;
    }
    mwGetLaunchParameters(computeNumIters(c_nx - 1), &grid, &block,
                          2147483647U);
    if (vautnew_data_outdatedOnCpu) {
      checkCudaError(cudaMemcpy(*gpu_x_data, SD->f2.cpu_x_data,
                                1000000ULL * sizeof(real_T),
                                cudaMemcpyHostToDevice),
                     __FILE__, __LINE__);
    }
    validLaunchParams = mwValidateLaunchParameters(grid, block);
    if (validLaunchParams) {
      solve_benchmark_cuda_kernel21<<<grid, block>>>(*gpu_x_data, c_nx - 1,
                                                     *gpu_evp_data);
    }
    checkCudaError(cudaMemcpy(SD->f2.cpu_evp_data, *gpu_evp_data,
                              1000000ULL * sizeof(real_T),
                              cudaMemcpyDeviceToHost),
                   __FILE__, __LINE__);
    dist = SD->f2.cpu_evp_data[0];
    for (ibtile = 0; ibtile <= c_nx - 2; ibtile++) {
      b = SD->f2.cpu_evp_data[ibtile + 1];
      if (std::isnan(b)) {
        vautnew_data_outdatedOnCpu = false;
      } else if (std::isnan(dist)) {
        vautnew_data_outdatedOnCpu = true;
      } else {
        vautnew_data_outdatedOnCpu = (dist < b);
      }
      if (vautnew_data_outdatedOnCpu) {
        dist = b;
      }
    }
    b_z_size = nx;
    mwGetLaunchParameters(computeNumIters(nx - 1), &grid, &block, 2147483647U);
    if (vautnew_data_outdatedOnGpu) {
      checkCudaError(cudaMemcpy(*gpu_vautnew_data, cpu_vautnew_data,
                                1000ULL * sizeof(real_T),
                                cudaMemcpyHostToDevice),
                     __FILE__, __LINE__);
    }
    validLaunchParams = mwValidateLaunchParameters(grid, block);
    if (validLaunchParams) {
      solve_benchmark_cuda_kernel22<<<grid, block>>>(*gpu_vautnew_data, nx - 1,
                                                     *gpu_vaut_data);
    }
  }
  // %%%%%%
  dist = 1.0;
  its = 1;
  while ((dist > 1.0E-7) && (its < 2000)) {
    mwGetLaunchParameters(computeNumIters(m_size[0] - 1), &grid, &block,
                          2147483647U);
    if (m_data_outdatedOnGpu) {
      checkCudaError(
          cudaMemcpy(gpu_m_data, cpu_m_data,
                     static_cast<uint64_T>(m_size[0]) * sizeof(real_T),
                     cudaMemcpyHostToDevice),
          __FILE__, __LINE__);
    }
    validLaunchParams = mwValidateLaunchParameters(grid, block);
    if (validLaunchParams) {
      solve_benchmark_cuda_kernel23<<<grid, block>>>(gpu_m_data, m_size[0] - 1,
                                                     *gpu_y_data);
    }
    mwGetLaunchParameters(computeNumIters(m_size[0] - 1), &grid, &block,
                          2147483647U);
    validLaunchParams = mwValidateLaunchParameters(grid, block);
    if (validLaunchParams) {
      solve_benchmark_cuda_kernel24<<<grid, block>>>(
          betta, *gpu_y_data, m_size[0] - 1, *gpu_vautnew_data);
    }
    if (m_size[0] == pdf_size[0]) {
      pdef_size[0] = m_size[0];
      pdef_size[1] = pdf_size[1];
      numIters = computeNumIters(pdf_size[1] - 1, m_size[0] - 1);
      mwGetLaunchParameters(numIters, &grid, &block, 2147483647U);
      if (pdf_data_outdatedOnGpu) {
        checkCudaError(
            cudaMemcpy(gpu_pdf_data, cpu_pdf_data,
                       static_cast<uint64_T>(pdf_size[0] * pdf_size[1]) *
                           sizeof(real_T),
                       cudaMemcpyHostToDevice),
            __FILE__, __LINE__);
      }
      pdf_data_outdatedOnGpu = false;
      validLaunchParams = mwValidateLaunchParameters(grid, block);
      if (validLaunchParams) {
        solve_benchmark_cuda_kernel25<<<grid, block>>>(
            gpu_pdf_data, *gpu_vautnew_data, pdf_size[1] - 1, m_size[0] - 1,
            m_size[0], pdf_size[0], *gpu_pdef_data);
      }
      pdef_data_outdatedOnGpu = false;
      pdef_data_outdatedOnCpu = true;
    } else {
      if (pdef_data_outdatedOnCpu) {
        checkCudaError(cudaMemcpy(SD->f2.cpu_pdef_data, *gpu_pdef_data,
                                  1000000ULL * sizeof(real_T),
                                  cudaMemcpyDeviceToHost),
                       __FILE__, __LINE__);
      }
      checkCudaError(cudaMemcpy(cpu_vautnew_data, *gpu_vautnew_data,
                                1000ULL * sizeof(real_T),
                                cudaMemcpyDeviceToHost),
                     __FILE__, __LINE__);
      binary_expand_op_8(SD->f2.cpu_pdef_data, pdef_size, cpu_vautnew_data,
                         &m_size[0], cpu_pdf_data, pdf_size);
      pdef_data_outdatedOnCpu = false;
      pdef_data_outdatedOnGpu = true;
    }
    if ((pdef_size[0] == 0) || (pdef_size[1] == 0) || (V_size[0] == 0) ||
        (V_size[1] == 0)) {
      evp_size[0] = pdef_size[0];
      evp_size[1] = V_size[1];
      b_z_size = pdef_size[0] * V_size[1] - 1;
      mwGetLaunchParameters(computeNumIters(b_z_size), &grid, &block,
                            2147483647U);
      validLaunchParams = mwValidateLaunchParameters(grid, block);
      if (validLaunchParams) {
        solve_benchmark_cuda_kernel26<<<grid, block>>>(b_z_size, *gpu_evp_data);
      }
      x_data_outdatedOnCpu = false;
    } else {
      evp_size[0] = pdef_size[0];
      evp_size[1] = V_size[1];
      dist = 1.0;
      beta1 = 0.0;
      if (pdef_data_outdatedOnGpu) {
        checkCudaError(cudaMemcpy(*gpu_pdef_data, SD->f2.cpu_pdef_data,
                                  1000000ULL * sizeof(real_T),
                                  cudaMemcpyHostToDevice),
                       __FILE__, __LINE__);
      }
      if (V_data_outdatedOnGpu) {
        checkCudaError(cudaMemcpy(*gpu_V_data, SD->f2.cpu_V_data,
                                  1000000ULL * sizeof(real_T),
                                  cudaMemcpyHostToDevice),
                       __FILE__, __LINE__);
      }
      cublasDgemm(getCublasGlobalHandle(), CUBLAS_OP_N, CUBLAS_OP_N,
                  pdef_size[0], V_size[1], pdef_size[1], &dist,
                  &(*gpu_pdef_data)[0], pdef_size[0], &(*gpu_V_data)[0],
                  pdef_size[1], &beta1, &(*gpu_evp_data)[0], pdef_size[0]);
      x_data_outdatedOnCpu = false;
    }
    numIters = computeNumIters(ns - 1, nb - 1);
    mwGetLaunchParameters(numIters, &grid, &block, 2147483647U);
    if (b_data_outdatedOnGpu) {
      checkCudaError(
          cudaMemcpy(gpu_b_data, cpu_b_data,
                     static_cast<uint64_T>(b_size[0]) * sizeof(real_T),
                     cudaMemcpyHostToDevice),
          __FILE__, __LINE__);
    }
    validLaunchParams = mwValidateLaunchParameters(grid, block);
    if (validLaunchParams) {
      solve_benchmark_cuda_kernel27<<<grid, block>>>(
          gpu_z_data, gpu_m_data, gpu_b_data, gpu_q_data, nb, *gpu_evp_data,
          q_size[0], evp_size[0], vp_size[0], ns - 1, nb - 1, gpu_bp_data,
          *gpu_vpnew_data, gpu_W, cpu_W->size[0U], cpu_W->size[1U]);
    }
    vpnew_data_outdatedOnCpu = true;
    numIters = computeNumIters(ns - 1, nb - 1);
    mwGetLaunchParameters(numIters, &grid, &block, 2147483647U);
    validLaunchParams = mwValidateLaunchParameters(grid, block);
    if (validLaunchParams) {
      solve_benchmark_cuda_kernel28<<<grid, block>>>(
          gpu_q_data, sigg_bp, nb, *gpu_vpnew_data, gpu_W, cv_bp, qnew_size[0],
          vp_size[0], q_size[0], ns - 1, nb - 1, *gpu_qnew_data,
          cpu_W->size[0U], cpu_W->size[1U]);
    }
    mwGetLaunchParameters(computeNumIters(ns - 1), &grid, &block, 2147483647U);
    b_data_outdatedOnGpu = false;
    validLaunchParams = mwValidateLaunchParameters(grid, block);
    if (validLaunchParams) {
      solve_benchmark_cuda_kernel29<<<grid, block>>>(
          gpu_b_data, gpu_q_data, gpu_bp_data, alfa, sigg_bpr, nb,
          *gpu_vpnew_data, cv_bpr, *gpu_vaut_data, bp_size[0], q_size[0],
          WW_size[0], bp_size[0], ns - 1, *gpu_WW_data, *gpu_Gamma_data,
          *gpu_Dcre_data, *gpu_probDcre_data, *gpu_probVp_data);
    }
    vlen = static_cast<int16_T>(m_size[0]);
    mwGetLaunchParameters(computeNumIters(static_cast<int16_T>(m_size[0]) - 1),
                          &grid, &block, 2147483647U);
    m_data_outdatedOnGpu = false;
    validLaunchParams = mwValidateLaunchParameters(grid, block);
    if (validLaunchParams) {
      solve_benchmark_cuda_kernel30<<<grid, block>>>(
          gpu_m_data, static_cast<int16_T>(m_size[0]) - 1, *b_gpu_y_data);
    }
    mwGetLaunchParameters(computeNumIters(static_cast<int16_T>(m_size[0]) - 1),
                          &grid, &block, 2147483647U);
    validLaunchParams = mwValidateLaunchParameters(grid, block);
    if (validLaunchParams) {
      solve_benchmark_cuda_kernel31<<<grid, block>>>(
          betta, *b_gpu_y_data, static_cast<int16_T>(m_size[0]) - 1,
          *gpu_vautnew_data);
    }
    vautnew_data_outdatedOnCpu = true;
    if (static_cast<int16_T>(m_size[0]) == pdf_size[0]) {
      pdef_size[0] = static_cast<int16_T>(m_size[0]);
      pdef_size[1] = pdf_size[1];
      numIters =
          computeNumIters(pdf_size[1] - 1, static_cast<int16_T>(m_size[0]) - 1);
      mwGetLaunchParameters(numIters, &grid, &block, 2147483647U);
      if (pdf_data_outdatedOnGpu) {
        checkCudaError(
            cudaMemcpy(gpu_pdf_data, cpu_pdf_data,
                       static_cast<uint64_T>(pdf_size[0] * pdf_size[1]) *
                           sizeof(real_T),
                       cudaMemcpyHostToDevice),
            __FILE__, __LINE__);
      }
      pdf_data_outdatedOnGpu = false;
      validLaunchParams = mwValidateLaunchParameters(grid, block);
      if (validLaunchParams) {
        solve_benchmark_cuda_kernel32<<<grid, block>>>(
            gpu_pdf_data, *gpu_vautnew_data, pdf_size[1] - 1,
            static_cast<int16_T>(m_size[0]) - 1,
            static_cast<int32_T>(static_cast<int16_T>(m_size[0])), pdf_size[0],
            *gpu_pdef_data);
      }
      pdef_data_outdatedOnGpu = false;
      pdef_data_outdatedOnCpu = true;
    } else {
      if (pdef_data_outdatedOnCpu) {
        checkCudaError(cudaMemcpy(SD->f2.cpu_pdef_data, *gpu_pdef_data,
                                  1000000ULL * sizeof(real_T),
                                  cudaMemcpyDeviceToHost),
                       __FILE__, __LINE__);
      }
      checkCudaError(cudaMemcpy(cpu_vautnew_data, *gpu_vautnew_data,
                                1000ULL * sizeof(real_T),
                                cudaMemcpyDeviceToHost),
                     __FILE__, __LINE__);
      vautnew_data_outdatedOnCpu = false;
      binary_expand_op_8(SD->f2.cpu_pdef_data, pdef_size, cpu_vautnew_data,
                         &vlen, cpu_pdf_data, pdf_size);
      pdef_data_outdatedOnCpu = false;
      pdef_data_outdatedOnGpu = true;
    }
    if (ns == vd_size[0]) {
      nx = ns;
      mwGetLaunchParameters(computeNumIters(ns - 1), &grid, &block,
                            2147483647U);
      validLaunchParams = mwValidateLaunchParameters(grid, block);
      if (validLaunchParams) {
        solve_benchmark_cuda_kernel33<<<grid, block>>>(
            gpu_vd_data, *gpu_probVp_data, ns - 1, *gpu_vautnew_data);
      }
      vautnew_data_outdatedOnGpu = false;
    } else {
      if (vautnew_data_outdatedOnCpu) {
        checkCudaError(cudaMemcpy(cpu_vautnew_data, *gpu_vautnew_data,
                                  1000ULL * sizeof(real_T),
                                  cudaMemcpyDeviceToHost),
                       __FILE__, __LINE__);
      }
      checkCudaError(cudaMemcpy(cpu_probVp_data, *gpu_probVp_data,
                                1000ULL * sizeof(real_T),
                                cudaMemcpyDeviceToHost),
                     __FILE__, __LINE__);
      checkCudaError(
          cudaMemcpy(cpu_vd_data, gpu_vd_data,
                     static_cast<uint64_T>(vd_size[0]) * sizeof(real_T),
                     cudaMemcpyDeviceToHost),
          __FILE__, __LINE__);
      vd_data_outdatedOnCpu = false;
      binary_expand_op_7(cpu_vautnew_data, &nx, cpu_probVp_data, &ns,
                         cpu_vd_data, &vd_size[0]);
      vautnew_data_outdatedOnGpu = true;
    }
    if ((pdef_size[0] == 0) || (pdef_size[1] == 0) || (nx == 0)) {
      vdnew_size = pdef_size[0];
      mwGetLaunchParameters(computeNumIters(pdef_size[0] - 1), &grid, &block,
                            2147483647U);
      validLaunchParams = mwValidateLaunchParameters(grid, block);
      if (validLaunchParams) {
        solve_benchmark_cuda_kernel34<<<grid, block>>>(pdef_size[0] - 1,
                                                       *gpu_vdnew_data);
      }
      V_data_outdatedOnGpu = false;
      vautnew_data_outdatedOnGpu = true;
    } else {
      vdnew_size = pdef_size[0];
      dist = 1.0;
      beta1 = 0.0;
      if (pdef_data_outdatedOnGpu) {
        checkCudaError(cudaMemcpy(*gpu_pdef_data, SD->f2.cpu_pdef_data,
                                  1000000ULL * sizeof(real_T),
                                  cudaMemcpyHostToDevice),
                       __FILE__, __LINE__);
      }
      if (vautnew_data_outdatedOnGpu) {
        checkCudaError(cudaMemcpy(*gpu_vautnew_data, cpu_vautnew_data,
                                  1000ULL * sizeof(real_T),
                                  cudaMemcpyHostToDevice),
                       __FILE__, __LINE__);
      }
      cublasDgemm(getCublasGlobalHandle(), CUBLAS_OP_N, CUBLAS_OP_N,
                  pdef_size[0], 1, pdef_size[1], &dist, &(*gpu_pdef_data)[0],
                  pdef_size[0], &(*gpu_vautnew_data)[0], pdef_size[1], &beta1,
                  &(*gpu_vdnew_data)[0], pdef_size[0]);
      V_data_outdatedOnGpu = false;
      vautnew_data_outdatedOnGpu = true;
    }
    if (ua_size == vdnew_size) {
      vdnew_size = ua_size;
      mwGetLaunchParameters(computeNumIters(ua_size - 1), &grid, &block,
                            2147483647U);
      validLaunchParams = mwValidateLaunchParameters(grid, block);
      if (validLaunchParams) {
        solve_benchmark_cuda_kernel35<<<grid, block>>>(
            *gpu_ua_data, ua_size - 1, *gpu_vdnew_data);
      }
    } else {
      checkCudaError(cudaMemcpy(cpu_vdnew_data, *gpu_vdnew_data,
                                1000ULL * sizeof(real_T),
                                cudaMemcpyDeviceToHost),
                     __FILE__, __LINE__);
      if (ua_data_outdatedOnCpu) {
        checkCudaError(cudaMemcpy(cpu_ua_data, *gpu_ua_data,
                                  1000ULL * sizeof(real_T),
                                  cudaMemcpyDeviceToHost),
                       __FILE__, __LINE__);
      }
      ua_data_outdatedOnCpu = false;
      plus(cpu_vdnew_data, &vdnew_size, cpu_ua_data, &ua_size);
      vautnew_data_outdatedOnGpu = false;
      V_data_outdatedOnGpu = true;
    }
    if (vp_size[0] == vdnew_size) {
      pdef_size[0] = vp_size[0];
      pdef_size[1] = vp_size[1];
      numIters = computeNumIters(vp_size[1] - 1, vp_size[0] - 1);
      mwGetLaunchParameters(numIters, &grid, &block, 2147483647U);
      if (V_data_outdatedOnGpu) {
        checkCudaError(cudaMemcpy(*gpu_vdnew_data, cpu_vdnew_data,
                                  1000ULL * sizeof(real_T),
                                  cudaMemcpyHostToDevice),
                       __FILE__, __LINE__);
      }
      V_data_outdatedOnGpu = false;
      validLaunchParams = mwValidateLaunchParameters(grid, block);
      if (validLaunchParams) {
        solve_benchmark_cuda_kernel36<<<grid, block>>>(
            sigg_defp, *gpu_vdnew_data, *gpu_vpnew_data, vp_size[1] - 1,
            vp_size[0] - 1, vp_size[0], *gpu_pdef_data);
      }
      pdef_data_outdatedOnGpu = false;
    } else {
      if (pdef_data_outdatedOnCpu) {
        checkCudaError(cudaMemcpy(SD->f2.cpu_pdef_data, *gpu_pdef_data,
                                  1000000ULL * sizeof(real_T),
                                  cudaMemcpyDeviceToHost),
                       __FILE__, __LINE__);
      }
      checkCudaError(cudaMemcpy(SD->f2.cpu_vpnew_data, *gpu_vpnew_data,
                                1000000ULL * sizeof(real_T),
                                cudaMemcpyDeviceToHost),
                     __FILE__, __LINE__);
      vpnew_data_outdatedOnCpu = false;
      if (vautnew_data_outdatedOnGpu) {
        checkCudaError(cudaMemcpy(cpu_vdnew_data, *gpu_vdnew_data,
                                  1000ULL * sizeof(real_T),
                                  cudaMemcpyDeviceToHost),
                       __FILE__, __LINE__);
      }
      vautnew_data_outdatedOnGpu = false;
      binary_expand_op_6(SD->f2.cpu_pdef_data, pdef_size, SD->f2.cpu_vpnew_data,
                         vp_size, cpu_vdnew_data, &vdnew_size, sigg_defp);
      pdef_data_outdatedOnGpu = true;
    }
    b_nx = pdef_size[0] * pdef_size[1];
    mwGetLaunchParameters(computeNumIters(b_nx - 1), &grid, &block,
                          2147483647U);
    if (pdef_data_outdatedOnGpu) {
      checkCudaError(cudaMemcpy(*gpu_pdef_data, SD->f2.cpu_pdef_data,
                                1000000ULL * sizeof(real_T),
                                cudaMemcpyHostToDevice),
                     __FILE__, __LINE__);
    }
    validLaunchParams = mwValidateLaunchParameters(grid, block);
    if (validLaunchParams) {
      solve_benchmark_cuda_kernel37<<<grid, block>>>(b_nx - 1, *gpu_pdef_data);
    }
    mwGetLaunchParameters(computeNumIters(b_nx - 1), &grid, &block,
                          2147483647U);
    validLaunchParams = mwValidateLaunchParameters(grid, block);
    if (validLaunchParams) {
      solve_benchmark_cuda_kernel38<<<grid, block>>>(b_nx - 1, *gpu_pdef_data);
    }
    mwGetLaunchParameters(computeNumIters(ns - 1), &grid, &block, 2147483647U);
    validLaunchParams = mwValidateLaunchParameters(grid, block);
    if (validLaunchParams) {
      solve_benchmark_cuda_kernel39<<<grid, block>>>(*gpu_probDcre_data, ns - 1,
                                                     *gpu_vautnew_data);
    }
    if ((rr_size[0] == ns) && (b_size[0] == rr_size[1])) {
      evp_size[0] = rr_size[0];
      evp_size[1] = rr_size[1];
      numIters = computeNumIters(rr_size[1] - 1, rr_size[0] - 1);
      mwGetLaunchParameters(numIters, &grid, &block, 2147483647U);
      validLaunchParams = mwValidateLaunchParameters(grid, block);
      if (validLaunchParams) {
        solve_benchmark_cuda_kernel40<<<grid, block>>>(
            gpu_b_data, gpu_rr_data, *gpu_vautnew_data, rr_size[1] - 1,
            rr_size[0] - 1, rr_size[0], *gpu_evp_data);
      }
    } else {
      checkCudaError(cudaMemcpy(SD->f2.cpu_evp_data, *gpu_evp_data,
                                1000000ULL * sizeof(real_T),
                                cudaMemcpyDeviceToHost),
                     __FILE__, __LINE__);
      if (rr_data_outdatedOnCpu) {
        checkCudaError(
            cudaMemcpy(cpu_rr_data, gpu_rr_data,
                       static_cast<uint64_T>(rr_size[0] * rr_size[1]) *
                           sizeof(real_T),
                       cudaMemcpyDeviceToHost),
            __FILE__, __LINE__);
      }
      checkCudaError(cudaMemcpy(cpu_vautnew_data, *gpu_vautnew_data,
                                1000ULL * sizeof(real_T),
                                cudaMemcpyDeviceToHost),
                     __FILE__, __LINE__);
      binary_expand_op_5(SD->f2.cpu_evp_data, evp_size, cpu_rr_data, rr_size,
                         cpu_vautnew_data, &ns, cpu_b_data, &b_size[0]);
      x_data_outdatedOnCpu = true;
    }
    if ((pdf_size[0] == 0) || (pdf_size[1] == 0) || (evp_size[0] == 0) ||
        (evp_size[1] == 0)) {
      rr_size[0] = pdf_size[0];
      rr_size[1] = evp_size[1];
      b_z_size = pdf_size[0] * evp_size[1] - 1;
      mwGetLaunchParameters(computeNumIters(b_z_size), &grid, &block,
                            2147483647U);
      validLaunchParams = mwValidateLaunchParameters(grid, block);
      if (validLaunchParams) {
        solve_benchmark_cuda_kernel41<<<grid, block>>>(b_z_size, gpu_rr_data);
      }
    } else {
      rr_size[0] = pdf_size[0];
      rr_size[1] = evp_size[1];
      dist = 1.0;
      beta1 = 0.0;
      if (pdf_data_outdatedOnGpu) {
        checkCudaError(
            cudaMemcpy(gpu_pdf_data, cpu_pdf_data,
                       static_cast<uint64_T>(pdf_size[0] * pdf_size[1]) *
                           sizeof(real_T),
                       cudaMemcpyHostToDevice),
            __FILE__, __LINE__);
      }
      pdf_data_outdatedOnGpu = false;
      if (x_data_outdatedOnCpu) {
        checkCudaError(cudaMemcpy(*gpu_evp_data, SD->f2.cpu_evp_data,
                                  1000000ULL * sizeof(real_T),
                                  cudaMemcpyHostToDevice),
                       __FILE__, __LINE__);
      }
      cublasDgemm(getCublasGlobalHandle(), CUBLAS_OP_N, CUBLAS_OP_N,
                  pdf_size[0], evp_size[1], pdf_size[1], &dist,
                  &gpu_pdf_data[0], pdf_size[0], &(*gpu_evp_data)[0],
                  pdf_size[1], &beta1, &gpu_rr_data[0], pdf_size[0]);
    }
    mwGetLaunchParameters(computeNumIters(rr_size[0] * rr_size[1] - 1), &grid,
                          &block, 2147483647U);
    validLaunchParams = mwValidateLaunchParameters(grid, block);
    if (validLaunchParams) {
      solve_benchmark_cuda_kernel42<<<grid, block>>>(
          rr_size[0] * rr_size[1] - 1, gpu_rr_data);
    }
    rr_data_outdatedOnCpu = true;
    if (pdef_size[0] == 1) {
      b_z_size = rr_size[0];
      nx = qnew_size[0];
    } else {
      b_z_size = pdef_size[0];
      nx = pdef_size[0];
    }
    if (pdef_size[1] == 1) {
      c_nx = rr_size[1];
      c = qnew_size[1];
    } else {
      c_nx = pdef_size[1];
      c = pdef_size[1];
    }
    if ((pdef_size[0] == rr_size[0]) && (pdef_size[1] == rr_size[1]) &&
        (pdef_size[0] == qnew_size[0]) && (pdef_size[1] == qnew_size[1]) &&
        (b_z_size == nx) && (c_nx == c)) {
      mwGetLaunchParameters(computeNumIters(b_nx - 1), &grid, &block,
                            2147483647U);
      validLaunchParams = mwValidateLaunchParameters(grid, block);
      if (validLaunchParams) {
        solve_benchmark_cuda_kernel43<<<grid, block>>>(
            gpu_rr_data, *gpu_qnew_data, b_nx - 1, *gpu_pdef_data);
      }
      pdef_data_outdatedOnGpu = false;
    } else {
      checkCudaError(cudaMemcpy(SD->f2.cpu_pdef_data, *gpu_pdef_data,
                                1000000ULL * sizeof(real_T),
                                cudaMemcpyDeviceToHost),
                     __FILE__, __LINE__);
      checkCudaError(cudaMemcpy(cpu_rr_data, gpu_rr_data,
                                static_cast<uint64_T>(rr_size[0] * rr_size[1]) *
                                    sizeof(real_T),
                                cudaMemcpyDeviceToHost),
                     __FILE__, __LINE__);
      rr_data_outdatedOnCpu = false;
      checkCudaError(cudaMemcpy(SD->f2.cpu_qnew_data, *gpu_qnew_data,
                                1000000ULL * sizeof(real_T),
                                cudaMemcpyDeviceToHost),
                     __FILE__, __LINE__);
      b_binary_expand_op_4(SD, SD->f2.cpu_pdef_data, pdef_size, cpu_rr_data,
                           rr_size, SD->f2.cpu_qnew_data, qnew_size);
      pdef_data_outdatedOnGpu = true;
    }
    if ((pdf_size[0] == 0) || (pdf_size[1] == 0) || (pdef_size[0] == 0) ||
        (pdef_size[1] == 0)) {
      qnew_size[0] = pdf_size[0];
      qnew_size[1] = pdef_size[1];
      b_z_size = pdf_size[0] * pdef_size[1] - 1;
      mwGetLaunchParameters(computeNumIters(b_z_size), &grid, &block,
                            2147483647U);
      validLaunchParams = mwValidateLaunchParameters(grid, block);
      if (validLaunchParams) {
        solve_benchmark_cuda_kernel44<<<grid, block>>>(b_z_size,
                                                       *gpu_qnew_data);
      }
    } else {
      qnew_size[0] = pdf_size[0];
      qnew_size[1] = pdef_size[1];
      dist = 1.0;
      beta1 = 0.0;
      if (pdf_data_outdatedOnGpu) {
        checkCudaError(
            cudaMemcpy(gpu_pdf_data, cpu_pdf_data,
                       static_cast<uint64_T>(pdf_size[0] * pdf_size[1]) *
                           sizeof(real_T),
                       cudaMemcpyHostToDevice),
            __FILE__, __LINE__);
      }
      pdf_data_outdatedOnGpu = false;
      if (pdef_data_outdatedOnGpu) {
        checkCudaError(cudaMemcpy(*gpu_pdef_data, SD->f2.cpu_pdef_data,
                                  1000000ULL * sizeof(real_T),
                                  cudaMemcpyHostToDevice),
                       __FILE__, __LINE__);
      }
      cublasDgemm(getCublasGlobalHandle(), CUBLAS_OP_N, CUBLAS_OP_N,
                  pdf_size[0], pdef_size[1], pdf_size[1], &dist,
                  &gpu_pdf_data[0], pdf_size[0], &(*gpu_pdef_data)[0],
                  pdf_size[1], &beta1, &(*gpu_qnew_data)[0], pdf_size[0]);
    }
    b_z_size = qnew_size[0] * qnew_size[1];
    mwGetLaunchParameters(computeNumIters(b_z_size - 1), &grid, &block,
                          2147483647U);
    validLaunchParams = mwValidateLaunchParameters(grid, block);
    if (validLaunchParams) {
      solve_benchmark_cuda_kernel45<<<grid, block>>>(b_z_size - 1,
                                                     *gpu_qnew_data);
    }
    if ((qnew_size[0] == q_size[0]) && (qnew_size[1] == q_size[1])) {
      q_size[0] = qnew_size[0];
      q_size[1] = qnew_size[1];
      mwGetLaunchParameters(computeNumIters(b_z_size - 1), &grid, &block,
                            2147483647U);
      validLaunchParams = mwValidateLaunchParameters(grid, block);
      if (validLaunchParams) {
        solve_benchmark_cuda_kernel46<<<grid, block>>>(
            *gpu_qnew_data, b_z_size - 1, gpu_q_data);
      }
    } else {
      checkCudaError(cudaMemcpy(cpu_q_data, gpu_q_data,
                                static_cast<uint64_T>(q_size[0] * q_size[1]) *
                                    sizeof(real_T),
                                cudaMemcpyDeviceToHost),
                     __FILE__, __LINE__);
      checkCudaError(cudaMemcpy(SD->f2.cpu_qnew_data, *gpu_qnew_data,
                                1000000ULL * sizeof(real_T),
                                cudaMemcpyDeviceToHost),
                     __FILE__, __LINE__);
      b_minus(SD, cpu_q_data, q_size, SD->f2.cpu_qnew_data, qnew_size);
      q_data_outdatedOnGpu = true;
    }
    for (vlen = 0; vlen < 2; vlen++) {
      vautnew[vlen] = static_cast<int16_T>(q_size[vlen]);
    }
    pdef_size[0] = vautnew[0];
    pdef_size[1] = vautnew[1];
    mwGetLaunchParameters(computeNumIters(q_size[0] * q_size[1] - 1), &grid,
                          &block, 2147483647U);
    if (q_data_outdatedOnGpu) {
      checkCudaError(cudaMemcpy(gpu_q_data, cpu_q_data,
                                static_cast<uint64_T>(q_size[0] * q_size[1]) *
                                    sizeof(real_T),
                                cudaMemcpyHostToDevice),
                     __FILE__, __LINE__);
    }
    validLaunchParams = mwValidateLaunchParameters(grid, block);
    if (validLaunchParams) {
      solve_benchmark_cuda_kernel47<<<grid, block>>>(
          gpu_q_data, q_size[0] * q_size[1] - 1, *gpu_pdef_data);
    }
    pdef_data_outdatedOnCpu = true;
    V_size[0] = 1;
    V_size[1] = vautnew[1];
    if (vautnew[1] == 0) {
      for (vlen = 0; vlen < 2; vlen++) {
        vautnew[vlen] = static_cast<int16_T>(V_size[vlen]);
      }
      V_size[1] = vautnew[1];
      b_z_size = vautnew[0] * vautnew[1] - 1;
      mwGetLaunchParameters(computeNumIters(b_z_size), &grid, &block,
                            2147483647U);
      validLaunchParams = mwValidateLaunchParameters(grid, block);
      if (validLaunchParams) {
        solve_benchmark_cuda_kernel48<<<grid, block>>>(b_z_size,
                                                       *gpu_vautnew_data);
      }
    } else {
      mwGetLaunchParameters(computeNumIters(vautnew[1] - 1), &grid, &block,
                            2147483647U);
      validLaunchParams = mwValidateLaunchParameters(grid, block);
      if (validLaunchParams) {
        solve_benchmark_cuda_kernel57<<<grid, block>>>(
            *gpu_pdef_data, static_cast<int32_T>(vautnew[0]), vautnew[1] - 1,
            *gpu_vautnew_data);
      }
    }
    vlen = V_size[1];
    checkCudaError(cudaMemcpy(cpu_vautnew_data, *gpu_vautnew_data,
                              1000ULL * sizeof(real_T), cudaMemcpyDeviceToHost),
                   __FILE__, __LINE__);
    dist = cpu_vautnew_data[0];
    for (ibtile = 0; ibtile <= vlen - 2; ibtile++) {
      b = cpu_vautnew_data[ibtile + 1];
      if (std::isnan(b)) {
        vautnew_data_outdatedOnCpu = false;
      } else if (std::isnan(dist)) {
        vautnew_data_outdatedOnCpu = true;
      } else {
        vautnew_data_outdatedOnCpu = (dist < b);
      }
      if (vautnew_data_outdatedOnCpu) {
        dist = b;
      }
    }
    c_nx = vp_size[0] * vp_size[1];
    b_z_size = vp_size[0] * vp_size[1] - 1;
    mwGetLaunchParameters(computeNumIters(b_z_size), &grid, &block,
                          2147483647U);
    validLaunchParams = mwValidateLaunchParameters(grid, block);
    if (validLaunchParams) {
      solve_benchmark_cuda_kernel49<<<grid, block>>>(
          gpu_vp_data, *gpu_vpnew_data, b_z_size, *gpu_x_data);
    }
    mwGetLaunchParameters(computeNumIters(vp_size[0] * vp_size[1] - 1), &grid,
                          &block, 2147483647U);
    validLaunchParams = mwValidateLaunchParameters(grid, block);
    if (validLaunchParams) {
      solve_benchmark_cuda_kernel50<<<grid, block>>>(*gpu_x_data, c_nx - 1,
                                                     *gpu_evp_data);
    }
    checkCudaError(cudaMemcpy(SD->f2.cpu_evp_data, *gpu_evp_data,
                              1000000ULL * sizeof(real_T),
                              cudaMemcpyDeviceToHost),
                   __FILE__, __LINE__);
    beta1 = SD->f2.cpu_evp_data[0];
    for (ibtile = 0; ibtile <= c_nx - 2; ibtile++) {
      b = SD->f2.cpu_evp_data[ibtile + 1];
      if (std::isnan(b)) {
        vautnew_data_outdatedOnCpu = false;
      } else if (std::isnan(beta1)) {
        vautnew_data_outdatedOnCpu = true;
      } else {
        vautnew_data_outdatedOnCpu = (beta1 < b);
      }
      if (vautnew_data_outdatedOnCpu) {
        beta1 = b;
      }
    }
    if (vdnew_size == vd_size[0]) {
      c_nx = vdnew_size;
      mwGetLaunchParameters(computeNumIters(vdnew_size - 1), &grid, &block,
                            2147483647U);
      if (V_data_outdatedOnGpu) {
        checkCudaError(cudaMemcpy(*gpu_vdnew_data, cpu_vdnew_data,
                                  1000ULL * sizeof(real_T),
                                  cudaMemcpyHostToDevice),
                       __FILE__, __LINE__);
      }
      V_data_outdatedOnGpu = false;
      validLaunchParams = mwValidateLaunchParameters(grid, block);
      if (validLaunchParams) {
        solve_benchmark_cuda_kernel51<<<grid, block>>>(
            gpu_vd_data, *gpu_vdnew_data, vdnew_size - 1, *gpu_x_data);
      }
      vautnew_data_outdatedOnCpu = false;
    } else {
      checkCudaError(cudaMemcpy(SD->f2.cpu_x_data, *gpu_x_data,
                                1000000ULL * sizeof(real_T),
                                cudaMemcpyDeviceToHost),
                     __FILE__, __LINE__);
      if (vautnew_data_outdatedOnGpu) {
        checkCudaError(cudaMemcpy(cpu_vdnew_data, *gpu_vdnew_data,
                                  1000ULL * sizeof(real_T),
                                  cudaMemcpyDeviceToHost),
                       __FILE__, __LINE__);
      }
      vautnew_data_outdatedOnGpu = false;
      if (vd_data_outdatedOnCpu) {
        checkCudaError(
            cudaMemcpy(cpu_vd_data, gpu_vd_data,
                       static_cast<uint64_T>(vd_size[0]) * sizeof(real_T),
                       cudaMemcpyDeviceToHost),
            __FILE__, __LINE__);
      }
      binary_expand_op(SD->f2.cpu_x_data, &c_nx, cpu_vdnew_data, &vdnew_size,
                       cpu_vd_data, &vd_size[0]);
      vautnew_data_outdatedOnCpu = true;
    }
    mwGetLaunchParameters(computeNumIters(c_nx - 1), &grid, &block,
                          2147483647U);
    if (vautnew_data_outdatedOnCpu) {
      checkCudaError(cudaMemcpy(*gpu_x_data, SD->f2.cpu_x_data,
                                1000000ULL * sizeof(real_T),
                                cudaMemcpyHostToDevice),
                     __FILE__, __LINE__);
    }
    validLaunchParams = mwValidateLaunchParameters(grid, block);
    if (validLaunchParams) {
      solve_benchmark_cuda_kernel52<<<grid, block>>>(*gpu_x_data, c_nx - 1,
                                                     *gpu_evp_data);
    }
    checkCudaError(cudaMemcpy(SD->f2.cpu_evp_data, *gpu_evp_data,
                              1000000ULL * sizeof(real_T),
                              cudaMemcpyDeviceToHost),
                   __FILE__, __LINE__);
    ex = SD->f2.cpu_evp_data[0];
    for (ibtile = 0; ibtile <= c_nx - 2; ibtile++) {
      b = SD->f2.cpu_evp_data[ibtile + 1];
      if (std::isnan(b)) {
        vautnew_data_outdatedOnCpu = false;
      } else if (std::isnan(ex)) {
        vautnew_data_outdatedOnCpu = true;
      } else {
        vautnew_data_outdatedOnCpu = (ex < b);
      }
      if (vautnew_data_outdatedOnCpu) {
        ex = b;
      }
    }
    dist = (dist + beta1) + ex;
    b_z_size = vp_size[0] * vp_size[1] - 1;
    mwGetLaunchParameters(computeNumIters(b_z_size), &grid, &block,
                          2147483647U);
    validLaunchParams = mwValidateLaunchParameters(grid, block);
    if (validLaunchParams) {
      solve_benchmark_cuda_kernel53<<<grid, block>>>(*gpu_vpnew_data, b_z_size,
                                                     gpu_vp_data);
    }
    vd_size[0] = vdnew_size;
    mwGetLaunchParameters(computeNumIters(vdnew_size - 1), &grid, &block,
                          2147483647U);
    if (V_data_outdatedOnGpu) {
      checkCudaError(cudaMemcpy(*gpu_vdnew_data, cpu_vdnew_data,
                                1000ULL * sizeof(real_T),
                                cudaMemcpyHostToDevice),
                     __FILE__, __LINE__);
    }
    validLaunchParams = mwValidateLaunchParameters(grid, block);
    if (validLaunchParams) {
      solve_benchmark_cuda_kernel54<<<grid, block>>>(
          *gpu_vdnew_data, vdnew_size - 1, gpu_vd_data);
    }
    vd_data_outdatedOnCpu = true;
    q_size[0] = qnew_size[0];
    q_size[1] = qnew_size[1];
    b_z_size = qnew_size[0] * qnew_size[1] - 1;
    mwGetLaunchParameters(computeNumIters(b_z_size), &grid, &block,
                          2147483647U);
    validLaunchParams = mwValidateLaunchParameters(grid, block);
    if (validLaunchParams) {
      solve_benchmark_cuda_kernel55<<<grid, block>>>(*gpu_qnew_data, b_z_size,
                                                     gpu_q_data);
    }
    q_data_outdatedOnGpu = false;
    x_data_outdatedOnCpu = false;
    evp_size[0] = vdnew_size;
    evp_size[1] = nb;
    for (vlen = 0; vlen < nb; vlen++) {
      ibtile = vlen * vdnew_size;
      for (b_nx = 0; b_nx < vdnew_size; b_nx++) {
        if (vautnew_data_outdatedOnGpu) {
          checkCudaError(cudaMemcpy(cpu_vdnew_data, *gpu_vdnew_data,
                                    1000ULL * sizeof(real_T),
                                    cudaMemcpyDeviceToHost),
                         __FILE__, __LINE__);
        }
        vautnew_data_outdatedOnGpu = false;
        SD->f2.cpu_evp_data[ibtile + b_nx] = cpu_vdnew_data[b_nx];
        x_data_outdatedOnCpu = true;
      }
    }
    if ((vp_size[0] == vdnew_size) && (vp_size[1] == nb)) {
      if (vp_size[0] <= vdnew_size) {
        csz_idx_0 = static_cast<int16_T>(vp_size[0]);
      } else {
        csz_idx_0 = static_cast<int16_T>(vdnew_size);
      }
      if (vp_size[1] <= nb) {
        csz_idx_1 = static_cast<int16_T>(vp_size[1]);
      } else {
        csz_idx_1 = static_cast<int16_T>(nb);
      }
      V_size[0] = csz_idx_0;
      V_size[1] = csz_idx_1;
      mwGetLaunchParameters(computeNumIters(csz_idx_0 * csz_idx_1 - 1), &grid,
                            &block, 2147483647U);
      if (x_data_outdatedOnCpu) {
        checkCudaError(cudaMemcpy(*gpu_evp_data, SD->f2.cpu_evp_data,
                                  1000000ULL * sizeof(real_T),
                                  cudaMemcpyHostToDevice),
                       __FILE__, __LINE__);
      }
      validLaunchParams = mwValidateLaunchParameters(grid, block);
      if (validLaunchParams) {
        solve_benchmark_cuda_kernel56<<<grid, block>>>(
            *gpu_vpnew_data, *gpu_evp_data, csz_idx_0 * csz_idx_1 - 1,
            *gpu_V_data);
      }
      V_data_outdatedOnGpu = false;
    } else {
      if (vpnew_data_outdatedOnCpu) {
        checkCudaError(cudaMemcpy(SD->f2.cpu_vpnew_data, *gpu_vpnew_data,
                                  1000000ULL * sizeof(real_T),
                                  cudaMemcpyDeviceToHost),
                       __FILE__, __LINE__);
      }
      coder::internal::expand_max(SD->f2.cpu_vpnew_data, vp_size,
                                  SD->f2.cpu_evp_data, evp_size,
                                  SD->f2.cpu_V_data, V_size);
      V_data_outdatedOnGpu = true;
    }
    *totaltime += coder::toc(smctime_tv_sec, smctime_tv_nsec);
    *avgtime = *totaltime / static_cast<real_T>(its);
    if ((std::fmod(static_cast<real_T>(its), 30.0) == 0.0) ||
        (dist <= 1.0E-7)) {
      y = nullptr;
      m = emlrtCreateCharArray(2, &iv[0]);
      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 7, m, &u[0]);
      emlrtAssign(&y, m);
      b_y = nullptr;
      m = emlrtCreateCharArray(2, &iv1[0]);
      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 31, m, &b_u[0]);
      emlrtAssign(&b_y, m);
      emlrt_marshallIn(feval(y, emlrt_marshallOut(1.0), b_y,
                             emlrt_marshallOut(static_cast<real_T>(its)),
                             emlrt_marshallOut(dist),
                             emlrt_marshallOut(*totaltime),
                             emlrt_marshallOut(*avgtime), &emlrtMCI),
                       "<output of feval>");
    }
    its++;
    expl_temp = coder::tic();
    smctime_tv_sec = expl_temp.tv_sec;
    smctime_tv_nsec = expl_temp.tv_nsec;
    //  re-start clock
  }
  emxFree_real_T(&cpu_W);
  //  end while
  pdef_data_outdatedOnGpu = false;
  b_z_size = vd_size[0];
  pdef_size[0] = vd_size[0];
  pdef_size[1] = nb;
  for (vlen = 0; vlen < nb; vlen++) {
    ibtile = vlen * b_z_size;
    for (b_nx = 0; b_nx < b_z_size; b_nx++) {
      if (vd_data_outdatedOnCpu) {
        checkCudaError(
            cudaMemcpy(cpu_vd_data, gpu_vd_data,
                       static_cast<uint64_T>(vd_size[0]) * sizeof(real_T),
                       cudaMemcpyDeviceToHost),
            __FILE__, __LINE__);
      }
      vd_data_outdatedOnCpu = false;
      SD->f2.cpu_pdef_data[ibtile + b_nx] = cpu_vd_data[b_nx];
      pdef_data_outdatedOnGpu = true;
    }
  }
  if ((vp_size[0] == vd_size[0]) && (vp_size[1] == nb)) {
    def_size[0] = vp_size[0];
    def_size[1] = vp_size[1];
    b_z_size = vp_size[0] * vp_size[1] - 1;
    mwGetLaunchParameters(computeNumIters(b_z_size), &grid, &block,
                          2147483647U);
    if (pdef_data_outdatedOnGpu) {
      checkCudaError(cudaMemcpy(*gpu_pdef_data, SD->f2.cpu_pdef_data,
                                1000000ULL * sizeof(real_T),
                                cudaMemcpyHostToDevice),
                     __FILE__, __LINE__);
    }
    validLaunchParams = mwValidateLaunchParameters(grid, block);
    if (validLaunchParams) {
      solve_benchmark_cuda_kernel58<<<grid, block>>>(
          gpu_vp_data, *gpu_pdef_data, b_z_size, gpu_def_data);
    }
    def_data_outdatedOnCpu = true;
  } else {
    checkCudaError(cudaMemcpy(cpu_vp_data, gpu_vp_data,
                              static_cast<uint64_T>(vp_size[0] * vp_size[1]) *
                                  sizeof(real_T),
                              cudaMemcpyDeviceToHost),
                   __FILE__, __LINE__);
    vp_data_outdatedOnCpu = false;
    lt(cpu_def_data, def_size, cpu_vp_data, vp_size, SD->f2.cpu_pdef_data,
       pdef_size);
  }
  mwGetLaunchParameters(computeNumIters(ns - 1), &grid, &block, 2147483647U);
  if (b_data_outdatedOnGpu) {
    checkCudaError(cudaMemcpy(gpu_b_data, cpu_b_data,
                              static_cast<uint64_T>(b_size[0]) * sizeof(real_T),
                              cudaMemcpyHostToDevice),
                   __FILE__, __LINE__);
  }
  validLaunchParams = mwValidateLaunchParameters(grid, block);
  if (validLaunchParams) {
    solve_benchmark_cuda_kernel59<<<grid, block>>>(
        gpu_b_data, gpu_q_data, gpu_bp_data, alfa, nb, *gpu_vpnew_data,
        *gpu_vaut_data, bp_size[0], q_size[0], ns - 1, gpu_bpr_data);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b(emlrtRootTLSGlobal);
  if (vp_data_outdatedOnCpu) {
    checkCudaError(cudaMemcpy(cpu_vp_data, gpu_vp_data,
                              static_cast<uint64_T>(vp_size[0] * vp_size[1]) *
                                  sizeof(real_T),
                              cudaMemcpyDeviceToHost),
                   __FILE__, __LINE__);
  }
  if (vd_data_outdatedOnCpu) {
    checkCudaError(
        cudaMemcpy(cpu_vd_data, gpu_vd_data,
                   static_cast<uint64_T>(vd_size[0]) * sizeof(real_T),
                   cudaMemcpyDeviceToHost),
        __FILE__, __LINE__);
  }
  checkCudaError(
      cudaMemcpy(cpu_q_data, gpu_q_data,
                 static_cast<uint64_T>(q_size[0] * q_size[1]) * sizeof(real_T),
                 cudaMemcpyDeviceToHost),
      __FILE__, __LINE__);
  checkCudaError(cudaMemcpy(cpu_bp_data, gpu_bp_data,
                            static_cast<uint64_T>(bp_size[0] * bp_size[1]) *
                                sizeof(real_T),
                            cudaMemcpyDeviceToHost),
                 __FILE__, __LINE__);
  checkCudaError(cudaMemcpy(cpu_bpr_data, gpu_bpr_data,
                            static_cast<uint64_T>(bpr_size[0]) * sizeof(real_T),
                            cudaMemcpyDeviceToHost),
                 __FILE__, __LINE__);
  if (def_data_outdatedOnCpu) {
    checkCudaError(cudaMemcpy(cpu_def_data, gpu_def_data,
                              static_cast<uint64_T>(def_size[0] * def_size[1]) *
                                  sizeof(boolean_T),
                              cudaMemcpyDeviceToHost),
                   __FILE__, __LINE__);
  }
  if (rr_data_outdatedOnCpu) {
    checkCudaError(cudaMemcpy(cpu_rr_data, gpu_rr_data,
                              static_cast<uint64_T>(rr_size[0] * rr_size[1]) *
                                  sizeof(real_T),
                              cudaMemcpyDeviceToHost),
                   __FILE__, __LINE__);
  }
  checkCudaError(mwCudaFree(gpu_z_data), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(gpu_m_data), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(gpu_b_data), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(gpu_pdf_data), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(gpu_vp_data), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(gpu_vd_data), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(gpu_q_data), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(gpu_bp_data), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(gpu_bpr_data), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(gpu_def_data), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(gpu_rr_data), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_V_data), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_vpnew_data), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_qnew_data), __FILE__, __LINE__);
  gpuEmxFree_real_T(&gpu_W);
  checkCudaError(mwCudaFree(*gpu_WW_data), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_Gamma_data), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_Dcre_data), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_ua_data), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_probDcre_data), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_probVp_data), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_vaut_data), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_y_data), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_vautnew_data), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_evp_data), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*b_gpu_y_data), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_vdnew_data), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_pdef_data), __FILE__, __LINE__);
  checkCudaError(mwCudaFree(*gpu_x_data), __FILE__, __LINE__);
}

// End of code generation (solve_benchmark_cuda.cu)
