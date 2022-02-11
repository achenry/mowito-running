/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * CondensedMpcData.h
 *
 * Code generation for function 'CondensedMpcData'
 *
 */

#pragma once

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mex.h"
#include "emlrt.h"
#include "rtwtypes.h"
#include "fbstab_mpc_types.h"

/* Function Declarations */
void CondensedMpcData_A(const emlrtStack *sp, const CondensedMpcData *obj, const
  real_T v[31], real_T y[124]);
void CondensedMpcData_EP(const emlrtStack *sp, const CondensedMpcData *obj,
  const real_T x[124], real_T y[124]);
void CondensedMpcData_ET(const emlrtStack *sp, const CondensedMpcData *obj,
  const real_T v[124], real_T y[124]);
void CondensedMpcData_H(const emlrtStack *sp, const CondensedMpcData *obj, const
  real_T v[31], real_T y[31]);
void CondensedMpcData_H_ms(const emlrtStack *sp, const CondensedMpcData *obj,
  const real_T v[155], real_T y[155]);
void CondensedMpcData_LP(const emlrtStack *sp, const CondensedMpcData *obj,
  const real_T u[31], real_T y[124]);
void CondensedMpcData_LT(const emlrtStack *sp, const CondensedMpcData *obj,
  const real_T v[124], real_T y[31]);
void CondensedMpcData_MP(const emlrtStack *sp, const CondensedMpcData *obj,
  const real_T u[31], real_T x[124]);
void CondensedMpcData_QP(const emlrtStack *sp, const CondensedMpcData *obj,
  const real_T x[124], real_T y[124]);
void CondensedMpcData_ST(const emlrtStack *sp, const CondensedMpcData *obj,
  const real_T u[31], real_T y[124]);
void CondensedMpcData_f_ms(const emlrtStack *sp, const CondensedMpcData *obj,
  real_T f[155]);
void b_CondensedMpcData_MT(const emlrtStack *sp, const CondensedMpcData *obj,
  const real_T v[124], real_T y[31]);
CondensedMpcData *c_CondensedMpcData_CondensedMpc(const emlrtStack *sp,
  CondensedMpcData *s, const real_T Q[496], const real_T R[31], const real_T S
  [124], const real_T q[124], const real_T r[31], const real_T A[480], const
  real_T B[120], const real_T c[120], const real_T xt[4], const real_T E[496],
  const real_T L[124], const real_T d[124]);

/* End of code generation (CondensedMpcData.h) */
