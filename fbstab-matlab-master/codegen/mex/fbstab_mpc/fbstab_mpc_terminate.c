/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * fbstab_mpc_terminate.c
 *
 * Code generation for function 'fbstab_mpc_terminate'
 *
 */

/* Include files */
#include "fbstab_mpc_terminate.h"
#include "_coder_fbstab_mpc_mex.h"
#include "fbstab_mpc.h"
#include "fbstab_mpc_data.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
void fbstab_mpc_atexit(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
  emlrtExitTimeCleanup(&emlrtContextGlobal);
}

void fbstab_mpc_terminate(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (fbstab_mpc_terminate.c) */
