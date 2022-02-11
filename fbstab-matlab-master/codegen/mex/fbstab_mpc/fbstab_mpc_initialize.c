/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * fbstab_mpc_initialize.c
 *
 * Code generation for function 'fbstab_mpc_initialize'
 *
 */

/* Include files */
#include "fbstab_mpc_initialize.h"
#include "_coder_fbstab_mpc_mex.h"
#include "fbstab_mpc.h"
#include "fbstab_mpc_data.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
void fbstab_mpc_initialize(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mex_InitInfAndNan();
  mexFunctionCreateRootTLS();
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

/* End of code generation (fbstab_mpc_initialize.c) */
