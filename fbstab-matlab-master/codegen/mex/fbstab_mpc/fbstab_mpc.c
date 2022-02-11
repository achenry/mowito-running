/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * fbstab_mpc.c
 *
 * Code generation for function 'fbstab_mpc'
 *
 */

/* Include files */
#include "fbstab_mpc.h"
#include "CondensedMpcData.h"
#include "FBstabAlgorithm.h"
#include "MpcData.h"
#include "fbstab_mpc_data.h"
#include "fbstab_mpc_emxutil.h"
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 95,    /* lineNo */
  "fbstab_mpc",                        /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\fbstab_mpc.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 97,  /* lineNo */
  "fbstab_mpc",                        /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\fbstab_mpc.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 126, /* lineNo */
  "fbstab_mpc",                        /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\fbstab_mpc.m"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 133, /* lineNo */
  "fbstab_mpc",                        /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\fbstab_mpc.m"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 134, /* lineNo */
  "fbstab_mpc",                        /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\fbstab_mpc.m"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 136, /* lineNo */
  "fbstab_mpc",                        /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\fbstab_mpc.m"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 137, /* lineNo */
  "fbstab_mpc",                        /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\fbstab_mpc.m"/* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 139, /* lineNo */
  "fbstab_mpc",                        /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\fbstab_mpc.m"/* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 140, /* lineNo */
  "fbstab_mpc",                        /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\fbstab_mpc.m"/* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 141, /* lineNo */
  "fbstab_mpc",                        /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\fbstab_mpc.m"/* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 142, /* lineNo */
  "fbstab_mpc",                        /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\fbstab_mpc.m"/* pathName */
};

static emlrtRSInfo l_emlrtRSI = { 145, /* lineNo */
  "fbstab_mpc",                        /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\fbstab_mpc.m"/* pathName */
};

static emlrtRSInfo m_emlrtRSI = { 158, /* lineNo */
  "fbstab_pcg",                        /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\fbstab_mpc.m"/* pathName */
};

static emlrtRSInfo n_emlrtRSI = { 170, /* lineNo */
  "fbstab_pcg",                        /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\fbstab_mpc.m"/* pathName */
};

static emlrtRSInfo o_emlrtRSI = { 175, /* lineNo */
  "fbstab_pcg",                        /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\fbstab_mpc.m"/* pathName */
};

static emlrtRSInfo ab_emlrtRSI = { 20, /* lineNo */
  "CondensedVariable/CondensedVariable",/* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\CondensedVariable.m"/* pathName */
};

static emlrtRSInfo og_emlrtRSI = { 196,/* lineNo */
  "recover_costates",                  /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\fbstab_mpc.m"/* pathName */
};

static emlrtRSInfo pg_emlrtRSI = { 104,/* lineNo */
  "fbstab_mpc",                        /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\fbstab_mpc.m"/* pathName */
};

static emlrtRSInfo ah_emlrtRSI = { 120,/* lineNo */
  "fbstab_riccati",                    /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\fbstab_mpc.m"/* pathName */
};

static emlrtRTEInfo l_emlrtRTEI = { 87,/* lineNo */
  18,                                  /* colNo */
  "FBstabAlgorithm",                   /* fName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\FBstabAlgorithm.m"/* pName */
};

static emlrtRTEInfo m_emlrtRTEI = { 126,/* lineNo */
  2,                                   /* colNo */
  "fbstab_mpc",                        /* fName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\fbstab_mpc.m"/* pName */
};

/* Function Declarations */
static void fbstab_pcg(const emlrtStack *sp, const real_T x0_v[124], const
  real_T x0_z[155], const real_T mpc_Q[496], const real_T mpc_R[31], const
  real_T mpc_S[124], const real_T mpc_A[480], const real_T mpc_B[120], const
  real_T mpc_c[120], const real_T mpc_E[496], const real_T mpc_L[124], const
  real_T mpc_d[124], const real_T mpc_q[124], const real_T mpc_r[31], const
  real_T mpc_x0[4], const struct2_T opts, struct3_T *x, struct4_T *out);
static void fbstab_riccati(const emlrtStack *sp, const real_T x0_v[124], const
  real_T x0_l[124], const real_T x0_z[155], const real_T mpc_Q[496], const
  real_T mpc_R[31], const real_T mpc_S[124], const real_T mpc_A[480], const
  real_T mpc_B[120], const real_T mpc_c[120], const real_T mpc_E[496], const
  real_T mpc_L[124], const real_T mpc_d[124], const real_T mpc_q[124], const
  real_T mpc_r[31], const real_T mpc_x0[4], const struct2_T opts, struct3_T *x,
  struct4_T *out);
static void recover_costates(const emlrtStack *sp, const real_T z[155], const
  real_T v[124], const CondensedMpcData *data, real_T l[124]);

