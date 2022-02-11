/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * CondensedFeasibility.c
 *
 * Code generation for function 'CondensedFeasibility'
 *
 */

/* Include files */
#include "CondensedFeasibility.h"
#include "CondensedMpcData.h"
#include "dot.h"
#include "fbstab_mpc.h"
#include "fbstab_mpc_data.h"
#include "fbstab_mpc_emxutil.h"
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo ig_emlrtRSI = { 34, /* lineNo */
  "CondensedFeasibility/CheckFeasibility",/* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\CondensedFeasibility.m"/* pathName */
};

static emlrtRSInfo jg_emlrtRSI = { 35, /* lineNo */
  "CondensedFeasibility/CheckFeasibility",/* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\CondensedFeasibility.m"/* pathName */
};

static emlrtRSInfo kg_emlrtRSI = { 38, /* lineNo */
  "CondensedFeasibility/CheckFeasibility",/* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\CondensedFeasibility.m"/* pathName */
};

static emlrtRSInfo lg_emlrtRSI = { 39, /* lineNo */
  "CondensedFeasibility/CheckFeasibility",/* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\CondensedFeasibility.m"/* pathName */
};

static emlrtRSInfo mg_emlrtRSI = { 48, /* lineNo */
  "CondensedFeasibility/CheckFeasibility",/* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\CondensedFeasibility.m"/* pathName */
};

static emlrtRSInfo ng_emlrtRSI = { 51, /* lineNo */
  "CondensedFeasibility/CheckFeasibility",/* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\CondensedFeasibility.m"/* pathName */
};

static emlrtRTEInfo e_emlrtRTEI = { 12,/* lineNo */
  23,                                  /* colNo */
  "dot",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\specfun\\dot.m"/* pName */
};

static emlrtRTEInfo r_emlrtRTEI = { 38,/* lineNo */
  13,                                  /* colNo */
  "CondensedFeasibility",              /* fName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\CondensedFeasibility.m"/* pName */
};

