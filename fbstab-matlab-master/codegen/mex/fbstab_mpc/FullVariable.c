/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FullVariable.c
 *
 * Code generation for function 'FullVariable'
 *
 */

/* Include files */
#include "FullVariable.h"
#include "fbstab_mpc.h"
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
real_T FullVariable_norm(const FullVariable *o)
{
  real_T a;
  real_T scale;
  int32_T k;
  real_T absxk;
  real_T t;
  real_T b_a;
  real_T c_a;

  /*  overload norm */
  a = 0.0;
  scale = 3.3121686421112381E-170;
  for (k = 0; k < 155; k++) {
    absxk = muDoubleScalarAbs(o->z[k]);
    if (absxk > scale) {
      t = scale / absxk;
      a = a * t * t + 1.0;
      scale = absxk;
    } else {
      t = absxk / scale;
      a += t * t;
    }
  }

  a = scale * muDoubleScalarSqrt(a);
  b_a = 0.0;
  scale = 3.3121686421112381E-170;
  for (k = 0; k < 124; k++) {
    absxk = muDoubleScalarAbs(o->l[k]);
    if (absxk > scale) {
      t = scale / absxk;
      b_a = b_a * t * t + 1.0;
      scale = absxk;
    } else {
      t = absxk / scale;
      b_a += t * t;
    }
  }

  b_a = scale * muDoubleScalarSqrt(b_a);
  c_a = 0.0;
  scale = 3.3121686421112381E-170;
  for (k = 0; k < 124; k++) {
    absxk = muDoubleScalarAbs(o->v[k]);
    if (absxk > scale) {
      t = scale / absxk;
      c_a = c_a * t * t + 1.0;
      scale = absxk;
    } else {
      t = absxk / scale;
      c_a += t * t;
    }
  }

  c_a = scale * muDoubleScalarSqrt(c_a);
  return muDoubleScalarSqrt((a * a + b_a * b_a) + c_a * c_a);
}

/* End of code generation (FullVariable.c) */