/* Function Definitions */
static void fbstab_pcg(const emlrtStack *sp, const real_T x0_v[124], const
  real_T x0_z[155], const real_T mpc_Q[496], const real_T mpc_R[31], const
  real_T mpc_S[124], const real_T mpc_A[480], const real_T mpc_B[120], const
  real_T mpc_c[120], const real_T mpc_E[496], const real_T mpc_L[124], const
  real_T mpc_d[124], const real_T mpc_q[124], const real_T mpc_r[31], const
  real_T mpc_x0[4], const struct2_T opts, struct3_T *x, struct4_T *out)
{
  CondensedMpcData data;
  ImplicitConjugateGradient linsys;
  CondensedFeasibility feas;
  CondensedResidual r1;
  CondensedResidual r2;
  CondensedVariable x1;
  int32_T i;
  real_T b_x1[124];
  CondensedVariable x2;
  CondensedVariable x3;
  CondensedVariable x4;
  emxArray_real_T *b_x;
  FBstabAlgorithm fbstab;
  int32_T loop_ub;
  real_T y;
  real_T absx;
  real_T xx[124];
  real_T y0_z[31];
  real_T y_z[31];
  int32_T b_i;
  real_T b_xx[155];
  real_T a[4];
  int32_T a_tmp;
  real_T b_a[16];
  int32_T b_a_tmp;
  int32_T c_a_tmp;
  real_T c_a[4];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInitStruct_CondensedMpcData(sp, &data, &m_emlrtRTEI, true);

  /*  create QP data structure */
  st.site = &c_emlrtRSI;
  c_CondensedMpcData_CondensedMpc(&st, &data, mpc_Q, mpc_R, mpc_S, mpc_q, mpc_r,
    mpc_A, mpc_B, mpc_c, mpc_x0, mpc_E, mpc_L, mpc_d);

  /*  get sizes */
  /*  components objects */
  st.site = &d_emlrtRSI;
  linsys.ztol = 2.2204460492503131E-14;
  linsys.alpha = 0.95;
  linsys.data = &data;
  memset(&linsys.gamma[0], 0, 124U * sizeof(real_T));
  memset(&linsys.mus[0], 0, 124U * sizeof(real_T));
  memset(&linsys.T[0], 0, 31U * sizeof(real_T));
  st.site = &e_emlrtRSI;

  /*  */
  /*  https://github.com/dliaomcp/fbstab-matlab */
  /*  */
  /*  and is subject to the BSD-3-Clause license  */
  /*  Performs feasibility checking for QPs with equality constraints */
  feas.data = &data;
  memset(&feas.z1[0], 0, 31U * sizeof(real_T));
  memset(&feas.v1[0], 0, 124U * sizeof(real_T));
  st.site = &f_emlrtRSI;
  r1.znorm = 0.0;
  r1.vnorm = 0.0;

  /*  */
  /*  https://github.com/dliaomcp/fbstab-matlab */
  /*  */
  /*  and is subject to the BSD-3-Clause license  */
  /*  Computes and stores residuals for QPs */
  /*  without equality constraints. */
  /*  stationarity residual */
  /*  complimentarity residual */
  /*  cached norms */
  r1.data = &data;
  memset(&r1.rz[0], 0, 31U * sizeof(real_T));
  memset(&r1.rv[0], 0, 124U * sizeof(real_T));
  r1.alpha = 0.95;
  st.site = &g_emlrtRSI;
  r2.znorm = 0.0;
  r2.vnorm = 0.0;

  /*  */
  /*  https://github.com/dliaomcp/fbstab-matlab */
  /*  */
  /*  and is subject to the BSD-3-Clause license  */
  /*  Computes and stores residuals for QPs */
  /*  without equality constraints. */
  /*  stationarity residual */
  /*  complimentarity residual */
  /*  cached norms */
  r2.data = &data;
  memset(&r2.rz[0], 0, 31U * sizeof(real_T));
  memset(&r2.rv[0], 0, 124U * sizeof(real_T));
  r2.alpha = 0.95;
  st.site = &h_emlrtRSI;

  /*  */
  /*  https://github.com/dliaomcp/fbstab-matlab */
  /*  */
  /*  and is subject to the BSD-3-Clause license  */
  /*  This class implements primal-dual variables for QPs with  */
  /*  only inequality constraints. */
  /*  primal */
  /*  inequlity duals */
  /*  inequality margin */
  /*  data object */
  x1.data = &data;

  /*  Fill with all zeros. */
  memset(&x1.z[0], 0, 31U * sizeof(real_T));
  memset(&x1.v[0], 0, 124U * sizeof(real_T));
  for (i = 0; i < 124; i++) {
    b_x1[i] = x1.data->b[i];
  }

  memcpy(&x1.y[0], &b_x1[0], 124U * sizeof(real_T));
  st.site = &i_emlrtRSI;

  /*  */
  /*  https://github.com/dliaomcp/fbstab-matlab */
  /*  */
  /*  and is subject to the BSD-3-Clause license  */
  /*  This class implements primal-dual variables for QPs with  */
  /*  only inequality constraints. */
  /*  primal */
  /*  inequlity duals */
  /*  inequality margin */
  /*  data object */
  x2.data = &data;

  /*  Fill with all zeros. */
  memset(&x2.z[0], 0, 31U * sizeof(real_T));
  memset(&x2.v[0], 0, 124U * sizeof(real_T));
  for (i = 0; i < 124; i++) {
    b_x1[i] = x2.data->b[i];
  }

  memcpy(&x2.y[0], &b_x1[0], 124U * sizeof(real_T));
  st.site = &j_emlrtRSI;

  /*  */
  /*  https://github.com/dliaomcp/fbstab-matlab */
  /*  */
  /*  and is subject to the BSD-3-Clause license  */
  /*  This class implements primal-dual variables for QPs with  */
  /*  only inequality constraints. */
  /*  primal */
  /*  inequlity duals */
  /*  inequality margin */
  /*  data object */
  x3.data = &data;

  /*  Fill with all zeros. */
  memset(&x3.z[0], 0, 31U * sizeof(real_T));
  memset(&x3.v[0], 0, 124U * sizeof(real_T));
  for (i = 0; i < 124; i++) {
    b_x1[i] = x3.data->b[i];
  }

  memcpy(&x3.y[0], &b_x1[0], 124U * sizeof(real_T));
  st.site = &k_emlrtRSI;

  /*  */
  /*  https://github.com/dliaomcp/fbstab-matlab */
  /*  */
  /*  and is subject to the BSD-3-Clause license  */
  /*  This class implements primal-dual variables for QPs with  */
  /*  only inequality constraints. */
  /*  primal */
  /*  inequlity duals */
  /*  inequality margin */
  /*  data object */
  x4.data = &data;
  b_st.site = &ab_emlrtRSI;

  /*  Fill with all zeros. */
  memset(&x4.z[0], 0, 31U * sizeof(real_T));
  memset(&x4.v[0], 0, 124U * sizeof(real_T));
  for (i = 0; i < 124; i++) {
    b_x1[i] = x4.data->b[i];
  }

  memcpy(&x4.y[0], &b_x1[0], 124U * sizeof(real_T));
  emxInit_real_T(&b_st, &b_x, 1, &l_emlrtRTEI, true);

  /*  solver object */
  st.site = &l_emlrtRSI;
  fbstab.sigma = 1.4901161193847656E-8;
  fbstab.sigma_max = 1.4901161193847656E-8;
  fbstab.sigma_min = 1.4901161193847656E-8;
  fbstab.max_newton_iters = 200.0;
  fbstab.max_prox_iters = 100.0;
  fbstab.tol = 1.0E-6;
  fbstab.rtol = 1.0E-12;
  fbstab.dtol = 1.0E-12;
  fbstab.inf_tol = 1.0E-8;
  fbstab.check_infeasibility = true;
  fbstab.alpha = 0.95;
  fbstab.beta = 0.8;
  fbstab.eta = 1.0E-8;
  fbstab.lsmax = 40.0;
  fbstab.max_inner_iters = 50.0;
  fbstab.itol_max = 0.1;
  fbstab.itol_min = 1.0E-12;
  fbstab.itol_red_factor = 0.2;
  fbstab.use_nonmonotone_linesearch = true;
  fbstab.ztol = 0.0;
  fbstab.ltol = 0.0;
  fbstab.vtol = 0.0;
  fbstab.display_level = opts.display_level;

  /*  classdef */
  fbstab.data = &data;
  fbstab.linear_solver = &linsys;
  fbstab.feas_checker = &feas;
  fbstab.rk = &r1;
  fbstab.ri = &r2;
  fbstab.xk = &x1;
  fbstab.xi = &x2;
  fbstab.xp = &x3;
  fbstab.dx = &x4;
  fbstab.rk->alpha = fbstab.alpha;
  fbstab.ri->alpha = fbstab.alpha;
  i = b_x->size[0];
  b_x->size[0] = fbstab.data->f->size[0];
  emxEnsureCapacity_real_T(&st, b_x, i, &l_emlrtRTEI);
  loop_ub = fbstab.data->f->size[0];
  for (i = 0; i < loop_ub; i++) {
    b_x->data[i] = fbstab.data->f->data[i];
  }

  if (b_x->size[0] == 0) {
    y = 0.0;
  } else {
    y = 0.0;
    i = b_x->size[0];
    for (loop_ub = 0; loop_ub < i; loop_ub++) {
      absx = muDoubleScalarAbs(b_x->data[loop_ub]);
      if (muDoubleScalarIsNaN(absx) || (absx > y)) {
        y = absx;
      }
    }
  }

  emxFree_real_T(&b_x);
  fbstab.fnorm = y;
  y = fbstab.data->h;
  fbstab.hnorm = muDoubleScalarAbs(y);
  for (i = 0; i < 124; i++) {
    xx[i] = fbstab.data->b[i];
  }

  y = 0.0;
  for (loop_ub = 0; loop_ub < 124; loop_ub++) {
    absx = muDoubleScalarAbs(xx[loop_ub]);
    if (muDoubleScalarIsNaN(absx) || (absx > y)) {
      y = absx;
    }
  }

  fbstab.bnorm = y;

  /*  extract the controls */
  /*  input for the condensed solver */
  for (i = 0; i < 31; i++) {
    y0_z[i] = x0_z[5 * i + 4];
  }

  /*  call the solver */
  st.site = &m_emlrtRSI;
  FBstabAlgorithm_Solve(&st, &fbstab, x0_v, y0_z, y_z, b_x1, out);
  memcpy(&x->v[0], &b_x1[0], 124U * sizeof(real_T));

  /*  compute the state sequence */
  st.site = &n_emlrtRSI;

  /*  recover the states after solving the condensed problem */
  memset(&xx[0], 0, 124U * sizeof(real_T));
  xx[0] = data.xt[0];
  xx[1] = data.xt[1];
  xx[2] = data.xt[2];
  xx[3] = data.xt[3];
  for (b_i = 0; b_i < 30; b_i++) {
    for (i = 0; i < 4; i++) {
      loop_ub = i << 2;
      a_tmp = loop_ub + (b_i << 4);
      b_a[loop_ub] = data.Ak[a_tmp];
      b_a[loop_ub + 1] = data.Ak[a_tmp + 1];
      b_a[loop_ub + 2] = data.Ak[a_tmp + 2];
      b_a[loop_ub + 3] = data.Ak[a_tmp + 3];
    }

    loop_ub = b_i << 2;
    a[0] = data.Bk[loop_ub];
    a_tmp = loop_ub + 1;
    a[1] = data.Bk[a_tmp];
    b_a_tmp = loop_ub + 2;
    a[2] = data.Bk[b_a_tmp];
    c_a_tmp = loop_ub + 3;
    a[3] = data.Bk[c_a_tmp];
    for (i = 0; i < 4; i++) {
      c_a[i] = ((((b_a[i] * xx[loop_ub] + b_a[i + 4] * xx[a_tmp]) + b_a[i + 8] *
                  xx[b_a_tmp]) + b_a[i + 12] * xx[c_a_tmp]) + a[i] * y_z[b_i]) +
        data.ck[i + loop_ub];
    }

    loop_ub = (b_i + 1) << 2;
    xx[loop_ub] = c_a[0];
    xx[loop_ub + 1] = c_a[1];
    xx[loop_ub + 2] = c_a[2];
    xx[loop_ub + 3] = c_a[3];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }

  for (i = 0; i < 31; i++) {
    loop_ub = i << 2;
    b_xx[5 * i] = xx[loop_ub];
    b_xx[5 * i + 1] = xx[loop_ub + 1];
    b_xx[5 * i + 2] = xx[loop_ub + 2];
    b_xx[5 * i + 3] = xx[loop_ub + 3];
    b_xx[5 * i + 4] = y_z[i];
  }

  memcpy(&x->z[0], &b_xx[0], 155U * sizeof(real_T));

  /*  recover the costates */
  for (i = 0; i < 31; i++) {
    loop_ub = i << 2;
    b_xx[5 * i] = xx[loop_ub];
    b_xx[5 * i + 1] = xx[loop_ub + 1];
    b_xx[5 * i + 2] = xx[loop_ub + 2];
    b_xx[5 * i + 3] = xx[loop_ub + 3];
    b_xx[5 * i + 4] = y_z[i];
  }

  st.site = &o_emlrtRSI;
  recover_costates(&st, b_xx, b_x1, &data, x->l);
  emxFreeStruct_CondensedMpcData(&data);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

static void fbstab_riccati(const emlrtStack *sp, const real_T x0_v[124], const
  real_T x0_l[124], const real_T x0_z[155], const real_T mpc_Q[496], const
  real_T mpc_R[31], const real_T mpc_S[124], const real_T mpc_A[480], const
  real_T mpc_B[120], const real_T mpc_c[120], const real_T mpc_E[496], const
  real_T mpc_L[124], const real_T mpc_d[124], const real_T mpc_q[124], const
  real_T mpc_r[31], const real_T mpc_x0[4], const struct2_T opts, struct3_T *x,
  struct4_T *out)
{
  MpcData data;
  RiccatiLinearSolver linsys;
  FullFeasibility feas;
  FullResidual r1;
  FullResidual r2;
  FullVariable x1;
  int32_T k;
  real_T b_x1[124];
  FullVariable x2;
  FullVariable x3;
  FullVariable x4;
  FBstabAlgorithm_1 fbstab;
  real_T y;
  real_T b_x[155];
  real_T absx;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &pg_emlrtRSI;
  MpcData_MpcData(&st, &data, mpc_Q, mpc_R, mpc_S, mpc_q, mpc_r, mpc_A, mpc_B,
                  mpc_c, mpc_x0, mpc_E, mpc_L, mpc_d);
  linsys.ztol = 2.2204460492503131E-14;
  linsys.alpha = 0.95;

  /*  */
  /*  https://github.com/dliaomcp/fbstab-matlab */
  /*  */
  /*  and is subject to the BSD-3-Clause license  */
  /*  computes solutions of FBstab linear systems */
  /*  using a riccati recursion */
  /*  properties */
  linsys.data = &data;

  /*  The sizes are recomputed to help */
  /*  with code generation. */
  /* methods */
  memset(&linsys.P[0], 0, 124U * sizeof(real_T));
  memset(&linsys.Sigma[0], 0, 31U * sizeof(real_T));
  memset(&linsys.M[0], 0, 496U * sizeof(real_T));
  memset(&linsys.L[0], 0, 496U * sizeof(real_T));
  memset(&linsys.SM[0], 0, 124U * sizeof(real_T));
  memset(&linsys.AM[0], 0, 496U * sizeof(real_T));
  memset(&linsys.h[0], 0, 124U * sizeof(real_T));
  memset(&linsys.theta[0], 0, 124U * sizeof(real_T));

  /*  */
  /*  https://github.com/dliaomcp/fbstab-matlab */
  /*  */
  /*  and is subject to the BSD-3-Clause license  */
  /*  Performs infeasibility checking for QPs with equality constraints. */
  feas.data = &data;

  /*  The sizes are recomputed to help */
  /*  with code generation. */
  /*  The sizes are recomputed to help */
  /*  with code generation. */
  /* methods */
  memset(&feas.z1[0], 0, 155U * sizeof(real_T));
  memset(&feas.l1[0], 0, 124U * sizeof(real_T));
  memset(&feas.v1[0], 0, 124U * sizeof(real_T));
  r1.znorm = 0.0;
  r1.lnorm = 0.0;
  r1.vnorm = 0.0;

  /*  */
  /*  https://github.com/dliaomcp/fbstab-matlab */
  /*  */
  /*  and is subject to the BSD-3-Clause license  */
  /*  a class to compute the residuals for the FBstab solver */
  /*  this one handles the multiple shooting case */
  /*  stationarity residual */
  /*  equality residual */
  /*  complimentarity residual */
  /*  cached norms */
  r1.data = &data;

  /*  The sizes are recomputed to help */
  /*  with code generation. */
  /*  The sizes are recomputed to help */
  /*  with code generation. */
  /* methods */
  memset(&r1.rz[0], 0, 155U * sizeof(real_T));
  memset(&r1.rl[0], 0, 124U * sizeof(real_T));
  memset(&r1.rv[0], 0, 124U * sizeof(real_T));
  r1.alpha = 0.95;
  r2.znorm = 0.0;
  r2.lnorm = 0.0;
  r2.vnorm = 0.0;

  /*  */
  /*  https://github.com/dliaomcp/fbstab-matlab */
  /*  */
  /*  and is subject to the BSD-3-Clause license  */
  /*  a class to compute the residuals for the FBstab solver */
  /*  this one handles the multiple shooting case */
  /*  stationarity residual */
  /*  equality residual */
  /*  complimentarity residual */
  /*  cached norms */
  r2.data = &data;

  /*  The sizes are recomputed to help */
  /*  with code generation. */
  /*  The sizes are recomputed to help */
  /*  with code generation. */
  /* methods */
  memset(&r2.rz[0], 0, 155U * sizeof(real_T));
  memset(&r2.rl[0], 0, 124U * sizeof(real_T));
  memset(&r2.rv[0], 0, 124U * sizeof(real_T));
  r2.alpha = 0.95;

  /*  */
  /*  https://github.com/dliaomcp/fbstab-matlab */
  /*  */
  /*  and is subject to the BSD-3-Clause license  */
  /*  This class implements primal-dual variables for QPs with  */
  /*  equality and inequality constraints. */
  /*  primal */
  /*  equlity duals */
  /*  inequlity duals */
  /*  inequality margin */
  /*  data object */
  x1.data = &data;

  /*  Fill with all zeros. */
  /*  The sizes are recomputed to help */
  /*  with code generation. */
  /*  The sizes are recomputed to help */
  /*  with code generation. */
  /* methods */
  memset(&x1.z[0], 0, 155U * sizeof(real_T));
  memset(&x1.l[0], 0, 124U * sizeof(real_T));
  memset(&x1.v[0], 0, 124U * sizeof(real_T));
  for (k = 0; k < 124; k++) {
    b_x1[k] = x1.data->b[k];
  }

  memcpy(&x1.y[0], &b_x1[0], 124U * sizeof(real_T));

  /*  */
  /*  https://github.com/dliaomcp/fbstab-matlab */
  /*  */
  /*  and is subject to the BSD-3-Clause license  */
  /*  This class implements primal-dual variables for QPs with  */
  /*  equality and inequality constraints. */
  /*  primal */
  /*  equlity duals */
  /*  inequlity duals */
  /*  inequality margin */
  /*  data object */
  x2.data = &data;

  /*  Fill with all zeros. */
  /*  The sizes are recomputed to help */
  /*  with code generation. */
  /*  The sizes are recomputed to help */
  /*  with code generation. */
  /* methods */
  memset(&x2.z[0], 0, 155U * sizeof(real_T));
  memset(&x2.l[0], 0, 124U * sizeof(real_T));
  memset(&x2.v[0], 0, 124U * sizeof(real_T));
  for (k = 0; k < 124; k++) {
    b_x1[k] = x2.data->b[k];
  }

  memcpy(&x2.y[0], &b_x1[0], 124U * sizeof(real_T));

  /*  */
  /*  https://github.com/dliaomcp/fbstab-matlab */
  /*  */
  /*  and is subject to the BSD-3-Clause license  */
  /*  This class implements primal-dual variables for QPs with  */
  /*  equality and inequality constraints. */
  /*  primal */
  /*  equlity duals */
  /*  inequlity duals */
  /*  inequality margin */
  /*  data object */
  x3.data = &data;

  /*  Fill with all zeros. */
  /*  The sizes are recomputed to help */
  /*  with code generation. */
  /*  The sizes are recomputed to help */
  /*  with code generation. */
  /* methods */
  memset(&x3.z[0], 0, 155U * sizeof(real_T));
  memset(&x3.l[0], 0, 124U * sizeof(real_T));
  memset(&x3.v[0], 0, 124U * sizeof(real_T));
  for (k = 0; k < 124; k++) {
    b_x1[k] = x3.data->b[k];
  }

  memcpy(&x3.y[0], &b_x1[0], 124U * sizeof(real_T));

  /*  */
  /*  https://github.com/dliaomcp/fbstab-matlab */
  /*  */
  /*  and is subject to the BSD-3-Clause license  */
  /*  This class implements primal-dual variables for QPs with  */
  /*  equality and inequality constraints. */
  /*  primal */
  /*  equlity duals */
  /*  inequlity duals */
  /*  inequality margin */
  /*  data object */
  x4.data = &data;

  /*  Fill with all zeros. */
  /*  The sizes are recomputed to help */
  /*  with code generation. */
  /*  The sizes are recomputed to help */
  /*  with code generation. */
  /* methods */
  memset(&x4.z[0], 0, 155U * sizeof(real_T));
  memset(&x4.l[0], 0, 124U * sizeof(real_T));
  memset(&x4.v[0], 0, 124U * sizeof(real_T));
  for (k = 0; k < 124; k++) {
    b_x1[k] = x4.data->b[k];
  }

  memcpy(&x4.y[0], &b_x1[0], 124U * sizeof(real_T));

  /*  solver object */
  fbstab.sigma = 1.4901161193847656E-8;
  fbstab.sigma_max = 1.4901161193847656E-8;
  fbstab.sigma_min = 1.4901161193847656E-8;
  fbstab.max_newton_iters = 200.0;
  fbstab.max_prox_iters = 100.0;
  fbstab.tol = 1.0E-6;
  fbstab.rtol = 1.0E-12;
  fbstab.dtol = 1.0E-12;
  fbstab.inf_tol = 1.0E-8;
  fbstab.check_infeasibility = true;
  fbstab.alpha = 0.95;
  fbstab.beta = 0.8;
  fbstab.eta = 1.0E-8;
  fbstab.lsmax = 40.0;
  fbstab.max_inner_iters = 50.0;
  fbstab.itol_max = 0.1;
  fbstab.itol_min = 1.0E-12;
  fbstab.itol_red_factor = 0.2;
  fbstab.use_nonmonotone_linesearch = true;
  fbstab.ztol = 0.0;
  fbstab.ltol = 0.0;
  fbstab.vtol = 0.0;
  fbstab.display_level = opts.display_level;

  /*  classdef */
  fbstab.data = &data;
  fbstab.linear_solver = &linsys;
  fbstab.feas_checker = &feas;
  fbstab.rk = &r1;
  fbstab.ri = &r2;
  fbstab.xk = &x1;
  fbstab.xi = &x2;
  fbstab.xp = &x3;
  fbstab.dx = &x4;
  fbstab.rk->alpha = fbstab.alpha;
  fbstab.ri->alpha = fbstab.alpha;
  for (k = 0; k < 155; k++) {
    b_x[k] = fbstab.data->f[k];
  }

  y = 0.0;
  for (k = 0; k < 155; k++) {
    absx = muDoubleScalarAbs(b_x[k]);
    if (muDoubleScalarIsNaN(absx) || (absx > y)) {
      y = absx;
    }
  }

  fbstab.fnorm = y;
  for (k = 0; k < 124; k++) {
    b_x1[k] = fbstab.data->h[k];
  }

  y = 0.0;
  for (k = 0; k < 124; k++) {
    absx = muDoubleScalarAbs(b_x1[k]);
    if (muDoubleScalarIsNaN(absx) || (absx > y)) {
      y = absx;
    }
  }

  fbstab.hnorm = y;
  for (k = 0; k < 124; k++) {
    b_x1[k] = fbstab.data->b[k];
  }

  y = 0.0;
  for (k = 0; k < 124; k++) {
    absx = muDoubleScalarAbs(b_x1[k]);
    if (muDoubleScalarIsNaN(absx) || (absx > y)) {
      y = absx;
    }
  }

  fbstab.bnorm = y;
  st.site = &ah_emlrtRSI;
  b_FBstabAlgorithm_Solve(&st, &fbstab, x0_v, x0_l, x0_z, x->z, x->l, x->v, out);
}

static void recover_costates(const emlrtStack *sp, const real_T z[155], const
  real_T v[124], const CondensedMpcData *data, real_T l[124])
{
  int32_T i;
  int32_T b_i;
  real_T pp[155];
  real_T dv[155];
  int32_T data_tmp;
  real_T b_data[20];
  real_T y[155];
  int32_T i1;
  real_T c_data[4];
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;

  /*  recover the co-states (eq duals) */
  /*  after solving the condensed problems */
  /*  compute the lagrangian of the multiple shooting problem */
  st.site = &og_emlrtRSI;
  for (i = 0; i < 31; i++) {
    for (b_i = 0; b_i < 4; b_i++) {
      data_tmp = b_i + (i << 4);
      b_data[5 * b_i] = data->E[data_tmp];
      b_data[5 * b_i + 1] = data->E[data_tmp + 4];
      b_data[5 * b_i + 2] = data->E[data_tmp + 8];
      b_data[5 * b_i + 3] = data->E[data_tmp + 12];
      b_data[5 * b_i + 4] = data->L[b_i + (i << 2)];
    }

    b_i = i << 2;
    for (data_tmp = 0; data_tmp < 5; data_tmp++) {
      y[data_tmp + 5 * i] = ((b_data[data_tmp] * v[b_i] + b_data[data_tmp + 5] *
        v[b_i + 1]) + b_data[data_tmp + 10] * v[b_i + 2]) + b_data[data_tmp + 15]
        * v[b_i + 3];
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }

  st.site = &og_emlrtRSI;
  CondensedMpcData_f_ms(&st, data, pp);
  st.site = &og_emlrtRSI;
  CondensedMpcData_H_ms(&st, data, z, dv);
  for (b_i = 0; b_i < 155; b_i++) {
    pp[b_i] = -((pp[b_i] + dv[b_i]) + y[b_i]);
  }

  memset(&l[0], 0, 124U * sizeof(real_T));
  l[120] = -pp[150];
  l[121] = -pp[151];
  l[122] = -pp[152];
  l[123] = -pp[153];
  for (i = 0; i < 30; i++) {
    b_i = (30 - i) << 2;
    for (data_tmp = 0; data_tmp < 4; data_tmp++) {
      i1 = (data_tmp << 2) + ((29 - i) << 4);
      c_data[data_tmp] = (((data->Ak[i1] * l[b_i] + data->Ak[i1 + 1] * l[b_i + 1])
                           + data->Ak[i1 + 2] * l[b_i + 2]) + data->Ak[i1 + 3] *
                          l[b_i + 3]) - pp[data_tmp + 5 * (29 - i)];
    }

    data_tmp = (29 - i) << 2;
    l[data_tmp] = c_data[0];
    l[data_tmp + 1] = c_data[1];
    l[data_tmp + 2] = c_data[2];
    l[data_tmp + 3] = c_data[3];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }
}

void fbstab_mpc(const emlrtStack *sp, const struct0_T *x0, const struct1_T *mpc,
                const struct2_T *opts, struct3_T *x, real_T *u, struct4_T *out)
{
  char_T a[3];
  int32_T ret;
  static const char_T b[3] = { 'p', 'c', 'g' };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;

  /*  fbstab_mpc: Proximally Stabilized Semismooth Method for solving QPs */
  /*  [x,u,out] = fbstab_mpc(x0,mpc,opts) attempts to solve the  */
  /*  following quadratic programming problem: */
  /*  */
  /*  min.  \sum_{i=0}^N 1/2 [x(i)]' * [Q(i) S(i)'] [x(i)] + [q(i)]'*[x(i)] */
  /*                         [u(i)]    [S(i) R(i) ] [u(i)]   [r(i)]  [u(i)] */
  /*  s.t.  x(i+1) = A(i)*x(i) + B(i) u(i) + c(i), i = 0 ... N-1 */
  /*        x(0) = x0 */
  /*        E(i)*x(i) + L(i)*u(i) + d(i) <= 0,     i = 0 ... N */
  /*  */
  /*  Where [Q(i),S(i)';S(i),R(i)] is positive semidefinite */
  /*   */
  /*  Aside from convexity there are no assumptions made about the problem */
  /*  This method can detect unboundedness/infeasibility */
  /*  and exploit arbitrary initial guesses.  */
  /*  */
  /*  Inputs:  */
  /*  x0:  A structure with the following fields */
  /* 	z: primal initial guess, arranged as z = [x0;u0,...,uN;xN],  */
  /* 	l: co-state initial guess */
  /* 	v: inequality dual initial guess */
  /*  */
  /*  mpc: A structure with the following fields */
  /*  	Q = Q0,Q1,... \in [nx,nx,N+1] */
  /*  	R = R0,R1,... \in [nu,nu,N+1] */
  /*  	S = S0,S1,... \in [nu,nx,N+1] */
  /*    q = q0,q1,... \in [nx,N+1] */
  /* 	r = r0,r1,... \in [nu,N+1] */
  /* 	 */
  /* 	A = A0,A1,... \in [nx,nx,N] */
  /* 	B = B0,B1,... \in [nx,nu,N] */
  /*    c = c0,c1,... \in [nx,N] */
  /* 	x0 \in [nx,1] */
  /*  */
  /* 	E = E0,E1,... \in [nc,nx,N+1] */
  /* 	L = L0,L1,... \in [nc,nu,N+1] */
  /* 	d = d0,d1,... \in [nc,N+1] */
  /*   */
  /*  opts: Options structure, see fbstab_options.m */
  /*   */
  /*  Outputs: */
  /*  x: Structure with the following fields */
  /* 	z: primal solution z = [x0;u0;...;uN;xN] */
  /*  	l: costates */
  /*  	v: inequality duals */
  /*   */
  /*  u: The MPC control action (u0) */
  /*   */
  /*  out: Structure with the following fields */
  /*  	prox_iters: number of proximal iterations  */
  /*  	newton_iters: number of newton iterations */
  /*  	res:  KKT residual */
  /*  	eflag: Exit flag */
  /*  		 0: success */
  /*  		-1: Maximum number of iterations exceeded */
  /* 		-2: Algorithm stalled */
  /*  		-3: Problem is infeasible */
  /*  		-4: Problem is unbounded below (dual infeasible) */
  /*  		-5: Problem is primal and dual infeasible */
  /*  */
  /*  Details about the the FBstab algorithm can be found at: */
  /*  https://arxiv.org/abs/1901.04046 */
  /*  */
  /*  This file is part of the fbstab-matlab library */
  /*  */
  /*  https://github.com/dliaomcp/fbstab-matlab */
  /*  */
  /*  and is subject to the BSD-3-Clause license  */
  /* Copyright 2018-2019 University of Michigan */
  /*  Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met: */
  /*  1. Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer. */
  /*  2. Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution. */
  /*  3. Neither the name of the copyright holder nor the names of its contributors may be used to endorse or promote products derived from this software without specific prior written permission. */
  /*  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE. */
  /*  default linear solver is the riccati method */
  a[0] = opts->linear_solver[0];
  a[1] = opts->linear_solver[1];
  a[2] = opts->linear_solver[2];
  ret = memcmp(&a[0], &b[0], 3);
  if (ret == 0) {
    ret = 0;
  } else {
    ret = -1;
  }

  switch (ret) {
   case 0:
    st.site = &emlrtRSI;
    fbstab_pcg(&st, x0->v, x0->z, mpc->Q, mpc->R, mpc->S, mpc->A, mpc->B, mpc->c,
               mpc->E, mpc->L, mpc->d, mpc->q, mpc->r, mpc->x0, *opts, x, out);
    break;

   default:
    st.site = &b_emlrtRSI;
    fbstab_riccati(&st, x0->v, x0->l, x0->z, mpc->Q, mpc->R, mpc->S, mpc->A,
                   mpc->B, mpc->c, mpc->E, mpc->L, mpc->d, mpc->q, mpc->r,
                   mpc->x0, *opts, x, out);
    break;
  }

  *u = x->z[4];
}

/* End of code generation (fbstab_mpc.c) */
