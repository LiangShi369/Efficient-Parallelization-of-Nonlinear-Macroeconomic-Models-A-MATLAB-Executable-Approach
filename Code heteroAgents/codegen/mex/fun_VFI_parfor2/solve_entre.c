/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * solve_entre.c
 *
 * Code generation for function 'solve_entre'
 *
 */

/* Include files */
#include "solve_entre.h"
#include "fun_VFI_parfor2_data.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo e_emlrtRSI = {
    11,            /* lineNo */
    "solve_entre", /* fcnName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_github\\Code heteroAgents\\solve_entre.m" /* pathName */
};

static emlrtRSInfo f_emlrtRSI = {
    12,            /* lineNo */
    "solve_entre", /* fcnName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_github\\Code heteroAgents\\solve_entre.m" /* pathName */
};

static emlrtRSInfo g_emlrtRSI = {
    14,            /* lineNo */
    "solve_entre", /* fcnName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_github\\Code heteroAgents\\solve_entre.m" /* pathName */
};

static emlrtRSInfo h_emlrtRSI = {
    15,            /* lineNo */
    "solve_entre", /* fcnName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_github\\Code heteroAgents\\solve_entre.m" /* pathName */
};

static emlrtRSInfo i_emlrtRSI = {
    18,            /* lineNo */
    "solve_entre", /* fcnName */
    "D:\\BaiduSyncdisk\\working papers\\Parallel computation with "
    "Mex\\code_github\\Code heteroAgents\\solve_entre.m" /* pathName */
};

static emlrtRSInfo j_emlrtRSI = {
    44,       /* lineNo */
    "mpower", /* fcnName */
    "D:\\Matlab_2026a\\toolbox\\eml\\lib\\matlab\\matfun\\mpower.m" /* pathName
                                                                     */
};

/* Function Definitions */
real_T solve_entre(const emlrtStack *sp, real_T a, real_T z, real_T w, real_T r,
                   real_T lambda, real_T delta, real_T alpha, real_T upsilon)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T a_tmp;
  real_T b;
  real_T b_a;
  real_T b_tmp;
  real_T kstar;
  real_T profit;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  /*  This function solve the entrepreneurs' static maximization problem. See */
  /*  Robert's App_BueraShin2013.pdf for more details. */
  /*  Get k1, kstar, lstar */
  /* aux    = 1-(1-alpha)*(1-upsilon); */
  a_tmp = r + delta;
  profit = 1.0 / muDoubleScalarMax(a_tmp, 1.0E-8) * alpha * (1.0 - upsilon) * z;
  b_a = 1.0 / w * (1.0 - alpha) * (1.0 - upsilon) * z;
  st.site = &e_emlrtRSI;
  b_tmp = (1.0 - alpha) * (1.0 - upsilon);
  b_st.site = &j_emlrtRSI;
  c_st.site = &k_emlrtRSI;
  if ((profit < 0.0) && !muDoubleScalarIsNaN(1.0 - b_tmp) &&
      (muDoubleScalarFloor(1.0 - b_tmp) != 1.0 - b_tmp)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &b_emlrtRTEI,
                                  "Coder:toolbox:power_domainError",
                                  "Coder:toolbox:power_domainError", 0);
  }
  st.site = &e_emlrtRSI;
  b_st.site = &j_emlrtRSI;
  c_st.site = &k_emlrtRSI;
  if ((b_a < 0.0) && !muDoubleScalarIsNaN(b_tmp) &&
      (muDoubleScalarFloor(b_tmp) != b_tmp)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &b_emlrtRTEI,
                                  "Coder:toolbox:power_domainError",
                                  "Coder:toolbox:power_domainError", 0);
  }
  profit = muDoubleScalarPower(profit, 1.0 - b_tmp) *
           muDoubleScalarPower(b_a, b_tmp);
  st.site = &f_emlrtRSI;
  b = 1.0 / upsilon;
  b_st.site = &j_emlrtRSI;
  c_st.site = &k_emlrtRSI;
  if ((profit < 0.0) && !muDoubleScalarIsNaN(b) &&
      (muDoubleScalarFloor(b) != b)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &b_emlrtRTEI,
                                  "Coder:toolbox:power_domainError",
                                  "Coder:toolbox:power_domainError", 0);
  }
  kstar = muDoubleScalarMin(muDoubleScalarPower(profit, b), lambda * a);
  st.site = &g_emlrtRSI;
  profit = alpha * (1.0 - upsilon);
  b_st.site = &j_emlrtRSI;
  c_st.site = &k_emlrtRSI;
  if ((kstar < 0.0) && !muDoubleScalarIsNaN(profit) &&
      (muDoubleScalarFloor(profit) != profit)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &b_emlrtRTEI,
                                  "Coder:toolbox:power_domainError",
                                  "Coder:toolbox:power_domainError", 0);
  }
  b = b_a * muDoubleScalarPower(kstar, profit);
  st.site = &h_emlrtRSI;
  profit = 1.0 / (1.0 - b_tmp);
  b_st.site = &j_emlrtRSI;
  c_st.site = &k_emlrtRSI;
  if ((b < 0.0) && !muDoubleScalarIsNaN(profit) &&
      (muDoubleScalarFloor(profit) != profit)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &b_emlrtRTEI,
                                  "Coder:toolbox:power_domainError",
                                  "Coder:toolbox:power_domainError", 0);
  }
  profit = muDoubleScalarPower(b, profit);
  /*  Evaluate profit if do choose to be entrepreneur */
  st.site = &i_emlrtRSI;
  b_st.site = &j_emlrtRSI;
  c_st.site = &k_emlrtRSI;
  if ((kstar < 0.0) && !muDoubleScalarIsNaN(alpha) &&
      (muDoubleScalarFloor(alpha) != alpha)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &b_emlrtRTEI,
                                  "Coder:toolbox:power_domainError",
                                  "Coder:toolbox:power_domainError", 0);
  }
  st.site = &i_emlrtRSI;
  b_st.site = &j_emlrtRSI;
  c_st.site = &k_emlrtRSI;
  if ((profit < 0.0) && !muDoubleScalarIsNaN(1.0 - alpha) &&
      (muDoubleScalarFloor(1.0 - alpha) != 1.0 - alpha)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &b_emlrtRTEI,
                                  "Coder:toolbox:power_domainError",
                                  "Coder:toolbox:power_domainError", 0);
  }
  st.site = &i_emlrtRSI;
  b = muDoubleScalarPower(kstar, alpha) *
      muDoubleScalarPower(profit, 1.0 - alpha);
  b_st.site = &j_emlrtRSI;
  c_st.site = &k_emlrtRSI;
  if ((b < 0.0) && !muDoubleScalarIsNaN(1.0 - upsilon) &&
      (muDoubleScalarFloor(1.0 - upsilon) != 1.0 - upsilon)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &b_emlrtRTEI,
                                  "Coder:toolbox:power_domainError",
                                  "Coder:toolbox:power_domainError", 0);
  }
  return (z * muDoubleScalarPower(b, 1.0 - upsilon) - w * profit) -
         a_tmp * kstar;
}

/* End of code generation (solve_entre.c) */
