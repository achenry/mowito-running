/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * mtimes.c
 *
 * Code generation for function 'mtimes'
 *
 */

/* Include files */
#include "mtimes.h"
#include "fbstab_mpc.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
void b_mtimes(const real_T A[16], const real_T B_data[], real_T C[4])
{
  int32_T i;
  real_T d;
  int32_T aoffset;
  real_T d1;
  real_T At[16];
  real_T d2;
  real_T d3;
  for (i = 0; i < 4; i++) {
    aoffset = i << 2;
    At[aoffset] = A[i];
    At[aoffset + 1] = A[i + 4];
    At[aoffset + 2] = A[i + 8];
    At[aoffset + 3] = A[i + 12];
  }

  d = 0.0;
  d1 = 0.0;
  d2 = 0.0;
  d3 = 0.0;
  for (i = 0; i < 4; i++) {
    aoffset = i << 2;
    d += B_data[i] * At[aoffset];
    d1 += B_data[i] * At[aoffset + 1];
    d2 += B_data[i] * At[aoffset + 2];
    d3 += B_data[i] * At[aoffset + 3];
  }

  C[3] = d3;
  C[2] = d2;
  C[1] = d1;
  C[0] = d;
}

real_T mtimes(const real_T A[4], const real_T B_data[])
{
  return ((A[0] * B_data[0] + A[1] * B_data[1]) + A[2] * B_data[2]) + A[3] *
    B_data[3];
}

/* End of code generation (mtimes.c) */
