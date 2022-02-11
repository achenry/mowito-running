/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sqrt.c
 *
 * Code generation for function 'sqrt'
 *
 */

/* Include files */
#include "sqrt.h"
#include "fbstab_mpc.h"
#include "fbstab_mpc_data.h"
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
void b_sqrt(const emlrtStack *sp, real_T x[124])
{
  boolean_T p;
  int32_T k;
  p = false;
  for (k = 0; k < 124; k++) {
    if (p || (x[k] < 0.0)) {
      p = true;
    }
  }

  if (p) {
    emlrtErrorWithMessageIdR2018a(sp, &c_emlrtRTEI,
      "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
      4, "sqrt");
  }

  for (k = 0; k < 124; k++) {
    x[k] = muDoubleScalarSqrt(x[k]);
  }
}

/* End of code generation (sqrt.c) */
