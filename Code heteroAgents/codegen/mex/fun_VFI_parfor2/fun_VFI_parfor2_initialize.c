/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * fun_VFI_parfor2_initialize.c
 *
 * Code generation for function 'fun_VFI_parfor2_initialize'
 *
 */

/* Include files */
#include "fun_VFI_parfor2_initialize.h"
#include "_coder_fun_VFI_parfor2_mex.h"
#include "fun_VFI_parfor2_data.h"
#include "rt_nonfinite.h"

/* Function Declarations */
static void fun_VFI_parfor2_once(void);

/* Function Definitions */
static void fun_VFI_parfor2_once(void)
{
  mex_InitInfAndNan();
}

void fun_VFI_parfor2_initialize(void)
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2022b(&st);
  emlrtClearAllocCountR2012b(&st, false, 0U, NULL);
  emlrtEnterRtStackR2012b(&st);
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    fun_VFI_parfor2_once();
  }
}

/* End of code generation (fun_VFI_parfor2_initialize.c) */
