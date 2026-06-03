/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * brent_min.c
 *
 * Code generation for function 'brent_min'
 *
 */

/* Include files */
#include "brent_min.h"
#include "rbc_solver_interp_parfor.h"
#include "rbc_solver_interp_parfor_data.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Function Definitions */
real_T brent_min(const emlrtStack *sp, real_T funfcn_workspace_wealth,
                 const real_T funfcn_workspace_k[500],
                 const real_T funfcn_workspace_ev[100500],
                 real_T funfcn_workspace_iz, real_T ax, real_T bx, real_T *fval)
{
  real_T a;
  real_T b;
  real_T d;
  real_T e;
  real_T fv;
  real_T fw;
  real_T fx;
  real_T tol1;
  real_T tol2;
  real_T v;
  real_T w;
  real_T xf;
  real_T xm;
  int32_T funccount;
  int32_T iter;
  /* brent_min: Single-variable bounded function minimization without
   * derivatives */
  /*  INPUT ARGUMENTS */
  /*    funfcn: function to be minimized */
  /*    ax: lower bound */
  /*    bx: upper bound */
  /*    tol: tolerance criterion for X */
  /*    maxfun: Max number of function evaluations */
  /*    maxiter: Max number of iterations */
  /*  DEFAULT OPTIONS: */
  /*  tol     = 1e-8; */
  /*  maxfun  = 500; */
  /*  maxiter = 500; */
  iter = 0;
  /*  Assume we'll converge */
  /*  Compute the start point */
  /*  0.381966011250105 */
  a = ax;
  b = bx;
  v = ax + 0.3819660112501051 * (bx - ax);
  w = v;
  xf = v;
  d = 0.0;
  e = 0.0;
  fx = c_rbc_solver_interp_parfor_anon(funfcn_workspace_wealth,
                                       funfcn_workspace_k, funfcn_workspace_ev,
                                       funfcn_workspace_iz, v);
  funccount = 1;
  fv = fx;
  fw = fx;
  xm = 0.5 * (ax + bx);
  tol1 = 1.4901161193847656E-8 * muDoubleScalarAbs(v) + 3.3333333333333334E-9;
  tol2 = 2.0 * tol1;
  /*  Main loop */
  int32_T exitg1;
  do {
    exitg1 = 0;
    if (muDoubleScalarAbs(xf - xm) > tol2 - 0.5 * (b - a)) {
      real_T p;
      real_T x;
      int32_T gs;
      gs = 1;
      /*  Is a parabolic fit possible */
      if (muDoubleScalarAbs(e) > tol1) {
        real_T q;
        real_T r;
        /*  Yes, so fit parabola */
        gs = 0;
        x = xf - w;
        r = x * (fx - fv);
        p = xf - v;
        q = p * (fx - fw);
        p = p * q - x * r;
        q = 2.0 * (q - r);
        if (q > 0.0) {
          p = -p;
        }
        q = muDoubleScalarAbs(q);
        r = e;
        e = d;
        /*  Is the parabola acceptable */
        if ((muDoubleScalarAbs(p) < muDoubleScalarAbs(0.5 * q * r)) &&
            (p > q * (a - xf)) && (p < q * (b - xf))) {
          /*  Yes, parabolic interpolation step */
          d = p / q;
          x = xf + d;
          /* procedure = '       parabolic'; */
          /*  f must not be evaluated too close to ax or bx */
          if ((x - a < tol2) || (b - x < tol2)) {
            p = xm - xf;
            d = tol1 * (muDoubleScalarSign(p) + (real_T)(p == 0.0));
          }
        } else {
          /*  Not acceptable, must do a golden section step */
          gs = 1;
        }
      }
      if (gs != 0) {
        /*  A golden-section step is required */
        if (xf >= xm) {
          e = a - xf;
        } else {
          e = b - xf;
        }
        d = 0.3819660112501051 * e;
        /* procedure = '       golden'; */
      }
      /*  The function must not be evaluated too close to xf */
      x = xf + (muDoubleScalarSign(d) + (real_T)(d == 0.0)) *
                   muDoubleScalarMax(muDoubleScalarAbs(d), tol1);
      p = c_rbc_solver_interp_parfor_anon(
          funfcn_workspace_wealth, funfcn_workspace_k, funfcn_workspace_ev,
          funfcn_workspace_iz, x);
      funccount++;
      iter++;
      /*  Update a, b, v, w, x, xm, tol1, tol2 */
      if (p <= fx) {
        if (x >= xf) {
          a = xf;
        } else {
          b = xf;
        }
        v = w;
        fv = fw;
        w = xf;
        fw = fx;
        xf = x;
        fx = p;
      } else {
        /*  fu > fx */
        if (x < xf) {
          a = x;
        } else {
          b = x;
        }
        if ((p <= fw) || (w == xf)) {
          v = w;
          fv = fw;
          w = x;
          fw = p;
        } else if ((p <= fv) || (v == xf) || (v == w)) {
          v = x;
          fv = p;
        }
      }
      xm = 0.5 * (a + b);
      tol1 =
          1.4901161193847656E-8 * muDoubleScalarAbs(xf) + 3.3333333333333334E-9;
      tol2 = 2.0 * tol1;
      if ((funccount >= 500) || (iter >= 500)) {
        *fval = fx;
        exitg1 = 1;
      }
    } else {
      /*  while */
      *fval = fx;
      exitg1 = 1;
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  } while (exitg1 == 0);
  return xf;
}

/* End of code generation (brent_min.c) */
