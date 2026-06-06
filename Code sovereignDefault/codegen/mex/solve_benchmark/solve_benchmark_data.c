/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * solve_benchmark_data.c
 *
 * Code generation for function 'solve_benchmark_data'
 *
 */

/* Include files */
#include "solve_benchmark_data.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;

const volatile char_T *emlrtBreakCheckR2012bFlagVar = NULL;

emlrtContext emlrtContextGlobal = {
    true,                                                 /* bFirstTime */
    false,                                                /* bInitialized */
    131690U,                                              /* fVersionInfo */
    NULL,                                                 /* fErrorFunction */
    "solve_benchmark",                                    /* fFunctionName */
    NULL,                                                 /* fRTCallStack */
    false,                                                /* bDebugMode */
    {2045744189U, 2170104910U, 2743257031U, 4284093946U}, /* fSigWrd */
    NULL                                                  /* fSigMem */
};

emlrtRSInfo u_emlrtRSI = {
    71,                                                         /* lineNo */
    "power",                                                    /* fcnName */
    "D:\\Matlab_2026a\\toolbox\\eml\\lib\\matlab\\ops\\power.m" /* pathName */
};

emlrtRSInfo w_emlrtRSI = {
    7,         /* lineNo */
    "getTime", /* fcnName */
    "D:\\Matlab_2026a\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\+"
    "time\\getTime.m" /* pathName */
};

emlrtRSInfo x_emlrtRSI = {
    21,                     /* lineNo */
    "CoderTimeAPI/getTime", /* fcnName */
    "D:\\Matlab_2026a\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\+"
    "time\\CoderTimeAPI.m" /* pathName */
};

emlrtRSInfo y_emlrtRSI = {
    148,                                  /* lineNo */
    "CoderTimeAPI/callEMLRTClockGettime", /* fcnName */
    "D:\\Matlab_2026a\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\+"
    "time\\CoderTimeAPI.m" /* pathName */
};

omp_lock_t emlrtLockGlobal;

omp_nest_lock_t solve_benchmark_nestLockGlobal;

emlrtRTEInfo c_emlrtRTEI = {
    159,                    /* lineNo */
    13,                     /* colNo */
    "coderTimeCheckStatus", /* fName */
    "D:\\Matlab_2026a\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\+"
    "time\\CoderTimeAPI.m" /* pName */
};

emlrtRTEInfo
    r_emlrtRTEI =
        {
            76,                  /* lineNo */
            9,                   /* colNo */
            "eml_mtimes_helper", /* fName */
            "D:\\Matlab_2026a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_"
            "helper.m" /* pName */
};

const char_T cv[26] = {'e', 'm', 'l', 'r', 't', 'C', 'l', 'o', 'c',
                       'k', 'G', 'e', 't', 't', 'i', 'm', 'e', 'M',
                       'o', 'n', 'o', 't', 'o', 'n', 'i', 'c'};

/* End of code generation (solve_benchmark_data.c) */
