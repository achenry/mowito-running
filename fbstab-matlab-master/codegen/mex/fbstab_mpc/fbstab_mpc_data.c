/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * fbstab_mpc_data.c
 *
 * Code generation for function 'fbstab_mpc_data'
 *
 */

/* Include files */
#include "fbstab_mpc_data.h"
#include "fbstab_mpc.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;
const volatile char_T *emlrtBreakCheckR2012bFlagVar = NULL;
emlrtContext emlrtContextGlobal = { true,/* bFirstTime */
  false,                               /* bInitialized */
  131483U,                             /* fVersionInfo */
  NULL,                                /* fErrorFunction */
  "fbstab_mpc",                        /* fFunctionName */
  NULL,                                /* fRTCallStack */
  false,                               /* bDebugMode */
  { 2045744189U, 2170104910U, 2743257031U, 4284093946U },/* fSigWrd */
  NULL                                 /* fSigMem */
};

emlrtRSInfo p_emlrtRSI = { 47,         /* lineNo */
  "CondensedMpcData/CondensedMpcData", /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\CondensedMpcData.m"/* pathName */
};

emlrtRSInfo v_emlrtRSI = { 21,         /* lineNo */
  "ImplicitConjugateGradient/ImplicitConjugateGradient",/* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\ImplicitConjugateGradient.m"/* pathName */
};

emlrtRSInfo w_emlrtRSI = { 19,         /* lineNo */
  "CondensedFeasibility/CondensedFeasibility",/* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\CondensedFeasibility.m"/* pathName */
};

emlrtRSInfo x_emlrtRSI = { 24,         /* lineNo */
  "CondensedResidual/CondensedResidual",/* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\CondensedResidual.m"/* pathName */
};

emlrtRSInfo y_emlrtRSI = { 18,         /* lineNo */
  "CondensedVariable/CondensedVariable",/* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\CondensedVariable.m"/* pathName */
};

emlrtRSInfo bb_emlrtRSI = { 64,        /* lineNo */
  "FBstabAlgorithm/FBstabAlgorithm",   /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\FBstabAlgorithm.m"/* pathName */
};

emlrtRSInfo cb_emlrtRSI = { 68,        /* lineNo */
  "FBstabAlgorithm/FBstabAlgorithm",   /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\FBstabAlgorithm.m"/* pathName */
};

emlrtRSInfo rc_emlrtRSI = { 110,       /* lineNo */
  "CondensedMpcData/AT",               /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\CondensedMpcData.m"/* pathName */
};

emlrtRSInfo ke_emlrtRSI = { 76,        /* lineNo */
  "CondensedVariable/norm",            /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\CondensedVariable.m"/* pathName */
};

emlrtRSInfo hf_emlrtRSI = { 71,        /* lineNo */
  "ImplicitConjugateGradient/ConjugateGradient",/* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\ImplicitConjugateGradient.m"/* pathName */
};

emlrtRSInfo jf_emlrtRSI = { 76,        /* lineNo */
  "ImplicitConjugateGradient/ConjugateGradient",/* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\ImplicitConjugateGradient.m"/* pathName */
};

emlrtRSInfo mf_emlrtRSI = { 84,        /* lineNo */
  "ImplicitConjugateGradient/ConjugateGradient",/* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\ImplicitConjugateGradient.m"/* pathName */
};

emlrtRSInfo of_emlrtRSI = { 92,        /* lineNo */
  "ImplicitConjugateGradient/ConjugateGradient",/* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\ImplicitConjugateGradient.m"/* pathName */
};

emlrtRSInfo pf_emlrtRSI = { 25,        /* lineNo */
  "dot",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\specfun\\dot.m"/* pathName */
};

emlrtRSInfo qf_emlrtRSI = { 104,       /* lineNo */
  "vdotp",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\specfun\\dot.m"/* pathName */
};

emlrtRSInfo rf_emlrtRSI = { 89,        /* lineNo */
  "vdot",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\specfun\\dot.m"/* pathName */
};

emlrtRSInfo sf_emlrtRSI = { 32,        /* lineNo */
  "xdotc",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xdotc.m"/* pathName */
};

emlrtRSInfo tf_emlrtRSI = { 49,        /* lineNo */
  "xdot",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xdot.m"/* pathName */
};

