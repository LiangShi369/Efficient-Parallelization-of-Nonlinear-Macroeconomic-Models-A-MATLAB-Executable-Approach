//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// eml_mtimes_helper.h
//
// Code generation for function 'eml_mtimes_helper'
//

#pragma once

// Include files
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Custom Header Code

#ifdef __CUDA_ARCH__
#undef printf
#endif

// Function Declarations
void binary_expand_op_1(real_T in1_data[], int32_T in1_size[2],
                        const real_T in2_data[], const int32_T *in2_size,
                        const real_T in3_data[], const int32_T in3_size[2],
                        real_T in4);

void binary_expand_op_10(real_T in1_data[], int32_T *in1_size,
                         const real_T in2_data[], const int32_T *in2_size,
                         const real_T in3[8]);

// End of code generation (eml_mtimes_helper.h)
