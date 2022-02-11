/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * fbstab_mpc_emxutil.h
 *
 * Code generation for function 'fbstab_mpc_emxutil'
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
void emxEnsureCapacity_real_T(const emlrtStack *sp, emxArray_real_T *emxArray,
  int32_T oldNumel, const emlrtRTEInfo *srcLocation);
void emxFreeStruct_CondensedMpcData(CondensedMpcData *pStruct);
void emxFree_real_T(emxArray_real_T **pEmxArray);
void emxInitStruct_CondensedMpcData(const emlrtStack *sp, CondensedMpcData
  *pStruct, const emlrtRTEInfo *srcLocation, boolean_T doPush);
void emxInit_real_T(const emlrtStack *sp, emxArray_real_T **pEmxArray, int32_T
                    numDimensions, const emlrtRTEInfo *srcLocation, boolean_T
                    doPush);

/* End of code generation (fbstab_mpc_emxutil.h) */
