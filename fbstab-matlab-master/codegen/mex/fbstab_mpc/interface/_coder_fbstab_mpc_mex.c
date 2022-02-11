/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_fbstab_mpc_mex.c
 *
 * Code generation for function '_coder_fbstab_mpc_mex'
 *
 */

/* Include files */
#include "_coder_fbstab_mpc_mex.h"
#include "_coder_fbstab_mpc_api.h"
#include "fbstab_mpc.h"
#include "fbstab_mpc_data.h"
#include "fbstab_mpc_initialize.h"
#include "fbstab_mpc_terminate.h"
#include <string.h>

/* Function Declarations */
MEXFUNCTION_LINKAGE void fbstab_mpc_mexFunction(int32_T nlhs, mxArray *plhs[3],
  int32_T nrhs, const mxArray *prhs[3]);

/* Function Definitions */
void fbstab_mpc_mexFunction(int32_T nlhs, mxArray *plhs[3], int32_T nrhs, const
  mxArray *prhs[3])
{
  const mxArray *outputs[3];
  int32_T b_nlhs;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 3) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 3, 4,
                        10, "fbstab_mpc");
  }

  if (nlhs > 3) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 10,
                        "fbstab_mpc");
  }

  /* Call the function. */
  fbstab_mpc_api(prhs, nlhs, outputs);

  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }

  emlrtReturnArrays(b_nlhs, plhs, outputs);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  mexAtExit(fbstab_mpc_atexit);

  /* Module initialization. */
  fbstab_mpc_initialize();

  /* Dispatch the entry-point. */
  fbstab_mpc_mexFunction(nlhs, plhs, nrhs, prhs);

  /* Module termination. */
  fbstab_mpc_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_fbstab_mpc_mex.c) */
