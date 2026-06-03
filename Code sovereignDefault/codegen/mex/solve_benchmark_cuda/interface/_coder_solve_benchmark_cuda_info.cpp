//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// _coder_solve_benchmark_cuda_info.cpp
//
// Code generation for function 'solve_benchmark_cuda'
//

// Include files
#include "_coder_solve_benchmark_cuda_info.h"
#include "emlrt.h"
#include "tmwtypes.h"

// Function Declarations
static const mxArray *c_emlrtMexFcnResolvedFunctionsI();

// Function Definitions
static const mxArray *c_emlrtMexFcnResolvedFunctionsI()
{
  const mxArray *nameCaptureInfo;
  const char_T *data[6]{
      "789ced55cd6ed340105e5b4949255a520955dcf0911342f400e2480282434a902b518491"
      "bbb1378e157b6dfcd3242f5071833780638f1c2371e1317a008963ef"
      "bc009bc4eb38232f9b0635e5c048a3dd2fdfee7ce3d9cd2c529eb71484d0369ad9d9c66c"
      "dcca703d1b55b46890570423b72aaa2cece3fc876cb4029a90613203",
      "14fb24dfe9d2304d0e4621891988481c78c7c49e325dd72307ae4ff422d89f20ff6981ca"
      "c1849acc1b3d62f5f5d447512f9e67e815415e8f23c1f75624f58006"
      "eb01d771bde18a7a3cfe4d891ee7a765343b845a3d1f477dd34a6d5ccce34ca0b303e242"
      "1d25cbb4d578a1cff0ec42c549e45247fe9d1c2301bf0174a13ee76f",
      "cd7ffaa166eb8acef3f829d059b6de23411e75c0bf79f2b6f9c8788c5d3bd547d4b2ddb8"
      "6f0c82a8cf8aa2853824516cb471843d8f789a15f8eccae3c40da836"
      "70939ed62243c30a6c623a0ca51da3c1e65a1c1c9388b80e6d922e4ebdc4283bd2bb7ea6"
      "2fbbcf3796fc5e51ddb7506d3a9efcfaaeac53cffe7afbd33af5b85d",
      "95dedff6875d815e1df05dcb7be9507c7ff0fa5d889d07fb7b7bfabdc3e63c8fb6444796"
      "0712e075c57f562bdfbfb964fcf36be5f155c023f0be8e2ff97ddd04"
      "3cc7bc1f73e3f9dc11e473f13ebf1867f2cebe8a70c83a9b6916f4c6d5723dd9b9cafa3e"
      "8faf29e5fb65e7fa4d125f05eb2ad96f0f991f320f997f667e5af02f",
      "cc311de56f9fc8e0d9737dee7f3245302f5b372ee06dc0737c9e8dabf6b31d80e1faf780"
      "5701ceae477edeb2d146014a510779885c785efceeb6e0dec8ee25cc"
      "5f742f43c97e517c593fe3fffb7f5dff4810ffba445f56dfaae09dfc7f9e97ab5f5bb1cf"
      "f278a782f82ae0e1fbf95110f7aade4f6ebf010564a87e",
      ""};
  nameCaptureInfo = nullptr;
  emlrtNameCaptureMxArrayR2016a(&data[0], 3912U, &nameCaptureInfo);
  return nameCaptureInfo;
}

