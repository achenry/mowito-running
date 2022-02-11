/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * RiccatiLinearSolver.c
 *
 * Code generation for function 'RiccatiLinearSolver'
 *
 */

/* Include files */
#include "RiccatiLinearSolver.h"
#include "MpcData.h"
#include "chol.h"
#include "fbstab_mpc.h"
#include "fbstab_mpc_data.h"
#include "linsolve.h"
#include "mldivide.h"
#include "mrdivide_helper.h"
#include "mtimes.h"
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "sqrt.h"
#include "trisolve.h"
#include "warning.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo th_emlrtRSI = { 55, /* lineNo */
  "RiccatiLinearSolver/Factor",        /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\RiccatiLinearSolver.m"/* pathName */
};

static emlrtRSInfo uh_emlrtRSI = { 70, /* lineNo */
  "RiccatiLinearSolver/Factor",        /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\RiccatiLinearSolver.m"/* pathName */
};

static emlrtRSInfo vh_emlrtRSI = { 73, /* lineNo */
  "RiccatiLinearSolver/Factor",        /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\RiccatiLinearSolver.m"/* pathName */
};

static emlrtRSInfo wh_emlrtRSI = { 76, /* lineNo */
  "RiccatiLinearSolver/Factor",        /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\RiccatiLinearSolver.m"/* pathName */
};

static emlrtRSInfo xh_emlrtRSI = { 84, /* lineNo */
  "RiccatiLinearSolver/Factor",        /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\RiccatiLinearSolver.m"/* pathName */
};

static emlrtRSInfo yh_emlrtRSI = { 87, /* lineNo */
  "RiccatiLinearSolver/Factor",        /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\RiccatiLinearSolver.m"/* pathName */
};

static emlrtRSInfo ai_emlrtRSI = { 91, /* lineNo */
  "RiccatiLinearSolver/Factor",        /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\RiccatiLinearSolver.m"/* pathName */
};

static emlrtRSInfo bi_emlrtRSI = { 94, /* lineNo */
  "RiccatiLinearSolver/Factor",        /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\RiccatiLinearSolver.m"/* pathName */
};

static emlrtRSInfo ci_emlrtRSI = { 95, /* lineNo */
  "RiccatiLinearSolver/Factor",        /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\RiccatiLinearSolver.m"/* pathName */
};

static emlrtRSInfo di_emlrtRSI = { 100,/* lineNo */
  "RiccatiLinearSolver/Factor",        /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\RiccatiLinearSolver.m"/* pathName */
};

static emlrtRSInfo ei_emlrtRSI = { 111,/* lineNo */
  "RiccatiLinearSolver/Factor",        /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\RiccatiLinearSolver.m"/* pathName */
};

static emlrtRSInfo fi_emlrtRSI = { 116,/* lineNo */
  "RiccatiLinearSolver/Factor",        /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\RiccatiLinearSolver.m"/* pathName */
};

static emlrtRSInfo gi_emlrtRSI = { 119,/* lineNo */
  "RiccatiLinearSolver/Factor",        /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\RiccatiLinearSolver.m"/* pathName */
};

static emlrtRSInfo hi_emlrtRSI = { 121,/* lineNo */
  "RiccatiLinearSolver/Factor",        /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\RiccatiLinearSolver.m"/* pathName */
};

static emlrtRSInfo ii_emlrtRSI = { 125,/* lineNo */
  "RiccatiLinearSolver/Factor",        /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\RiccatiLinearSolver.m"/* pathName */
};

static emlrtRSInfo ji_emlrtRSI = { 231,/* lineNo */
  "RiccatiLinearSolver/dphi",          /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\RiccatiLinearSolver.m"/* pathName */
};

static emlrtRSInfo xi_emlrtRSI = { 34, /* lineNo */
  "chol",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\matfun\\chol.m"/* pathName */
};

static emlrtRSInfo ij_emlrtRSI = { 20, /* lineNo */
  "mrdivide_helper",                   /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\mrdivide_helper.m"/* pathName */
};

static emlrtRSInfo kj_emlrtRSI = { 134,/* lineNo */
  "RiccatiLinearSolver/Solve",         /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\RiccatiLinearSolver.m"/* pathName */
};

static emlrtRSInfo lj_emlrtRSI = { 142,/* lineNo */
  "RiccatiLinearSolver/Solve",         /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\RiccatiLinearSolver.m"/* pathName */
};

static emlrtRSInfo mj_emlrtRSI = { 143,/* lineNo */
  "RiccatiLinearSolver/Solve",         /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\RiccatiLinearSolver.m"/* pathName */
};

static emlrtRSInfo nj_emlrtRSI = { 152,/* lineNo */
  "RiccatiLinearSolver/Solve",         /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\RiccatiLinearSolver.m"/* pathName */
};

static emlrtRSInfo oj_emlrtRSI = { 153,/* lineNo */
  "RiccatiLinearSolver/Solve",         /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\RiccatiLinearSolver.m"/* pathName */
};

static emlrtRSInfo pj_emlrtRSI = { 155,/* lineNo */
  "RiccatiLinearSolver/Solve",         /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\RiccatiLinearSolver.m"/* pathName */
};

static emlrtRSInfo qj_emlrtRSI = { 162,/* lineNo */
  "RiccatiLinearSolver/Solve",         /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\RiccatiLinearSolver.m"/* pathName */
};

static emlrtRSInfo rj_emlrtRSI = { 163,/* lineNo */
  "RiccatiLinearSolver/Solve",         /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\RiccatiLinearSolver.m"/* pathName */
};

static emlrtRSInfo sj_emlrtRSI = { 170,/* lineNo */
  "RiccatiLinearSolver/Solve",         /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\RiccatiLinearSolver.m"/* pathName */
};

static emlrtRSInfo tj_emlrtRSI = { 174,/* lineNo */
  "RiccatiLinearSolver/Solve",         /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\RiccatiLinearSolver.m"/* pathName */
};

static emlrtRSInfo uj_emlrtRSI = { 175,/* lineNo */
  "RiccatiLinearSolver/Solve",         /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\RiccatiLinearSolver.m"/* pathName */
};

static emlrtRSInfo vj_emlrtRSI = { 178,/* lineNo */
  "RiccatiLinearSolver/Solve",         /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\RiccatiLinearSolver.m"/* pathName */
};

static emlrtRSInfo wj_emlrtRSI = { 179,/* lineNo */
  "RiccatiLinearSolver/Solve",         /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\RiccatiLinearSolver.m"/* pathName */
};

static emlrtRSInfo xj_emlrtRSI = { 195,/* lineNo */
  "RiccatiLinearSolver/Solve",         /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\RiccatiLinearSolver.m"/* pathName */
};

static emlrtRSInfo yj_emlrtRSI = { 196,/* lineNo */
  "RiccatiLinearSolver/Solve",         /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\RiccatiLinearSolver.m"/* pathName */
};

static emlrtRSInfo ak_emlrtRSI = { 197,/* lineNo */
  "RiccatiLinearSolver/Solve",         /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\RiccatiLinearSolver.m"/* pathName */
};

static emlrtRSInfo bk_emlrtRSI = { 198,/* lineNo */
  "RiccatiLinearSolver/Solve",         /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\RiccatiLinearSolver.m"/* pathName */
};

static emlrtRSInfo ck_emlrtRSI = { 201,/* lineNo */
  "RiccatiLinearSolver/Solve",         /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\RiccatiLinearSolver.m"/* pathName */
};

static emlrtRSInfo dk_emlrtRSI = { 202,/* lineNo */
  "RiccatiLinearSolver/Solve",         /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\RiccatiLinearSolver.m"/* pathName */
};

static emlrtRSInfo ek_emlrtRSI = { 203,/* lineNo */
  "RiccatiLinearSolver/Solve",         /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\RiccatiLinearSolver.m"/* pathName */
};

static emlrtRSInfo fk_emlrtRSI = { 204,/* lineNo */
  "RiccatiLinearSolver/Solve",         /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\RiccatiLinearSolver.m"/* pathName */
};

static emlrtRSInfo gk_emlrtRSI = { 208,/* lineNo */
  "RiccatiLinearSolver/Solve",         /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\RiccatiLinearSolver.m"/* pathName */
};

static emlrtRSInfo hk_emlrtRSI = { 209,/* lineNo */
  "RiccatiLinearSolver/Solve",         /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\RiccatiLinearSolver.m"/* pathName */
};

