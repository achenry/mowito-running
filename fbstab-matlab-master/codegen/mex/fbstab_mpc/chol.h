/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * chol.h
 *
 * Code generation for function 'chol'
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
void cholesky(const emlrtStack *sp, real_T A[16]);

/* End of code generation (chol.h) */
