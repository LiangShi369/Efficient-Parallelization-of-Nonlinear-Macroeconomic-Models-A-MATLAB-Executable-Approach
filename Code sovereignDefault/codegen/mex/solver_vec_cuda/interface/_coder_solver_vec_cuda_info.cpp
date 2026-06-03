//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// _coder_solver_vec_cuda_info.cpp
//
// Code generation for function 'solver_vec_cuda'
//

// Include files
#include "_coder_solver_vec_cuda_info.h"
#include "emlrt.h"
#include "tmwtypes.h"

// Function Declarations
static const mxArray *c_emlrtMexFcnResolvedFunctionsI();

// Function Definitions
static const mxArray *c_emlrtMexFcnResolvedFunctionsI()
{
  const mxArray *nameCaptureInfo;
  const char_T *data[7]{
      "789ced563d6f134110dd3bd9c19148701a4479255584446144479c38448ac1c89140e2d0"
      "65b9dbd82bdf97ee23b1ff011d94949429295d5222f10728a04fcf1f"
      "60edbb3d9f471ed6588a43c148abbde7b7376f76766ec7443b6a6b84906d92d9d78d6cde"
      "ca713d9f75326f90d790595a9554e6de93fcfb7cb6033f61c324033e",
      "f558f126f7c3343919852c16206271e09e3367ca9c71979d708f75cbe0d90479ad125580"
      "0935796ef6993de8a61e89faf12c42b70c8a7c9c22fbad28f2010de6"
      "03ae937ae18a7ad2ff1d859ee4a7698cac73665b76ead042ff3be27f07f883feb53cc276"
      "f37937c35921c549c4fdde6c7f43c4bfc404e137802ed497fcbdd94f",
      "3ff57c5d79a8f6b96c9e53248e3ae05f1fbcd97f6cee51eea4dd916f3b3c1e9817413410"
      "4931421ab228363b34a2aecb5cc30e3c51ea34e1816f5cf0a46fb4d9"
      "d0b40387593d9e442c0ccca600461c889363bce7efb3339aba8909ce72d723eafa9575a0"
      "da2796ef2d529bce1f7ffd9852ebd23bdeed7d5ba79eb49bd2c3be97",
      "65ebf42ea25707fc83bde3c346b7411f36472f78e3093f6ab55ac1c12c8e8e4247150741"
      "f0bafc3fad2d7e7f7349ff57b716fbd7014f403f1d5f733fdd04bcc4"
      "f21e9626e3b98fc4f3f7f7fbbc9f495f7d19d150dc689655d21b5717eba9ce5575df4bff"
      "86b6f87dd5b97e51f8d7c1ba4afedb23315e91ac4f7f12e3b2343e8b",
      "41fd51d1f33083672ff5e5f89369c8f3a275e312de06bcc457f9bcea7db603305cff0ef0"
      "3ac0797914e7ad9a1d1288defa96b8842df51c93844402d92499db77"
      "07a91b555dc2f8b1bac4fec72dfbdd1304cbeffe5fd73f45fcdf56e8abf25b45fae4fff3"
      "bc5efdda8af7acf47789f8d7010ffbe707c4ef4df54f69bf012287a3",
      "e7",
      ""};
  nameCaptureInfo = nullptr;
  emlrtNameCaptureMxArrayR2016a(&data[0], 3896U, &nameCaptureInfo);
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
                emlrtMxCreateString("solver_vec_cuda"));
  emlrtSetField(xEntryPoints, 0, "NumberOfInputs",
                emlrtMxCreateDoubleScalar(5.0));
  emlrtSetField(xEntryPoints, 0, "NumberOfOutputs",
                emlrtMxCreateDoubleScalar(6.0));
  emlrtSetField(xEntryPoints, 0, "ConstantInputs", xInputs);
  emlrtSetField(
      xEntryPoints, 0, "ResolvedFilePath",
      emlrtMxCreateString(
          "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
          "Mex\\code_gitrepo\\Code sovereignDefault\\solver_vec_cuda.m"));
  emlrtSetField(xEntryPoints, 0, "TimeStamp",
                emlrtMxCreateDoubleScalar(740136.9010185185));
  emlrtSetField(xEntryPoints, 0, "Visible", emlrtMxCreateLogicalScalar(true));
  xResult =
      emlrtCreateStructMatrix(1, 1, 7, (const char_T **)&propFieldName[0]);
  emlrtSetField(xResult, 0, "Version",
                emlrtMxCreateString("26.1.0.3251617 (R2026a) Update 2"));
  emlrtSetField(xResult, 0, "ResolvedFunctions",
                (mxArray *)c_emlrtMexFcnResolvedFunctionsI());
  emlrtSetField(xResult, 0, "Checksum",
                emlrtMxCreateString("OxfFXDUiiL03fpxAK8Xg6D"));
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  emlrtSetField(xResult, 0, "AuxData",
                emlrtMxCreateRowVectorUINT8((const uint8_T *)&v, 216U));
  return xResult;
}

// End of code generation (_coder_solver_vec_cuda_info.cpp)
