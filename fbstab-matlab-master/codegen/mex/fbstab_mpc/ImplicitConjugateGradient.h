/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * ImplicitConjugateGradient.h
 *
 * Code generation for function 'ImplicitConjugateGradient'
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
void ImplicitConjugateGradient_Solve(const emlrtStack *sp,
  ImplicitConjugateGradient *o, const CondensedResidual *r, CondensedVariable
  *dx);
void c_ImplicitConjugateGradient_Fac(const emlrtStack *sp,
  ImplicitConjugateGradient *o, const CondensedVariable *x, const
  CondensedVariable *xbar, real_T sigma);

/* End of code generation (ImplicitConjugateGradient.h) */
