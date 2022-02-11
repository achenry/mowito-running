/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * CondensedResidual.h
 *
 * Code generation for function 'CondensedResidual'
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
void CondensedResidual_PFB(const emlrtStack *sp, const CondensedResidual *o,
  const real_T a[124], const real_T b[124], real_T y[124]);
real_T CondensedResidual_norm(const emlrtStack *sp, const CondensedResidual *o);
void c_CondensedResidual_NaturalResi(const emlrtStack *sp, CondensedResidual *o,
  const CondensedVariable *x);

/* End of code generation (CondensedResidual.h) */
