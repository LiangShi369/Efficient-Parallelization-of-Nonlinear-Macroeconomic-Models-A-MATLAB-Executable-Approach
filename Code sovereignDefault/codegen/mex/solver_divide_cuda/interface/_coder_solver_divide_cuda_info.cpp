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
      "789ced553b6f1341109e3bd9c1914870909028afa442a28be8c04994140e966c89d721e7"
      "72b739af7c2fee11dbb469d2c14fa08c44436989869f404901255244"
      "cb1f60edbbbddc0d5ed618c5a160a4d1dee76f77bed9d9f52c287b4d0500d621b54f2be9"
      "b896e17a36aa5036cc2b82915b152aa5759c7f9d8da6efc56418a7c0",
      "335c92afa45e90c49d514022064212f9ce31b1a6cc11754887baa45d04fb13e4ee14a81c"
      "4ca8c977a347cc7e3b7121ec4517193a4590d7e340b0df8aa41ed870"
      "3df03cae375c508fc7bf29d1e3fcb48c61d7a2c7d4225d33b18c721e9f053a1b282ed651"
      "b24c9b8d47ed14a7172a8a43ead9f27d720c027e05e9627dcedfbef8",
      "e9ab9acd2bba6c9ff3d67b20c8a38ef8e7db2fb6eeeb0f0d6a25ed91675a34eaeb033fec"
      "b3a26881119030d25b4668380e7134d377d9953762ea7bda80c63dad"
      "4986bae9b373b2194a0ef506fbd6229f1d20a1b6b7458e8cc489f55f8ff4ae2bbdc737e6"
      "dca7a8de6b509b8e273fbe4ca965e97dfbf0fddd32f5b85d95dedff6",
      "855b02bd3ae2775b3bd6deaba79bcf02d2dcbff7607bd4b1ed97853c5a121d591e20c0cb"
      "8abf5b9bbd7e75cef8e7d766c757110fe85d1d5ff2bbba8a788e791f"
      "e6c6f3b923c8e7cffb7b39cee47d7d1c1a01eb68dd6e416f5c9dad273b5759bfe7f13565"
      "f67ad9b97e94c457d1bc4af6db26f327cc03e66f999f15fc3d73c31b",
      "e56f9ec8f0d9737deebf3345f03d6bdeb880d711cff179362edacf3610c6f34f11af229c"
      "5d8ffcbc65a3053e2470080e90b9be23882164c884b8b4ef96e0dec8"
      "ee25ce5f742f03c97a517c593fe3fffb7f5dff4010ffba445f56dfaae09dfc7f9e97ab5f"
      "5bb0cff2786782f82ae2f1fbf94610f7aade4f6e3f01921ba80d",
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
          "Mex\\code_github\\Code sovereignDefault\\solver_divide_cuda.m"));
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
