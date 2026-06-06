//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// ixfun.h
//
// Code generation for function 'ixfun'
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
namespace coder {
namespace internal {
void expand_max(const real_T a_data[], const int32_T a_size[2],
                const real_T b_data[], const int32_T b_size[2], real_T c_data[],
                int32_T c_size[2]);

}
} // namespace coder

// End of code generation (ixfun.h)
