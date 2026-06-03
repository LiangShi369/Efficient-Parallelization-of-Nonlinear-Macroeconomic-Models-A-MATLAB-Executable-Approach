//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// _coder_rbc_solver_interp_cuda_info.cpp
//
// Code generation for function 'rbc_solver_interp_cuda'
//

// Include files
#include "_coder_rbc_solver_interp_cuda_info.h"
#include "emlrt.h"
#include "tmwtypes.h"

// Function Declarations
static const mxArray *c_emlrtMexFcnResolvedFunctionsI();

// Function Definitions
static const mxArray *c_emlrtMexFcnResolvedFunctionsI()
{
  const mxArray *nameCaptureInfo;
  const char_T *data[9]{
      "789ced59cd53d34014df96c2c0f0552f0e7a8a374f0ca08ee049a90541ca5771c0a14e48"
      "93a50de4a32429b4dc39cbd1a347fe054f7af4264767d419c68b9e3d"
      "7a72db66dbf44d9f095fc589bc99ede6e5b779effdde6ef7e5834466521142c800a9c9e1"
      "ad5adfefea71b78f92668178c4ed6340e7d2e922fd007fedf6b26938",
      "b4e4d41443d269fd4ad528149d957281da4cb1a86d6abb54a9229baa4657549da6bdca7c"
      "45d3a73c505da94095e3449ecadbe9a24eacbcdd8850f32af57c6c20"
      "7c63a459200e05e6038ee3fe4a67f4c7eddff4f1c7712b2b8bd5545aa2ca326f1544b9a8"
      "488d383e237e6e00bbd04fc48d34955848d7f4aeaa6e3b966ae4fc79",
      "729d207817f00bfd737ca871ea5bd41de76d3c8e13c44fd07c979138e2005f4fbe7afa28"
      "3329a94a315d366445b5b7337ba6b5cd922214a402b5eccca264499a"
      "4635413675b6e42547350d614f75f2428a9632b2a95031c7b462369360c782ed98725eb2"
      "9d69cbdc73f299d6133aacbbfefdd6f36040be58defb4977b57fffe5",
      "6ba49dfe3eaeff10dae98fcb55f96bd7fe30b7a6385bf99c6da7f393e6165d4ace954767"
      "938d38167dfcf8c54110bd5df64f90ebc3fabf2f9c936f8f0f5f8e67"
      "2d6a38a2ae1ac07f58eb093fe6711c237e82e65943e28803fcd2d7557d226b4b29acf5e3"
      "f7c189d04e7f5cc25e3f66e591d59d2db63e97979f8f9752a5eccb89",
      "fb4f12e1a91f3f91eb83e6f100b11f07f895d58f087b3812b354d374c92017574706810e"
      "7973bc16cba868cb9226ee8e85be8e7490e63a82f10c9a670b89230e"
      "f04b5f5f6022f98d4958ebc9bbbeef423bfd71097b3d5192396be7c1fcc2627aa7accca4"
      "eec9b2b4353b159e7af2bfffdf83f284fb6c83670dd14c597268f89f",
      "3b62e4629f3b54248e38c02f7dfdd42630f4efad7e7dbaae1315b9e83af162627fb9b0b9"
      "3a9fd85dca2d29630f57f6cdb5b5e9f0d4898dded6d7f780f1a8fdde"
      "d6f6a30027e0bbd0714f6bbb41bf0b61eb857f1782ef97b8cef75f2e3c9ec7483ca7dfd7"
      "9bed54be0fad5a5281ed64a2e8f177dcddda9fdfbc425ed8bcbe89fc",
      "fd7accfe78e4eff6a3605ccc3d37ceda1a6b6f591b6298e0697759938c72bdd66102e79e"
      "fbe70deab0c1ef321db8ab265ed8711439df819c877b0ff437e2193c"
      "0070ae7f70fbb3eea37d2de2f28edf007814e89c5b17d22bc4244592251aa1e8b1970fe7"
      "7c563eb77df81c031cf2e171dff1e1057b99f15118178b0cb37b1583",
      "38d56383488ce130fb35186e9032d1abbc6d22924dd61bec3a878daf604132856730aceb"
      "e1e89c7cb0ef067cfc331f3e5c0fcaa35e879175ecb75f43ffd87e8d"
      "bd070b5a0f09a2f37af8affbdf40ecf79166396d7e3b91fbc7ebf9bc5cffdd67bcffe0f6"
      "8e80ce250a70785f7988d8bdaafb4a2e7f00cf0b3e35",
      ""};
  nameCaptureInfo = nullptr;
  emlrtNameCaptureMxArrayR2016a(&data[0], 9496U, &nameCaptureInfo);
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
  xInputs = emlrtCreateLogicalMatrix(1, 3);
  emlrtSetField(xEntryPoints, 0, "QualifiedName",
                emlrtMxCreateString("rbc_solver_interp_cuda"));
  emlrtSetField(xEntryPoints, 0, "NumberOfInputs",
                emlrtMxCreateDoubleScalar(3.0));
  emlrtSetField(xEntryPoints, 0, "NumberOfOutputs",
                emlrtMxCreateDoubleScalar(2.0));
  emlrtSetField(xEntryPoints, 0, "ConstantInputs", xInputs);
  emlrtSetField(
      xEntryPoints, 0, "ResolvedFilePath",
      emlrtMxCreateString(
          "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
          "Mex\\code_github\\Code stochastGrowth\\rbc_solver_interp_cuda.m"));
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
                emlrtMxCreateString("KiUFHJoT92a0OyPDCGbMcG"));
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  emlrtSetField(xResult, 0, "AuxData",
                emlrtMxCreateRowVectorUINT8((const uint8_T *)&v, 216U));
  return xResult;
}

// End of code generation (_coder_rbc_solver_interp_cuda_info.cpp)
