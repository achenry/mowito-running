/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * linsolve.c
 *
 * Code generation for function 'linsolve'
 *
 */

/* Include files */
#include "linsolve.h"
#include "fbstab_mpc.h"
#include "fbstab_mpc_data.h"
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "trisolve.h"
#include "warning.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo mk_emlrtRSI = { 102,/* lineNo */
  "linsolve",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\matfun\\linsolve.m"/* pathName */
};

static emlrtRSInfo nk_emlrtRSI = { 444,/* lineNo */
  "solveUT",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\matfun\\linsolve.m"/* pathName */
};

static emlrtRTEInfo i_emlrtRTEI = { 88,/* lineNo */
  15,                                  /* colNo */
  "linsolve",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\matfun\\linsolve.m"/* pName */
};

/* Function Definitions */
void b_linsolve(const emlrtStack *sp, const real_T A[16], const real_T B[4],
                real_T C[4])
{
  int32_T k;
  boolean_T exitg1;
  int32_T i;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &mk_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  C[0] = B[0];
  C[1] = B[1];
  C[2] = B[2];
  C[3] = B[3];
  c_trisolve(A, C);
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 4)) {
    i = k + (k << 2);
    if ((A[i] == 0.0) || (muDoubleScalarIsInf(A[i]) || muDoubleScalarIsNaN(A[i])))
    {
      b_st.site = &nk_emlrtRSI;
      c_st.site = &wi_emlrtRSI;
      warning(&c_st);
      exitg1 = true;
    } else {
      k++;
    }
  }
}

real_T c_linsolve(const emlrtStack *sp, real_T A, const real_T B_data[], const
                  int32_T B_size[1])
{
  real_T C;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  if (1 != B_size[0]) {
    emlrtErrorWithMessageIdR2018a(sp, &i_emlrtRTEI, "MATLAB:dimagree",
      "MATLAB:dimagree", 0);
  }

  st.site = &kk_emlrtRSI;
  C = B_data[0];
  b_trisolve(A, &C);
  if ((A == 0.0) || (muDoubleScalarIsInf(A) || muDoubleScalarIsNaN(A))) {
    b_st.site = &lk_emlrtRSI;
    c_st.site = &wi_emlrtRSI;
    warning(&c_st);
  }

  return C;
}

real_T d_linsolve(const emlrtStack *sp, real_T A, const real_T B_data[], const
                  int32_T B_size[1])
{
  real_T C;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  if (1 != B_size[0]) {
    emlrtErrorWithMessageIdR2018a(sp, &i_emlrtRTEI, "MATLAB:dimagree",
      "MATLAB:dimagree", 0);
  }

  st.site = &mk_emlrtRSI;
  C = B_data[0];
  b_trisolve(A, &C);
  if ((A == 0.0) || (muDoubleScalarIsInf(A) || muDoubleScalarIsNaN(A))) {
    b_st.site = &nk_emlrtRSI;
    c_st.site = &wi_emlrtRSI;
    warning(&c_st);
  }

  return C;
}

void e_linsolve(const emlrtStack *sp, const real_T A[16], const real_T B_data[],
                const int32_T B_size[1], real_T C[4])
{
  int32_T k;
  boolean_T exitg1;
  int32_T i;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  if (4 != B_size[0]) {
    emlrtErrorWithMessageIdR2018a(sp, &i_emlrtRTEI, "MATLAB:dimagree",
      "MATLAB:dimagree", 0);
  }

  st.site = &mk_emlrtRSI;
  C[0] = B_data[0];
  C[1] = B_data[1];
  C[2] = B_data[2];
  C[3] = B_data[3];
  c_trisolve(A, C);
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 4)) {
    i = k + (k << 2);
    if ((A[i] == 0.0) || (muDoubleScalarIsInf(A[i]) || muDoubleScalarIsNaN(A[i])))
    {
      b_st.site = &nk_emlrtRSI;
      c_st.site = &wi_emlrtRSI;
      warning(&c_st);
      exitg1 = true;
    } else {
      k++;
    }
  }
}

void f_linsolve(const emlrtStack *sp, const real_T A[16], const real_T B_data[],
                const int32_T B_size[1], real_T C[4])
{
  int32_T k;
  boolean_T exitg1;
  int32_T i;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  if (4 != B_size[0]) {
    emlrtErrorWithMessageIdR2018a(sp, &i_emlrtRTEI, "MATLAB:dimagree",
      "MATLAB:dimagree", 0);
  }

  st.site = &kk_emlrtRSI;
  C[0] = B_data[0];
  C[1] = B_data[1];
  C[2] = B_data[2];
  C[3] = B_data[3];
  trisolve(A, C);
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 4)) {
    i = k + (k << 2);
    if ((A[i] == 0.0) || (muDoubleScalarIsInf(A[i]) || muDoubleScalarIsNaN(A[i])))
    {
      b_st.site = &lk_emlrtRSI;
      c_st.site = &wi_emlrtRSI;
      warning(&c_st);
      exitg1 = true;
    } else {
      k++;
    }
  }
}

void linsolve(const emlrtStack *sp, const real_T A[16], const real_T B[4],
              real_T C[4])
{
  int32_T k;
  boolean_T exitg1;
  int32_T i;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &kk_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  C[0] = B[0];
  C[1] = B[1];
  C[2] = B[2];
  C[3] = B[3];
  trisolve(A, C);
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 4)) {
    i = k + (k << 2);
    if ((A[i] == 0.0) || (muDoubleScalarIsInf(A[i]) || muDoubleScalarIsNaN(A[i])))
    {
      b_st.site = &lk_emlrtRSI;
      c_st.site = &wi_emlrtRSI;
      warning(&c_st);
      exitg1 = true;
    } else {
      k++;
    }
  }
}

/* End of code generation (linsolve.c) */
