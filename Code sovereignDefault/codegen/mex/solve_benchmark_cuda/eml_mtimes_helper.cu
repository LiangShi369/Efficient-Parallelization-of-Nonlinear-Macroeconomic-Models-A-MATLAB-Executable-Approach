//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// eml_mtimes_helper.cu
//
// Code generation for function 'eml_mtimes_helper'
//

// Include files
#include "eml_mtimes_helper.h"
#include "rt_nonfinite.h"

// Function Definitions
void binary_expand_op_1(real_T in1_data[], int32_T in1_size[2],
                        const real_T in2_data[], const int32_T *in2_size,
                        const real_T in3_data[], const int32_T in3_size[2],
                        real_T in4)
{
  int32_T b;
  int32_T b_loop_ub;
  int32_T c;
  int32_T in2_idx_0;
  int32_T loop_ub;
  int32_T stride_1_0;
  in2_idx_0 = *in2_size;
  if (in3_size[0] == 1) {
    b_loop_ub = in2_idx_0;
  } else {
    b_loop_ub = in3_size[0];
  }
  in1_size[0] = b_loop_ub;
  loop_ub = in3_size[1];
  in1_size[1] = loop_ub;
  in2_idx_0 = (in2_idx_0 != 1);
  stride_1_0 = (in3_size[0] != 1);
  for (c = 0; c < loop_ub; c++) {
    for (b = 0; b < b_loop_ub; b++) {
      in1_data[b + in1_size[0] * c] =
          in2_data[b * in2_idx_0] * in3_data[b * stride_1_0 + in3_size[0] * c] *
          in4;
    }
  }
}

void binary_expand_op_10(real_T in1_data[], int32_T *in1_size,
                         const real_T in2_data[], const int32_T *in2_size,
                         const real_T in3[8])
{
  real_T b_in1_data[1000];
  real_T b;
  int32_T c;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  b = 1.0 - in3[2];
  if (*in2_size == 1) {
    loop_ub = *in1_size;
  } else {
    loop_ub = *in2_size;
  }
  stride_0_0 = (*in1_size != 1);
  stride_1_0 = (*in2_size != 1);
  for (c = 0; c < loop_ub; c++) {
    b_in1_data[c] = in1_data[c * stride_0_0] * in2_data[c * stride_1_0] * b;
  }
  *in1_size = loop_ub;
  for (c = 0; c < loop_ub; c++) {
    in1_data[c] = b_in1_data[c];
  }
}

// End of code generation (eml_mtimes_helper.cu)
