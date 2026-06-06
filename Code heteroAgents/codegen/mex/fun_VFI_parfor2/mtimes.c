/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * mtimes.c
 *
 * Code generation for function 'mtimes'
 *
 */

/* Include files */
#include "mtimes.h"
#include "fun_VFI_parfor2_emxutil.h"
#include "fun_VFI_parfor2_types.h"
#include "rt_nonfinite.h"
#include "blas.h"
#include <stddef.h>

/* Variable Definitions */
static emlrtRSInfo n_emlrtRSI =
    {
        142,      /* lineNo */
        "mtimes", /* fcnName */
        "D:\\Matlab_2026a\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\mtimes."
        "m" /* pathName */
};

static emlrtRSInfo o_emlrtRSI =
    {
        177,           /* lineNo */
        "mtimes_blas", /* fcnName */
        "D:\\Matlab_2026a\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\mtimes."
        "m" /* pathName */
};

static emlrtRTEInfo e_emlrtRTEI =
    {
        218,      /* lineNo */
        20,       /* colNo */
        "mtimes", /* fName */
        "D:\\Matlab_2026a\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\mtimes."
        "m" /* pName */
};

/* Function Definitions */
void mtimes(const emlrtStack *sp, const emxArray_real_T *A,
            const real_T B[1600], emxArray_real_T *C)
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack st;
  const real_T *A_data;
  real_T alpha1;
  real_T beta1;
  real_T *C_data;
  char_T TRANSA1;
  char_T TRANSB1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  A_data = A->data;
  if (A->size[0] == 0) {
    C->size[0] = 0;
    C->size[1] = 40;
  } else {
    int32_T i;
    st.site = &n_emlrtRSI;
    b_st.site = &o_emlrtRSI;
    TRANSB1 = 'N';
    TRANSA1 = 'N';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)A->size[0];
    n_t = (ptrdiff_t)40;
    k_t = (ptrdiff_t)40;
    lda_t = (ptrdiff_t)A->size[0];
    ldb_t = (ptrdiff_t)40;
    ldc_t = (ptrdiff_t)A->size[0];
    i = C->size[0] * C->size[1];
    C->size[0] = A->size[0];
    C->size[1] = 40;
    emxEnsureCapacity_real_T(&b_st, C, i, &e_emlrtRTEI);
    C_data = C->data;
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, (real_T *)&A_data[0],
          &lda_t, (real_T *)&B[0], &ldb_t, &beta1, &C_data[0], &ldc_t);
  }
}

/* End of code generation (mtimes.c) */