/* Function Definitions */
void c_CondensedFeasibility_CheckFea(const emlrtStack *sp, CondensedFeasibility *
  o, const CondensedVariable *x, real_T tol, boolean_T *primal, boolean_T *dual)
{
  int32_T i;
  real_T w;
  real_T b_x[31];
  int32_T k;
  real_T absx;
  real_T d1;
  emxArray_real_T *a;
  real_T absxk;
  real_T t;
  int32_T varargin_1[2];
  boolean_T p;
  boolean_T exitg1;
  boolean_T b_p;
  real_T b_varargin_1[124];
  CondensedMpcData *obj;
  real_T c_varargin_1[124];
  real_T b[124];
  real_T dv[31];
  real_T tmp_data[31];
  emxArray_real_T d_varargin_1;
  int32_T iv[1];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  *primal = true;
  *dual = true;

  /*  dual feasibility */
  for (i = 0; i < 31; i++) {
    b_x[i] = x->z[i];
  }

  w = 0.0;
  for (k = 0; k < 31; k++) {
    absx = muDoubleScalarAbs(b_x[k]);
    if (muDoubleScalarIsNaN(absx) || (absx > w)) {
      w = absx;
    }
  }

  memcpy(&b_x[0], &x->z[0], 31U * sizeof(real_T));
  st.site = &ig_emlrtRSI;
  CondensedMpcData_H(&st, o->data, b_x, o->z1);
  memcpy(&b_x[0], &x->z[0], 31U * sizeof(real_T));
  st.site = &jg_emlrtRSI;
  CondensedMpcData_A(&st, o->data, b_x, o->v1);
  for (i = 0; i < 31; i++) {
    b_x[i] = o->z1[i];
  }

  d1 = 0.0;
  absx = 3.3121686421112381E-170;
  for (k = 0; k < 31; k++) {
    absxk = muDoubleScalarAbs(b_x[k]);
    if (absxk > absx) {
      t = absx / absxk;
      d1 = d1 * t * t + 1.0;
      absx = absxk;
    } else {
      t = absxk / absx;
      d1 += t * t;
    }
  }

  emxInit_real_T(sp, &a, 1, &r_emlrtRTEI, true);
  d1 = absx * muDoubleScalarSqrt(d1);
  st.site = &kg_emlrtRSI;
  i = a->size[0];
  a->size[0] = o->data->f->size[0];
  emxEnsureCapacity_real_T(&st, a, i, &r_emlrtRTEI);
  k = o->data->f->size[0];
  for (i = 0; i < k; i++) {
    a->data[i] = o->data->f->data[i];
  }

  for (i = 0; i < 31; i++) {
    b_x[i] = x->z[i];
  }

  varargin_1[0] = a->size[0];
  varargin_1[1] = 1;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 2)) {
    if (varargin_1[k] != -30 * k + 31) {
      p = false;
      exitg1 = true;
    } else {
      k++;
    }
  }

  b_p = (int32_T)p;
  if ((!b_p) && (a->size[0] != 31)) {
    emlrtErrorWithMessageIdR2018a(&st, &e_emlrtRTEI,
      "MATLAB:dot:InputSizeMismatch", "MATLAB:dot:InputSizeMismatch", 0);
  }

  absx = vdotp(a, b_x);
  st.site = &lg_emlrtRSI;
  emxFree_real_T(&a);
  for (i = 0; i < 124; i++) {
    b_varargin_1[i] = o->v1[i];
  }

  if (!muDoubleScalarIsNaN(b_varargin_1[0])) {
    i = 1;
  } else {
    i = 0;
    k = 2;
    exitg1 = false;
    while ((!exitg1) && (k <= 124)) {
      if (!muDoubleScalarIsNaN(b_varargin_1[k - 1])) {
        i = k;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  if (i == 0) {
    t = b_varargin_1[0];
  } else {
    t = b_varargin_1[i - 1];
    i++;
    for (k = i; k < 125; k++) {
      absxk = b_varargin_1[k - 1];
      if (t < absxk) {
        t = absxk;
      }
    }
  }

  if ((d1 <= tol * w) && (absx < 0.0) && (t <= 0.0) && (w >
       2.2204460492503131E-16)) {
    *dual = false;
  }

  /*  primal feasibility */
  for (i = 0; i < 124; i++) {
    b_varargin_1[i] = x->v[i];
  }

  absxk = 0.0;
  for (k = 0; k < 124; k++) {
    absx = muDoubleScalarAbs(b_varargin_1[k]);
    if (muDoubleScalarIsNaN(absx) || (absx > absxk)) {
      absxk = absx;
    }
  }

  st.site = &mg_emlrtRSI;
  obj = o->data;
  for (i = 0; i < 124; i++) {
    b_varargin_1[i] = x->v[i];
  }

  memcpy(&c_varargin_1[0], &b_varargin_1[0], 124U * sizeof(real_T));
  b_st.site = &rc_emlrtRSI;
  CondensedMpcData_LT(&b_st, obj, c_varargin_1, b_x);
  memcpy(&c_varargin_1[0], &b_varargin_1[0], 124U * sizeof(real_T));
  b_st.site = &rc_emlrtRSI;
  CondensedMpcData_ET(&b_st, obj, c_varargin_1, b);
  b_st.site = &rc_emlrtRSI;
  b_CondensedMpcData_MT(&b_st, obj, b, dv);
  for (i = 0; i < 31; i++) {
    tmp_data[i] = b_x[i] + dv[i];
  }

  for (i = 0; i < 31; i++) {
    o->z1[i] = tmp_data[i];
  }

  for (i = 0; i < 31; i++) {
    b_x[i] = o->z1[i];
  }

  t = 0.0;
  for (k = 0; k < 31; k++) {
    absx = muDoubleScalarAbs(b_x[k]);
    if (muDoubleScalarIsNaN(absx) || (absx > t)) {
      t = absx;
    }
  }

  st.site = &ng_emlrtRSI;
  for (i = 0; i < 124; i++) {
    b_varargin_1[i] = x->v[i];
  }

  for (i = 0; i < 124; i++) {
    b[i] = o->data->b[i];
  }

  d_varargin_1.data = &b_varargin_1[0];
  iv[0] = 124;
  d_varargin_1.size = &iv[0];
  d_varargin_1.allocatedSize = 124;
  d_varargin_1.numDimensions = 1;
  d_varargin_1.canFreeData = false;
  absx = vdotp(&d_varargin_1, b);
  if ((t <= tol * absxk) && (absx < 0.0) && (absxk > 2.2204460492503131E-16)) {
    *primal = false;
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (CondensedFeasibility.c) */
