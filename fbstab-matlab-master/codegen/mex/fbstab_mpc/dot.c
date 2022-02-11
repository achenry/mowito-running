/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * dot.c
 *
 * Code generation for function 'dot'
 *
 */

/* Include files */
#include "dot.h"
#include "blas.h"
#include "fbstab_mpc.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
real_T vdotp(const emxArray_real_T *a, const real_T b_data[])
{
  real_T c;
  ptrdiff_t n_t;
  ptrdiff_t incx_t;
  ptrdiff_t incy_t;
  if (a->size[0] < 1) {
    c = 0.0;
  } else {
    n_t = (ptrdiff_t)a->size[0];
    incx_t = (ptrdiff_t)1;
    incy_t = (ptrdiff_t)1;
    c = ddot(&n_t, &a->data[0], &incx_t, &b_data[0], &incy_t);
  }

  return c;
}

/* End of code generation (dot.c) */
