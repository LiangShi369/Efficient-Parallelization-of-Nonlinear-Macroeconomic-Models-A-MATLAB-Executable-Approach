/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * brent_min.h
 *
 * Code generation for function 'brent_min'
 *
 */

#pragma once

/* Include files */
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
real_T brent_min(const emlrtStack *sp, real_T funfcn_workspace_wealth,
                 const real_T funfcn_workspace_k[500],
                 const real_T funfcn_workspace_ev[100500],
                 real_T funfcn_workspace_iz, real_T ax, real_T bx,
                 real_T *fval);

/* End of code generation (brent_min.h) */
