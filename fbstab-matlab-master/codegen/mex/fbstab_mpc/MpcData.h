/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * MpcData.h
 *
 * Code generation for function 'MpcData'
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
void MpcData_A(const emlrtStack *sp, const MpcData *obj, const real_T v[155],
               real_T y[124]);
void MpcData_AT(const emlrtStack *sp, const MpcData *obj, const real_T v[124],
                real_T y[155]);
void MpcData_G(const emlrtStack *sp, const MpcData *obj, const real_T v[155],
               real_T y[124]);
void MpcData_GT(const emlrtStack *sp, const MpcData *obj, const real_T v[124],
                real_T y[155]);
void MpcData_H(const emlrtStack *sp, const MpcData *obj, const real_T v[155],
               real_T y[155]);
MpcData *MpcData_MpcData(const emlrtStack *sp, MpcData *s, const real_T Q[496],
  const real_T R[31], const real_T S[124], const real_T q[124], const real_T r
  [31], const real_T A[480], const real_T B[120], const real_T c[120], const
  real_T xt[4], const real_T E[496], const real_T L[124], const real_T d[124]);

/* End of code generation (MpcData.h) */
