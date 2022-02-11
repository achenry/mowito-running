/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * chol.c
 *
 * Code generation for function 'chol'
 *
 */

/* Include files */
#include "chol.h"
#include "blas.h"
#include "fbstab_mpc.h"
#include "fbstab_mpc_data.h"
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
void cholesky(const emlrtStack *sp, real_T A[16])
{
  int32_T info;
  int32_T j;
  boolean_T exitg1;
  int32_T idxAjj;
  real_T ssq;
  int32_T ix;
  int32_T iy;
  int32_T k;
  real_T alpha1;
  real_T beta1;
  char_T TRANSA;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t lda_t;
  ptrdiff_t incx_t;
  ptrdiff_t incy_t;
  info = 0;
  j = 0;
  exitg1 = false;
  while ((!exitg1) && (j < 4)) {
    idxAjj = j + (j << 2);
    ssq = 0.0;
    if (j >= 1) {
      ix = j;
      iy = j;
      for (k = 0; k < j; k++) {
        ssq += A[ix] * A[iy];
        ix += 4;
        iy += 4;
      }
    }

    ssq = A[idxAjj] - ssq;
    if (ssq > 0.0) {
      ssq = muDoubleScalarSqrt(ssq);
      A[idxAjj] = ssq;
      if (j + 1 < 4) {
        iy = idxAjj + 2;
        if (j >= 1) {
          alpha1 = -1.0;
          beta1 = 1.0;
          TRANSA = 'N';
          m_t = (ptrdiff_t)(3 - j);
          n_t = (ptrdiff_t)j;
          lda_t = (ptrdiff_t)4;
          incx_t = (ptrdiff_t)4;
          incy_t = (ptrdiff_t)1;
          dgemv(&TRANSA, &m_t, &n_t, &alpha1, &A[j + 1], &lda_t, &A[j], &incx_t,
                &beta1, &A[idxAjj + 1], &incy_t);
        }

        ssq = 1.0 / ssq;
        ix = (idxAjj - j) + 4;
        for (k = iy; k <= ix; k++) {
          A[k - 1] *= ssq;
        }
      }

      j++;
    } else {
      A[idxAjj] = ssq;
      info = j + 1;
      exitg1 = true;
    }
  }

  if (info != 0) {
    emlrtErrorWithMessageIdR2018a(sp, &f_emlrtRTEI, "Coder:MATLAB:posdef",
      "Coder:MATLAB:posdef", 0);
  }

  for (j = 2; j < 5; j++) {
    for (ix = 0; ix <= j - 2; ix++) {
      A[ix + ((j - 1) << 2)] = 0.0;
    }
  }
}

/* End of code generation (chol.c) */
