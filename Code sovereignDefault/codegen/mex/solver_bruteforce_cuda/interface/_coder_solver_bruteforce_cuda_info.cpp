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
      "789ced554b6fd340105e5b4949255a9a0be2e823270ebc542171216d0487d0a054e265e4"
      "6eec4db28a5f5ddb3411e74adce02770ec91638efc0c0e2071ec1189"
      "3fc026f63acec8cb86484d3930d268f7f3ecce373b3b9e45da93968610da46a97cdd48c7"
      "ad0cef64a38e1605da35c928a48a2a0bfb84fd4336da811f93519c02",
      "1f7b24df49fd30890fc721893860240adcb7c499597ad42587d4239d22783a455eb360ca"
      "c1d4349d3706c41e76120fb141348fd02d823c1f4792f35614f98002"
      "f301d709bed18a7cc2ff75059fb0cfd2c8ac2e4b62d20b984d2c3b7170a10e243c75e017"
      "f26859a4adc64127c569414531a37e5f7d4e8191c4be017821bfb0df",
      "987ffaae67eb8a2ae2f821e15936dfef2471ec00fbebfd377b0fcc47983a4967ecdb0e8d"
      "86e649c0863c29468843c222b38d19765de21a76e0f192c7310d7ce3"
      "84c603a34546a61d38c4ea739474cd069f1b51c02f90d0bebf477a387163b3fc4a6f7933"
      "7e553d5f5bf2bcb2bc6fa1da6c3cfdf54d5b27dfc3d3facf75f209b9",
      "2cbe75f587e3835db7f9eaa577fb4eeb5937bc7ff7de7148a3e63c8eb68247150792e075"
      "f97f5c2bdfbfb9a4fff32be5fe756047e07d9d5cf0fbba09ec028b7e"
      "2c44c4735312cfdff7f9453fd377f639c321ef6c9655e09b54cbf954f7aaeafbc2bfa195"
      "ef57ddeb17857f1dacab64df76b9bee01a72fdc4f5aca09fb9627f9c",
      "bf7d3281772ff885fe4934c9bc6cdda480b7815de0f36c5cb59fd50186ebdf03bb0e7056"
      "1ef97dab46070528415de422b2d43c4231621cd9285e38775b5237aa"
      "ba84f1cbea3254ec97f957f533f1dfffebfc4712ff5715fcaafc5625efe4fffbbc58feda"
      "8a7d56f83b93f8d7811dbe9f1f257e2febfd14f21b27b8aa55",
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
      emlrtMxCreateString(
          "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
          "Mex\\code_github\\Code sovereignDefault\\solver_bruteforce_cuda.m"));
  emlrtSetField(xEntryPoints, 0, "TimeStamp",
                emlrtMxCreateDoubleScalar(740136.8072800926));
  emlrtSetField(xEntryPoints, 0, "Visible", emlrtMxCreateLogicalScalar(true));
  xResult =
      emlrtCreateStructMatrix(1, 1, 7, (const char_T **)&propFieldName[0]);
  emlrtSetField(xResult, 0, "Version",
                emlrtMxCreateString("26.1.0.3251617 (R2026a) Update 2"));
  emlrtSetField(xResult, 0, "ResolvedFunctions",
                (mxArray *)c_emlrtMexFcnResolvedFunctionsI());
  emlrtSetField(xResult, 0, "Checksum",
                emlrtMxCreateString("goeRHr0klNLluQ8Y4VgGpG"));
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  emlrtSetField(xResult, 0, "AuxData",
                emlrtMxCreateRowVectorUINT8((const uint8_T *)&v, 216U));
  return xResult;
}

// End of code generation (_coder_solver_bruteforce_cuda_info.cpp)
