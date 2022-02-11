/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * ImplicitConjugateGradient.c
 *
 * Code generation for function 'ImplicitConjugateGradient'
 *
 */

/* Include files */
#include "ImplicitConjugateGradient.h"
#include "CondensedMpcData.h"
#include "dot.h"
#include "fbstab_mpc.h"
#include "fbstab_mpc_data.h"
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "sqrt.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo bf_emlrtRSI = { 38, /* lineNo */
  "ImplicitConjugateGradient/Factor",  /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\ImplicitConjugateGradient.m"/* pathName */
};

static emlrtRSInfo cf_emlrtRSI = { 123,/* lineNo */
  "ImplicitConjugateGradient/dphi",    /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\ImplicitConjugateGradient.m"/* pathName */
};

static emlrtRSInfo df_emlrtRSI = { 53, /* lineNo */
  "ImplicitConjugateGradient/Solve",   /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\ImplicitConjugateGradient.m"/* pathName */
};

static emlrtRSInfo ef_emlrtRSI = { 55, /* lineNo */
  "ImplicitConjugateGradient/Solve",   /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\ImplicitConjugateGradient.m"/* pathName */
};

static emlrtRSInfo ff_emlrtRSI = { 58, /* lineNo */
  "ImplicitConjugateGradient/Solve",   /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\ImplicitConjugateGradient.m"/* pathName */
};

static emlrtRSInfo gf_emlrtRSI = { 61, /* lineNo */
  "ImplicitConjugateGradient/Solve",   /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\ImplicitConjugateGradient.m"/* pathName */
};

static emlrtRSInfo if_emlrtRSI = { 72, /* lineNo */
  "ImplicitConjugateGradient/ConjugateGradient",/* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\ImplicitConjugateGradient.m"/* pathName */
};

static emlrtRSInfo kf_emlrtRSI = { 77, /* lineNo */
  "ImplicitConjugateGradient/ConjugateGradient",/* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\ImplicitConjugateGradient.m"/* pathName */
};

static emlrtRSInfo lf_emlrtRSI = { 81, /* lineNo */
  "ImplicitConjugateGradient/ConjugateGradient",/* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\ImplicitConjugateGradient.m"/* pathName */
};

static emlrtRSInfo nf_emlrtRSI = { 91, /* lineNo */
  "ImplicitConjugateGradient/ConjugateGradient",/* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\ImplicitConjugateGradient.m"/* pathName */
};

static emlrtRSInfo uf_emlrtRSI = { 109,/* lineNo */
  "ImplicitConjugateGradient/Kapply",  /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\ImplicitConjugateGradient.m"/* pathName */
};

static emlrtRSInfo vf_emlrtRSI = { 110,/* lineNo */
  "ImplicitConjugateGradient/Kapply",  /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\ImplicitConjugateGradient.m"/* pathName */
};

static emlrtRSInfo wf_emlrtRSI = { 112,/* lineNo */
  "ImplicitConjugateGradient/Kapply",  /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\ImplicitConjugateGradient.m"/* pathName */
};

static emlrtRSInfo xf_emlrtRSI = { 114,/* lineNo */
  "ImplicitConjugateGradient/Kapply",  /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\ImplicitConjugateGradient.m"/* pathName */
};

static emlrtRSInfo yf_emlrtRSI = { 115,/* lineNo */
  "ImplicitConjugateGradient/Kapply",  /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\ImplicitConjugateGradient.m"/* pathName */
};

/* Function Declarations */
static void ImplicitConjugateGradient_dphi(const emlrtStack *sp, const
  ImplicitConjugateGradient *o, const real_T a[124], const real_T b[124], real_T
  b_gamma[124], real_T mu[124]);
static void c_ImplicitConjugateGradient_Kap(const emlrtStack *sp,
  ImplicitConjugateGradient *o, const real_T u[31], real_T y[31]);

