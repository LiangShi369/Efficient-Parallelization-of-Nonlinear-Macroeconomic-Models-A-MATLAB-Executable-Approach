/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * repmat.h
 *
 * Code generation for function 'repmat'
 *
 */

#pragma once

/* Include files */
#include "rtwtypes.h"
#include "solve_benchmark_parfor_types.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void repmat(const emlrtStack *sp, const real_T a_data[], int32_T a_size,
            real_T varargin_2, emxArray_real_T *b);

/* End of code generation (repmat.h) */
