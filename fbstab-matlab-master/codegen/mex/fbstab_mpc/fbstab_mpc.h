/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * fbstab_mpc.h
 *
 * Code generation for function 'fbstab_mpc'
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
void fbstab_mpc(const emlrtStack *sp, const struct0_T *x0, const struct1_T *mpc,
                const struct2_T *opts, struct3_T *x, real_T *u, struct4_T *out);

/* End of code generation (fbstab_mpc.h) */
