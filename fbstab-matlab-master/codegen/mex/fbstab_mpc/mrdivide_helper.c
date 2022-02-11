/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * mrdivide_helper.c
 *
 * Code generation for function 'mrdivide_helper'
 *
 */

/* Include files */
#include "mrdivide_helper.h"
#include "fbstab_mpc.h"
#include "fbstab_mpc_data.h"
#include "rt_nonfinite.h"
#include "warning.h"
#include "xgetrf.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo jj_emlrtRSI = { 42, /* lineNo */
  "mrdiv",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\mrdivide_helper.m"/* pathName */
};

/* Function Definitions */
void b_mrdiv(const emlrtStack *sp, real_T A[4], const real_T B[16])
{
  real_T b_A[16];
  int32_T ipiv[4];
  int32_T info;
  real_T temp;
  int32_T i;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &jj_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  b_st.site = &mi_emlrtRSI;
  memcpy(&b_A[0], &B[0], 16U * sizeof(real_T));
  c_st.site = &oi_emlrtRSI;
  xgetrf(&c_st, b_A, ipiv, &info);
  if (info > 0) {
    c_st.site = &ni_emlrtRSI;
    d_st.site = &wi_emlrtRSI;
    warning(&d_st);
  }

  A[0] *= 1.0 / b_A[0];
  for (info = 0; info < 1; info++) {
    if (b_A[4] != 0.0) {
      A[1] -= b_A[4] * A[0];
    }
  }

  A[1] *= 1.0 / b_A[5];
  for (info = 0; info < 2; info++) {
    temp = b_A[info + 8];
    if (temp != 0.0) {
      A[2] -= temp * A[info];
    }
  }

  A[2] *= 1.0 / b_A[10];
  for (info = 0; info < 3; info++) {
    i = info + 12;
    if (b_A[i] != 0.0) {
      A[3] -= b_A[i] * A[info];
    }
  }

  A[3] *= 1.0 / b_A[15];
  for (info = 4; info < 5; info++) {
    if (b_A[11] != 0.0) {
      A[2] -= b_A[11] * A[3];
    }
  }

  for (info = 3; info < 5; info++) {
    i = info + 3;
    if (b_A[i] != 0.0) {
      A[1] -= b_A[i] * A[info - 1];
    }
  }

  for (info = 2; info < 5; info++) {
    i = info + -1;
    if (b_A[i] != 0.0) {
      A[0] -= b_A[i] * A[info - 1];
    }
  }

  if (ipiv[2] != 3) {
    temp = A[2];
    A[2] = A[ipiv[2] - 1];
    A[ipiv[2] - 1] = temp;
  }

  if (ipiv[1] != 2) {
    temp = A[1];
    A[1] = A[ipiv[1] - 1];
    A[ipiv[1] - 1] = temp;
  }

  if (ipiv[0] != 1) {
    temp = A[0];
    A[0] = A[ipiv[0] - 1];
    A[ipiv[0] - 1] = temp;
  }
}

void mrdiv(const emlrtStack *sp, real_T A[16], const real_T B[16])
{
  real_T b_A[16];
  int32_T ipiv[4];
  int32_T jBcol;
  int32_T j;
  int32_T jBcol_tmp;
  int32_T k;
  int32_T i;
  real_T temp;
  int32_T kBcol;
  int32_T i1;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &jj_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  b_st.site = &mi_emlrtRSI;
  memcpy(&b_A[0], &B[0], 16U * sizeof(real_T));
  c_st.site = &oi_emlrtRSI;
  xgetrf(&c_st, b_A, ipiv, &jBcol);
  if (jBcol > 0) {
    c_st.site = &ni_emlrtRSI;
    d_st.site = &wi_emlrtRSI;
    warning(&d_st);
  }

  for (j = 0; j < 4; j++) {
    jBcol_tmp = j << 2;
    jBcol = jBcol_tmp - 1;
    for (k = 0; k < j; k++) {
      kBcol = k << 2;
      i = k + jBcol_tmp;
      if (b_A[i] != 0.0) {
        A[jBcol + 1] -= b_A[i] * A[kBcol];
        A[jBcol + 2] -= b_A[i] * A[kBcol + 1];
        A[jBcol + 3] -= b_A[i] * A[kBcol + 2];
        A[jBcol + 4] -= b_A[i] * A[kBcol + 3];
      }
    }

    temp = 1.0 / b_A[j + jBcol_tmp];
    A[jBcol + 1] *= temp;
    A[jBcol + 2] *= temp;
    A[jBcol + 3] *= temp;
    A[jBcol + 4] *= temp;
  }

  for (j = 3; j >= 0; j--) {
    jBcol_tmp = (j << 2) - 1;
    i = j + 2;
    for (k = i; k < 5; k++) {
      kBcol = (k - 1) << 2;
      i1 = k + jBcol_tmp;
      if (b_A[i1] != 0.0) {
        A[jBcol_tmp + 1] -= b_A[i1] * A[kBcol];
        A[jBcol_tmp + 2] -= b_A[i1] * A[kBcol + 1];
        A[jBcol_tmp + 3] -= b_A[i1] * A[kBcol + 2];
        A[jBcol_tmp + 4] -= b_A[i1] * A[kBcol + 3];
      }
    }
  }

  for (jBcol = 2; jBcol >= 0; jBcol--) {
    if (ipiv[jBcol] != jBcol + 1) {
      j = jBcol << 2;
      temp = A[j];
      i = (ipiv[jBcol] - 1) << 2;
      A[j] = A[i];
      A[i] = temp;
      jBcol_tmp = j + 1;
      temp = A[jBcol_tmp];
      i1 = i + 1;
      A[jBcol_tmp] = A[i1];
      A[i1] = temp;
      jBcol_tmp = j + 2;
      temp = A[jBcol_tmp];
      i1 = i + 2;
      A[jBcol_tmp] = A[i1];
      A[i1] = temp;
      j += 3;
      temp = A[j];
      i += 3;
      A[j] = A[i];
      A[i] = temp;
    }
  }
}

/* End of code generation (mrdivide_helper.c) */
