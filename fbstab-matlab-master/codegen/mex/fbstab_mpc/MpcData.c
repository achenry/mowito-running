/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * MpcData.c
 *
 * Code generation for function 'MpcData'
 *
 */

/* Include files */
#include "MpcData.h"
#include "fbstab_mpc.h"
#include "fbstab_mpc_data.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
void MpcData_A(const emlrtStack *sp, const MpcData *obj, const real_T v[155],
               real_T y[124])
{
  int32_T i;
  real_T b_v;
  real_T d;
  real_T d1;
  real_T d2;
  real_T d3;
  int32_T b_i;
  int32_T i1;
  int32_T y_tmp;

  /*  compute A*v */
  /*  The sizes are recomputed to help */
  /*  with code generation. */
  /* methods */
  for (i = 0; i < 31; i++) {
    b_v = v[5 * i + 4];
    d = v[5 * i];
    d1 = v[5 * i + 1];
    d2 = v[5 * i + 2];
    d3 = v[5 * i + 3];
    for (b_i = 0; b_i < 4; b_i++) {
      i1 = b_i + (i << 4);
      y_tmp = b_i + (i << 2);
      y[y_tmp] = (((obj->E[i1] * d + obj->E[i1 + 4] * d1) + obj->E[i1 + 8] * d2)
                  + obj->E[i1 + 12] * d3) + obj->L[y_tmp] * b_v;
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }
}

void MpcData_AT(const emlrtStack *sp, const MpcData *obj, const real_T v[124],
                real_T y[155])
{
  int32_T i;
  int32_T b_i;
  int32_T obj_tmp;
  real_T b_obj[20];
  int32_T y_tmp;

  /*  compute A'*v */
  /*  The sizes are recomputed to help */
  /*  with code generation. */
  /* methods */
  for (i = 0; i < 31; i++) {
    for (b_i = 0; b_i < 4; b_i++) {
      obj_tmp = b_i + (i << 4);
      b_obj[5 * b_i] = obj->E[obj_tmp];
      b_obj[5 * b_i + 1] = obj->E[obj_tmp + 4];
      b_obj[5 * b_i + 2] = obj->E[obj_tmp + 8];
      b_obj[5 * b_i + 3] = obj->E[obj_tmp + 12];
      b_obj[5 * b_i + 4] = obj->L[b_i + (i << 2)];
    }

    obj_tmp = i << 2;
    for (b_i = 0; b_i < 5; b_i++) {
      y_tmp = b_i + 5 * i;
      y[y_tmp] = 0.0;
      y[y_tmp] += b_obj[b_i] * v[obj_tmp];
      y[y_tmp] += b_obj[b_i + 5] * v[obj_tmp + 1];
      y[y_tmp] += b_obj[b_i + 10] * v[obj_tmp + 2];
      y[y_tmp] += b_obj[b_i + 15] * v[obj_tmp + 3];
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }
}

void MpcData_G(const emlrtStack *sp, const MpcData *obj, const real_T v[155],
               real_T y[124])
{
  int32_T i;
  real_T b_v;
  int32_T b_i;
  int32_T i1;

  /*  compute G*v  */
  /*  The sizes are recomputed to help */
  /*  with code generation. */
  /* methods */
  y[0] = -v[0];
  y[1] = -v[1];
  y[2] = -v[2];
  y[3] = -v[3];

  /*  -x0 */
  for (i = 0; i < 30; i++) {
    b_v = v[5 * i + 4];
    for (b_i = 0; b_i < 4; b_i++) {
      i1 = b_i + (i << 4);
      y[b_i + ((i + 1) << 2)] = ((((obj->Ak[i1] * v[5 * i] + obj->Ak[i1 + 4] *
        v[5 * i + 1]) + obj->Ak[i1 + 8] * v[5 * i + 2]) + obj->Ak[i1 + 12] * v[5
        * i + 3]) + obj->Bk[b_i + (i << 2)] * b_v) - v[b_i + 5 * (i + 1)];
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }
}

void MpcData_GT(const emlrtStack *sp, const MpcData *obj, const real_T v[124],
                real_T y[155])
{
  int32_T i;
  int32_T y_tmp;
  int32_T b_y_tmp;
  int32_T c_y_tmp;
  int32_T d_y_tmp;
  int32_T e_y_tmp;
  int32_T b_i;
  int32_T i1;

  /*  compute G'*v */
  /*  The sizes are recomputed to help */
  /*  with code generation. */
  /* methods */
  memset(&y[0], 0, 155U * sizeof(real_T));
  for (i = 0; i < 30; i++) {
    y_tmp = i << 2;
    b_y_tmp = (i + 1) << 2;
    c_y_tmp = b_y_tmp + 1;
    d_y_tmp = b_y_tmp + 2;
    e_y_tmp = b_y_tmp + 3;
    for (b_i = 0; b_i < 4; b_i++) {
      i1 = (b_i << 2) + (i << 4);
      y[b_i + 5 * i] = -v[b_i + y_tmp] + (((obj->Ak[i1] * v[b_y_tmp] + obj->
        Ak[i1 + 1] * v[c_y_tmp]) + obj->Ak[i1 + 2] * v[d_y_tmp]) + obj->Ak[i1 +
        3] * v[e_y_tmp]);
    }

    y[5 * i + 4] = ((obj->Bk[y_tmp] * v[b_y_tmp] + obj->Bk[y_tmp + 1] *
                     v[c_y_tmp]) + obj->Bk[y_tmp + 2] * v[d_y_tmp]) + obj->
      Bk[y_tmp + 3] * v[e_y_tmp];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  y[150] = -v[120];
  y[151] = -v[121];
  y[152] = -v[122];
  y[153] = -v[123];
  y[154] = 0.0;
}

void MpcData_H(const emlrtStack *sp, const MpcData *obj, const real_T v[155],
               real_T y[155])
{
  int32_T i;
  real_T b_y;
  int32_T v_tmp;
  int32_T k;
  int32_T y_tmp;
  int32_T b_y_tmp;
  int32_T b_i;

  /*  compute H*v  */
  /*  The sizes are recomputed to help */
  /*  with code generation. */
  /* methods */
  /*  v must be (nx+nu)*(N+1) */
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

MpcData *MpcData_MpcData(const emlrtStack *sp, MpcData *s, const real_T Q[496],
  const real_T R[31], const real_T S[124], const real_T q[124], const real_T r
  [31], const real_T A[480], const real_T B[120], const real_T c[120], const
  real_T xt[4], const real_T E[496], const real_T L[124], const real_T d[124])
{
  MpcData *b_s;
  int32_T f_tmp;
  real_T f[155];
  real_T h[124];
  int32_T i;
  int32_T b_f_tmp;
  int32_T c_f_tmp;
  int32_T d_f_tmp;
  int32_T e_f_tmp;
  b_s = s;

  /*  */
  /*  https://github.com/dliaomcp/fbstab-matlab */
  /*  */
  /*  and is subject to the BSD-3-Clause license  */
  /*  a class to store the MPC problem data */
  /*  this class assumes that the primal variable is ordered as */
  /*  x0,u0,x1,u1,... xN,uN */
  /*  prediction horizon */
  /*  state dimension */
  /*  control dimension */
  /*  constraints per stage */
  /*  number of primal variables */
  /*  number of equality constraints */
  /*  number of inequality constraints */
  /*  S = 0 */
  /*  S = 0 and Q,R are diagonal */
  /*  Cost function */
  /*  Q0,Q1,... \in [nx,nx,N+1] */
  /*  \in [nu,nu,N+1] */
  /*  \in [nu,nx,N+1] */
  /*  \in [nx,1] */
  /*  \in [nx,1] */
  /*  Dynamics */
  /*  A0,A1,.. AN-1 in [nx,nx,N] */
  /*  \in [nx,nu,N] */
  /*  in [nx,N] */
  /*  in [nx,1] the state */
  /*  Constraints */
  /*  \in [nc,nx,N+1] */
  /* \in [nc,nu,N+1] */
  /*  \in [nc,N+1] */
  /*  Useful vectors */
  /*  properties */
  /*  constructor */
  b_s->nx = 4.0;
  b_s->nu = 1.0;
  b_s->N = 30.0;
  b_s->nc = 4.0;

  /*  problem sizes */
  for (f_tmp = 0; f_tmp < 496; f_tmp++) {
    b_s->Q[f_tmp] = Q[f_tmp];
  }

  for (f_tmp = 0; f_tmp < 31; f_tmp++) {
    b_s->R[f_tmp] = R[f_tmp];
  }

  for (f_tmp = 0; f_tmp < 124; f_tmp++) {
    b_s->q[f_tmp] = q[f_tmp];
  }

  for (f_tmp = 0; f_tmp < 31; f_tmp++) {
    b_s->r[f_tmp] = r[f_tmp];
  }

  for (f_tmp = 0; f_tmp < 480; f_tmp++) {
    b_s->Ak[f_tmp] = A[f_tmp];
  }

  for (f_tmp = 0; f_tmp < 120; f_tmp++) {
    b_s->Bk[f_tmp] = B[f_tmp];
  }

  for (f_tmp = 0; f_tmp < 120; f_tmp++) {
    b_s->ck[f_tmp] = c[f_tmp];
  }

  for (f_tmp = 0; f_tmp < 496; f_tmp++) {
    b_s->E[f_tmp] = E[f_tmp];
  }

  for (f_tmp = 0; f_tmp < 124; f_tmp++) {
    b_s->L[f_tmp] = L[f_tmp];
  }

  for (f_tmp = 0; f_tmp < 124; f_tmp++) {
    b_s->S[f_tmp] = S[f_tmp];
  }

  b_s->xt[0] = xt[0];
  b_s->xt[1] = xt[1];
  b_s->xt[2] = xt[2];
  b_s->xt[3] = xt[3];

  /*  form the useful vectors */
  memset(&f[0], 0, 155U * sizeof(real_T));
  memset(&h[0], 0, 124U * sizeof(real_T));
  f[0] = b_s->q[0];
  f[1] = b_s->q[1];
  f[2] = b_s->q[2];
  f[3] = b_s->q[3];
  f[4] = b_s->r[0];
  h[0] = -b_s->xt[0];
  h[1] = -b_s->xt[1];
  h[2] = -b_s->xt[2];
  h[3] = -b_s->xt[3];
  for (i = 0; i < 30; i++) {
    b_f_tmp = (i + 1) << 2;
    f_tmp = 5 * (i + 1);
    f[f_tmp] = b_s->q[b_f_tmp];
    c_f_tmp = b_f_tmp + 1;
    f[f_tmp + 1] = b_s->q[c_f_tmp];
    d_f_tmp = b_f_tmp + 2;
    f[f_tmp + 2] = b_s->q[d_f_tmp];
    e_f_tmp = b_f_tmp + 3;
    f[f_tmp + 3] = b_s->q[e_f_tmp];
    f[f_tmp + 4] = b_s->r[i + 1];
    f_tmp = i << 2;
    h[b_f_tmp] = -b_s->ck[f_tmp];
    h[c_f_tmp] = -b_s->ck[f_tmp + 1];
    h[d_f_tmp] = -b_s->ck[f_tmp + 2];
    h[e_f_tmp] = -b_s->ck[f_tmp + 3];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  for (f_tmp = 0; f_tmp < 155; f_tmp++) {
    b_s->f[f_tmp] = f[f_tmp];
  }

  for (f_tmp = 0; f_tmp < 124; f_tmp++) {
    b_s->h[f_tmp] = h[f_tmp];
  }

  for (f_tmp = 0; f_tmp < 124; f_tmp++) {
    b_s->b[f_tmp] = -d[f_tmp];
  }

  return b_s;
}

/* End of code generation (MpcData.c) */
