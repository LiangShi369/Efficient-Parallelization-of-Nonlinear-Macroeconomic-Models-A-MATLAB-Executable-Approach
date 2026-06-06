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
      "789ced55cd6e133110f6ae92924ab4a452853870d81b8803b74ac08da6adca614b44aa82"
      "c4a2d4ec3a8995fd93d769933e013778048e3d72cc0d9e81532540e2"
      "d8c7c0c9ae93cd688d4350530e8c34f27e197bbef1cc648c8c67b681105a47a95caca4eb"
      "5a86abd96aa259817643b14a29a3d2cc39697f9fad6e1472d2e72908",
      "714026276918f7f8e1202689008c24917f42bcb1a5457d724803d2c88383110af672a609"
      "189946dfb50e71bb8d5e8058279946e8e7c1241fc78afb9634f98002"
      "f301f749befe827cd2ffa6864fdac769644d8f9e508f3463cc5a11cbc771a1e0d9007e21"
      "8f91456ad79e37529c3654c2190ddbfa7b4a8c14f615c00bf9a5fdce",
      "f4a71f66b62faf328e9f0a9e79f37da688a30aecaf77dfec3c71b631f57a8d41e87a34e9"
      "3aa711eb8aa458318e094b9c3a66d8f7896fb951205a1e731a85d629"
      "e51dcb267dc78d449dda943312474e4d002b894405096d873ba4857b3e778a6afa3048f9"
      "75fd7c6bcefbaaf2be862ae3f5f3b7efc632f9be3eb87777997c52ae",
      "8bef6fe7c36d055f15d81fdb7cabfff4c599bdb7d53ff0f6b78f06f8a8bb3b8da3aee1d1"
      "c581147859fef72bc5e757e7f47f79a3d8bf09ec08bcafc32b7e5f57"
      "815d62398fa5c878ee2be2f9f3393feb67f4cebe64381693add9ccf10dcbc57cbabaeae6"
      "bef46f19c5e77575fda2f16f827da5ecb747425f098d857e147a9ed3",
      "4f42713898bc7d2a81b597fc527f2786e2bb68df3087d7815de2cb6c5d749e6d000cf7bf"
      "037613e0ac3d26f5d6ad1e8a500fbd453e22737d27882326908bf8cc"
      "bdeb8abed1f5258c5fd597b1e6bccabf6e9ec9fffdbfce7facf07f53c3afcb6f59f14efe"
      "afe7d5f257169cb3d2dfb9c2bf09ecf0fdfca0f07b5defa7945f970e",
      "a8eb",
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
          "Mex\\code_gitrepo\\Code sovereignDefault\\solver_divide_parfor.m"));
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
                emlrtMxCreateString("29KHNlTgKZuXyXx6c3CDjG"));
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  emlrtSetField(xResult, 0, "AuxData",
                emlrtMxCreateRowVectorUINT8((const uint8_T *)&v, 216U));
  return xResult;
}

/* End of code generation (_coder_solver_divide_parfor_info.c) */
