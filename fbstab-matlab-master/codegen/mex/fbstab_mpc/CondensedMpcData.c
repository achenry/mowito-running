/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * CondensedMpcData.c
 *
 * Code generation for function 'CondensedMpcData'
 *
 */

/* Include files */
#include "CondensedMpcData.h"
#include "fbstab_mpc.h"
#include "fbstab_mpc_data.h"
#include "fbstab_mpc_emxutil.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo q_emlrtRSI = { 65,  /* lineNo */
  "CondensedMpcData/CondensedMpcData", /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\CondensedMpcData.m"/* pathName */
};

static emlrtRSInfo r_emlrtRSI = { 69,  /* lineNo */
  "CondensedMpcData/CondensedMpcData", /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\CondensedMpcData.m"/* pathName */
};

static emlrtRSInfo s_emlrtRSI = { 70,  /* lineNo */
  "CondensedMpcData/CondensedMpcData", /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\CondensedMpcData.m"/* pathName */
};

static emlrtRSInfo t_emlrtRSI = { 74,  /* lineNo */
  "CondensedMpcData/CondensedMpcData", /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\CondensedMpcData.m"/* pathName */
};

static emlrtRSInfo u_emlrtRSI = { 188, /* lineNo */
  "CondensedMpcData/MT",               /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\CondensedMpcData.m"/* pathName */
};

static emlrtRSInfo jc_emlrtRSI = { 101,/* lineNo */
  "CondensedMpcData/A",                /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\CondensedMpcData.m"/* pathName */
};

static emlrtRSInfo kc_emlrtRSI = { 102,/* lineNo */
  "CondensedMpcData/A",                /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\CondensedMpcData.m"/* pathName */
};

static emlrtRSInfo nc_emlrtRSI = { 89, /* lineNo */
  "CondensedMpcData/H",                /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\CondensedMpcData.m"/* pathName */
};

static emlrtRSInfo oc_emlrtRSI = { 90, /* lineNo */
  "CondensedMpcData/H",                /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\CondensedMpcData.m"/* pathName */
};

static emlrtRSInfo pc_emlrtRSI = { 91, /* lineNo */
  "CondensedMpcData/H",                /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\CondensedMpcData.m"/* pathName */
};

static emlrtRSInfo qc_emlrtRSI = { 92, /* lineNo */
  "CondensedMpcData/H",                /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\CondensedMpcData.m"/* pathName */
};

static emlrtRTEInfo emlrtRTEI = { 59,  /* lineNo */
  23,                                  /* colNo */
  "reshapeSizeChecks",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\reshapeSizeChecks.m"/* pName */
};

static emlrtRTEInfo n_emlrtRTEI = { 64,/* lineNo */
  3,                                   /* colNo */
  "CondensedMpcData",                  /* fName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\CondensedMpcData.m"/* pName */
};

static emlrtRTEInfo o_emlrtRTEI = { 69,/* lineNo */
  3,                                   /* colNo */
  "CondensedMpcData",                  /* fName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\CondensedMpcData.m"/* pName */
};

static emlrtRTEInfo p_emlrtRTEI = { 70,/* lineNo */
  14,                                  /* colNo */
  "CondensedMpcData",                  /* fName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\CondensedMpcData.m"/* pName */
};

static emlrtRTEInfo q_emlrtRTEI = { 70,/* lineNo */
  3,                                   /* colNo */
  "CondensedMpcData",                  /* fName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\CondensedMpcData.m"/* pName */
};

/* Function Declarations */
static void CondensedMpcData_MT(const emlrtStack *sp, const CondensedMpcData
  *obj, const emxArray_real_T *v, real_T y[31]);

