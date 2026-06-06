//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// _coder_solver_divide_cuda_info.cpp
//
// Code generation for function 'solver_divide_cuda'
//

// Include files
#include "_coder_solver_divide_cuda_info.h"
#include "emlrt.h"
#include "tmwtypes.h"

// Function Declarations
static const mxArray *c_emlrtMexFcnResolvedFunctionsI();

// Function Definitions
static const mxArray *c_emlrtMexFcnResolvedFunctionsI()
{
  const mxArray *nameCaptureInfo;
  const char_T *data[6]{
      "789ced55bf6fd340147eb692924ab4b448480c0c1e9990d82a36485bb5434aa444e29751"
      "6aec6b728a7f71b6db8495850dfe04d82ab13066e44f606480bd3bff"
      "0097d8e7da0f1f17829a32f0a4a7f397efee7defde5dde81b6dfd200601d52fbb2928e6b"
      "19dec8461dca86794d320aab43adb44ef06fb3d10efc988ce214f896",
      "47f295d40f93b83b0e49c4012351e01e1367c61c519774a9473a45703045de6e81cac194"
      "9a7e3707c41e76120fd8203acfd02d82bc1e8792fdd614f5c086eb81"
      "e709bdd1827a22fe75859ee06765643d871e5387f4ecc4b1ca797c95e86ca2b85847cb32"
      "6d351f76529c5ea82866d4efabf7293048f815a48bf5057ff3fca7ef",
      "7a36afe8aa7dce5bef11c280e609fed9cef3ed7be6038b3a4967ecdb0e8d86e649c086bc"
      "28466885844566db6296eb12d7b0038f5f792ba6816f9cd07860b4c8"
      "c8b4037e4e7d1a331206669303230af80912daf7b7c99195b8b1f9eb99def154f7f8da9c"
      "fb94d57b0d1ab3f1f58f6f336a597a70ebc3c7a5ea6576597a7fdb17",
      "6e48f43610bfd7de75f65f3dd97a1a92d6c1ddfb3be36ebfffb290475ba1a3ca03247859"
      "f1f71ad5eb57e78c7f76a53abe8e7840efeae482dfd555c40b2cfab0"
      "3091cf6d493e7fdedfcb71a6efeb236685bca3f57a05bd49bd5a4f75aeaa7e2fe21b5af5"
      "7ad5b97e56c4d7d1bc5af6db16f7c7dc43eeefb99f16fc1377cb1fe7",
      "6f9eccf0d90b7de1bf334df25d356f52c0eb8817f82c1b17ed679b08e3f96f10af239c5d"
      "8ffcbc55a3030124f0025c20737d471003e3c886b8b4efb6e4dea8ee"
      "25ce5f762f43c57a597c553f13fffb7f5dff5012ffaa425f55dfbae49dfc7f9e17abdf58"
      "b0cf8a78a792f83ae2f1fbf94e12f7b2de4f613f0100b1a6b9",
      ""};
  nameCaptureInfo = nullptr;
  emlrtNameCaptureMxArrayR2016a(&data[0], 3904U, &nameCaptureInfo);
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
                emlrtMxCreateString("solver_divide_cuda"));
  emlrtSetField(xEntryPoints, 0, "NumberOfInputs",
                emlrtMxCreateDoubleScalar(5.0));
  emlrtSetField(xEntryPoints, 0, "NumberOfOutputs",
                emlrtMxCreateDoubleScalar(6.0));
  emlrtSetField(xEntryPoints, 0, "ConstantInputs", xInputs);
  emlrtSetField(
      xEntryPoints, 0, "ResolvedFilePath",
      emlrtMxCreateString(
          "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
          "Mex\\code_gitrepo\\Code sovereignDefault\\solver_divide_cuda.m"));
  emlrtSetField(xEntryPoints, 0, "TimeStamp",
                emlrtMxCreateDoubleScalar(740136.7960185185));
  emlrtSetField(xEntryPoints, 0, "Visible", emlrtMxCreateLogicalScalar(true));
  xResult =
      emlrtCreateStructMatrix(1, 1, 7, (const char_T **)&propFieldName[0]);
  emlrtSetField(xResult, 0, "Version",
                emlrtMxCreateString("26.1.0.3251617 (R2026a) Update 2"));
  emlrtSetField(xResult, 0, "ResolvedFunctions",
                (mxArray *)c_emlrtMexFcnResolvedFunctionsI());
  emlrtSetField(xResult, 0, "Checksum",
                emlrtMxCreateString("Mc4BCn2eBXBG7loPSvatZC"));
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  emlrtSetField(xResult, 0, "AuxData",
                emlrtMxCreateRowVectorUINT8((const uint8_T *)&v, 216U));
  return xResult;
}

// End of code generation (_coder_solver_divide_cuda_info.cpp)
