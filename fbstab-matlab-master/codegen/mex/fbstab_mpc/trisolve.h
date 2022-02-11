/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * trisolve.h
 *
 * Code generation for function 'trisolve'
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
void b_trisolve(real_T A, real_T *B);
void c_trisolve(const real_T A[16], real_T B[4]);
void trisolve(const real_T A[16], real_T B[4]);

/* End of code generation (trisolve.h) */
