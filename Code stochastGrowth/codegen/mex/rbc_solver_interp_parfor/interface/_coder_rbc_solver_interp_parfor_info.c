/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_rbc_solver_interp_parfor_info.c
 *
 * Code generation for function 'rbc_solver_interp_parfor'
 *
 */

/* Include files */
#include "_coder_rbc_solver_interp_parfor_info.h"
#include "emlrt.h"
#include "tmwtypes.h"

/* Function Declarations */
static const mxArray *c_emlrtMexFcnResolvedFunctionsI(void);

/* Function Definitions */
static const mxArray *c_emlrtMexFcnResolvedFunctionsI(void)
{
  const mxArray *nameCaptureInfo;
  const char_T *data[10] = {
      "789ced594b6fdb46105ec98e61c38fa897c0cd89bde564a479344e80024d15c7490a39b6"
      "e5c24eaa82a6c895459b2f2f295b4acf418ef1b1c71cfd17726aff41"
      "7d2cd02430720a72ec31a7ac248e4c0d3421e3871c301e60bd1c7ecbf96666573b4b9365"
      "ee17328cb109d6969d6fdbfd78a8e7c23ecbba05e399b01f443ac8b9",
      "101947f8f3b0d75d27e0f5a0ad389acd3b4f9a8e570b961a1ef7a522b8ef5a5bdc682115"
      "d3e24ba6cd8b5165aea9d9772350476942cdeb7c95eb1bc59acd44d5"
      "3ff0d08a2a9d7cac12f10eb26ec138169c0f3c0ef8ea87e403fb93317c808bb2aeb65229"
      "5453665e78aaa7898a2bc08f7f099e6f905dcc93093d2de41f16dbfa",
      "504bf703613a6bf17182ce087c08f1627ec0270f6ebdce86e3a20dfcd8277892e6fb0fc2"
      "8f1cc27f9bf9fdceadd2cf9a69d48a0d47374c7fa3b4ed8a0d9914c5"
      "d33c2efcd2bc2634cbe296a2bbb65cf25a60ba8eb26d0655a5c0eb25dd35b8ba26b55ab9"
      "9497d78a1fb87a55f38359e16e07d51235a153768b3f6e3d9f4f182f",
      "95f77136dceafffaef55a69f7c3fbe79aff4930fe4b4f88eba3f5c20f872085fbe7afb9a"
      "53e135c3fa4137671f37ee5cbfb1c9ef1ef8311fc313e70723f47ed9"
      "df279e4febefde3b62bc2331f1025e16dc0954db74423dedf504aec18f3d8227699e2dc2"
      "8f1cc24f7c5d7526b2bd90d25a3f3e3cdd57fac90792f6faf140bfbc",
      "bcb92ed7e7e2e22fd3f542bdfce8e6b5dbf9f4d48f77c4f349f3f88cb09f43f829d68f8c"
      "7c3d52cbdcb26ccd39b63a721ee9386ec0dbbe7caffaba66a95b5752"
      "5f470658771da1e24c9a6741f89143f889af2f3491e1b124b5f5e4e5d85ba59f7c2069af"
      "27c6cc9ad8bc3ef770beb8d930ee17aeeabab6fe2045ef235ffbef3d",
      "699c789f3d88b38d58aeae053cfdef1d83ec78df3b4cc28f1cc24f7cfdb42710964d6aeb"
      "c4ffff9cd589a61c779df8f5e69345afb23c97df5a585b30aedc587a"
      "e2aeaccca6a74eac8ef67e7e048d27ed8ff6b69f453843df85f6467adb4dfa5d885a2ff0"
      "5d08ff7f0974d87f41c09f9f087f3e7f5fefb6d3fc3eb42c344fee64",
      "aa1ae1db1beecd1737af382e6a5effcc7cfa79cafe74e6d3f6b368dc60786f5ab615d95e"
      "c836293125d22ec9a6398d4eada304cf3df043c33a6ef8bbcc004dd5"
      "1517759d25ee0f10f7f1de83f92e47064f201cf4bfc3feb0fbe8580fbfa2e357119e453a"
      "c43644f40673598d9599c538791d8d07623e6c3c1763e2d943388e07",
      "fcfe2e262edceb321e43c622d8943cab382c685d3b4c93114ec9bf8ec41dd660762b6e9f"
      "a9ac227b473e17c8f14d2c49a6e80ca6753dec1e311eeabb018cbf17"
      "130fe849e3e8d461621dc7edd7989fdaafa9ff8325ad878cd0a11e7ee9fcab84fd31d62d"
      "9f9bdf73c4f9f16c3e4f967ff890e70fb0b78b74902cc2f1b97287b0",
      "7b5ae74a908fadd34168",
      ""};
  nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(&data[0], 9496U, &nameCaptureInfo);
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
  xInputs = emlrtCreateLogicalMatrix(1, 3);
  emlrtSetField(xEntryPoints, 0, "QualifiedName",
                emlrtMxCreateString("rbc_solver_interp_parfor"));
  emlrtSetField(xEntryPoints, 0, "NumberOfInputs",
                emlrtMxCreateDoubleScalar(3.0));
  emlrtSetField(xEntryPoints, 0, "NumberOfOutputs",
                emlrtMxCreateDoubleScalar(2.0));
  emlrtSetField(xEntryPoints, 0, "ConstantInputs", xInputs);
  emlrtSetField(
      xEntryPoints, 0, "ResolvedFilePath",
      emlrtMxCreateString(
          "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
          "Mex\\code_github\\Code stochastGrowth\\rbc_solver_interp_parfor.m"));
  emlrtSetField(xEntryPoints, 0, "TimeStamp",
                emlrtMxCreateDoubleScalar(740106.5495949074));
  emlrtSetField(xEntryPoints, 0, "Visible", emlrtMxCreateLogicalScalar(true));
  xResult =
      emlrtCreateStructMatrix(1, 1, 7, (const char_T **)&propFieldName[0]);
  emlrtSetField(xResult, 0, "Version",
                emlrtMxCreateString("26.1.0.3251617 (R2026a) Update 2"));
  emlrtSetField(xResult, 0, "ResolvedFunctions",
                (mxArray *)c_emlrtMexFcnResolvedFunctionsI());
  emlrtSetField(xResult, 0, "Checksum",
                emlrtMxCreateString("cho82oObp6YdYR5mOW1JJC"));
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  emlrtSetField(xResult, 0, "AuxData",
                emlrtMxCreateRowVectorUINT8((const uint8_T *)&v, 216U));
  return xResult;
}

/* End of code generation (_coder_rbc_solver_interp_parfor_info.c) */