static emlrtRSInfo ik_emlrtRSI = { 213,/* lineNo */
  "RiccatiLinearSolver/Solve",         /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\RiccatiLinearSolver.m"/* pathName */
};

static emlrtRSInfo jk_emlrtRSI = { 215,/* lineNo */
  "RiccatiLinearSolver/Solve",         /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\RiccatiLinearSolver.m"/* pathName */
};

static emlrtRSInfo ok_emlrtRSI = { 56, /* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pathName */
};

static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  222,                                 /* lineNo */
  15,                                  /* colNo */
  "d",                                 /* aName */
  "RiccatiLinearSolver/diagmult",      /* fName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\RiccatiLinearSolver.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  73,                                  /* lineNo */
  50,                                  /* colNo */
  "d",                                 /* aName */
  "RiccatiLinearSolver/Factor",        /* fName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\RiccatiLinearSolver.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { 1,   /* iFirst */
  124,                                 /* iLast */
  207,                                 /* lineNo */
  9,                                   /* colNo */
  "dx.l",                              /* aName */
  "RiccatiLinearSolver/Solve",         /* fName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\RiccatiLinearSolver.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { 1,   /* iFirst */
  155,                                 /* iLast */
  201,                                 /* lineNo */
  9,                                   /* colNo */
  "dx.z",                              /* aName */
  "RiccatiLinearSolver/Solve",         /* fName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\RiccatiLinearSolver.m",/* pName */
  3                                    /* checkKind */
};

static emlrtECInfo b_emlrtECI = { -1,  /* nDims */
  159,                                 /* lineNo */
  21,                                  /* colNo */
  "RiccatiLinearSolver/Solve",         /* fName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\RiccatiLinearSolver.m"/* pName */
};

static emlrtECInfo c_emlrtECI = { -1,  /* nDims */
  201,                                 /* lineNo */
  4,                                   /* colNo */
  "RiccatiLinearSolver/Solve",         /* fName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\RiccatiLinearSolver.m"/* pName */
};

static emlrtECInfo d_emlrtECI = { -1,  /* nDims */
  202,                                 /* lineNo */
  17,                                  /* colNo */
  "RiccatiLinearSolver/Solve",         /* fName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\RiccatiLinearSolver.m"/* pName */
};

static emlrtECInfo e_emlrtECI = { -1,  /* nDims */
  202,                                 /* lineNo */
  4,                                   /* colNo */
  "RiccatiLinearSolver/Solve",         /* fName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\RiccatiLinearSolver.m"/* pName */
};

static emlrtECInfo f_emlrtECI = { -1,  /* nDims */
  203,                                 /* lineNo */
  17,                                  /* colNo */
  "RiccatiLinearSolver/Solve",         /* fName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\RiccatiLinearSolver.m"/* pName */
};

static emlrtECInfo g_emlrtECI = { -1,  /* nDims */
  203,                                 /* lineNo */
  4,                                   /* colNo */
  "RiccatiLinearSolver/Solve",         /* fName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\RiccatiLinearSolver.m"/* pName */
};

static emlrtECInfo h_emlrtECI = { -1,  /* nDims */
  204,                                 /* lineNo */
  4,                                   /* colNo */
  "RiccatiLinearSolver/Solve",         /* fName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\RiccatiLinearSolver.m"/* pName */
};

static emlrtECInfo i_emlrtECI = { -1,  /* nDims */
  207,                                 /* lineNo */
  17,                                  /* colNo */
  "RiccatiLinearSolver/Solve",         /* fName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\RiccatiLinearSolver.m"/* pName */
};

static emlrtECInfo j_emlrtECI = { -1,  /* nDims */
  207,                                 /* lineNo */
  4,                                   /* colNo */
  "RiccatiLinearSolver/Solve",         /* fName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\RiccatiLinearSolver.m"/* pName */
};

static emlrtECInfo k_emlrtECI = { -1,  /* nDims */
  208,                                 /* lineNo */
  4,                                   /* colNo */
  "RiccatiLinearSolver/Solve",         /* fName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\RiccatiLinearSolver.m"/* pName */
};

static emlrtECInfo l_emlrtECI = { -1,  /* nDims */
  209,                                 /* lineNo */
  4,                                   /* colNo */
  "RiccatiLinearSolver/Solve",         /* fName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\RiccatiLinearSolver.m"/* pName */
};

static emlrtRTEInfo g_emlrtRTEI = { 158,/* lineNo */
  23,                                  /* colNo */
  "dynamic_size_checks",               /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pName */
};

static emlrtRTEInfo h_emlrtRTEI = { 153,/* lineNo */
  23,                                  /* colNo */
  "dynamic_size_checks",               /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pName */
};

/* Function Declarations */
static void RiccatiLinearSolver_dphi(const emlrtStack *sp, const
  RiccatiLinearSolver *o, const real_T a[124], const real_T b[124], real_T
  b_gamma[124], real_T mu[124]);

