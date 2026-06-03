//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// _coder_solver_bruteforce_cuda_info.cpp
//
// Code generation for function 'solver_bruteforce_cuda'
//

// Include files
#include "_coder_solver_bruteforce_cuda_info.h"
#include "emlrt.h"
#include "tmwtypes.h"

// Function Declarations
static const mxArray *c_emlrtMexFcnResolvedFunctionsI();

// Function Definitions
static const mxArray *c_emlrtMexFcnResolvedFunctionsI()
{
  const mxArray *nameCaptureInfo;
  const char_T *data[6]{
      "789ced55bd6e1341109e3bd9c19148481a4479a2a2a2400819ca3824503858b211411c72"
      "2e776bfbf0fd696f0fdb120515a28347a04c49e99207e0012840a24c"
      "cf0bb0f6dddae7d12d6b2cc5a160a4d1dee7d99d6f76763c03dae3ba0600db90cab78d74"
      "ddcaf04eb6eab028d8ae49562165282d9c13f60fd96a870123439682",
      "c0f2c9eca41b44096b8d22127340491c7aaf8933b5745c8fb45c9f34f3e06882fc839c69"
      "0626a6c977ad47ec7e33f181f6e279845e1eccf27122b96f49910f2c"
      "381f789fe01baec827fc5f57f009fb348db47d4a13463a21b549db4e1c2b5707129e5de4"
      "17f36859a4f5da93668ad3828a197583aefa9e0283c4be817831bfb0",
      "df98fff443cff6e555c4f153c2b36cbedf48e2d841f6170f5fee3f30f72cd7499aa3c076"
      "dcb86f0e42dae74931222b2234361b16b53c8f78861dfabce42de686"
      "81317059cfa893a169870e69775d4649149a350e8c38e42f48dc6eb04f3a56e231b3f84d"
      "6ffb00ea7abeb6e47d6579df82ca747df7ebbbb64ebeb737bf1eae93",
      "4fc865f1adab3f44d5f0febde3bbf6a8f7bc76e7d5d3c1f0a8dada3b9cc7d150f0a8e200"
      "095e97ff4795e2f39b4bfa3fbf52ec5f477640f3757cc1f37513d905"
      "16fd588888e796249ebfeff38b7e2673f619b522ded9daed1cdfb85ccca77a5755df17fe"
      "0dadf8bcea5dbf28fceb685f29fbadcaf5986bc4f513d7b39c7ee66a",
      "05a3d9ec93097e7bc12ff44fa249be8bf68d73781bd9053ecfd655fbd92ec278ff7b64d7"
      "11ceca63f6deaad581101238050fc852df3130a01cd9c016eedd90d4"
      "8daa2e71fcb2ba8c14e765fe55fd4cfcefff75fe1389ffab0a7e557ecb9239f9ff3d2f96"
      "bfb2629f15fece24fe7564c7f3f3a3c4ef65cd4f21bf019b4daab5",
      ""};
  nameCaptureInfo = nullptr;
  emlrtNameCaptureMxArrayR2016a(&data[0], 3912U, &nameCaptureInfo);
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
                emlrtMxCreateString("solver_bruteforce_cuda"));
  emlrtSetField(xEntryPoints, 0, "NumberOfInputs",
                emlrtMxCreateDoubleScalar(5.0));
  emlrtSetField(xEntryPoints, 0, "NumberOfOutputs",
                emlrtMxCreateDoubleScalar(6.0));
  emlrtSetField(xEntryPoints, 0, "ConstantInputs", xInputs);
  emlrtSetField(
      xEntryPoints, 0, "ResolvedFilePath",
      emlrtMxCreateString("D:\\BaiduSyncdisk\\working papers\\Parallel "
                          "computation with Mex\\code_gitrepo\\Code "
                          "sovereignDefault\\solver_bruteforce_cuda.m"));
  emlrtSetField(xEntryPoints, 0, "TimeStamp",
                emlrtMxCreateDoubleScalar(740136.8089930556));
  emlrtSetField(xEntryPoints, 0, "Visible", emlrtMxCreateLogicalScalar(true));
  xResult =
      emlrtCreateStructMatrix(1, 1, 7, (const char_T **)&propFieldName[0]);
  emlrtSetField(xResult, 0, "Version",
                emlrtMxCreateString("26.1.0.3251617 (R2026a) Update 2"));
  emlrtSetField(xResult, 0, "ResolvedFunctions",
                (mxArray *)c_emlrtMexFcnResolvedFunctionsI());
  emlrtSetField(xResult, 0, "Checksum",
                emlrtMxCreateString("hkF0fPHJsmSdcHWw8OZBoC"));
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  emlrtSetField(xResult, 0, "AuxData",
                emlrtMxCreateRowVectorUINT8((const uint8_T *)&v, 216U));
  return xResult;
}

// End of code generation (_coder_solver_bruteforce_cuda_info.cpp)
