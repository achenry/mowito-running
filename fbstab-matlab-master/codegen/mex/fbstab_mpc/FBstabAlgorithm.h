/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FBstabAlgorithm.h
 *
 * Code generation for function 'FBstabAlgorithm'
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
void FBstabAlgorithm_Solve(const emlrtStack *sp, FBstabAlgorithm *o, const
  real_T x0_v[124], const real_T x0_z[31], real_T x_z[31], real_T x_v[124],
  struct4_T *out);
void b_FBstabAlgorithm_Solve(const emlrtStack *sp, FBstabAlgorithm_1 *o, const
  real_T x0_v[124], const real_T x0_l[124], const real_T x0_z[155], real_T x_z
  [155], real_T x_l[124], real_T x_v[124], struct4_T *out);

/* End of code generation (FBstabAlgorithm.h) */
