/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * mldivide.c
 *
 * Code generation for function 'mldivide'
 *
 */

/* Include files */
#include "mldivide.h"
#include "fbstab_mpc.h"
#include "fbstab_mpc_data.h"
#include "rt_nonfinite.h"
#include "warning.h"
#include "xgetrf.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo ki_emlrtRSI = { 20, /* lineNo */
  "mldivide",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\ops\\mldivide.m"/* pathName */
};

static emlrtRSInfo li_emlrtRSI = { 42, /* lineNo */
  "mldiv",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\ops\\mldivide.m"/* pathName */
};

/* Function Definitions */
void b_mldivide(const emlrtStack *sp, const real_T A[16], real_T B[4])
{
  real_T b_A[16];
  int32_T ipiv[4];
  int32_T info;
  real_T temp;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ki_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  b_st.site = &li_emlrtRSI;
  c_st.site = &mi_emlrtRSI;
  memcpy(&b_A[0], &A[0], 16U * sizeof(real_T));
  d_st.site = &oi_emlrtRSI;
  xgetrf(&d_st, b_A, ipiv, &info);
  if (info > 0) {
    d_st.site = &ni_emlrtRSI;
    e_st.site = &wi_emlrtRSI;
    warning(&e_st);
  }

  if (ipiv[0] != 1) {
    temp = B[0];
    B[0] = B[ipiv[0] - 1];
    B[ipiv[0] - 1] = temp;
  }

  if (ipiv[1] != 2) {
    temp = B[1];
    B[1] = B[ipiv[1] - 1];
    B[ipiv[1] - 1] = temp;
  }

  if (ipiv[2] != 3) {
    temp = B[2];
    B[2] = B[ipiv[2] - 1];
    B[ipiv[2] - 1] = temp;
  }

  if (B[0] != 0.0) {
    for (info = 2; info < 5; info++) {
      B[info - 1] -= B[0] * b_A[info - 1];
    }
  }

  if (B[1] != 0.0) {
    for (info = 3; info < 5; info++) {
      B[info - 1] -= B[1] * b_A[info + 3];
    }
  }

  if (B[2] != 0.0) {
    for (info = 4; info < 5; info++) {
      B[3] -= B[2] * b_A[11];
    }
  }

  if (B[3] != 0.0) {
    B[3] /= b_A[15];
    for (info = 0; info < 3; info++) {
      B[info] -= B[3] * b_A[info + 12];
    }
  }

  if (B[2] != 0.0) {
    B[2] /= b_A[10];
    for (info = 0; info < 2; info++) {
      B[info] -= B[2] * b_A[info + 8];
    }
  }

  if (B[1] != 0.0) {
    B[1] /= b_A[5];
    for (info = 0; info < 1; info++) {
      B[0] -= B[1] * b_A[4];
    }
  }

  if (B[0] != 0.0) {
    B[0] /= b_A[0];
  }
}

void mldivide(const emlrtStack *sp, const real_T A[16], real_T B[16])
{
  real_T b_A[16];
  int32_T ipiv[4];
  int32_T info;
  real_T temp;
  int32_T jBcol;
  int32_T i;
  int32_T b_i;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ki_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  b_st.site = &li_emlrtRSI;
  c_st.site = &mi_emlrtRSI;
  memcpy(&b_A[0], &A[0], 16U * sizeof(real_T));
  d_st.site = &oi_emlrtRSI;
  xgetrf(&d_st, b_A, ipiv, &info);
  if (info > 0) {
    d_st.site = &ni_emlrtRSI;
    e_st.site = &wi_emlrtRSI;
    warning(&e_st);
  }

  for (info = 0; info < 3; info++) {
    if (ipiv[info] != info + 1) {
      temp = B[info];
      B[info] = B[ipiv[info] - 1];
      B[ipiv[info] - 1] = temp;
      temp = B[info + 4];
      b_i = ipiv[info] + 3;
      B[info + 4] = B[b_i];
      B[b_i] = temp;
      temp = B[info + 8];
      b_i = ipiv[info] + 7;
      B[info + 8] = B[b_i];
      B[b_i] = temp;
      temp = B[info + 12];
      b_i = ipiv[info] + 11;
      B[info + 12] = B[b_i];
      B[b_i] = temp;
    }
  }

  for (info = 0; info < 4; info++) {
    jBcol = info << 2;
    if (B[jBcol] != 0.0) {
      for (i = 2; i < 5; i++) {
        b_i = (i + jBcol) - 1;
        B[b_i] -= B[jBcol] * b_A[i - 1];
      }
    }

    if (B[jBcol + 1] != 0.0) {
      for (i = 3; i < 5; i++) {
        b_i = (i + jBcol) - 1;
        B[b_i] -= B[jBcol + 1] * b_A[i + 3];
      }
    }

    if (B[jBcol + 2] != 0.0) {
      b_i = jBcol + 3;
      for (i = 4; i < 5; i++) {
        B[b_i] -= B[jBcol + 2] * b_A[11];
      }
    }
  }

  for (info = 0; info < 4; info++) {
    jBcol = info << 2;
    temp = B[jBcol + 3];
    if (temp != 0.0) {
      B[jBcol + 3] = temp / b_A[15];
      for (i = 0; i < 3; i++) {
        b_i = i + jBcol;
        B[b_i] -= B[jBcol + 3] * b_A[i + 12];
      }
    }

    if (B[jBcol + 2] != 0.0) {
      B[jBcol + 2] /= b_A[10];
      for (i = 0; i < 2; i++) {
        b_i = i + jBcol;
        B[b_i] -= B[jBcol + 2] * b_A[i + 8];
      }
    }

    if (B[jBcol + 1] != 0.0) {
      B[jBcol + 1] /= b_A[5];
      for (i = 0; i < 1; i++) {
        B[jBcol] -= B[jBcol + 1] * b_A[4];
      }
    }

    if (B[jBcol] != 0.0) {
      B[jBcol] /= b_A[0];
    }
  }
}

/* End of code generation (mldivide.c) */
