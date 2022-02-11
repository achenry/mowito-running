/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FullResidual.h
 *
 * Code generation for function 'FullResidual'
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
void FullResidual_InnerResidual(const emlrtStack *sp, FullResidual *o, const
  FullVariable *x, const FullVariable *xbar, real_T sigma);
void FullResidual_NaturalResidual(const emlrtStack *sp, FullResidual *o, const
  FullVariable *x);
real_T FullResidual_norm(const emlrtStack *sp, const FullResidual *o);

/* End of code generation (FullResidual.h) */
