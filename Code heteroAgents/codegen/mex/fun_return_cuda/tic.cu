//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// tic.cu
//
// Code generation for function 'tic'
//

// Include files
#include "tic.h"
#include "rt_nonfinite.h"
#include "timeKeeper.h"
#include "emlrt.h"

// Function Definitions
namespace coder {
void tic(emlrtTimespec *savedTime)
{
  emlrtTimespec t;
  emlrtClockGettimeMonotonic(&t);
  internal::b_time::impl::timeKeeper(t, savedTime);
}

} // namespace coder

// End of code generation (tic.cu)
