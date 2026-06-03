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
  const char_T *data[6]{
      "789ced564b6fd340101e5b4949255ad20be2c0c1474e154848148e7d01aad2544a05088c"
      "52d7de26267ee1471eff801bfc048e3d728cb8c0919f8004dcfb33d8"
      "c45ec71965d810a92907465aed7e99ddf96667c73301e5694d01807548e5db4a3aaf65b8"
      "9acd2a4c0bd62bc42ca40ca5a97342ff3e9b4ddf8b593f4e8167b82c",
      "3f697b41121f0f02167110b2c877bacc1a6bce6c871ddb2e6b14c1e108b9fb05550e46aa"
      "d17aa7cdcc4e2371216c47130f9d22c8e37142dcb7248907161c0fbc"
      "4ff0050bf209fb37247c423f0e63d8ec32b369269691f37f27ec6f207bd8be927958dba9"
      "37529c26521487b6d79adcaf4fd8171808fd0ae2c5fc427f6bf2d32f",
      "35db571cb27bce1be798f0a38af4aff65eef3ed2b70ddb4a1a03cfb4eca8a3f7fcb0c383"
      "a20546c0c2483f3242c37198a399becb53dd886ddfd37a76dcd66aac"
      "af9bbec59a2d8e92537d87afb5c8e70fc7ec96b7cbce8cc48975f4949b2e803c7f451ec8"
      "ee49c57b0d2ae3f9cb8f9fca32f93e3fdbbcbd4c3e2157c5477d2ff3",
      "e6e94d82af8af42f1f9becf0edd69beec3fa83debdfd83fb770fea9ded891f47121e991f"
      "40e065d97f52997d7e754efb17d766db57911e503f1d5e723f5d457a"
      "81451d1622fcb943f8f3f7f57ddacea8af3e0f8d8057b466b3c0372ccfe693bdabacde0b"
      "fb9a32fbbcec5dbf4aecab685f29fb6d8b8f1790f6e98f7c9c17c627",
      "3e0c6f90f73c4af0db0b7e31fe240ab19eb56f58c0eb482ff045362f5acf3610c6fbdf21"
      "bd8a70961ef97bcb660b7c48e0141c6073ad23de89438eccac23e7f5"
      "86c81b595e62ffa9bca4fec7cdfbdd0381c577ffaff39f10f6af4bf865f12d137df2ff7b"
      "5e2e7f65c13a2bec9d13f655a4c7fdf30361f7aafaa790df939ea38e",
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
          "Mex\\code_github\\Code sovereignDefault\\solver_vec_cuda.m"));
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
                emlrtMxCreateString("QA0BPnyqrtukbp7ETQGnyF"));
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  emlrtSetField(xResult, 0, "AuxData",
                emlrtMxCreateRowVectorUINT8((const uint8_T *)&v, 216U));
  return xResult;
}

// End of code generation (_coder_solver_vec_cuda_info.cpp)