/* Function Definitions */
static void RiccatiLinearSolver_dphi(const emlrtStack *sp, const
  RiccatiLinearSolver *o, const real_T a[124], const real_T b[124], real_T
  b_gamma[124], real_T mu[124])
{
  real_T ztol;
  int32_T k;
  real_T r[124];
  real_T gamma_tmp;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;

  /*  compute an element of the C-differential  */
  /*  The sizes are recomputed to help */
  /*  with code generation. */
  /*  The sizes are recomputed to help */
  /*  with code generation. */
  /* methods */
  ztol = o->ztol;

  /*  computes an element from the C differential */
  for (k = 0; k < 124; k++) {
    r[k] = a[k] * a[k] + b[k] * b[k];
  }

  st.site = &ji_emlrtRSI;
  b_sqrt(&st, r);

  /*  zero elements */
  /*  positive orthant */
  /*  the rest */
  for (k = 0; k < 124; k++) {
    if (r[k] <= ztol) {
      gamma_tmp = o->alpha * 0.29289321881345254;
      b_gamma[k] = gamma_tmp;
      mu[k] = gamma_tmp;
    } else if ((a[k] > 0.0) && (b[k] > 0.0)) {
      b_gamma[k] = o->alpha * (1.0 - a[k] / r[k]) + (1.0 - o->alpha) * b[k];
      mu[k] = o->alpha * (1.0 - b[k] / r[k]) + (1.0 - o->alpha) * a[k];
    } else {
      /*  S2 */
      b_gamma[k] = o->alpha * (1.0 - a[k] / r[k]);
      mu[k] = o->alpha * (1.0 - b[k] / r[k]);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  /*  dphi */
  /*  methods */
  /*  riccati */
}

void RiccatiLinearSolver_Factor(const emlrtStack *sp, RiccatiLinearSolver *o,
  const FullVariable *x, const FullVariable *xbar, real_T sigma)
{
  int32_T i;
  int32_T b_i;
  real_T ys[124];
  real_T B[124];
  real_T mus[124];
  real_T Q[496];
  real_T R[31];
  int32_T Q_tmp;
  int32_T A_tmp;
  int32_T jmax;
  static const int8_T b[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  int32_T b_A_tmp;
  int32_T b_Q_tmp;
  real_T b_B;
  int32_T c_A_tmp;
  int32_T d_A_tmp;
  real_T Linv[16];
  int32_T Bt_tmp;
  real_T Bt[16];
  real_T b_Q[16];
  real_T a[4];
  real_T c_B[4];
  real_T d;
  real_T d1;
  real_T d2;
  real_T b_Bt[16];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;

  /*  The sizes are recomputed to help */
  /*  with code generation. */
  /* methods */
  /*  The sizes are recomputed to help */
  /*  with code generation. */
  /*  The sizes are recomputed to help */
  /*  with code generation. */
  /* methods */
  /*  Compute the barrier terms */
  for (i = 0; i < 124; i++) {
    ys[i] = x->v[i] - xbar->v[i];
  }

  for (b_i = 0; b_i < 124; b_i++) {
    ys[b_i] = x->y[b_i] + sigma * ys[b_i];
  }

  st.site = &th_emlrtRSI;
  RiccatiLinearSolver_dphi(&st, o, ys, x->v, B, mus);
  for (b_i = 0; b_i < 124; b_i++) {
    mus[b_i] += sigma * B[b_i];
  }

  for (i = 0; i < 124; i++) {
    o->mus[i] = mus[i];
  }

  for (i = 0; i < 124; i++) {
    o->gamma[i] = B[i];
  }

  /*  Form the augmented Hessian */
  for (b_i = 0; b_i < 496; b_i++) {
    Q[b_i] = o->data->Q[b_i];
  }

  for (b_i = 0; b_i < 31; b_i++) {
    R[b_i] = o->data->R[b_i];
  }

  for (b_i = 0; b_i < 124; b_i++) {
    ys[b_i] = o->data->S[b_i];
  }

  for (b_i = 0; b_i < 124; b_i++) {
    B[b_i] /= mus[b_i];
  }

  for (i = 0; i < 31; i++) {
    for (b_i = 0; b_i < 4; b_i++) {
      Q_tmp = b_i << 2;
      jmax = Q_tmp + (i << 4);
      Q[jmax] += sigma * (real_T)b[Q_tmp];
      b_Q_tmp = jmax + 1;
      Q[b_Q_tmp] += sigma * (real_T)b[Q_tmp + 1];
      b_Q_tmp = jmax + 2;
      Q[b_Q_tmp] += sigma * (real_T)b[Q_tmp + 2];
      jmax += 3;
      Q[jmax] += sigma * (real_T)b[Q_tmp + 3];
    }

    b_i = i << 2;
    A_tmp = (i + 1) << 2;
    if (b_i + 1 > A_tmp) {
      b_A_tmp = 0;
      c_A_tmp = 0;
    } else {
      b_A_tmp = b_i;
      c_A_tmp = A_tmp;
    }

    for (d_A_tmp = 0; d_A_tmp < 4; d_A_tmp++) {
      b_Q_tmp = d_A_tmp << 2;
      jmax = b_Q_tmp + (i << 4);
      Linv[b_Q_tmp] = o->data->E[jmax];
      Linv[b_Q_tmp + 1] = o->data->E[jmax + 1];
      Linv[b_Q_tmp + 2] = o->data->E[jmax + 2];
      Linv[b_Q_tmp + 3] = o->data->E[jmax + 3];
    }

    st.site = &uh_emlrtRSI;
    for (d_A_tmp = 0; d_A_tmp < 4; d_A_tmp++) {
      Q_tmp = d_A_tmp << 2;
      Bt_tmp = Q_tmp + (i << 4);
      Bt[Q_tmp] = o->data->E[Bt_tmp];
      Bt[Q_tmp + 1] = o->data->E[Bt_tmp + 1];
      Bt[Q_tmp + 2] = o->data->E[Bt_tmp + 2];
      Bt[Q_tmp + 3] = o->data->E[Bt_tmp + 3];
    }

    c_A_tmp -= b_A_tmp;
    for (Q_tmp = 0; Q_tmp < 4; Q_tmp++) {
      d_A_tmp = Q_tmp + 1;
      if (d_A_tmp > c_A_tmp) {
        emlrtDynamicBoundsCheckR2012b(d_A_tmp, 1, c_A_tmp, &emlrtBCI, &st);
      }

      b_B = B[b_A_tmp + Q_tmp];
      Bt[Q_tmp] *= b_B;
      Bt[Q_tmp + 4] *= b_B;
      Bt[Q_tmp + 8] *= b_B;
      Bt[Q_tmp + 12] *= b_B;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(&st);
      }
    }

    for (b_A_tmp = 0; b_A_tmp < 4; b_A_tmp++) {
      c_A_tmp = b_A_tmp << 2;
      for (d_A_tmp = 0; d_A_tmp < 4; d_A_tmp++) {
        b_Q_tmp = d_A_tmp << 2;
        Q_tmp = b_A_tmp + b_Q_tmp;
        b_Q[Q_tmp] = Q[Q_tmp + (i << 4)] + (((Linv[c_A_tmp] * Bt[b_Q_tmp] +
          Linv[c_A_tmp + 1] * Bt[b_Q_tmp + 1]) + Linv[c_A_tmp + 2] * Bt[b_Q_tmp
          + 2]) + Linv[c_A_tmp + 3] * Bt[b_Q_tmp + 3]);
      }
    }

    for (b_A_tmp = 0; b_A_tmp < 4; b_A_tmp++) {
      Q_tmp = b_A_tmp << 2;
      jmax = Q_tmp + (i << 4);
      Q[jmax] = b_Q[Q_tmp];
      Q[jmax + 1] = b_Q[Q_tmp + 1];
      Q[jmax + 2] = b_Q[Q_tmp + 2];
      Q[jmax + 3] = b_Q[Q_tmp + 3];
    }

    b_A_tmp = b_i - 1;
    if (b_A_tmp + 2 > A_tmp) {
      b_A_tmp = -1;
      c_A_tmp = 0;
    } else {
      c_A_tmp = A_tmp;
    }

    a[0] = o->data->L[b_i];
    a[1] = o->data->L[(i << 2) + 1];
    b_Q_tmp = b_i + 2;
    a[2] = o->data->L[b_Q_tmp];
    jmax = b_i + 3;
    a[3] = o->data->L[jmax];
    st.site = &vh_emlrtRSI;
    b_B = o->data->L[b_i];
    d = o->data->L[(i << 2) + 1];
    d1 = o->data->L[b_Q_tmp];
    d2 = o->data->L[jmax];
    c_A_tmp = (c_A_tmp - b_A_tmp) - 1;
    if (1 > c_A_tmp) {
      emlrtDynamicBoundsCheckR2012b(1, 1, c_A_tmp, &b_emlrtBCI, &st);
    }

    b_B *= B[b_A_tmp + 1];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }

    if (2 > c_A_tmp) {
      emlrtDynamicBoundsCheckR2012b(2, 1, 1, &b_emlrtBCI, &st);
    }

    d *= B[b_A_tmp + 2];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }

    if (3 > c_A_tmp) {
      emlrtDynamicBoundsCheckR2012b(3, 1, 2, &b_emlrtBCI, &st);
    }

    d1 *= B[b_A_tmp + 3];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }

    if (4 > c_A_tmp) {
      emlrtDynamicBoundsCheckR2012b(4, 1, 3, &b_emlrtBCI, &st);
    }

    d2 *= B[b_A_tmp + 4];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }

    R[i] = (R[i] + sigma) + (((a[0] * b_B + a[1] * d) + a[2] * d1) + a[3] * d2);
    if (b_i + 1 > A_tmp) {
      b_A_tmp = 0;
      A_tmp = 0;
    } else {
      b_A_tmp = b_i;
    }

    a[0] = o->data->L[b_i];
    a[1] = o->data->L[(i << 2) + 1];
    a[2] = o->data->L[b_Q_tmp];
    a[3] = o->data->L[jmax];
    st.site = &wh_emlrtRSI;
    for (c_A_tmp = 0; c_A_tmp < 4; c_A_tmp++) {
      Q_tmp = c_A_tmp << 2;
      Bt_tmp = Q_tmp + (i << 4);
      Bt[Q_tmp] = o->data->E[Bt_tmp];
      Bt[Q_tmp + 1] = o->data->E[Bt_tmp + 1];
      Bt[Q_tmp + 2] = o->data->E[Bt_tmp + 2];
      Bt[Q_tmp + 3] = o->data->E[Bt_tmp + 3];
    }

    A_tmp -= b_A_tmp;
    for (Q_tmp = 0; Q_tmp < 4; Q_tmp++) {
      c_A_tmp = Q_tmp + 1;
      if (c_A_tmp > A_tmp) {
        emlrtDynamicBoundsCheckR2012b(c_A_tmp, 1, A_tmp, &emlrtBCI, &st);
      }

      b_B = B[b_A_tmp + Q_tmp];
      Bt[Q_tmp] *= b_B;
      Bt[Q_tmp + 4] *= b_B;
      Bt[Q_tmp + 8] *= b_B;
      Bt[Q_tmp + 12] *= b_B;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(&st);
      }
    }

    for (A_tmp = 0; A_tmp < 4; A_tmp++) {
      b_A_tmp = A_tmp << 2;
      c_B[A_tmp] = ys[A_tmp + b_i] + (((a[0] * Bt[b_A_tmp] + a[1] * Bt[b_A_tmp +
        1]) + a[2] * Bt[b_A_tmp + 2]) + a[3] * Bt[b_A_tmp + 3]);
    }

    ys[b_i] = c_B[0];
    ys[(i << 2) + 1] = c_B[1];
    ys[b_Q_tmp] = c_B[2];
    ys[jmax] = c_B[3];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  /*  Temp variables */
  /*  Begin the Riccati recursion */
  /*  base case Pi = sigma I, L = chol(Pi) */
  st.site = &xh_emlrtRSI;
  if (sigma < 0.0) {
    emlrtErrorWithMessageIdR2018a(&st, &c_emlrtRTEI,
      "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
      4, "sqrt");
  }

  b_B = muDoubleScalarSqrt(sigma);
  for (b_i = 0; b_i < 4; b_i++) {
    A_tmp = b_i << 2;
    o->L[A_tmp] = b_B * (real_T)b[A_tmp];
    b_A_tmp = A_tmp + 1;
    o->L[b_A_tmp] = b_B * (real_T)b[b_A_tmp];
    b_A_tmp = A_tmp + 2;
    o->L[b_A_tmp] = b_B * (real_T)b[b_A_tmp];
    A_tmp += 3;
    o->L[A_tmp] = b_B * (real_T)b[A_tmp];
  }

  for (i = 0; i < 30; i++) {
    /*  Get the inverse factorization */
    for (b_i = 0; b_i < 16; b_i++) {
      Linv[b_i] = b[b_i];
    }

    memcpy(&Bt[0], &(*(real_T (*)[16])&o->L[i << 4])[0], 16U * sizeof(real_T));
    st.site = &yh_emlrtRSI;
    mldivide(&st, Bt, Linv);

    /*  Compute QQ = Q + inv(Pi) and factor */
    for (b_i = 0; b_i < 4; b_i++) {
      A_tmp = b_i << 2;
      for (b_A_tmp = 0; b_A_tmp < 4; b_A_tmp++) {
        c_A_tmp = b_A_tmp << 2;
        d_A_tmp = (b_i + c_A_tmp) + (i << 4);
        o->M[d_A_tmp] = Q[d_A_tmp] + (((Linv[A_tmp] * Linv[c_A_tmp] + Linv[A_tmp
          + 1] * Linv[c_A_tmp + 1]) + Linv[A_tmp + 2] * Linv[c_A_tmp + 2]) +
          Linv[A_tmp + 3] * Linv[c_A_tmp + 3]);
      }
    }

    st.site = &ai_emlrtRSI;
    for (b_i = 0; b_i < 4; b_i++) {
      b_Q_tmp = b_i << 2;
      jmax = b_Q_tmp + (i << 4);
      Linv[b_Q_tmp] = o->M[jmax];
      Linv[b_Q_tmp + 1] = o->M[jmax + 1];
      Linv[b_Q_tmp + 2] = o->M[jmax + 2];
      Linv[b_Q_tmp + 3] = o->M[jmax + 3];
    }

    b_st.site = &xi_emlrtRSI;
    cholesky(&b_st, Linv);
    for (b_i = 0; b_i < 4; b_i++) {
      A_tmp = b_i << 2;
      b_A_tmp = A_tmp + (i << 4);
      o->M[b_A_tmp] = Linv[A_tmp];
      o->M[b_A_tmp + 1] = Linv[A_tmp + 1];
      o->M[b_A_tmp + 2] = Linv[A_tmp + 2];
      o->M[b_A_tmp + 3] = Linv[A_tmp + 3];
    }

    /*  Compute AM = A*inv(M)' and SM = S*inv(M)' */
    st.site = &bi_emlrtRSI;
    for (b_i = 0; b_i < 4; b_i++) {
      b_Q_tmp = b_i << 2;
      jmax = b_Q_tmp + (i << 4);
      Linv[b_Q_tmp] = o->data->Ak[jmax];
      Linv[b_Q_tmp + 1] = o->data->Ak[jmax + 1];
      Linv[b_Q_tmp + 2] = o->data->Ak[jmax + 2];
      Linv[b_Q_tmp + 3] = o->data->Ak[jmax + 3];
    }

    for (b_i = 0; b_i < 4; b_i++) {
      Q_tmp = b_i + (i << 4);
      Bt_tmp = b_i << 2;
      Bt[Bt_tmp] = o->M[Q_tmp];
      Bt[Bt_tmp + 1] = o->M[Q_tmp + 4];
      Bt[Bt_tmp + 2] = o->M[Q_tmp + 8];
      Bt[Bt_tmp + 3] = o->M[Q_tmp + 12];
    }

    b_st.site = &ij_emlrtRSI;
    mrdiv(&b_st, Linv, Bt);
    for (b_i = 0; b_i < 4; b_i++) {
      A_tmp = b_i << 2;
      b_A_tmp = A_tmp + (i << 4);
      o->AM[b_A_tmp] = Linv[A_tmp];
      o->AM[b_A_tmp + 1] = Linv[A_tmp + 1];
      o->AM[b_A_tmp + 2] = Linv[A_tmp + 2];
      o->AM[b_A_tmp + 3] = Linv[A_tmp + 3];
    }

    st.site = &ci_emlrtRSI;
    for (b_i = 0; b_i < 4; b_i++) {
      Q_tmp = b_i + (i << 4);
      Bt_tmp = b_i << 2;
      Bt[Bt_tmp] = o->M[Q_tmp];
      Bt[Bt_tmp + 1] = o->M[Q_tmp + 4];
      Bt[Bt_tmp + 2] = o->M[Q_tmp + 8];
      Bt[Bt_tmp + 3] = o->M[Q_tmp + 12];
    }

    d_A_tmp = i << 2;
    c_B[0] = ys[d_A_tmp];
    c_A_tmp = d_A_tmp + 1;
    c_B[1] = ys[c_A_tmp];
    A_tmp = d_A_tmp + 2;
    c_B[2] = ys[A_tmp];
    b_A_tmp = d_A_tmp + 3;
    c_B[3] = ys[b_A_tmp];
    b_st.site = &ij_emlrtRSI;
    b_mrdiv(&b_st, c_B, Bt);
    o->SM[d_A_tmp] = c_B[0];
    o->SM[c_A_tmp] = c_B[1];
    o->SM[A_tmp] = c_B[2];
    o->SM[b_A_tmp] = c_B[3];

    /*  Compute Sigma = chol(R - S*inv(QQ)*S') */
    c_B[0] = o->SM[d_A_tmp];
    c_B[1] = o->SM[c_A_tmp];
    c_B[2] = o->SM[A_tmp];
    c_B[3] = o->SM[b_A_tmp];
    a[0] = o->SM[d_A_tmp];
    a[1] = o->SM[c_A_tmp];
    a[2] = o->SM[A_tmp];
    a[3] = o->SM[b_A_tmp];
    o->Sigma[i] = R[i] - (((a[0] * c_B[0] + a[1] * c_B[1]) + a[2] * c_B[2]) + a
                          [3] * c_B[3]);
    st.site = &di_emlrtRSI;
    b_B = o->Sigma[i];
    b_st.site = &xi_emlrtRSI;
    b_Q_tmp = 0;
    if (b_B > 0.0) {
      b_B = muDoubleScalarSqrt(b_B);
    } else {
      b_Q_tmp = 1;
    }

    jmax = (b_Q_tmp == 0);
    if (b_Q_tmp != 0) {
      emlrtErrorWithMessageIdR2018a(&b_st, &f_emlrtRTEI, "Coder:MATLAB:posdef",
        "Coder:MATLAB:posdef", 0);
    }

    for (b_Q_tmp = 2; b_Q_tmp <= jmax; b_Q_tmp++) {
      for (Q_tmp = 0; Q_tmp <= b_Q_tmp - 2; Q_tmp++) {
        b_B = 0.0;
      }
    }

    o->Sigma[i] = b_B;

    /*  Compute P = (A*inv(QQ)*S' - B)* inv(Sigma)'; */
    c_B[0] = o->SM[d_A_tmp];
    c_B[1] = o->SM[c_A_tmp];
    c_B[2] = o->SM[A_tmp];
    c_B[3] = o->SM[b_A_tmp];
    for (b_i = 0; b_i < 4; b_i++) {
      Q_tmp = b_i << 2;
      Bt_tmp = Q_tmp + (i << 4);
      Bt[Q_tmp] = o->AM[Bt_tmp];
      Bt[Q_tmp + 1] = o->AM[Bt_tmp + 1];
      Bt[Q_tmp + 2] = o->AM[Bt_tmp + 2];
      Bt[Q_tmp + 3] = o->AM[Bt_tmp + 3];
    }

    for (b_i = 0; b_i < 4; b_i++) {
      a[b_i] = (((Bt[b_i] * c_B[0] + Bt[b_i + 4] * c_B[1]) + Bt[b_i + 8] * c_B[2])
                + Bt[b_i + 12] * c_B[3]) - o->data->Bk[b_i + d_A_tmp];
    }

    o->P[d_A_tmp] = a[0];
    o->P[c_A_tmp] = a[1];
    o->P[A_tmp] = a[2];
    o->P[b_A_tmp] = a[3];
    b_B = o->Sigma[i];
    a[0] = o->P[d_A_tmp] / b_B;
    a[1] = o->P[c_A_tmp] / b_B;
    a[2] = o->P[A_tmp] / b_B;
    a[3] = o->P[b_A_tmp] / b_B;
    o->P[d_A_tmp] = a[0];
    o->P[c_A_tmp] = a[1];
    o->P[A_tmp] = a[2];
    o->P[b_A_tmp] = a[3];

    /*  Compute Pi k+1 */
    c_B[0] = o->P[d_A_tmp];
    c_B[1] = o->P[c_A_tmp];
    c_B[2] = o->P[A_tmp];
    c_B[3] = o->P[b_A_tmp];
    for (b_i = 0; b_i < 4; b_i++) {
      b_Q_tmp = b_i << 2;
      jmax = b_Q_tmp + (i << 4);
      Linv[b_Q_tmp] = o->AM[jmax];
      Linv[b_Q_tmp + 1] = o->AM[jmax + 1];
      Linv[b_Q_tmp + 2] = o->AM[jmax + 2];
      Linv[b_Q_tmp + 3] = o->AM[jmax + 3];
    }

    a[0] = o->P[d_A_tmp];
    a[1] = o->P[c_A_tmp];
    a[2] = o->P[A_tmp];
    a[3] = o->P[b_A_tmp];
    for (b_i = 0; b_i < 4; b_i++) {
      Q_tmp = b_i << 2;
      Bt_tmp = Q_tmp + (i << 4);
      Bt[Q_tmp] = o->AM[Bt_tmp];
      Bt[Q_tmp + 1] = o->AM[Bt_tmp + 1];
      Bt[Q_tmp + 2] = o->AM[Bt_tmp + 2];
      Bt[Q_tmp + 3] = o->AM[Bt_tmp + 3];
    }

    for (b_i = 0; b_i < 4; b_i++) {
      b_B = Bt[b_i + 4];
      d = Bt[b_i + 8];
      d1 = Bt[b_i + 12];
      for (A_tmp = 0; A_tmp < 4; A_tmp++) {
        b_Q[A_tmp + (b_i << 2)] = a[A_tmp] * c_B[b_i];
        b_Bt[b_i + (A_tmp << 2)] = ((Bt[b_i] * Linv[A_tmp] + b_B * Linv[A_tmp +
          4]) + d * Linv[A_tmp + 8]) + d1 * Linv[A_tmp + 12];
      }
    }

    for (b_i = 0; b_i < 4; b_i++) {
      A_tmp = b_i << 2;
      b_A_tmp = A_tmp + ((i + 1) << 4);
      o->L[b_A_tmp] = (b_Q[A_tmp] + b_Bt[A_tmp]) + sigma * (real_T)b[A_tmp];
      c_A_tmp = A_tmp + 1;
      o->L[b_A_tmp + 1] = (b_Q[c_A_tmp] + b_Bt[c_A_tmp]) + sigma * (real_T)
        b[c_A_tmp];
      c_A_tmp = A_tmp + 2;
      o->L[b_A_tmp + 2] = (b_Q[c_A_tmp] + b_Bt[c_A_tmp]) + sigma * (real_T)
        b[c_A_tmp];
      A_tmp += 3;
      o->L[b_A_tmp + 3] = (b_Q[A_tmp] + b_Bt[A_tmp]) + sigma * (real_T)b[A_tmp];
    }

    /*  Compute a cholesky factorization of Pi k+1 */
    st.site = &ei_emlrtRSI;
    for (b_i = 0; b_i < 4; b_i++) {
      b_Q_tmp = b_i << 2;
      jmax = b_Q_tmp + ((i + 1) << 4);
      Linv[b_Q_tmp] = o->L[jmax];
      Linv[b_Q_tmp + 1] = o->L[jmax + 1];
      Linv[b_Q_tmp + 2] = o->L[jmax + 2];
      Linv[b_Q_tmp + 3] = o->L[jmax + 3];
    }

    b_st.site = &xi_emlrtRSI;
    cholesky(&b_st, Linv);
    for (b_i = 0; b_i < 4; b_i++) {
      A_tmp = b_i << 2;
      b_A_tmp = A_tmp + ((i + 1) << 4);
      o->L[b_A_tmp] = Linv[A_tmp];
      o->L[b_A_tmp + 1] = Linv[A_tmp + 1];
      o->L[b_A_tmp + 2] = Linv[A_tmp + 2];
      o->L[b_A_tmp + 3] = Linv[A_tmp + 3];
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  /*  Finish the recursion */
  for (b_i = 0; b_i < 16; b_i++) {
    Linv[b_i] = b[b_i];
  }

  memcpy(&Bt[0], &(*(real_T (*)[16])&o->L[480])[0], 16U * sizeof(real_T));
  st.site = &fi_emlrtRSI;
  mldivide(&st, Bt, Linv);

  /*  Compute QQ = Q + inv(Pi) and factor */
  for (b_i = 0; b_i < 4; b_i++) {
    A_tmp = b_i << 2;
    for (b_A_tmp = 0; b_A_tmp < 4; b_A_tmp++) {
      c_A_tmp = b_A_tmp << 2;
      d_A_tmp = (b_i + c_A_tmp) + 480;
      o->M[d_A_tmp] = Q[d_A_tmp] + (((Linv[A_tmp] * Linv[c_A_tmp] + Linv[A_tmp +
        1] * Linv[c_A_tmp + 1]) + Linv[A_tmp + 2] * Linv[c_A_tmp + 2]) +
        Linv[A_tmp + 3] * Linv[c_A_tmp + 3]);
    }
  }

  st.site = &gi_emlrtRSI;
  for (b_i = 0; b_i < 4; b_i++) {
    b_Q_tmp = b_i << 2;
    Linv[b_Q_tmp] = o->M[b_Q_tmp + 480];
    Linv[b_Q_tmp + 1] = o->M[b_Q_tmp + 481];
    Linv[b_Q_tmp + 2] = o->M[b_Q_tmp + 482];
    Linv[b_Q_tmp + 3] = o->M[b_Q_tmp + 483];
  }

  b_st.site = &xi_emlrtRSI;
  cholesky(&b_st, Linv);
  for (b_i = 0; b_i < 4; b_i++) {
    A_tmp = b_i << 2;
    o->M[A_tmp + 480] = Linv[A_tmp];
    o->M[A_tmp + 481] = Linv[A_tmp + 1];
    o->M[A_tmp + 482] = Linv[A_tmp + 2];
    o->M[A_tmp + 483] = Linv[A_tmp + 3];
  }

  st.site = &hi_emlrtRSI;
  for (b_i = 0; b_i < 4; b_i++) {
    Q_tmp = b_i << 2;
    Bt[Q_tmp] = o->M[b_i + 480];
    Bt[Q_tmp + 1] = o->M[b_i + 484];
    Bt[Q_tmp + 2] = o->M[b_i + 488];
    Bt[Q_tmp + 3] = o->M[b_i + 492];
  }

  c_B[0] = ys[120];
  c_B[1] = ys[121];
  c_B[2] = ys[122];
  c_B[3] = ys[123];
  b_st.site = &ij_emlrtRSI;
  b_mrdiv(&b_st, c_B, Bt);
  o->SM[120] = c_B[0];
  o->SM[121] = c_B[1];
  o->SM[122] = c_B[2];
  o->SM[123] = c_B[3];
  c_B[0] = o->SM[120];
  c_B[1] = o->SM[121];
  c_B[2] = o->SM[122];
  c_B[3] = o->SM[123];
  a[0] = o->SM[120];
  a[1] = o->SM[121];
  a[2] = o->SM[122];
  a[3] = o->SM[123];
  o->Sigma[30] = R[30] - (((a[0] * c_B[0] + a[1] * c_B[1]) + a[2] * c_B[2]) + a
    [3] * c_B[3]);
  st.site = &ii_emlrtRSI;
  b_B = o->Sigma[30];
  b_st.site = &xi_emlrtRSI;
  b_Q_tmp = 0;
  if (b_B > 0.0) {
    b_B = muDoubleScalarSqrt(b_B);
  } else {
    b_Q_tmp = 1;
  }

  jmax = (b_Q_tmp == 0);
  if (b_Q_tmp != 0) {
    emlrtErrorWithMessageIdR2018a(&b_st, &f_emlrtRTEI, "Coder:MATLAB:posdef",
      "Coder:MATLAB:posdef", 0);
  }

  for (b_Q_tmp = 2; b_Q_tmp <= jmax; b_Q_tmp++) {
    for (i = 0; i <= b_Q_tmp - 2; i++) {
      b_B = 0.0;
    }
  }

  o->Sigma[30] = b_B;
}

void RiccatiLinearSolver_Solve(const emlrtStack *sp, RiccatiLinearSolver *o,
  const FullResidual *r, FullVariable *dx)
{
  int32_T i;
  real_T r2[124];
  real_T r1[155];
  int32_T b_i;
  real_T rt2[4];
  real_T b_o[16];
  int32_T o_tmp;
  int32_T iii;
  real_T a[4];
  int32_T i1;
  int32_T i2;
  int32_T a_tmp;
  int32_T b_a_tmp;
  real_T A;
  int32_T c_a_tmp;
  real_T uN;
  int32_T d_a_tmp;
  real_T c_o[4];
  real_T xN[4];
  int32_T ii;
  int32_T b;
  int32_T b_o_tmp;
  real_T lp_data[124];
  uint8_T y_data[149];
  uint8_T xidx_data[149];
  uint8_T tmp_data[146];
  int8_T lidx_data[149];
  int32_T r1_size[1];
  real_T r1_data[146];
  emlrtStack *b_r;
  emlrtStack *b_r1;
  uint8_T b_tmp_data[149];
  real_T dx_data[149];
  real_T b_data[146];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;

  /*  factor */
  /*  The sizes are recomputed to help */
  /*  with code generation. */
  /* methods */
  /*  The sizes are recomputed to help */
  /*  with code generation. */
  /*  The sizes are recomputed to help */
  /*  with code generation. */
  /* methods */
  /*  compute the reduced residuals */
  for (i = 0; i < 124; i++) {
    r2[i] = r->rv[i] / o->mus[i];
  }

  st.site = &kj_emlrtRSI;
  MpcData_AT(&st, o->data, r2, r1);
  for (i = 0; i < 155; i++) {
    r1[i] = r->rz[i] - r1[i];
  }

  for (b_i = 0; b_i < 124; b_i++) {
    r2[b_i] = -r->rl[b_i];
  }

  /*  compute the forward recursion for h and theta */
  o->theta[0] = r2[0];
  o->theta[1] = r2[1];
  o->theta[2] = r2[2];
  o->theta[3] = r2[3];

  /*  compute h */
  rt2[0] = o->theta[0];
  rt2[1] = o->theta[1];
  rt2[2] = o->theta[2];
  rt2[3] = o->theta[3];
  memcpy(&b_o[0], &(*(real_T (*)[16])&o->L[0])[0], 16U * sizeof(real_T));
  st.site = &lj_emlrtRSI;
  b_mldivide(&st, b_o, rt2);
  o->h[0] = rt2[0];
  o->h[1] = rt2[1];
  o->h[2] = rt2[2];
  o->h[3] = rt2[3];
  rt2[0] = o->h[0];
  rt2[1] = o->h[1];
  rt2[2] = o->h[2];
  rt2[3] = o->h[3];
  for (i = 0; i < 4; i++) {
    o_tmp = i << 2;
    b_o[o_tmp] = o->L[i];
    b_o[o_tmp + 1] = o->L[i + 4];
    b_o[o_tmp + 2] = o->L[i + 8];
    b_o[o_tmp + 3] = o->L[i + 12];
  }

  st.site = &mj_emlrtRSI;
  b_mldivide(&st, b_o, rt2);
  o->h[0] = rt2[0] - r1[0];
  o->h[1] = rt2[1] - r1[1];
  o->h[2] = rt2[2] - r1[2];
  o->h[3] = rt2[3] - r1[3];
  for (b_i = 0; b_i < 30; b_i++) {
    iii = (b_i + 1) * 5;
    i = (b_i + 1) << 2;
    i1 = (b_i + 2) << 2;
    if (i + 1 > i1) {
      i2 = 0;
      i1 = 0;
    } else {
      i2 = i;
    }

    /*  compute theta(i+1) */
    a_tmp = b_i << 2;
    a[0] = o->SM[a_tmp];
    b_a_tmp = a_tmp + 1;
    a[1] = o->SM[b_a_tmp];
    c_a_tmp = a_tmp + 2;
    a[2] = o->SM[c_a_tmp];
    d_a_tmp = a_tmp + 3;
    a[3] = o->SM[d_a_tmp];
    memcpy(&b_o[0], &(*(real_T (*)[16])&o->M[b_i << 4])[0], 16U * sizeof(real_T));
    c_o[0] = o->h[b_i << 2];
    c_o[1] = o->h[1 + (b_i << 2)];
    c_o[2] = o->h[2 + (b_i << 2)];
    c_o[3] = o->h[3 + (b_i << 2)];
    st.site = &nj_emlrtRSI;
    linsolve(&st, b_o, c_o, rt2);
    st.site = &oj_emlrtRSI;
    A = o->Sigma[b_i];
    b_st.site = &kk_emlrtRSI;
    uN = r1[b_i * 5 + 4] + (((a[0] * rt2[0] + a[1] * rt2[1]) + a[2] * rt2[2]) +
      a[3] * rt2[3]);
    b_trisolve(A, &uN);
    if ((A == 0.0) || (muDoubleScalarIsInf(A) || muDoubleScalarIsNaN(A))) {
      c_st.site = &lk_emlrtRSI;
      d_st.site = &wi_emlrtRSI;
      warning(&d_st);
    }

    memcpy(&b_o[0], &(*(real_T (*)[16])&o->M[b_i << 4])[0], 16U * sizeof(real_T));
    c_o[0] = o->h[b_i << 2];
    c_o[1] = o->h[1 + (b_i << 2)];
    c_o[2] = o->h[2 + (b_i << 2)];
    c_o[3] = o->h[3 + (b_i << 2)];
    st.site = &pj_emlrtRSI;
    linsolve(&st, b_o, c_o, rt2);
    a[0] = o->P[a_tmp];
    a[1] = o->P[b_a_tmp];
    a[2] = o->P[c_a_tmp];
    a[3] = o->P[d_a_tmp];
    o->theta[i] = a[0] * uN;
    o->theta[((b_i + 1) << 2) + 1] = a[1] * uN;
    c_a_tmp = i + 2;
    o->theta[c_a_tmp] = a[2] * uN;
    ii = i + 3;
    o->theta[ii] = a[3] * uN;
    for (b = 0; b < 4; b++) {
      o_tmp = b << 2;
      b_o_tmp = o_tmp + (b_i << 4);
      b_o[o_tmp] = o->AM[b_o_tmp];
      b_o[o_tmp + 1] = o->AM[b_o_tmp + 1];
      b_o[o_tmp + 2] = o->AM[b_o_tmp + 2];
      b_o[o_tmp + 3] = o->AM[b_o_tmp + 3];
    }

    for (b = 0; b < 4; b++) {
      xN[b] = o->theta[b + i] + (((b_o[b] * rt2[0] + b_o[b + 4] * rt2[1]) +
        b_o[b + 8] * rt2[2]) + b_o[b + 12] * rt2[3]);
    }

    o->theta[i] = xN[0];
    o->theta[((b_i + 1) << 2) + 1] = xN[1];
    o->theta[c_a_tmp] = xN[2];
    o->theta[ii] = xN[3];
    o_tmp = i1 - i2;
    if (4 != o_tmp) {
      emlrtSizeEqCheck1DR2012b(4, o_tmp, &b_emlrtECI, sp);
    }

    for (i1 = 0; i1 < 4; i1++) {
      lp_data[i1] = r2[i2 + i1];
    }

    xN[0] = o->theta[i] + lp_data[0];
    xN[1] = o->theta[((b_i + 1) << 2) + 1] + lp_data[1];
    xN[2] = o->theta[c_a_tmp] + lp_data[2];
    xN[3] = o->theta[ii] + lp_data[3];
    o->theta[i] = xN[0];
    o->theta[((b_i + 1) << 2) + 1] = xN[1];
    o->theta[c_a_tmp] = xN[2];
    o->theta[ii] = xN[3];

    /*  compute o.h(i+1) */
    memcpy(&b_o[0], &(*(real_T (*)[16])&o->L[(b_i + 1) << 4])[0], 16U * sizeof
           (real_T));
    c_o[0] = o->theta[(b_i + 1) << 2];
    c_o[1] = o->theta[1 + ((b_i + 1) << 2)];
    c_o[2] = o->theta[2 + ((b_i + 1) << 2)];
    c_o[3] = o->theta[3 + ((b_i + 1) << 2)];
    st.site = &qj_emlrtRSI;
    linsolve(&st, b_o, c_o, *(real_T (*)[4])&o->h[i]);
    for (i1 = 0; i1 < 4; i1++) {
      o_tmp = i1 + ((b_i + 1) << 4);
      b_o_tmp = i1 << 2;
      b_o[b_o_tmp] = o->L[o_tmp];
      b_o[b_o_tmp + 1] = o->L[o_tmp + 4];
      b_o[b_o_tmp + 2] = o->L[o_tmp + 8];
      b_o[b_o_tmp + 3] = o->L[o_tmp + 12];
    }

    c_o[0] = o->h[(b_i + 1) << 2];
    c_o[1] = o->h[1 + ((b_i + 1) << 2)];
    c_o[2] = o->h[2 + ((b_i + 1) << 2)];
    c_o[3] = o->h[3 + ((b_i + 1) << 2)];
    st.site = &rj_emlrtRSI;
    b_linsolve(&st, b_o, c_o, rt2);
    o->h[i] = rt2[0] - r1[iii];
    o->h[((b_i + 1) << 2) + 1] = rt2[1] - r1[iii + 1];
    o->h[c_a_tmp] = rt2[2] - r1[iii + 2];
    o->h[ii] = rt2[3] - r1[iii + 3];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  /*  terminal trio */
  a[0] = o->SM[120];
  a[1] = o->SM[121];
  a[2] = o->SM[122];
  a[3] = o->SM[123];
  rt2[0] = o->h[120];
  rt2[1] = o->h[121];
  rt2[2] = o->h[122];
  rt2[3] = o->h[123];
  memcpy(&b_o[0], &(*(real_T (*)[16])&o->M[480])[0], 16U * sizeof(real_T));
  st.site = &sj_emlrtRSI;
  b_mldivide(&st, b_o, rt2);
  A = o->Sigma[30];
  uN = o->Sigma[30];
  uN = (r1[154] + (((a[0] * rt2[0] + a[1] * rt2[1]) + a[2] * rt2[2]) + a[3] *
                   rt2[3])) / A / uN;
  a[0] = o->SM[120];
  a[1] = o->SM[121];
  a[2] = o->SM[122];
  a[3] = o->SM[123];
  xN[0] = o->h[120];
  xN[1] = o->h[121];
  xN[2] = o->h[122];
  xN[3] = o->h[123];
  memcpy(&b_o[0], &(*(real_T (*)[16])&o->M[480])[0], 16U * sizeof(real_T));
  st.site = &tj_emlrtRSI;
  b_mldivide(&st, b_o, xN);
  xN[0] += a[0] * uN;
  xN[1] += a[1] * uN;
  xN[2] += a[2] * uN;
  xN[3] += a[3] * uN;
  for (i = 0; i < 4; i++) {
    o_tmp = i << 2;
    b_o[o_tmp] = -o->M[i + 480];
    b_o[o_tmp + 1] = -o->M[i + 484];
    b_o[o_tmp + 2] = -o->M[i + 488];
    b_o[o_tmp + 3] = -o->M[i + 492];
  }

  st.site = &uj_emlrtRSI;
  b_mldivide(&st, b_o, xN);
  rt2[0] = o->theta[120] + xN[0];
  rt2[1] = o->theta[121] + xN[1];
  rt2[2] = o->theta[122] + xN[2];
  rt2[3] = o->theta[123] + xN[3];
  memcpy(&b_o[0], &(*(real_T (*)[16])&o->L[480])[0], 16U * sizeof(real_T));
  st.site = &vj_emlrtRSI;
  b_mldivide(&st, b_o, rt2);
  for (i = 0; i < 4; i++) {
    o_tmp = i << 2;
    b_o[o_tmp] = -o->L[i + 480];
    b_o[o_tmp + 1] = -o->L[i + 484];
    b_o[o_tmp + 2] = -o->L[i + 488];
    b_o[o_tmp + 3] = -o->L[i + 492];
  }

  st.site = &wj_emlrtRSI;
  b_mldivide(&st, b_o, rt2);
  dx->z[150] = xN[0];
  dx->z[151] = xN[1];
  dx->z[152] = xN[2];
  dx->z[153] = xN[3];
  dx->z[154] = uN;
  dx->l[120] = rt2[0];
  dx->l[121] = rt2[1];
  dx->l[122] = rt2[2];
  dx->l[123] = rt2[3];

  /*  back substituite for the full solution */
  for (b_i = 0; b_i < 30; b_i++) {
    ii = (29 - b_i) * 5 + 4;
    b = (30 - b_i) << 2;
    i = (31 - b_i) << 2;
    if (b + 1 > i) {
      i1 = 0;
      i = 0;
    } else {
      i1 = b;
    }

    o_tmp = i - i1;
    for (i = 0; i < o_tmp; i++) {
      lp_data[i] = dx->l[i1 + i];
    }

    y_data[0] = (uint8_T)(ii + 1);
    if (ii < ii - 3) {
      iii = 0;
    } else {
      iii = 4;
      for (i = 0; i < 4; i++) {
        xidx_data[i] = (uint8_T)((uint32_T)(ii - 3) + i);
      }
    }

    a_tmp = (29 - b_i) << 2;
    b_a_tmp = a_tmp + 1;
    if (b < b_a_tmp) {
      b = 0;
    } else {
      c_a_tmp = b - b_a_tmp;
      b = c_a_tmp + 1;
      for (i = 0; i <= c_a_tmp; i++) {
        lidx_data[i] = (int8_T)(b_a_tmp + i);
      }
    }

    /*  compute u */
    tmp_data[0] = y_data[0];
    a[0] = o->SM[a_tmp];
    a[1] = o->SM[b_a_tmp];
    c_a_tmp = a_tmp + 2;
    a[2] = o->SM[c_a_tmp];
    d_a_tmp = a_tmp + 3;
    a[3] = o->SM[d_a_tmp];
    rt2[0] = o->h[a_tmp];
    rt2[1] = o->h[b_a_tmp];
    rt2[2] = o->h[c_a_tmp];
    rt2[3] = o->h[d_a_tmp];
    memcpy(&b_o[0], &(*(real_T (*)[16])&o->M[(29 - b_i) << 4])[0], 16U * sizeof
           (real_T));
    st.site = &xj_emlrtRSI;
    b_mldivide(&st, b_o, rt2);
    uN = ((a[0] * rt2[0] + a[1] * rt2[1]) + a[2] * rt2[2]) + a[3] * rt2[3];
    dx->z[tmp_data[0] - 1] = uN;
    tmp_data[0] = y_data[0];
    uN = o->Sigma[29 - b_i];
    r1_size[0] = 1;
    r1_data[0] = r1[ii] + dx->z[y_data[0] - 1];
    st.site = &yj_emlrtRSI;
    b_r = &st;
    uN = c_linsolve(b_r, uN, r1_data, r1_size);
    dx->z[tmp_data[0] - 1] = uN;
    a[0] = o->P[a_tmp];
    a[1] = o->P[b_a_tmp];
    a[2] = o->P[c_a_tmp];
    a[3] = o->P[d_a_tmp];
    tmp_data[0] = y_data[0];
    r1_data[0] = dx->z[y_data[0] - 1];
    b_st.site = &ak_emlrtRSI;
    c_st.site = &ok_emlrtRSI;
    if (4 != o_tmp) {
      if (o_tmp == 1) {
        emlrtErrorWithMessageIdR2018a(&c_st, &h_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&c_st, &g_emlrtRTEI, "MATLAB:innerdim",
          "MATLAB:innerdim", 0);
      }
    }

    uN = mtimes(a, lp_data);
    dx->z[tmp_data[0] - 1] = r1_data[0] + uN;
    tmp_data[0] = y_data[0];
    uN = o->Sigma[29 - b_i];
    r1_size[0] = 1;
    r1_data[0] = dx->z[y_data[0] - 1];
    b_st.site = &bk_emlrtRSI;
    b_r1 = &b_st;
    uN = d_linsolve(b_r1, uN, r1_data, r1_size);
    dx->z[tmp_data[0] - 1] = uN;

    /*  compute x */
    for (i = 0; i < iii; i++) {
      if ((xidx_data[i] < 1) || (xidx_data[i] > 155)) {
        emlrtDynamicBoundsCheckR2012b(xidx_data[i], 1, 155, &d_emlrtBCI, &b_st);
      }

      b_tmp_data[i] = xidx_data[i];
    }

    if (iii != 4) {
      emlrtSubAssignSizeCheck1dR2017a(iii, 4, &c_emlrtECI, &b_st);
    }

    memcpy(&b_o[0], &(*(real_T (*)[16])&o->M[(29 - b_i) << 4])[0], 16U * sizeof
           (real_T));
    c_o[0] = o->h[(29 - b_i) << 2];
    c_o[1] = o->h[1 + ((29 - b_i) << 2)];
    c_o[2] = o->h[2 + ((29 - b_i) << 2)];
    c_o[3] = o->h[3 + ((29 - b_i) << 2)];
    c_st.site = &ck_emlrtRSI;
    linsolve(&c_st, b_o, c_o, rt2);
    for (i = 0; i < 4; i++) {
      dx->z[b_tmp_data[i] - 1] = rt2[i];
    }

    for (i = 0; i < 4; i++) {
      o_tmp = i << 2;
      b_o_tmp = o_tmp + ((29 - b_i) << 4);
      b_o[o_tmp] = o->AM[b_o_tmp];
      b_o[o_tmp + 1] = o->AM[b_o_tmp + 1];
      b_o[o_tmp + 2] = o->AM[b_o_tmp + 2];
      b_o[o_tmp + 3] = o->AM[b_o_tmp + 3];
    }

    for (i = 0; i < iii; i++) {
      dx_data[i] = dx->z[xidx_data[i] - 1];
    }

    if (4 != iii) {
      emlrtSizeEqCheck1DR2012b(4, iii, &d_emlrtECI, &b_st);
    }

    if (0 <= iii - 1) {
      memcpy(&b_tmp_data[0], &xidx_data[0], iii * sizeof(uint8_T));
    }

    if (iii != 4) {
      emlrtSubAssignSizeCheck1dR2017a(iii, 4, &e_emlrtECI, &b_st);
    }

    c_st.site = &dk_emlrtRSI;
    b_mtimes(b_o, lp_data, rt2);
    for (i = 0; i < 4; i++) {
      dx->z[b_tmp_data[i] - 1] = rt2[i] + dx_data[i];
    }

    a[0] = o->SM[a_tmp];
    a[1] = o->SM[b_a_tmp];
    a[2] = o->SM[c_a_tmp];
    a[3] = o->SM[d_a_tmp];
    b_data[0] = dx->z[y_data[0] - 1];
    for (i = 0; i < iii; i++) {
      dx_data[i] = dx->z[xidx_data[i] - 1];
    }

    if (4 != iii) {
      emlrtSizeEqCheck1DR2012b(4, iii, &f_emlrtECI, &b_st);
    }

    if (0 <= iii - 1) {
      memcpy(&b_tmp_data[0], &xidx_data[0], iii * sizeof(uint8_T));
    }

    if (iii != 4) {
      emlrtSubAssignSizeCheck1dR2017a(iii, 4, &g_emlrtECI, &b_st);
    }

    c_st.site = &ek_emlrtRSI;
    for (i = 0; i < 4; i++) {
      dx->z[b_tmp_data[i] - 1] = a[i] * b_data[0] + dx_data[i];
    }

    if (0 <= iii - 1) {
      memcpy(&b_tmp_data[0], &xidx_data[0], iii * sizeof(uint8_T));
    }

    if (iii != 4) {
      emlrtSubAssignSizeCheck1dR2017a(iii, 4, &h_emlrtECI, &b_st);
    }

    for (i = 0; i < 4; i++) {
      o_tmp = i + ((29 - b_i) << 4);
      b_o_tmp = i << 2;
      b_o[b_o_tmp] = o->M[o_tmp];
      b_o[b_o_tmp + 1] = o->M[o_tmp + 4];
      b_o[b_o_tmp + 2] = o->M[o_tmp + 8];
      b_o[b_o_tmp + 3] = o->M[o_tmp + 12];
    }

    r1_size[0] = iii;
    for (i = 0; i < iii; i++) {
      dx_data[i] = dx->z[xidx_data[i] - 1];
    }

    c_st.site = &fk_emlrtRSI;
    e_linsolve(&c_st, b_o, dx_data, r1_size, rt2);
    for (i = 0; i < 4; i++) {
      dx->z[b_tmp_data[i] - 1] = -rt2[i];
    }

    /*  compute lambda */
    for (i = 0; i < iii; i++) {
      dx_data[i] = dx->z[xidx_data[i] - 1];
    }

    if (4 != iii) {
      emlrtSizeEqCheck1DR2012b(4, iii, &i_emlrtECI, &b_st);
    }

    for (i = 0; i < b; i++) {
      i1 = (uint8_T)lidx_data[i];
      if ((i1 < 1) || (i1 > 124)) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, 124, &c_emlrtBCI, &b_st);
      }

      b_tmp_data[i] = (uint8_T)i1;
    }

    if (b != 4) {
      emlrtSubAssignSizeCheck1dR2017a(b, 4, &j_emlrtECI, &b_st);
    }

    xN[0] = o->theta[a_tmp] + dx_data[0];
    xN[1] = o->theta[b_a_tmp] + dx_data[1];
    xN[2] = o->theta[c_a_tmp] + dx_data[2];
    xN[3] = o->theta[d_a_tmp] + dx_data[3];
    for (i = 0; i < 4; i++) {
      dx->l[b_tmp_data[i] - 1] = xN[i];
    }

    for (i = 0; i < b; i++) {
      b_tmp_data[i] = (uint8_T)lidx_data[i];
    }

    if (b != 4) {
      emlrtSubAssignSizeCheck1dR2017a(b, 4, &k_emlrtECI, &b_st);
    }

    r1_size[0] = b;
    for (i = 0; i < b; i++) {
      dx_data[i] = dx->l[lidx_data[i] - 1];
    }

    memcpy(&b_o[0], &(*(real_T (*)[16])&o->L[(29 - b_i) << 4])[0], 16U * sizeof
           (real_T));
    c_st.site = &gk_emlrtRSI;
    f_linsolve(&c_st, b_o, dx_data, r1_size, rt2);
    for (i = 0; i < 4; i++) {
      dx->l[b_tmp_data[i] - 1] = rt2[i];
    }

    for (i = 0; i < b; i++) {
      b_tmp_data[i] = (uint8_T)lidx_data[i];
    }

    if (b != 4) {
      emlrtSubAssignSizeCheck1dR2017a(b, 4, &l_emlrtECI, &b_st);
    }

    for (i = 0; i < 4; i++) {
      o_tmp = i + ((29 - b_i) << 4);
      b_o_tmp = i << 2;
      b_o[b_o_tmp] = o->L[o_tmp];
      b_o[b_o_tmp + 1] = o->L[o_tmp + 4];
      b_o[b_o_tmp + 2] = o->L[o_tmp + 8];
      b_o[b_o_tmp + 3] = o->L[o_tmp + 12];
    }

    r1_size[0] = b;
    for (i = 0; i < b; i++) {
      dx_data[i] = dx->l[lidx_data[i] - 1];
    }

    c_st.site = &hk_emlrtRSI;
    e_linsolve(&c_st, b_o, dx_data, r1_size, rt2);
    for (i = 0; i < 4; i++) {
      dx->l[b_tmp_data[i] - 1] = -rt2[i];
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&b_st);
    }
  }

  /*  recover ieq duals */
  memcpy(&r1[0], &dx->z[0], 155U * sizeof(real_T));
  st.site = &ik_emlrtRSI;
  MpcData_A(&st, o->data, r1, r2);
  for (i = 0; i < 124; i++) {
    r2[i] = (r->rv[i] + o->gamma[i] * r2[i]) / o->mus[i];
  }

  for (i = 0; i < 124; i++) {
    dx->v[i] = r2[i];
  }

  /*  dy for linesearch */
  memcpy(&r1[0], &dx->z[0], 155U * sizeof(real_T));
  st.site = &jk_emlrtRSI;
  MpcData_A(&st, o->data, r1, r2);
  for (i = 0; i < 124; i++) {
    r2[i] = o->data->b[i] - r2[i];
  }

  for (i = 0; i < 124; i++) {
    dx->y[i] = r2[i];
  }
}

/* End of code generation (RiccatiLinearSolver.c) */