/* Function Definitions */
static void CondensedMpcData_MT(const emlrtStack *sp, const CondensedMpcData
  *obj, const emxArray_real_T *v, real_T y[31])
{
  real_T l[120];
  int32_T i;
  int32_T l_tmp;
  int32_T y_tmp;
  int32_T b_y_tmp;
  real_T b_v[4];
  int32_T c_y_tmp;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;

  /*  Co-state propagation */
  memset(&y[0], 0, 31U * sizeof(real_T));
  st.site = &u_emlrtRSI;
  if (124 != v->size[0]) {
    emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel",
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  memset(&l[0], 0, 120U * sizeof(real_T));
  l[116] = v->data[120];
  l[117] = v->data[121];
  l[118] = v->data[122];
  l[119] = v->data[123];
  for (i = 0; i < 29; i++) {
    l_tmp = (29 - i) << 2;
    for (y_tmp = 0; y_tmp < 4; y_tmp++) {
      b_y_tmp = (y_tmp << 2) + ((29 - i) << 4);
      b_v[y_tmp] = v->data[y_tmp + l_tmp] + (((obj->Ak[b_y_tmp] * l[l_tmp] +
        obj->Ak[b_y_tmp + 1] * l[l_tmp + 1]) + obj->Ak[b_y_tmp + 2] * l[l_tmp +
        2]) + obj->Ak[b_y_tmp + 3] * l[l_tmp + 3]);
    }

    l_tmp = (28 - i) << 2;
    l[l_tmp] = b_v[0];
    l[l_tmp + 1] = b_v[1];
    l[l_tmp + 2] = b_v[2];
    l[l_tmp + 3] = b_v[3];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  for (i = 0; i < 30; i++) {
    l_tmp = i << 2;
    y_tmp = l_tmp + 1;
    b_y_tmp = l_tmp + 2;
    c_y_tmp = l_tmp + 3;
    y[i] = ((obj->Bk[l_tmp] * l[l_tmp] + obj->Bk[y_tmp] * l[y_tmp]) + obj->
            Bk[b_y_tmp] * l[b_y_tmp]) + obj->Bk[c_y_tmp] * l[c_y_tmp];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }
}

void CondensedMpcData_A(const emlrtStack *sp, const CondensedMpcData *obj, const
  real_T v[31], real_T y[124])
{
  int32_T i;
  int32_T y_tmp;
  int32_T b_y_tmp;
  real_T x[124];
  int32_T b_i;
  real_T a[16];
  real_T b_a[4];
  real_T c_a[4];
  real_T b_y[124];
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &jc_emlrtRSI;

  /*  Control constraint matrix */
  for (i = 0; i < 31; i++) {
    y_tmp = i << 2;
    y[y_tmp] = obj->L[y_tmp] * v[i];
    b_y_tmp = y_tmp + 1;
    y[b_y_tmp] = obj->L[b_y_tmp] * v[i];
    b_y_tmp = y_tmp + 2;
    y[b_y_tmp] = obj->L[b_y_tmp] * v[i];
    y_tmp += 3;
    y[y_tmp] = obj->L[y_tmp] * v[i];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }

  st.site = &kc_emlrtRSI;

  /*  State propagation */
  memset(&x[0], 0, 124U * sizeof(real_T));
  for (i = 0; i < 30; i++) {
    for (b_i = 0; b_i < 4; b_i++) {
      y_tmp = b_i << 2;
      b_y_tmp = y_tmp + (i << 4);
      a[y_tmp] = obj->Ak[b_y_tmp];
      a[y_tmp + 1] = obj->Ak[b_y_tmp + 1];
      a[y_tmp + 2] = obj->Ak[b_y_tmp + 2];
      a[y_tmp + 3] = obj->Ak[b_y_tmp + 3];
      c_a[b_i] = obj->Bk[b_i + (i << 2)];
    }

    b_i = i << 2;
    for (y_tmp = 0; y_tmp < 4; y_tmp++) {
      b_a[y_tmp] = (((a[y_tmp] * x[b_i] + a[y_tmp + 4] * x[b_i + 1]) + a[y_tmp +
                     8] * x[b_i + 2]) + a[y_tmp + 12] * x[b_i + 3]) + c_a[y_tmp]
        * v[i];
    }

    y_tmp = (i + 1) << 2;
    x[y_tmp] = b_a[0];
    x[y_tmp + 1] = b_a[1];
    x[y_tmp + 2] = b_a[2];
    x[y_tmp + 3] = b_a[3];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }

  st.site = &kc_emlrtRSI;

  /*  State constraint matrix */
  for (i = 0; i < 31; i++) {
    b_i = i << 2;
    for (y_tmp = 0; y_tmp < 4; y_tmp++) {
      b_y_tmp = y_tmp + (i << 4);
      b_y[y_tmp + b_i] = ((obj->E[b_y_tmp] * x[b_i] + obj->E[b_y_tmp + 4] *
                           x[b_i + 1]) + obj->E[b_y_tmp + 8] * x[b_i + 2]) +
        obj->E[b_y_tmp + 12] * x[b_i + 3];
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }

  for (b_i = 0; b_i < 124; b_i++) {
    y[b_i] += b_y[b_i];
  }
}

void CondensedMpcData_EP(const emlrtStack *sp, const CondensedMpcData *obj,
  const real_T x[124], real_T y[124])
{
  int32_T i;
  int32_T y_tmp_tmp;
  int32_T b_i;
  int32_T y_tmp;
  int32_T b_y_tmp;

  /*  State constraint matrix */
  for (i = 0; i < 31; i++) {
    y_tmp_tmp = i << 2;
    for (b_i = 0; b_i < 4; b_i++) {
      y_tmp = b_i + y_tmp_tmp;
      y[y_tmp] = 0.0;
      b_y_tmp = b_i + (i << 4);
      y[y_tmp] += obj->E[b_y_tmp] * x[y_tmp_tmp];
      y[y_tmp] += obj->E[b_y_tmp + 4] * x[y_tmp_tmp + 1];
      y[y_tmp] += obj->E[b_y_tmp + 8] * x[y_tmp_tmp + 2];
      y[y_tmp] += obj->E[b_y_tmp + 12] * x[y_tmp_tmp + 3];
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }
}

void CondensedMpcData_ET(const emlrtStack *sp, const CondensedMpcData *obj,
  const real_T v[124], real_T y[124])
{
  int32_T i;
  int32_T y_tmp_tmp;
  int32_T b_i;
  int32_T y_tmp;
  int32_T b_y_tmp;
  for (i = 0; i < 31; i++) {
    y_tmp_tmp = i << 2;
    for (b_i = 0; b_i < 4; b_i++) {
      y_tmp = b_i + y_tmp_tmp;
      y[y_tmp] = 0.0;
      b_y_tmp = (b_i << 2) + (i << 4);
      y[y_tmp] += obj->E[b_y_tmp] * v[y_tmp_tmp];
      y[y_tmp] += obj->E[b_y_tmp + 1] * v[y_tmp_tmp + 1];
      y[y_tmp] += obj->E[b_y_tmp + 2] * v[y_tmp_tmp + 2];
      y[y_tmp] += obj->E[b_y_tmp + 3] * v[y_tmp_tmp + 3];
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }
}

void CondensedMpcData_H(const emlrtStack *sp, const CondensedMpcData *obj, const
  real_T v[31], real_T y[31])
{
  real_T x[124];
  int32_T i;
  int32_T x_tmp;
  int32_T y_tmp;
  int32_T b_y_tmp;
  real_T b_obj[4];
  real_T b_x[124];
  int32_T c_y_tmp;
  real_T b_y[31];
  real_T dv[31];
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &nc_emlrtRSI;

  /*  State propagation */
  memset(&x[0], 0, 124U * sizeof(real_T));
  for (i = 0; i < 30; i++) {
    x_tmp = i << 2;
    for (y_tmp = 0; y_tmp < 4; y_tmp++) {
      b_y_tmp = y_tmp + (i << 4);
      b_obj[y_tmp] = (((obj->Ak[b_y_tmp] * x[x_tmp] + obj->Ak[b_y_tmp + 4] *
                        x[x_tmp + 1]) + obj->Ak[b_y_tmp + 8] * x[x_tmp + 2]) +
                      obj->Ak[b_y_tmp + 12] * x[x_tmp + 3]) + obj->Bk[y_tmp +
        x_tmp] * v[i];
    }

    x_tmp = (i + 1) << 2;
    x[x_tmp] = b_obj[0];
    x[x_tmp + 1] = b_obj[1];
    x[x_tmp + 2] = b_obj[2];
    x[x_tmp + 3] = b_obj[3];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }

  st.site = &oc_emlrtRSI;

  /*  Control penalty matrix */
  for (i = 0; i < 31; i++) {
    y[i] = obj->R[i] * v[i];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }

  st.site = &oc_emlrtRSI;

  /*  Coupling matrix */
  for (i = 0; i < 31; i++) {
    x_tmp = i << 2;
    y_tmp = x_tmp + 1;
    b_y_tmp = x_tmp + 2;
    c_y_tmp = x_tmp + 3;
    b_y[i] = ((obj->S[x_tmp] * x[x_tmp] + obj->S[y_tmp] * x[y_tmp]) + obj->
              S[b_y_tmp] * x[b_y_tmp]) + obj->S[c_y_tmp] * x[c_y_tmp];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }

  st.site = &pc_emlrtRSI;
  CondensedMpcData_QP(&st, obj, x, b_x);
  st.site = &pc_emlrtRSI;
  CondensedMpcData_ST(&st, obj, v, x);
  for (x_tmp = 0; x_tmp < 124; x_tmp++) {
    b_x[x_tmp] += x[x_tmp];
  }

  st.site = &qc_emlrtRSI;
  b_CondensedMpcData_MT(&st, obj, b_x, dv);
  for (x_tmp = 0; x_tmp < 31; x_tmp++) {
    y[x_tmp] = (y[x_tmp] + b_y[x_tmp]) + dv[x_tmp];
  }
}

void CondensedMpcData_H_ms(const emlrtStack *sp, const CondensedMpcData *obj,
  const real_T v[155], real_T y[155])
{
  int32_T i;
  real_T b_y;
  int32_T v_tmp;
  int32_T k;
  int32_T y_tmp;
  int32_T b_y_tmp;
  int32_T b_i;
  for (i = 0; i < 31; i++) {
    b_y = 0.0;
    v_tmp = 5 * i + 4;
    for (k = 0; k < 4; k++) {
      y_tmp = k + (i << 2);
      b_y_tmp = k + 5 * i;
      b_y += obj->S[y_tmp] * v[b_y_tmp];
      b_i = k + (i << 4);
      y[b_y_tmp] = (((obj->Q[b_i] * v[5 * i] + obj->Q[b_i + 4] * v[5 * i + 1]) +
                     obj->Q[b_i + 8] * v[5 * i + 2]) + obj->Q[b_i + 12] * v[5 *
                    i + 3]) + obj->S[y_tmp] * v[v_tmp];
    }

    y[v_tmp] = b_y + obj->R[i] * v[v_tmp];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }
}

void CondensedMpcData_LP(const emlrtStack *sp, const CondensedMpcData *obj,
  const real_T u[31], real_T y[124])
{
  int32_T i;
  int32_T y_tmp;
  int32_T b_y_tmp;

  /*  Control constraint matrix */
  for (i = 0; i < 31; i++) {
    y_tmp = i << 2;
    y[y_tmp] = obj->L[y_tmp] * u[i];
    b_y_tmp = y_tmp + 1;
    y[b_y_tmp] = obj->L[b_y_tmp] * u[i];
    b_y_tmp = y_tmp + 2;
    y[b_y_tmp] = obj->L[b_y_tmp] * u[i];
    y_tmp += 3;
    y[y_tmp] = obj->L[y_tmp] * u[i];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }
}

void CondensedMpcData_LT(const emlrtStack *sp, const CondensedMpcData *obj,
  const real_T v[124], real_T y[31])
{
  int32_T i;
  int32_T y_tmp;
  int32_T b_y_tmp;
  int32_T c_y_tmp;
  int32_T d_y_tmp;
  for (i = 0; i < 31; i++) {
    y_tmp = i << 2;
    b_y_tmp = y_tmp + 1;
    c_y_tmp = y_tmp + 2;
    d_y_tmp = y_tmp + 3;
    y[i] = ((obj->L[y_tmp] * v[y_tmp] + obj->L[b_y_tmp] * v[b_y_tmp]) + obj->
            L[c_y_tmp] * v[c_y_tmp]) + obj->L[d_y_tmp] * v[d_y_tmp];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }
}

void CondensedMpcData_MP(const emlrtStack *sp, const CondensedMpcData *obj,
  const real_T u[31], real_T x[124])
{
  int32_T i;
  int32_T x_tmp;
  int32_T b_i;
  int32_T i1;
  real_T b_obj[4];

  /*  State propagation */
  memset(&x[0], 0, 124U * sizeof(real_T));
  for (i = 0; i < 30; i++) {
    x_tmp = i << 2;
    for (b_i = 0; b_i < 4; b_i++) {
      i1 = b_i + (i << 4);
      b_obj[b_i] = (((obj->Ak[i1] * x[x_tmp] + obj->Ak[i1 + 4] * x[x_tmp + 1]) +
                     obj->Ak[i1 + 8] * x[x_tmp + 2]) + obj->Ak[i1 + 12] *
                    x[x_tmp + 3]) + obj->Bk[b_i + x_tmp] * u[i];
    }

    x_tmp = (i + 1) << 2;
    x[x_tmp] = b_obj[0];
    x[x_tmp + 1] = b_obj[1];
    x[x_tmp + 2] = b_obj[2];
    x[x_tmp + 3] = b_obj[3];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }
}

void CondensedMpcData_QP(const emlrtStack *sp, const CondensedMpcData *obj,
  const real_T x[124], real_T y[124])
{
  int32_T i;
  int32_T y_tmp_tmp;
  int32_T b_i;
  int32_T y_tmp;
  int32_T b_y_tmp;

  /*  State penalty matrix */
  for (i = 0; i < 31; i++) {
    y_tmp_tmp = i << 2;
    for (b_i = 0; b_i < 4; b_i++) {
      y_tmp = b_i + y_tmp_tmp;
      y[y_tmp] = 0.0;
      b_y_tmp = b_i + (i << 4);
      y[y_tmp] += obj->Q[b_y_tmp] * x[y_tmp_tmp];
      y[y_tmp] += obj->Q[b_y_tmp + 4] * x[y_tmp_tmp + 1];
      y[y_tmp] += obj->Q[b_y_tmp + 8] * x[y_tmp_tmp + 2];
      y[y_tmp] += obj->Q[b_y_tmp + 12] * x[y_tmp_tmp + 3];
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }
}

void CondensedMpcData_ST(const emlrtStack *sp, const CondensedMpcData *obj,
  const real_T u[31], real_T y[124])
{
  int32_T i;
  int32_T y_tmp;
  int32_T b_y_tmp;
  for (i = 0; i < 31; i++) {
    y_tmp = i << 2;
    y[y_tmp] = obj->S[y_tmp] * u[i];
    b_y_tmp = y_tmp + 1;
    y[b_y_tmp] = obj->S[b_y_tmp] * u[i];
    b_y_tmp = y_tmp + 2;
    y[b_y_tmp] = obj->S[b_y_tmp] * u[i];
    y_tmp += 3;
    y[y_tmp] = obj->S[y_tmp] * u[i];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }
}

void CondensedMpcData_f_ms(const emlrtStack *sp, const CondensedMpcData *obj,
  real_T f[155])
{
  int32_T i;
  int32_T f_tmp;
  int32_T b_f_tmp;
  memset(&f[0], 0, 155U * sizeof(real_T));
  f[0] = obj->q[0];
  f[1] = obj->q[1];
  f[2] = obj->q[2];
  f[3] = obj->q[3];
  f[4] = obj->r[0];
  for (i = 0; i < 30; i++) {
    f_tmp = (i + 1) << 2;
    b_f_tmp = 5 * (i + 1);
    f[b_f_tmp] = obj->q[f_tmp];
    f[b_f_tmp + 1] = obj->q[f_tmp + 1];
    f[b_f_tmp + 2] = obj->q[f_tmp + 2];
    f[b_f_tmp + 3] = obj->q[f_tmp + 3];
    f[b_f_tmp + 4] = obj->r[i + 1];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  /* methods */
}

void b_CondensedMpcData_MT(const emlrtStack *sp, const CondensedMpcData *obj,
  const real_T v[124], real_T y[31])
{
  real_T l[120];
  int32_T i;
  int32_T l_tmp;
  int32_T y_tmp;
  int32_T b_y_tmp;
  real_T b_v[4];
  int32_T c_y_tmp;

  /*  Co-state propagation */
  memset(&y[0], 0, 31U * sizeof(real_T));
  memset(&l[0], 0, 120U * sizeof(real_T));
  l[116] = v[120];
  l[117] = v[121];
  l[118] = v[122];
  l[119] = v[123];
  for (i = 0; i < 29; i++) {
    l_tmp = (29 - i) << 2;
    for (y_tmp = 0; y_tmp < 4; y_tmp++) {
      b_y_tmp = (y_tmp << 2) + ((29 - i) << 4);
      b_v[y_tmp] = v[y_tmp + l_tmp] + (((obj->Ak[b_y_tmp] * l[l_tmp] + obj->
        Ak[b_y_tmp + 1] * l[l_tmp + 1]) + obj->Ak[b_y_tmp + 2] * l[l_tmp + 2]) +
        obj->Ak[b_y_tmp + 3] * l[l_tmp + 3]);
    }

    l_tmp = (28 - i) << 2;
    l[l_tmp] = b_v[0];
    l[l_tmp + 1] = b_v[1];
    l[l_tmp + 2] = b_v[2];
    l[l_tmp + 3] = b_v[3];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  for (i = 0; i < 30; i++) {
    l_tmp = i << 2;
    y_tmp = l_tmp + 1;
    b_y_tmp = l_tmp + 2;
    c_y_tmp = l_tmp + 3;
    y[i] = ((obj->Bk[l_tmp] * l[l_tmp] + obj->Bk[y_tmp] * l[y_tmp]) + obj->
            Bk[b_y_tmp] * l[b_y_tmp]) + obj->Bk[c_y_tmp] * l[c_y_tmp];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }
}

CondensedMpcData *c_CondensedMpcData_CondensedMpc(const emlrtStack *sp,
  CondensedMpcData *s, const real_T Q[496], const real_T R[31], const real_T S
  [124], const real_T q[124], const real_T r[31], const real_T A[480], const
  real_T B[120], const real_T c[120], const real_T xt[4], const real_T E[496],
  const real_T L[124], const real_T d[124])
{
  CondensedMpcData *b_s;
  int32_T a_idx_2_tmp;
  real_T w[124];
  int32_T i;
  int32_T a_tmp;
  int32_T b_a_tmp;
  real_T a[16];
  real_T b_a[4];
  real_T a_idx_0;
  real_T y[124];
  emxArray_real_T *c_s;
  real_T a_idx_1;
  real_T a_idx_2;
  int32_T a_idx_3_tmp;
  real_T a_idx_3;
  real_T dv[31];
  real_T b_y[31];
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  b_s = s;
  b_s->h = 0.0;
  b_s->nu = 1.0;
  b_s->N = 30.0;
  b_s->nc = 4.0;
  for (a_idx_2_tmp = 0; a_idx_2_tmp < 496; a_idx_2_tmp++) {
    b_s->Q[a_idx_2_tmp] = Q[a_idx_2_tmp];
  }

  for (a_idx_2_tmp = 0; a_idx_2_tmp < 31; a_idx_2_tmp++) {
    b_s->R[a_idx_2_tmp] = R[a_idx_2_tmp];
  }

  for (a_idx_2_tmp = 0; a_idx_2_tmp < 124; a_idx_2_tmp++) {
    b_s->q[a_idx_2_tmp] = q[a_idx_2_tmp];
  }

  for (a_idx_2_tmp = 0; a_idx_2_tmp < 31; a_idx_2_tmp++) {
    b_s->r[a_idx_2_tmp] = r[a_idx_2_tmp];
  }

  for (a_idx_2_tmp = 0; a_idx_2_tmp < 480; a_idx_2_tmp++) {
    b_s->Ak[a_idx_2_tmp] = A[a_idx_2_tmp];
  }

  for (a_idx_2_tmp = 0; a_idx_2_tmp < 120; a_idx_2_tmp++) {
    b_s->Bk[a_idx_2_tmp] = B[a_idx_2_tmp];
  }

  for (a_idx_2_tmp = 0; a_idx_2_tmp < 120; a_idx_2_tmp++) {
    b_s->ck[a_idx_2_tmp] = c[a_idx_2_tmp];
  }

  for (a_idx_2_tmp = 0; a_idx_2_tmp < 496; a_idx_2_tmp++) {
    b_s->E[a_idx_2_tmp] = E[a_idx_2_tmp];
  }

  for (a_idx_2_tmp = 0; a_idx_2_tmp < 124; a_idx_2_tmp++) {
    b_s->L[a_idx_2_tmp] = L[a_idx_2_tmp];
  }

  for (a_idx_2_tmp = 0; a_idx_2_tmp < 124; a_idx_2_tmp++) {
    b_s->S[a_idx_2_tmp] = S[a_idx_2_tmp];
  }

  b_s->xt[0] = xt[0];
  b_s->xt[1] = xt[1];
  b_s->xt[2] = xt[2];
  b_s->xt[3] = xt[3];
  a_idx_2_tmp = b_s->f->size[0];
  b_s->f->size[0] = 155;
  emxEnsureCapacity_real_T(sp, b_s->f, a_idx_2_tmp, &n_emlrtRTEI);
  for (a_idx_2_tmp = 0; a_idx_2_tmp < 155; a_idx_2_tmp++) {
    b_s->f->data[a_idx_2_tmp] = 0.0;
  }

  st.site = &q_emlrtRSI;

  /*  */
  /*  https://github.com/dliaomcp/fbstab-matlab */
  /*  */
  /*  and is subject to the BSD-3-Clause license  */
  /*  prediction horizon */
  /*  state dimension */
  /*  control dimension */
  /*  constraints per stage */
  /*  number of primal variables */
  /*  number of equality constraints */
  /*  number of inequality constraints */
  /*  S = 0 */
  /*  S = 0 and Q,R are diagonal */
  /*  cost function */
  /*  Q0,Q1,... \in [nx,nx,N+1] */
  /*  \in [nu,nu,N+1] */
  /*  \in [nu,nx,N+1] */
  /*  \in [nx,1] */
  /*  \in [nx,1] */
  /*  dynamics */
  /*  A0,A1,.. AN-1 in [nx,nx,N] */
  /*  \in [nx,nu,N] */
  /*  in [nx,N] */
  /*  in [nx,1] the state */
  /*  constraints */
  /*  \in [nc,nx,N+1] */
  /* \in [nc,nu,N+1] */
  /*  \in [nc,N+1] */
  /*  useful vectors */
  /*  properties */
  /*  constructor */
  /*  problem sizes */
  /*  form gradient vector */
  /*  constraint RHS */
  /*  compute H*v  */
  /*  H*v = (R + M'QM + SM + (SM)')*v */
  /*  compute A*v */
  /*  A = EM + L */
  /*  compute A'*v */
  /*  compute H*v for the multiple shooting H  */
  /*  v must be (nx+nu)*(N+1) */
  /*  compute A'*v for multiple shooting A */
  /*  public methods */
  /*  Evaluate the w term in x = Mu + w */
  memset(&w[0], 0, 124U * sizeof(real_T));
  w[0] = b_s->xt[0];
  w[1] = b_s->xt[1];
  w[2] = b_s->xt[2];
  w[3] = b_s->xt[3];
  for (i = 0; i < 30; i++) {
    for (a_idx_2_tmp = 0; a_idx_2_tmp < 4; a_idx_2_tmp++) {
      a_tmp = a_idx_2_tmp << 2;
      b_a_tmp = a_tmp + (i << 4);
      a[a_tmp] = b_s->Ak[b_a_tmp];
      a[a_tmp + 1] = b_s->Ak[b_a_tmp + 1];
      a[a_tmp + 2] = b_s->Ak[b_a_tmp + 2];
      a[a_tmp + 3] = b_s->Ak[b_a_tmp + 3];
    }

    a_idx_2_tmp = i << 2;
    for (a_tmp = 0; a_tmp < 4; a_tmp++) {
      b_a[a_tmp] = (((a[a_tmp] * w[a_idx_2_tmp] + a[a_tmp + 4] * w[a_idx_2_tmp +
                      1]) + a[a_tmp + 8] * w[a_idx_2_tmp + 2]) + a[a_tmp + 12] *
                    w[a_idx_2_tmp + 3]) + b_s->ck[a_tmp + a_idx_2_tmp];
    }

    a_tmp = (i + 1) << 2;
    w[a_tmp] = b_a[0];
    w[a_tmp + 1] = b_a[1];
    w[a_tmp + 2] = b_a[2];
    w[a_tmp + 3] = b_a[3];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }

  st.site = &r_emlrtRSI;

  /*  State penalty matrix */
  for (i = 0; i < 31; i++) {
    a_idx_2_tmp = i << 2;
    for (a_tmp = 0; a_tmp < 4; a_tmp++) {
      b_a_tmp = a_tmp + (i << 4);
      a_idx_0 = b_s->Q[b_a_tmp] * w[a_idx_2_tmp];
      a_idx_0 += b_s->Q[b_a_tmp + 4] * w[a_idx_2_tmp + 1];
      a_idx_0 += b_s->Q[b_a_tmp + 8] * w[a_idx_2_tmp + 2];
      a_idx_0 += b_s->Q[b_a_tmp + 12] * w[a_idx_2_tmp + 3];
      y[a_tmp + a_idx_2_tmp] = a_idx_0;
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }

  a_idx_2_tmp = b_s->f->size[0];
  b_s->f->size[0] = 124;
  emxEnsureCapacity_real_T(sp, b_s->f, a_idx_2_tmp, &o_emlrtRTEI);
  for (a_idx_2_tmp = 0; a_idx_2_tmp < 124; a_idx_2_tmp++) {
    b_s->f->data[a_idx_2_tmp] = y[a_idx_2_tmp] + q[a_idx_2_tmp];
  }

  st.site = &s_emlrtRSI;

  /*  Coupling matrix */
  for (i = 0; i < 31; i++) {
    a_tmp = i << 2;
    a_idx_0 = b_s->S[a_tmp];
    b_a_tmp = a_tmp + 1;
    a_idx_1 = b_s->S[b_a_tmp];
    a_idx_2_tmp = a_tmp + 2;
    a_idx_2 = b_s->S[a_idx_2_tmp];
    a_idx_3_tmp = a_tmp + 3;
    a_idx_3 = b_s->S[a_idx_3_tmp];
    b_y[i] = ((a_idx_0 * w[a_tmp] + a_idx_1 * w[b_a_tmp]) + a_idx_2 *
              w[a_idx_2_tmp]) + a_idx_3 * w[a_idx_3_tmp];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }

  emxInit_real_T(&st, &c_s, 1, &p_emlrtRTEI, true);
  a_idx_2_tmp = c_s->size[0];
  c_s->size[0] = b_s->f->size[0];
  emxEnsureCapacity_real_T(sp, c_s, a_idx_2_tmp, &p_emlrtRTEI);
  a_tmp = b_s->f->size[0] - 1;
  for (a_idx_2_tmp = 0; a_idx_2_tmp <= a_tmp; a_idx_2_tmp++) {
    c_s->data[a_idx_2_tmp] = b_s->f->data[a_idx_2_tmp];
  }

  st.site = &s_emlrtRSI;
  CondensedMpcData_MT(&st, b_s, c_s, dv);
  a_idx_2_tmp = b_s->f->size[0];
  b_s->f->size[0] = 31;
  emxEnsureCapacity_real_T(sp, b_s->f, a_idx_2_tmp, &q_emlrtRTEI);
  emxFree_real_T(&c_s);
  for (a_idx_2_tmp = 0; a_idx_2_tmp < 31; a_idx_2_tmp++) {
    b_s->f->data[a_idx_2_tmp] = (dv[a_idx_2_tmp] + b_y[a_idx_2_tmp]) +
      r[a_idx_2_tmp];
  }

  for (i = 0; i < 124; i++) {
    b_s->b[i] = 0.0;
  }

  st.site = &t_emlrtRSI;

  /*  State constraint matrix */
  for (i = 0; i < 31; i++) {
    a_idx_2_tmp = i << 2;
    for (a_tmp = 0; a_tmp < 4; a_tmp++) {
      b_a_tmp = a_tmp + (i << 4);
      a_idx_0 = b_s->E[b_a_tmp] * w[a_idx_2_tmp];
      a_idx_0 += b_s->E[b_a_tmp + 4] * w[a_idx_2_tmp + 1];
      a_idx_0 += b_s->E[b_a_tmp + 8] * w[a_idx_2_tmp + 2];
      a_idx_0 += b_s->E[b_a_tmp + 12] * w[a_idx_2_tmp + 3];
      y[a_tmp + a_idx_2_tmp] = a_idx_0;
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }

  for (a_idx_2_tmp = 0; a_idx_2_tmp < 124; a_idx_2_tmp++) {
    b_s->b[a_idx_2_tmp] = -(d[a_idx_2_tmp] + y[a_idx_2_tmp]);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
  return b_s;
}

/* End of code generation (CondensedMpcData.c) */
