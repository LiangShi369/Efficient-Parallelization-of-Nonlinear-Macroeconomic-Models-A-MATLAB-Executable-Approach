/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * fun_VFI_parfor2.h
 *
 * Code generation for function 'fun_VFI_parfor2'
 *
 */

#pragma once

/* Include files */
#include "fun_VFI_parfor2_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
emlrtCTX emlrtGetRootTLSGlobal(void);

void emlrtLockerFunction(EmlrtLockeeFunction aLockee, emlrtConstCTX aTLS,
                         void *aData);

void fun_VFI_parfor2(const emlrtStack *sp, const real_T p_eqm[2],
                     const real_T a_grid_data[], const int32_T a_grid_size[1],
                     const real_T z_grid[40], const real_T pi_z[1600],
                     struct0_T *Params, const struct1_T *vfoptions,
                     emxArray_real_T *V, emxArray_real_T *Policy);

/* End of code generation (fun_VFI_parfor2.h) */
