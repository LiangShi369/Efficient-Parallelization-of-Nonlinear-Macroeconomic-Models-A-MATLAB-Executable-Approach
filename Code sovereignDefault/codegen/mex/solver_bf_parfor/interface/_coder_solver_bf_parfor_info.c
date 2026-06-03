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
      "789ced56bd8ed340101e5bc99193b823d7204a9754085dc34f49721c1481483e0408a39c"
      "e36c2e56fcc7dae692174074f008945752a6a4e4114082fe7a5e804d"
      "ec4d9c518635912e47c148abd92fb33bdfecec7827a03d6e6900b00b997cddcaf44e8eeb"
      "b9d66159b05d23b4942a5496f649fb875c3b6190b0519281c0f6d97c",
      "a71b446972348e582c006771e8bd65bd99a5ef7aecc8f59959044fa6c87f5830cdc1d434"
      "9d3706cc199aa90f7c102f22f48a609e8f63e2bc15453eb0e07ce075"
      "922f5a934f2330e6937a9646dee9f63b91cdfb2197fcdf08ff7bc81ff6afe511b61a4fcd"
      "0c67851427dc0d4e16e71b11fe2506c2be857831bfb4df58fcf453cf",
      "d71587ea9c65f39c1271d491fdd5c1ebe67deb81edf652731c383d371e5aa7211f8aa418"
      "911d311e5b6d9bdb9ec73cc3097d51ea76e2868171ea2603a3c54696"
      "13f658e744a0b46b35c4dc88437171cc3d099aac6fa75e62e1abbce583ba7eaf953c2795"
      "ef1da8cdf4bb5f3f66a64df145df5f069be49372597cd4f752b64eaf",
      "137c75648f13a779f0c6dc37c78d6777026eee1fb6eedd3e5cc4d156f0a8e200026fcaff"
      "a3daeafddb25fd9f5f59ed5f477640fd7472c1fd741bd92596efb014"
      "19cf4d229ebf7fdf97fd4cfbea736e47e245eb740a7c93ea6a3ed5bdaade7be9dfd056ef"
      "57ddeb17857f1dadabe4bfdd15e305647dfa93186785f1590c3b18cf",
      "7b1e25f8ee25bf1c7f128d98af5a3729e05d6497f83cd7ebbe677b08e3f5ef915d47382f"
      "8ff97dab740f42d15bbbe0012b358f21012e9003c9d2b9db44dda8ea"
      "12c74fd525f53faeec770f0496dffdbfce7f4cf8bfaae057e5b74af4c9fff779b1fcb535"
      "df59e9ef8cf0af233bee9f1f09bf97d53fa5fc06c773a53f",
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
          "Mex\\code_github\\Code sovereignDefault\\solver_bf_parfor.m"));
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
