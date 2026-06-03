/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_solver_divide_info.c
 *
 * Code generation for function 'solver_divide'
 *
 */

/* Include files */
#include "_coder_solver_divide_info.h"
#include "emlrt.h"
#include "tmwtypes.h"

/* Function Declarations */
static const mxArray *c_emlrtMexFcnResolvedFunctionsI(void);

/* Function Definitions */
static const mxArray *c_emlrtMexFcnResolvedFunctionsI(void)
{
  const mxArray *nameCaptureInfo;
  const char_T *data[6] = {
      "789ced563b8fd340101e5bc99193b823d7200a0a4b3454481408440739720f2910298740"
      "6094f3d97bc92a7ee1c75df20fe8e027505e49990e4a3a5a24a0bf9f"
      "81137b1367e4614da4cb5130d26af7f3ecce373b3bbb6350f65a0a006c422a5fd7d27e23"
      "c3f5ac576151b05e217a2155a82cac13faf7596f7a6ec486510a5cc3",
      "61b395dcf5e3e860e4b33001010b3dfb845953cd31b7d9017758270f9e4e90d3cca96660"
      "a29a8c1b7d660e3ab103413f9c7b68e7c12c1e87c47e2b927860c1f1"
      "c0f3049fbf249f82be537c423f0d63d0b5f809b7588eff3b617f0bd9c3f695ccc356e359"
      "27c569228551c0dddedcfe90b02f3010fa35c48bf985fec6fcd32f35",
      "9b976fb27d968d7340f85147fad74fde6c3fd41f1bdc8a3b23d7b47838d04fbd60900445"
      "f30d9f05a1de3602c3b699ad999e93a4ba1171cfd54e79d4d75a6ca8"
      "9b9ec5babd04c5477a23196ba1971c1ce33d779b1d1bb11de90b4779c7497965f97bade4"
      "3ea9786f406dda7ffef15359255ff4edd6cd55f209b92c3eeabe94cd",
      "d3eb045f1de9fb5ef3d1ab78fffe6ef32edfd96fedbcbdd77fbed798fbd196f0c8fc0002"
      "afcafe6ead78fd7a49fbe7578aedab480fa89e8e2fb89eae23bdc0e2"
      "1d1622fcb94df8f3f7effba29d495d7d11187ef2a275bb39be71b5984f76aeb2f75ed8d7"
      "94e2f5b273fd22b1afa27995ecdb83a4bd84b44e7f4cda59ae7d4a9a",
      "e18e66358f127cf6825fb43f89428c8be68d737813e9053ecffa65dfb32d84f1fc7748af"
      "229ca5c7ecbc65bd051ec4700436b052e310a2a416c76042b4b0ef36"
      "9137b2bcc4fe537949fdc795bdf7406071efff75fe43c2fe5509bf2cbe55a24efe3fcf8b"
      "e5af2df9ce0a7b67847d15e971fdfc40d8bdacfa29e4372360a22b",
      ""};
  nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(&data[0], 3896U, &nameCaptureInfo);
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
                emlrtMxCreateString("solver_divide"));
  emlrtSetField(xEntryPoints, 0, "NumberOfInputs",
                emlrtMxCreateDoubleScalar(5.0));
  emlrtSetField(xEntryPoints, 0, "NumberOfOutputs",
                emlrtMxCreateDoubleScalar(6.0));
  emlrtSetField(xEntryPoints, 0, "ConstantInputs", xInputs);
  emlrtSetField(
      xEntryPoints, 0, "ResolvedFilePath",
      emlrtMxCreateString(
          "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
          "Mex\\code_github\\Code sovereignDefault\\solver_divide.m"));
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
                emlrtMxCreateString("2zFnKHbx4eOVp0WkjacuDE"));
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  emlrtSetField(xResult, 0, "AuxData",
                emlrtMxCreateRowVectorUINT8((const uint8_T *)&v, 216U));
  return xResult;
}

/* End of code generation (_coder_solver_divide_info.c) */
