/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_solve_benchmark_parfor_info.c
 *
 * Code generation for function 'solve_benchmark_parfor'
 *
 */

/* Include files */
#include "_coder_solve_benchmark_parfor_info.h"
#include "emlrt.h"
#include "tmwtypes.h"

/* Function Declarations */
static const mxArray *c_emlrtMexFcnResolvedFunctionsI(void);

/* Function Definitions */
static const mxArray *c_emlrtMexFcnResolvedFunctionsI(void)
{
  const mxArray *nameCaptureInfo;
  const char_T *data[6] = {
      "789ced55c16ed340105d5b4949255ada0b0289838f4848484542208ea48de82134922315"
      "0923776b6f122bb67759db6d52f503b8c12770ec91636ef0194880c4"
      "b19f8193781d67e465d3484d3930d268fd32bbf36667273348db6f6a08a14d3495ef6bd3"
      "7523c35bd9aaa37981764db20aa9a2cadc3961ff98ad0e0d633288a7",
      "20c401c94f7a214be2f6909128059c44d43f21eec4d2f17cd2f6026216c1eb310a1a0553"
      "0ec6a6f177bd479cbe990488f7a259847e11e4f93892dcb7a2c80714"
      "980fb84ff00d96e413feef2af8847d9246fb98844e2fc0bc6f33cc3b9417ea40c2b30dfc"
      "421e2d8bb4593f30a7785a5051ccbdb0abbea7c048625f03bc905fd8",
      "efcd7efaa567fb8a2ae2f82de15934dfe79238b680fdeddebbdd17d64becb989390c1dd7"
      "8bfad629e5fd342906c38cf0c86a618e7d9ff8864383b4e471ecd1d0"
      "38f5e29ed12403cba12eb1bb5ecc09a3563d0546444f08275e37dc251d9cf8b155fea68f"
      "0384d4f57c67c1fbcaf2be816a93f5eb8f9fda2af91ed1fb0f56c927",
      "e4a6f856d51f760ecf5c567f12b6877bfb07a61f3f7bdfd879da98c5d152f0a8e24012bc"
      "2affaf6ae5e7d717f47f79abdcbf0eec08ccd7d135cfd775601758f4"
      "6321229e879278aedee7e7fd8ce7ec21c72ced6cb65de01b55cbf954efaaeafbc2bfa195"
      "9f57bdeb37857f1decab64bf3d4ff54daa2cd5cfa95e14f44baa381c",
      "e6b34f26f0ed05bfd0bf8926f92edb372ae04d6017f8325b97ed67db00c3fd1f805d0738"
      "2b8ffcbd55ab8b284ad031f211b9f277f1de2d49dda8ea12c62fab4b"
      "a6382ff3afea67e27fffaff31f49fcdf56f0abf25b95ccc9ffef79bdfcb525fbacf07721"
      "f1af033b9c9f9f247e6f6a7e0af9039c29a9ab",
      ""};
  nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(&data[0], 3912U, &nameCaptureInfo);
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
  xInputs = emlrtCreateLogicalMatrix(1, 5);
  emlrtSetField(xEntryPoints, 0, "QualifiedName",
                emlrtMxCreateString("solve_benchmark_parfor"));
  emlrtSetField(xEntryPoints, 0, "NumberOfInputs",
                emlrtMxCreateDoubleScalar(5.0));
  emlrtSetField(xEntryPoints, 0, "NumberOfOutputs",
                emlrtMxCreateDoubleScalar(9.0));
  emlrtSetField(xEntryPoints, 0, "ConstantInputs", xInputs);
  emlrtSetField(
      xEntryPoints, 0, "ResolvedFilePath",
      emlrtMxCreateString("D:\\BaiduSyncdisk\\working papers\\Parallel "
                          "computation with Mex\\code_gitrepo\\Code "
                          "sovereignDefault\\solve_benchmark_parfor.m"));
  emlrtSetField(xEntryPoints, 0, "TimeStamp",
                emlrtMxCreateDoubleScalar(740106.5495023148));
  emlrtSetField(xEntryPoints, 0, "Visible", emlrtMxCreateLogicalScalar(true));
  xResult =
      emlrtCreateStructMatrix(1, 1, 7, (const char_T **)&propFieldName[0]);
  emlrtSetField(xResult, 0, "Version",
                emlrtMxCreateString("26.1.0.3251617 (R2026a) Update 2"));
  emlrtSetField(xResult, 0, "ResolvedFunctions",
                (mxArray *)c_emlrtMexFcnResolvedFunctionsI());
  emlrtSetField(xResult, 0, "Checksum",
                emlrtMxCreateString("ejxcrm4K8eLp3DQy3CEPJB"));
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  emlrtSetField(xResult, 0, "AuxData",
                emlrtMxCreateRowVectorUINT8((const uint8_T *)&v, 216U));
  return xResult;
}

/* End of code generation (_coder_solve_benchmark_parfor_info.c) */
