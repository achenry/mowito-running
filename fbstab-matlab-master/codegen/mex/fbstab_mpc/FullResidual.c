/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FullResidual.c
 *
 * Code generation for function 'FullResidual'
 *
 */

/* Include files */
#include "FullResidual.h"
#include "MpcData.h"
#include "fbstab_mpc.h"
#include "fbstab_mpc_data.h"
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "sqrt.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo jh_emlrtRSI = { 49, /* lineNo */
  "FullResidual/NaturalResidual",      /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\FullResidual.m"/* pathName */
};

static emlrtRSInfo kh_emlrtRSI = { 50, /* lineNo */
  "FullResidual/NaturalResidual",      /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\FullResidual.m"/* pathName */
};

static emlrtRSInfo lh_emlrtRSI = { 51, /* lineNo */
  "FullResidual/NaturalResidual",      /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\FullResidual.m"/* pathName */
};

static emlrtRSInfo mh_emlrtRSI = { 66, /* lineNo */
  "FullResidual/norm",                 /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\FullResidual.m"/* pathName */
};

static emlrtRSInfo nh_emlrtRSI = { 36, /* lineNo */
  "FullResidual/InnerResidual",        /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\FullResidual.m"/* pathName */
};

static emlrtRSInfo oh_emlrtRSI = { 37, /* lineNo */
  "FullResidual/InnerResidual",        /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\FullResidual.m"/* pathName */
};

static emlrtRSInfo ph_emlrtRSI = { 38, /* lineNo */
  "FullResidual/InnerResidual",        /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\FullResidual.m"/* pathName */
};

static emlrtRSInfo qh_emlrtRSI = { 40, /* lineNo */
  "FullResidual/InnerResidual",        /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\FullResidual.m"/* pathName */
};

static emlrtRSInfo rh_emlrtRSI = { 77, /* lineNo */
  "FullResidual/PFB",                  /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\FullResidual.m"/* pathName */
};

/* Function Declarations */
static void FullResidual_PFB(const emlrtStack *sp, const FullResidual *o, const
  real_T a[124], const real_T b[124], real_T y[124]);

/* Function Definitions */
static void FullResidual_PFB(const emlrtStack *sp, const FullResidual *o, const
  real_T a[124], const real_T b[124], real_T y[124])
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

  st.site = &rh_emlrtRSI;
  b_sqrt(&st, y);
  b_a = o->alpha;
  c_a = 1.0 - o->alpha;
  for (k = 0; k < 124; k++) {
    y[k] = b_a * ((a[k] + b[k]) - y[k]) + c_a * (muDoubleScalarMax(0.0, a[k]) *
      muDoubleScalarMax(0.0, b[k]));
  }
}

