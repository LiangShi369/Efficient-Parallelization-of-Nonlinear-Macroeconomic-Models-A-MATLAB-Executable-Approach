/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_solver_divide_parfor_info.c
 *
 * Code generation for function 'solver_divide_parfor'
 *
 */

/* Include files */
#include "_coder_solver_divide_parfor_info.h"
#include "emlrt.h"
#include "tmwtypes.h"

/* Function Declarations */
static const mxArray *c_emlrtMexFcnResolvedFunctionsI(void);

/* Function Definitions */
static const mxArray *c_emlrtMexFcnResolvedFunctionsI(void)
{
  const mxArray *nameCaptureInfo;
  const char_T *data[7] = {
      "789ced55cd6ed340105e5b4949255a52a9421c38f806e2c0ad1270a369ab727089485590"
      "304ab7f62659c57f5adb6dc213708347e0d823c7dce019385502248e"
      "7d0c36b1d771465e360435e5c048a3ddcfb33bdfeccc7a1669cf4c0d21b48e52b95849c7"
      "b50cd7b35147b302ed9a6414524595997dc2fe3e1bedc08fc9204e81",
      "8f3d92efa47e98c487c390441c301205ee297126960e75c921f548ab080ec6c8db2b9872"
      "30368de78d1eb1fbadc443ac174d23748b20cfc7b1e4bc15453ea0c0"
      "7cc075826fb0209ff0bfa9e013f6491a59dba1a7d421ed10b34ec08a715c487836805fc8"
      "a365919a8de7ad14a7172a8a19f5bbea730a8c24f615c00bf985fdce",
      "f4d30f3d5b575411c74f09cfbcf91e4ae2a803fbebdd373b4fac6d4c9da435f46d87467d"
      "eb2c607d9e1423c4216191d5c40cbb2e710d3bf0f895c7310d7ce38c"
      "c63dc32403cb0e789dba1c25275683cf8d28e00524b4ebef900e4edcd82a2be9432fe357"
      "dde75b739e5796f735549b8c9fbf7dd796c9f7f5c1bdbbcbe413725d",
      "7c7fdb1f6e4bf8eac0fed88cb7064f5fbc35f7b60607cefef6d1101ff577a77134153caa"
      "3890042fcbff7ead7cffea9cfe2f6f94fbd7811d81f77574c5efeb2a"
      "b00b2cfab11011cf7d493c7fdee767fd8cdfd9970c87bcb3b5db05be51b59c4f555755df"
      "17fe0dad7cbfaaae5f14fe75b0ae927d7bc4f515d790eb47aee705fd",
      "c415fbc3fced9309acbde017fa3bd124f3b275a3025e0776812fb371d17eb601305cff0e"
      "d87580b3eb91d75b353a2840093a412e2273cd231423c6918de29973"
      "3725f746752f61fcb27b192af6cbfcabfa99f8efff75fe6389ff9b0a7e557eab9277f27f"
      "3daf96bfb6609f15fece25fe756087efe70789dfeb7a3f85fc022ed8",
      "a872",
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
                emlrtMxCreateString("solver_divide_parfor"));
  emlrtSetField(xEntryPoints, 0, "NumberOfInputs",
                emlrtMxCreateDoubleScalar(5.0));
  emlrtSetField(xEntryPoints, 0, "NumberOfOutputs",
                emlrtMxCreateDoubleScalar(6.0));
  emlrtSetField(xEntryPoints, 0, "ConstantInputs", xInputs);
  emlrtSetField(
      xEntryPoints, 0, "ResolvedFilePath",
      emlrtMxCreateString(
          "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
          "Mex\\code_github\\Code sovereignDefault\\solver_divide_parfor.m"));
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
                emlrtMxCreateString("29KHNlTgKZuXyXx6c3CDjG"));
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  emlrtSetField(xResult, 0, "AuxData",
                emlrtMxCreateRowVectorUINT8((const uint8_T *)&v, 216U));
  return xResult;
}

/* End of code generation (_coder_solver_divide_parfor_info.c) */
