/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_solver_interp_parfor_info.c
 *
 * Code generation for function 'solver_interp_parfor'
 *
 */

/* Include files */
#include "_coder_solver_interp_parfor_info.h"
#include "emlrt.h"
#include "tmwtypes.h"

/* Function Declarations */
static const mxArray *c_emlrtMexFcnResolvedFunctionsI(void);

/* Function Definitions */
static const mxArray *c_emlrtMexFcnResolvedFunctionsI(void)
{
  const mxArray *nameCaptureInfo;
  const char_T *data[10] = {
      "789ced59cd6fd348147f493fd40a0a294288451cb2374e152d080a3748f968d99696b4a2"
      "1241aee34c12137becb59df4e3b0873dacd8131c39ee05a9ff05fb27"
      "7044020447ee5c3832893d89f39487dd8f7557a64f9a8c9f7fe3f77befcd649e3f2033bf"
      "98018053e0cbcb5ffc7e22d073419f857ec17826e887912e65244026",
      "10fe22e8358b7b6ccbf315ae9aac7ba5ceeda6b7ba6d3357280e732da3c52a1da4aa1b6c"
      "55375931ac2cb535f36e08ea2a6da87d5ca833ad516c9ae0d4dd9e87"
      "4658e9e66383887718fa05e358703ef038c9b7b54f3e69ff6c049fc43b6974145d64ddb1"
      "155b75aa9613f6e31dc13389ec629e4ce0e962e161d1d7477d3ecfd1",
      "792d3a4ea903818f225ecc2ff1f3bd531fb3c1b870937e7c2678e2e67b87f02387f02777"
      "9ecedd2cdd56f54ab3b8cdb58aee364a9b96d31049c9dbaacd1cb7b4"
      "ac3aaa613023af59a658f2aaa75b3cbfa97bf5fc22db2a6956852935dd73986d950a42c9"
      "bb969841a6d7f81cabaa4dc32b0d9ad329d3e78f5acfa763c64be57d",
      "02c63afd1f5f3f6492e47bbdb0fb67927c528e8aefa0fbc339822f87f0eaadb55b73d6dd"
      "eb2dded86cdc58a92f948bdeb3b99e1fcb113c517e00a12765ff3371"
      "7d5afff7f601e31d8f8857e26587714f31750efdfc69ad27f258faf196e0899b678bf023"
      "87f024d655772ec5624a6abf7bf33ed9faf1717df262927c52d25e3f",
      "7e2f369ae5b587bfe9e505363f53b8bad87c60cfde494ffdf8425c1f378f7f11f673083f"
      "bafa91114f474a991986a9f2c3ab232723e296b8efccb4e26aaad1d6"
      "d35e4786a0bf8e5071c6cdb343f891437812eb2b3c97493f8f245d4fae5d3c735c4fe0f0"
      "ebc9f44275f9d9237dba529b6955975af71fac59f35752f43cf2b3ff",
      "dfe3c689f7d95e9c3e62589aeab1f4d78b6138dce70e83f02387f024d68f3f87feca496b"
      "9df8fbd3719d68cb61d789b51b3b8feceae3a5426ba5b65299b9beba"
      "63adafdf4b4f9d787e62f0f5e3683c65ffd289c1f6b30807f45de8dbf860bb71bf0b51eb"
      "457e17c2ef97a42ef75f29d29f3ae1cfdef7f57e3bedef438f1dd516",
      "3b99a284f8be8d0de68b9a571c1735afaf323fbe9eb23f9bf9b1fd2c1a371c9c9b156d5d"
      "b47f443b2fb07ca85d124de5dbdd5a47099e7bc92f1bd671c3df6586"
      "68aabeb8a8e32c717e88388ff71ecc773934f814c2a3de03c4dd4727918ec73f477816e9"
      "23413f1ab3af80054d288b7ace621dbbe0897bc72668e0f5c52d73b3",
      "dfb82f44c4fd16e1386e19cfaf7b8c5f13b155445c0e4c810e5c44d53ee6a08a68a7c42f"
      "1738876d303b39704181aae879277ebd83ed3583e1e35efefe25f213"
      "377fd47b14397e03e1387ff23f71907502a178760f180ff57d418ebf1f118fd4e3c6d1ad"
      "d7c43a8edad7313fb5af53efcbe2d64d20745937ffeffc1b84fd93d0",
      "2f7bcdef08719f793c9fff2dffd83eef53a4bd5da44bc9221cdf7fbe24ec1ed5fda794ef"
      "2d9742de",
      ""};
  nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(&data[0], 9536U, &nameCaptureInfo);
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
                emlrtMxCreateString("solver_interp_parfor"));
  emlrtSetField(xEntryPoints, 0, "NumberOfInputs",
                emlrtMxCreateDoubleScalar(5.0));
  emlrtSetField(xEntryPoints, 0, "NumberOfOutputs",
                emlrtMxCreateDoubleScalar(6.0));
  emlrtSetField(xEntryPoints, 0, "ConstantInputs", xInputs);
  emlrtSetField(
      xEntryPoints, 0, "ResolvedFilePath",
      emlrtMxCreateString(
          "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
          "Mex\\code_gitrepo\\Code sovereignDefault\\solver_interp_parfor.m"));
  emlrtSetField(xEntryPoints, 0, "TimeStamp",
                emlrtMxCreateDoubleScalar(740136.7703587963));
  emlrtSetField(xEntryPoints, 0, "Visible", emlrtMxCreateLogicalScalar(true));
  xResult =
      emlrtCreateStructMatrix(1, 1, 7, (const char_T **)&propFieldName[0]);
  emlrtSetField(xResult, 0, "Version",
                emlrtMxCreateString("26.1.0.3251617 (R2026a) Update 2"));
  emlrtSetField(xResult, 0, "ResolvedFunctions",
                (mxArray *)c_emlrtMexFcnResolvedFunctionsI());
  emlrtSetField(xResult, 0, "Checksum",
                emlrtMxCreateString("ETdFDBO8HUqOhnVovgqu9E"));
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  emlrtSetField(xResult, 0, "AuxData",
                emlrtMxCreateRowVectorUINT8((const uint8_T *)&v, 216U));
  return xResult;
}

/* End of code generation (_coder_solver_interp_parfor_info.c) */
