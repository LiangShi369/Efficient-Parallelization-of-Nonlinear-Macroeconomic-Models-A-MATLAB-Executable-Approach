/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * solve_benchmark_parfor.c
 *
 * Code generation for function 'solve_benchmark_parfor'
 *
 */

/* Include files */
#include "solve_benchmark_parfor.h"
#include "abs.h"
#include "eml_mtimes_helper.h"
#include "exp.h"
#include "ixfun.h"
#include "mpower.h"
#include "mtimes.h"
#include "repmat.h"
#include "rt_nonfinite.h"
#include "solve_benchmark_parfor_data.h"
#include "solve_benchmark_parfor_emxutil.h"
#include "solve_benchmark_parfor_mexutil.h"
#include "solve_benchmark_parfor_types.h"
#include "tic.h"
#include "toc.h"
#include "emlrt.h"
#include "mwmathutil.h"
#include "omp.h"
#include <emmintrin.h>
#include <stdio.h>
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = {
    36,                       /* lineNo */
    "solve_benchmark_parfor", /* fcnName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m" /* pathName
                                                                          */
};

static emlrtRSInfo b_emlrtRSI = {
    40,                       /* lineNo */
    "solve_benchmark_parfor", /* fcnName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m" /* pathName
                                                                          */
};

static emlrtRSInfo c_emlrtRSI = {
    41,                       /* lineNo */
    "solve_benchmark_parfor", /* fcnName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m" /* pathName
                                                                          */
};

static emlrtRSInfo d_emlrtRSI = {
    45,                       /* lineNo */
    "solve_benchmark_parfor", /* fcnName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m" /* pathName
                                                                          */
};

static emlrtRSInfo e_emlrtRSI = {
    51,                       /* lineNo */
    "solve_benchmark_parfor", /* fcnName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m" /* pathName
                                                                          */
};

static emlrtRSInfo f_emlrtRSI = {
    52,                       /* lineNo */
    "solve_benchmark_parfor", /* fcnName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m" /* pathName
                                                                          */
};

static emlrtRSInfo g_emlrtRSI = {
    62,                       /* lineNo */
    "solve_benchmark_parfor", /* fcnName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m" /* pathName
                                                                          */
};

static emlrtRSInfo h_emlrtRSI = {
    79,                       /* lineNo */
    "solve_benchmark_parfor", /* fcnName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m" /* pathName
                                                                          */
};

static emlrtRSInfo i_emlrtRSI = {
    88,                       /* lineNo */
    "solve_benchmark_parfor", /* fcnName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m" /* pathName
                                                                          */
};

static emlrtRSInfo j_emlrtRSI = {
    111,                      /* lineNo */
    "solve_benchmark_parfor", /* fcnName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m" /* pathName
                                                                          */
};

static emlrtRSInfo k_emlrtRSI = {
    146,                      /* lineNo */
    "solve_benchmark_parfor", /* fcnName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m" /* pathName
                                                                          */
};

static emlrtRSInfo l_emlrtRSI = {
    150,                      /* lineNo */
    "solve_benchmark_parfor", /* fcnName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m" /* pathName
                                                                          */
};

static emlrtRSInfo m_emlrtRSI = {
    152,                      /* lineNo */
    "solve_benchmark_parfor", /* fcnName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m" /* pathName
                                                                          */
};

static emlrtRSInfo n_emlrtRSI = {
    154,                      /* lineNo */
    "solve_benchmark_parfor", /* fcnName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m" /* pathName
                                                                          */
};

static emlrtRSInfo o_emlrtRSI = {
    158,                      /* lineNo */
    "solve_benchmark_parfor", /* fcnName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m" /* pathName
                                                                          */
};

static emlrtRSInfo p_emlrtRSI = {
    162,                      /* lineNo */
    "solve_benchmark_parfor", /* fcnName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m" /* pathName
                                                                          */
};

static emlrtRSInfo q_emlrtRSI = {
    164,                      /* lineNo */
    "solve_benchmark_parfor", /* fcnName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m" /* pathName
                                                                          */
};

static emlrtRSInfo r_emlrtRSI = {
    166,                      /* lineNo */
    "solve_benchmark_parfor", /* fcnName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m" /* pathName
                                                                          */
};

static emlrtRSInfo s_emlrtRSI = {
    171,                      /* lineNo */
    "solve_benchmark_parfor", /* fcnName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m" /* pathName
                                                                          */
};

static emlrtRSInfo t_emlrtRSI = {
    184,                      /* lineNo */
    "solve_benchmark_parfor", /* fcnName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m" /* pathName
                                                                          */
};

static emlrtRSInfo
    ab_emlrtRSI =
        {
            93,                  /* lineNo */
            "eml_mtimes_helper", /* fcnName */
            "D:\\Matlab_2026a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_"
            "helper.m" /* pathName */
};

static emlrtRSInfo
    bb_emlrtRSI =
        {
            69,                  /* lineNo */
            "eml_mtimes_helper", /* fcnName */
            "D:\\Matlab_2026a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_"
            "helper.m" /* pathName */
};

static emlrtRSInfo eb_emlrtRSI = {
    15,                                                           /* lineNo */
    "max",                                                        /* fcnName */
    "D:\\Matlab_2026a\\toolbox\\eml\\lib\\matlab\\datafun\\max.m" /* pathName */
};

static emlrtRSInfo fb_emlrtRSI = {
    73,         /* lineNo */
    "minOrMax", /* fcnName */
    "D:\\Matlab_2026a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m" /* pathName
                                                                          */
};

static emlrtRSInfo gb_emlrtRSI = {
    120,       /* lineNo */
    "maximum", /* fcnName */
    "D:\\Matlab_2026a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m" /* pathName
                                                                          */
};

static emlrtRSInfo hb_emlrtRSI = {
    13,            /* lineNo */
    "maxCollapse", /* fcnName */
    "D:\\Matlab_2026a\\toolbox\\eml\\eml\\+coder\\+internal\\+crl\\maxCollapse."
    "m" /* pathName */
};

static emlrtRSInfo ib_emlrtRSI = {
    17,                                                           /* lineNo */
    "max",                                                        /* fcnName */
    "D:\\Matlab_2026a\\toolbox\\eml\\lib\\matlab\\datafun\\max.m" /* pathName */
};

static emlrtRSInfo jb_emlrtRSI = {
    67,         /* lineNo */
    "minOrMax", /* fcnName */
    "D:\\Matlab_2026a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m" /* pathName
                                                                          */
};

static emlrtRSInfo kb_emlrtRSI = {
    114,       /* lineNo */
    "maximum", /* fcnName */
    "D:\\Matlab_2026a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m" /* pathName
                                                                          */
};

static emlrtRSInfo mb_emlrtRSI = {
    122,       /* lineNo */
    "maximum", /* fcnName */
    "D:\\Matlab_2026a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m" /* pathName
                                                                          */
};

static emlrtRSInfo ob_emlrtRSI = {
    58,         /* lineNo */
    "minOrMax", /* fcnName */
    "D:\\Matlab_2026a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m" /* pathName
                                                                          */
};

static emlrtRSInfo pb_emlrtRSI = {
    90,         /* lineNo */
    "maximum2", /* fcnName */
    "D:\\Matlab_2026a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m" /* pathName
                                                                          */
};

static emlrtRSInfo qb_emlrtRSI =
    {
        139,              /* lineNo */
        "binaryMinOrMax", /* fcnName */
        "D:\\Matlab_2026a\\toolbox\\eml\\eml\\+coder\\+"
        "internal\\binaryMinOrMax.m" /* pathName */
};

static emlrtRSInfo rb_emlrtRSI = {
    68,      /* lineNo */
    "ixfun", /* fcnName */
    "D:\\Matlab_2026a\\toolbox\\eml\\eml\\+coder\\+internal\\ixfun.m" /* pathName
                                                                       */
};

static emlrtRSInfo sb_emlrtRSI = {
    113,                          /* lineNo */
    "binaryImplicitExpansionFun", /* fcnName */
    "D:\\Matlab_2026a\\toolbox\\eml\\eml\\+coder\\+internal\\ixfun.m" /* pathName
                                                                       */
};

static emlrtRSInfo ub_emlrtRSI = {
    38,        /* lineNo */
    "fprintf", /* fcnName */
    "D:\\Matlab_2026a\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m" /* pathName
                                                                     */
};

static emlrtMCInfo emlrtMCI = {
    66,                                                             /* lineNo */
    18,                                                             /* colNo */
    "fprintf",                                                      /* fName */
    "D:\\Matlab_2026a\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m" /* pName */
};

static emlrtRTEInfo emlrtRTEI =
    {
        197,             /* lineNo */
        27,              /* colNo */
        "unaryMinOrMax", /* fName */
        "D:\\Matlab_2026a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax."
        "m" /* pName */
};

static emlrtRTEInfo b_emlrtRTEI =
    {
        89,              /* lineNo */
        27,              /* colNo */
        "unaryMinOrMax", /* fName */
        "D:\\Matlab_2026a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax."
        "m" /* pName */
};

