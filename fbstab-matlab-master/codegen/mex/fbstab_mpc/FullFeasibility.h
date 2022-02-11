/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FullFeasibility.h
 *
 * Code generation for function 'FullFeasibility'
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
void c_FullFeasibility_CheckFeasibil(const emlrtStack *sp, FullFeasibility *o,
  const FullVariable *x, real_T tol, boolean_T *primal, boolean_T *dual);

/* End of code generation (FullFeasibility.h) */
