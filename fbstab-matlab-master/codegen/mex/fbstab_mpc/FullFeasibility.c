/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FullFeasibility.c
 *
 * Code generation for function 'FullFeasibility'
 *
 */

/* Include files */
#include "FullFeasibility.h"
#include "MpcData.h"
#include "dot.h"
#include "fbstab_mpc.h"
#include "fbstab_mpc_data.h"
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo pk_emlrtRSI = { 38, /* lineNo */
  "FullFeasibility/CheckFeasibility",  /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\FullFeasibility.m"/* pathName */
};

static emlrtRSInfo qk_emlrtRSI = { 39, /* lineNo */
  "FullFeasibility/CheckFeasibility",  /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\FullFeasibility.m"/* pathName */
};

static emlrtRSInfo rk_emlrtRSI = { 40, /* lineNo */
  "FullFeasibility/CheckFeasibility",  /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\FullFeasibility.m"/* pathName */
};

static emlrtRSInfo uk_emlrtRSI = { 54, /* lineNo */
  "FullFeasibility/CheckFeasibility",  /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\FullFeasibility.m"/* pathName */
};

/* Function Definitions */
void c_FullFeasibility_CheckFeasibil(const emlrtStack *sp, FullFeasibility *o,
  const FullVariable *x, real_T tol, boolean_T *primal, boolean_T *dual)
{
  int32_T idx;
  real_T w;
  real_T y[155];
  int32_T i;
  real_T b_x[155];
  real_T absx;
  real_T d1;
  real_T scale;
  real_T absxk;
  real_T t;
  emxArray_real_T b_y;
  int32_T iv[1];
  real_T varargin_1[124];
  boolean_T exitg1;
  real_T d3;
  real_T d4;
  MpcData *obj;
  int32_T a_tmp;
  real_T a[20];
  int32_T b_a_tmp;
  int32_T c_a_tmp;
  int32_T d_a_tmp;
  emxArray_real_T b_varargin_1;
  real_T b[124];
  int32_T iv1[1];
  emxArray_real_T c_varargin_1;
  int32_T iv2[1];
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  *primal = true;
  *dual = true;

  /*  dual feasibility */
  for (idx = 0; idx < 155; idx++) {
    y[idx] = x->z[idx];
  }

  w = 0.0;
  for (i = 0; i < 155; i++) {
    absx = muDoubleScalarAbs(y[i]);
    if (muDoubleScalarIsNaN(absx) || (absx > w)) {
      w = absx;
    }
  }

  memcpy(&b_x[0], &x->z[0], 155U * sizeof(real_T));
  st.site = &pk_emlrtRSI;
  MpcData_H(&st, o->data, b_x, o->z1);
  memcpy(&b_x[0], &x->z[0], 155U * sizeof(real_T));
  st.site = &qk_emlrtRSI;
  MpcData_G(&st, o->data, b_x, o->l1);
  memcpy(&b_x[0], &x->z[0], 155U * sizeof(real_T));
  st.site = &rk_emlrtRSI;
  MpcData_A(&st, o->data, b_x, o->v1);
  for (idx = 0; idx < 155; idx++) {
    y[idx] = o->z1[idx];
  }

  d1 = 0.0;
  scale = 3.3121686421112381E-170;
  for (i = 0; i < 155; i++) {
    absxk = muDoubleScalarAbs(y[i]);
    if (absxk > scale) {
      t = scale / absxk;
      d1 = d1 * t * t + 1.0;
      scale = absxk;
    } else {
      t = absxk / scale;
      d1 += t * t;
    }
  }

  d1 = scale * muDoubleScalarSqrt(d1);
  for (idx = 0; idx < 155; idx++) {
    y[idx] = o->data->f[idx];
  }

  for (i = 0; i < 155; i++) {
    b_x[i] = x->z[i];
  }

  b_y.data = &y[0];
  iv[0] = 155;
  b_y.size = &iv[0];
  b_y.allocatedSize = 155;
  b_y.numDimensions = 1;
  b_y.canFreeData = false;
  absx = vdotp(&b_y, b_x);
  for (i = 0; i < 124; i++) {
    varargin_1[i] = o->v1[i];
  }

  if (!muDoubleScalarIsNaN(varargin_1[0])) {
    idx = 1;
  } else {
    idx = 0;
    i = 2;
    exitg1 = false;
    while ((!exitg1) && (i <= 124)) {
      if (!muDoubleScalarIsNaN(varargin_1[i - 1])) {
        idx = i;
        exitg1 = true;
      } else {
        i++;
      }
    }
  }

  if (idx == 0) {
    d3 = varargin_1[0];
  } else {
    d3 = varargin_1[idx - 1];
    idx++;
    for (i = idx; i < 125; i++) {
      scale = varargin_1[i - 1];
      if (d3 < scale) {
        d3 = scale;
      }
    }
  }

  for (i = 0; i < 124; i++) {
    varargin_1[i] = o->l1[i];
  }

  d4 = 0.0;
  scale = 3.3121686421112381E-170;
  for (i = 0; i < 124; i++) {
    absxk = muDoubleScalarAbs(varargin_1[i]);
    if (absxk > scale) {
      t = scale / absxk;
      d4 = d4 * t * t + 1.0;
      scale = absxk;
    } else {
      t = absxk / scale;
      d4 += t * t;
    }
  }

  d4 = scale * muDoubleScalarSqrt(d4);
  scale = tol * w;
  if ((d1 <= scale) && (absx < 0.0) && (d3 <= 0.0) && (d4 <= scale) && (w >
       2.2204460492503131E-16)) {
    *dual = false;
  }

  /*  primal feasibility */
  for (i = 0; i < 124; i++) {
    varargin_1[i] = x->l[i];
  }

  scale = 0.0;
  for (i = 0; i < 124; i++) {
    absx = muDoubleScalarAbs(varargin_1[i]);
    if (muDoubleScalarIsNaN(absx) || (absx > scale)) {
      scale = absx;
    }
  }

  for (i = 0; i < 124; i++) {
    varargin_1[i] = x->v[i];
  }

  absxk = 0.0;
  for (i = 0; i < 124; i++) {
    absx = muDoubleScalarAbs(varargin_1[i]);
    if (muDoubleScalarIsNaN(absx) || (absx > absxk)) {
      absxk = absx;
    }
  }

  t = scale + absxk;
  st.site = &uk_emlrtRSI;
  obj = o->data;
  for (i = 0; i < 124; i++) {
    varargin_1[i] = x->v[i];
  }

  /*  compute A'*v */
  /*  The sizes are recomputed to help */
  /*  with code generation. */
  /* methods */
  for (i = 0; i < 31; i++) {
    for (idx = 0; idx < 4; idx++) {
      a_tmp = idx + (i << 4);
      a[5 * idx] = obj->E[a_tmp];
      a[5 * idx + 1] = obj->E[a_tmp + 4];
      a[5 * idx + 2] = obj->E[a_tmp + 8];
      a[5 * idx + 3] = obj->E[a_tmp + 12];
    }

    a_tmp = i << 2;
    a[4] = obj->L[a_tmp];
    b_a_tmp = a_tmp + 1;
    a[9] = obj->L[b_a_tmp];
    c_a_tmp = a_tmp + 2;
    a[14] = obj->L[c_a_tmp];
    d_a_tmp = a_tmp + 3;
    a[19] = obj->L[d_a_tmp];
    for (idx = 0; idx < 5; idx++) {
      y[idx + 5 * i] = ((a[idx] * varargin_1[a_tmp] + a[idx + 5] *
                         varargin_1[b_a_tmp]) + a[idx + 10] * varargin_1[c_a_tmp])
        + a[idx + 15] * varargin_1[d_a_tmp];
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }

  st.site = &uk_emlrtRSI;
  MpcData_GT(&st, o->data, x->l, b_x);
  for (idx = 0; idx < 155; idx++) {
    o->z1[idx] = b_x[idx] + y[idx];
  }

  for (idx = 0; idx < 155; idx++) {
    y[idx] = o->z1[idx];
  }

  d1 = 0.0;
  for (i = 0; i < 155; i++) {
    absx = muDoubleScalarAbs(y[i]);
    if (muDoubleScalarIsNaN(absx) || (absx > d1)) {
      d1 = absx;
    }
  }

  for (i = 0; i < 124; i++) {
    varargin_1[i] = x->v[i];
  }

  for (idx = 0; idx < 124; idx++) {
    b[idx] = o->data->b[idx];
  }

  b_varargin_1.data = &varargin_1[0];
  iv1[0] = 124;
  b_varargin_1.size = &iv1[0];
  b_varargin_1.allocatedSize = 124;
  b_varargin_1.numDimensions = 1;
  b_varargin_1.canFreeData = false;
  scale = vdotp(&b_varargin_1, b);
  for (i = 0; i < 124; i++) {
    varargin_1[i] = x->l[i];
  }

  for (idx = 0; idx < 124; idx++) {
    b[idx] = o->data->h[idx];
  }

  c_varargin_1.data = &varargin_1[0];
  iv2[0] = 124;
  c_varargin_1.size = &iv2[0];
  c_varargin_1.allocatedSize = 124;
  c_varargin_1.numDimensions = 1;
  c_varargin_1.canFreeData = false;
  absxk = vdotp(&c_varargin_1, b);
  if ((d1 <= tol * t) && (scale + absxk < 0.0) && (t > 2.2204460492503131E-16))
  {
    *primal = false;
  }
}

/* End of code generation (FullFeasibility.c) */
