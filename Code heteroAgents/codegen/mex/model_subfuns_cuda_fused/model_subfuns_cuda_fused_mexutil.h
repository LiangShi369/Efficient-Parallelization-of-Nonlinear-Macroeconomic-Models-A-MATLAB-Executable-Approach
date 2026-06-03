//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// model_subfuns_cuda_fused_mexutil.h
//
// Code generation for function 'model_subfuns_cuda_fused_mexutil'
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
real_T emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier *parentId);

const mxArray *emlrt_marshallOut(const real_T u);

real_T i_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier *msgId);

// End of code generation (model_subfuns_cuda_fused_mexutil.h)
