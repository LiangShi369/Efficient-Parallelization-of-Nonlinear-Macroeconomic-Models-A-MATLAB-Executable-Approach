/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_solver_bruteforce_info.c
 *
 * Code generation for function 'solver_bruteforce'
 *
 */

/* Include files */
#include "_coder_solver_bruteforce_info.h"
#include "emlrt.h"
#include "tmwtypes.h"

/* Function Declarations */
static const mxArray *c_emlrtMexFcnResolvedFunctionsI(void);

/* Function Definitions */
static const mxArray *c_emlrtMexFcnResolvedFunctionsI(void)
{
  const mxArray *nameCaptureInfo;
  const char_T *data[6] = {
      "789ced56bf6f133114f69d92924ab484018981e1d898983a548c24547408444a25101c4a"
      "2f774e62e57ec9e76b13762436f813183b3266833f811109d8fb67e0"
      "24f7ae97c71987a0a60c3cc9b2bffbecf73d3f3bcf21c661cb2084ec92857dd95af43b19"
      "ae67bd49960df386a207ab92cad23ae0df65bd1b85828ec502844e40",
      "f3952c8c53713489692201a749e49f506fcef4994f8f58403b45f0648682830295831935"
      "1b3786d41d75d280f0617211a15f04793e8e15fbad68f2810de703cf"
      "03bdf19a7ae0ffa6460ff8791a79b7c75341fb117721df10c757850eac07c33a461669ab"
      "f1b4b3c08b0b9508cec2817e9f808982df42ba581ff8db179f7e98d9",
      "bc62d3ed73d57c9f28e2a823fee5a357cd07f6438779696712ba1e4b46f669c447322956"
      "ecc4942776dbe18eef53df72a3405e7947b028b44e99185a2d3ab6dd"
      "c8a3dd814469cf6ec8b19544f200291b844dda77525fd8bf1ce9fd407f8f6facb84f55be"
      "77486dde7ffaf67d4e6d4aeff59bbb7736a90776557a7f5b176e29f4",
      "ea881fb45e8c9b113bdcefb78391bf17d383c4dd2bc4d1d6e8e8e2200abc29ff8f6be5eb"
      "b757f47f7eaddcbf897882ded5e925bfabdb88070c75180ce2b9a788"
      "e7cfebfbb29fd9fbfa8c3bb1ac68dd6e416f5a2dd7d39dabaede837fcb285faf3bd7cf1a"
      "ff269a57c9beedcbf65cb658b60fb29d15da47d99c7092bf792ac367",
      "0ffad07e6786625c366f5ac0bb88077c9ef5ebd633d5ff0e98ff16f126c2d9f5c8cf5bd7"
      "7b242229e9119fd095c60911844be412b1b4efb6e2dee8ee258e5f75"
      "2f63cd7a957f5d3d83dffdbfae7facf07f5da3afcb6f55f14efe3fcfcbd5afad5967c1df"
      "99c2bf8978fc7ebe57f8bdaaf713ec27fc8ba607",
      ""};
  nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(&data[0], 3904U, &nameCaptureInfo);
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
                emlrtMxCreateString("solver_bruteforce"));
  emlrtSetField(xEntryPoints, 0, "NumberOfInputs",
                emlrtMxCreateDoubleScalar(5.0));
  emlrtSetField(xEntryPoints, 0, "NumberOfOutputs",
                emlrtMxCreateDoubleScalar(6.0));
  emlrtSetField(xEntryPoints, 0, "ConstantInputs", xInputs);
  emlrtSetField(
      xEntryPoints, 0, "ResolvedFilePath",
      emlrtMxCreateString(
          "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
          "Mex\\code_github\\Code sovereignDefault\\solver_bruteforce.m"));
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
                emlrtMxCreateString("k5W1j9qiy4KpsEzYPjKQfC"));
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  emlrtSetField(xResult, 0, "AuxData",
                emlrtMxCreateRowVectorUINT8((const uint8_T *)&v, 216U));
  return xResult;
}

/* End of code generation (_coder_solver_bruteforce_info.c) */
