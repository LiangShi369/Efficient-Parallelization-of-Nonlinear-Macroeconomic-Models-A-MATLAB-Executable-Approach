/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * rbc_solver_interp_parfor_mexutil.h
 *
 * Code generation for function 'rbc_solver_interp_parfor_mexutil'
 *
 */

#pragma once

/* Include files */
#include "rbc_solver_interp_parfor_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void emlrtFreeThreadStackData(const emlrtStack *sp);

rbc_solver_interp_parforTLS *emlrtGetThreadStackData(void);

void emlrtInitThreadStackData(const emlrtStack *sp);

/* End of code generation (rbc_solver_interp_parfor_mexutil.h) */
