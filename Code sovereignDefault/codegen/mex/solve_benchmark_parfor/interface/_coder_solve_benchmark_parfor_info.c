/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_solve_benchmark_parfor_info.c
 *
 * Code generation for function 'solve_benchmark_parfor'
 *
 */

/* Include files */
#include "_coder_solve_benchmark_parfor_info.h"
#include "emlrt.h"
#include "tmwtypes.h"

/* Function Declarations */
static const mxArray *c_emlrtMexFcnResolvedFunctionsI(void);

/* Function Definitions */
static const mxArray *c_emlrtMexFcnResolvedFunctionsI(void)
{
  const mxArray *nameCaptureInfo;
  const char_T *data[6] = {
      "789ced55416fd3301476a27674121bdb0581c421472424a421211047ba55ec5056299586"
      "4450e6266e1b358983936c2dfc016ef01338eec8b137f8194880c471"
      "3f03b78dd3f429c65da5751c78d293fde5d9ef7b7e7e7946da615343086da3997cdf988d"
      "5b19dec9461d2d0ab46b925148155516f609fbc76c74689890613203",
      "210e48bed30ba334698f221273c0484cfd53e24e2d5dcf276d2f206611bc9ca0a05130e5"
      "60629acceb7de20ccc3440ac1fcf23f48b20cfc789e4bc15453ea0c0"
      "7cc075826fb8229ff07f5bc127ecd334da1d123afd00b3811d61d6a5ac5007129e5de017"
      "f26859a4cdfa9139c3b3828a13e6853df539054612fb06e085fcc27e",
      "67fee9979ead2baa88e3b78467d97cbf97c4b103ecaf0fdeec3fb39e63cf4dcd51e8b85e"
      "3cb0ce281bf0a418118e088bad1666d8f7896f3834e0258f138f86c6"
      "9997f48d26195a0e7589dde328ed58753e37627a4a18f17ae13ee9e2d44facf22b7d184c"
      "f955f57c6bc9f3caf2be856ad3f1eb8f9fda3af91ed0bbf7d6c927e4",
      "baf8d6d51ff68edfb951fd51d81e1d1c1e997ef2e46d63ef71631e474bc1a38a0349f0ba"
      "fcbfa895efdf5cd2ffc58d72ff3ab023f0be8eaff87ddd047681453f"
      "1622e2b92f89e7f27d7ed1cfe49d3d6638e29dcdb60b7ce36a399fea5e557d5ff837b4f2"
      "fdaa7bfda6f0af837595ecdb53aeafb8465c3f733d2fe817ae381ce5",
      "6f9f4ce0dd0b7ea17f134d322f5b372ee06d6017f8221b57ed67bb00c3f51f805d07382b"
      "8ffcbe55a38b284a5107f9885c7a5e3c774b5237aaba84f1cbea3252"
      "ec97f957f533f1dfffebfc2712ff3715fcaafc5625efe4fffbbc5afeda8a7d56f83b97f8"
      "d7811dbe9f9f247eafebfd14f20734b7a932",
      ""};
  nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(&data[0], 3912U, &nameCaptureInfo);
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
                emlrtMxCreateString("solve_benchmark_parfor"));
  emlrtSetField(xEntryPoints, 0, "NumberOfInputs",
                emlrtMxCreateDoubleScalar(5.0));
  emlrtSetField(xEntryPoints, 0, "NumberOfOutputs",
                emlrtMxCreateDoubleScalar(9.0));
  emlrtSetField(xEntryPoints, 0, "ConstantInputs", xInputs);
  emlrtSetField(
      xEntryPoints, 0, "ResolvedFilePath",
      emlrtMxCreateString(
          "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
          "Mex\\code_github\\Code sovereignDefault\\solve_benchmark_parfor.m"));
  emlrtSetField(xEntryPoints, 0, "TimeStamp",
                emlrtMxCreateDoubleScalar(740106.5495023148));
  emlrtSetField(xEntryPoints, 0, "Visible", emlrtMxCreateLogicalScalar(true));
  xResult =
      emlrtCreateStructMatrix(1, 1, 7, (const char_T **)&propFieldName[0]);
  emlrtSetField(xResult, 0, "Version",
                emlrtMxCreateString("26.1.0.3203278 (R2026a)"));
  emlrtSetField(xResult, 0, "ResolvedFunctions",
                (mxArray *)c_emlrtMexFcnResolvedFunctionsI());
  emlrtSetField(xResult, 0, "Checksum",
                emlrtMxCreateString("ejxcrm4K8eLp3DQy3CEPJB"));
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  emlrtSetField(xResult, 0, "AuxData",
                emlrtMxCreateRowVectorUINT8((const uint8_T *)&v, 216U));
  return xResult;
}

/* End of code generation (_coder_solve_benchmark_parfor_info.c) */
