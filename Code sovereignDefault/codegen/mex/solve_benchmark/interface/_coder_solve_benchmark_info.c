/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_solve_benchmark_info.c
 *
 * Code generation for function 'solve_benchmark'
 *
 */

/* Include files */
#include "_coder_solve_benchmark_info.h"
#include "emlrt.h"
#include "tmwtypes.h"

/* Function Declarations */
static const mxArray *c_emlrtMexFcnResolvedFunctionsI(void);

/* Function Definitions */
static const mxArray *c_emlrtMexFcnResolvedFunctionsI(void)
{
  const mxArray *nameCaptureInfo;
  const char_T *data[6] = {
      "789ced56cd6ed340105e5b4949255ad20b70e0e00b12272e1c40dc20a1a248a1915c890a"
      "8cd2adbd492cdb6bcb3f4df206dce01138f6c8313738f20848c0bd8f"
      "81137b1d67e461d3484d3930d26afde55bcf373b3bde09510e3a0a21649764f67d2b9b77"
      "72dccc67952c1be41564165627b5a5f704ff319f4d9fc76c1c678053",
      "8f156fda3c48e2a349c0a214842cf2dd3366cd99beedb223db637a19bc9e216fbf441560"
      "46cd9e5b43663a7ae29170182d2274cba0c8c709b2df9a241fd0603e"
      "e03aa117aca927fcdf92e8097e9ec6de29e3e6d0a3a153e8ff40fcef017fd0bf9247d869"
      "1dea19ce0a298a439b0f16fb1b23fe052608bf0574a1bee0ef2e7efa",
      "ade6ebca43b6cf55f39c20713401ffeec5fbf653e339b5ad449f70d3b223c718f9a19326"
      "450b68c0c2c8e8d290ba2e7335d3f7d252a7b1ed736d64c743adc3c6"
      "86e95bac37b0e39005bed14a8116f9672c64f680b7599f266e6c80b37ce81179fd8a3a90"
      "ed13cbf70e69cce7af3f7fcda94de9eddfbf736f937ac2ae4b0ffb5e",
      "56add3db885e13f08fbd47c144770ee92b7efcb63f1a3c73f4f8a0bd88a32bd191c54110"
      "bc29ff2f1bd5ef6fafe8ffe246b57f15f004f4d3e915f7d36dc00b2c"
      "ee6161229e07483c97bfdf97fdccfaea9b9006e98dd6eb95f4a6f56a3dd9b9caee7be15f"
      "53aadf979deb37897f15acabe5bf3d49c731c9faf4e7749c97c69774",
      "503e297a1e66f0ec85be187f330579ae5a372de15dc00b7c91cfebde677b00c3f51f00af"
      "029c974771deb2d9227eda5b4f894bd8a59fcbfbee227523ab4b183f"
      "5697d8ffb855bf7b8260f1ddffebfa2788ff9b127d597eeb489ffc7f9e57abdf58f39e15"
      "fece11ff2ae061fffc84f8bdaefe29ec0f5095a418",
      ""};
  nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(&data[0], 3896U, &nameCaptureInfo);
  return nameCaptureInfo;
}

mxArray *emlrtMexFcnProperties(void)
{
  mxArray *xEntryPoints;
  mxArray *xInputs;
  mxArray *xResult;
  const char_T *epFieldName[7] = {
      "QualifiedName",    "NumberOfInputs", "NumberOfOutputs", "ConstantInputs",
      "ResolvedFilePath", "TimeStamp",      "Visible"};
  const char_T *propFieldName[7] = {
      "Version",      "ResolvedFunctions", "Checksum", "EntryPoints",
      "CoverageInfo", "IsPolymorphic",     "AuxData"};
  uint8_T v[216] = {
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
                emlrtMxCreateString("solve_benchmark"));
  emlrtSetField(xEntryPoints, 0, "NumberOfInputs",
                emlrtMxCreateDoubleScalar(5.0));
  emlrtSetField(xEntryPoints, 0, "NumberOfOutputs",
                emlrtMxCreateDoubleScalar(9.0));
  emlrtSetField(xEntryPoints, 0, "ConstantInputs", xInputs);
  emlrtSetField(
      xEntryPoints, 0, "ResolvedFilePath",
      emlrtMxCreateString(
          "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
          "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark.m"));
  emlrtSetField(xEntryPoints, 0, "TimeStamp",
                emlrtMxCreateDoubleScalar(740106.5495023148));
  emlrtSetField(xEntryPoints, 0, "Visible", emlrtMxCreateLogicalScalar(true));
  xResult =
      emlrtCreateStructMatrix(1, 1, 7, (const char_T **)&propFieldName[0]);
  emlrtSetField(xResult, 0, "Version",
                emlrtMxCreateString("26.1.0.3251617 (R2026a) Update 2"));
  emlrtSetField(xResult, 0, "ResolvedFunctions",
                (mxArray *)c_emlrtMexFcnResolvedFunctionsI());
  emlrtSetField(xResult, 0, "Checksum",
                emlrtMxCreateString("T7nBKHN78uQ8AwKuD2lxtG"));
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  emlrtSetField(xResult, 0, "AuxData",
                emlrtMxCreateRowVectorUINT8((const uint8_T *)&v, 216U));
  return xResult;
}

/* End of code generation (_coder_solve_benchmark_info.c) */