/* Function Definitions */
static void ImplicitConjugateGradient_dphi(const emlrtStack *sp, const
  ImplicitConjugateGradient *o, const real_T a[124], const real_T b[124], real_T
  b_gamma[124], real_T mu[124])
{
  real_T ztol;
  int32_T k;
  real_T r[124];
  real_T gamma_tmp;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;

  /*  compute an element of the C-differential  */
  ztol = o->ztol;

  /*  computes an element from the C differential */
  for (k = 0; k < 124; k++) {
    r[k] = a[k] * a[k] + b[k] * b[k];
  }

  st.site = &cf_emlrtRSI;
  b_sqrt(&st, r);

  /*  zero elements */
  /*  positive orthant */
  /*  the rest */
  for (k = 0; k < 124; k++) {
    if (r[k] <= ztol) {
      gamma_tmp = o->alpha * 0.29289321881345254;
      b_gamma[k] = gamma_tmp;
      mu[k] = gamma_tmp;
    } else if ((a[k] > 0.0) && (b[k] > 0.0)) {
      b_gamma[k] = o->alpha * (1.0 - a[k] / r[k]) + (1.0 - o->alpha) * b[k];
      mu[k] = o->alpha * (1.0 - b[k] / r[k]) + (1.0 - o->alpha) * a[k];
    } else {
      /*  S2 */
      b_gamma[k] = o->alpha * (1.0 - a[k] / r[k]);
      mu[k] = o->alpha * (1.0 - b[k] / r[k]);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }
}

static void c_ImplicitConjugateGradient_Kap(const emlrtStack *sp,
  ImplicitConjugateGradient *o, const real_T u[31], real_T y[31])
{
  real_T x[124];
  real_T t[124];
  real_T dv[124];
  int32_T i;
  real_T t2[124];
  real_T dv1[124];
  real_T a;
  CondensedMpcData *obj;
  int32_T a_idx_0_tmp;
  real_T dv2[31];
  real_T a_idx_0;
  real_T dv3[31];
  int32_T a_idx_1_tmp;
  real_T a_idx_1;
  int32_T a_idx_2_tmp;
  real_T b_y[31];
  real_T a_idx_2;
  int32_T a_idx_3_tmp;
  real_T a_idx_3;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &uf_emlrtRSI;
  CondensedMpcData_MP(&st, o->data, u, x);
  st.site = &vf_emlrtRSI;
  CondensedMpcData_EP(&st, o->data, x, t);
  st.site = &vf_emlrtRSI;
  CondensedMpcData_LP(&st, o->data, u, dv);
  for (i = 0; i < 124; i++) {
    t[i] += dv[i];
  }

  for (i = 0; i < 124; i++) {
    t[i] = t[i] * o->gamma[i] / o->mus[i];
  }

  st.site = &wf_emlrtRSI;
  CondensedMpcData_QP(&st, o->data, x, t2);
  st.site = &wf_emlrtRSI;
  CondensedMpcData_ST(&st, o->data, u, dv);
  st.site = &wf_emlrtRSI;
  CondensedMpcData_ET(&st, o->data, t, dv1);
  for (i = 0; i < 124; i++) {
    t2[i] = (t2[i] + dv[i]) + dv1[i];
  }

  a = o->sigma;
  st.site = &xf_emlrtRSI;
  obj = o->data;

  /*  Control penalty matrix */
  for (i = 0; i < 31; i++) {
    y[i] = obj->R[i] * u[i];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }

  st.site = &yf_emlrtRSI;
  obj = o->data;

  /*  Coupling matrix */
  for (i = 0; i < 31; i++) {
    a_idx_0_tmp = i << 2;
    a_idx_0 = obj->S[a_idx_0_tmp];
    a_idx_1_tmp = a_idx_0_tmp + 1;
    a_idx_1 = obj->S[a_idx_1_tmp];
    a_idx_2_tmp = a_idx_0_tmp + 2;
    a_idx_2 = obj->S[a_idx_2_tmp];
    a_idx_3_tmp = a_idx_0_tmp + 3;
    a_idx_3 = obj->S[a_idx_3_tmp];
    b_y[i] = ((a_idx_0 * x[a_idx_0_tmp] + a_idx_1 * x[a_idx_1_tmp]) + a_idx_2 *
              x[a_idx_2_tmp]) + a_idx_3 * x[a_idx_3_tmp];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }

  st.site = &yf_emlrtRSI;
  b_CondensedMpcData_MT(&st, o->data, t2, dv2);
  st.site = &yf_emlrtRSI;
  CondensedMpcData_LT(&st, o->data, t, dv3);
  for (i = 0; i < 31; i++) {
    y[i] = (((a * u[i] + y[i]) + dv2[i]) + b_y[i]) + dv3[i];
  }
}

void ImplicitConjugateGradient_Solve(const emlrtStack *sp,
  ImplicitConjugateGradient *o, const CondensedResidual *r, CondensedVariable
  *dx)
{
  CondensedMpcData *obj;
  int32_T i;
  real_T v[124];
  int32_T b_i;
  real_T dv[31];
  int32_T k;
  real_T y[124];
  real_T w[31];
  real_T r1[31];
  int32_T i1;
  real_T tau1;
  emxArray_real_T b_r1;
  int32_T iv[1];
  real_T bb;
  real_T b_y[31];
  emxArray_real_T c_r1;
  int32_T iv1[1];
  real_T tau;
  boolean_T exitg1;
  emxArray_real_T d_r1;
  int32_T iv2[1];
  emxArray_real_T e_r1;
  int32_T iv3[1];
  real_T c_y[31];
  emxArray_real_T d_y;
  int32_T iv4[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &df_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  obj = o->data;
  for (i = 0; i < 124; i++) {
    v[i] = r->rv[i] / o->mus[i];
  }

  b_st.site = &rc_emlrtRSI;
  for (i = 0; i < 31; i++) {
    b_i = i << 2;
    for (k = 0; k < 4; k++) {
      i1 = (k << 2) + (i << 4);
      tau1 = obj->E[i1] * v[b_i];
      tau1 += obj->E[i1 + 1] * v[b_i + 1];
      tau1 += obj->E[i1 + 2] * v[b_i + 2];
      tau1 += obj->E[i1 + 3] * v[b_i + 3];
      y[k + b_i] = tau1;
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&b_st);
    }
  }

  b_st.site = &rc_emlrtRSI;
  CondensedMpcData_LT(&b_st, obj, v, dv);
  b_st.site = &rc_emlrtRSI;
  b_CondensedMpcData_MT(&b_st, obj, y, w);
  memcpy(&r1[0], &w[0], 31U * sizeof(real_T));
  for (b_i = 0; b_i < 31; b_i++) {
    w[b_i] = dv[b_i] + r1[b_i];
  }

  for (b_i = 0; b_i < 31; b_i++) {
    r1[b_i] = r->rz[b_i] - w[b_i];
  }

  st.site = &ef_emlrtRSI;

  /*  */
  /*  https://github.com/dliaomcp/fbstab-matlab */
  /*  */
  /*  and is subject to the BSD-3-Clause license  */
  /*  zero tolerance  */
  /*  relative tolerance for PCG iteration */
  /*  preconditioner */
  /*  properties */
  /*  form the augmented Hessian matrix */
  /*  compute the barrier terms */
  /*  factor */
  /*  compute the reduced residual */
  /*  Recover Inequality duals */
  /*  dy for linesearch */
  /*  public methods */
  memset(&dv[0], 0, 31U * sizeof(real_T));
  b_r1.data = &r1[0];
  iv[0] = 31;
  b_r1.size = &iv[0];
  b_r1.allocatedSize = 31;
  b_r1.numDimensions = 1;
  b_r1.canFreeData = false;
  bb = vdotp(&b_r1, r1);
  b_st.site = &if_emlrtRSI;
  for (i = 0; i < 31; i++) {
    b_y[i] = r1[i] / o->T[i];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&b_st);
    }
  }

  c_r1.data = &r1[0];
  iv1[0] = 31;
  c_r1.size = &iv1[0];
  c_r1.allocatedSize = 31;
  c_r1.numDimensions = 1;
  c_r1.canFreeData = false;
  tau = vdotp(&c_r1, b_y);
  memset(&b_y[0], 0, 31U * sizeof(real_T));
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 31)) {
    d_r1.data = &r1[0];
    iv2[0] = 31;
    d_r1.size = &iv2[0];
    d_r1.allocatedSize = 31;
    d_r1.numDimensions = 1;
    d_r1.canFreeData = false;
    tau1 = vdotp(&d_r1, r1);
    b_st.site = &kf_emlrtRSI;
    if (tau1 < 0.0) {
      emlrtErrorWithMessageIdR2018a(&b_st, &c_emlrtRTEI,
        "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
        4, "sqrt");
    }

    tau1 = muDoubleScalarSqrt(tau1);
    if (tau1 / bb <= 1.0E-8) {
      exitg1 = true;
    } else {
      b_st.site = &lf_emlrtRSI;
      for (i = 0; i < 31; i++) {
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(&b_st);
        }
      }

      tau1 = tau;
      e_r1.data = &r1[0];
      iv3[0] = 31;
      e_r1.size = &iv3[0];
      e_r1.allocatedSize = 31;
      e_r1.numDimensions = 1;
      e_r1.canFreeData = false;
      tau = vdotp(&e_r1, r1);
      if (k + 1 == 1) {
        memcpy(&b_y[0], &r1[0], 31U * sizeof(real_T));
      } else {
        tau1 = tau / tau1;
        for (b_i = 0; b_i < 31; b_i++) {
          b_y[b_i] = r1[b_i] + tau1 * b_y[b_i];
        }
      }

      memcpy(&c_y[0], &b_y[0], 31U * sizeof(real_T));
      b_st.site = &nf_emlrtRSI;
      c_ImplicitConjugateGradient_Kap(&b_st, o, c_y, w);
      d_y.data = &b_y[0];
      iv4[0] = 31;
      d_y.size = &iv4[0];
      d_y.allocatedSize = 31;
      d_y.numDimensions = 1;
      d_y.canFreeData = false;
      tau1 = vdotp(&d_y, w);
      tau1 = tau / tau1;
      for (b_i = 0; b_i < 31; b_i++) {
        dv[b_i] += tau1 * b_y[b_i];
        r1[b_i] -= tau1 * w[b_i];
      }

      k++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(&st);
      }
    }
  }

  for (i = 0; i < 31; i++) {
    dx->z[i] = dv[i];
  }

  memcpy(&w[0], &dx->z[0], 31U * sizeof(real_T));
  st.site = &ff_emlrtRSI;
  CondensedMpcData_A(&st, o->data, w, v);
  for (b_i = 0; b_i < 124; b_i++) {
    v[b_i] = (r->rv[b_i] + o->gamma[b_i] * v[b_i]) / o->mus[b_i];
  }

  for (b_i = 0; b_i < 124; b_i++) {
    dx->v[b_i] = v[b_i];
  }

  memcpy(&w[0], &dx->z[0], 31U * sizeof(real_T));
  st.site = &gf_emlrtRSI;
  CondensedMpcData_A(&st, o->data, w, v);
  for (b_i = 0; b_i < 124; b_i++) {
    v[b_i] = o->data->b[b_i] - v[b_i];
  }

  for (b_i = 0; b_i < 124; b_i++) {
    dx->y[b_i] = v[b_i];
  }

  /*  dphi */
  /*  private methods */
  /*  class */
}

void c_ImplicitConjugateGradient_Fac(const emlrtStack *sp,
  ImplicitConjugateGradient *o, const CondensedVariable *x, const
  CondensedVariable *xbar, real_T sigma)
{
  int32_T i;
  real_T ys[124];
  real_T b_gamma[124];
  real_T mu[124];
  real_T d;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  o->sigma = sigma;
  for (i = 0; i < 124; i++) {
    ys[i] = x->v[i] - xbar->v[i];
  }

  for (i = 0; i < 124; i++) {
    ys[i] = x->y[i] + sigma * ys[i];
  }

  st.site = &bf_emlrtRSI;
  ImplicitConjugateGradient_dphi(&st, o, ys, x->v, b_gamma, mu);
  for (i = 0; i < 124; i++) {
    o->mus[i] = sigma * b_gamma[i] + mu[i];
  }

  for (i = 0; i < 124; i++) {
    o->gamma[i] = b_gamma[i];
  }

  for (i = 0; i < 31; i++) {
    d = o->data->R[i];
    o->T[i] = d + sigma;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }
}

/* End of code generation (ImplicitConjugateGradient.c) */
