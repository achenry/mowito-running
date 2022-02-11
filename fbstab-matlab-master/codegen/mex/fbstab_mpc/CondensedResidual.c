/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * CondensedResidual.c
 *
 * Code generation for function 'CondensedResidual'
 *
 */

/* Include files */
#include "CondensedResidual.h"
#include "CondensedMpcData.h"
#include "fbstab_mpc.h"
#include "fbstab_mpc_data.h"
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "sqrt.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo mc_emlrtRSI = { 46, /* lineNo */
  "CondensedResidual/NaturalResidual", /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\CondensedResidual.m"/* pathName */
};

static emlrtRSInfo sc_emlrtRSI = { 60, /* lineNo */
  "CondensedResidual/norm",            /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\CondensedResidual.m"/* pathName */
};

static emlrtRSInfo je_emlrtRSI = { 71, /* lineNo */
  "CondensedResidual/PFB",             /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\CondensedResidual.m"/* pathName */
};

static emlrtECInfo emlrtECI = { -1,    /* nDims */
  46,                                  /* lineNo */
  3,                                   /* colNo */
  "CondensedResidual/NaturalResidual", /* fName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\CondensedResidual.m"/* pName */
};

/* Function Definitions */
void CondensedResidual_PFB(const emlrtStack *sp, const CondensedResidual *o,
  const real_T a[124], const real_T b[124], real_T y[124])
{
  int32_T k;
  real_T b_a;
  real_T c_a;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;

  /*  PFB function */
  for (k = 0; k < 124; k++) {
    y[k] = a[k] * a[k] + b[k] * b[k];
  }

  st.site = &je_emlrtRSI;
  b_sqrt(&st, y);
  b_a = o->alpha;
  c_a = 1.0 - o->alpha;
  for (k = 0; k < 124; k++) {
    y[k] = b_a * ((a[k] + b[k]) - y[k]) + c_a * (muDoubleScalarMax(0.0, a[k]) *
      muDoubleScalarMax(0.0, b[k]));
  }
}

real_T CondensedResidual_norm(const emlrtStack *sp, const CondensedResidual *o)
{
  real_T x;
  real_T a;
  real_T b_a;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;

  /*  overload norm */
  a = o->znorm;
  b_a = o->vnorm;
  st.site = &sc_emlrtRSI;
  x = a * a + b_a * b_a;
  if (x < 0.0) {
    emlrtErrorWithMessageIdR2018a(&st, &c_emlrtRTEI,
      "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
      4, "sqrt");
  }

  return muDoubleScalarSqrt(x);
}

void c_CondensedResidual_NaturalResi(const emlrtStack *sp, CondensedResidual *o,
  const CondensedVariable *x)
{
  int32_T i;
  CondensedMpcData *obj;
  real_T v[124];
  real_T b_x[31];
  real_T z1[124];
  real_T c_x[31];
  real_T tmp_data[31];
  real_T varargin_2[124];
  real_T a;
  real_T b_z1[124];
  real_T scale;
  real_T absxk;
  real_T t;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;

  /*  Computes the norm of the natural residual */
  i = o->data->f->size[0];
  if (31 != i) {
    emlrtSizeEqCheck1DR2012b(31, i, &emlrtECI, sp);
  }

  st.site = &mc_emlrtRSI;
  obj = o->data;
  for (i = 0; i < 124; i++) {
    v[i] = x->v[i];
  }

  b_st.site = &rc_emlrtRSI;
  CondensedMpcData_LT(&b_st, obj, v, b_x);
  b_st.site = &rc_emlrtRSI;
  CondensedMpcData_ET(&b_st, obj, v, z1);
  b_st.site = &rc_emlrtRSI;
  b_CondensedMpcData_MT(&b_st, obj, z1, c_x);
  for (i = 0; i < 31; i++) {
    tmp_data[i] = b_x[i] + c_x[i];
  }

  st.site = &mc_emlrtRSI;
  CondensedMpcData_H(&st, o->data, x->z, b_x);
  for (i = 0; i < 31; i++) {
    c_x[i] = (b_x[i] + o->data->f->data[i]) + tmp_data[i];
  }

  for (i = 0; i < 31; i++) {
    o->rz[i] = c_x[i];
  }

  for (i = 0; i < 124; i++) {
    v[i] = x->y[i];
  }

  for (i = 0; i < 124; i++) {
    varargin_2[i] = x->v[i];
  }

  for (i = 0; i < 124; i++) {
    b_z1[i] = muDoubleScalarMin(v[i], varargin_2[i]);
  }

  a = o->alpha;
  for (i = 0; i < 124; i++) {
    varargin_2[i] = x->y[i];
  }

  for (i = 0; i < 124; i++) {
    v[i] = muDoubleScalarMax(0.0, varargin_2[i]);
  }

  scale = 1.0 - o->alpha;
  for (i = 0; i < 124; i++) {
    varargin_2[i] = x->v[i];
  }

  for (i = 0; i < 124; i++) {
    z1[i] = muDoubleScalarMax(0.0, varargin_2[i]);
  }

  for (i = 0; i < 124; i++) {
    o->rv[i] = a * b_z1[i] + scale * v[i] * z1[i];
  }

  for (i = 0; i < 31; i++) {
    b_x[i] = o->rz[i];
  }

  a = 0.0;
  scale = 3.3121686421112381E-170;
  for (i = 0; i < 31; i++) {
    absxk = muDoubleScalarAbs(b_x[i]);
    if (absxk > scale) {
      t = scale / absxk;
      a = a * t * t + 1.0;
      scale = absxk;
    } else {
      t = absxk / scale;
      a += t * t;
    }
  }

  a = scale * muDoubleScalarSqrt(a);
  o->znorm = a;
  for (i = 0; i < 124; i++) {
    v[i] = o->rv[i];
  }

  a = 0.0;
  scale = 3.3121686421112381E-170;
  for (i = 0; i < 124; i++) {
    absxk = muDoubleScalarAbs(v[i]);
    if (absxk > scale) {
      t = scale / absxk;
      a = a * t * t + 1.0;
      scale = absxk;
    } else {
      t = absxk / scale;
      a += t * t;
    }
  }

  a = scale * muDoubleScalarSqrt(a);
  o->vnorm = a;
}

/* End of code generation (CondensedResidual.c) */
