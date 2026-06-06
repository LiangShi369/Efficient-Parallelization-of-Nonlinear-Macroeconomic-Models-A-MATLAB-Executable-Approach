/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_solver_bf_parfor_info.c
 *
 * Code generation for function 'solver_bf_parfor'
 *
 */

/* Include files */
#include "_coder_solver_bf_parfor_info.h"
#include "emlrt.h"
#include "tmwtypes.h"

/* Function Declarations */
static const mxArray *c_emlrtMexFcnResolvedFunctionsI(void);

/* Function Definitions */
static const mxArray *c_emlrtMexFcnResolvedFunctionsI(void)
{
  const mxArray *nameCaptureInfo;
  const char_T *data[6] = {
      "789ced56cd6ed340101e5b4949255ad20be2e82327847ae1e748520a8794482e028451ea"
      "3a9bc48affbadeb4c90b54dce01138f6c831478e3c024870ef9d17c0"
      "89bd8933cab02652530e8cb41a7f9eddf96667c73b06ed794303806d48e5eb46aab7325c"
      "cdb40e8b82ed1aa1a594a1b4b04eda3f64da0903c186220581edb3d9",
      "4a378806e27014b138019cc5a177cada534bc7f5d8a1eb33330f0e26c87f9a33cdc0c434"
      "79aef598d337073ef05e3c8fd0cb83593e8e88fd9614f9c082f381e7"
      "49be68453e8dc0984fea691a79ebb8d38a6cde09b9e4ff46f8df41feb07f2d8bb0517b61"
      "a6382da4587037e8cef73724fc4b0c847d03f1627e69bf337ff553cf",
      "e6e5876a9f45f37c4ac45145f6b77befea8fad27b6db1e98a3c069bb71df3a0b793f498a"
      "11d911e3b1d5b4b9ed79cc339cd04f4add166e181867aee8190d36b4"
      "9cb0cd5a5d57701685562d01461c2627c7dc6e50671d7be0090b9fe53d5f5dbfb70aee93"
      "caf71654a6fafcd78fa9695d7cd1f737c13af9a45c171ff5bd14add3",
      "db045f15d963e1d4f74ecc5d73547bf920e0e6ee7ee3d1fdfd791c4d058f2a0e20f0bafc"
      "3fab2c5fbf59d0ffe58de5fe756407d44fc757dc4f37915d62790f4b"
      "91f1dc25e2f9fbfb7dd1cfa4afbee27694dc68ad568e6f5c5ecea73a57d57d2ffd1bdaf2"
      "f5aa73fda2f0afa379a5ecddc364bc86b44f7f4ac6456e7c4e861d8c",
      "663d8f127cf6925f8e3f89463c2f9b37cee16d6497f832d3abde673b08e3f9ef915d4738"
      "2b8fd979ab741b4218c03178c00a3dc7208027c801b1b0ef265137aa"
      "bac4f1537549fdc715fdee81c0f2bbffd7f98f08ff3715fcaafc96893ef9ff3caf96bfb2"
      "e23d2bfd5d10fe7564c7fdf323e1f7bafaa794df2d9da5b8",
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
                emlrtMxCreateString("solver_bf_parfor"));
  emlrtSetField(xEntryPoints, 0, "NumberOfInputs",
                emlrtMxCreateDoubleScalar(5.0));
  emlrtSetField(xEntryPoints, 0, "NumberOfOutputs",
                emlrtMxCreateDoubleScalar(6.0));
  emlrtSetField(xEntryPoints, 0, "ConstantInputs", xInputs);
  emlrtSetField(
      xEntryPoints, 0, "ResolvedFilePath",
      emlrtMxCreateString(
          "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
          "Mex\\code_gitrepo\\Code sovereignDefault\\solver_bf_parfor.m"));
  emlrtSetField(xEntryPoints, 0, "TimeStamp",
                emlrtMxCreateDoubleScalar(740136.8097337963));
  emlrtSetField(xEntryPoints, 0, "Visible", emlrtMxCreateLogicalScalar(true));
  xResult =
      emlrtCreateStructMatrix(1, 1, 7, (const char_T **)&propFieldName[0]);
  emlrtSetField(xResult, 0, "Version",
                emlrtMxCreateString("26.1.0.3251617 (R2026a) Update 2"));
  emlrtSetField(xResult, 0, "ResolvedFunctions",
                (mxArray *)c_emlrtMexFcnResolvedFunctionsI());
  emlrtSetField(xResult, 0, "Checksum",
                emlrtMxCreateString("9CoHeZkh08fomCA6BgYQx"));
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  emlrtSetField(xResult, 0, "AuxData",
                emlrtMxCreateRowVectorUINT8((const uint8_T *)&v, 216U));
  return xResult;
}

/* End of code generation (_coder_solver_bf_parfor_info.c) */
