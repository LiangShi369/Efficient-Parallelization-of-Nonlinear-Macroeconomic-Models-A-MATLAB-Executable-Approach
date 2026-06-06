//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// _coder_solver_interp_cuda_info.cpp
//
// Code generation for function 'solver_interp_cuda'
//

// Include files
#include "_coder_solver_interp_cuda_info.h"
#include "emlrt.h"
#include "tmwtypes.h"

// Function Declarations
static const mxArray *c_emlrtMexFcnResolvedFunctionsI();

// Function Definitions
static const mxArray *c_emlrtMexFcnResolvedFunctionsI()
{
  const mxArray *nameCaptureInfo;
  const char_T *data[10]{
      "789ced59cd53d340147f2d1f03a368711c471d0ff5e6891144458f16504010294ceb5827"
      "a4c9b68de4cb7c40e1c44167f0a4478f1ef92ff44ff0e88c325ebd7b"
      "f1e8b6c9b6e99335816270226f66bbfbf2dbbcb7bfb79b7d69165233f3290038039e6c5f"
      "f2ea215fcff8751a3a05e329bfee453a933e1f1942f81bbf960cdd21",
      "75c753745123ad3b15dd749de54d93d854b1886da8eb446e22154525cb8a46f24165a1a1"
      "69d301a8a534a0463b5723d25aded5c0aad9ed11aa41a5158f550edf"
      "5ee8148c63c1f1c0fd98bffa21fd31fbe742fc31bc19464b5068d42d53905c59ec1cc767"
      "8e9f616417fb49f9239dcf3dca7b7abfe7cfb114bd1ace93e9c0c1fb",
      "915fec9fe117db97f6d27ebf6009e31935de75a403eac7f0a753cf26ef96ee898aece637"
      "754956ecb5d28661add1a0644dd124965d5a142d5155899a950c8d2e"
      "79d1510c3dbba138b5ec3ca9972443264255712c621aa51c55b2b641679028557d925444"
      "57754abfcfe98816b68ecf46e4c98bf7100c34eb573fbe36a1b8fc6d",
      "9faf9f8dd31f93e3f2d7edbe7081e32f8370d19d9d9abe418c95e2938df1b99bcbf942a1"
      "56986e8f6331c44fd83880a3c765ff7f79decd2e790e86f06478d922"
      "ba23688aeeeb49cf1faccdc6f189e3276a9c0dce3832088f633db5e672448b6d9ffbf025"
      "debcb1571cbe12a73f2649cf1b2ff26b6e79e5d143a53c4b66c672e3",
      "f3ee9c3931959cbcf19d737fd438bee4d8cf20fcb8f2468afe1712ca445535510ff2ee36"
      "8f9c0ee1cd706f30a3822d896ad07f52f3480f1cedff108b338e0cc2"
      "e3585fc1b9a4a9a42949cd27b7ae9c3bc92770f4f96474b6b2f87c491995ab63eb9585f5"
      "07732bc6cc8dc9e4e493fffd798fca13efb36d9e1ea21a92e890e4e7",
      "8b5e38daff1d2a671c1984c7b17ebc39f4564e52f3c4eb6f2779a221479d2756ee6c2d99"
      "95c2426efd71f5b13c767b79cb2816ef27274fec9cdafffe41d49f67"
      "ffdaa9fdeda7110ee81ce8e7e0fe76a39e03f1d60b3b07c2df9798cef65f266c3c35ce78"
      "0ebeaf77da699c07152cd1a43b992004fcfd1cd8df5fd8bc625ebc79",
      "7d97faf3fd3cfb13a93fdb4fa37ebdfeb5095a8ab4bca7e522c5b281728d1651df6ce53a"
      "9ee0b967fe59c13a2ef81ca687efaa8317af9de65cefe15cc77b0ff6"
      "773dd0f90cc2c3be0344dd4787918efbef203c8df43ebfee8f58cb60800b659acf49a4b6"
      "0d0e7d77744102a783378bcd61795f0ee1fd09e19837e373f580fc25",
      "ca4da6bc2c18010574caaad1d641a46c47e8af4e711d36416bc6c006012ab4d69bfc9526"
      "76d00806dbedf87de4c4276afc78df5158ff5584e3f8b167a29b7502"
      "013ebb5df2e19d2fb0fe0f42f8303d2a8f56bee6ace3b07d1dfbe7edebbcef6551f32670"
      "749637ff75ffab1cfba7a1530e1adf3ece7be6c97cfe5dff03877c4f",
      "61f67691ce248d70fcfef99663f7b8de3f99fc02eb4e3d8f",
      ""};
  nameCaptureInfo = nullptr;
  emlrtNameCaptureMxArrayR2016a(&data[0], 9520U, &nameCaptureInfo);
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
                emlrtMxCreateString("solver_interp_cuda"));
  emlrtSetField(xEntryPoints, 0, "NumberOfInputs",
                emlrtMxCreateDoubleScalar(5.0));
  emlrtSetField(xEntryPoints, 0, "NumberOfOutputs",
                emlrtMxCreateDoubleScalar(6.0));
  emlrtSetField(xEntryPoints, 0, "ConstantInputs", xInputs);
  emlrtSetField(
      xEntryPoints, 0, "ResolvedFilePath",
      emlrtMxCreateString(
          "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
          "Mex\\code_gitrepo\\Code sovereignDefault\\solver_interp_cuda.m"));
  emlrtSetField(xEntryPoints, 0, "TimeStamp",
                emlrtMxCreateDoubleScalar(740136.8029282407));
  emlrtSetField(xEntryPoints, 0, "Visible", emlrtMxCreateLogicalScalar(true));
  xResult =
      emlrtCreateStructMatrix(1, 1, 7, (const char_T **)&propFieldName[0]);
  emlrtSetField(xResult, 0, "Version",
                emlrtMxCreateString("26.1.0.3251617 (R2026a) Update 2"));
  emlrtSetField(xResult, 0, "ResolvedFunctions",
                (mxArray *)c_emlrtMexFcnResolvedFunctionsI());
  emlrtSetField(xResult, 0, "Checksum",
                emlrtMxCreateString("VVUjB6JRjOkuBoVKG6lTQH"));
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  emlrtSetField(xResult, 0, "AuxData",
                emlrtMxCreateRowVectorUINT8((const uint8_T *)&v, 216U));
  return xResult;
}

// End of code generation (_coder_solver_interp_cuda_info.cpp)
