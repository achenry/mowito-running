/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * xgetrf.c
 *
 * Code generation for function 'xgetrf'
 *
 */

/* Include files */
#include "xgetrf.h"
#include "eml_int_forloop_overflow_check.h"
#include "fbstab_mpc.h"
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo hg_emlrtRSI = { 21, /* lineNo */
  "eml_int_forloop_overflow_check",    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pathName */
};

static emlrtRSInfo pi_emlrtRSI = { 30, /* lineNo */
  "xgetrf",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgetrf.m"/* pathName */
};

static emlrtRSInfo qi_emlrtRSI = { 50, /* lineNo */
  "xzgetrf",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzgetrf.m"/* pathName */
};

static emlrtRSInfo ri_emlrtRSI = { 58, /* lineNo */
  "xzgetrf",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzgetrf.m"/* pathName */
};

static emlrtRSInfo si_emlrtRSI = { 45, /* lineNo */
  "xgeru",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xgeru.m"/* pathName */
};

static emlrtRSInfo ti_emlrtRSI = { 45, /* lineNo */
  "xger",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xger.m"/* pathName */
};

static emlrtRSInfo ui_emlrtRSI = { 15, /* lineNo */
  "xger",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+refblas\\xger.m"/* pathName */
};

static emlrtRSInfo vi_emlrtRSI = { 54, /* lineNo */
  "xgerx",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+refblas\\xgerx.m"/* pathName */
};

/* Function Definitions */
void xgetrf(const emlrtStack *sp, real_T A[16], int32_T ipiv[4], int32_T *info)
{
  int32_T j;
  int32_T b;
  int32_T jj;
  int32_T jp1j;
  int32_T n;
  int32_T iy;
  int32_T ix;
  real_T smax;
  int32_T jA;
  real_T s;
  int32_T ijA;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &pi_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  ipiv[0] = 1;
  ipiv[1] = 2;
  ipiv[2] = 3;
  ipiv[3] = 4;
  *info = 0;
  for (j = 0; j < 3; j++) {
    b = j * 5;
    jj = j * 5;
    jp1j = b + 2;
    n = 4 - j;
    iy = 0;
    ix = b;
    smax = muDoubleScalarAbs(A[jj]);
    for (jA = 2; jA <= n; jA++) {
      ix++;
      s = muDoubleScalarAbs(A[ix]);
      if (s > smax) {
        iy = jA - 1;
        smax = s;
      }
    }

    if (A[jj + iy] != 0.0) {
      if (iy != 0) {
        iy += j;
        ipiv[j] = iy + 1;
        smax = A[j];
        A[j] = A[iy];
        A[iy] = smax;
        ix = j + 4;
        iy += 4;
        smax = A[ix];
        A[ix] = A[iy];
        A[iy] = smax;
        ix += 4;
        iy += 4;
        smax = A[ix];
        A[ix] = A[iy];
        A[iy] = smax;
        ix += 4;
        iy += 4;
        smax = A[ix];
        A[ix] = A[iy];
        A[iy] = smax;
      }

      iy = (jj - j) + 4;
      b_st.site = &qi_emlrtRSI;
      for (jA = jp1j; jA <= iy; jA++) {
        A[jA - 1] /= A[jj];
      }
    } else {
      *info = j + 1;
    }

    n = 2 - j;
    iy = b + 4;
    b_st.site = &ri_emlrtRSI;
    c_st.site = &si_emlrtRSI;
    d_st.site = &ti_emlrtRSI;
    e_st.site = &ui_emlrtRSI;
    jA = jj + 6;
    for (jp1j = 0; jp1j <= n; jp1j++) {
      smax = A[iy];
      if (A[iy] != 0.0) {
        ix = jj + 1;
        b = (jA - j) + 2;
        f_st.site = &vi_emlrtRSI;
        if ((jA <= b) && (b > 2147483646)) {
          g_st.site = &hg_emlrtRSI;
          check_forloop_overflow_error(&g_st);
        }

        for (ijA = jA; ijA <= b; ijA++) {
          A[ijA - 1] += A[ix] * -smax;
          ix++;
        }
      }

      iy += 4;
      jA += 4;
    }
  }

  if ((*info == 0) && (!(A[15] != 0.0))) {
    *info = 4;
  }
}

/* End of code generation (xgetrf.c) */
