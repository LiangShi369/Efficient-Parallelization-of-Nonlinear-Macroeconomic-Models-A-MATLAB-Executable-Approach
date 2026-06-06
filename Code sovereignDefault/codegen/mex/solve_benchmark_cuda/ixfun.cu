//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// ixfun.cu
//
// Code generation for function 'ixfun'
//

// Include files
#include "ixfun.h"
#include "rt_nonfinite.h"
#include <cmath>

// Function Definitions
namespace coder {
namespace internal {
void expand_max(const real_T a_data[], const int32_T a_size[2],
                const real_T b_data[], const int32_T b_size[2], real_T c_data[],
                int32_T c_size[2])
{
  int32_T b_k;
  int32_T i;
  int32_T i1;
  int32_T k;
  int32_T varargin_2;
  int32_T varargin_3;
  int16_T csz_idx_0;
  int16_T csz_idx_1;
  boolean_T b;
  boolean_T b1;
  boolean_T b2;
  boolean_T b3;
  if (b_size[0] == 1) {
    csz_idx_0 = static_cast<int16_T>(a_size[0]);
  } else if (a_size[0] == 1) {
    csz_idx_0 = static_cast<int16_T>(b_size[0]);
  } else if (a_size[0] <= b_size[0]) {
    csz_idx_0 = static_cast<int16_T>(a_size[0]);
  } else {
    csz_idx_0 = static_cast<int16_T>(b_size[0]);
  }
  if (b_size[1] == 1) {
    csz_idx_1 = static_cast<int16_T>(a_size[1]);
  } else if (a_size[1] == 1) {
    csz_idx_1 = static_cast<int16_T>(b_size[1]);
  } else if (a_size[1] <= b_size[1]) {
    csz_idx_1 = static_cast<int16_T>(a_size[1]);
  } else {
    csz_idx_1 = static_cast<int16_T>(b_size[1]);
  }
  c_size[0] = csz_idx_0;
  c_size[1] = csz_idx_1;
  if ((csz_idx_0 != 0) && (csz_idx_1 != 0)) {
    b = (a_size[1] != 1);
    b1 = (b_size[1] != 1);
    i = csz_idx_1;
    b2 = (a_size[0] != 1);
    b3 = (b_size[0] != 1);
    i1 = csz_idx_0;
    for (k = 0; k < i; k++) {
      varargin_2 = b * k;
      varargin_3 = b1 * k;
      for (b_k = 0; b_k < i1; b_k++) {
        c_data[b_k + csz_idx_0 * k] =
            std::fmax(a_data[b2 * b_k + a_size[0] * varargin_2],
                      b_data[b3 * b_k + b_size[0] * varargin_3]);
      }
    }
  }
}

} // namespace internal
} // namespace coder

// End of code generation (ixfun.cu)