emlrtRSInfo cg_emlrtRSI = { 45,        /* lineNo */
  "unaryOrBinaryDispatch",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

emlrtRSInfo dg_emlrtRSI = { 145,       /* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

emlrtRSInfo eg_emlrtRSI = { 1019,      /* lineNo */
  "maxRealVectorOmitNaN",              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

emlrtRSInfo fg_emlrtRSI = { 932,       /* lineNo */
  "minOrMaxRealVector",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

emlrtRSInfo gg_emlrtRSI = { 992,       /* lineNo */
  "minOrMaxRealVectorKernel",          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

emlrtRSInfo qg_emlrtRSI = { 107,       /* lineNo */
  "fbstab_mpc",                        /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\fbstab_mpc.m"/* pathName */
};

emlrtRSInfo rg_emlrtRSI = { 108,       /* lineNo */
  "fbstab_mpc",                        /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\fbstab_mpc.m"/* pathName */
};

emlrtRSInfo sg_emlrtRSI = { 109,       /* lineNo */
  "fbstab_mpc",                        /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\fbstab_mpc.m"/* pathName */
};

emlrtRSInfo tg_emlrtRSI = { 110,       /* lineNo */
  "fbstab_mpc",                        /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\fbstab_mpc.m"/* pathName */
};

emlrtRSInfo ug_emlrtRSI = { 112,       /* lineNo */
  "fbstab_mpc",                        /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\fbstab_mpc.m"/* pathName */
};

emlrtRSInfo vg_emlrtRSI = { 113,       /* lineNo */
  "fbstab_mpc",                        /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\fbstab_mpc.m"/* pathName */
};

emlrtRSInfo wg_emlrtRSI = { 114,       /* lineNo */
  "fbstab_mpc",                        /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\fbstab_mpc.m"/* pathName */
};

emlrtRSInfo xg_emlrtRSI = { 115,       /* lineNo */
  "fbstab_mpc",                        /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\fbstab_mpc.m"/* pathName */
};

emlrtRSInfo yg_emlrtRSI = { 118,       /* lineNo */
  "fbstab_mpc",                        /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\fbstab_mpc.m"/* pathName */
};

emlrtRSInfo bh_emlrtRSI = { 52,        /* lineNo */
  "MpcData/MpcData",                   /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\MpcData.m"/* pathName */
};

emlrtRSInfo ch_emlrtRSI = { 33,        /* lineNo */
  "RiccatiLinearSolver/RiccatiLinearSolver",/* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\RiccatiLinearSolver.m"/* pathName */
};

emlrtRSInfo dh_emlrtRSI = { 20,        /* lineNo */
  "FullFeasibility/FullFeasibility",   /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\FullFeasibility.m"/* pathName */
};

emlrtRSInfo eh_emlrtRSI = { 25,        /* lineNo */
  "FullResidual/FullResidual",         /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\FullResidual.m"/* pathName */
};

emlrtRSInfo fh_emlrtRSI = { 19,        /* lineNo */
  "FullVariable/FullVariable",         /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\FullVariable.m"/* pathName */
};

emlrtRSInfo gh_emlrtRSI = { 21,        /* lineNo */
  "FullVariable/FullVariable",         /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\FullVariable.m"/* pathName */
};

emlrtRSInfo sh_emlrtRSI = { 83,        /* lineNo */
  "FullVariable/norm",                 /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\FullVariable.m"/* pathName */
};

emlrtRSInfo mi_emlrtRSI = { 67,        /* lineNo */
  "lusolve",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pathName */
};

emlrtRSInfo ni_emlrtRSI = { 109,       /* lineNo */
  "lusolveNxN",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pathName */
};

emlrtRSInfo oi_emlrtRSI = { 107,       /* lineNo */
  "lusolveNxN",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pathName */
};

emlrtRSInfo wi_emlrtRSI = { 90,        /* lineNo */
  "warn_singular",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pathName */
};

emlrtRSInfo yi_emlrtRSI = { 74,        /* lineNo */
  "cholesky",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\matfun\\chol.m"/* pathName */
};

emlrtRSInfo aj_emlrtRSI = { 16,        /* lineNo */
  "xpotrf",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xpotrf.m"/* pathName */
};

emlrtRSInfo bj_emlrtRSI = { 13,        /* lineNo */
  "xzpotrf",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzpotrf.m"/* pathName */
};

emlrtRSInfo cj_emlrtRSI = { 105,       /* lineNo */
  "zpotrfL",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzpotrf.m"/* pathName */
};

emlrtRSInfo dj_emlrtRSI = { 99,        /* lineNo */
  "zpotrfL",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzpotrf.m"/* pathName */
};

emlrtRSInfo ej_emlrtRSI = { 87,        /* lineNo */
  "xgemv",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xgemv.m"/* pathName */
};

emlrtRSInfo fj_emlrtRSI = { 86,        /* lineNo */
  "xgemv",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xgemv.m"/* pathName */
};

emlrtRSInfo gj_emlrtRSI = { 31,        /* lineNo */
  "xscal",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xscal.m"/* pathName */
};

emlrtRSInfo hj_emlrtRSI = { 18,        /* lineNo */
  "xscal",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+refblas\\xscal.m"/* pathName */
};

emlrtRSInfo kk_emlrtRSI = { 95,        /* lineNo */
  "linsolve",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\matfun\\linsolve.m"/* pathName */
};

emlrtRSInfo lk_emlrtRSI = { 402,       /* lineNo */
  "solveLT",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\matfun\\linsolve.m"/* pathName */
};

emlrtRSInfo sk_emlrtRSI = { 43,        /* lineNo */
  "FullFeasibility/CheckFeasibility",  /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\FullFeasibility.m"/* pathName */
};

emlrtRSInfo tk_emlrtRSI = { 44,        /* lineNo */
  "FullFeasibility/CheckFeasibility",  /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\FullFeasibility.m"/* pathName */
};

emlrtRSInfo vk_emlrtRSI = { 57,        /* lineNo */
  "FullFeasibility/CheckFeasibility",  /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\FullFeasibility.m"/* pathName */
};

emlrtRTEInfo c_emlrtRTEI = { 13,       /* lineNo */
  9,                                   /* colNo */
  "sqrt",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m"/* pName */
};

emlrtRTEInfo f_emlrtRTEI = { 80,       /* lineNo */
  23,                                  /* colNo */
  "cholesky",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\matfun\\chol.m"/* pName */
};

/* End of code generation (fbstab_mpc_data.c) */
