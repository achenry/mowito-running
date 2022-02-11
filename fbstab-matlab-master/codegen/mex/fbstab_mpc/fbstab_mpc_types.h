/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * fbstab_mpc_types.h
 *
 * Code generation for function 'fbstab_mpc_types'
 *
 */

#pragma once

/* Include files */
#include "rtwtypes.h"

/* Type Definitions */
#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T

struct emxArray_real_T
{
  real_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_real_T*/

#ifndef typedef_emxArray_real_T
#define typedef_emxArray_real_T

typedef struct emxArray_real_T emxArray_real_T;

#endif                                 /*typedef_emxArray_real_T*/

#ifndef typedef_CondensedMpcData
#define typedef_CondensedMpcData

typedef struct {
  real_T N;
  real_T nu;
  real_T nc;
  real_T Q[496];
  real_T R[31];
  real_T S[124];
  real_T q[124];
  real_T r[31];
  real_T Ak[480];
  real_T Bk[120];
  real_T ck[120];
  real_T xt[4];
  real_T E[496];
  real_T L[124];
  emxArray_real_T *f;
  real_T b[124];
  real_T h;
} CondensedMpcData;

#endif                                 /*typedef_CondensedMpcData*/

#ifndef typedef_CondensedFeasibility
#define typedef_CondensedFeasibility

typedef struct {
  real_T z1[31];
  real_T v1[124];
  CondensedMpcData *data;
} CondensedFeasibility;

#endif                                 /*typedef_CondensedFeasibility*/

#ifndef typedef_CondensedResidual
#define typedef_CondensedResidual

typedef struct {
  CondensedMpcData *data;
  real_T alpha;
  real_T rz[31];
  real_T rv[124];
  real_T znorm;
  real_T vnorm;
} CondensedResidual;

#endif                                 /*typedef_CondensedResidual*/

#ifndef typedef_CondensedVariable
#define typedef_CondensedVariable

typedef struct {
  real_T z[31];
  real_T v[124];
  real_T y[124];
  CondensedMpcData *data;
} CondensedVariable;

#endif                                 /*typedef_CondensedVariable*/

#ifndef typedef_ImplicitConjugateGradient
#define typedef_ImplicitConjugateGradient

typedef struct {
  real_T ztol;
  real_T alpha;
  CondensedMpcData *data;
  real_T sigma;
  real_T mus[124];
  real_T gamma[124];
  real_T T[31];
} ImplicitConjugateGradient;

#endif                                 /*typedef_ImplicitConjugateGradient*/

#ifndef typedef_FBstabAlgorithm
#define typedef_FBstabAlgorithm

typedef struct {
  real_T sigma;
  real_T sigma_max;
  real_T sigma_min;
  real_T max_newton_iters;
  real_T max_prox_iters;
  real_T tol;
  real_T rtol;
  real_T dtol;
  real_T inf_tol;
  boolean_T check_infeasibility;
  real_T alpha;
  real_T beta;
  real_T eta;
  real_T lsmax;
  real_T max_inner_iters;
  real_T itol_max;
  real_T itol_min;
  real_T itol_red_factor;
  boolean_T use_nonmonotone_linesearch;
  real_T display_level;
  CondensedMpcData *data;
  ImplicitConjugateGradient *linear_solver;
  CondensedFeasibility *feas_checker;
  CondensedResidual *rk;
  CondensedResidual *ri;
  CondensedVariable *xi;
  CondensedVariable *xk;
  CondensedVariable *xp;
  CondensedVariable *dx;
  real_T fnorm;
  real_T hnorm;
  real_T bnorm;
  real_T ztol;
  real_T ltol;
  real_T vtol;
} FBstabAlgorithm;

#endif                                 /*typedef_FBstabAlgorithm*/

#ifndef typedef_MpcData
#define typedef_MpcData

typedef struct {
  real_T N;
  real_T nx;
  real_T nu;
  real_T nc;
  real_T Q[496];
  real_T R[31];
  real_T S[124];
  real_T q[124];
  real_T r[31];
  real_T Ak[480];
  real_T Bk[120];
  real_T ck[120];
  real_T xt[4];
  real_T E[496];
  real_T L[124];
  real_T f[155];
  real_T h[124];
  real_T b[124];
} MpcData;

#endif                                 /*typedef_MpcData*/

#ifndef typedef_FullFeasibility
#define typedef_FullFeasibility

typedef struct {
  real_T z1[155];
  real_T l1[124];
  real_T v1[124];
  MpcData *data;
} FullFeasibility;

#endif                                 /*typedef_FullFeasibility*/

#ifndef typedef_FullResidual
#define typedef_FullResidual

typedef struct {
  real_T rz[155];
  real_T rl[124];
  real_T rv[124];
  MpcData *data;
  real_T alpha;
  real_T znorm;
  real_T lnorm;
  real_T vnorm;
} FullResidual;

#endif                                 /*typedef_FullResidual*/

#ifndef typedef_FullVariable
#define typedef_FullVariable

typedef struct {
  real_T z[155];
  real_T l[124];
  real_T v[124];
  real_T y[124];
  MpcData *data;
} FullVariable;

#endif                                 /*typedef_FullVariable*/

#ifndef typedef_RiccatiLinearSolver
#define typedef_RiccatiLinearSolver

typedef struct {
  real_T ztol;
  real_T alpha;
  MpcData *data;
  real_T mus[124];
  real_T gamma[124];
  real_T L[496];
  real_T P[124];
  real_T M[496];
  real_T SM[124];
  real_T AM[496];
  real_T Sigma[31];
  real_T h[124];
  real_T theta[124];
} RiccatiLinearSolver;

#endif                                 /*typedef_RiccatiLinearSolver*/

#ifndef typedef_FBstabAlgorithm_1
#define typedef_FBstabAlgorithm_1

typedef struct {
  real_T sigma;
  real_T sigma_max;
  real_T sigma_min;
  real_T max_newton_iters;
  real_T max_prox_iters;
  real_T tol;
  real_T rtol;
  real_T dtol;
  real_T inf_tol;
  boolean_T check_infeasibility;
  real_T alpha;
  real_T beta;
  real_T eta;
  real_T lsmax;
  real_T max_inner_iters;
  real_T itol_max;
  real_T itol_min;
  real_T itol_red_factor;
  boolean_T use_nonmonotone_linesearch;
  real_T display_level;
  MpcData *data;
  RiccatiLinearSolver *linear_solver;
  FullFeasibility *feas_checker;
  FullResidual *rk;
  FullResidual *ri;
  FullVariable *xi;
  FullVariable *xk;
  FullVariable *xp;
  FullVariable *dx;
  real_T fnorm;
  real_T hnorm;
  real_T bnorm;
  real_T ztol;
  real_T ltol;
  real_T vtol;
} FBstabAlgorithm_1;

#endif                                 /*typedef_FBstabAlgorithm_1*/

#ifndef typedef_struct0_T
#define typedef_struct0_T

typedef struct {
  real_T v[124];
  real_T l[124];
  real_T z[155];
} struct0_T;

#endif                                 /*typedef_struct0_T*/

#ifndef typedef_struct1_T
#define typedef_struct1_T

typedef struct {
  real_T Q[496];
  real_T R[31];
  real_T S[124];
  real_T A[480];
  real_T B[120];
  real_T c[120];
  real_T nc;
  real_T E[496];
  real_T L[124];
  real_T d[124];
  real_T xtrg[4];
  real_T utrg;
  real_T q[124];
  real_T r[31];
  real_T x0[4];
} struct1_T;

#endif                                 /*typedef_struct1_T*/

#ifndef typedef_struct2_T
#define typedef_struct2_T

typedef struct {
  real_T display_level;
  char_T linear_solver[3];
} struct2_T;

#endif                                 /*typedef_struct2_T*/

#ifndef typedef_struct3_T
#define typedef_struct3_T

typedef struct {
  real_T z[155];
  real_T l[124];
  real_T v[124];
} struct3_T;

#endif                                 /*typedef_struct3_T*/

#ifndef typedef_struct4_T
#define typedef_struct4_T

typedef struct {
  real_T eflag;
  real_T newton_iters;
  real_T prox_iters;
  real_T res;
} struct4_T;

#endif                                 /*typedef_struct4_T*/

/* End of code generation (fbstab_mpc_types.h) */
