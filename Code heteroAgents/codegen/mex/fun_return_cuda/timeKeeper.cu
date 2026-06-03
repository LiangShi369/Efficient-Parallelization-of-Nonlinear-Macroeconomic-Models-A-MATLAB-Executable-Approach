//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// timeKeeper.cu
//
// Code generation for function 'timeKeeper'
//

// Include files
#include "timeKeeper.h"
#include "rt_nonfinite.h"
#include "emlrt.h"

// Variable Definitions
static boolean_T savedTime_not_empty;

// Function Definitions
namespace coder {
namespace internal {
namespace b_time {
namespace impl {
void timeKeeper(const emlrtTimespec newTime, emlrtTimespec *savedTime)
{
  if (!savedTime_not_empty) {
    emlrtClockGettimeMonotonic(savedTime);
    savedTime_not_empty = true;
  }
  *savedTime = newTime;
}

real_T timeKeeper(const emlrtTimespec *savedTime, real_T *outTime_tv_nsec)
{
  real_T outTime_tv_sec;
  outTime_tv_sec = savedTime->tv_sec;
  *outTime_tv_nsec = savedTime->tv_nsec;
  return outTime_tv_sec;
}

} // namespace impl
} // namespace b_time
} // namespace internal
} // namespace coder
void timeKeeper_init()
{
  savedTime_not_empty = false;
}

// End of code generation (timeKeeper.cu)
