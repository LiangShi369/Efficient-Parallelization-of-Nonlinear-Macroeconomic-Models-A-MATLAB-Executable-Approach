/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * interp1_scal.c
 *
 * Code generation for function 'interp1_scal'
 *
 */

/* Include files */
#include "interp1_scal.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Function Definitions */
real_T interp1_scal(const real_T x[80], const real_T y[80], real_T xi)
{
  real_T ju;
  real_T yi;
  int32_T dx_tmp_tmp;
  /*  Custom linear interpolation with extrapolation, matching
   * interp1(x,y,xi,'linear','extrap') */
  /*  x and y are vectors of the same length, x strictly increasing */
  /*  Handle exact match with first or last point (avoid extrapolation) */
  if (xi <= x[0]) {
    yi = 1.0;
    /*  extrapolate using [x(1), x(2)] */
  } else if (xi >= x[79]) {
    yi = 79.0;
    /*  extrapolate using [x(n-1), x(n)] */

    /*  xi is in-bounds; locate correct interval */
    /* function jl = locate(xx,x) */
    /*  */
    /*  x is between xx(jl) and xx(jl+1) */
    /*  */
    /*  jl = 0 and jl = n means x is out of range */
    /*  */
    /*  xx is assumed to be monotone increasing */
  } else if (xi < x[0]) {
    yi = 0.0;
  } else if (xi > x[79]) {
    yi = 80.0;
  } else {
    yi = 1.0;
    ju = 80.0;
    while (ju - yi > 1.0) {
      real_T jm;
      jm = muDoubleScalarFloor((ju + yi) / 2.0);
      if (xi >= x[(int32_T)jm - 1]) {
        yi = jm;
      } else {
        ju = jm;
      }
    }
  }
  /*  Enforce valid index range */
  yi = muDoubleScalarMax(muDoubleScalarMin(yi, 79.0), 1.0);
  /*  Avoid divide-by-zero (can happen if x has duplicate points) */
  dx_tmp_tmp = (int32_T)yi;
  ju = x[dx_tmp_tmp - 1];
  yi = x[dx_tmp_tmp] - ju;
  if (yi == 0.0) {
    yi = 0.0;
  } else {
    yi = (y[dx_tmp_tmp] - y[dx_tmp_tmp - 1]) / yi;
  }
  return y[dx_tmp_tmp - 1] + yi * (xi - ju);
}

/* End of code generation (interp1_scal.c) */