void FullResidual_InnerResidual(const emlrtStack *sp, FullResidual *o, const
  FullVariable *x, const FullVariable *xbar, real_T sigma)
{
  int32_T i;
  real_T b[155];
  MpcData *obj;
  real_T ys[124];
  int32_T b_i;
  real_T dv[155];
  real_T dv1[155];
  int32_T a_tmp;
  real_T a[20];
  int32_T b_a_tmp;
  real_T y[155];
  int32_T c_a_tmp;
  int32_T d_a_tmp;
  real_T b_o[124];
  real_T b_x[124];
  real_T b_y;
  real_T scale;
  real_T absxk;
  real_T t;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;

  /*  Computes the residuals for the inner PFB problem. */
  for (i = 0; i < 155; i++) {
    b[i] = x->z[i] - xbar->z[i];
  }

  st.site = &oh_emlrtRSI;
  obj = o->data;
  for (i = 0; i < 124; i++) {
    ys[i] = x->v[i];
  }

  /*  compute A'*v */
  /*  The sizes are recomputed to help */
  /*  with code generation. */
  /* methods */
  for (i = 0; i < 31; i++) {
    for (b_i = 0; b_i < 4; b_i++) {
      a_tmp = b_i + (i << 4);
      a[5 * b_i] = obj->E[a_tmp];
      a[5 * b_i + 1] = obj->E[a_tmp + 4];
      a[5 * b_i + 2] = obj->E[a_tmp + 8];
      a[5 * b_i + 3] = obj->E[a_tmp + 12];
    }

    a_tmp = i << 2;
    a[4] = obj->L[a_tmp];
    b_a_tmp = a_tmp + 1;
    a[9] = obj->L[b_a_tmp];
    c_a_tmp = a_tmp + 2;
    a[14] = obj->L[c_a_tmp];
    d_a_tmp = a_tmp + 3;
    a[19] = obj->L[d_a_tmp];
    for (b_i = 0; b_i < 5; b_i++) {
      y[b_i + 5 * i] = ((a[b_i] * ys[a_tmp] + a[b_i + 5] * ys[b_a_tmp]) + a[b_i
                        + 10] * ys[c_a_tmp]) + a[b_i + 15] * ys[d_a_tmp];
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }

  st.site = &nh_emlrtRSI;
  MpcData_H(&st, o->data, x->z, dv);
  st.site = &oh_emlrtRSI;
  MpcData_GT(&st, o->data, x->l, dv1);
  for (b_i = 0; b_i < 155; b_i++) {
    dv[b_i] = (((dv[b_i] + o->data->f[b_i]) + dv1[b_i]) + y[b_i]) + sigma *
      b[b_i];
  }

  for (b_i = 0; b_i < 155; b_i++) {
    o->rz[b_i] = dv[b_i];
  }

  for (i = 0; i < 124; i++) {
    ys[i] = x->l[i] - xbar->l[i];
  }

  st.site = &ph_emlrtRSI;
  MpcData_G(&st, o->data, x->z, b_o);
  for (b_i = 0; b_i < 124; b_i++) {
    b_o[b_i] = (o->data->h[b_i] - b_o[b_i]) + sigma * ys[b_i];
  }

  for (b_i = 0; b_i < 124; b_i++) {
    o->rl[b_i] = b_o[b_i];
  }

  for (i = 0; i < 124; i++) {
    ys[i] = x->v[i] - xbar->v[i];
  }

  for (b_i = 0; b_i < 124; b_i++) {
    ys[b_i] = x->y[b_i] + sigma * ys[b_i];
  }

  memcpy(&b_x[0], &x->v[0], 124U * sizeof(real_T));
  st.site = &qh_emlrtRSI;
  FullResidual_PFB(&st, o, ys, b_x, b_o);
  memcpy(&o->rv[0], &b_o[0], 124U * sizeof(real_T));
  for (i = 0; i < 155; i++) {
    b[i] = o->rz[i];
  }

  b_y = 0.0;
  scale = 3.3121686421112381E-170;
  for (i = 0; i < 155; i++) {
    absxk = muDoubleScalarAbs(b[i]);
    if (absxk > scale) {
      t = scale / absxk;
      b_y = b_y * t * t + 1.0;
      scale = absxk;
    } else {
      t = absxk / scale;
      b_y += t * t;
    }
  }

  b_y = scale * muDoubleScalarSqrt(b_y);
  o->znorm = b_y;
  for (i = 0; i < 124; i++) {
    ys[i] = o->rl[i];
  }

  b_y = 0.0;
  scale = 3.3121686421112381E-170;
  for (i = 0; i < 124; i++) {
    absxk = muDoubleScalarAbs(ys[i]);
    if (absxk > scale) {
      t = scale / absxk;
      b_y = b_y * t * t + 1.0;
      scale = absxk;
    } else {
      t = absxk / scale;
      b_y += t * t;
    }
  }

  b_y = scale * muDoubleScalarSqrt(b_y);
  o->lnorm = b_y;
  for (i = 0; i < 124; i++) {
    ys[i] = o->rv[i];
  }

  b_y = 0.0;
  scale = 3.3121686421112381E-170;
  for (i = 0; i < 124; i++) {
    absxk = muDoubleScalarAbs(ys[i]);
    if (absxk > scale) {
      t = scale / absxk;
      b_y = b_y * t * t + 1.0;
      scale = absxk;
    } else {
      t = absxk / scale;
      b_y += t * t;
    }
  }

  b_y = scale * muDoubleScalarSqrt(b_y);
  o->vnorm = b_y;
}

void FullResidual_NaturalResidual(const emlrtStack *sp, FullResidual *o, const
  FullVariable *x)
{
  MpcData *obj;
  int32_T i;
  real_T v[124];
  int32_T b_i;
  real_T dv[155];
  real_T dv1[155];
  int32_T a_tmp;
  real_T a[20];
  int32_T b_a_tmp;
  real_T y[155];
  int32_T c_a_tmp;
  int32_T d_a_tmp;
  real_T b_o[124];
  real_T varargin_2[124];
  real_T b_a;
  real_T scale;
  real_T absxk;
  real_T t;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;

  /*  Computes the norm of the natural residual. */
  st.site = &kh_emlrtRSI;
  obj = o->data;
  for (i = 0; i < 124; i++) {
    v[i] = x->v[i];
  }

  /*  compute A'*v */
  /*  The sizes are recomputed to help */
  /*  with code generation. */
  /* methods */
  for (i = 0; i < 31; i++) {
    for (b_i = 0; b_i < 4; b_i++) {
      a_tmp = b_i + (i << 4);
      a[5 * b_i] = obj->E[a_tmp];
      a[5 * b_i + 1] = obj->E[a_tmp + 4];
      a[5 * b_i + 2] = obj->E[a_tmp + 8];
      a[5 * b_i + 3] = obj->E[a_tmp + 12];
    }

    a_tmp = i << 2;
    a[4] = obj->L[a_tmp];
    b_a_tmp = a_tmp + 1;
    a[9] = obj->L[b_a_tmp];
    c_a_tmp = a_tmp + 2;
    a[14] = obj->L[c_a_tmp];
    d_a_tmp = a_tmp + 3;
    a[19] = obj->L[d_a_tmp];
    for (b_i = 0; b_i < 5; b_i++) {
      y[b_i + 5 * i] = ((a[b_i] * v[a_tmp] + a[b_i + 5] * v[b_a_tmp]) + a[b_i +
                        10] * v[c_a_tmp]) + a[b_i + 15] * v[d_a_tmp];
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }

  st.site = &jh_emlrtRSI;
  MpcData_H(&st, o->data, x->z, dv);
  st.site = &kh_emlrtRSI;
  MpcData_GT(&st, o->data, x->l, dv1);
  for (b_i = 0; b_i < 155; b_i++) {
    dv[b_i] = ((dv[b_i] + o->data->f[b_i]) + dv1[b_i]) + y[b_i];
  }

  for (b_i = 0; b_i < 155; b_i++) {
    o->rz[b_i] = dv[b_i];
  }

  st.site = &lh_emlrtRSI;
  MpcData_G(&st, o->data, x->z, v);
  for (b_i = 0; b_i < 124; b_i++) {
    b_o[b_i] = o->data->h[b_i] - v[b_i];
  }

  for (b_i = 0; b_i < 124; b_i++) {
    o->rl[b_i] = b_o[b_i];
  }

  for (i = 0; i < 124; i++) {
    v[i] = x->y[i];
  }

  for (i = 0; i < 124; i++) {
    varargin_2[i] = x->v[i];
  }

  for (i = 0; i < 124; i++) {
    b_o[i] = muDoubleScalarMin(v[i], varargin_2[i]);
  }

  b_a = o->alpha;
  for (i = 0; i < 124; i++) {
    o->rv[i] = b_a * b_o[i];
  }

  for (b_i = 0; b_i < 155; b_i++) {
    y[b_i] = o->rz[b_i];
  }

  b_a = 0.0;
  scale = 3.3121686421112381E-170;
  for (i = 0; i < 155; i++) {
    absxk = muDoubleScalarAbs(y[i]);
    if (absxk > scale) {
      t = scale / absxk;
      b_a = b_a * t * t + 1.0;
      scale = absxk;
    } else {
      t = absxk / scale;
      b_a += t * t;
    }
  }

  b_a = scale * muDoubleScalarSqrt(b_a);
  o->znorm = b_a;
  for (i = 0; i < 124; i++) {
    v[i] = o->rl[i];
  }

  b_a = 0.0;
  scale = 3.3121686421112381E-170;
  for (i = 0; i < 124; i++) {
    absxk = muDoubleScalarAbs(v[i]);
    if (absxk > scale) {
      t = scale / absxk;
      b_a = b_a * t * t + 1.0;
      scale = absxk;
    } else {
      t = absxk / scale;
      b_a += t * t;
    }
  }

  b_a = scale * muDoubleScalarSqrt(b_a);
  o->lnorm = b_a;
  for (i = 0; i < 124; i++) {
    v[i] = o->rv[i];
  }

  b_a = 0.0;
  scale = 3.3121686421112381E-170;
  for (i = 0; i < 124; i++) {
    absxk = muDoubleScalarAbs(v[i]);
    if (absxk > scale) {
      t = scale / absxk;
      b_a = b_a * t * t + 1.0;
      scale = absxk;
    } else {
      t = absxk / scale;
      b_a += t * t;
    }
  }

  b_a = scale * muDoubleScalarSqrt(b_a);
  o->vnorm = b_a;
}

real_T FullResidual_norm(const emlrtStack *sp, const FullResidual *o)
{
  real_T y;
  real_T a;
  real_T b_a;
  real_T c_a;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;

  /*  Computes the norm of the residual vector. */
  a = o->znorm;
  b_a = o->lnorm;
  c_a = o->vnorm;
  st.site = &mh_emlrtRSI;
  y = (a * a + b_a * b_a) + c_a * c_a;
  if (y < 0.0) {
    emlrtErrorWithMessageIdR2018a(&st, &c_emlrtRTEI,
      "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
      4, "sqrt");
  }

  return muDoubleScalarSqrt(y);
}

/* End of code generation (FullResidual.c) */
