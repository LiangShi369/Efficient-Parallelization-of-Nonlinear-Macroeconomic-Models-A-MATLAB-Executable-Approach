/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * fun_VFI_parfor2_data.c
 *
 * Code generation for function 'fun_VFI_parfor2_data'
 *
 */

/* Include files */
#include "fun_VFI_parfor2_data.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;

const volatile char_T *emlrtBreakCheckR2012bFlagVar = NULL;

emlrtContext emlrtContextGlobal = {
    true,                                                 /* bFirstTime */
    false,                                                /* bInitialized */
    131690U,                                              /* fVersionInfo */
    NULL,                                                 /* fErrorFunction */
    "fun_VFI_parfor2",                                    /* fFunctionName */
    NULL,                                                 /* fRTCallStack */
    false,                                                /* bDebugMode */
    {2045744189U, 2170104910U, 2743257031U, 4284093946U}, /* fSigWrd */
    NULL                                                  /* fSigMem */
};

emlrtRSInfo k_emlrtRSI = {
    71,                                                         /* lineNo */
    "power",                                                    /* fcnName */
    "D:\\Matlab_2026a\\toolbox\\eml\\lib\\matlab\\ops\\power.m" /* pathName */
};

omp_lock_t emlrtLockGlobal;

omp_nest_lock_t fun_VFI_parfor2_nestLockGlobal;

emlrtRTEInfo b_emlrtRTEI = {
    82,                                                         /* lineNo */
    5,                                                          /* colNo */
    "fltpower",                                                 /* fName */
    "D:\\Matlab_2026a\\toolbox\\eml\\lib\\matlab\\ops\\power.m" /* pName */
};

/* End of code generation (fun_VFI_parfor2_data.c) */
