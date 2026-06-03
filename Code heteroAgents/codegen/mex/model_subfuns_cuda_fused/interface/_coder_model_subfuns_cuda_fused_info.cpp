//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// _coder_model_subfuns_cuda_fused_info.cpp
//
// Code generation for function 'model_subfuns_cuda_fused'
//

// Include files
#include "_coder_model_subfuns_cuda_fused_info.h"
#include "emlrt.h"
#include "tmwtypes.h"

// Function Declarations
static const mxArray *c_emlrtMexFcnResolvedFunctionsI();

// Function Definitions
static const mxArray *c_emlrtMexFcnResolvedFunctionsI()
{
  const mxArray *nameCaptureInfo;
  const char_T *data[7]{
      "789ced58cd6e133110f646e94f545ac20572e09027401507a8b8b5292520d294a6820a82"
      "b6db5d37d976ffb43f34e9893700f1143c426f2071e1c8b11220e5c8"
      "9d17c04976d2cd28236f5b9aa2524b963dfbd9f38dc7ce8c1da63cae288cb139d62f85d9"
      "7e1b372c1fb719365c30aea071caf07036c1b243f3007f17b7baeb84",
      "bc15f60547b3f960a6e97851b8d1f67820049f07aef5861b3d64c7b4f88669f35a5258ed"
      "4af64a021a085da8db2f35b9be578b6ce63783630bada430f0c716b1"
      "deacc41fb8607fe071c0d73a251fe82f48f800b75d835b6a106def444ea0ea91a1a93b51"
      "c00db0e388e0b981f4621e25b6b452aad6faf2644f0e42df741af275",
      "82cc087c12f1627ec00bc79f7e66e271c90a7674089eb4fe6e1376e411feeae1ebe507f5"
      "25cd34a25adbd10d33d8abefbbfe9e704ad1d33cee07f535cdd72c8b"
      "5b45ddb5c591d742d3758afb66d82c5678abae8b0d531b428ab6eb25d12f3679c87d77b1"
      "c19d30a853db79c78ef965e7f97acaf5527e9f65d3bdf6c3ef1fca38",
      "f916be1cde1e271f948be23b6b7cb849f0e511fe545f5fdaf0d6ab9c2f3a4feebf8c769f"
      "2d3faaae1cdbb126e191d9c108795cfa3bc4fccbfabbf7ceb8de19c9"
      "7a01efa56755d8e6f321fecb9a4fa00f767c2378d2fad922ecc823fc9ccf55621bfb4769"
      "5cf1eed3f7f1e68fcd5b3357f983fdfdfc317f777ebde6af36760f9e",
      "bbee81df0c97ee951a97287f1ce546cfcfa5d4dfca8dd69f413843efb3f2f468bd69df67"
      "d47981f7590ee12043fc8502f61c4e8de63b795c1fd6d37da7bdf035"
      "4f4432554df095093ed9be4ea171d4be9695d1f365fbfa4ba23f83c665e36f0ba26e8afa"
      "56d4afac9f3fa07673a6e6b407b98e2a78ef811f2a96b16d789eac3f",
      "8a2f39ae9390e7100e7291f073dab847bd7361fc6784e3ff25203a4e9eb13598cb22b62d"
      "f2324fd50f58c87c21e9a24dd3ffdffd75d2fe20fe13fe92c509bc6e"
      "2a4e50f7e9b471981132c4e17f9d7f8bd07f4dc22ff3ef04716fb9dacff3e59f3e65de03"
      "7d1f09fd1984e3fbcc7b42ef45dd67a0fc019e32412f",
      ""};
  nameCaptureInfo = nullptr;
  emlrtNameCaptureMxArrayR2016a(&data[0], 5912U, &nameCaptureInfo);
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
  xInputs = emlrtCreateLogicalMatrix(1, 8);
  emlrtSetField(xEntryPoints, 0, "QualifiedName",
                emlrtMxCreateString("model_subfuns_cuda_fused"));
  emlrtSetField(xEntryPoints, 0, "NumberOfInputs",
                emlrtMxCreateDoubleScalar(8.0));
  emlrtSetField(xEntryPoints, 0, "NumberOfOutputs",
                emlrtMxCreateDoubleScalar(4.0));
  emlrtSetField(xEntryPoints, 0, "ConstantInputs", xInputs);
  emlrtSetField(
      xEntryPoints, 0, "ResolvedFilePath",
      emlrtMxCreateString(
          "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
          "Mex\\code_github\\Code heteroAgents\\model_subfuns_cuda_fused.m"));
  emlrtSetField(xEntryPoints, 0, "TimeStamp",
                emlrtMxCreateDoubleScalar(740136.867800926));
  emlrtSetField(xEntryPoints, 0, "Visible", emlrtMxCreateLogicalScalar(true));
  xResult =
      emlrtCreateStructMatrix(1, 1, 7, (const char_T **)&propFieldName[0]);
  emlrtSetField(xResult, 0, "Version",
                emlrtMxCreateString("26.1.0.3251617 (R2026a) Update 2"));
  emlrtSetField(xResult, 0, "ResolvedFunctions",
                (mxArray *)c_emlrtMexFcnResolvedFunctionsI());
  emlrtSetField(xResult, 0, "Checksum",
                emlrtMxCreateString("XHw51RkO35Q0UjjBPPuOxD"));
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  emlrtSetField(xResult, 0, "AuxData",
                emlrtMxCreateRowVectorUINT8((const uint8_T *)&v, 216U));
  return xResult;
}

// End of code generation (_coder_model_subfuns_cuda_fused_info.cpp)
