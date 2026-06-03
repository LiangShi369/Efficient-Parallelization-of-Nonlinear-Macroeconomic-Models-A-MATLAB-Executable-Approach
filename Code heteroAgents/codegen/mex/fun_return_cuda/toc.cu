//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// toc.cu
//
// Code generation for function 'toc'
//

// Include files
#include "toc.h"
#include "rt_nonfinite.h"
#include "timeKeeper.h"
#include "emlrt.h"

// Function Definitions
namespace coder {
real_T toc(const emlrtTimespec *savedTime)
{
  emlrtTimespec tnow;
  real_T t;
  real_T tstart_tv_sec;
  tstart_tv_sec = internal::b_time::impl::timeKeeper(savedTime, &t);
  emlrtClockGettimeMonotonic(&tnow);
  return (tnow.tv_sec - tstart_tv_sec) + (tnow.tv_nsec - t) / 1.0E+9;
}

} // namespace coder

// End of code generation (toc.cu)
