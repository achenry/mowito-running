/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * linsolve.h
 *
 * Code generation for function 'linsolve'
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
void b_linsolve(const emlrtStack *sp, const real_T A[16], const real_T B[4],
                real_T C[4]);
real_T c_linsolve(const emlrtStack *sp, real_T A, const real_T B_data[], const
                  int32_T B_size[1]);
real_T d_linsolve(const emlrtStack *sp, real_T A, const real_T B_data[], const
                  int32_T B_size[1]);
void e_linsolve(const emlrtStack *sp, const real_T A[16], const real_T B_data[],
                const int32_T B_size[1], real_T C[4]);
void f_linsolve(const emlrtStack *sp, const real_T A[16], const real_T B_data[],
                const int32_T B_size[1], real_T C[4]);
void linsolve(const emlrtStack *sp, const real_T A[16], const real_T B[4],
              real_T C[4]);

/* End of code generation (linsolve.h) */