static emlrtBCInfo emlrtBCI = {
    -1,                       /* iFirst */
    -1,                       /* iLast */
    181,                      /* lineNo */
    44,                       /* colNo */
    "vaut",                   /* aName */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = {
    -1,                       /* iFirst */
    -1,                       /* iLast */
    181,                      /* lineNo */
    33,                       /* colNo */
    "vpnew",                  /* aName */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = {
    -1,                       /* iFirst */
    -1,                       /* iLast */
    181,                      /* lineNo */
    29,                       /* colNo */
    "vpnew",                  /* aName */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtECInfo emlrtECI = {
    2,                        /* nDims */
    171,                      /* lineNo */
    11,                       /* colNo */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m" /* pName
                                                                          */
};

static emlrtECInfo b_emlrtECI = {
    1,                        /* nDims */
    171,                      /* lineNo */
    11,                       /* colNo */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m" /* pName
                                                                          */
};

static emlrtECInfo c_emlrtECI = {
    1,                        /* nDims */
    154,                      /* lineNo */
    71,                       /* colNo */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m" /* pName
                                                                          */
};

static emlrtECInfo d_emlrtECI = {
    1,                        /* nDims */
    154,                      /* lineNo */
    40,                       /* colNo */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m" /* pName
                                                                          */
};

static emlrtECInfo e_emlrtECI = {
    2,                        /* nDims */
    154,                      /* lineNo */
    20,                       /* colNo */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m" /* pName
                                                                          */
};

static emlrtECInfo f_emlrtECI = {
    1,                        /* nDims */
    154,                      /* lineNo */
    20,                       /* colNo */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m" /* pName
                                                                          */
};

static emlrtECInfo g_emlrtECI = {
    2,                        /* nDims */
    152,                      /* lineNo */
    13,                       /* colNo */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m" /* pName
                                                                          */
};

static emlrtECInfo h_emlrtECI = {
    1,                        /* nDims */
    152,                      /* lineNo */
    13,                       /* colNo */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m" /* pName
                                                                          */
};

static emlrtECInfo i_emlrtECI = {
    2,                        /* nDims */
    152,                      /* lineNo */
    30,                       /* colNo */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m" /* pName
                                                                          */
};

static emlrtECInfo j_emlrtECI = {
    1,                        /* nDims */
    152,                      /* lineNo */
    30,                       /* colNo */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m" /* pName
                                                                          */
};

static emlrtECInfo k_emlrtECI = {
    2,                        /* nDims */
    150,                      /* lineNo */
    14,                       /* colNo */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m" /* pName
                                                                          */
};

static emlrtECInfo l_emlrtECI = {
    1,                        /* nDims */
    150,                      /* lineNo */
    14,                       /* colNo */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m" /* pName
                                                                          */
};

static emlrtECInfo m_emlrtECI = {
    1,                        /* nDims */
    148,                      /* lineNo */
    24,                       /* colNo */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m" /* pName
                                                                          */
};

static emlrtECInfo n_emlrtECI = {
    1,                        /* nDims */
    146,                      /* lineNo */
    9,                        /* colNo */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m" /* pName
                                                                          */
};

static emlrtECInfo o_emlrtECI = {
    1,                        /* nDims */
    146,                      /* lineNo */
    39,                       /* colNo */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m" /* pName
                                                                          */
};

static emlrtBCInfo d_emlrtBCI = {
    -1,                       /* iFirst */
    -1,                       /* iLast */
    109,                      /* lineNo */
    43,                       /* colNo */
    "vaut",                   /* aName */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = {
    -1,                       /* iFirst */
    -1,                       /* iLast */
    109,                      /* lineNo */
    32,                       /* colNo */
    "vpnew",                  /* aName */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = {
    -1,                       /* iFirst */
    -1,                       /* iLast */
    109,                      /* lineNo */
    29,                       /* colNo */
    "vpnew",                  /* aName */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = {
    -1,                       /* iFirst */
    -1,                       /* iLast */
    74,                       /* lineNo */
    23,                       /* colNo */
    "z",                      /* aName */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtECInfo p_emlrtECI = {
    1,                        /* nDims */
    62,                       /* lineNo */
    11,                       /* colNo */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m" /* pName
                                                                          */
};

static emlrtECInfo q_emlrtECI = {
    1,                        /* nDims */
    52,                       /* lineNo */
    20,                       /* colNo */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m" /* pName
                                                                          */
};

static emlrtECInfo r_emlrtECI = {
    1,                        /* nDims */
    51,                       /* lineNo */
    15,                       /* colNo */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m" /* pName
                                                                          */
};

static emlrtECInfo s_emlrtECI = {
    1,                        /* nDims */
    51,                       /* lineNo */
    20,                       /* colNo */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m" /* pName
                                                                          */
};

static emlrtECInfo t_emlrtECI = {
    1,                        /* nDims */
    36,                       /* lineNo */
    9,                        /* colNo */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m" /* pName
                                                                          */
};

static emlrtBCInfo h_emlrtBCI = {
    -1,                       /* iFirst */
    -1,                       /* iLast */
    191,                      /* lineNo */
    9,                        /* colNo */
    "bpr",                    /* aName */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = {
    -1,                       /* iFirst */
    -1,                       /* iLast */
    182,                      /* lineNo */
    46,                       /* colNo */
    "q",                      /* aName */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = {
    -1,                       /* iFirst */
    -1,                       /* iLast */
    182,                      /* lineNo */
    50,                       /* colNo */
    "q",                      /* aName */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = {
    -1,                       /* iFirst */
    -1,                       /* iLast */
    182,                      /* lineNo */
    53,                       /* colNo */
    "bp",                     /* aName */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = {
    -1,                       /* iFirst */
    -1,                       /* iLast */
    182,                      /* lineNo */
    57,                       /* colNo */
    "bp",                     /* aName */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = {
    -1,                       /* iFirst */
    -1,                       /* iLast */
    182,                      /* lineNo */
    68,                       /* colNo */
    "b",                      /* aName */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = {
    -1,                       /* iFirst */
    -1,                       /* iLast */
    117,                      /* lineNo */
    11,                       /* colNo */
    "Gamma",                  /* aName */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = {
    -1,                       /* iFirst */
    -1,                       /* iLast */
    110,                      /* lineNo */
    48,                       /* colNo */
    "q",                      /* aName */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = {
    -1,                       /* iFirst */
    -1,                       /* iLast */
    110,                      /* lineNo */
    51,                       /* colNo */
    "q",                      /* aName */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = {
    -1,                       /* iFirst */
    -1,                       /* iLast */
    110,                      /* lineNo */
    54,                       /* colNo */
    "bp",                     /* aName */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = {
    -1,                       /* iFirst */
    -1,                       /* iLast */
    110,                      /* lineNo */
    57,                       /* colNo */
    "bp",                     /* aName */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = {
    -1,                       /* iFirst */
    -1,                       /* iLast */
    110,                      /* lineNo */
    69,                       /* colNo */
    "b",                      /* aName */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = {
    -1,                       /* iFirst */
    -1,                       /* iLast */
    110,                      /* lineNo */
    14,                       /* colNo */
    "Dcre",                   /* aName */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = {
    -1,                       /* iFirst */
    -1,                       /* iLast */
    110,                      /* lineNo */
    17,                       /* colNo */
    "Dcre",                   /* aName */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = {
    -1,                       /* iFirst */
    -1,                       /* iLast */
    111,                      /* lineNo */
    38,                       /* colNo */
    "Dcre",                   /* aName */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = {
    -1,                       /* iFirst */
    -1,                       /* iLast */
    111,                      /* lineNo */
    41,                       /* colNo */
    "Dcre",                   /* aName */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = {
    -1,                       /* iFirst */
    -1,                       /* iLast */
    111,                      /* lineNo */
    12,                       /* colNo */
    "WW",                     /* aName */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = {
    -1,                       /* iFirst */
    -1,                       /* iLast */
    111,                      /* lineNo */
    15,                       /* colNo */
    "WW",                     /* aName */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = {
    -1,                       /* iFirst */
    -1,                       /* iLast */
    113,                      /* lineNo */
    15,                       /* colNo */
    "WW",                     /* aName */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = {
    -1,                       /* iFirst */
    -1,                       /* iLast */
    113,                      /* lineNo */
    18,                       /* colNo */
    "WW",                     /* aName */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = {
    -1,                       /* iFirst */
    -1,                       /* iLast */
    128,                      /* lineNo */
    19,                       /* colNo */
    "WW",                     /* aName */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = {
    -1,                       /* iFirst */
    -1,                       /* iLast */
    128,                      /* lineNo */
    23,                       /* colNo */
    "WW",                     /* aName */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = {
    -1,                       /* iFirst */
    -1,                       /* iLast */
    128,                      /* lineNo */
    35,                       /* colNo */
    "Gamma",                  /* aName */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = {
    -1,                       /* iFirst */
    -1,                       /* iLast */
    114,                      /* lineNo */
    24,                       /* colNo */
    "WW",                     /* aName */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = {
    -1,                       /* iFirst */
    -1,                       /* iLast */
    114,                      /* lineNo */
    27,                       /* colNo */
    "WW",                     /* aName */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = {
    -1,                       /* iFirst */
    -1,                       /* iLast */
    141,                      /* lineNo */
    18,                       /* colNo */
    "probDcre",               /* aName */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = {
    -1,                       /* iFirst */
    -1,                       /* iLast */
    138,                      /* lineNo */
    18,                       /* colNo */
    "probDcre",               /* aName */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI = {
    -1,                       /* iFirst */
    -1,                       /* iLast */
    142,                      /* lineNo */
    16,                       /* colNo */
    "probVp",                 /* aName */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = {
    -1,                       /* iFirst */
    -1,                       /* iLast */
    139,                      /* lineNo */
    16,                       /* colNo */
    "probVp",                 /* aName */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo lb_emlrtBCI = {
    -1,                       /* iFirst */
    -1,                       /* iLast */
    72,                       /* lineNo */
    18,                       /* colNo */
    "q",                      /* aName */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo mb_emlrtBCI = {
    -1,                       /* iFirst */
    -1,                       /* iLast */
    72,                       /* lineNo */
    21,                       /* colNo */
    "q",                      /* aName */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo nb_emlrtBCI = {
    -1,                       /* iFirst */
    -1,                       /* iLast */
    83,                       /* lineNo */
    19,                       /* colNo */
    "W",                      /* aName */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo ob_emlrtBCI = {
    -1,                       /* iFirst */
    -1,                       /* iLast */
    132,                      /* lineNo */
    55,                       /* colNo */
    "Dcre",                   /* aName */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo pb_emlrtBCI = {
    -1,                       /* iFirst */
    -1,                       /* iLast */
    132,                      /* lineNo */
    59,                       /* colNo */
    "Dcre",                   /* aName */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo qb_emlrtBCI = {
    -1,                       /* iFirst */
    -1,                       /* iLast */
    74,                       /* lineNo */
    30,                       /* colNo */
    "m",                      /* aName */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo rb_emlrtBCI = {
    -1,                       /* iFirst */
    -1,                       /* iLast */
    74,                       /* lineNo */
    57,                       /* colNo */
    "b",                      /* aName */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo sb_emlrtBCI = {
    -1,                       /* iFirst */
    -1,                       /* iLast */
    74,                       /* lineNo */
    65,                       /* colNo */
    "q",                      /* aName */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo tb_emlrtBCI = {
    -1,                       /* iFirst */
    -1,                       /* iLast */
    74,                       /* lineNo */
    68,                       /* colNo */
    "q",                      /* aName */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo ub_emlrtBCI = {
    -1,                       /* iFirst */
    -1,                       /* iLast */
    74,                       /* lineNo */
    74,                       /* colNo */
    "b",                      /* aName */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo vb_emlrtBCI = {
    -1,                       /* iFirst */
    -1,                       /* iLast */
    74,                       /* lineNo */
    79,                       /* colNo */
    "m",                      /* aName */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo wb_emlrtBCI = {
    -1,                       /* iFirst */
    -1,                       /* iLast */
    74,                       /* lineNo */
    95,                       /* colNo */
    "b",                      /* aName */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo xb_emlrtBCI = {
    -1,                       /* iFirst */
    -1,                       /* iLast */
    133,                      /* lineNo */
    52,                       /* colNo */
    "vpnew",                  /* aName */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo yb_emlrtBCI = {
    -1,                       /* iFirst */
    -1,                       /* iLast */
    133,                      /* lineNo */
    56,                       /* colNo */
    "vpnew",                  /* aName */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo ac_emlrtBCI = {
    -1,                       /* iFirst */
    -1,                       /* iLast */
    77,                       /* lineNo */
    21,                       /* colNo */
    "W",                      /* aName */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo bc_emlrtBCI = {
    -1,                       /* iFirst */
    -1,                       /* iLast */
    79,                       /* lineNo */
    44,                       /* colNo */
    "evp",                    /* aName */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo cc_emlrtBCI = {
    -1,                       /* iFirst */
    -1,                       /* iLast */
    79,                       /* lineNo */
    47,                       /* colNo */
    "evp",                    /* aName */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo dc_emlrtBCI = {
    -1,                       /* iFirst */
    -1,                       /* iLast */
    79,                       /* lineNo */
    21,                       /* colNo */
    "W",                      /* aName */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo ec_emlrtBCI = {
    -1,                       /* iFirst */
    -1,                       /* iLast */
    88,                       /* lineNo */
    16,                       /* colNo */
    "vpnew",                  /* aName */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo fc_emlrtBCI = {
    -1,                       /* iFirst */
    -1,                       /* iLast */
    88,                       /* lineNo */
    19,                       /* colNo */
    "vpnew",                  /* aName */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo gc_emlrtBCI = {
    -1,                       /* iFirst */
    -1,                       /* iLast */
    88,                       /* lineNo */
    27,                       /* colNo */
    "bp",                     /* aName */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo hc_emlrtBCI = {
    -1,                       /* iFirst */
    -1,                       /* iLast */
    88,                       /* lineNo */
    30,                       /* colNo */
    "bp",                     /* aName */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo ic_emlrtBCI = {
    -1,                       /* iFirst */
    -1,                       /* iLast */
    100,                      /* lineNo */
    14,                       /* colNo */
    "qnew",                   /* aName */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo jc_emlrtBCI = {
    -1,                       /* iFirst */
    -1,                       /* iLast */
    100,                      /* lineNo */
    18,                       /* colNo */
    "qnew",                   /* aName */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo kc_emlrtBCI = {
    -1,                       /* iFirst */
    -1,                       /* iLast */
    93,                       /* lineNo */
    22,                       /* colNo */
    "W",                      /* aName */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo lc_emlrtBCI = {
    -1,                       /* iFirst */
    -1,                       /* iLast */
    93,                       /* lineNo */
    33,                       /* colNo */
    "vpnew",                  /* aName */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo mc_emlrtBCI = {
    -1,                       /* iFirst */
    -1,                       /* iLast */
    93,                       /* lineNo */
    37,                       /* colNo */
    "vpnew",                  /* aName */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo nc_emlrtBCI = {
    -1,                       /* iFirst */
    -1,                       /* iLast */
    97,                       /* lineNo */
    48,                       /* colNo */
    "q",                      /* aName */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtBCInfo oc_emlrtBCI = {
    -1,                       /* iFirst */
    -1,                       /* iLast */
    97,                       /* lineNo */
    52,                       /* colNo */
    "q",                      /* aName */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m", /* pName
                                                                           */
    0 /* checkKind */
};

static emlrtRTEInfo h_emlrtRTEI = {
    18,                       /* lineNo */
    1,                        /* colNo */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m" /* pName
                                                                          */
};

static emlrtRTEInfo i_emlrtRTEI = {
    20,                       /* lineNo */
    1,                        /* colNo */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m" /* pName
                                                                          */
};

static emlrtRTEInfo j_emlrtRTEI = {
    21,                       /* lineNo */
    1,                        /* colNo */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m" /* pName
                                                                          */
};

static emlrtRTEInfo k_emlrtRTEI = {
    23,                       /* lineNo */
    1,                        /* colNo */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m" /* pName
                                                                          */
};

static emlrtRTEInfo l_emlrtRTEI = {
    25,                       /* lineNo */
    1,                        /* colNo */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m" /* pName
                                                                          */
};

static emlrtRTEInfo m_emlrtRTEI = {
    26,                       /* lineNo */
    1,                        /* colNo */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m" /* pName
                                                                          */
};

static emlrtRTEInfo n_emlrtRTEI = {
    27,                       /* lineNo */
    1,                        /* colNo */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m" /* pName
                                                                          */
};

static emlrtRTEInfo o_emlrtRTEI = {
    30,                       /* lineNo */
    1,                        /* colNo */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m" /* pName
                                                                          */
};

static emlrtRTEInfo p_emlrtRTEI = {
    32,                       /* lineNo */
    1,                        /* colNo */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m" /* pName
                                                                          */
};

static emlrtRTEInfo q_emlrtRTEI = {
    62,                       /* lineNo */
    11,                       /* colNo */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m" /* pName
                                                                          */
};

static emlrtRTEInfo r_emlrtRTEI = {
    171,                      /* lineNo */
    1,                        /* colNo */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m" /* pName
                                                                          */
};

static emlrtRTEInfo t_emlrtRTEI = {
    146,                      /* lineNo */
    14,                       /* colNo */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m" /* pName
                                                                          */
};

static emlrtRTEInfo u_emlrtRTEI = {
    148,                      /* lineNo */
    19,                       /* colNo */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m" /* pName
                                                                          */
};

static emlrtRTEInfo v_emlrtRTEI = {
    150,                      /* lineNo */
    26,                       /* colNo */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m" /* pName
                                                                          */
};

static emlrtRTEInfo w_emlrtRTEI = {
    150,                      /* lineNo */
    1,                        /* colNo */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m" /* pName
                                                                          */
};

static emlrtRTEInfo x_emlrtRTEI = {
    152,                      /* lineNo */
    13,                       /* colNo */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m" /* pName
                                                                          */
};

static emlrtRTEInfo y_emlrtRTEI = {
    154,                      /* lineNo */
    20,                       /* colNo */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m" /* pName
                                                                          */
};

static emlrtRTEInfo ab_emlrtRTEI = {
    154,                      /* lineNo */
    40,                       /* colNo */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m" /* pName
                                                                          */
};

static emlrtRTEInfo bb_emlrtRTEI = {
    156,                      /* lineNo */
    1,                        /* colNo */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m" /* pName
                                                                          */
};

static emlrtRTEInfo cb_emlrtRTEI = {
    158,                      /* lineNo */
    1,                        /* colNo */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m" /* pName
                                                                          */
};

static emlrtRTEInfo db_emlrtRTEI = {
    159,                      /* lineNo */
    1,                        /* colNo */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m" /* pName
                                                                          */
};

static emlrtRTEInfo eb_emlrtRTEI = {
    62,                       /* lineNo */
    5,                        /* colNo */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m" /* pName
                                                                          */
};

static emlrtRTEInfo fb_emlrtRTEI = {
    154,                      /* lineNo */
    36,                       /* colNo */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m" /* pName
                                                                          */
};

static emlrtRTEInfo mb_emlrtRTEI = {
    152,                      /* lineNo */
    30,                       /* colNo */
    "solve_benchmark_parfor", /* fName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m" /* pName
                                                                          */
};

static emlrtRSInfo vb_emlrtRSI = {
    66,        /* lineNo */
    "fprintf", /* fcnName */
    "D:\\Matlab_2026a\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m" /* pathName
                                                                     */
};

static emlrtRSInfo wb_emlrtRSI = {
    68,        /* lineNo */
    "fprintf", /* fcnName */
    "D:\\Matlab_2026a\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m" /* pathName
                                                                     */
};

static emlrtRSInfo xb_emlrtRSI = {
    148,                      /* lineNo */
    "solve_benchmark_parfor", /* fcnName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_gitrepo\\Code sovereignDefault\\solve_benchmark_parfor.m" /* pathName
                                                                          */
};

static emlrtRSInfo
    yb_emlrtRSI =
        {
            76,                  /* lineNo */
            "eml_mtimes_helper", /* fcnName */
            "D:\\Matlab_2026a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_"
            "helper.m" /* pathName */
};

/* Function Declarations */
static real_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId);

static void b_plus(const emlrtStack *sp, emxArray_real_T *in1,
                   const emxArray_real_T *in2);

static void binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                             const real_T in2_data[], const int32_T *in2_size,
                             const real_T in3_data[], const int32_T *in3_size);

static void binary_expand_op_3(const emlrtStack *sp, emxArray_real_T *in1,
                               const emxArray_real_T *in2,
                               const emxArray_real_T *in3);

static void binary_expand_op_4(const emlrtStack *sp, emxArray_real_T *in1,
                               const emxArray_real_T *in2,
                               const emxArray_real_T *in3);

static void binary_expand_op_5(const emlrtStack *sp, emxArray_real_T *in1,
                               const emxArray_real_T *in2);

static void binary_expand_op_6(const emlrtStack *sp, emxArray_real_T *in1,
                               const emxArray_real_T *in2,
                               const real_T in3_data[], const int32_T *in3_size,
                               real_T in4);

static void binary_expand_op_7(const emlrtStack *sp, emxArray_real_T *in1,
                               const real_T in2_data[], const int32_T *in2_size,
                               const emxArray_real_T *in3);

static int32_T binary_expand_op_9(real_T in1_data[], const real_T in3_data[],
                                  const int32_T *in3_size,
                                  const real_T in4_data[],
                                  const int32_T *in4_size, const real_T in5[8]);

static const mxArray *c_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[31]);

static void c_plus(real_T in1_data[], int32_T *in1_size,
                   const real_T in2_data[], const int32_T *in2_size);

static real_T emlrt_marshallIn(const emlrtStack *sp,
                               const mxArray *a__output_of_feval_,
                               const char_T *identifier);

static const mxArray *emlrt_marshallOut(const emlrtStack *sp,
                                        const char_T u[7]);

static const mxArray *feval(const emlrtStack *sp, const mxArray *m,
                            const mxArray *m1, const mxArray *m2,
                            const mxArray *m3, const mxArray *m4,
                            const mxArray *m5, const mxArray *m6,
                            emlrtMCInfo *location);

static real_T i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                 const emlrtMsgIdentifier *msgId);

static void lt(const emlrtStack *sp, emxArray_boolean_T *in1,
               const emxArray_real_T *in2, const emxArray_real_T *in3);

static void plus(real_T in1_data[], int32_T *in1_size, const real_T in2_data[],
                 const int32_T *in2_size);

static void times(const emlrtStack *sp, emxArray_real_T *in1,
                  const emxArray_real_T *in2, const emxArray_real_T *in3);

/* Function Definitions */
static real_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = i_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void b_plus(const emlrtStack *sp, emxArray_real_T *in1,
                   const emxArray_real_T *in2)
{
  emxArray_real_T *b_in1;
  const real_T *in2_data;
  real_T *b_in1_data;
  real_T *in1_data;
  int32_T b_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_0_1;
  int32_T stride_1_0;
  int32_T stride_1_1;
  in2_data = in2->data;
  in1_data = in1->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &b_in1, 2, &x_emlrtRTEI);
  if (in2->size[0] == 1) {
    loop_ub = in1->size[0];
  } else {
    loop_ub = in2->size[0];
  }
  stride_0_0 = b_in1->size[0] * b_in1->size[1];
  b_in1->size[0] = loop_ub;
  if (in2->size[1] == 1) {
    b_loop_ub = in1->size[1];
  } else {
    b_loop_ub = in2->size[1];
  }
  b_in1->size[1] = b_loop_ub;
  emxEnsureCapacity_real_T(sp, b_in1, stride_0_0, &x_emlrtRTEI);
  b_in1_data = b_in1->data;
  stride_0_0 = (in1->size[0] != 1);
  stride_0_1 = (in1->size[1] != 1);
  stride_1_0 = (in2->size[0] != 1);
  stride_1_1 = (in2->size[1] != 1);
  for (i = 0; i < b_loop_ub; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_in1_data[i1 + b_in1->size[0] * i] =
          in1_data[i1 * stride_0_0 + in1->size[0] * (i * stride_0_1)] +
          in2_data[i1 * stride_1_0 + in2->size[0] * (i * stride_1_1)];
    }
  }
  stride_0_0 = in1->size[0] * in1->size[1];
  in1->size[0] = loop_ub;
  in1->size[1] = b_loop_ub;
  emxEnsureCapacity_real_T(sp, in1, stride_0_0, &x_emlrtRTEI);
  in1_data = in1->data;
  for (i = 0; i < b_loop_ub; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      in1_data[i1 + in1->size[0] * i] = b_in1_data[i1 + b_in1->size[0] * i];
    }
  }
  emxFree_real_T(sp, &b_in1);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

static void binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                             const real_T in2_data[], const int32_T *in2_size,
                             const real_T in3_data[], const int32_T *in3_size)
{
  emlrtStack st;
  emxArray_real_T c_in2_data;
  real_T b_in2_data[1000];
  int32_T b_in2_size;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  st.prev = sp;
  st.tls = sp->tls;
  if (*in3_size == 1) {
    loop_ub = *in2_size;
  } else {
    loop_ub = *in3_size;
  }
  b_in2_size = loop_ub;
  stride_0_0 = (*in2_size != 1);
  stride_1_0 = (*in3_size != 1);
  for (i = 0; i < loop_ub; i++) {
    b_in2_data[i] = in2_data[i * stride_0_0] - in3_data[i * stride_1_0];
  }
  c_in2_data.data = &b_in2_data[0];
  c_in2_data.size = &b_in2_size;
  c_in2_data.allocatedSize = 1000;
  c_in2_data.numDimensions = 1;
  c_in2_data.canFreeData = false;
  st.site = &f_emlrtRSI;
  b_abs(&st, &c_in2_data, in1);
}

static void binary_expand_op_3(const emlrtStack *sp, emxArray_real_T *in1,
                               const emxArray_real_T *in2,
                               const emxArray_real_T *in3)
{
  jmp_buf *volatile emlrtJBStack;
  emlrtStack st;
  emxArray_real_T *b_in2;
  const real_T *in2_data;
  const real_T *in3_data;
  real_T *b_in2_data;
  int32_T binary_expand_op_3_numThreads;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_0_0_tmp;
  st.prev = sp;
  st.tls = sp->tls;
  in3_data = in3->data;
  in2_data = in2->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &b_in2, 1, &ab_emlrtRTEI);
  i = in3->size[0] * in3->size[1];
  if (i == 1) {
    loop_ub = in2->size[0] * in2->size[1];
  } else {
    loop_ub = i;
  }
  stride_0_0_tmp = b_in2->size[0];
  b_in2->size[0] = loop_ub;
  emxEnsureCapacity_real_T(sp, b_in2, stride_0_0_tmp, &ab_emlrtRTEI);
  b_in2_data = b_in2->data;
  stride_0_0_tmp = in2->size[0] * in2->size[1];
  stride_0_0 = (stride_0_0_tmp != 1);
  stride_0_0_tmp = (i != 1);
  if (loop_ub < 2000) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_in2_data[i1] =
          in2_data[i1 * stride_0_0] - in3_data[i1 * stride_0_0_tmp];
    }
  } else {
    emlrtEnterParallelRegion((emlrtCTX)sp, omp_in_parallel());
    emlrtPushJmpBuf((emlrtCTX)sp, &emlrtJBStack);
    binary_expand_op_3_numThreads = emlrtAllocRegionTLSs(
        sp->tls, omp_in_parallel(), omp_get_max_threads(), omp_get_num_procs());
#pragma omp parallel for num_threads(binary_expand_op_3_numThreads)

    for (i1 = 0; i1 < loop_ub; i1++) {
      b_in2_data[i1] =
          in2_data[i1 * stride_0_0] - in3_data[i1 * stride_0_0_tmp];
    }
    emlrtPopJmpBuf((emlrtCTX)sp, &emlrtJBStack);
    emlrtExitParallelRegion((emlrtCTX)sp, omp_in_parallel());
  }
  st.site = &n_emlrtRSI;
  b_abs(&st, b_in2, in1);
  emxFree_real_T(sp, &b_in2);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

static void binary_expand_op_4(const emlrtStack *sp, emxArray_real_T *in1,
                               const emxArray_real_T *in2,
                               const emxArray_real_T *in3)
{
  emlrtStack st;
  emxArray_real_T *b_in2;
  const real_T *in2_data;
  const real_T *in3_data;
  real_T *b_in2_data;
  int32_T b_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_0_1;
  int32_T stride_1_0;
  int32_T stride_1_1;
  st.prev = sp;
  st.tls = sp->tls;
  in3_data = in3->data;
  in2_data = in2->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &b_in2, 2, &y_emlrtRTEI);
  if (in3->size[0] == 1) {
    loop_ub = in2->size[0];
  } else {
    loop_ub = in3->size[0];
  }
  stride_0_0 = b_in2->size[0] * b_in2->size[1];
  b_in2->size[0] = loop_ub;
  if (in3->size[1] == 1) {
    b_loop_ub = in2->size[1];
  } else {
    b_loop_ub = in3->size[1];
  }
  b_in2->size[1] = b_loop_ub;
  emxEnsureCapacity_real_T(sp, b_in2, stride_0_0, &y_emlrtRTEI);
  b_in2_data = b_in2->data;
  stride_0_0 = (in2->size[0] != 1);
  stride_0_1 = (in2->size[1] != 1);
  stride_1_0 = (in3->size[0] != 1);
  stride_1_1 = (in3->size[1] != 1);
  for (i = 0; i < b_loop_ub; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_in2_data[i1 + b_in2->size[0] * i] =
          in2_data[i1 * stride_0_0 + in2->size[0] * (i * stride_0_1)] -
          in3_data[i1 * stride_1_0 + in3->size[0] * (i * stride_1_1)];
    }
  }
  st.site = &n_emlrtRSI;
  c_abs(&st, b_in2, in1);
  emxFree_real_T(sp, &b_in2);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

static void binary_expand_op_5(const emlrtStack *sp, emxArray_real_T *in1,
                               const emxArray_real_T *in2)
{
  emxArray_real_T *r;
  const real_T *in2_data;
  real_T *in1_data;
  real_T *r1;
  int32_T b_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_0_1;
  int32_T stride_1_0;
  int32_T stride_1_1;
  in2_data = in2->data;
  in1_data = in1->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &r, 2, &mb_emlrtRTEI);
  if (in2->size[0] == 1) {
    loop_ub = in1->size[0];
  } else {
    loop_ub = in2->size[0];
  }
  stride_0_0 = r->size[0] * r->size[1];
  r->size[0] = loop_ub;
  if (in2->size[1] == 1) {
    b_loop_ub = in1->size[1];
  } else {
    b_loop_ub = in2->size[1];
  }
  r->size[1] = b_loop_ub;
  emxEnsureCapacity_real_T(sp, r, stride_0_0, &mb_emlrtRTEI);
  r1 = r->data;
  stride_0_0 = (in1->size[0] != 1);
  stride_0_1 = (in1->size[1] != 1);
  stride_1_0 = (in2->size[0] != 1);
  stride_1_1 = (in2->size[1] != 1);
  for (i = 0; i < b_loop_ub; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      r1[i1 + r->size[0] * i] =
          (1.0 - in1_data[i1 * stride_0_0 + in1->size[0] * (i * stride_0_1)]) *
          in2_data[i1 * stride_1_0 + in2->size[0] * (i * stride_1_1)];
    }
  }
  stride_0_0 = in1->size[0] * in1->size[1];
  in1->size[0] = loop_ub;
  in1->size[1] = b_loop_ub;
  emxEnsureCapacity_real_T(sp, in1, stride_0_0, &mb_emlrtRTEI);
  in1_data = in1->data;
  for (i = 0; i < b_loop_ub; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      in1_data[i1 + in1->size[0] * i] = r1[i1 + r->size[0] * i];
    }
  }
  emxFree_real_T(sp, &r);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

static void binary_expand_op_6(const emlrtStack *sp, emxArray_real_T *in1,
                               const emxArray_real_T *in2,
                               const real_T in3_data[], const int32_T *in3_size,
                               real_T in4)
{
  const real_T *in2_data;
  real_T *in1_data;
  int32_T b_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T in3_idx_0;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  in2_data = in2->data;
  in3_idx_0 = *in3_size;
  if (in3_idx_0 == 1) {
    loop_ub = in2->size[0];
  } else {
    loop_ub = in3_idx_0;
  }
  stride_1_0 = in1->size[0] * in1->size[1];
  in1->size[0] = loop_ub;
  emxEnsureCapacity_real_T(sp, in1, stride_1_0, &u_emlrtRTEI);
  b_loop_ub = in2->size[1];
  stride_1_0 = in1->size[0] * in1->size[1];
  in1->size[1] = b_loop_ub;
  emxEnsureCapacity_real_T(sp, in1, stride_1_0, &u_emlrtRTEI);
  in1_data = in1->data;
  stride_0_0 = (in2->size[0] != 1);
  stride_1_0 = (in3_idx_0 != 1);
  for (i = 0; i < b_loop_ub; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      in1_data[i1 + in1->size[0] * i] =
          (in2_data[i1 * stride_0_0 + in2->size[0] * i] -
           in3_data[i1 * stride_1_0]) /
          in4;
    }
  }
}

static void binary_expand_op_7(const emlrtStack *sp, emxArray_real_T *in1,
                               const real_T in2_data[], const int32_T *in2_size,
                               const emxArray_real_T *in3)
{
  const real_T *in3_data;
  real_T *in1_data;
  int32_T b_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T in2_idx_0;
  int32_T loop_ub;
  int32_T stride_0_0;
  in3_data = in3->data;
  in2_idx_0 = *in2_size;
  if (in3->size[0] == 1) {
    loop_ub = in2_idx_0;
  } else {
    loop_ub = in3->size[0];
  }
  stride_0_0 = in1->size[0] * in1->size[1];
  in1->size[0] = loop_ub;
  emxEnsureCapacity_real_T(sp, in1, stride_0_0, &t_emlrtRTEI);
  b_loop_ub = in3->size[1];
  stride_0_0 = in1->size[0] * in1->size[1];
  in1->size[1] = b_loop_ub;
  emxEnsureCapacity_real_T(sp, in1, stride_0_0, &t_emlrtRTEI);
  in1_data = in1->data;
  stride_0_0 = (in2_idx_0 != 1);
  in2_idx_0 = (in3->size[0] != 1);
  for (i = 0; i < b_loop_ub; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      in1_data[i1 + in1->size[0] * i] =
          in2_data[i1 * stride_0_0] *
          in3_data[i1 * in2_idx_0 + in3->size[0] * i];
    }
  }
}

static int32_T binary_expand_op_9(real_T in1_data[], const real_T in3_data[],
                                  const int32_T *in3_size,
                                  const real_T in4_data[],
                                  const int32_T *in4_size, const real_T in5[8])
{
  real_T d;
  int32_T i;
  int32_T in1_size;
  int32_T stride_0_0;
  int32_T stride_1_0;
  d = 1.0 - in5[2];
  if (*in4_size == 1) {
    in1_size = *in3_size;
  } else {
    in1_size = *in4_size;
  }
  stride_0_0 = (*in3_size != 1);
  stride_1_0 = (*in4_size != 1);
  for (i = 0; i < in1_size; i++) {
    in1_data[i] = -(
        1.0 / (in3_data[i * stride_0_0] * in4_data[i * stride_1_0] * d) - 1.0);
  }
  return in1_size;
}

static const mxArray *c_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[31])
{
  static const int32_T iv[2] = {1, 31};
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 31, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static void c_plus(real_T in1_data[], int32_T *in1_size,
                   const real_T in2_data[], const int32_T *in2_size)
{
  real_T b_in1_data[1000];
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  if (*in2_size == 1) {
    loop_ub = *in1_size;
  } else {
    loop_ub = *in2_size;
  }
  stride_0_0 = (*in1_size != 1);
  stride_1_0 = (*in2_size != 1);
  for (i = 0; i < loop_ub; i++) {
    b_in1_data[i] = in1_data[i * stride_0_0] + in2_data[i * stride_1_0];
  }
  *in1_size = loop_ub;
  if (loop_ub - 1 >= 0) {
    memcpy(&in1_data[0], &b_in1_data[0], (uint32_T)loop_ub * sizeof(real_T));
  }
}

static real_T emlrt_marshallIn(const emlrtStack *sp,
                               const mxArray *a__output_of_feval_,
                               const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  real_T y;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(a__output_of_feval_), &thisId);
  emlrtDestroyArray(&a__output_of_feval_);
  return y;
}

static const mxArray *emlrt_marshallOut(const emlrtStack *sp, const char_T u[7])
{
  static const int32_T iv[2] = {1, 7};
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 7, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *feval(const emlrtStack *sp, const mxArray *m,
                            const mxArray *m1, const mxArray *m2,
                            const mxArray *m3, const mxArray *m4,
                            const mxArray *m5, const mxArray *m6,
                            emlrtMCInfo *location)
{
  const mxArray *pArrays[7];
  const mxArray *m7;
  pArrays[0] = m;
  pArrays[1] = m1;
  pArrays[2] = m2;
  pArrays[3] = m3;
  pArrays[4] = m4;
  pArrays[5] = m5;
  pArrays[6] = m6;
  return emlrtCallMATLABR2012b((emlrtConstCTX)sp, 1, &m7, 7, &pArrays[0],
                               "feval", true, location);
}

static real_T i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                 const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims = 0;
  real_T ret;
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 0U,
                          (const void *)&dims);
  ret = *(real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void lt(const emlrtStack *sp, emxArray_boolean_T *in1,
               const emxArray_real_T *in2, const emxArray_real_T *in3)
{
  const real_T *in2_data;
  const real_T *in3_data;
  int32_T b_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_0_1;
  int32_T stride_1_0;
  int32_T stride_1_1;
  boolean_T *in1_data;
  in3_data = in3->data;
  in2_data = in2->data;
  if (in3->size[0] == 1) {
    loop_ub = in2->size[0];
  } else {
    loop_ub = in3->size[0];
  }
  stride_0_0 = in1->size[0] * in1->size[1];
  in1->size[0] = loop_ub;
  emxEnsureCapacity_boolean_T(sp, in1, stride_0_0, &r_emlrtRTEI);
  if (in3->size[1] == 1) {
    b_loop_ub = in2->size[1];
  } else {
    b_loop_ub = in3->size[1];
  }
  stride_0_0 = in1->size[0] * in1->size[1];
  in1->size[1] = b_loop_ub;
  emxEnsureCapacity_boolean_T(sp, in1, stride_0_0, &r_emlrtRTEI);
  in1_data = in1->data;
  stride_0_0 = (in2->size[0] != 1);
  stride_0_1 = (in2->size[1] != 1);
  stride_1_0 = (in3->size[0] != 1);
  stride_1_1 = (in3->size[1] != 1);
  for (i = 0; i < b_loop_ub; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      in1_data[i1 + in1->size[0] * i] =
          (in2_data[i1 * stride_0_0 + in2->size[0] * (i * stride_0_1)] <
           in3_data[i1 * stride_1_0 + in3->size[0] * (i * stride_1_1)]);
    }
  }
}

static void plus(real_T in1_data[], int32_T *in1_size, const real_T in2_data[],
                 const int32_T *in2_size)
{
  real_T b_in2_data[1000];
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  if (*in1_size == 1) {
    loop_ub = *in2_size;
  } else {
    loop_ub = *in1_size;
  }
  stride_0_0 = (*in2_size != 1);
  stride_1_0 = (*in1_size != 1);
  for (i = 0; i < loop_ub; i++) {
    b_in2_data[i] = in2_data[i * stride_0_0] + in1_data[i * stride_1_0];
  }
  *in1_size = loop_ub;
  if (loop_ub - 1 >= 0) {
    memcpy(&in1_data[0], &b_in2_data[0], (uint32_T)loop_ub * sizeof(real_T));
  }
}

static void times(const emlrtStack *sp, emxArray_real_T *in1,
                  const emxArray_real_T *in2, const emxArray_real_T *in3)
{
  const real_T *in2_data;
  const real_T *in3_data;
  real_T *in1_data;
  int32_T b_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_0_1;
  int32_T stride_1_0;
  int32_T stride_1_1;
  in3_data = in3->data;
  in2_data = in2->data;
  if (in3->size[0] == 1) {
    loop_ub = in2->size[0];
  } else {
    loop_ub = in3->size[0];
  }
  stride_0_0 = in1->size[0] * in1->size[1];
  in1->size[0] = loop_ub;
  emxEnsureCapacity_real_T(sp, in1, stride_0_0, &x_emlrtRTEI);
  if (in3->size[1] == 1) {
    b_loop_ub = in2->size[1];
  } else {
    b_loop_ub = in3->size[1];
  }
  stride_0_0 = in1->size[0] * in1->size[1];
  in1->size[1] = b_loop_ub;
  emxEnsureCapacity_real_T(sp, in1, stride_0_0, &x_emlrtRTEI);
  in1_data = in1->data;
  stride_0_0 = (in2->size[0] != 1);
  stride_0_1 = (in2->size[1] != 1);
  stride_1_0 = (in3->size[0] != 1);
  stride_1_1 = (in3->size[1] != 1);
  for (i = 0; i < b_loop_ub; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      in1_data[i1 + in1->size[0] * i] =
          in2_data[i1 * stride_0_0 + in2->size[0] * (i * stride_0_1)] *
          in3_data[i1 * stride_1_0 + in3->size[0] * (i * stride_1_1)];
    }
  }
}

emlrtCTX emlrtGetRootTLSGlobal(void)
{
  return emlrtRootTLSGlobal;
}

void emlrtLockerFunction(EmlrtLockeeFunction aLockee, emlrtConstCTX aTLS,
                         void *aData)
{
  omp_set_lock(&emlrtLockGlobal);
  emlrtCallLockeeFunction(aLockee, aTLS, aData);
  omp_unset_lock(&emlrtLockGlobal);
}

void solve_benchmark_parfor(const emlrtStack *sp, const real_T z_data[],
                            const int32_T z_size[1], const real_T m_data[],
                            const int32_T m_size[1], const real_T b_data[],
                            const int32_T b_size[1], const emxArray_real_T *pdf,
                            const real_T para[8], emxArray_real_T *vp,
                            real_T vd_data[], int32_T vd_size[1],
                            emxArray_real_T *q, emxArray_real_T *bp,
                            real_T bpr_data[], int32_T bpr_size[1],
                            emxArray_boolean_T *b_default, emxArray_real_T *rr,
                            real_T *totaltime, real_T *avgtime)
{
  static const char_T cv1[31] = {'%', '8', '.', '0', 'f', ' ',  '~', '%',
                                 '8', '.', '8', 'f', ' ', '~',  '%', '8',
                                 '.', '5', 'f', 's', ' ', '~',  '%', '8',
                                 '.', '5', 'f', 's', ' ', '\\', 'n'};
  static const char_T b_cv[7] = {'f', 'p', 'r', 'i', 'n', 't', 'f'};
  __m128d r;
  __m128d r1;
  jmp_buf emlrtJBEnviron;
  jmp_buf *volatile emlrtJBStack;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  emlrtStack j_st;
  emlrtStack k_st;
  emlrtStack l_st;
  emlrtStack m_st;
  emlrtStack n_st;
  emlrtStack o_st;
  emlrtStack p_st;
  emlrtStack q_st;
  emlrtStack r_st;
  emlrtStack s_st;
  emlrtStack st;
  emlrtTimespec expl_temp;
  emxArray_real_T b_vaut_data;
  emxArray_real_T *Dcre;
  emxArray_real_T *V;
  emxArray_real_T *WW;
  emxArray_real_T *a;
  emxArray_real_T *b_vpnew;
  emxArray_real_T *evp;
  emxArray_real_T *qnew;
  emxArray_real_T *varargin_1;
  emxArray_real_T *vpnew;
  real_T Gamma_data[1000];
  real_T W_data[1000];
  real_T b_b_data[1000];
  real_T probDcre_data[1000];
  real_T probVp_data[1000];
  real_T ua_data[1000];
  real_T vaut_data[1000];
  real_T vautnew_data[1000];
  real_T vdnew_data[1000];
  const real_T *pdf_data;
  real_T Dsov;
  real_T WW1;
  real_T alfa;
  real_T b;
  real_T b_avgtime;
  real_T b_c_tmp;
  real_T b_totaltime;
  real_T betta;
  real_T c_tmp;
  real_T cv_bp;
  real_T cv_bpr;
  real_T d;
  real_T diff;
  real_T dist;
  real_T maxWW;
  real_T probDcre_is;
  real_T probVp_is;
  real_T sigg_bp;
  real_T sigg_bpr;
  real_T sigg_defp;
  real_T smctime_tv_nsec;
  real_T smctime_tv_sec;
  real_T sumExp;
  real_T sumExpQ;
  real_T temp;
  real_T theExp;
  real_T *Dcre_data;
  real_T *V_data;
  real_T *WW_data;
  real_T *a_data;
  real_T *bp_data;
  real_T *q_data;
  real_T *qnew_data;
  real_T *rr_data;
  real_T *vp_data;
  real_T *vpnew_data;
  int32_T b_i;
  int32_T b_ib;
  int32_T b_is;
  int32_T c_i;
  int32_T c_ib;
  int32_T c_is;
  int32_T d_ib;
  int32_T d_is;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T ib;
  int32_T idx;
  int32_T iindx;
  int32_T is;
  int32_T its;
  int32_T k;
  int32_T last;
  int32_T loop_ub;
  int32_T m;
  int32_T maxIdx;
  int32_T n;
  int32_T nb;
  int32_T ns;
  int32_T scalarLB;
  int32_T solve_benchmark_parfor_numThreads;
  int32_T ua_size;
  int32_T vaut_size;
  int32_T vautnew_size;
  int32_T vdnew_size;
  boolean_T emlrtHadParallelError = false;
  boolean_T exitg1;
  boolean_T p;
  boolean_T *default_data;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  h_st.prev = &b_st;
  h_st.tls = b_st.tls;
  i_st.prev = &h_st;
  i_st.tls = h_st.tls;
  j_st.prev = &i_st;
  j_st.tls = i_st.tls;
  k_st.prev = &j_st;
  k_st.tls = j_st.tls;
  l_st.prev = &k_st;
  l_st.tls = k_st.tls;
  m_st.prev = &b_st;
  m_st.tls = b_st.tls;
  pdf_data = pdf->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  /*  para = [alfa, betta, phi1, phi2, sigg_bp, sigg_bpr, sigg_defp ] ; */
  alfa = para[0];
  betta = para[1];
  sigg_bp = para[5];
  sigg_bpr = para[6];
  sigg_defp = para[7];
  /* 0.03, long-term bond, coupon rate */
  /* long-term bond, average maturity */
  ns = z_size[0];
  nb = b_size[0];
  m = vp->size[0] * vp->size[1];
  vp->size[0] = z_size[0];
  vp->size[1] = b_size[0];
  emxEnsureCapacity_real_T(sp, vp, m, &h_emlrtRTEI);
  vp_data = vp->data;
  last = z_size[0] * b_size[0];
  for (k = 0; k < last; k++) {
    vp_data[k] = 0.0;
  }
  vd_size[0] = z_size[0];
  for (k = 0; k < ns; k++) {
    vd_data[k] = 0.0;
  }
  emxInit_real_T(sp, &V, 2, &i_emlrtRTEI);
  m = V->size[0] * V->size[1];
  V->size[0] = z_size[0];
  V->size[1] = b_size[0];
  emxEnsureCapacity_real_T(sp, V, m, &i_emlrtRTEI);
  V_data = V->data;
  for (k = 0; k < last; k++) {
    V_data[k] = 0.0;
  }
  emxInit_real_T(sp, &vpnew, 2, &j_emlrtRTEI);
  m = vpnew->size[0] * vpnew->size[1];
  vpnew->size[0] = z_size[0];
  vpnew->size[1] = b_size[0];
  emxEnsureCapacity_real_T(sp, vpnew, m, &j_emlrtRTEI);
  vpnew_data = vpnew->data;
  for (k = 0; k < last; k++) {
    vpnew_data[k] = 0.0;
  }
  m = bp->size[0] * bp->size[1];
  bp->size[0] = z_size[0];
  bp->size[1] = b_size[0];
  emxEnsureCapacity_real_T(sp, bp, m, &k_emlrtRTEI);
  bp_data = bp->data;
  for (k = 0; k < last; k++) {
    bp_data[k] = 0.0;
  }
  /* debt policy function (expressed in indices)   */
  bpr_size[0] = z_size[0];
  if (ns - 1 >= 0) {
    memset(&bpr_data[0], 0, (uint32_T)ns * sizeof(real_T));
  }
  /*  debt policy (index) when decided renegotiate (right after every default)
   */
  m = q->size[0] * q->size[1];
  q->size[0] = z_size[0];
  q->size[1] = b_size[0];
  emxEnsureCapacity_real_T(sp, q, m, &l_emlrtRTEI);
  q_data = q->data;
  for (k = 0; k < last; k++) {
    q_data[k] = 0.9615384615384615;
  }
  /* q is price of debt; it is a function of  (y_t, d_{t+1})  */
  emxInit_real_T(sp, &qnew, 2, &m_emlrtRTEI);
  m = qnew->size[0] * qnew->size[1];
  qnew->size[0] = z_size[0];
  qnew->size[1] = b_size[0];
  emxEnsureCapacity_real_T(sp, qnew, m, &m_emlrtRTEI);
  qnew_data = qnew->data;
  for (k = 0; k < last; k++) {
    qnew_data[k] = 0.0;
  }
  m = rr->size[0] * rr->size[1];
  rr->size[0] = z_size[0];
  rr->size[1] = b_size[0];
  emxEnsureCapacity_real_T(sp, rr, m, &n_emlrtRTEI);
  rr_data = rr->data;
  for (k = 0; k < last; k++) {
    rr_data[k] = 0.4807692307692307;
  }
  emxInit_real_T(sp, &WW, 2, &o_emlrtRTEI);
  m = WW->size[0] * WW->size[1];
  WW->size[0] = b_size[0];
  WW->size[1] = z_size[0];
  emxEnsureCapacity_real_T(sp, WW, m, &o_emlrtRTEI);
  WW_data = WW->data;
  for (k = 0; k < last; k++) {
    WW_data[k] = 0.0;
  }
  if (ns - 1 >= 0) {
    memset(&Gamma_data[0], 0, (uint32_T)ns * sizeof(real_T));
  }
  emxInit_real_T(sp, &Dcre, 2, &p_emlrtRTEI);
  m = Dcre->size[0] * Dcre->size[1];
  Dcre->size[0] = z_size[0];
  Dcre->size[1] = b_size[0];
  emxEnsureCapacity_real_T(sp, Dcre, m, &p_emlrtRTEI);
  Dcre_data = Dcre->data;
  for (k = 0; k < last; k++) {
    Dcre_data[k] = 0.0;
  }
  /*  pdf = sparse(pdf_joint) ; */
  vautnew_size = z_size[0];
  if (ns - 1 >= 0) {
    memcpy(&vautnew_data[0], &z_data[0], (uint32_T)ns * sizeof(real_T));
  }
  b_exp(vautnew_data, &vautnew_size);
  loop_ub = m_size[0];
  if ((vautnew_size != m_size[0]) &&
      ((vautnew_size != 1) && (m_size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(vautnew_size, m_size[0], &t_emlrtECI,
                                (emlrtConstCTX)sp);
  }
  st.site = &emlrtRSI;
  b_st.site = &u_emlrtRSI;
  if (vautnew_size == m_size[0]) {
    dist = 1.0 - para[2];
    ua_size = vautnew_size;
    m = vautnew_size / 2 * 2;
    last = m - 2;
    for (k = 0; k <= last; k += 2) {
      r = _mm_loadu_pd(&vautnew_data[k]);
      r1 = _mm_loadu_pd(&m_data[k]);
      r = _mm_mul_pd(r, r1);
      r = _mm_mul_pd(r, _mm_set1_pd(dist));
      r = _mm_div_pd(_mm_set1_pd(1.0), r);
      r = _mm_sub_pd(r, _mm_set1_pd(1.0));
      r = _mm_mul_pd(r, _mm_set1_pd(-1.0));
      _mm_storeu_pd(&ua_data[k], r);
    }
    for (k = m; k < vautnew_size; k++) {
      ua_data[k] = -(1.0 / (vautnew_data[k] * m_data[k] * dist) - 1.0);
    }
  } else {
    ua_size = binary_expand_op_9(ua_data, vautnew_data, &vautnew_size, m_data,
                                 &m_size[0], para);
  }
  /*  to incorporate taste shocks */
  st.site = &b_emlrtRSI;
  cv_bp = para[5] * -34.538776394910684;
  /*  critical value */
  st.site = &c_emlrtRSI;
  cv_bpr = para[6] * -34.538776394910684;
  /*  critical value */
  if (ns - 1 >= 0) {
    memset(&probDcre_data[0], 0, (uint32_T)ns * sizeof(real_T));
    memset(&probVp_data[0], 0, (uint32_T)ns * sizeof(real_T));
  }
  st.site = &d_emlrtRSI;
  expl_temp = tic(&st);
  smctime_tv_sec = expl_temp.tv_sec;
  smctime_tv_nsec = expl_temp.tv_nsec;
  b_totaltime = 0.0;
  b_avgtime = 0.0;
  dist = 1.0;
  vaut_size = ns;
  if (ns - 1 >= 0) {
    memset(&vaut_data[0], 0, (uint32_T)ns * sizeof(real_T));
  }
  emxInit_real_T(sp, &a, 2, &q_emlrtRTEI);
  emxInit_real_T(sp, &varargin_1, 1, &fb_emlrtRTEI);
  while (dist > 1.0E-8) {
    st.site = &e_emlrtRSI;
    b_st.site = &u_emlrtRSI;
    m = loop_ub / 2 * 2;
    last = m - 2;
    for (k = 0; k <= last; k += 2) {
      r = _mm_loadu_pd(&m_data[k]);
      r = _mm_div_pd(_mm_set1_pd(1.0), r);
      _mm_storeu_pd(&vautnew_data[k], r);
    }
    for (k = m; k < loop_ub; k++) {
      vautnew_data[k] = 1.0 / m_data[k];
    }
    if ((loop_ub != pdf->size[0]) && ((loop_ub != 1) && (pdf->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(loop_ub, pdf->size[0], &s_emlrtECI,
                                  (emlrtConstCTX)sp);
    }
    if (loop_ub == pdf->size[0]) {
      m = a->size[0] * a->size[1];
      a->size[0] = loop_ub;
      n = pdf->size[1];
      a->size[1] = pdf->size[1];
      emxEnsureCapacity_real_T(sp, a, m, &s_emlrtRTEI);
      a_data = a->data;
      for (k = 0; k < n; k++) {
        m = (loop_ub / 2) << 1;
        last = m - 2;
        for (i = 0; i <= last; i += 2) {
          r = _mm_loadu_pd(&vautnew_data[i]);
          _mm_storeu_pd(
              &a_data[i + a->size[0] * k],
              _mm_mul_pd(
                  _mm_mul_pd(r, _mm_loadu_pd(&pdf_data[i + pdf->size[0] * k])),
                  _mm_set1_pd(betta)));
        }
        for (i = m; i < loop_ub; i++) {
          a_data[i + a->size[0] * k] =
              vautnew_data[i] * pdf_data[i + pdf->size[0] * k] * betta;
        }
      }
    } else {
      st.site = &yb_emlrtRSI;
      binary_expand_op_1(&st, a, vautnew_data, &loop_ub, pdf, betta);
    }
    st.site = &e_emlrtRSI;
    b_st.site = &bb_emlrtRSI;
    dynamic_size_checks(&b_st, a, vaut_size, a->size[1], vaut_size);
    b_st.site = &ab_emlrtRSI;
    vautnew_size = mtimes(a, vaut_data, vaut_size, vautnew_data);
    if ((ua_size != vautnew_size) && ((ua_size != 1) && (vautnew_size != 1))) {
      emlrtDimSizeImpxCheckR2021b(ua_size, vautnew_size, &r_emlrtECI,
                                  (emlrtConstCTX)sp);
    }
    if (ua_size == vautnew_size) {
      vautnew_size = ua_size;
      m = (ua_size / 2) << 1;
      last = m - 2;
      for (k = 0; k <= last; k += 2) {
        r = _mm_loadu_pd(&ua_data[k]);
        r1 = _mm_loadu_pd(&vautnew_data[k]);
        _mm_storeu_pd(&vautnew_data[k], _mm_add_pd(r, r1));
      }
      for (k = m; k < ua_size; k++) {
        vautnew_data[k] += ua_data[k];
      }
    } else {
      plus(vautnew_data, &vautnew_size, ua_data, &ua_size);
    }
    if ((vautnew_size != vaut_size) &&
        ((vautnew_size != 1) && (vaut_size != 1))) {
      emlrtDimSizeImpxCheckR2021b(vautnew_size, vaut_size, &q_emlrtECI,
                                  (emlrtConstCTX)sp);
    }
    st.site = &f_emlrtRSI;
    if (vautnew_size == vaut_size) {
      vaut_size = vautnew_size;
      m = (vautnew_size / 2) << 1;
      last = m - 2;
      for (k = 0; k <= last; k += 2) {
        r = _mm_loadu_pd(&vautnew_data[k]);
        r1 = _mm_loadu_pd(&vaut_data[k]);
        _mm_storeu_pd(&vaut_data[k], _mm_sub_pd(r, r1));
      }
      for (k = m; k < vautnew_size; k++) {
        vaut_data[k] = vautnew_data[k] - vaut_data[k];
      }
      b_vaut_data.data = &vaut_data[0];
      b_vaut_data.size = &vaut_size;
      b_vaut_data.allocatedSize = 1000;
      b_vaut_data.numDimensions = 1;
      b_vaut_data.canFreeData = false;
      b_st.site = &f_emlrtRSI;
      b_abs(&b_st, &b_vaut_data, varargin_1);
      V_data = varargin_1->data;
    } else {
      b_st.site = &f_emlrtRSI;
      binary_expand_op(&b_st, varargin_1, vautnew_data, &vautnew_size,
                       vaut_data, &vaut_size);
      V_data = varargin_1->data;
    }
    b_st.site = &eb_emlrtRSI;
    h_st.site = &fb_emlrtRSI;
    i_st.site = &gb_emlrtRSI;
    j_st.site = &hb_emlrtRSI;
    if (varargin_1->size[0] < 1) {
      emlrtErrorWithMessageIdR2018a(
          &j_st, &emlrtRTEI, "Coder:toolbox:eml_min_or_max_varDimZero",
          "Coder:toolbox:eml_min_or_max_varDimZero", 0);
    }
    last = varargin_1->size[0];
    if (varargin_1->size[0] <= 2) {
      if (varargin_1->size[0] == 1) {
        dist = V_data[0];
      } else if ((V_data[0] < V_data[1]) || (muDoubleScalarIsNaN(V_data[0]) &&
                                             !muDoubleScalarIsNaN(V_data[1]))) {
        dist = V_data[1];
      } else {
        dist = V_data[0];
      }
    } else {
      if (!muDoubleScalarIsNaN(V_data[0])) {
        n = 1;
      } else {
        n = 0;
        m = 2;
        exitg1 = false;
        while (!exitg1 && (m <= last)) {
          if (!muDoubleScalarIsNaN(V_data[m - 1])) {
            n = m;
            exitg1 = true;
          } else {
            m++;
          }
        }
      }
      if (n == 0) {
        dist = V_data[0];
      } else {
        dist = V_data[n - 1];
        for (k = n + 1; k <= last; k++) {
          b = V_data[k - 1];
          if (dist < b) {
            dist = b;
          }
        }
      }
    }
    vaut_size = vautnew_size;
    if (vautnew_size - 1 >= 0) {
      memcpy(&vaut_data[0], &vautnew_data[0],
             (uint32_T)vautnew_size * sizeof(real_T));
    }
  }
  /*   the main VFI */
  diff = 1.0;
  its = 1;
  emxInit_real_T(sp, &evp, 2, &eb_emlrtRTEI);
  emxInit_real_T(sp, &b_vpnew, 1, &ab_emlrtRTEI);
  while ((diff > 1.0E-7) && (its < 2000)) {
    st.site = &g_emlrtRSI;
    b_st.site = &u_emlrtRSI;
    m = loop_ub / 2 * 2;
    last = m - 2;
    for (k = 0; k <= last; k += 2) {
      r = _mm_loadu_pd(&m_data[k]);
      r = _mm_div_pd(_mm_set1_pd(1.0), r);
      r = _mm_mul_pd(r, _mm_set1_pd(betta));
      _mm_storeu_pd(&vautnew_data[k], r);
    }
    for (k = m; k < loop_ub; k++) {
      vautnew_data[k] = 1.0 / m_data[k] * betta;
    }
    p = ((loop_ub != pdf->size[0]) && ((loop_ub != 1) && (pdf->size[0] != 1)));
    if (p) {
      emlrtDimSizeImpxCheckR2021b(loop_ub, pdf->size[0], &p_emlrtECI,
                                  (emlrtConstCTX)sp);
    }
    st.site = &g_emlrtRSI;
    if (loop_ub == pdf->size[0]) {
      m = a->size[0] * a->size[1];
      a->size[0] = loop_ub;
      n = pdf->size[1];
      a->size[1] = pdf->size[1];
      emxEnsureCapacity_real_T(&st, a, m, &q_emlrtRTEI);
      a_data = a->data;
      for (k = 0; k < n; k++) {
        m = (loop_ub / 2) << 1;
        last = m - 2;
        for (i = 0; i <= last; i += 2) {
          r = _mm_loadu_pd(&vautnew_data[i]);
          _mm_storeu_pd(
              &a_data[i + a->size[0] * k],
              _mm_mul_pd(r, _mm_loadu_pd(&pdf_data[i + pdf->size[0] * k])));
        }
        for (i = m; i < loop_ub; i++) {
          a_data[i + a->size[0] * k] =
              vautnew_data[i] * pdf_data[i + pdf->size[0] * k];
        }
      }
    } else {
      b_st.site = &g_emlrtRSI;
      binary_expand_op_7(&b_st, a, vautnew_data, &loop_ub, pdf);
    }
    b_st.site = &bb_emlrtRSI;
    b_dynamic_size_checks(&b_st, a, V, a->size[1], V->size[0]);
    b_st.site = &ab_emlrtRSI;
    b_mtimes(&b_st, a, V, evp);
    V_data = evp->data;
    last = ns - 1;
    emlrtEnterParallelRegion((emlrtCTX)sp, omp_in_parallel());
    emlrtPushJmpBuf((emlrtCTX)sp, &emlrtJBStack);
    solve_benchmark_parfor_numThreads = emlrtAllocRegionTLSs(
        sp->tls, omp_in_parallel(), omp_get_max_threads(), omp_get_num_procs());
#pragma omp parallel num_threads(solve_benchmark_parfor_numThreads) private(   \
        theExp, temp, sumExpQ, sumExp, W_data, s_st, d_ib, c_i,                \
            emlrtJBEnviron, c_tmp, b_c_tmp, iindx, idx, exitg1)                \
    firstprivate(e_st, o_st, p_st, q_st, r_st, emlrtHadParallelError)
    {
      if (setjmp(emlrtJBEnviron) == 0) {
        e_st.prev = sp;
        e_st.tls = emlrtAllocTLS((emlrtCTX)sp, omp_get_thread_num());
        e_st.site = NULL;
        emlrtSetJmpBuf(&e_st, &emlrtJBEnviron);
        o_st.prev = &e_st;
        o_st.tls = e_st.tls;
        p_st.prev = &o_st;
        p_st.tls = o_st.tls;
        q_st.prev = &p_st;
        q_st.tls = p_st.tls;
        r_st.prev = &q_st;
        r_st.tls = q_st.tls;
        s_st.prev = &r_st;
        s_st.tls = r_st.tls;
      } else {
        emlrtHadParallelError = true;
      }
#pragma omp for nowait
      for (b_is = 0; b_is <= last; b_is++) {
        if (emlrtHadParallelError) {
          continue;
        }
        if (setjmp(emlrtJBEnviron) == 0) {
          /*  change the loop to y first d second */
          if (nb - 1 >= 0) {
            memset(&W_data[0], 0, (uint32_T)nb * sizeof(real_T));
          }
          for (d_ib = 0; d_ib < nb; d_ib++) {
            for (c_i = 0; c_i < nb; c_i++) {
              if (b_is + 1 > q->size[0]) {
                emlrtDynamicBoundsCheckR2012b(b_is + 1, 1, q->size[0],
                                              &lb_emlrtBCI, &e_st);
              }
              if (c_i + 1 > q->size[1]) {
                emlrtDynamicBoundsCheckR2012b(c_i + 1, 1, q->size[1],
                                              &mb_emlrtBCI, &e_st);
              }
              sumExpQ = q_data[b_is + q->size[0] * c_i];
              if (sumExpQ >= 0.45) {
                if (b_is + 1 > z_size[0]) {
                  emlrtDynamicBoundsCheckR2012b(b_is + 1, 1, z_size[0],
                                                &g_emlrtBCI, &e_st);
                }
                if (b_is + 1 > m_size[0]) {
                  emlrtDynamicBoundsCheckR2012b(b_is + 1, 1, m_size[0],
                                                &qb_emlrtBCI, &e_st);
                }
                if (d_ib + 1 > b_size[0]) {
                  emlrtDynamicBoundsCheckR2012b(d_ib + 1, 1, b_size[0],
                                                &rb_emlrtBCI, &e_st);
                }
                if (b_is + 1 > q->size[0]) {
                  emlrtDynamicBoundsCheckR2012b(b_is + 1, 1, q->size[0],
                                                &sb_emlrtBCI, &e_st);
                }
                if (c_i + 1 > q->size[1]) {
                  emlrtDynamicBoundsCheckR2012b(c_i + 1, 1, q->size[1],
                                                &tb_emlrtBCI, &e_st);
                }
                if (c_i + 1 > b_size[0]) {
                  emlrtDynamicBoundsCheckR2012b(c_i + 1, 1, b_size[0],
                                                &ub_emlrtBCI, &e_st);
                }
                if (b_is + 1 > m_size[0]) {
                  emlrtDynamicBoundsCheckR2012b(b_is + 1, 1, m_size[0],
                                                &vb_emlrtBCI, &e_st);
                }
                if (d_ib + 1 > b_size[0]) {
                  emlrtDynamicBoundsCheckR2012b(d_ib + 1, 1, b_size[0],
                                                &wb_emlrtBCI, &e_st);
                }
                c_tmp = m_data[b_is];
                b_c_tmp = b_data[d_ib];
                sumExpQ = (muDoubleScalarExp(z_data[b_is]) * c_tmp -
                           0.1993 * b_c_tmp) +
                          sumExpQ * (b_data[c_i] * c_tmp - 0.85 * b_c_tmp);
                if (sumExpQ <= 0.0) {
                  if (c_i + 1 > nb) {
                    emlrtDynamicBoundsCheckR2012b(c_i + 1, 1, nb, &ac_emlrtBCI,
                                                  &e_st);
                  }
                  W_data[c_i] = rtMinusInf;
                } else {
                  o_st.site = &h_emlrtRSI;
                  p_st.site = &u_emlrtRSI;
                  if (b_is + 1 > evp->size[0]) {
                    emlrtDynamicBoundsCheckR2012b(b_is + 1, 1, evp->size[0],
                                                  &bc_emlrtBCI, &e_st);
                  }
                  if (c_i + 1 > evp->size[1]) {
                    emlrtDynamicBoundsCheckR2012b(c_i + 1, 1, evp->size[1],
                                                  &cc_emlrtBCI, &e_st);
                  }
                  if (c_i + 1 > nb) {
                    emlrtDynamicBoundsCheckR2012b(c_i + 1, 1, nb, &dc_emlrtBCI,
                                                  &e_st);
                  }
                  W_data[c_i] =
                      (1.0 - 1.0 / sumExpQ) + V_data[b_is + evp->size[0] * c_i];
                }
              } else {
                if (c_i + 1 > nb) {
                  emlrtDynamicBoundsCheckR2012b(c_i + 1, 1, nb, &nb_emlrtBCI,
                                                &e_st);
                }
                W_data[c_i] = rtMinusInf;
              }
              if (*emlrtBreakCheckR2012bFlagVar != 0) {
                emlrtBreakCheckR2012b(&e_st);
              }
            }
            o_st.site = &i_emlrtRSI;
            p_st.site = &ib_emlrtRSI;
            q_st.site = &jb_emlrtRSI;
            r_st.site = &kb_emlrtRSI;
            s_st.site = &hb_emlrtRSI;
            if (nb < 1) {
              emlrtErrorWithMessageIdR2018a(
                  &s_st, &emlrtRTEI, "Coder:toolbox:eml_min_or_max_varDimZero",
                  "Coder:toolbox:eml_min_or_max_varDimZero", 0);
            }
            if (nb <= 2) {
              if (nb == 1) {
                sumExpQ = W_data[0];
                iindx = 1;
              } else if ((W_data[0] < W_data[1]) ||
                         (muDoubleScalarIsNaN(W_data[0]) &&
                          !muDoubleScalarIsNaN(W_data[1]))) {
                sumExpQ = W_data[1];
                iindx = 2;
              } else {
                sumExpQ = W_data[0];
                iindx = 1;
              }
            } else {
              if (!muDoubleScalarIsNaN(W_data[0])) {
                idx = 1;
              } else {
                idx = 0;
                iindx = 2;
                exitg1 = false;
                while (!exitg1 && (iindx <= nb)) {
                  if (!muDoubleScalarIsNaN(W_data[iindx - 1])) {
                    idx = iindx;
                    exitg1 = true;
                  } else {
                    iindx++;
                  }
                }
              }
              if (idx == 0) {
                sumExpQ = W_data[0];
                iindx = 1;
              } else {
                sumExpQ = W_data[idx - 1];
                iindx = idx;
                for (c_i = idx + 1; c_i <= nb; c_i++) {
                  c_tmp = W_data[c_i - 1];
                  if (sumExpQ < c_tmp) {
                    sumExpQ = c_tmp;
                    iindx = c_i;
                  }
                }
              }
            }
            if (b_is + 1 > vpnew->size[0]) {
              emlrtDynamicBoundsCheckR2012b(b_is + 1, 1, vpnew->size[0],
                                            &ec_emlrtBCI, &e_st);
            }
            if (d_ib + 1 > vpnew->size[1]) {
              emlrtDynamicBoundsCheckR2012b(d_ib + 1, 1, vpnew->size[1],
                                            &fc_emlrtBCI, &e_st);
            }
            vpnew_data[b_is + vpnew->size[0] * d_ib] = sumExpQ;
            if (b_is + 1 > bp->size[0]) {
              emlrtDynamicBoundsCheckR2012b(b_is + 1, 1, bp->size[0],
                                            &gc_emlrtBCI, &e_st);
            }
            if (d_ib + 1 > bp->size[1]) {
              emlrtDynamicBoundsCheckR2012b(d_ib + 1, 1, bp->size[1],
                                            &hc_emlrtBCI, &e_st);
            }
            bp_data[b_is + bp->size[0] * d_ib] = iindx;
            sumExp = 0.0;
            sumExpQ = 0.0;
            for (c_i = 0; c_i < nb; c_i++) {
              if (c_i + 1 > nb) {
                emlrtDynamicBoundsCheckR2012b(c_i + 1, 1, nb, &kc_emlrtBCI,
                                              &e_st);
              }
              if (b_is + 1 > vpnew->size[0]) {
                emlrtDynamicBoundsCheckR2012b(b_is + 1, 1, vpnew->size[0],
                                              &lc_emlrtBCI, &e_st);
              }
              if (d_ib + 1 > vpnew->size[1]) {
                emlrtDynamicBoundsCheckR2012b(d_ib + 1, 1, vpnew->size[1],
                                              &mc_emlrtBCI, &e_st);
              }
              temp = (W_data[c_i] - vpnew_data[b_is + vpnew->size[0] * d_ib]) -
                     cv_bp;
              if (temp > 0.0) {
                theExp = muDoubleScalarExp((temp + cv_bp) / sigg_bp);
                /*  Compute theExp */
                sumExp += theExp;
                /*  Accumulate theExp */
                if (b_is + 1 > q->size[0]) {
                  emlrtDynamicBoundsCheckR2012b(b_is + 1, 1, q->size[0],
                                                &nc_emlrtBCI, &e_st);
                }
                if (c_i + 1 > q->size[1]) {
                  emlrtDynamicBoundsCheckR2012b(c_i + 1, 1, q->size[1],
                                                &oc_emlrtBCI, &e_st);
                }
                sumExpQ += theExp * q_data[b_is + q->size[0] * c_i];
                /*  Accumulate theExpQ */
              }
              if (*emlrtBreakCheckR2012bFlagVar != 0) {
                emlrtBreakCheckR2012b(&e_st);
              }
            }
            if (b_is + 1 > qnew->size[0]) {
              emlrtDynamicBoundsCheckR2012b(b_is + 1, 1, qnew->size[0],
                                            &ic_emlrtBCI, &e_st);
            }
            if (d_ib + 1 > qnew->size[1]) {
              emlrtDynamicBoundsCheckR2012b(d_ib + 1, 1, qnew->size[1],
                                            &jc_emlrtBCI, &e_st);
            }
            qnew_data[b_is + qnew->size[0] * d_ib] =
                0.85 * (sumExpQ / sumExp + 0.058) + 0.15;
            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b(&e_st);
            }
          }
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(&e_st);
          }
        } else {
          emlrtHadParallelError = true;
        }
      }
    }
    emlrtPopJmpBuf((emlrtCTX)sp, &emlrtJBStack);
    emlrtExitParallelRegion((emlrtCTX)sp, omp_in_parallel());
    m = ns - 1;
    emlrtEnterParallelRegion((emlrtCTX)sp, omp_in_parallel());
    emlrtPushJmpBuf((emlrtCTX)sp, &emlrtJBStack);
    solve_benchmark_parfor_numThreads = emlrtAllocRegionTLSs(
        sp->tls, omp_in_parallel(), omp_get_max_threads(), omp_get_num_procs());
#pragma omp parallel num_threads(solve_benchmark_parfor_numThreads) private(   \
        Dsov, maxWW, n_st, b_ib, emlrtJBEnviron, i2, d)                        \
    firstprivate(f_st, emlrtHadParallelError)
    {
      if (setjmp(emlrtJBEnviron) == 0) {
        f_st.prev = sp;
        f_st.tls = emlrtAllocTLS((emlrtCTX)sp, omp_get_thread_num());
        f_st.site = NULL;
        emlrtSetJmpBuf(&f_st, &emlrtJBEnviron);
        n_st.prev = &f_st;
        n_st.tls = f_st.tls;
      } else {
        emlrtHadParallelError = true;
      }
#pragma omp for nowait
      for (c_is = 0; c_is <= m; c_is++) {
        if (emlrtHadParallelError) {
          continue;
        }
        if (setjmp(emlrtJBEnviron) == 0) {
          maxWW = rtMinusInf;
          /*  To store the maximum value of WW */
          for (b_ib = 0; b_ib < nb; b_ib++) {
            if (c_is + 1 > vpnew->size[0]) {
              emlrtDynamicBoundsCheckR2012b(c_is + 1, 1, vpnew->size[0],
                                            &f_emlrtBCI, &f_st);
            }
            if (b_ib + 1 > vpnew->size[1]) {
              emlrtDynamicBoundsCheckR2012b(b_ib + 1, 1, vpnew->size[1],
                                            &e_emlrtBCI, &f_st);
            }
            if (c_is + 1 > vaut_size) {
              emlrtDynamicBoundsCheckR2012b(c_is + 1, 1, vaut_size, &d_emlrtBCI,
                                            &f_st);
            }
            Dsov = muDoubleScalarMax(0.0,
                                     vpnew_data[c_is + vpnew->size[0] * b_ib] -
                                         vaut_data[c_is]);
            if (c_is + 1 > q->size[0]) {
              emlrtDynamicBoundsCheckR2012b(c_is + 1, 1, q->size[0],
                                            &o_emlrtBCI, &f_st);
            }
            if (c_is + 1 > bp->size[0]) {
              emlrtDynamicBoundsCheckR2012b(c_is + 1, 1, bp->size[0],
                                            &q_emlrtBCI, &f_st);
            }
            if (b_ib + 1 > bp->size[1]) {
              emlrtDynamicBoundsCheckR2012b(b_ib + 1, 1, bp->size[1],
                                            &r_emlrtBCI, &f_st);
            }
            i2 = (int32_T)bp_data[c_is + bp->size[0] * b_ib];
            if ((i2 < 1) || (i2 > q->size[1])) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, q->size[1], &p_emlrtBCI,
                                            &f_st);
            }
            if (b_ib + 1 > b_size[0]) {
              emlrtDynamicBoundsCheckR2012b(b_ib + 1, 1, b_size[0], &s_emlrtBCI,
                                            &f_st);
            }
            if (c_is + 1 > Dcre->size[0]) {
              emlrtDynamicBoundsCheckR2012b(c_is + 1, 1, Dcre->size[0],
                                            &t_emlrtBCI, &f_st);
            }
            if (b_ib + 1 > Dcre->size[1]) {
              emlrtDynamicBoundsCheckR2012b(b_ib + 1, 1, Dcre->size[1],
                                            &u_emlrtBCI, &f_st);
            }
            Dcre_data[c_is + Dcre->size[0] * b_ib] =
                (0.85 * (q_data[c_is + q->size[0] * (i2 - 1)] + 0.058) + 0.15) *
                b_data[b_ib];
            if (c_is + 1 > Dcre->size[0]) {
              emlrtDynamicBoundsCheckR2012b(c_is + 1, 1, Dcre->size[0],
                                            &v_emlrtBCI, &f_st);
            }
            if (b_ib + 1 > Dcre->size[1]) {
              emlrtDynamicBoundsCheckR2012b(b_ib + 1, 1, Dcre->size[1],
                                            &w_emlrtBCI, &f_st);
            }
            if (b_ib + 1 > WW->size[0]) {
              emlrtDynamicBoundsCheckR2012b(b_ib + 1, 1, WW->size[0],
                                            &x_emlrtBCI, &f_st);
            }
            if (c_is + 1 > WW->size[1]) {
              emlrtDynamicBoundsCheckR2012b(c_is + 1, 1, WW->size[1],
                                            &y_emlrtBCI, &f_st);
            }
            n_st.site = &j_emlrtRSI;
            WW_data[b_ib + WW->size[0] * c_is] =
                mpower(&n_st, Dsov, alfa) *
                mpower(&n_st, Dcre_data[c_is + Dcre->size[0] * b_ib],
                       1.0 - alfa);
            if (b_ib + 1 > WW->size[0]) {
              emlrtDynamicBoundsCheckR2012b(b_ib + 1, 1, WW->size[0],
                                            &ab_emlrtBCI, &f_st);
            }
            if (c_is + 1 > WW->size[1]) {
              emlrtDynamicBoundsCheckR2012b(c_is + 1, 1, WW->size[1],
                                            &bb_emlrtBCI, &f_st);
            }
            d = WW_data[b_ib + WW->size[0] * c_is];
            if (d > maxWW) {
              if (b_ib + 1 > WW->size[0]) {
                emlrtDynamicBoundsCheckR2012b(b_ib + 1, 1, WW->size[0],
                                              &fb_emlrtBCI, &f_st);
              }
              if (c_is + 1 > WW->size[1]) {
                emlrtDynamicBoundsCheckR2012b(c_is + 1, 1, WW->size[1],
                                              &gb_emlrtBCI, &f_st);
              }
              maxWW = d;
              /*  Update maximum value */
            }
            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b(&f_st);
            }
          }
          if (c_is + 1 > ns) {
            emlrtDynamicBoundsCheckR2012b(c_is + 1, 1, ns, &n_emlrtBCI, &f_st);
          }
          Gamma_data[c_is] = maxWW;
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(&f_st);
          }
        } else {
          emlrtHadParallelError = true;
        }
      }
    }
    emlrtPopJmpBuf((emlrtCTX)sp, &emlrtJBStack);
    emlrtExitParallelRegion((emlrtCTX)sp, omp_in_parallel());
    m = ns - 1;
    emlrtEnterParallelRegion((emlrtCTX)sp, omp_in_parallel());
    emlrtPushJmpBuf((emlrtCTX)sp, &emlrtJBStack);
    solve_benchmark_parfor_numThreads = emlrtAllocRegionTLSs(
        sp->tls, omp_in_parallel(), omp_get_max_threads(), omp_get_num_procs());
#pragma omp parallel num_threads(solve_benchmark_parfor_numThreads) private(   \
        theExp, temp, probVp_is, probDcre_is, sumExp, g_st, c_ib,              \
            emlrtJBEnviron) firstprivate(emlrtHadParallelError)
    {
      if (setjmp(emlrtJBEnviron) == 0) {
        g_st.prev = sp;
        g_st.tls = emlrtAllocTLS((emlrtCTX)sp, omp_get_thread_num());
        g_st.site = NULL;
        emlrtSetJmpBuf(&g_st, &emlrtJBEnviron);
      } else {
        emlrtHadParallelError = true;
      }
#pragma omp for nowait
      for (d_is = 0; d_is <= m; d_is++) {
        if (emlrtHadParallelError) {
          continue;
        }
        if (setjmp(emlrtJBEnviron) == 0) {
          sumExp = 0.0;
          probDcre_is = 0.0;
          probVp_is = 0.0;
          for (c_ib = 0; c_ib < nb; c_ib++) {
            if (c_ib + 1 > WW->size[0]) {
              emlrtDynamicBoundsCheckR2012b(c_ib + 1, 1, WW->size[0],
                                            &cb_emlrtBCI, &g_st);
            }
            if (d_is + 1 > WW->size[1]) {
              emlrtDynamicBoundsCheckR2012b(d_is + 1, 1, WW->size[1],
                                            &db_emlrtBCI, &g_st);
            }
            if (d_is + 1 > ns) {
              emlrtDynamicBoundsCheckR2012b(d_is + 1, 1, ns, &eb_emlrtBCI,
                                            &g_st);
            }
            temp = (WW_data[c_ib + WW->size[0] * d_is] - Gamma_data[d_is]) -
                   cv_bpr;
            if (temp > 0.0) {
              theExp = muDoubleScalarExp((temp + cv_bpr) / sigg_bpr);
              sumExp += theExp;
              /*  Accumulate sums directly */
              if (d_is + 1 > Dcre->size[0]) {
                emlrtDynamicBoundsCheckR2012b(d_is + 1, 1, Dcre->size[0],
                                              &ob_emlrtBCI, &g_st);
              }
              if (c_ib + 1 > Dcre->size[1]) {
                emlrtDynamicBoundsCheckR2012b(c_ib + 1, 1, Dcre->size[1],
                                              &pb_emlrtBCI, &g_st);
              }
              probDcre_is += theExp * Dcre_data[d_is + Dcre->size[0] * c_ib];
              if (d_is + 1 > vpnew->size[0]) {
                emlrtDynamicBoundsCheckR2012b(d_is + 1, 1, vpnew->size[0],
                                              &xb_emlrtBCI, &g_st);
              }
              if (c_ib + 1 > vpnew->size[1]) {
                emlrtDynamicBoundsCheckR2012b(c_ib + 1, 1, vpnew->size[1],
                                              &yb_emlrtBCI, &g_st);
              }
              probVp_is += theExp * vpnew_data[d_is + vpnew->size[0] * c_ib];
            }
            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b(&g_st);
            }
          }
          if (sumExp > 0.0) {
            if (d_is + 1 > ns) {
              emlrtDynamicBoundsCheckR2012b(d_is + 1, 1, ns, &ib_emlrtBCI,
                                            &g_st);
            }
            probDcre_data[d_is] = probDcre_is / sumExp;
            if (d_is + 1 > ns) {
              emlrtDynamicBoundsCheckR2012b(d_is + 1, 1, ns, &kb_emlrtBCI,
                                            &g_st);
            }
            probVp_data[d_is] = probVp_is / sumExp;
          } else {
            if (d_is + 1 > ns) {
              emlrtDynamicBoundsCheckR2012b(d_is + 1, 1, ns, &hb_emlrtBCI,
                                            &g_st);
            }
            probDcre_data[d_is] = 0.0;
            if (d_is + 1 > ns) {
              emlrtDynamicBoundsCheckR2012b(d_is + 1, 1, ns, &jb_emlrtBCI,
                                            &g_st);
            }
            probVp_data[d_is] = 0.0;
          }
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(&g_st);
          }
        } else {
          emlrtHadParallelError = true;
        }
      }
    }
    emlrtPopJmpBuf((emlrtCTX)sp, &emlrtJBStack);
    emlrtExitParallelRegion((emlrtCTX)sp, omp_in_parallel());
    st.site = &k_emlrtRSI;
    b_st.site = &u_emlrtRSI;
    m = loop_ub / 2 * 2;
    last = m - 2;
    for (k = 0; k <= last; k += 2) {
      r = _mm_loadu_pd(&m_data[k]);
      r = _mm_div_pd(_mm_set1_pd(1.0), r);
      r = _mm_mul_pd(r, _mm_set1_pd(betta));
      _mm_storeu_pd(&vautnew_data[k], r);
    }
    for (k = m; k < loop_ub; k++) {
      vautnew_data[k] = 1.0 / m_data[k] * betta;
    }
    vautnew_size = ns;
    scalarLB = (ns / 2) << 1;
    m = scalarLB - 2;
    for (k = 0; k <= m; k += 2) {
      r = _mm_loadu_pd(&probVp_data[k]);
      _mm_storeu_pd(&b_b_data[k], _mm_mul_pd(_mm_set1_pd(0.154), r));
    }
    for (k = scalarLB; k < ns; k++) {
      b_b_data[k] = 0.154 * probVp_data[k];
    }
    m = vd_size[0];
    vdnew_size = vd_size[0];
    last = (vd_size[0] / 2) << 1;
    n = last - 2;
    for (k = 0; k <= n; k += 2) {
      _mm_storeu_pd(&vdnew_data[k],
                    _mm_mul_pd(_mm_set1_pd(0.846), _mm_loadu_pd(&vd_data[k])));
    }
    for (k = last; k < m; k++) {
      vdnew_data[k] = 0.846 * vd_data[k];
    }
    if ((ns != vdnew_size) && ((ns != 1) && (vdnew_size != 1))) {
      emlrtDimSizeImpxCheckR2021b(ns, vdnew_size, &o_emlrtECI,
                                  (emlrtConstCTX)sp);
    }
    st.site = &k_emlrtRSI;
    if (loop_ub == pdf->size[0]) {
      m = a->size[0] * a->size[1];
      a->size[0] = loop_ub;
      n = pdf->size[1];
      a->size[1] = pdf->size[1];
      emxEnsureCapacity_real_T(&st, a, m, &t_emlrtRTEI);
      a_data = a->data;
      for (k = 0; k < n; k++) {
        m = (loop_ub / 2) << 1;
        last = m - 2;
        for (i = 0; i <= last; i += 2) {
          r = _mm_loadu_pd(&vautnew_data[i]);
          _mm_storeu_pd(
              &a_data[i + a->size[0] * k],
              _mm_mul_pd(r, _mm_loadu_pd(&pdf_data[i + pdf->size[0] * k])));
        }
        for (i = m; i < loop_ub; i++) {
          a_data[i + a->size[0] * k] =
              vautnew_data[i] * pdf_data[i + pdf->size[0] * k];
        }
      }
    } else {
      b_st.site = &k_emlrtRSI;
      binary_expand_op_7(&b_st, a, vautnew_data, &loop_ub, pdf);
    }
    if (ns == vdnew_size) {
      m = scalarLB - 2;
      for (k = 0; k <= m; k += 2) {
        r = _mm_loadu_pd(&b_b_data[k]);
        r1 = _mm_loadu_pd(&vdnew_data[k]);
        _mm_storeu_pd(&b_b_data[k], _mm_add_pd(r, r1));
      }
      for (k = scalarLB; k < ns; k++) {
        b_b_data[k] += vdnew_data[k];
      }
    } else {
      c_plus(b_b_data, &vautnew_size, vdnew_data, &vdnew_size);
    }
    b_st.site = &bb_emlrtRSI;
    dynamic_size_checks(&b_st, a, vautnew_size, a->size[1], vautnew_size);
    b_st.site = &ab_emlrtRSI;
    vdnew_size = mtimes(a, b_b_data, vautnew_size, vdnew_data);
    if ((ua_size != vdnew_size) && ((ua_size != 1) && (vdnew_size != 1))) {
      emlrtDimSizeImpxCheckR2021b(ua_size, vdnew_size, &n_emlrtECI,
                                  (emlrtConstCTX)sp);
    }
    if (ua_size == vdnew_size) {
      vdnew_size = ua_size;
      m = (ua_size / 2) << 1;
      last = m - 2;
      for (k = 0; k <= last; k += 2) {
        r = _mm_loadu_pd(&ua_data[k]);
        r1 = _mm_loadu_pd(&vdnew_data[k]);
        _mm_storeu_pd(&vdnew_data[k], _mm_add_pd(r, r1));
      }
      for (k = m; k < ua_size; k++) {
        vdnew_data[k] += ua_data[k];
      }
    } else {
      plus(vdnew_data, &vdnew_size, ua_data, &ua_size);
    }
    n = vpnew->size[0];
    if ((vpnew->size[0] != vdnew_size) &&
        ((vpnew->size[0] != 1) && (vdnew_size != 1))) {
      emlrtDimSizeImpxCheckR2021b(vpnew->size[0], vdnew_size, &m_emlrtECI,
                                  (emlrtConstCTX)sp);
    }
    if (vpnew->size[0] == vdnew_size) {
      m = evp->size[0] * evp->size[1];
      evp->size[0] = vpnew->size[0];
      vautnew_size = vpnew->size[1];
      evp->size[1] = vpnew->size[1];
      emxEnsureCapacity_real_T(sp, evp, m, &u_emlrtRTEI);
      V_data = evp->data;
      for (k = 0; k < vautnew_size; k++) {
        m = (vpnew->size[0] / 2) << 1;
        last = m - 2;
        for (i = 0; i <= last; i += 2) {
          r = _mm_loadu_pd(&vpnew_data[i + vpnew->size[0] * k]);
          r1 = _mm_loadu_pd(&vdnew_data[i]);
          _mm_storeu_pd(&V_data[i + evp->size[0] * k],
                        _mm_div_pd(_mm_sub_pd(r, r1), _mm_set1_pd(sigg_defp)));
        }
        for (i = m; i < n; i++) {
          V_data[i + evp->size[0] * k] =
              (vpnew_data[i + vpnew->size[0] * k] - vdnew_data[i]) / sigg_defp;
        }
      }
    } else {
      binary_expand_op_6(sp, evp, vpnew, vdnew_data, &vdnew_size, sigg_defp);
    }
    st.site = &xb_emlrtRSI;
    c_exp(&st, evp);
    V_data = evp->data;
    m = evp->size[0] * evp->size[1];
    last = (m / 2) << 1;
    n = last - 2;
    for (k = 0; k <= n; k += 2) {
      r = _mm_set1_pd(1.0);
      _mm_storeu_pd(&V_data[k],
                    _mm_div_pd(r, _mm_add_pd(_mm_loadu_pd(&V_data[k]), r)));
    }
    for (k = last; k < m; k++) {
      V_data[k] = 1.0 / (V_data[k] + 1.0);
    }
    m = rr->size[0] * rr->size[1];
    last = (m / 2) << 1;
    n = last - 2;
    for (k = 0; k <= n; k += 2) {
      _mm_storeu_pd(&rr_data[k],
                    _mm_mul_pd(_mm_set1_pd(0.846), _mm_loadu_pd(&rr_data[k])));
    }
    for (k = last; k < m; k++) {
      rr_data[k] *= 0.846;
    }
    m = scalarLB - 2;
    for (k = 0; k <= m; k += 2) {
      r = _mm_loadu_pd(&probDcre_data[k]);
      _mm_storeu_pd(&vautnew_data[k], _mm_mul_pd(_mm_set1_pd(0.154), r));
    }
    for (k = scalarLB; k < ns; k++) {
      vautnew_data[k] = 0.154 * probDcre_data[k];
    }
    m = a->size[0] * a->size[1];
    a->size[0] = ns;
    a->size[1] = nb;
    emxEnsureCapacity_real_T(sp, a, m, &v_emlrtRTEI);
    a_data = a->data;
    for (k = 0; k < nb; k++) {
      m = scalarLB - 2;
      for (i = 0; i <= m; i += 2) {
        r = _mm_loadu_pd(&vautnew_data[i]);
        _mm_storeu_pd(&a_data[i + a->size[0] * k],
                      _mm_div_pd(r, _mm_set1_pd(b_data[k])));
      }
      for (i = scalarLB; i < ns; i++) {
        a_data[i + a->size[0] * k] = vautnew_data[i] / b_data[k];
      }
    }
    if ((rr->size[0] != a->size[0]) &&
        ((rr->size[0] != 1) && (a->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(rr->size[0], a->size[0], &l_emlrtECI,
                                  (emlrtConstCTX)sp);
    }
    if ((rr->size[1] != a->size[1]) &&
        ((rr->size[1] != 1) && (a->size[1] != 1))) {
      emlrtDimSizeImpxCheckR2021b(rr->size[1], a->size[1], &k_emlrtECI,
                                  (emlrtConstCTX)sp);
    }
    st.site = &l_emlrtRSI;
    if ((rr->size[0] == a->size[0]) && (rr->size[1] == a->size[1])) {
      m = rr->size[0] * rr->size[1];
      last = (m / 2) << 1;
      n = last - 2;
      for (k = 0; k <= n; k += 2) {
        _mm_storeu_pd(&rr_data[k], _mm_add_pd(_mm_loadu_pd(&rr_data[k]),
                                              _mm_loadu_pd(&a_data[k])));
      }
      for (k = last; k < m; k++) {
        rr_data[k] += a_data[k];
      }
    } else {
      b_st.site = &l_emlrtRSI;
      b_plus(&b_st, rr, a);
    }
    b_st.site = &bb_emlrtRSI;
    b_dynamic_size_checks(&b_st, pdf, rr, pdf->size[1], rr->size[0]);
    b_st.site = &ab_emlrtRSI;
    b_mtimes(&b_st, pdf, rr, a);
    a_data = a->data;
    m = rr->size[0] * rr->size[1];
    rr->size[0] = a->size[0];
    rr->size[1] = a->size[1];
    emxEnsureCapacity_real_T(sp, rr, m, &w_emlrtRTEI);
    rr_data = rr->data;
    m = a->size[0] * a->size[1];
    last = (m / 2) << 1;
    n = last - 2;
    for (k = 0; k <= n; k += 2) {
      _mm_storeu_pd(&rr_data[k],
                    _mm_div_pd(_mm_loadu_pd(&a_data[k]), _mm_set1_pd(1.04)));
    }
    for (k = last; k < m; k++) {
      rr_data[k] = a_data[k] / 1.04;
    }
    if ((evp->size[0] != rr->size[0]) &&
        ((evp->size[0] != 1) && (rr->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(evp->size[0], rr->size[0], &h_emlrtECI,
                                  (emlrtConstCTX)sp);
    }
    if ((evp->size[1] != rr->size[1]) &&
        ((evp->size[1] != 1) && (rr->size[1] != 1))) {
      emlrtDimSizeImpxCheckR2021b(evp->size[1], rr->size[1], &g_emlrtECI,
                                  (emlrtConstCTX)sp);
    }
    if ((evp->size[0] != qnew->size[0]) &&
        ((evp->size[0] != 1) && (qnew->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(evp->size[0], qnew->size[0], &j_emlrtECI,
                                  (emlrtConstCTX)sp);
    }
    if ((evp->size[1] != qnew->size[1]) &&
        ((evp->size[1] != 1) && (qnew->size[1] != 1))) {
      emlrtDimSizeImpxCheckR2021b(evp->size[1], qnew->size[1], &i_emlrtECI,
                                  (emlrtConstCTX)sp);
    }
    if ((evp->size[0] == rr->size[0]) && (evp->size[1] == rr->size[1])) {
      m = a->size[0] * a->size[1];
      a->size[0] = evp->size[0];
      a->size[1] = evp->size[1];
      emxEnsureCapacity_real_T(sp, a, m, &x_emlrtRTEI);
      a_data = a->data;
      m = evp->size[0] * evp->size[1];
      last = (m / 2) << 1;
      n = last - 2;
      for (k = 0; k <= n; k += 2) {
        _mm_storeu_pd(&a_data[k], _mm_mul_pd(_mm_loadu_pd(&V_data[k]),
                                             _mm_loadu_pd(&rr_data[k])));
      }
      for (k = last; k < m; k++) {
        a_data[k] = V_data[k] * rr_data[k];
      }
    } else {
      st.site = &m_emlrtRSI;
      times(&st, a, evp, rr);
      a_data = a->data;
    }
    if ((evp->size[0] == qnew->size[0]) && (evp->size[1] == qnew->size[1])) {
      m = evp->size[0] * evp->size[1];
      last = (m / 2) << 1;
      n = last - 2;
      for (k = 0; k <= n; k += 2) {
        _mm_storeu_pd(
            &V_data[k],
            _mm_mul_pd(_mm_sub_pd(_mm_set1_pd(1.0), _mm_loadu_pd(&V_data[k])),
                       _mm_loadu_pd(&qnew_data[k])));
      }
      for (k = last; k < m; k++) {
        V_data[k] = (1.0 - V_data[k]) * qnew_data[k];
      }
    } else {
      st.site = &m_emlrtRSI;
      binary_expand_op_5(&st, evp, qnew);
      V_data = evp->data;
    }
    if ((a->size[0] != evp->size[0]) &&
        ((a->size[0] != 1) && (evp->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(a->size[0], evp->size[0], &h_emlrtECI,
                                  (emlrtConstCTX)sp);
    }
    if ((a->size[1] != evp->size[1]) &&
        ((a->size[1] != 1) && (evp->size[1] != 1))) {
      emlrtDimSizeImpxCheckR2021b(a->size[1], evp->size[1], &g_emlrtECI,
                                  (emlrtConstCTX)sp);
    }
    st.site = &m_emlrtRSI;
    if ((a->size[0] == evp->size[0]) && (a->size[1] == evp->size[1])) {
      m = a->size[0] * a->size[1];
      last = (m / 2) << 1;
      n = last - 2;
      for (k = 0; k <= n; k += 2) {
        _mm_storeu_pd(&a_data[k], _mm_add_pd(_mm_loadu_pd(&a_data[k]),
                                             _mm_loadu_pd(&V_data[k])));
      }
      for (k = last; k < m; k++) {
        a_data[k] += V_data[k];
      }
    } else {
      b_st.site = &m_emlrtRSI;
      b_plus(&b_st, a, evp);
    }
    b_st.site = &bb_emlrtRSI;
    b_dynamic_size_checks(&b_st, pdf, a, pdf->size[1], a->size[0]);
    b_st.site = &ab_emlrtRSI;
    b_mtimes(&b_st, pdf, a, qnew);
    qnew_data = qnew->data;
    m = qnew->size[0] * qnew->size[1];
    last = (m / 2) << 1;
    n = last - 2;
    for (k = 0; k <= n; k += 2) {
      _mm_storeu_pd(&qnew_data[k],
                    _mm_div_pd(_mm_loadu_pd(&qnew_data[k]), _mm_set1_pd(1.04)));
    }
    for (k = last; k < m; k++) {
      qnew_data[k] /= 1.04;
    }
    if ((qnew->size[0] != q->size[0]) &&
        ((qnew->size[0] != 1) && (q->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(qnew->size[0], q->size[0], &f_emlrtECI,
                                  (emlrtConstCTX)sp);
    }
    if ((qnew->size[1] != q->size[1]) &&
        ((qnew->size[1] != 1) && (q->size[1] != 1))) {
      emlrtDimSizeImpxCheckR2021b(qnew->size[1], q->size[1], &e_emlrtECI,
                                  (emlrtConstCTX)sp);
    }
    scalarLB = vpnew->size[0] * vpnew->size[1];
    vautnew_size = vp->size[0] * vp->size[1];
    if ((scalarLB != vautnew_size) &&
        ((scalarLB != 1) && (vautnew_size != 1))) {
      emlrtDimSizeImpxCheckR2021b(scalarLB, vautnew_size, &d_emlrtECI,
                                  (emlrtConstCTX)sp);
    }
    if ((vdnew_size != vd_size[0]) &&
        ((vdnew_size != 1) && (vd_size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(vdnew_size, vd_size[0], &c_emlrtECI,
                                  (emlrtConstCTX)sp);
    }
    st.site = &n_emlrtRSI;
    if ((qnew->size[0] == q->size[0]) && (qnew->size[1] == q->size[1])) {
      m = V->size[0] * V->size[1];
      V->size[0] = qnew->size[0];
      V->size[1] = qnew->size[1];
      emxEnsureCapacity_real_T(&st, V, m, &y_emlrtRTEI);
      V_data = V->data;
      m = qnew->size[0] * qnew->size[1];
      last = (m / 2) << 1;
      n = last - 2;
      for (k = 0; k <= n; k += 2) {
        _mm_storeu_pd(&V_data[k], _mm_sub_pd(_mm_loadu_pd(&qnew_data[k]),
                                             _mm_loadu_pd(&q_data[k])));
      }
      for (k = last; k < m; k++) {
        V_data[k] = qnew_data[k] - q_data[k];
      }
      b_st.site = &n_emlrtRSI;
      c_abs(&b_st, V, a);
      a_data = a->data;
    } else {
      b_st.site = &n_emlrtRSI;
      binary_expand_op_4(&b_st, a, qnew, q);
      a_data = a->data;
    }
    b_st.site = &eb_emlrtRSI;
    h_st.site = &fb_emlrtRSI;
    i_st.site = &mb_emlrtRSI;
    if (((a->size[0] != 1) || (a->size[1] != 1)) && (a->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(&i_st, &b_emlrtRTEI,
                                    "Coder:toolbox:autoDimIncompatibility",
                                    "Coder:toolbox:autoDimIncompatibility", 0);
    }
    if (a->size[0] < 1) {
      emlrtErrorWithMessageIdR2018a(
          &i_st, &emlrtRTEI, "Coder:toolbox:eml_min_or_max_varDimZero",
          "Coder:toolbox:eml_min_or_max_varDimZero", 0);
    }
    m = a->size[0];
    n = a->size[1];
    last = a->size[1];
    if (a->size[1] >= 1) {
      for (k = 0; k < n; k++) {
        vautnew_data[k] = a_data[a->size[0] * k];
        for (i = 2; i <= m; i++) {
          dist = vautnew_data[k];
          b = a_data[(i + a->size[0] * k) - 1];
          if (muDoubleScalarIsNaN(b)) {
            p = false;
          } else if (muDoubleScalarIsNaN(dist)) {
            p = true;
          } else {
            p = (dist < b);
          }
          if (p) {
            vautnew_data[k] = b;
          }
        }
      }
    }
    st.site = &n_emlrtRSI;
    b_st.site = &eb_emlrtRSI;
    h_st.site = &fb_emlrtRSI;
    i_st.site = &gb_emlrtRSI;
    j_st.site = &hb_emlrtRSI;
    if (last < 1) {
      emlrtErrorWithMessageIdR2018a(
          &j_st, &emlrtRTEI, "Coder:toolbox:eml_min_or_max_varDimZero",
          "Coder:toolbox:eml_min_or_max_varDimZero", 0);
    }
    if (last <= 2) {
      if (last == 1) {
        b_avgtime = vautnew_data[0];
      } else if ((vautnew_data[0] < vautnew_data[1]) ||
                 (muDoubleScalarIsNaN(vautnew_data[0]) &&
                  !muDoubleScalarIsNaN(vautnew_data[1]))) {
        b_avgtime = vautnew_data[1];
      } else {
        b_avgtime = vautnew_data[0];
      }
    } else {
      if (!muDoubleScalarIsNaN(vautnew_data[0])) {
        last = 1;
      } else {
        last = 0;
        m = 2;
        exitg1 = false;
        while (!exitg1 && (m <= n)) {
          if (!muDoubleScalarIsNaN(vautnew_data[m - 1])) {
            last = m;
            exitg1 = true;
          } else {
            m++;
          }
        }
      }
      if (last == 0) {
        b_avgtime = vautnew_data[0];
      } else {
        b_avgtime = vautnew_data[last - 1];
        for (k = last + 1; k <= n; k++) {
          dist = vautnew_data[k - 1];
          if (b_avgtime < dist) {
            b_avgtime = dist;
          }
        }
      }
    }
    st.site = &n_emlrtRSI;
    if (scalarLB == vautnew_size) {
      m = b_vpnew->size[0];
      b_vpnew->size[0] = scalarLB;
      emxEnsureCapacity_real_T(&st, b_vpnew, m, &ab_emlrtRTEI);
      V_data = b_vpnew->data;
      m = (scalarLB / 2) << 1;
      last = m - 2;
      for (k = 0; k <= last; k += 2) {
        _mm_storeu_pd(&V_data[k], _mm_sub_pd(_mm_loadu_pd(&vpnew_data[k]),
                                             _mm_loadu_pd(&vp_data[k])));
      }
      for (k = m; k < scalarLB; k++) {
        V_data[k] = vpnew_data[k] - vp_data[k];
      }
      b_st.site = &n_emlrtRSI;
      b_abs(&b_st, b_vpnew, varargin_1);
      V_data = varargin_1->data;
    } else {
      b_st.site = &n_emlrtRSI;
      binary_expand_op_3(&b_st, varargin_1, vpnew, vp);
      V_data = varargin_1->data;
    }
    b_st.site = &eb_emlrtRSI;
    h_st.site = &fb_emlrtRSI;
    i_st.site = &gb_emlrtRSI;
    j_st.site = &hb_emlrtRSI;
    if (varargin_1->size[0] < 1) {
      emlrtErrorWithMessageIdR2018a(
          &j_st, &emlrtRTEI, "Coder:toolbox:eml_min_or_max_varDimZero",
          "Coder:toolbox:eml_min_or_max_varDimZero", 0);
    }
    last = varargin_1->size[0];
    if (varargin_1->size[0] <= 2) {
      if (varargin_1->size[0] == 1) {
        diff = V_data[0];
      } else if ((V_data[0] < V_data[1]) || (muDoubleScalarIsNaN(V_data[0]) &&
                                             !muDoubleScalarIsNaN(V_data[1]))) {
        diff = V_data[1];
      } else {
        diff = V_data[0];
      }
    } else {
      if (!muDoubleScalarIsNaN(V_data[0])) {
        n = 1;
      } else {
        n = 0;
        m = 2;
        exitg1 = false;
        while (!exitg1 && (m <= last)) {
          if (!muDoubleScalarIsNaN(V_data[m - 1])) {
            n = m;
            exitg1 = true;
          } else {
            m++;
          }
        }
      }
      if (n == 0) {
        diff = V_data[0];
      } else {
        diff = V_data[n - 1];
        for (k = n + 1; k <= last; k++) {
          b = V_data[k - 1];
          if (diff < b) {
            diff = b;
          }
        }
      }
    }
    st.site = &n_emlrtRSI;
    if (vdnew_size == vd_size[0]) {
      vd_size[0] = vdnew_size;
      m = (vdnew_size / 2) << 1;
      last = m - 2;
      for (k = 0; k <= last; k += 2) {
        r = _mm_loadu_pd(&vdnew_data[k]);
        _mm_storeu_pd(&vd_data[k], _mm_sub_pd(r, _mm_loadu_pd(&vd_data[k])));
      }
      for (k = m; k < vdnew_size; k++) {
        vd_data[k] = vdnew_data[k] - vd_data[k];
      }
      b_vaut_data.data = &vd_data[0];
      b_vaut_data.size = &vd_size[0];
      b_vaut_data.allocatedSize = -1;
      b_vaut_data.numDimensions = 1;
      b_vaut_data.canFreeData = false;
      b_st.site = &n_emlrtRSI;
      b_abs(&b_st, &b_vaut_data, varargin_1);
      V_data = varargin_1->data;
    } else {
      b_st.site = &n_emlrtRSI;
      binary_expand_op(&b_st, varargin_1, vdnew_data, &vdnew_size, vd_data,
                       &vd_size[0]);
      V_data = varargin_1->data;
    }
    b_st.site = &eb_emlrtRSI;
    h_st.site = &fb_emlrtRSI;
    i_st.site = &gb_emlrtRSI;
    j_st.site = &hb_emlrtRSI;
    if (varargin_1->size[0] < 1) {
      emlrtErrorWithMessageIdR2018a(
          &j_st, &emlrtRTEI, "Coder:toolbox:eml_min_or_max_varDimZero",
          "Coder:toolbox:eml_min_or_max_varDimZero", 0);
    }
    last = varargin_1->size[0];
    if (varargin_1->size[0] <= 2) {
      if (varargin_1->size[0] == 1) {
        b = V_data[0];
      } else if ((V_data[0] < V_data[1]) || (muDoubleScalarIsNaN(V_data[0]) &&
                                             !muDoubleScalarIsNaN(V_data[1]))) {
        b = V_data[1];
      } else {
        b = V_data[0];
      }
    } else {
      if (!muDoubleScalarIsNaN(V_data[0])) {
        n = 1;
      } else {
        n = 0;
        m = 2;
        exitg1 = false;
        while (!exitg1 && (m <= last)) {
          if (!muDoubleScalarIsNaN(V_data[m - 1])) {
            n = m;
            exitg1 = true;
          } else {
            m++;
          }
        }
      }
      if (n == 0) {
        b = V_data[0];
      } else {
        b = V_data[n - 1];
        for (k = n + 1; k <= last; k++) {
          dist = V_data[k - 1];
          if (b < dist) {
            b = dist;
          }
        }
      }
    }
    diff = (b_avgtime + diff) + b;
    m = vp->size[0] * vp->size[1];
    vp->size[0] = vpnew->size[0];
    vp->size[1] = vpnew->size[1];
    emxEnsureCapacity_real_T(sp, vp, m, &bb_emlrtRTEI);
    vp_data = vp->data;
    last = vpnew->size[0] * vpnew->size[1];
    for (k = 0; k < last; k++) {
      vp_data[k] = vpnew_data[k];
    }
    vd_size[0] = vdnew_size;
    for (k = 0; k < vdnew_size; k++) {
      vd_data[k] = vdnew_data[k];
    }
    st.site = &o_emlrtRSI;
    b_st.site = &o_emlrtRSI;
    repmat(&b_st, vdnew_data, vdnew_size, nb, a);
    a_data = a->data;
    b_st.site = &eb_emlrtRSI;
    h_st.site = &ob_emlrtRSI;
    i_st.site = &pb_emlrtRSI;
    j_st.site = &qb_emlrtRSI;
    k_st.site = &rb_emlrtRSI;
    if ((vpnew->size[0] == a->size[0]) && (vpnew->size[1] == a->size[1])) {
      m = V->size[0] * V->size[1];
      V->size[0] = vpnew->size[0];
      V->size[1] = vpnew->size[1];
      emxEnsureCapacity_real_T(&k_st, V, m, &cb_emlrtRTEI);
      V_data = V->data;
      for (k = 0; k < last; k++) {
        b = vpnew_data[k];
        dist = a_data[k];
        V_data[k] = muDoubleScalarMax(b, dist);
      }
    } else {
      l_st.site = &sb_emlrtRSI;
      expand_max(&l_st, vpnew, a, V);
    }
    m = q->size[0] * q->size[1];
    q->size[0] = qnew->size[0];
    q->size[1] = qnew->size[1];
    emxEnsureCapacity_real_T(sp, q, m, &db_emlrtRTEI);
    q_data = q->data;
    m = qnew->size[0] * qnew->size[1];
    for (k = 0; k < m; k++) {
      q_data[k] = qnew_data[k];
    }
    st.site = &p_emlrtRSI;
    b_totaltime += toc(&st, smctime_tv_sec, smctime_tv_nsec);
    b_avgtime = b_totaltime / (real_T)its;
    if ((muDoubleScalarRem(its, 30.0) == 0.0) || (diff <= 1.0E-7)) {
      st.site = &q_emlrtRSI;
      b_st.site = &ub_emlrtRSI;
      h_st.site = &vb_emlrtRSI;
      m_st.site = &wb_emlrtRSI;
      emlrt_marshallIn(
          &h_st,
          feval(&h_st, emlrt_marshallOut(&h_st, b_cv), b_emlrt_marshallOut(1.0),
                c_emlrt_marshallOut(&m_st, cv1), b_emlrt_marshallOut(its),
                b_emlrt_marshallOut(diff), b_emlrt_marshallOut(b_totaltime),
                b_emlrt_marshallOut(b_avgtime), &emlrtMCI),
          "<output of feval>");
    }
    its++;
    st.site = &r_emlrtRSI;
    expl_temp = tic(&st);
    smctime_tv_sec = expl_temp.tv_sec;
    smctime_tv_nsec = expl_temp.tv_nsec;
    /*  re-start clock */
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  emxFree_real_T(sp, &b_vpnew);
  emxFree_real_T(sp, &varargin_1);
  emxFree_real_T(sp, &evp);
  emxFree_real_T(sp, &Dcre);
  emxFree_real_T(sp, &WW);
  emxFree_real_T(sp, &qnew);
  emxFree_real_T(sp, &V);
  /*  end while */
  /*  */
  st.site = &s_emlrtRSI;
  repmat(&st, vd_data, vd_size[0], nb, a);
  a_data = a->data;
  if ((vp->size[0] != a->size[0]) &&
      ((vp->size[0] != 1) && (a->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(vp->size[0], a->size[0], &b_emlrtECI,
                                (emlrtConstCTX)sp);
  }
  if ((vp->size[1] != a->size[1]) &&
      ((vp->size[1] != 1) && (a->size[1] != 1))) {
    emlrtDimSizeImpxCheckR2021b(vp->size[1], a->size[1], &emlrtECI,
                                (emlrtConstCTX)sp);
  }
  if ((vp->size[0] == a->size[0]) && (vp->size[1] == a->size[1])) {
    m = b_default->size[0] * b_default->size[1];
    b_default->size[0] = vp->size[0];
    b_default->size[1] = vp->size[1];
    emxEnsureCapacity_boolean_T(sp, b_default, m, &r_emlrtRTEI);
    default_data = b_default->data;
    m = vp->size[0] * vp->size[1];
    if (m < 2000) {
      for (b_i = 0; b_i < m; b_i++) {
        default_data[b_i] = (vp_data[b_i] < a_data[b_i]);
      }
    } else {
      emlrtEnterParallelRegion((emlrtCTX)sp, omp_in_parallel());
      emlrtPushJmpBuf((emlrtCTX)sp, &emlrtJBStack);
      solve_benchmark_parfor_numThreads =
          emlrtAllocRegionTLSs(sp->tls, omp_in_parallel(),
                               omp_get_max_threads(), omp_get_num_procs());
#pragma omp parallel for num_threads(solve_benchmark_parfor_numThreads)

      for (b_i = 0; b_i < m; b_i++) {
        default_data[b_i] = (vp_data[b_i] < a_data[b_i]);
      }
      emlrtPopJmpBuf((emlrtCTX)sp, &emlrtJBStack);
      emlrtExitParallelRegion((emlrtCTX)sp, omp_in_parallel());
    }
  } else {
    st.site = &s_emlrtRSI;
    lt(&st, b_default, vp, a);
  }
  emxFree_real_T(sp, &a);
  /*  */
  m = ns - 1;
  emlrtEnterParallelRegion((emlrtCTX)sp, omp_in_parallel());
  emlrtPushJmpBuf((emlrtCTX)sp, &emlrtJBStack);
  solve_benchmark_parfor_numThreads = emlrtAllocRegionTLSs(
      sp->tls, omp_in_parallel(), omp_get_max_threads(), omp_get_num_procs());
#pragma omp parallel num_threads(solve_benchmark_parfor_numThreads) private(   \
        WW1, Dsov, maxIdx, maxWW, d_st, ib, i1, emlrtJBEnviron)                \
    firstprivate(c_st, emlrtHadParallelError)
  {
    if (setjmp(emlrtJBEnviron) == 0) {
      c_st.prev = sp;
      c_st.tls = emlrtAllocTLS((emlrtCTX)sp, omp_get_thread_num());
      c_st.site = NULL;
      emlrtSetJmpBuf(&c_st, &emlrtJBEnviron);
      d_st.prev = &c_st;
      d_st.tls = c_st.tls;
    } else {
      emlrtHadParallelError = true;
    }
#pragma omp for nowait
    for (is = 0; is <= m; is++) {
      if (emlrtHadParallelError) {
        continue;
      }
      if (setjmp(emlrtJBEnviron) == 0) {
        maxWW = rtMinusInf;
        /*  Initialize maximum WW */
        maxIdx = 1;
        /*  Initialize index for maximum WW */
        for (ib = 0; ib < nb; ib++) {
          if (is + 1 > vpnew->size[0]) {
            emlrtDynamicBoundsCheckR2012b(is + 1, 1, vpnew->size[0],
                                          &c_emlrtBCI, &c_st);
          }
          if (ib + 1 > vpnew->size[1]) {
            emlrtDynamicBoundsCheckR2012b(ib + 1, 1, vpnew->size[1],
                                          &b_emlrtBCI, &c_st);
          }
          if (is + 1 > vaut_size) {
            emlrtDynamicBoundsCheckR2012b(is + 1, 1, vaut_size, &emlrtBCI,
                                          &c_st);
          }
          Dsov = muDoubleScalarMax(0.0, vpnew_data[is + vpnew->size[0] * ib] -
                                            vaut_data[is]);
          if (is + 1 > q->size[0]) {
            emlrtDynamicBoundsCheckR2012b(is + 1, 1, q->size[0], &i_emlrtBCI,
                                          &c_st);
          }
          if (is + 1 > bp->size[0]) {
            emlrtDynamicBoundsCheckR2012b(is + 1, 1, bp->size[0], &k_emlrtBCI,
                                          &c_st);
          }
          if (ib + 1 > bp->size[1]) {
            emlrtDynamicBoundsCheckR2012b(ib + 1, 1, bp->size[1], &l_emlrtBCI,
                                          &c_st);
          }
          i1 = (int32_T)bp_data[is + bp->size[0] * ib];
          if ((i1 < 1) || (i1 > q->size[1])) {
            emlrtDynamicBoundsCheckR2012b(i1, 1, q->size[1], &j_emlrtBCI,
                                          &c_st);
          }
          if (ib + 1 > b_size[0]) {
            emlrtDynamicBoundsCheckR2012b(ib + 1, 1, b_size[0], &m_emlrtBCI,
                                          &c_st);
          }
          WW1 = (0.85 * (q_data[is + q->size[0] * (i1 - 1)] + 0.058) + 0.15) *
                b_data[ib];
          d_st.site = &t_emlrtRSI;
          WW1 = mpower(&d_st, Dsov, alfa) * mpower(&d_st, WW1, 1.0 - alfa);
          if (WW1 > maxWW) {
            maxWW = WW1;
            maxIdx = ib + 1;
          }
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(&c_st);
          }
        }
        i1 = bpr_size[0];
        if (is + 1 > i1) {
          emlrtDynamicBoundsCheckR2012b(is + 1, 1, i1, &h_emlrtBCI, &c_st);
        }
        bpr_data[is] = maxIdx;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(&c_st);
        }
      } else {
        emlrtHadParallelError = true;
      }
    }
  }
  emlrtPopJmpBuf((emlrtCTX)sp, &emlrtJBStack);
  emlrtExitParallelRegion((emlrtCTX)sp, omp_in_parallel());
  emxFree_real_T(sp, &vpnew);
  *totaltime = b_totaltime;
  *avgtime = b_avgtime;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

/* End of code generation (solve_benchmark_parfor.c) */