mxArray *emlrtMexFcnProperties()
{
  mxArray *xEntryPoints;
  mxArray *xInputs;
  mxArray *xResult;
  const char_T *epFieldName[7]{
      "QualifiedName",    "NumberOfInputs", "NumberOfOutputs", "ConstantInputs",
      "ResolvedFilePath", "TimeStamp",      "Visible"};
  const char_T *propFieldName[7]{
      "Version",      "ResolvedFunctions", "Checksum", "EntryPoints",
      "CoverageInfo", "IsPolymorphic",     "AuxData"};
  uint8_T v[216]{
      0U,   1U,   73U,  77U,  0U,   0U,   0U,   0U,   14U,  0U,   0U,   0U,
      200U, 0U,   0U,   0U,   6U,   0U,   0U,   0U,   8U,   0U,   0U,   0U,
      2U,   0U,   0U,   0U,   0U,   0U,   0U,   0U,   5U,   0U,   0U,   0U,
      8U,   0U,   0U,   0U,   1U,   0U,   0U,   0U,   1U,   0U,   0U,   0U,
      1U,   0U,   0U,   0U,   0U,   0U,   0U,   0U,   5U,   0U,   4U,   0U,
      17U,  0U,   0U,   0U,   1U,   0U,   0U,   0U,   17U,  0U,   0U,   0U,
      67U,  108U, 97U,  115U, 115U, 69U,  110U, 116U, 114U, 121U, 80U,  111U,
      105U, 110U, 116U, 115U, 0U,   0U,   0U,   0U,   0U,   0U,   0U,   0U,
      14U,  0U,   0U,   0U,   112U, 0U,   0U,   0U,   6U,   0U,   0U,   0U,
      8U,   0U,   0U,   0U,   2U,   0U,   0U,   0U,   0U,   0U,   0U,   0U,
      5U,   0U,   0U,   0U,   8U,   0U,   0U,   0U,   1U,   0U,   0U,   0U,
      0U,   0U,   0U,   0U,   1U,   0U,   0U,   0U,   0U,   0U,   0U,   0U,
      5U,   0U,   4U,   0U,   14U,  0U,   0U,   0U,   1U,   0U,   0U,   0U,
      56U,  0U,   0U,   0U,   81U,  117U, 97U,  108U, 105U, 102U, 105U, 101U,
      100U, 78U,  97U,  109U, 101U, 0U,   77U,  101U, 116U, 104U, 111U, 100U,
      115U, 0U,   0U,   0U,   0U,   0U,   0U,   0U,   80U,  114U, 111U, 112U,
      101U, 114U, 116U, 105U, 101U, 115U, 0U,   0U,   0U,   0U,   72U,  97U,
      110U, 100U, 108U, 101U, 0U,   0U,   0U,   0U,   0U,   0U,   0U,   0U};
  xEntryPoints =
      emlrtCreateStructMatrix(1, 1, 7, (const char_T **)&epFieldName[0]);
  xInputs = emlrtCreateLogicalMatrix(1, 5);
  emlrtSetField(xEntryPoints, 0, "QualifiedName",
                emlrtMxCreateString("solve_benchmark_cuda"));
  emlrtSetField(xEntryPoints, 0, "NumberOfInputs",
                emlrtMxCreateDoubleScalar(5.0));
  emlrtSetField(xEntryPoints, 0, "NumberOfOutputs",
                emlrtMxCreateDoubleScalar(9.0));
  emlrtSetField(xEntryPoints, 0, "ConstantInputs", xInputs);
  emlrtSetField(
      xEntryPoints, 0, "ResolvedFilePath",
      emlrtMxCreateString(
          "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
          "Mex\\code_github\\Code sovereignDefault\\solve_benchmark_cuda.m"));
  emlrtSetField(xEntryPoints, 0, "TimeStamp",
                emlrtMxCreateDoubleScalar(740136.8106828703));
  emlrtSetField(xEntryPoints, 0, "Visible", emlrtMxCreateLogicalScalar(true));
  xResult =
      emlrtCreateStructMatrix(1, 1, 7, (const char_T **)&propFieldName[0]);
  emlrtSetField(xResult, 0, "Version",
                emlrtMxCreateString("26.1.0.3251617 (R2026a) Update 2"));
  emlrtSetField(xResult, 0, "ResolvedFunctions",
                (mxArray *)c_emlrtMexFcnResolvedFunctionsI());
  emlrtSetField(xResult, 0, "Checksum",
                emlrtMxCreateString("RMNhNSglDxCofvQYNuoGZ"));
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  emlrtSetField(xResult, 0, "AuxData",
                emlrtMxCreateRowVectorUINT8((const uint8_T *)&v, 216U));
  return xResult;
}

// End of code generation (_coder_solve_benchmark_cuda_info.cpp)
