/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * trisolve.c
 *
 * Code generation for function 'trisolve'
 *
 */

/* Include files */
#include "trisolve.h"
#include "fbstab_mpc.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
void b_trisolve(real_T A, real_T *B)
{
  if (*B != 0.0) {
    *B /= A;
  }
}

void c_trisolve(const real_T A[16], real_T B[4])
{
  int32_T i;
  if (B[3] != 0.0) {
    B[3] /= A[15];
    for (i = 0; i < 3; i++) {
      B[i] -= B[3] * A[i + 12];
    }
  }

  if (B[2] != 0.0) {
    B[2] /= A[10];
    for (i = 0; i < 2; i++) {
      B[i] -= B[2] * A[i + 8];
    }
  }

  if (B[1] != 0.0) {
    B[1] /= A[5];
    for (i = 0; i < 1; i++) {
      B[0] -= B[1] * A[4];
    }
  }

  if (B[0] != 0.0) {
    B[0] /= A[0];
  }
}

void trisolve(const real_T A[16], real_T B[4])
{
  int32_T i;
  if (B[0] != 0.0) {
    B[0] /= A[0];
    for (i = 2; i < 5; i++) {
      B[i - 1] -= B[0] * A[i - 1];
    }
  }

  if (B[1] != 0.0) {
    B[1] /= A[5];
    for (i = 3; i < 5; i++) {
      B[i - 1] -= B[1] * A[i + 3];
    }
  }

  if (B[2] != 0.0) {
    B[2] /= A[10];
    for (i = 4; i < 5; i++) {
      B[3] -= B[2] * A[11];
    }
  }

  if (B[3] != 0.0) {
    B[3] /= A[15];
  }
}

/* End of code generation (trisolve.c) */
