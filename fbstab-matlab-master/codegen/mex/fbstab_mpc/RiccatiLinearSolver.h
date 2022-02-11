/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * RiccatiLinearSolver.h
 *
 * Code generation for function 'RiccatiLinearSolver'
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
void RiccatiLinearSolver_Factor(const emlrtStack *sp, RiccatiLinearSolver *o,
  const FullVariable *x, const FullVariable *xbar, real_T sigma);
void RiccatiLinearSolver_Solve(const emlrtStack *sp, RiccatiLinearSolver *o,
  const FullResidual *r, FullVariable *dx);

/* End of code generation (RiccatiLinearSolver.h) */
