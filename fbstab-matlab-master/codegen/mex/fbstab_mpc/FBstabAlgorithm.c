/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FBstabAlgorithm.c
 *
 * Code generation for function 'FBstabAlgorithm'
 *
 */

/* Include files */
#include "FBstabAlgorithm.h"
#include "CondensedFeasibility.h"
#include "CondensedMpcData.h"
#include "CondensedResidual.h"
#include "CondensedVariable.h"
#include "FullFeasibility.h"
#include "FullResidual.h"
#include "FullVariable.h"
#include "ImplicitConjugateGradient.h"
#include "MpcData.h"
#include "RiccatiLinearSolver.h"
#include "fbstab_mpc.h"
#include "fbstab_mpc_data.h"
#include "fbstab_mpc_mexutil.h"
#include "mwmathutil.h"
#include "norm.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo db_emlrtRSI = { 210,/* lineNo */
  "FBstabAlgorithm/Solve",             /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\FBstabAlgorithm.m"/* pathName */
};

static emlrtRSInfo eb_emlrtRSI = { 209,/* lineNo */
  "FBstabAlgorithm/Solve",             /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\FBstabAlgorithm.m"/* pathName */
};

static emlrtRSInfo fb_emlrtRSI = { 208,/* lineNo */
  "FBstabAlgorithm/Solve",             /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\FBstabAlgorithm.m"/* pathName */
};

static emlrtRSInfo gb_emlrtRSI = { 207,/* lineNo */
  "FBstabAlgorithm/Solve",             /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\FBstabAlgorithm.m"/* pathName */
};

static emlrtRSInfo hb_emlrtRSI = { 202,/* lineNo */
  "FBstabAlgorithm/Solve",             /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\FBstabAlgorithm.m"/* pathName */
};

static emlrtRSInfo ib_emlrtRSI = { 199,/* lineNo */
  "FBstabAlgorithm/Solve",             /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\FBstabAlgorithm.m"/* pathName */
};

static emlrtRSInfo jb_emlrtRSI = { 193,/* lineNo */
  "FBstabAlgorithm/Solve",             /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\FBstabAlgorithm.m"/* pathName */
};

static emlrtRSInfo kb_emlrtRSI = { 192,/* lineNo */
  "FBstabAlgorithm/Solve",             /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\FBstabAlgorithm.m"/* pathName */
};

static emlrtRSInfo lb_emlrtRSI = { 191,/* lineNo */
  "FBstabAlgorithm/Solve",             /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\FBstabAlgorithm.m"/* pathName */
};

static emlrtRSInfo mb_emlrtRSI = { 187,/* lineNo */
  "FBstabAlgorithm/Solve",             /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\FBstabAlgorithm.m"/* pathName */
};

static emlrtRSInfo nb_emlrtRSI = { 186,/* lineNo */
  "FBstabAlgorithm/Solve",             /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\FBstabAlgorithm.m"/* pathName */
};

static emlrtRSInfo ob_emlrtRSI = { 185,/* lineNo */
  "FBstabAlgorithm/Solve",             /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\FBstabAlgorithm.m"/* pathName */
};

static emlrtRSInfo pb_emlrtRSI = { 181,/* lineNo */
  "FBstabAlgorithm/Solve",             /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\FBstabAlgorithm.m"/* pathName */
};

static emlrtRSInfo qb_emlrtRSI = { 180,/* lineNo */
  "FBstabAlgorithm/Solve",             /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\FBstabAlgorithm.m"/* pathName */
};

static emlrtRSInfo rb_emlrtRSI = { 179,/* lineNo */
  "FBstabAlgorithm/Solve",             /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\FBstabAlgorithm.m"/* pathName */
};

static emlrtRSInfo sb_emlrtRSI = { 176,/* lineNo */
  "FBstabAlgorithm/Solve",             /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\FBstabAlgorithm.m"/* pathName */
};

static emlrtRSInfo tb_emlrtRSI = { 174,/* lineNo */
  "FBstabAlgorithm/Solve",             /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\FBstabAlgorithm.m"/* pathName */
};

static emlrtRSInfo ub_emlrtRSI = { 173,/* lineNo */
  "FBstabAlgorithm/Solve",             /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\FBstabAlgorithm.m"/* pathName */
};

static emlrtRSInfo vb_emlrtRSI = { 152,/* lineNo */
  "FBstabAlgorithm/Solve",             /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\FBstabAlgorithm.m"/* pathName */
};

static emlrtRSInfo wb_emlrtRSI = { 148,/* lineNo */
  "FBstabAlgorithm/Solve",             /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\FBstabAlgorithm.m"/* pathName */
};

static emlrtRSInfo xb_emlrtRSI = { 147,/* lineNo */
  "FBstabAlgorithm/Solve",             /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\FBstabAlgorithm.m"/* pathName */
};

static emlrtRSInfo yb_emlrtRSI = { 135,/* lineNo */
  "FBstabAlgorithm/Solve",             /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\FBstabAlgorithm.m"/* pathName */
};

static emlrtRSInfo ac_emlrtRSI = { 134,/* lineNo */
  "FBstabAlgorithm/Solve",             /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\FBstabAlgorithm.m"/* pathName */
};

static emlrtRSInfo bc_emlrtRSI = { 132,/* lineNo */
  "FBstabAlgorithm/Solve",             /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\FBstabAlgorithm.m"/* pathName */
};

static emlrtRSInfo cc_emlrtRSI = { 131,/* lineNo */
  "FBstabAlgorithm/Solve",             /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\FBstabAlgorithm.m"/* pathName */
};

static emlrtRSInfo dc_emlrtRSI = { 126,/* lineNo */
  "FBstabAlgorithm/Solve",             /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\FBstabAlgorithm.m"/* pathName */
};

static emlrtRSInfo ec_emlrtRSI = { 110,/* lineNo */
  "FBstabAlgorithm/Solve",             /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\FBstabAlgorithm.m"/* pathName */
};

static emlrtRSInfo fc_emlrtRSI = { 107,/* lineNo */
  "FBstabAlgorithm/Solve",             /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\FBstabAlgorithm.m"/* pathName */
};

static emlrtRSInfo gc_emlrtRSI = { 103,/* lineNo */
  "FBstabAlgorithm/Solve",             /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\FBstabAlgorithm.m"/* pathName */
};

static emlrtRSInfo hc_emlrtRSI = { 102,/* lineNo */
  "FBstabAlgorithm/Solve",             /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\FBstabAlgorithm.m"/* pathName */
};

static emlrtRSInfo ic_emlrtRSI = { 28, /* lineNo */
  "CondensedVariable/StructRead",      /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\CondensedVariable.m"/* pathName */
};

static emlrtRSInfo lc_emlrtRSI = { 51, /* lineNo */
  "CondensedVariable/ones",            /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\CondensedVariable.m"/* pathName */
};

static emlrtRSInfo tc_emlrtRSI = { 45, /* lineNo */
  "mpower",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\ops\\mpower.m"/* pathName */
};

static emlrtRSInfo uc_emlrtRSI = { 55, /* lineNo */
  "power",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pathName */
};

static emlrtRSInfo vc_emlrtRSI = { 359,/* lineNo */
  "FBstabAlgorithm/PrintIterationHeader",/* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\FBstabAlgorithm.m"/* pathName */
};

static emlrtRSInfo wc_emlrtRSI = { 38, /* lineNo */
  "fprintf",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m"/* pathName */
};

static emlrtRSInfo xc_emlrtRSI = { 376,/* lineNo */
  "FBstabAlgorithm/PrintDetailedHeader",/* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\FBstabAlgorithm.m"/* pathName */
};

static emlrtRSInfo yc_emlrtRSI = { 378,/* lineNo */
  "FBstabAlgorithm/PrintDetailedHeader",/* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\FBstabAlgorithm.m"/* pathName */
};

static emlrtRSInfo ad_emlrtRSI = { 365,/* lineNo */
  "FBstabAlgorithm/PrintIterationLine",/* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\FBstabAlgorithm.m"/* pathName */
};

static emlrtRSInfo bd_emlrtRSI = { 368,/* lineNo */
  "FBstabAlgorithm/PrintIterationLine",/* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\FBstabAlgorithm.m"/* pathName */
};

static emlrtRSInfo cd_emlrtRSI = { 234,/* lineNo */
  "FBstabAlgorithm/SolveSubproblemFBRS",/* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\FBstabAlgorithm.m"/* pathName */
};

static emlrtRSInfo dd_emlrtRSI = { 237,/* lineNo */
  "FBstabAlgorithm/SolveSubproblemFBRS",/* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\FBstabAlgorithm.m"/* pathName */
};

static emlrtRSInfo ed_emlrtRSI = { 238,/* lineNo */
  "FBstabAlgorithm/SolveSubproblemFBRS",/* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\FBstabAlgorithm.m"/* pathName */
};

static emlrtRSInfo fd_emlrtRSI = { 240,/* lineNo */
  "FBstabAlgorithm/SolveSubproblemFBRS",/* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\FBstabAlgorithm.m"/* pathName */
};

static emlrtRSInfo gd_emlrtRSI = { 241,/* lineNo */
  "FBstabAlgorithm/SolveSubproblemFBRS",/* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\FBstabAlgorithm.m"/* pathName */
};

static emlrtRSInfo hd_emlrtRSI = { 242,/* lineNo */
  "FBstabAlgorithm/SolveSubproblemFBRS",/* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\FBstabAlgorithm.m"/* pathName */
};

static emlrtRSInfo id_emlrtRSI = { 243,/* lineNo */
  "FBstabAlgorithm/SolveSubproblemFBRS",/* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\FBstabAlgorithm.m"/* pathName */
};

static emlrtRSInfo jd_emlrtRSI = { 244,/* lineNo */
  "FBstabAlgorithm/SolveSubproblemFBRS",/* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\FBstabAlgorithm.m"/* pathName */
};

static emlrtRSInfo kd_emlrtRSI = { 246,/* lineNo */
  "FBstabAlgorithm/SolveSubproblemFBRS",/* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\FBstabAlgorithm.m"/* pathName */
};

static emlrtRSInfo ld_emlrtRSI = { 248,/* lineNo */
  "FBstabAlgorithm/SolveSubproblemFBRS",/* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\FBstabAlgorithm.m"/* pathName */
};

static emlrtRSInfo md_emlrtRSI = { 250,/* lineNo */
  "FBstabAlgorithm/SolveSubproblemFBRS",/* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\FBstabAlgorithm.m"/* pathName */
};

static emlrtRSInfo nd_emlrtRSI = { 252,/* lineNo */
  "FBstabAlgorithm/SolveSubproblemFBRS",/* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\FBstabAlgorithm.m"/* pathName */
};

static emlrtRSInfo od_emlrtRSI = { 253,/* lineNo */
  "FBstabAlgorithm/SolveSubproblemFBRS",/* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\FBstabAlgorithm.m"/* pathName */
};

static emlrtRSInfo pd_emlrtRSI = { 257,/* lineNo */
  "FBstabAlgorithm/SolveSubproblemFBRS",/* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\FBstabAlgorithm.m"/* pathName */
};

static emlrtRSInfo qd_emlrtRSI = { 261,/* lineNo */
  "FBstabAlgorithm/SolveSubproblemFBRS",/* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\FBstabAlgorithm.m"/* pathName */
};

static emlrtRSInfo rd_emlrtRSI = { 265,/* lineNo */
  "FBstabAlgorithm/SolveSubproblemFBRS",/* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\FBstabAlgorithm.m"/* pathName */
};

static emlrtRSInfo sd_emlrtRSI = { 266,/* lineNo */
  "FBstabAlgorithm/SolveSubproblemFBRS",/* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\FBstabAlgorithm.m"/* pathName */
};

static emlrtRSInfo td_emlrtRSI = { 267,/* lineNo */
  "FBstabAlgorithm/SolveSubproblemFBRS",/* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\FBstabAlgorithm.m"/* pathName */
};

static emlrtRSInfo ud_emlrtRSI = { 268,/* lineNo */
  "FBstabAlgorithm/SolveSubproblemFBRS",/* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\FBstabAlgorithm.m"/* pathName */
};

static emlrtRSInfo vd_emlrtRSI = { 274,/* lineNo */
  "FBstabAlgorithm/SolveSubproblemFBRS",/* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\FBstabAlgorithm.m"/* pathName */
};

static emlrtRSInfo wd_emlrtRSI = { 277,/* lineNo */
  "FBstabAlgorithm/SolveSubproblemFBRS",/* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\FBstabAlgorithm.m"/* pathName */
};

static emlrtRSInfo xd_emlrtRSI = { 278,/* lineNo */
  "FBstabAlgorithm/SolveSubproblemFBRS",/* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\FBstabAlgorithm.m"/* pathName */
};

static emlrtRSInfo yd_emlrtRSI = { 282,/* lineNo */
  "FBstabAlgorithm/SolveSubproblemFBRS",/* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\FBstabAlgorithm.m"/* pathName */
};

static emlrtRSInfo ae_emlrtRSI = { 284,/* lineNo */
  "FBstabAlgorithm/SolveSubproblemFBRS",/* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\FBstabAlgorithm.m"/* pathName */
};

static emlrtRSInfo be_emlrtRSI = { 292,/* lineNo */
  "FBstabAlgorithm/SolveSubproblemFBRS",/* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\FBstabAlgorithm.m"/* pathName */
};

static emlrtRSInfo ce_emlrtRSI = { 293,/* lineNo */
  "FBstabAlgorithm/SolveSubproblemFBRS",/* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\FBstabAlgorithm.m"/* pathName */
};

static emlrtRSInfo de_emlrtRSI = { 294,/* lineNo */
  "FBstabAlgorithm/SolveSubproblemFBRS",/* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\FBstabAlgorithm.m"/* pathName */
};

static emlrtRSInfo ee_emlrtRSI = { 295,/* lineNo */
  "FBstabAlgorithm/SolveSubproblemFBRS",/* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\FBstabAlgorithm.m"/* pathName */
};

static emlrtRSInfo fe_emlrtRSI = { 302,/* lineNo */
  "FBstabAlgorithm/SolveSubproblemFBRS",/* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\FBstabAlgorithm.m"/* pathName */
};

static emlrtRSInfo ge_emlrtRSI = { 307,/* lineNo */
  "FBstabAlgorithm/SolveSubproblemFBRS",/* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\FBstabAlgorithm.m"/* pathName */
};

static emlrtRSInfo he_emlrtRSI = { 34, /* lineNo */
  "CondensedResidual/InnerResidual",   /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\CondensedResidual.m"/* pathName */
};

static emlrtRSInfo ie_emlrtRSI = { 37, /* lineNo */
  "CondensedResidual/InnerResidual",   /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\CondensedResidual.m"/* pathName */
};

static emlrtRSInfo le_emlrtRSI = { 393,/* lineNo */
  "FBstabAlgorithm/PrintDetailedFooter",/* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\FBstabAlgorithm.m"/* pathName */
};

static emlrtRSInfo me_emlrtRSI = { 384,/* lineNo */
  "FBstabAlgorithm/PrintDetailedLine", /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\FBstabAlgorithm.m"/* pathName */
};

static emlrtRSInfo ne_emlrtRSI = { 386,/* lineNo */
  "FBstabAlgorithm/PrintDetailedLine", /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\FBstabAlgorithm.m"/* pathName */
};

static emlrtRSInfo oe_emlrtRSI = { 329,/* lineNo */
  "FBstabAlgorithm/PrintFinal",        /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\FBstabAlgorithm.m"/* pathName */
};

static emlrtRSInfo pe_emlrtRSI = { 331,/* lineNo */
  "FBstabAlgorithm/PrintFinal",        /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\FBstabAlgorithm.m"/* pathName */
};

static emlrtRSInfo qe_emlrtRSI = { 333,/* lineNo */
  "FBstabAlgorithm/PrintFinal",        /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\FBstabAlgorithm.m"/* pathName */
};

static emlrtRSInfo re_emlrtRSI = { 335,/* lineNo */
  "FBstabAlgorithm/PrintFinal",        /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\FBstabAlgorithm.m"/* pathName */
};

static emlrtRSInfo se_emlrtRSI = { 337,/* lineNo */
  "FBstabAlgorithm/PrintFinal",        /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\FBstabAlgorithm.m"/* pathName */
};

static emlrtRSInfo te_emlrtRSI = { 339,/* lineNo */
  "FBstabAlgorithm/PrintFinal",        /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\FBstabAlgorithm.m"/* pathName */
};

static emlrtRSInfo ue_emlrtRSI = { 342,/* lineNo */
  "FBstabAlgorithm/PrintFinal",        /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\FBstabAlgorithm.m"/* pathName */
};

static emlrtRSInfo ve_emlrtRSI = { 347,/* lineNo */
  "FBstabAlgorithm/PrintFinal",        /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\FBstabAlgorithm.m"/* pathName */
};

static emlrtRSInfo we_emlrtRSI = { 351,/* lineNo */
  "FBstabAlgorithm/PrintFinal",        /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\FBstabAlgorithm.m"/* pathName */
};

static emlrtRSInfo xe_emlrtRSI = { 352,/* lineNo */
  "FBstabAlgorithm/PrintFinal",        /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\FBstabAlgorithm.m"/* pathName */
};

static emlrtRSInfo ye_emlrtRSI = { 353,/* lineNo */
  "FBstabAlgorithm/PrintFinal",        /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\FBstabAlgorithm.m"/* pathName */
};

static emlrtRSInfo af_emlrtRSI = { 35, /* lineNo */
  "fprintf",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m"/* pathName */
};

static emlrtRSInfo ag_emlrtRSI = { 14, /* lineNo */
  "max",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\datafun\\max.m"/* pathName */
};

static emlrtRSInfo bg_emlrtRSI = { 20, /* lineNo */
  "minOrMax",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

static emlrtRSInfo hh_emlrtRSI = { 30, /* lineNo */
  "FullVariable/StructRead",           /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\FullVariable.m"/* pathName */
};

static emlrtRSInfo ih_emlrtRSI = { 56, /* lineNo */
  "FullVariable/ones",                 /* fcnName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\FullVariable.m"/* pathName */
};

static emlrtMCInfo emlrtMCI = { 60,    /* lineNo */
  18,                                  /* colNo */
  "fprintf",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m"/* pName */
};

static emlrtRTEInfo b_emlrtRTEI = { 129,/* lineNo */
  11,                                  /* colNo */
  "FBstabAlgorithm/Solve",             /* fName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\FBstabAlgorithm.m"/* pName */
};

static emlrtDCInfo emlrtDCI = { 327,   /* lineNo */
  11,                                  /* colNo */
  "FBstabAlgorithm/PrintFinal",        /* fName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\FBstabAlgorithm.m",/* pName */
  1                                    /* checkKind */
};

static emlrtECInfo m_emlrtECI = { -1,  /* nDims */
  34,                                  /* lineNo */
  10,                                  /* colNo */
  "CondensedResidual/InnerResidual",   /* fName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\components\\CondensedResidual.m"/* pName */
};

static emlrtRTEInfo j_emlrtRTEI = { 290,/* lineNo */
  12,                                  /* colNo */
  "FBstabAlgorithm/SolveSubproblemFBRS",/* fName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\FBstabAlgorithm.m"/* pName */
};

static emlrtRTEInfo k_emlrtRTEI = { 235,/* lineNo */
  11,                                  /* colNo */
  "FBstabAlgorithm/SolveSubproblemFBRS",/* fName */
  "C:\\Users\\tskib\\OneDrive\\PhD\\Research\\Matlab\\MoWiTO_mpc_matlab\\fbstab-matlab-master\\src\\FBstabAlgorithm.m"/* pName */
};

static const char_T cv[53] = { '%', '1', '2', 'd', ' ', '%', '1', '2', 'd', ' ',
  '%', '1', '2', '.', '4', 'e', ' ', '%', '1', '2', '.', '4', 'e', ' ', '%', '1',
  '2', '.', '4', 'e', ' ', '%', '1', '2', '.', '4', 'e', ' ', '%', '1', '2', '.',
  '4', 'e', ' ', '%', '1', '2', '.', '4', 'e', '\\', 'n' };

static const char_T cv1[41] = { '%', '1', '2', 's', ' ', '%', '1', '2', 's', ' ',
  '%', '1', '2', 's', ' ', '%', '1', '2', 's', ' ', '%', '1', '2', 's', ' ', '%',
  '1', '2', 's', ' ', '%', '1', '2', 's', ' ', '%', '1', '2', 's', '\\', 'n' };

static const char_T cv2[9] = { 'p', 'r', 'o', 'x', ' ', 'i', 't', 'e', 'r' };

static const char_T cv3[12] = { 'n', 'e', 'w', 't', 'o', 'n', ' ', 'i', 't', 'e',
  'r', 's' };

static const char_T cv4[9] = { 'I', 'n', 'n', 'e', 'r', ' ', 'r', 'e', 's' };

static const char_T cv5[9] = { 'I', 'n', 'n', 'e', 'r', ' ', 't', 'o', 'l' };

static const char_T cv6[76] = { 'B', 'e', 'g', 'i', 'n', ' ', 'P', 'r', 'o', 'x',
  ' ', 'I', 't', 'e', 'r', ':', ' ', '%', 'd', ',', ' ', 'T', 'o', 't', 'a', 'l',
  ' ', 'N', 'e', 'w', 't', 'o', 'n', ' ', 'I', 't', 'e', 'r', 's', ':', ' ', '%',
  'd', ',', ' ', 'R', 'e', 's', 'i', 'd', 'u', 'a', 'l', ':', ' ', '%', '6', '.',
  '4', 'e', ',', ' ', 's', 'i', 'g', 'm', 'a', ':', ' ', '%', '6', '.', '4', 'e',
  '\\', 'n' };

static const char_T cv7[30] = { '%', '1', '0', 's', ' ', ' ', '%', '1', '0', 's',
  ' ', ' ', '%', '1', '0', 's', ' ', ' ', '%', '1', '0', 's', ' ', ' ', '%', '1',
  '0', 's', '\\', 'n' };

static const char_T cv8[9] = { 'S', 't', 'e', 'p', ' ', 'S', 'i', 'z', 'e' };

static const char_T cv9[67] = { 'E', 'x', 'i', 't', 'i', 'n', 'g', ' ', 'i', 'n',
  'n', 'e', 'r', ' ', 'l', 'o', 'o', 'p', '.', ' ', 'I', 'n', 'n', 'e', 'r', ' ',
  'r', 'e', 's', 'i', 'd', 'u', 'a', 'l', ':', ' ', '%', '6', '.', '4', 'e', ',',
  ' ', 'I', 'n', 'n', 'e', 'r', ' ', 't', 'o', 'l', 'e', 'r', 'a', 'n', 'c', 'e',
  ':', ' ', '%', '6', '.', '4', 'e', '\\', 'n' };

static const char_T cv10[9] = { 'S', 'u', 'c', 'c', 'e', 's', 's', '\\', 'n' };

static const char_T cv11[26] = { 'I', 't', 'e', 'r', 'a', 't', 'i', 'o', 'n',
  ' ', 'l', 'i', 'm', 'i', 't', ' ', 'e', 'x', 'c', 'e', 'e', 'd', 'e', 'd',
  '\\', 'n' };

static const char_T cv12[19] = { 'A', 'l', 'g', 'o', 'r', 'i', 't', 'h', 'm',
  ' ', 's', 't', 'a', 'l', 'l', 'e', 'd', '\\', 'n' };

static const char_T cv13[24] = { 'I', 'n', 'f', 'e', 'a', 's', 'i', 'b', 'i',
  'l', 'i', 't', 'y', ' ', 'd', 'e', 't', 'e', 'c', 't', 'e', 'd', '\\', 'n' };

static const char_T cv14[24] = { 'U', 'n', 'b', 'o', 'u', 'n', 'd', 'e', 'd',
  'n', 'e', 's', 's', ' ', 'd', 'e', 't', 'e', 'c', 't', 'e', 'd', '\\', 'n' };

static const char_T cv15[35] = { 'P', 'r', 'o', 'x', 'i', 'm', 'a', 'l', ' ',
  'i', 't', 'e', 'r', 'a', 't', 'i', 'o', 'n', 's', ':', ' ', '%', 'd', ' ', 'o',
  'u', 't', ' ', 'o', 'f', ' ', '%', 'd', '\\', 'n' };

static const char_T cv16[33] = { 'N', 'e', 'w', 't', 'o', 'n', ' ', 'i', 't',
  'e', 'r', 'a', 't', 'i', 'o', 'n', 's', ':', ' ', '%', 'd', ' ', 'o', 'u', 't',
  ' ', 'o', 'f', ' ', '%', 'd', '\\', 'n' };

static const char_T cv17[37] = { '%', '1', '0', 's', ' ', ' ', '%', '1', '0',
  's', ' ', ' ', '%', '1', '0', 's', ' ', ' ', '%', '1', '0', 's', ' ', ' ', '%',
  '1', '0', 's', ' ', ' ', '%', '1', '0', 's', '\\', 'n', ' ' };

static const char_T cv18[48] = { '%', '1', '0', '.', '4', 'e', ' ', ' ', '%',
  '1', '0', '.', '4', 'e', ' ', ' ', '%', '1', '0', '.', '4', 'e', ' ', ' ', '%',
  '1', '0', '.', '4', 'e', ' ', ' ', '%', '1', '0', '.', '4', 'e', ' ', ' ', '%',
  '1', '0', '.', '4', 'e', '\\', 'n' };

static const char_T cv19[30] = { '%', '1', '0', 'd', ' ', ' ', '%', '1', '0',
  'e', ' ', ' ', '%', '1', '0', 'e', ' ', ' ', '%', '1', '0', 'e', ' ', ' ', '%',
  '1', '0', 'e', '\\', 'n' };

static emlrtRSInfo wk_emlrtRSI = { 60, /* lineNo */
  "fprintf",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m"/* pathName */
};

/* Function Declarations */
static void FBstabAlgorithm_PrintFinal(const emlrtStack *sp, const
  FBstabAlgorithm *o, real_T out_eflag, real_T out_newton_iters, real_T
  out_prox_iters, const CondensedResidual *r);
static void b_FBstabAlgorithm_PrintFinal(const emlrtStack *sp, const
  FBstabAlgorithm_1 *o, real_T out_eflag, real_T out_newton_iters, real_T
  out_prox_iters, const FullResidual *r);
static const mxArray *b_feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, const mxArray *e, const mxArray *f, const
  mxArray *g, const mxArray *h, emlrtMCInfo *location);
static void c_FBstabAlgorithm_PrintDetailed(const emlrtStack *sp, const
  FBstabAlgorithm *o, real_T prox_iters, real_T newton_iters, const
  CondensedResidual *r, real_T sigma);
static void c_FBstabAlgorithm_PrintIteratio(const emlrtStack *sp, const
  FBstabAlgorithm *o);
static void c_FBstabAlgorithm_SolveSubprobl(const emlrtStack *sp,
  FBstabAlgorithm *o, real_T sigma, real_T itol, real_T Eouter, struct4_T *out,
  real_T *Ei, real_T *Ek, real_T *flag);
static const mxArray *c_feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, const mxArray *e, const mxArray *f, const
  mxArray *g, const mxArray *h, const mxArray *i, emlrtMCInfo *location);
static void d_FBstabAlgorithm_PrintDetailed(const emlrtStack *sp, const
  FBstabAlgorithm *o, real_T tol, const CondensedResidual *r);
static void d_FBstabAlgorithm_PrintIteratio(const emlrtStack *sp, const
  FBstabAlgorithm_1 *o);
static void d_FBstabAlgorithm_SolveSubprobl(const emlrtStack *sp,
  FBstabAlgorithm_1 *o, real_T sigma, real_T itol, real_T Eouter, struct4_T *out,
  real_T *Ei, real_T *Ek, real_T *flag);
static const mxArray *d_feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, const mxArray *e, const mxArray *f, emlrtMCInfo *
  location);
static void e_FBstabAlgorithm_PrintDetailed(const emlrtStack *sp, const
  FBstabAlgorithm_1 *o, real_T prox_iters, real_T newton_iters, const
  FullResidual *r, real_T sigma);
static const mxArray *e_feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location);
static real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *a__output_of_feval_, const char_T *identifier);
static void f_FBstabAlgorithm_PrintDetailed(const emlrtStack *sp, const
  FBstabAlgorithm_1 *o, real_T tol, const FullResidual *r);
static const mxArray *f_feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, const mxArray *e, const mxArray *f, const
  mxArray *g, const mxArray *h, const mxArray *i, const mxArray *j, emlrtMCInfo *
  location);
static const mxArray *feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, const mxArray *e, const mxArray *f, const
  mxArray *g, const mxArray *h, const mxArray *i, const mxArray *j, const
  mxArray *k, const mxArray *l, emlrtMCInfo *location);

/* Function Definitions */
static void FBstabAlgorithm_PrintFinal(const emlrtStack *sp, const
  FBstabAlgorithm *o, real_T out_eflag, real_T out_newton_iters, real_T
  out_prox_iters, const CondensedResidual *r)
{
  char_T u[4];
  const mxArray *y;
  const mxArray *m;
  static const int32_T iv[2] = { 1, 9 };

  const mxArray *m1;
  static const int32_T iv1[2] = { 1, 26 };

  const mxArray *m2;
  static const int32_T iv2[2] = { 1, 19 };

  const mxArray *m3;
  static const int32_T iv3[2] = { 1, 24 };

  const mxArray *m4;
  static const int32_T iv4[2] = { 1, 24 };

  const mxArray *b_y;
  const mxArray *m5;
  static const int32_T iv5[2] = { 1, 4 };

  const mxArray *m6;
  static const int32_T iv6[2] = { 1, 7 };

  const mxArray *m7;
  static const int32_T iv7[2] = { 1, 7 };

  const mxArray *m8;
  static const int32_T iv8[2] = { 1, 7 };

  const mxArray *m9;
  static const int32_T iv9[2] = { 1, 7 };

  const mxArray *m10;
  static const int32_T iv10[2] = { 1, 7 };

  static const char_T b_u[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  const mxArray *m11;
  static const int32_T iv11[2] = { 1, 7 };

  real_T varargin_1;
  real_T varargin_3;
  real_T varargin_4;
  int32_T varargin_2;
  const mxArray *m12;
  static const int32_T iv12[2] = { 1, 35 };

  const mxArray *c_y;
  int32_T i;
  const mxArray *d_y;
  const mxArray *m13;
  static const int32_T iv13[2] = { 1, 7 };

  const mxArray *m14;
  static const int32_T iv14[2] = { 1, 33 };

  const mxArray *m15;
  static const int32_T iv15[2] = { 1, 7 };

  const mxArray *m16;
  static const int32_T iv16[2] = { 1, 37 };

  const mxArray *m17;
  static const int32_T iv17[2] = { 1, 4 };

  static const char_T b_varargin_1[4] = { '|', 'r', 'z', '|' };

  const mxArray *m18;
  static const int32_T iv18[2] = { 1, 4 };

  static const char_T b_varargin_2[4] = { '|', 'r', 'l', '|' };

  const mxArray *m19;
  static const int32_T iv19[2] = { 1, 4 };

  static const char_T b_varargin_3[4] = { '|', 'r', 'v', '|' };

  const mxArray *e_y;
  const mxArray *m20;
  static const int32_T iv20[2] = { 1, 5 };

  static const char_T b_varargin_4[5] = { 'z', ' ', 't', 'o', 'l' };

  const mxArray *f_y;
  const mxArray *m21;
  static const int32_T iv21[2] = { 1, 5 };

  static const char_T varargin_5[5] = { 'l', ' ', 't', 'o', 'l' };

  const mxArray *g_y;
  const mxArray *m22;
  static const int32_T iv22[2] = { 1, 5 };

  static const char_T varargin_6[5] = { 'v', ' ', 't', 'o', 'l' };

  const mxArray *h_y;
  const mxArray *m23;
  static const int32_T iv23[2] = { 1, 7 };

  real_T b_varargin_5;
  real_T b_varargin_6;
  const mxArray *m24;
  static const int32_T iv24[2] = { 1, 48 };

  const mxArray *m25;
  static const int32_T iv25[2] = { 1, 7 };

  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  if (o->display_level >= 1.0) {
    if (out_eflag != (int32_T)muDoubleScalarFloor(out_eflag)) {
      emlrtIntegerCheckR2012b(out_eflag, &emlrtDCI, sp);
    }

    switch ((int32_T)out_eflag) {
     case 0:
      st.site = &oe_emlrtRSI;
      b_st.site = &af_emlrtRSI;
      y = NULL;
      m = emlrtCreateCharArray(2, iv);
      emlrtInitCharArrayR2013a(&b_st, 9, m, &cv10[0]);
      emlrtAssign(&y, m);
      b_y = NULL;
      m6 = emlrtCreateCharArray(2, iv6);
      emlrtInitCharArrayR2013a(&b_st, 7, m6, &b_u[0]);
      emlrtAssign(&b_y, m6);
      c_st.site = &wk_emlrtRSI;
      emlrt_marshallIn(&c_st, e_feval(&c_st, b_y, emlrt_marshallOut(1.0), y,
        &emlrtMCI), "<output of feval>");
      break;

     case -1:
      st.site = &pe_emlrtRSI;
      b_st.site = &af_emlrtRSI;
      y = NULL;
      m1 = emlrtCreateCharArray(2, iv1);
      emlrtInitCharArrayR2013a(&b_st, 26, m1, &cv11[0]);
      emlrtAssign(&y, m1);
      b_y = NULL;
      m7 = emlrtCreateCharArray(2, iv7);
      emlrtInitCharArrayR2013a(&b_st, 7, m7, &b_u[0]);
      emlrtAssign(&b_y, m7);
      c_st.site = &wk_emlrtRSI;
      emlrt_marshallIn(&c_st, e_feval(&c_st, b_y, emlrt_marshallOut(1.0), y,
        &emlrtMCI), "<output of feval>");
      break;

     case -2:
      st.site = &qe_emlrtRSI;
      b_st.site = &af_emlrtRSI;
      y = NULL;
      m2 = emlrtCreateCharArray(2, iv2);
      emlrtInitCharArrayR2013a(&b_st, 19, m2, &cv12[0]);
      emlrtAssign(&y, m2);
      b_y = NULL;
      m8 = emlrtCreateCharArray(2, iv8);
      emlrtInitCharArrayR2013a(&b_st, 7, m8, &b_u[0]);
      emlrtAssign(&b_y, m8);
      c_st.site = &wk_emlrtRSI;
      emlrt_marshallIn(&c_st, e_feval(&c_st, b_y, emlrt_marshallOut(1.0), y,
        &emlrtMCI), "<output of feval>");
      break;

     case -3:
      st.site = &re_emlrtRSI;
      b_st.site = &af_emlrtRSI;
      y = NULL;
      m3 = emlrtCreateCharArray(2, iv3);
      emlrtInitCharArrayR2013a(&b_st, 24, m3, &cv13[0]);
      emlrtAssign(&y, m3);
      b_y = NULL;
      m9 = emlrtCreateCharArray(2, iv9);
      emlrtInitCharArrayR2013a(&b_st, 7, m9, &b_u[0]);
      emlrtAssign(&b_y, m9);
      c_st.site = &wk_emlrtRSI;
      emlrt_marshallIn(&c_st, e_feval(&c_st, b_y, emlrt_marshallOut(1.0), y,
        &emlrtMCI), "<output of feval>");
      break;

     case -4:
      st.site = &se_emlrtRSI;
      b_st.site = &af_emlrtRSI;
      y = NULL;
      m4 = emlrtCreateCharArray(2, iv4);
      emlrtInitCharArrayR2013a(&b_st, 24, m4, &cv14[0]);
      emlrtAssign(&y, m4);
      b_y = NULL;
      m10 = emlrtCreateCharArray(2, iv10);
      emlrtInitCharArrayR2013a(&b_st, 7, m10, &b_u[0]);
      emlrtAssign(&b_y, m10);
      c_st.site = &wk_emlrtRSI;
      emlrt_marshallIn(&c_st, e_feval(&c_st, b_y, emlrt_marshallOut(1.0), y,
        &emlrtMCI), "<output of feval>");
      break;

     default:
      st.site = &te_emlrtRSI;
      b_st.site = &af_emlrtRSI;
      u[0] = '?';
      u[1] = '?';
      u[2] = '?';
      u[3] = '?';
      y = NULL;
      m5 = emlrtCreateCharArray(2, iv5);
      emlrtInitCharArrayR2013a(&b_st, 4, m5, &u[0]);
      emlrtAssign(&y, m5);
      b_y = NULL;
      m11 = emlrtCreateCharArray(2, iv11);
      emlrtInitCharArrayR2013a(&b_st, 7, m11, &b_u[0]);
      emlrtAssign(&b_y, m11);
      c_st.site = &wk_emlrtRSI;
      emlrt_marshallIn(&c_st, e_feval(&c_st, b_y, emlrt_marshallOut(1.0), y,
        &emlrtMCI), "<output of feval>");
      break;
    }

    st.site = &ue_emlrtRSI;
    varargin_1 = r->znorm;
    varargin_3 = r->vnorm;
    varargin_4 = muDoubleScalarRound(o->max_prox_iters);
    if (varargin_4 < 2.147483648E+9) {
      if (varargin_4 >= -2.147483648E+9) {
        varargin_2 = (int32_T)varargin_4;
      } else {
        varargin_2 = MIN_int32_T;
      }
    } else if (varargin_4 >= 2.147483648E+9) {
      varargin_2 = MAX_int32_T;
    } else {
      varargin_2 = 0;
    }

    st.site = &ve_emlrtRSI;
    b_st.site = &wc_emlrtRSI;
    y = NULL;
    m12 = emlrtCreateCharArray(2, iv12);
    emlrtInitCharArrayR2013a(&b_st, 35, m12, &cv15[0]);
    emlrtAssign(&y, m12);
    b_y = NULL;
    c_y = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    varargin_4 = muDoubleScalarRound(out_prox_iters);
    if (varargin_4 < 2.147483648E+9) {
      if (varargin_4 >= -2.147483648E+9) {
        i = (int32_T)varargin_4;
      } else {
        i = MIN_int32_T;
      }
    } else if (varargin_4 >= 2.147483648E+9) {
      i = MAX_int32_T;
    } else {
      i = 0;
    }

    *(int32_T *)emlrtMxGetData(c_y) = i;
    emlrtAssign(&b_y, c_y);
    d_y = NULL;
    c_y = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)emlrtMxGetData(c_y) = varargin_2;
    emlrtAssign(&d_y, c_y);
    c_y = NULL;
    m13 = emlrtCreateCharArray(2, iv13);
    emlrtInitCharArrayR2013a(&b_st, 7, m13, &b_u[0]);
    emlrtAssign(&c_y, m13);
    c_st.site = &wk_emlrtRSI;
    emlrt_marshallIn(&c_st, d_feval(&c_st, c_y, emlrt_marshallOut(1.0), y, b_y,
      d_y, &emlrtMCI), "<output of feval>");
    varargin_4 = muDoubleScalarRound(o->max_newton_iters);
    if (varargin_4 < 2.147483648E+9) {
      if (varargin_4 >= -2.147483648E+9) {
        varargin_2 = (int32_T)varargin_4;
      } else {
        varargin_2 = MIN_int32_T;
      }
    } else if (varargin_4 >= 2.147483648E+9) {
      varargin_2 = MAX_int32_T;
    } else {
      varargin_2 = 0;
    }

    st.site = &we_emlrtRSI;
    b_st.site = &wc_emlrtRSI;
    y = NULL;
    m14 = emlrtCreateCharArray(2, iv14);
    emlrtInitCharArrayR2013a(&b_st, 33, m14, &cv16[0]);
    emlrtAssign(&y, m14);
    b_y = NULL;
    c_y = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    varargin_4 = muDoubleScalarRound(out_newton_iters);
    if (varargin_4 < 2.147483648E+9) {
      if (varargin_4 >= -2.147483648E+9) {
        i = (int32_T)varargin_4;
      } else {
        i = MIN_int32_T;
      }
    } else if (varargin_4 >= 2.147483648E+9) {
      i = MAX_int32_T;
    } else {
      i = 0;
    }

    *(int32_T *)emlrtMxGetData(c_y) = i;
    emlrtAssign(&b_y, c_y);
    d_y = NULL;
    c_y = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)emlrtMxGetData(c_y) = varargin_2;
    emlrtAssign(&d_y, c_y);
    c_y = NULL;
    m15 = emlrtCreateCharArray(2, iv15);
    emlrtInitCharArrayR2013a(&b_st, 7, m15, &b_u[0]);
    emlrtAssign(&c_y, m15);
    c_st.site = &wk_emlrtRSI;
    emlrt_marshallIn(&c_st, d_feval(&c_st, c_y, emlrt_marshallOut(1.0), y, b_y,
      d_y, &emlrtMCI), "<output of feval>");
    st.site = &xe_emlrtRSI;
    b_st.site = &wc_emlrtRSI;
    y = NULL;
    m16 = emlrtCreateCharArray(2, iv16);
    emlrtInitCharArrayR2013a(&b_st, 37, m16, &cv17[0]);
    emlrtAssign(&y, m16);
    b_y = NULL;
    m17 = emlrtCreateCharArray(2, iv17);
    emlrtInitCharArrayR2013a(&b_st, 4, m17, &b_varargin_1[0]);
    emlrtAssign(&b_y, m17);
    d_y = NULL;
    m18 = emlrtCreateCharArray(2, iv18);
    emlrtInitCharArrayR2013a(&b_st, 4, m18, &b_varargin_2[0]);
    emlrtAssign(&d_y, m18);
    c_y = NULL;
    m19 = emlrtCreateCharArray(2, iv19);
    emlrtInitCharArrayR2013a(&b_st, 4, m19, &b_varargin_3[0]);
    emlrtAssign(&c_y, m19);
    e_y = NULL;
    m20 = emlrtCreateCharArray(2, iv20);
    emlrtInitCharArrayR2013a(&b_st, 5, m20, &b_varargin_4[0]);
    emlrtAssign(&e_y, m20);
    f_y = NULL;
    m21 = emlrtCreateCharArray(2, iv21);
    emlrtInitCharArrayR2013a(&b_st, 5, m21, &varargin_5[0]);
    emlrtAssign(&f_y, m21);
    g_y = NULL;
    m22 = emlrtCreateCharArray(2, iv22);
    emlrtInitCharArrayR2013a(&b_st, 5, m22, &varargin_6[0]);
    emlrtAssign(&g_y, m22);
    h_y = NULL;
    m23 = emlrtCreateCharArray(2, iv23);
    emlrtInitCharArrayR2013a(&b_st, 7, m23, &b_u[0]);
    emlrtAssign(&h_y, m23);
    c_st.site = &wk_emlrtRSI;
    emlrt_marshallIn(&c_st, f_feval(&c_st, h_y, emlrt_marshallOut(1.0), y, b_y,
      d_y, c_y, e_y, f_y, g_y, &emlrtMCI), "<output of feval>");
    st.site = &ye_emlrtRSI;
    varargin_4 = o->ztol;
    b_varargin_5 = o->ltol;
    b_varargin_6 = o->vtol;
    b_st.site = &wc_emlrtRSI;
    y = NULL;
    m24 = emlrtCreateCharArray(2, iv24);
    emlrtInitCharArrayR2013a(&b_st, 48, m24, &cv18[0]);
    emlrtAssign(&y, m24);
    b_y = NULL;
    m25 = emlrtCreateCharArray(2, iv25);
    emlrtInitCharArrayR2013a(&b_st, 7, m25, &b_u[0]);
    emlrtAssign(&b_y, m25);
    c_st.site = &wk_emlrtRSI;
    emlrt_marshallIn(&c_st, f_feval(&c_st, b_y, emlrt_marshallOut(1.0), y,
      emlrt_marshallOut(varargin_1), emlrt_marshallOut(0.0), emlrt_marshallOut
      (varargin_3), emlrt_marshallOut(varargin_4), emlrt_marshallOut
      (b_varargin_5), emlrt_marshallOut(b_varargin_6), &emlrtMCI),
                     "<output of feval>");
  }
}

static void b_FBstabAlgorithm_PrintFinal(const emlrtStack *sp, const
  FBstabAlgorithm_1 *o, real_T out_eflag, real_T out_newton_iters, real_T
  out_prox_iters, const FullResidual *r)
{
  char_T u[4];
  const mxArray *y;
  const mxArray *m;
  static const int32_T iv[2] = { 1, 9 };

  const mxArray *m1;
  static const int32_T iv1[2] = { 1, 26 };

  const mxArray *m2;
  static const int32_T iv2[2] = { 1, 19 };

  const mxArray *m3;
  static const int32_T iv3[2] = { 1, 24 };

  const mxArray *m4;
  static const int32_T iv4[2] = { 1, 24 };

  const mxArray *b_y;
  const mxArray *m5;
  static const int32_T iv5[2] = { 1, 4 };

  const mxArray *m6;
  static const int32_T iv6[2] = { 1, 7 };

  const mxArray *m7;
  static const int32_T iv7[2] = { 1, 7 };

  const mxArray *m8;
  static const int32_T iv8[2] = { 1, 7 };

  const mxArray *m9;
  static const int32_T iv9[2] = { 1, 7 };

  const mxArray *m10;
  static const int32_T iv10[2] = { 1, 7 };

  static const char_T b_u[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  const mxArray *m11;
  static const int32_T iv11[2] = { 1, 7 };

  real_T varargin_1;
  real_T varargin_3;
  real_T varargin_2;
  real_T varargin_4;
  int32_T b_varargin_2;
  const mxArray *m12;
  static const int32_T iv12[2] = { 1, 35 };

  const mxArray *c_y;
  int32_T i;
  const mxArray *d_y;
  const mxArray *m13;
  static const int32_T iv13[2] = { 1, 7 };

  const mxArray *m14;
  static const int32_T iv14[2] = { 1, 33 };

  const mxArray *m15;
  static const int32_T iv15[2] = { 1, 7 };

  const mxArray *m16;
  static const int32_T iv16[2] = { 1, 37 };

  const mxArray *m17;
  static const int32_T iv17[2] = { 1, 4 };

  static const char_T b_varargin_1[4] = { '|', 'r', 'z', '|' };

  const mxArray *m18;
  static const int32_T iv18[2] = { 1, 4 };

  static const char_T c_varargin_2[4] = { '|', 'r', 'l', '|' };

  const mxArray *m19;
  static const int32_T iv19[2] = { 1, 4 };

  static const char_T b_varargin_3[4] = { '|', 'r', 'v', '|' };

  const mxArray *e_y;
  const mxArray *m20;
  static const int32_T iv20[2] = { 1, 5 };

  static const char_T b_varargin_4[5] = { 'z', ' ', 't', 'o', 'l' };

  const mxArray *f_y;
  const mxArray *m21;
  static const int32_T iv21[2] = { 1, 5 };

  static const char_T varargin_5[5] = { 'l', ' ', 't', 'o', 'l' };

  const mxArray *g_y;
  const mxArray *m22;
  static const int32_T iv22[2] = { 1, 5 };

  static const char_T varargin_6[5] = { 'v', ' ', 't', 'o', 'l' };

  const mxArray *h_y;
  const mxArray *m23;
  static const int32_T iv23[2] = { 1, 7 };

  real_T b_varargin_5;
  real_T b_varargin_6;
  const mxArray *m24;
  static const int32_T iv24[2] = { 1, 48 };

  const mxArray *m25;
  static const int32_T iv25[2] = { 1, 7 };

  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  if (o->display_level >= 1.0) {
    if (out_eflag != (int32_T)muDoubleScalarFloor(out_eflag)) {
      emlrtIntegerCheckR2012b(out_eflag, &emlrtDCI, sp);
    }

    switch ((int32_T)out_eflag) {
     case 0:
      st.site = &oe_emlrtRSI;
      b_st.site = &af_emlrtRSI;
      y = NULL;
      m = emlrtCreateCharArray(2, iv);
      emlrtInitCharArrayR2013a(&b_st, 9, m, &cv10[0]);
      emlrtAssign(&y, m);
      b_y = NULL;
      m6 = emlrtCreateCharArray(2, iv6);
      emlrtInitCharArrayR2013a(&b_st, 7, m6, &b_u[0]);
      emlrtAssign(&b_y, m6);
      c_st.site = &wk_emlrtRSI;
      emlrt_marshallIn(&c_st, e_feval(&c_st, b_y, emlrt_marshallOut(1.0), y,
        &emlrtMCI), "<output of feval>");
      break;

     case -1:
      st.site = &pe_emlrtRSI;
      b_st.site = &af_emlrtRSI;
      y = NULL;
      m1 = emlrtCreateCharArray(2, iv1);
      emlrtInitCharArrayR2013a(&b_st, 26, m1, &cv11[0]);
      emlrtAssign(&y, m1);
      b_y = NULL;
      m7 = emlrtCreateCharArray(2, iv7);
      emlrtInitCharArrayR2013a(&b_st, 7, m7, &b_u[0]);
      emlrtAssign(&b_y, m7);
      c_st.site = &wk_emlrtRSI;
      emlrt_marshallIn(&c_st, e_feval(&c_st, b_y, emlrt_marshallOut(1.0), y,
        &emlrtMCI), "<output of feval>");
      break;

     case -2:
      st.site = &qe_emlrtRSI;
      b_st.site = &af_emlrtRSI;
      y = NULL;
      m2 = emlrtCreateCharArray(2, iv2);
      emlrtInitCharArrayR2013a(&b_st, 19, m2, &cv12[0]);
      emlrtAssign(&y, m2);
      b_y = NULL;
      m8 = emlrtCreateCharArray(2, iv8);
      emlrtInitCharArrayR2013a(&b_st, 7, m8, &b_u[0]);
      emlrtAssign(&b_y, m8);
      c_st.site = &wk_emlrtRSI;
      emlrt_marshallIn(&c_st, e_feval(&c_st, b_y, emlrt_marshallOut(1.0), y,
        &emlrtMCI), "<output of feval>");
      break;

     case -3:
      st.site = &re_emlrtRSI;
      b_st.site = &af_emlrtRSI;
      y = NULL;
      m3 = emlrtCreateCharArray(2, iv3);
      emlrtInitCharArrayR2013a(&b_st, 24, m3, &cv13[0]);
      emlrtAssign(&y, m3);
      b_y = NULL;
      m9 = emlrtCreateCharArray(2, iv9);
      emlrtInitCharArrayR2013a(&b_st, 7, m9, &b_u[0]);
      emlrtAssign(&b_y, m9);
      c_st.site = &wk_emlrtRSI;
      emlrt_marshallIn(&c_st, e_feval(&c_st, b_y, emlrt_marshallOut(1.0), y,
        &emlrtMCI), "<output of feval>");
      break;

     case -4:
      st.site = &se_emlrtRSI;
      b_st.site = &af_emlrtRSI;
      y = NULL;
      m4 = emlrtCreateCharArray(2, iv4);
      emlrtInitCharArrayR2013a(&b_st, 24, m4, &cv14[0]);
      emlrtAssign(&y, m4);
      b_y = NULL;
      m10 = emlrtCreateCharArray(2, iv10);
      emlrtInitCharArrayR2013a(&b_st, 7, m10, &b_u[0]);
      emlrtAssign(&b_y, m10);
      c_st.site = &wk_emlrtRSI;
      emlrt_marshallIn(&c_st, e_feval(&c_st, b_y, emlrt_marshallOut(1.0), y,
        &emlrtMCI), "<output of feval>");
      break;

     default:
      st.site = &te_emlrtRSI;
      b_st.site = &af_emlrtRSI;
      u[0] = '?';
      u[1] = '?';
      u[2] = '?';
      u[3] = '?';
      y = NULL;
      m5 = emlrtCreateCharArray(2, iv5);
      emlrtInitCharArrayR2013a(&b_st, 4, m5, &u[0]);
      emlrtAssign(&y, m5);
      b_y = NULL;
      m11 = emlrtCreateCharArray(2, iv11);
      emlrtInitCharArrayR2013a(&b_st, 7, m11, &b_u[0]);
      emlrtAssign(&b_y, m11);
      c_st.site = &wk_emlrtRSI;
      emlrt_marshallIn(&c_st, e_feval(&c_st, b_y, emlrt_marshallOut(1.0), y,
        &emlrtMCI), "<output of feval>");
      break;
    }

    st.site = &ue_emlrtRSI;
    varargin_1 = r->znorm;
    varargin_3 = r->vnorm;
    varargin_2 = r->lnorm;
    varargin_4 = muDoubleScalarRound(o->max_prox_iters);
    if (varargin_4 < 2.147483648E+9) {
      if (varargin_4 >= -2.147483648E+9) {
        b_varargin_2 = (int32_T)varargin_4;
      } else {
        b_varargin_2 = MIN_int32_T;
      }
    } else if (varargin_4 >= 2.147483648E+9) {
      b_varargin_2 = MAX_int32_T;
    } else {
      b_varargin_2 = 0;
    }

    st.site = &ve_emlrtRSI;
    b_st.site = &wc_emlrtRSI;
    y = NULL;
    m12 = emlrtCreateCharArray(2, iv12);
    emlrtInitCharArrayR2013a(&b_st, 35, m12, &cv15[0]);
    emlrtAssign(&y, m12);
    b_y = NULL;
    c_y = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    varargin_4 = muDoubleScalarRound(out_prox_iters);
    if (varargin_4 < 2.147483648E+9) {
      if (varargin_4 >= -2.147483648E+9) {
        i = (int32_T)varargin_4;
      } else {
        i = MIN_int32_T;
      }
    } else if (varargin_4 >= 2.147483648E+9) {
      i = MAX_int32_T;
    } else {
      i = 0;
    }

    *(int32_T *)emlrtMxGetData(c_y) = i;
    emlrtAssign(&b_y, c_y);
    d_y = NULL;
    c_y = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)emlrtMxGetData(c_y) = b_varargin_2;
    emlrtAssign(&d_y, c_y);
    c_y = NULL;
    m13 = emlrtCreateCharArray(2, iv13);
    emlrtInitCharArrayR2013a(&b_st, 7, m13, &b_u[0]);
    emlrtAssign(&c_y, m13);
    c_st.site = &wk_emlrtRSI;
    emlrt_marshallIn(&c_st, d_feval(&c_st, c_y, emlrt_marshallOut(1.0), y, b_y,
      d_y, &emlrtMCI), "<output of feval>");
    varargin_4 = muDoubleScalarRound(o->max_newton_iters);
    if (varargin_4 < 2.147483648E+9) {
      if (varargin_4 >= -2.147483648E+9) {
        b_varargin_2 = (int32_T)varargin_4;
      } else {
        b_varargin_2 = MIN_int32_T;
      }
    } else if (varargin_4 >= 2.147483648E+9) {
      b_varargin_2 = MAX_int32_T;
    } else {
      b_varargin_2 = 0;
    }

    st.site = &we_emlrtRSI;
    b_st.site = &wc_emlrtRSI;
    y = NULL;
    m14 = emlrtCreateCharArray(2, iv14);
    emlrtInitCharArrayR2013a(&b_st, 33, m14, &cv16[0]);
    emlrtAssign(&y, m14);
    b_y = NULL;
    c_y = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    varargin_4 = muDoubleScalarRound(out_newton_iters);
    if (varargin_4 < 2.147483648E+9) {
      if (varargin_4 >= -2.147483648E+9) {
        i = (int32_T)varargin_4;
      } else {
        i = MIN_int32_T;
      }
    } else if (varargin_4 >= 2.147483648E+9) {
      i = MAX_int32_T;
    } else {
      i = 0;
    }

    *(int32_T *)emlrtMxGetData(c_y) = i;
    emlrtAssign(&b_y, c_y);
    d_y = NULL;
    c_y = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)emlrtMxGetData(c_y) = b_varargin_2;
    emlrtAssign(&d_y, c_y);
    c_y = NULL;
    m15 = emlrtCreateCharArray(2, iv15);
    emlrtInitCharArrayR2013a(&b_st, 7, m15, &b_u[0]);
    emlrtAssign(&c_y, m15);
    c_st.site = &wk_emlrtRSI;
    emlrt_marshallIn(&c_st, d_feval(&c_st, c_y, emlrt_marshallOut(1.0), y, b_y,
      d_y, &emlrtMCI), "<output of feval>");
    st.site = &xe_emlrtRSI;
    b_st.site = &wc_emlrtRSI;
    y = NULL;
    m16 = emlrtCreateCharArray(2, iv16);
    emlrtInitCharArrayR2013a(&b_st, 37, m16, &cv17[0]);
    emlrtAssign(&y, m16);
    b_y = NULL;
    m17 = emlrtCreateCharArray(2, iv17);
    emlrtInitCharArrayR2013a(&b_st, 4, m17, &b_varargin_1[0]);
    emlrtAssign(&b_y, m17);
    d_y = NULL;
    m18 = emlrtCreateCharArray(2, iv18);
    emlrtInitCharArrayR2013a(&b_st, 4, m18, &c_varargin_2[0]);
    emlrtAssign(&d_y, m18);
    c_y = NULL;
    m19 = emlrtCreateCharArray(2, iv19);
    emlrtInitCharArrayR2013a(&b_st, 4, m19, &b_varargin_3[0]);
    emlrtAssign(&c_y, m19);
    e_y = NULL;
    m20 = emlrtCreateCharArray(2, iv20);
    emlrtInitCharArrayR2013a(&b_st, 5, m20, &b_varargin_4[0]);
    emlrtAssign(&e_y, m20);
    f_y = NULL;
    m21 = emlrtCreateCharArray(2, iv21);
    emlrtInitCharArrayR2013a(&b_st, 5, m21, &varargin_5[0]);
    emlrtAssign(&f_y, m21);
    g_y = NULL;
    m22 = emlrtCreateCharArray(2, iv22);
    emlrtInitCharArrayR2013a(&b_st, 5, m22, &varargin_6[0]);
    emlrtAssign(&g_y, m22);
    h_y = NULL;
    m23 = emlrtCreateCharArray(2, iv23);
    emlrtInitCharArrayR2013a(&b_st, 7, m23, &b_u[0]);
    emlrtAssign(&h_y, m23);
    c_st.site = &wk_emlrtRSI;
    emlrt_marshallIn(&c_st, f_feval(&c_st, h_y, emlrt_marshallOut(1.0), y, b_y,
      d_y, c_y, e_y, f_y, g_y, &emlrtMCI), "<output of feval>");
    st.site = &ye_emlrtRSI;
    varargin_4 = o->ztol;
    b_varargin_5 = o->ltol;
    b_varargin_6 = o->vtol;
    b_st.site = &wc_emlrtRSI;
    y = NULL;
    m24 = emlrtCreateCharArray(2, iv24);
    emlrtInitCharArrayR2013a(&b_st, 48, m24, &cv18[0]);
    emlrtAssign(&y, m24);
    b_y = NULL;
    m25 = emlrtCreateCharArray(2, iv25);
    emlrtInitCharArrayR2013a(&b_st, 7, m25, &b_u[0]);
    emlrtAssign(&b_y, m25);
    c_st.site = &wk_emlrtRSI;
    emlrt_marshallIn(&c_st, f_feval(&c_st, b_y, emlrt_marshallOut(1.0), y,
      emlrt_marshallOut(varargin_1), emlrt_marshallOut(varargin_2),
      emlrt_marshallOut(varargin_3), emlrt_marshallOut(varargin_4),
      emlrt_marshallOut(b_varargin_5), emlrt_marshallOut(b_varargin_6),
      &emlrtMCI), "<output of feval>");
  }
}

static const mxArray *b_feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, const mxArray *e, const mxArray *f, const
  mxArray *g, const mxArray *h, emlrtMCInfo *location)
{
  const mxArray *pArrays[7];
  const mxArray *m;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  pArrays[3] = e;
  pArrays[4] = f;
  pArrays[5] = g;
  pArrays[6] = h;
  return emlrtCallMATLABR2012b(sp, 1, &m, 7, pArrays, "feval", true, location);
}

static void c_FBstabAlgorithm_PrintDetailed(const emlrtStack *sp, const
  FBstabAlgorithm *o, real_T prox_iters, real_T newton_iters, const
  CondensedResidual *r, real_T sigma)
{
  real_T varargin_3;
  const mxArray *y;
  const mxArray *m;
  static const int32_T iv[2] = { 1, 7 };

  static const char_T u[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  const mxArray *b_y;
  const mxArray *m1;
  static const int32_T iv1[2] = { 1, 76 };

  const mxArray *c_y;
  const mxArray *d_y;
  real_T d;
  int32_T i;
  const mxArray *e_y;
  const mxArray *m2;
  static const int32_T iv2[2] = { 1, 7 };

  const mxArray *m3;
  static const int32_T iv3[2] = { 1, 30 };

  const mxArray *m4;
  static const int32_T iv4[2] = { 1, 4 };

  static const char_T varargin_1[4] = { 'I', 't', 'e', 'r' };

  const mxArray *m5;
  static const int32_T iv5[2] = { 1, 9 };

  const mxArray *m6;
  static const int32_T iv6[2] = { 1, 4 };

  static const char_T b_varargin_3[4] = { '|', 'r', 'z', '|' };

  const mxArray *f_y;
  const mxArray *m7;
  static const int32_T iv7[2] = { 1, 4 };

  static const char_T varargin_4[4] = { '|', 'r', 'l', '|' };

  const mxArray *g_y;
  const mxArray *m8;
  static const int32_T iv8[2] = { 1, 4 };

  static const char_T varargin_5[4] = { '|', 'r', 'v', '|' };

  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  if (o->display_level == 3.0) {
    st.site = &xc_emlrtRSI;
    b_st.site = &xc_emlrtRSI;
    varargin_3 = CondensedResidual_norm(&b_st, r);
    b_st.site = &wc_emlrtRSI;
    y = NULL;
    m = emlrtCreateCharArray(2, iv);
    emlrtInitCharArrayR2013a(&b_st, 7, m, &u[0]);
    emlrtAssign(&y, m);
    b_y = NULL;
    m1 = emlrtCreateCharArray(2, iv1);
    emlrtInitCharArrayR2013a(&b_st, 76, m1, &cv6[0]);
    emlrtAssign(&b_y, m1);
    c_y = NULL;
    d_y = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    d = muDoubleScalarRound(prox_iters);
    if (d < 2.147483648E+9) {
      if (d >= -2.147483648E+9) {
        i = (int32_T)d;
      } else {
        i = MIN_int32_T;
      }
    } else if (d >= 2.147483648E+9) {
      i = MAX_int32_T;
    } else {
      i = 0;
    }

    *(int32_T *)emlrtMxGetData(d_y) = i;
    emlrtAssign(&c_y, d_y);
    e_y = NULL;
    d_y = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    d = muDoubleScalarRound(newton_iters);
    if (d < 2.147483648E+9) {
      if (d >= -2.147483648E+9) {
        i = (int32_T)d;
      } else {
        i = MIN_int32_T;
      }
    } else if (d >= 2.147483648E+9) {
      i = MAX_int32_T;
    } else {
      i = 0;
    }

    *(int32_T *)emlrtMxGetData(d_y) = i;
    emlrtAssign(&e_y, d_y);
    c_st.site = &wk_emlrtRSI;
    emlrt_marshallIn(&c_st, b_feval(&c_st, y, emlrt_marshallOut(1.0), b_y, c_y,
      e_y, emlrt_marshallOut(varargin_3), emlrt_marshallOut(sigma), &emlrtMCI),
                     "<output of feval>");
    st.site = &yc_emlrtRSI;
    b_st.site = &wc_emlrtRSI;
    y = NULL;
    m2 = emlrtCreateCharArray(2, iv2);
    emlrtInitCharArrayR2013a(&b_st, 7, m2, &u[0]);
    emlrtAssign(&y, m2);
    b_y = NULL;
    m3 = emlrtCreateCharArray(2, iv3);
    emlrtInitCharArrayR2013a(&b_st, 30, m3, &cv7[0]);
    emlrtAssign(&b_y, m3);
    c_y = NULL;
    m4 = emlrtCreateCharArray(2, iv4);
    emlrtInitCharArrayR2013a(&b_st, 4, m4, &varargin_1[0]);
    emlrtAssign(&c_y, m4);
    e_y = NULL;
    m5 = emlrtCreateCharArray(2, iv5);
    emlrtInitCharArrayR2013a(&b_st, 9, m5, &cv8[0]);
    emlrtAssign(&e_y, m5);
    d_y = NULL;
    m6 = emlrtCreateCharArray(2, iv6);
    emlrtInitCharArrayR2013a(&b_st, 4, m6, &b_varargin_3[0]);
    emlrtAssign(&d_y, m6);
    f_y = NULL;
    m7 = emlrtCreateCharArray(2, iv7);
    emlrtInitCharArrayR2013a(&b_st, 4, m7, &varargin_4[0]);
    emlrtAssign(&f_y, m7);
    g_y = NULL;
    m8 = emlrtCreateCharArray(2, iv8);
    emlrtInitCharArrayR2013a(&b_st, 4, m8, &varargin_5[0]);
    emlrtAssign(&g_y, m8);
    c_st.site = &wk_emlrtRSI;
    emlrt_marshallIn(&c_st, c_feval(&c_st, y, emlrt_marshallOut(1.0), b_y, c_y,
      e_y, d_y, f_y, g_y, &emlrtMCI), "<output of feval>");
  }
}

static void c_FBstabAlgorithm_PrintIteratio(const emlrtStack *sp, const
  FBstabAlgorithm *o)
{
  const mxArray *y;
  const mxArray *m;
  static const int32_T iv[2] = { 1, 7 };

  static const char_T u[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  const mxArray *b_y;
  const mxArray *m1;
  static const int32_T iv1[2] = { 1, 41 };

  const mxArray *c_y;
  const mxArray *m2;
  static const int32_T iv2[2] = { 1, 9 };

  const mxArray *d_y;
  const mxArray *m3;
  static const int32_T iv3[2] = { 1, 12 };

  const mxArray *e_y;
  const mxArray *m4;
  static const int32_T iv4[2] = { 1, 4 };

  static const char_T varargin_3[4] = { '|', 'r', 'z', '|' };

  const mxArray *f_y;
  const mxArray *m5;
  static const int32_T iv5[2] = { 1, 4 };

  static const char_T varargin_4[4] = { '|', 'r', 'l', '|' };

  const mxArray *g_y;
  const mxArray *m6;
  static const int32_T iv6[2] = { 1, 4 };

  static const char_T varargin_5[4] = { '|', 'r', 'v', '|' };

  const mxArray *h_y;
  const mxArray *m7;
  static const int32_T iv7[2] = { 1, 9 };

  const mxArray *i_y;
  const mxArray *m8;
  static const int32_T iv8[2] = { 1, 9 };

  const mxArray *j_y;
  const mxArray *m9;
  static const int32_T iv9[2] = { 1, 5 };

  static const char_T varargin_8[5] = { 's', 'i', 'g', 'm', 'a' };

  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  if (o->display_level == 2.0) {
    st.site = &vc_emlrtRSI;
    b_st.site = &wc_emlrtRSI;
    y = NULL;
    m = emlrtCreateCharArray(2, iv);
    emlrtInitCharArrayR2013a(&b_st, 7, m, &u[0]);
    emlrtAssign(&y, m);
    b_y = NULL;
    m1 = emlrtCreateCharArray(2, iv1);
    emlrtInitCharArrayR2013a(&b_st, 41, m1, &cv1[0]);
    emlrtAssign(&b_y, m1);
    c_y = NULL;
    m2 = emlrtCreateCharArray(2, iv2);
    emlrtInitCharArrayR2013a(&b_st, 9, m2, &cv2[0]);
    emlrtAssign(&c_y, m2);
    d_y = NULL;
    m3 = emlrtCreateCharArray(2, iv3);
    emlrtInitCharArrayR2013a(&b_st, 12, m3, &cv3[0]);
    emlrtAssign(&d_y, m3);
    e_y = NULL;
    m4 = emlrtCreateCharArray(2, iv4);
    emlrtInitCharArrayR2013a(&b_st, 4, m4, &varargin_3[0]);
    emlrtAssign(&e_y, m4);
    f_y = NULL;
    m5 = emlrtCreateCharArray(2, iv5);
    emlrtInitCharArrayR2013a(&b_st, 4, m5, &varargin_4[0]);
    emlrtAssign(&f_y, m5);
    g_y = NULL;
    m6 = emlrtCreateCharArray(2, iv6);
    emlrtInitCharArrayR2013a(&b_st, 4, m6, &varargin_5[0]);
    emlrtAssign(&g_y, m6);
    h_y = NULL;
    m7 = emlrtCreateCharArray(2, iv7);
    emlrtInitCharArrayR2013a(&b_st, 9, m7, &cv4[0]);
    emlrtAssign(&h_y, m7);
    i_y = NULL;
    m8 = emlrtCreateCharArray(2, iv8);
    emlrtInitCharArrayR2013a(&b_st, 9, m8, &cv5[0]);
    emlrtAssign(&i_y, m8);
    j_y = NULL;
    m9 = emlrtCreateCharArray(2, iv9);
    emlrtInitCharArrayR2013a(&b_st, 5, m9, &varargin_8[0]);
    emlrtAssign(&j_y, m9);
    c_st.site = &wk_emlrtRSI;
    emlrt_marshallIn(&c_st, feval(&c_st, y, emlrt_marshallOut(1.0), b_y, c_y,
      d_y, e_y, f_y, g_y, h_y, i_y, j_y, &emlrtMCI), "<output of feval>");
  }
}

static void c_FBstabAlgorithm_SolveSubprobl(const emlrtStack *sp,
  FBstabAlgorithm *o, real_T sigma, real_T itol, real_T Eouter, struct4_T *out,
  real_T *Ei, real_T *Ek, real_T *flag)
{
  CondensedVariable *x;
  CondensedVariable *xbar;
  CondensedVariable *dx;
  CondensedVariable *xp;
  CondensedResidual *ri;
  CondensedResidual *rk;
  int32_T i;
  real_T t;
  real_T merit_buffer[5];
  int32_T idx;
  real_T b_xbar[31];
  real_T c_xbar[124];
  real_T d;
  int32_T j;
  int32_T exitg1;
  real_T ys[124];
  CondensedMpcData *obj;
  real_T b[31];
  real_T tmp_data[31];
  real_T b_x[31];
  real_T dv[124];
  real_T m0;
  real_T varargin_5;
  const mxArray *y;
  const mxArray *m;
  static const int32_T iv[2] = { 1, 7 };

  static const char_T u[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  const mxArray *b_y;
  const mxArray *m1;
  static const int32_T iv1[2] = { 1, 30 };

  const mxArray *c_y;
  const mxArray *m2;
  boolean_T exitg2;
  real_T a;
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
  x = o->xi;
  xbar = o->xk;
  dx = o->dx;
  xp = o->xp;
  ri = o->ri;
  rk = o->rk;
  for (i = 0; i < 5; i++) {
    merit_buffer[i] = 0.0;
  }

  t = 1.0;
  *Ei = 0.0;
  *Ek = 0.0;
  st.site = &cd_emlrtRSI;

  /*  Performs a value copy i.e., x <- y */
  for (idx = 0; idx < 31; idx++) {
    b_xbar[idx] = xbar->z[idx];
  }

  for (idx = 0; idx < 31; idx++) {
    x->z[idx] = b_xbar[idx];
  }

  for (idx = 0; idx < 124; idx++) {
    c_xbar[idx] = xbar->v[idx];
  }

  for (idx = 0; idx < 124; idx++) {
    x->v[idx] = c_xbar[idx];
  }

  for (idx = 0; idx < 124; idx++) {
    c_xbar[idx] = xbar->y[idx];
  }

  for (idx = 0; idx < 124; idx++) {
    x->y[idx] = c_xbar[idx];
  }

  d = o->max_inner_iters;
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, d, mxDOUBLE_CLASS, (int32_T)d,
    &k_emlrtRTEI, sp);
  j = 0;
  do {
    exitg1 = 0;
    if (j <= (int32_T)d - 1) {
      st.site = &dd_emlrtRSI;

      /*  Computes the residuals for the inner PFB problem */
      idx = ri->data->f->size[0];
      if (31 != idx) {
        emlrtSizeEqCheck1DR2012b(31, idx, &m_emlrtECI, &st);
      }

      b_st.site = &he_emlrtRSI;
      obj = ri->data;
      for (i = 0; i < 124; i++) {
        ys[i] = x->v[i];
      }

      c_st.site = &rc_emlrtRSI;
      CondensedMpcData_LT(&c_st, obj, ys, b_xbar);
      c_st.site = &rc_emlrtRSI;
      CondensedMpcData_ET(&c_st, obj, ys, c_xbar);
      c_st.site = &rc_emlrtRSI;
      b_CondensedMpcData_MT(&c_st, obj, c_xbar, b);
      for (idx = 0; idx < 31; idx++) {
        tmp_data[idx] = b_xbar[idx] + b[idx];
      }

      for (i = 0; i < 31; i++) {
        b[i] = x->z[i] - xbar->z[i];
      }

      memcpy(&b_x[0], &x->z[0], 31U * sizeof(real_T));
      b_st.site = &he_emlrtRSI;
      CondensedMpcData_H(&b_st, ri->data, b_x, b_xbar);
      for (idx = 0; idx < 31; idx++) {
        b_xbar[idx] = ((b_xbar[idx] + ri->data->f->data[idx]) + tmp_data[idx]) +
          sigma * b[idx];
      }

      for (idx = 0; idx < 31; idx++) {
        ri->rz[idx] = b_xbar[idx];
      }

      for (i = 0; i < 124; i++) {
        ys[i] = x->v[i] - xbar->v[i];
      }

      for (idx = 0; idx < 124; idx++) {
        ys[idx] = x->y[idx] + sigma * ys[idx];
      }

      memcpy(&c_xbar[0], &x->v[0], 124U * sizeof(real_T));
      b_st.site = &ie_emlrtRSI;
      CondensedResidual_PFB(&b_st, ri, ys, c_xbar, dv);
      memcpy(&ri->rv[0], &dv[0], 124U * sizeof(real_T));
      ri->znorm = b_norm(ri->rz);
      ri->vnorm = c_norm(ri->rv);
      st.site = &ed_emlrtRSI;
      c_CondensedResidual_NaturalResi(&st, rk, x);
      st.site = &fd_emlrtRSI;
      *Ei = CondensedResidual_norm(&st, ri);
      st.site = &gd_emlrtRSI;
      *Ek = CondensedResidual_norm(&st, rk);
      st.site = &hd_emlrtRSI;

      /*  Performs a value copy i.e., x <- y */
      for (idx = 0; idx < 31; idx++) {
        b_xbar[idx] = x->z[idx];
      }

      for (idx = 0; idx < 31; idx++) {
        dx->z[idx] = b_xbar[idx];
      }

      for (idx = 0; idx < 124; idx++) {
        c_xbar[idx] = x->v[idx];
      }

      for (idx = 0; idx < 124; idx++) {
        dx->v[idx] = c_xbar[idx];
      }

      for (idx = 0; idx < 124; idx++) {
        c_xbar[idx] = x->y[idx];
      }

      for (idx = 0; idx < 124; idx++) {
        dx->y[idx] = c_xbar[idx];
      }

      st.site = &id_emlrtRSI;

      /*  compute y <- y + ax */
      /*  for a scalar */
      for (i = 0; i < 31; i++) {
        b[i] = xbar->z[i];
      }

      for (idx = 0; idx < 31; idx++) {
        dx->z[idx] += -b[idx];
      }

      for (i = 0; i < 124; i++) {
        ys[i] = xbar->v[i];
      }

      for (idx = 0; idx < 124; idx++) {
        dx->v[idx] += -ys[idx];
      }

      for (idx = 0; idx < 124; idx++) {
        ys[idx] = xbar->y[idx] - dx->data->b[idx];
      }

      for (idx = 0; idx < 124; idx++) {
        dx->y[idx] += -ys[idx];
      }

      st.site = &jd_emlrtRSI;
      m0 = CondensedVariable_norm(dx);
      st.site = &jd_emlrtRSI;
      if ((*Ei <= itol * muDoubleScalarMin(1.0, m0)) && (CondensedResidual_norm(
            &st, rk) > Eouter)) {
        *flag = 2.0;
        st.site = &kd_emlrtRSI;
        d_FBstabAlgorithm_PrintDetailed(&st, o, itol, ri);
        exitg1 = 1;
      } else {
        st.site = &ld_emlrtRSI;
        m0 = CondensedVariable_norm(dx);
        st.site = &ld_emlrtRSI;
        if ((*Ei <= itol * muDoubleScalarMin(1.0, m0)) &&
            (CondensedResidual_norm(&st, rk) <= Eouter)) {
          *flag = 1.0;
          st.site = &md_emlrtRSI;
          d_FBstabAlgorithm_PrintDetailed(&st, o, itol, ri);
          exitg1 = 1;
        } else {
          st.site = &nd_emlrtRSI;
          if ((*Ei <= o->itol_min * 100.0) && (CondensedResidual_norm(&st, rk) <=
               Eouter)) {
            st.site = &od_emlrtRSI;
            d_FBstabAlgorithm_PrintDetailed(&st, o, itol, ri);
            *flag = 5.0;
            exitg1 = 1;
          } else if (*Ei <= o->itol_min) {
            st.site = &pd_emlrtRSI;
            d_FBstabAlgorithm_PrintDetailed(&st, o, itol, ri);
            *flag = 4.0;
            exitg1 = 1;
          } else {
            st.site = &qd_emlrtRSI;
            if (o->display_level == 3.0) {
              b_st.site = &me_emlrtRSI;
              m0 = ri->znorm;
              varargin_5 = ri->vnorm;
              b_st.site = &ne_emlrtRSI;
              c_st.site = &wc_emlrtRSI;
              y = NULL;
              m = emlrtCreateCharArray(2, iv);
              emlrtInitCharArrayR2013a(&c_st, 7, m, &u[0]);
              emlrtAssign(&y, m);
              b_y = NULL;
              m1 = emlrtCreateCharArray(2, iv1);
              emlrtInitCharArrayR2013a(&c_st, 30, m1, &cv19[0]);
              emlrtAssign(&b_y, m1);
              c_y = NULL;
              m2 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
              if ((real_T)j + 1.0 < 2.147483648E+9) {
                idx = j + 1;
              } else {
                idx = MAX_int32_T;
              }

              *(int32_T *)emlrtMxGetData(m2) = idx;
              emlrtAssign(&c_y, m2);
              d_st.site = &wk_emlrtRSI;
              emlrt_marshallIn(&d_st, c_feval(&d_st, y, emlrt_marshallOut(1.0),
                b_y, c_y, emlrt_marshallOut(t), emlrt_marshallOut(m0),
                emlrt_marshallOut(0.0), emlrt_marshallOut(varargin_5), &emlrtMCI),
                               "<output of feval>");
            }

            if (out->newton_iters >= o->max_newton_iters) {
              out->eflag = -1.0;
              st.site = &rd_emlrtRSI;
              c_CondensedResidual_NaturalResi(&st, rk, xbar);
              st.site = &sd_emlrtRSI;
              out->res = CondensedResidual_norm(&st, rk);
              st.site = &td_emlrtRSI;

              /*  Write to a struct */
              st.site = &ud_emlrtRSI;
              FBstabAlgorithm_PrintFinal(&st, o, out->eflag, out->newton_iters,
                out->prox_iters, rk);
              *flag = -1.0;
              exitg1 = 1;
            } else {
              st.site = &vd_emlrtRSI;
              c_ImplicitConjugateGradient_Fac(&st, o->linear_solver, x, xbar,
                sigma);
              st.site = &wd_emlrtRSI;

              /*  overload negate */
              for (idx = 0; idx < 31; idx++) {
                ri->rz[idx] = -ri->rz[idx];
              }

              for (idx = 0; idx < 124; idx++) {
                ri->rv[idx] = -ri->rv[idx];
              }

              /*  public methods */
              st.site = &xd_emlrtRSI;
              ImplicitConjugateGradient_Solve(&st, o->linear_solver, ri, dx);
              merit_buffer[4] = merit_buffer[3];
              merit_buffer[3] = merit_buffer[2];
              merit_buffer[2] = merit_buffer[1];
              merit_buffer[1] = merit_buffer[0];
              st.site = &yd_emlrtRSI;
              b_st.site = &tc_emlrtRSI;
              c_st.site = &uc_emlrtRSI;
              merit_buffer[0] = 0.5 * (*Ei * *Ei);
              if (o->use_nonmonotone_linesearch) {
                st.site = &ae_emlrtRSI;
                b_st.site = &ag_emlrtRSI;
                c_st.site = &bg_emlrtRSI;
                if (!muDoubleScalarIsNaN(merit_buffer[0])) {
                  idx = 1;
                } else {
                  idx = 0;
                  i = 2;
                  exitg2 = false;
                  while ((!exitg2) && (i <= 5)) {
                    if (!muDoubleScalarIsNaN(merit_buffer[i - 1])) {
                      idx = i;
                      exitg2 = true;
                    } else {
                      i++;
                    }
                  }
                }

                if (idx == 0) {
                  m0 = merit_buffer[0];
                } else {
                  m0 = merit_buffer[idx - 1];
                  idx++;
                  for (i = idx; i < 6; i++) {
                    varargin_5 = merit_buffer[i - 1];
                    if (m0 < varargin_5) {
                      m0 = varargin_5;
                    }
                  }
                }
              } else {
                m0 = merit_buffer[0];
              }

              t = 1.0;
              varargin_5 = o->lsmax;
              emlrtForLoopVectorCheckR2012b(1.0, 1.0, varargin_5, mxDOUBLE_CLASS,
                (int32_T)varargin_5, &j_emlrtRTEI, sp);
              i = 0;
              exitg2 = false;
              while ((!exitg2) && (i <= (int32_T)varargin_5 - 1)) {
                st.site = &be_emlrtRSI;

                /*  Performs a value copy i.e., x <- y */
                for (idx = 0; idx < 31; idx++) {
                  b_xbar[idx] = x->z[idx];
                }

                for (idx = 0; idx < 31; idx++) {
                  xp->z[idx] = b_xbar[idx];
                }

                for (idx = 0; idx < 124; idx++) {
                  c_xbar[idx] = x->v[idx];
                }

                for (idx = 0; idx < 124; idx++) {
                  xp->v[idx] = c_xbar[idx];
                }

                for (idx = 0; idx < 124; idx++) {
                  c_xbar[idx] = x->y[idx];
                }

                for (idx = 0; idx < 124; idx++) {
                  xp->y[idx] = c_xbar[idx];
                }

                st.site = &ce_emlrtRSI;

                /*  compute y <- y + ax */
                /*  for a scalar */
                for (idx = 0; idx < 31; idx++) {
                  b[idx] = dx->z[idx];
                }

                for (idx = 0; idx < 31; idx++) {
                  xp->z[idx] += t * b[idx];
                }

                for (idx = 0; idx < 124; idx++) {
                  ys[idx] = dx->v[idx];
                }

                for (idx = 0; idx < 124; idx++) {
                  xp->v[idx] += t * ys[idx];
                }

                for (idx = 0; idx < 124; idx++) {
                  ys[idx] = dx->y[idx] - xp->data->b[idx];
                }

                for (idx = 0; idx < 124; idx++) {
                  xp->y[idx] += t * ys[idx];
                }

                st.site = &de_emlrtRSI;

                /*  Computes the residuals for the inner PFB problem */
                idx = ri->data->f->size[0];
                if (31 != idx) {
                  emlrtSizeEqCheck1DR2012b(31, idx, &m_emlrtECI, &st);
                }

                b_st.site = &he_emlrtRSI;
                obj = ri->data;
                for (idx = 0; idx < 124; idx++) {
                  ys[idx] = xp->v[idx];
                }

                c_st.site = &rc_emlrtRSI;
                CondensedMpcData_LT(&c_st, obj, ys, b_xbar);
                c_st.site = &rc_emlrtRSI;
                CondensedMpcData_ET(&c_st, obj, ys, c_xbar);
                c_st.site = &rc_emlrtRSI;
                b_CondensedMpcData_MT(&c_st, obj, c_xbar, b);
                for (idx = 0; idx < 31; idx++) {
                  tmp_data[idx] = b_xbar[idx] + b[idx];
                }

                for (idx = 0; idx < 31; idx++) {
                  b[idx] = xp->z[idx] - xbar->z[idx];
                }

                memcpy(&b_x[0], &xp->z[0], 31U * sizeof(real_T));
                b_st.site = &he_emlrtRSI;
                CondensedMpcData_H(&b_st, ri->data, b_x, b_xbar);
                for (idx = 0; idx < 31; idx++) {
                  b_xbar[idx] = ((b_xbar[idx] + ri->data->f->data[idx]) +
                                 tmp_data[idx]) + sigma * b[idx];
                }

                for (idx = 0; idx < 31; idx++) {
                  ri->rz[idx] = b_xbar[idx];
                }

                for (idx = 0; idx < 124; idx++) {
                  ys[idx] = xp->v[idx] - xbar->v[idx];
                }

                for (idx = 0; idx < 124; idx++) {
                  ys[idx] = xp->y[idx] + sigma * ys[idx];
                }

                memcpy(&c_xbar[0], &xp->v[0], 124U * sizeof(real_T));
                b_st.site = &ie_emlrtRSI;
                CondensedResidual_PFB(&b_st, ri, ys, c_xbar, dv);
                memcpy(&ri->rv[0], &dv[0], 124U * sizeof(real_T));
                ri->znorm = b_norm(ri->rz);
                ri->vnorm = c_norm(ri->rv);
                st.site = &ee_emlrtRSI;
                b_st.site = &ee_emlrtRSI;
                a = CondensedResidual_norm(&b_st, ri);
                b_st.site = &tc_emlrtRSI;
                c_st.site = &uc_emlrtRSI;
                if (0.5 * (a * a) <= m0 - 2.0 * t * o->eta * merit_buffer[0]) {
                  exitg2 = true;
                } else {
                  t *= o->beta;
                  i++;
                  if (*emlrtBreakCheckR2012bFlagVar != 0) {
                    emlrtBreakCheckR2012b(sp);
                  }
                }
              }

              st.site = &fe_emlrtRSI;

              /*  compute y <- y + ax */
              /*  for a scalar */
              for (i = 0; i < 31; i++) {
                b[i] = dx->z[i];
              }

              for (idx = 0; idx < 31; idx++) {
                x->z[idx] += t * b[idx];
              }

              for (i = 0; i < 124; i++) {
                ys[i] = dx->v[i];
              }

              for (idx = 0; idx < 124; idx++) {
                x->v[idx] += t * ys[idx];
              }

              for (idx = 0; idx < 124; idx++) {
                ys[idx] = dx->y[idx] - x->data->b[idx];
              }

              for (idx = 0; idx < 124; idx++) {
                x->y[idx] += t * ys[idx];
              }

              out->newton_iters++;
              j++;
              if (*emlrtBreakCheckR2012bFlagVar != 0) {
                emlrtBreakCheckR2012b(sp);
              }
            }
          }
        }
      }
    } else {
      *flag = 3.0;
      st.site = &ge_emlrtRSI;

      /*  projects the dual variable onto the nonnegative orthant */
      for (i = 0; i < 124; i++) {
        ys[i] = x->v[i];
      }

      for (i = 0; i < 124; i++) {
        c_xbar[i] = muDoubleScalarMax(0.0, ys[i]);
      }

      for (i = 0; i < 124; i++) {
        x->v[i] = c_xbar[i];
      }

      exitg1 = 1;
    }
  } while (exitg1 == 0);
}

static const mxArray *c_feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, const mxArray *e, const mxArray *f, const
  mxArray *g, const mxArray *h, const mxArray *i, emlrtMCInfo *location)
{
  const mxArray *pArrays[8];
  const mxArray *m;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  pArrays[3] = e;
  pArrays[4] = f;
  pArrays[5] = g;
  pArrays[6] = h;
  pArrays[7] = i;
  return emlrtCallMATLABR2012b(sp, 1, &m, 8, pArrays, "feval", true, location);
}

static void d_FBstabAlgorithm_PrintDetailed(const emlrtStack *sp, const
  FBstabAlgorithm *o, real_T tol, const CondensedResidual *r)
{
  real_T varargin_1;
  const mxArray *y;
  const mxArray *m;
  static const int32_T iv[2] = { 1, 7 };

  static const char_T u[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  const mxArray *b_y;
  const mxArray *m1;
  static const int32_T iv1[2] = { 1, 67 };

  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  if (o->display_level == 3.0) {
    st.site = &le_emlrtRSI;
    b_st.site = &le_emlrtRSI;
    varargin_1 = CondensedResidual_norm(&b_st, r);
    b_st.site = &wc_emlrtRSI;
    y = NULL;
    m = emlrtCreateCharArray(2, iv);
    emlrtInitCharArrayR2013a(&b_st, 7, m, &u[0]);
    emlrtAssign(&y, m);
    b_y = NULL;
    m1 = emlrtCreateCharArray(2, iv1);
    emlrtInitCharArrayR2013a(&b_st, 67, m1, &cv9[0]);
    emlrtAssign(&b_y, m1);
    c_st.site = &wk_emlrtRSI;
    emlrt_marshallIn(&c_st, d_feval(&c_st, y, emlrt_marshallOut(1.0), b_y,
      emlrt_marshallOut(varargin_1), emlrt_marshallOut(tol), &emlrtMCI),
                     "<output of feval>");
  }
}

static void d_FBstabAlgorithm_PrintIteratio(const emlrtStack *sp, const
  FBstabAlgorithm_1 *o)
{
  const mxArray *y;
  const mxArray *m;
  static const int32_T iv[2] = { 1, 7 };

  static const char_T u[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  const mxArray *b_y;
  const mxArray *m1;
  static const int32_T iv1[2] = { 1, 41 };

  const mxArray *c_y;
  const mxArray *m2;
  static const int32_T iv2[2] = { 1, 9 };

  const mxArray *d_y;
  const mxArray *m3;
  static const int32_T iv3[2] = { 1, 12 };

  const mxArray *e_y;
  const mxArray *m4;
  static const int32_T iv4[2] = { 1, 4 };

  static const char_T varargin_3[4] = { '|', 'r', 'z', '|' };

  const mxArray *f_y;
  const mxArray *m5;
  static const int32_T iv5[2] = { 1, 4 };

  static const char_T varargin_4[4] = { '|', 'r', 'l', '|' };

  const mxArray *g_y;
  const mxArray *m6;
  static const int32_T iv6[2] = { 1, 4 };

  static const char_T varargin_5[4] = { '|', 'r', 'v', '|' };

  const mxArray *h_y;
  const mxArray *m7;
  static const int32_T iv7[2] = { 1, 9 };

  const mxArray *i_y;
  const mxArray *m8;
  static const int32_T iv8[2] = { 1, 9 };

  const mxArray *j_y;
  const mxArray *m9;
  static const int32_T iv9[2] = { 1, 5 };

  static const char_T varargin_8[5] = { 's', 'i', 'g', 'm', 'a' };

  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  if (o->display_level == 2.0) {
    st.site = &vc_emlrtRSI;
    b_st.site = &wc_emlrtRSI;
    y = NULL;
    m = emlrtCreateCharArray(2, iv);
    emlrtInitCharArrayR2013a(&b_st, 7, m, &u[0]);
    emlrtAssign(&y, m);
    b_y = NULL;
    m1 = emlrtCreateCharArray(2, iv1);
    emlrtInitCharArrayR2013a(&b_st, 41, m1, &cv1[0]);
    emlrtAssign(&b_y, m1);
    c_y = NULL;
    m2 = emlrtCreateCharArray(2, iv2);
    emlrtInitCharArrayR2013a(&b_st, 9, m2, &cv2[0]);
    emlrtAssign(&c_y, m2);
    d_y = NULL;
    m3 = emlrtCreateCharArray(2, iv3);
    emlrtInitCharArrayR2013a(&b_st, 12, m3, &cv3[0]);
    emlrtAssign(&d_y, m3);
    e_y = NULL;
    m4 = emlrtCreateCharArray(2, iv4);
    emlrtInitCharArrayR2013a(&b_st, 4, m4, &varargin_3[0]);
    emlrtAssign(&e_y, m4);
    f_y = NULL;
    m5 = emlrtCreateCharArray(2, iv5);
    emlrtInitCharArrayR2013a(&b_st, 4, m5, &varargin_4[0]);
    emlrtAssign(&f_y, m5);
    g_y = NULL;
    m6 = emlrtCreateCharArray(2, iv6);
    emlrtInitCharArrayR2013a(&b_st, 4, m6, &varargin_5[0]);
    emlrtAssign(&g_y, m6);
    h_y = NULL;
    m7 = emlrtCreateCharArray(2, iv7);
    emlrtInitCharArrayR2013a(&b_st, 9, m7, &cv4[0]);
    emlrtAssign(&h_y, m7);
    i_y = NULL;
    m8 = emlrtCreateCharArray(2, iv8);
    emlrtInitCharArrayR2013a(&b_st, 9, m8, &cv5[0]);
    emlrtAssign(&i_y, m8);
    j_y = NULL;
    m9 = emlrtCreateCharArray(2, iv9);
    emlrtInitCharArrayR2013a(&b_st, 5, m9, &varargin_8[0]);
    emlrtAssign(&j_y, m9);
    c_st.site = &wk_emlrtRSI;
    emlrt_marshallIn(&c_st, feval(&c_st, y, emlrt_marshallOut(1.0), b_y, c_y,
      d_y, e_y, f_y, g_y, h_y, i_y, j_y, &emlrtMCI), "<output of feval>");
  }
}

static void d_FBstabAlgorithm_SolveSubprobl(const emlrtStack *sp,
  FBstabAlgorithm_1 *o, real_T sigma, real_T itol, real_T Eouter, struct4_T *out,
  real_T *Ei, real_T *Ek, real_T *flag)
{
  FullVariable *x;
  FullVariable *xbar;
  FullVariable *dx;
  FullVariable *xp;
  FullResidual *ri;
  FullResidual *rk;
  int32_T i;
  real_T t;
  real_T merit_buffer[5];
  int32_T idx;
  real_T b_xbar[155];
  real_T c_xbar[124];
  real_T d;
  int32_T j;
  int32_T exitg1;
  real_T varargin_2[124];
  real_T m0;
  real_T varargin_5;
  real_T varargin_4;
  const mxArray *y;
  const mxArray *m;
  static const int32_T iv[2] = { 1, 7 };

  static const char_T u[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  const mxArray *b_y;
  const mxArray *m1;
  static const int32_T iv1[2] = { 1, 30 };

  const mxArray *c_y;
  const mxArray *m2;
  boolean_T exitg2;
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
  x = o->xi;
  xbar = o->xk;
  dx = o->dx;
  xp = o->xp;
  ri = o->ri;
  rk = o->rk;
  for (i = 0; i < 5; i++) {
    merit_buffer[i] = 0.0;
  }

  t = 1.0;
  *Ei = 0.0;
  *Ek = 0.0;
  st.site = &cd_emlrtRSI;

  /*  Performs a value copy i.e., x <- y */
  for (idx = 0; idx < 155; idx++) {
    b_xbar[idx] = xbar->z[idx];
  }

  for (idx = 0; idx < 155; idx++) {
    x->z[idx] = b_xbar[idx];
  }

  for (idx = 0; idx < 124; idx++) {
    c_xbar[idx] = xbar->l[idx];
  }

  for (idx = 0; idx < 124; idx++) {
    x->l[idx] = c_xbar[idx];
  }

  for (idx = 0; idx < 124; idx++) {
    c_xbar[idx] = xbar->v[idx];
  }

  for (idx = 0; idx < 124; idx++) {
    x->v[idx] = c_xbar[idx];
  }

  for (idx = 0; idx < 124; idx++) {
    c_xbar[idx] = xbar->y[idx];
  }

  for (idx = 0; idx < 124; idx++) {
    x->y[idx] = c_xbar[idx];
  }

  d = o->max_inner_iters;
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, d, mxDOUBLE_CLASS, (int32_T)d,
    &k_emlrtRTEI, sp);
  j = 0;
  do {
    exitg1 = 0;
    if (j <= (int32_T)d - 1) {
      st.site = &dd_emlrtRSI;
      FullResidual_InnerResidual(&st, ri, x, xbar, sigma);
      st.site = &ed_emlrtRSI;
      FullResidual_NaturalResidual(&st, rk, x);
      st.site = &fd_emlrtRSI;
      *Ei = FullResidual_norm(&st, ri);
      st.site = &gd_emlrtRSI;
      *Ek = FullResidual_norm(&st, rk);
      st.site = &hd_emlrtRSI;

      /*  Performs a value copy i.e., x <- y */
      for (idx = 0; idx < 155; idx++) {
        b_xbar[idx] = x->z[idx];
      }

      for (idx = 0; idx < 155; idx++) {
        dx->z[idx] = b_xbar[idx];
      }

      for (idx = 0; idx < 124; idx++) {
        c_xbar[idx] = x->l[idx];
      }

      for (idx = 0; idx < 124; idx++) {
        dx->l[idx] = c_xbar[idx];
      }

      for (idx = 0; idx < 124; idx++) {
        c_xbar[idx] = x->v[idx];
      }

      for (idx = 0; idx < 124; idx++) {
        dx->v[idx] = c_xbar[idx];
      }

      for (idx = 0; idx < 124; idx++) {
        c_xbar[idx] = x->y[idx];
      }

      for (idx = 0; idx < 124; idx++) {
        dx->y[idx] = c_xbar[idx];
      }

      st.site = &id_emlrtRSI;

      /*  compute y <- y + ax */
      /*  for a scalar */
      for (i = 0; i < 155; i++) {
        b_xbar[i] = xbar->z[i];
      }

      for (idx = 0; idx < 155; idx++) {
        dx->z[idx] += -b_xbar[idx];
      }

      for (i = 0; i < 124; i++) {
        varargin_2[i] = xbar->l[i];
      }

      for (idx = 0; idx < 124; idx++) {
        dx->l[idx] += -varargin_2[idx];
      }

      for (i = 0; i < 124; i++) {
        varargin_2[i] = xbar->v[i];
      }

      for (idx = 0; idx < 124; idx++) {
        dx->v[idx] += -varargin_2[idx];
      }

      for (idx = 0; idx < 124; idx++) {
        varargin_2[idx] = xbar->y[idx] - dx->data->b[idx];
      }

      for (idx = 0; idx < 124; idx++) {
        dx->y[idx] += -varargin_2[idx];
      }

      st.site = &jd_emlrtRSI;
      m0 = FullVariable_norm(dx);
      st.site = &jd_emlrtRSI;
      if ((*Ei <= itol * muDoubleScalarMin(1.0, m0)) && (FullResidual_norm(&st,
            rk) > Eouter)) {
        *flag = 2.0;
        st.site = &kd_emlrtRSI;
        f_FBstabAlgorithm_PrintDetailed(&st, o, itol, ri);
        exitg1 = 1;
      } else {
        st.site = &ld_emlrtRSI;
        m0 = FullVariable_norm(dx);
        st.site = &ld_emlrtRSI;
        if ((*Ei <= itol * muDoubleScalarMin(1.0, m0)) && (FullResidual_norm(&st,
              rk) <= Eouter)) {
          *flag = 1.0;
          st.site = &md_emlrtRSI;
          f_FBstabAlgorithm_PrintDetailed(&st, o, itol, ri);
          exitg1 = 1;
        } else {
          st.site = &nd_emlrtRSI;
          if ((*Ei <= o->itol_min * 100.0) && (FullResidual_norm(&st, rk) <=
               Eouter)) {
            st.site = &od_emlrtRSI;
            f_FBstabAlgorithm_PrintDetailed(&st, o, itol, ri);
            *flag = 5.0;
            exitg1 = 1;
          } else if (*Ei <= o->itol_min) {
            st.site = &pd_emlrtRSI;
            f_FBstabAlgorithm_PrintDetailed(&st, o, itol, ri);
            *flag = 4.0;
            exitg1 = 1;
          } else {
            st.site = &qd_emlrtRSI;
            if (o->display_level == 3.0) {
              b_st.site = &me_emlrtRSI;
              m0 = ri->znorm;
              varargin_5 = ri->vnorm;
              varargin_4 = ri->lnorm;
              b_st.site = &ne_emlrtRSI;
              c_st.site = &wc_emlrtRSI;
              y = NULL;
              m = emlrtCreateCharArray(2, iv);
              emlrtInitCharArrayR2013a(&c_st, 7, m, &u[0]);
              emlrtAssign(&y, m);
              b_y = NULL;
              m1 = emlrtCreateCharArray(2, iv1);
              emlrtInitCharArrayR2013a(&c_st, 30, m1, &cv19[0]);
              emlrtAssign(&b_y, m1);
              c_y = NULL;
              m2 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
              if ((real_T)j + 1.0 < 2.147483648E+9) {
                idx = j + 1;
              } else {
                idx = MAX_int32_T;
              }

              *(int32_T *)emlrtMxGetData(m2) = idx;
              emlrtAssign(&c_y, m2);
              d_st.site = &wk_emlrtRSI;
              emlrt_marshallIn(&d_st, c_feval(&d_st, y, emlrt_marshallOut(1.0),
                b_y, c_y, emlrt_marshallOut(t), emlrt_marshallOut(m0),
                emlrt_marshallOut(varargin_4), emlrt_marshallOut(varargin_5),
                &emlrtMCI), "<output of feval>");
            }

            if (out->newton_iters >= o->max_newton_iters) {
              out->eflag = -1.0;
              st.site = &rd_emlrtRSI;
              FullResidual_NaturalResidual(&st, rk, xbar);
              st.site = &sd_emlrtRSI;
              out->res = FullResidual_norm(&st, rk);
              st.site = &td_emlrtRSI;

              /*  Write to a struct */
              st.site = &ud_emlrtRSI;
              b_FBstabAlgorithm_PrintFinal(&st, o, out->eflag, out->newton_iters,
                out->prox_iters, rk);
              *flag = -1.0;
              exitg1 = 1;
            } else {
              st.site = &vd_emlrtRSI;
              RiccatiLinearSolver_Factor(&st, o->linear_solver, x, xbar, sigma);
              st.site = &wd_emlrtRSI;

              /*  overload negate */
              for (idx = 0; idx < 155; idx++) {
                ri->rz[idx] = -ri->rz[idx];
              }

              for (idx = 0; idx < 124; idx++) {
                ri->rv[idx] = -ri->rv[idx];
              }

              for (idx = 0; idx < 124; idx++) {
                ri->rl[idx] = -ri->rl[idx];
              }

              /*  methods */
              st.site = &xd_emlrtRSI;
              RiccatiLinearSolver_Solve(&st, o->linear_solver, ri, dx);
              merit_buffer[4] = merit_buffer[3];
              merit_buffer[3] = merit_buffer[2];
              merit_buffer[2] = merit_buffer[1];
              merit_buffer[1] = merit_buffer[0];
              st.site = &yd_emlrtRSI;
              b_st.site = &tc_emlrtRSI;
              c_st.site = &uc_emlrtRSI;
              merit_buffer[0] = 0.5 * (*Ei * *Ei);
              if (o->use_nonmonotone_linesearch) {
                st.site = &ae_emlrtRSI;
                b_st.site = &ag_emlrtRSI;
                c_st.site = &bg_emlrtRSI;
                if (!muDoubleScalarIsNaN(merit_buffer[0])) {
                  idx = 1;
                } else {
                  idx = 0;
                  i = 2;
                  exitg2 = false;
                  while ((!exitg2) && (i <= 5)) {
                    if (!muDoubleScalarIsNaN(merit_buffer[i - 1])) {
                      idx = i;
                      exitg2 = true;
                    } else {
                      i++;
                    }
                  }
                }

                if (idx == 0) {
                  m0 = merit_buffer[0];
                } else {
                  m0 = merit_buffer[idx - 1];
                  idx++;
                  for (i = idx; i < 6; i++) {
                    varargin_5 = merit_buffer[i - 1];
                    if (m0 < varargin_5) {
                      m0 = varargin_5;
                    }
                  }
                }
              } else {
                m0 = merit_buffer[0];
              }

              t = 1.0;
              varargin_5 = o->lsmax;
              emlrtForLoopVectorCheckR2012b(1.0, 1.0, varargin_5, mxDOUBLE_CLASS,
                (int32_T)varargin_5, &j_emlrtRTEI, sp);
              i = 0;
              exitg2 = false;
              while ((!exitg2) && (i <= (int32_T)varargin_5 - 1)) {
                st.site = &be_emlrtRSI;

                /*  Performs a value copy i.e., x <- y */
                for (idx = 0; idx < 155; idx++) {
                  b_xbar[idx] = x->z[idx];
                }

                for (idx = 0; idx < 155; idx++) {
                  xp->z[idx] = b_xbar[idx];
                }

                for (idx = 0; idx < 124; idx++) {
                  c_xbar[idx] = x->l[idx];
                }

                for (idx = 0; idx < 124; idx++) {
                  xp->l[idx] = c_xbar[idx];
                }

                for (idx = 0; idx < 124; idx++) {
                  c_xbar[idx] = x->v[idx];
                }

                for (idx = 0; idx < 124; idx++) {
                  xp->v[idx] = c_xbar[idx];
                }

                for (idx = 0; idx < 124; idx++) {
                  c_xbar[idx] = x->y[idx];
                }

                for (idx = 0; idx < 124; idx++) {
                  xp->y[idx] = c_xbar[idx];
                }

                st.site = &ce_emlrtRSI;

                /*  compute y <- y + ax */
                /*  for a scalar */
                for (idx = 0; idx < 155; idx++) {
                  b_xbar[idx] = dx->z[idx];
                }

                for (idx = 0; idx < 155; idx++) {
                  xp->z[idx] += t * b_xbar[idx];
                }

                for (idx = 0; idx < 124; idx++) {
                  varargin_2[idx] = dx->l[idx];
                }

                for (idx = 0; idx < 124; idx++) {
                  xp->l[idx] += t * varargin_2[idx];
                }

                for (idx = 0; idx < 124; idx++) {
                  varargin_2[idx] = dx->v[idx];
                }

                for (idx = 0; idx < 124; idx++) {
                  xp->v[idx] += t * varargin_2[idx];
                }

                for (idx = 0; idx < 124; idx++) {
                  varargin_2[idx] = dx->y[idx] - xp->data->b[idx];
                }

                for (idx = 0; idx < 124; idx++) {
                  xp->y[idx] += t * varargin_2[idx];
                }

                st.site = &de_emlrtRSI;
                FullResidual_InnerResidual(&st, ri, xp, xbar, sigma);
                st.site = &ee_emlrtRSI;
                b_st.site = &ee_emlrtRSI;
                varargin_4 = FullResidual_norm(&b_st, ri);
                b_st.site = &tc_emlrtRSI;
                c_st.site = &uc_emlrtRSI;
                if (0.5 * (varargin_4 * varargin_4) <= m0 - 2.0 * t * o->eta *
                    merit_buffer[0]) {
                  exitg2 = true;
                } else {
                  t *= o->beta;
                  i++;
                  if (*emlrtBreakCheckR2012bFlagVar != 0) {
                    emlrtBreakCheckR2012b(sp);
                  }
                }
              }

              st.site = &fe_emlrtRSI;

              /*  compute y <- y + ax */
              /*  for a scalar */
              for (i = 0; i < 155; i++) {
                b_xbar[i] = dx->z[i];
              }

              for (idx = 0; idx < 155; idx++) {
                x->z[idx] += t * b_xbar[idx];
              }

              for (i = 0; i < 124; i++) {
                varargin_2[i] = dx->l[i];
              }

              for (idx = 0; idx < 124; idx++) {
                x->l[idx] += t * varargin_2[idx];
              }

              for (i = 0; i < 124; i++) {
                varargin_2[i] = dx->v[i];
              }

              for (idx = 0; idx < 124; idx++) {
                x->v[idx] += t * varargin_2[idx];
              }

              for (idx = 0; idx < 124; idx++) {
                varargin_2[idx] = dx->y[idx] - x->data->b[idx];
              }

              for (idx = 0; idx < 124; idx++) {
                x->y[idx] += t * varargin_2[idx];
              }

              out->newton_iters++;
              j++;
              if (*emlrtBreakCheckR2012bFlagVar != 0) {
                emlrtBreakCheckR2012b(sp);
              }
            }
          }
        }
      }
    } else {
      *flag = 3.0;
      st.site = &ge_emlrtRSI;

      /*  projects the dual variable onto the nonnegative orthant */
      for (i = 0; i < 124; i++) {
        varargin_2[i] = x->v[i];
      }

      for (i = 0; i < 124; i++) {
        c_xbar[i] = muDoubleScalarMax(0.0, varargin_2[i]);
      }

      for (i = 0; i < 124; i++) {
        x->v[i] = c_xbar[i];
      }

      exitg1 = 1;
    }
  } while (exitg1 == 0);
}

static const mxArray *d_feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, const mxArray *e, const mxArray *f, emlrtMCInfo *
  location)
{
  const mxArray *pArrays[5];
  const mxArray *m;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  pArrays[3] = e;
  pArrays[4] = f;
  return emlrtCallMATLABR2012b(sp, 1, &m, 5, pArrays, "feval", true, location);
}

static void e_FBstabAlgorithm_PrintDetailed(const emlrtStack *sp, const
  FBstabAlgorithm_1 *o, real_T prox_iters, real_T newton_iters, const
  FullResidual *r, real_T sigma)
{
  real_T varargin_3;
  const mxArray *y;
  const mxArray *m;
  static const int32_T iv[2] = { 1, 7 };

  static const char_T u[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  const mxArray *b_y;
  const mxArray *m1;
  static const int32_T iv1[2] = { 1, 76 };

  const mxArray *c_y;
  const mxArray *d_y;
  real_T d;
  int32_T i;
  const mxArray *e_y;
  const mxArray *m2;
  static const int32_T iv2[2] = { 1, 7 };

  const mxArray *m3;
  static const int32_T iv3[2] = { 1, 30 };

  const mxArray *m4;
  static const int32_T iv4[2] = { 1, 4 };

  static const char_T varargin_1[4] = { 'I', 't', 'e', 'r' };

  const mxArray *m5;
  static const int32_T iv5[2] = { 1, 9 };

  const mxArray *m6;
  static const int32_T iv6[2] = { 1, 4 };

  static const char_T b_varargin_3[4] = { '|', 'r', 'z', '|' };

  const mxArray *f_y;
  const mxArray *m7;
  static const int32_T iv7[2] = { 1, 4 };

  static const char_T varargin_4[4] = { '|', 'r', 'l', '|' };

  const mxArray *g_y;
  const mxArray *m8;
  static const int32_T iv8[2] = { 1, 4 };

  static const char_T varargin_5[4] = { '|', 'r', 'v', '|' };

  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  if (o->display_level == 3.0) {
    st.site = &xc_emlrtRSI;
    b_st.site = &xc_emlrtRSI;
    varargin_3 = FullResidual_norm(&b_st, r);
    b_st.site = &wc_emlrtRSI;
    y = NULL;
    m = emlrtCreateCharArray(2, iv);
    emlrtInitCharArrayR2013a(&b_st, 7, m, &u[0]);
    emlrtAssign(&y, m);
    b_y = NULL;
    m1 = emlrtCreateCharArray(2, iv1);
    emlrtInitCharArrayR2013a(&b_st, 76, m1, &cv6[0]);
    emlrtAssign(&b_y, m1);
    c_y = NULL;
    d_y = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    d = muDoubleScalarRound(prox_iters);
    if (d < 2.147483648E+9) {
      if (d >= -2.147483648E+9) {
        i = (int32_T)d;
      } else {
        i = MIN_int32_T;
      }
    } else if (d >= 2.147483648E+9) {
      i = MAX_int32_T;
    } else {
      i = 0;
    }

    *(int32_T *)emlrtMxGetData(d_y) = i;
    emlrtAssign(&c_y, d_y);
    e_y = NULL;
    d_y = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    d = muDoubleScalarRound(newton_iters);
    if (d < 2.147483648E+9) {
      if (d >= -2.147483648E+9) {
        i = (int32_T)d;
      } else {
        i = MIN_int32_T;
      }
    } else if (d >= 2.147483648E+9) {
      i = MAX_int32_T;
    } else {
      i = 0;
    }

    *(int32_T *)emlrtMxGetData(d_y) = i;
    emlrtAssign(&e_y, d_y);
    c_st.site = &wk_emlrtRSI;
    emlrt_marshallIn(&c_st, b_feval(&c_st, y, emlrt_marshallOut(1.0), b_y, c_y,
      e_y, emlrt_marshallOut(varargin_3), emlrt_marshallOut(sigma), &emlrtMCI),
                     "<output of feval>");
    st.site = &yc_emlrtRSI;
    b_st.site = &wc_emlrtRSI;
    y = NULL;
    m2 = emlrtCreateCharArray(2, iv2);
    emlrtInitCharArrayR2013a(&b_st, 7, m2, &u[0]);
    emlrtAssign(&y, m2);
    b_y = NULL;
    m3 = emlrtCreateCharArray(2, iv3);
    emlrtInitCharArrayR2013a(&b_st, 30, m3, &cv7[0]);
    emlrtAssign(&b_y, m3);
    c_y = NULL;
    m4 = emlrtCreateCharArray(2, iv4);
    emlrtInitCharArrayR2013a(&b_st, 4, m4, &varargin_1[0]);
    emlrtAssign(&c_y, m4);
    e_y = NULL;
    m5 = emlrtCreateCharArray(2, iv5);
    emlrtInitCharArrayR2013a(&b_st, 9, m5, &cv8[0]);
    emlrtAssign(&e_y, m5);
    d_y = NULL;
    m6 = emlrtCreateCharArray(2, iv6);
    emlrtInitCharArrayR2013a(&b_st, 4, m6, &b_varargin_3[0]);
    emlrtAssign(&d_y, m6);
    f_y = NULL;
    m7 = emlrtCreateCharArray(2, iv7);
    emlrtInitCharArrayR2013a(&b_st, 4, m7, &varargin_4[0]);
    emlrtAssign(&f_y, m7);
    g_y = NULL;
    m8 = emlrtCreateCharArray(2, iv8);
    emlrtInitCharArrayR2013a(&b_st, 4, m8, &varargin_5[0]);
    emlrtAssign(&g_y, m8);
    c_st.site = &wk_emlrtRSI;
    emlrt_marshallIn(&c_st, c_feval(&c_st, y, emlrt_marshallOut(1.0), b_y, c_y,
      e_y, d_y, f_y, g_y, &emlrtMCI), "<output of feval>");
  }
}

static const mxArray *e_feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  const mxArray *m;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  return emlrtCallMATLABR2012b(sp, 1, &m, 3, pArrays, "feval", true, location);
}

static real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *a__output_of_feval_, const char_T *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(a__output_of_feval_), &thisId);
  emlrtDestroyArray(&a__output_of_feval_);
  return y;
}

static void f_FBstabAlgorithm_PrintDetailed(const emlrtStack *sp, const
  FBstabAlgorithm_1 *o, real_T tol, const FullResidual *r)
{
  real_T varargin_1;
  const mxArray *y;
  const mxArray *m;
  static const int32_T iv[2] = { 1, 7 };

  static const char_T u[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  const mxArray *b_y;
  const mxArray *m1;
  static const int32_T iv1[2] = { 1, 67 };

  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  if (o->display_level == 3.0) {
    st.site = &le_emlrtRSI;
    b_st.site = &le_emlrtRSI;
    varargin_1 = FullResidual_norm(&b_st, r);
    b_st.site = &wc_emlrtRSI;
    y = NULL;
    m = emlrtCreateCharArray(2, iv);
    emlrtInitCharArrayR2013a(&b_st, 7, m, &u[0]);
    emlrtAssign(&y, m);
    b_y = NULL;
    m1 = emlrtCreateCharArray(2, iv1);
    emlrtInitCharArrayR2013a(&b_st, 67, m1, &cv9[0]);
    emlrtAssign(&b_y, m1);
    c_st.site = &wk_emlrtRSI;
    emlrt_marshallIn(&c_st, d_feval(&c_st, y, emlrt_marshallOut(1.0), b_y,
      emlrt_marshallOut(varargin_1), emlrt_marshallOut(tol), &emlrtMCI),
                     "<output of feval>");
  }
}

static const mxArray *f_feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, const mxArray *e, const mxArray *f, const
  mxArray *g, const mxArray *h, const mxArray *i, const mxArray *j, emlrtMCInfo *
  location)
{
  const mxArray *pArrays[9];
  const mxArray *m;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  pArrays[3] = e;
  pArrays[4] = f;
  pArrays[5] = g;
  pArrays[6] = h;
  pArrays[7] = i;
  pArrays[8] = j;
  return emlrtCallMATLABR2012b(sp, 1, &m, 9, pArrays, "feval", true, location);
}

static const mxArray *feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, const mxArray *e, const mxArray *f, const
  mxArray *g, const mxArray *h, const mxArray *i, const mxArray *j, const
  mxArray *k, const mxArray *l, emlrtMCInfo *location)
{
  const mxArray *pArrays[11];
  const mxArray *b_m;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  pArrays[3] = e;
  pArrays[4] = f;
  pArrays[5] = g;
  pArrays[6] = h;
  pArrays[7] = i;
  pArrays[8] = j;
  pArrays[9] = k;
  pArrays[10] = l;
  return emlrtCallMATLABR2012b(sp, 1, &b_m, 11, pArrays, "feval", true, location);
}

void FBstabAlgorithm_Solve(const emlrtStack *sp, FBstabAlgorithm *o, const
  real_T x0_v[124], const real_T x0_z[31], real_T x_z[31], real_T x_v[124],
  struct4_T *out)
{
  CondensedVariable *xk;
  CondensedVariable *xi;
  CondensedVariable *dx;
  int32_T i;
  real_T b[124];
  real_T b_dx[31];
  real_T c_dx[124];
  CondensedResidual *rk;
  CondensedResidual *ri;
  real_T E0;
  real_T y;
  real_T b_y;
  real_T itol;
  real_T sigma;
  real_T d;
  int32_T k;
  boolean_T guard1 = false;
  int32_T exitg1;
  real_T Ek;
  real_T tol_v;
  real_T rv;
  const mxArray *c_y;
  const mxArray *m;
  static const int32_T iv[2] = { 1, 7 };

  static const char_T u[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  const mxArray *d_y;
  const mxArray *m1;
  static const int32_T iv1[2] = { 1, 53 };

  const mxArray *e_y;
  const mxArray *m2;
  const mxArray *f_y;
  boolean_T b_guard1 = false;
  boolean_T primal;
  boolean_T dual;
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
  xk = o->xk;
  xi = o->xi;
  dx = o->dx;
  st.site = &hc_emlrtRSI;

  /*  Read data from a struct */
  /*  initialize from a struct */
  for (i = 0; i < 31; i++) {
    xk->z[i] = x0_z[i];
  }

  for (i = 0; i < 124; i++) {
    xk->v[i] = x0_v[i];
  }

  b_st.site = &ic_emlrtRSI;
  CondensedMpcData_A(&b_st, xk->data, x0_z, b);
  for (i = 0; i < 124; i++) {
    b[i] = xk->data->b[i] - b[i];
  }

  for (i = 0; i < 124; i++) {
    xk->y[i] = b[i];
  }

  st.site = &gc_emlrtRSI;

  /*  Fill with all ones */
  for (i = 0; i < 31; i++) {
    dx->z[i] = 1.0;
  }

  for (i = 0; i < 124; i++) {
    dx->v[i] = 1.0;
  }

  memcpy(&b_dx[0], &dx->z[0], 31U * sizeof(real_T));
  b_st.site = &lc_emlrtRSI;
  CondensedMpcData_A(&b_st, dx->data, b_dx, b);
  for (i = 0; i < 124; i++) {
    c_dx[i] = dx->data->b[i] - b[i];
  }

  for (i = 0; i < 124; i++) {
    dx->y[i] = c_dx[i];
  }

  rk = o->rk;
  ri = o->ri;
  st.site = &fc_emlrtRSI;
  c_CondensedResidual_NaturalResi(&st, rk, xk);
  st.site = &ec_emlrtRSI;
  E0 = CondensedResidual_norm(&st, rk);
  out->eflag = -1.0;
  out->newton_iters = 0.0;
  out->prox_iters = 0.0;
  out->res = E0;
  y = o->itol_min;
  b_y = o->itol_max;

  /*  */
  /*  https://github.com/dliaomcp/fbstab-matlab */
  /*  */
  /*  and is subject to the BSD-3-Clause license  */
  /*  algorithm parameters */
  /*  display settings */
  /*  0 = none */
  /*  1 = final */
  /*  2 = outer iters */
  /*  3 = inner iters */
  /*  constituent classes */
  /*  qp data object */
  /*  linear system object */
  /*  feasibility checker */
  /*  residual objects */
  /*  variable objects */
  /*  properties */
  /*  constructor  */
  /*  harmonize alpha */
  /*  Solves the QP. */
  /* 		%% initialization ************************************* */
  /*  Outer loop variable */
  /*  Inner loop variable */
  /*  Workspace */
  /*  Workspace */
  /*  Outer loop */
  /*  Inner loop */
  /*  Get quality of the initial guess. */
  /*  Initialize output structure. */
  /*  Initialize tolerance */
  /*  initial regularization parameter */
  /*  Begin the main proximal loop. */
  /*  Termination check. */
  /*  if Ek <= o.tol + E0*o.rtol */
  /*  Call inner solver ************************************* */
  /*  Reduce sigma if the iteration is deemed to have stalled or is successfull. */
  /*  if the subproblem was roughly solved */
  /*  Increase sigma after an iteration timeout that indicates  */
  /*  that the inner solver failed. */
  /*  Feasibility Check	 */
  /*  dx = xi - xk */
  /*  Accept the update if the subproblem was declared solved */
  /*  prox loop */
  /*  output solution */
  /*  end solve */
  /*  Different modes: */
  /*  1: Everything OK -> reduce tolerances */
  /*  2: Stall, subproblem solved but no progress is made -> reduce sigma */
  /*  3: Out of iterations: don't reduce itol */
  /*  4: itol_min hit -> usually happens during infeasibility detection */
  /*  5: having trouble hitting full target but can hit relaxed -> reduce sigma */
  /*  6: Divergence detected -> usually a linalg failure, increase sigma */
  /*  -1: Out of newton iterations */
  /*  Convergence check. */
  /*  form and factor the iteration matrix */
  /*  Solve the system for the rhs -ri and  store the result in dx. */
  /*  Linesearch */
  /*  compute xp = x + t*dx */
  /*  x = x + t*dx */
  /*  pfb loop */
  /*  Iteration timeout flag */
  /*  Computes the tolerances at a given point. */
  /*  printing */
  /*  update options */
  /*  methods */
  /*  Projects x onto [a,b] */
  itol = muDoubleScalarMax(muDoubleScalarMin(E0, b_y), y);
  sigma = o->sigma;
  st.site = &dc_emlrtRSI;
  c_FBstabAlgorithm_PrintIteratio(&st, o);
  d = o->max_prox_iters;
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, d, mxDOUBLE_CLASS, (int32_T)d,
    &b_emlrtRTEI, sp);
  k = 0;
  guard1 = false;
  do {
    exitg1 = 0;
    if (k <= (int32_T)d - 1) {
      st.site = &cc_emlrtRSI;
      c_CondensedResidual_NaturalResi(&st, rk, xk);
      st.site = &bc_emlrtRSI;
      Ek = CondensedResidual_norm(&st, rk);
      st.site = &ac_emlrtRSI;
      o->ztol = o->fnorm + 1.0;
      o->ltol = o->hnorm + 1.0;
      o->vtol = o->bnorm + 1.0;
      o->ztol = o->rtol * o->ztol + o->tol;
      o->ltol = o->rtol * o->ltol + o->tol;
      o->vtol = o->rtol * o->vtol + o->tol;
      E0 = o->ztol;
      y = o->ltol;
      tol_v = o->vtol;
      st.site = &yb_emlrtRSI;
      b_y = rk->znorm;
      rv = rk->vnorm;
      if ((b_y <= E0) && (0.0 <= y) && (rv <= tol_v)) {
        out->eflag = 0.0;
        guard1 = true;
        exitg1 = 1;
      } else if (out->newton_iters > o->max_newton_iters) {
        out->eflag = -1.0;
        guard1 = true;
        exitg1 = 1;
      } else {
        if (1.0E+6 <= o->dtol) {
          out->eflag = -2.0;
        }

        st.site = &xb_emlrtRSI;
        c_FBstabAlgorithm_PrintDetailed(&st, o, out->prox_iters,
          out->newton_iters, rk, sigma);
        st.site = &wb_emlrtRSI;
        if (o->display_level == 2.0) {
          b_st.site = &ad_emlrtRSI;
          E0 = rk->znorm;
          b_y = rk->vnorm;
          b_st.site = &bd_emlrtRSI;
          c_st.site = &bd_emlrtRSI;
          y = CondensedResidual_norm(&c_st, ri);
          c_st.site = &wc_emlrtRSI;
          c_y = NULL;
          m = emlrtCreateCharArray(2, iv);
          emlrtInitCharArrayR2013a(&c_st, 7, m, &u[0]);
          emlrtAssign(&c_y, m);
          d_y = NULL;
          m1 = emlrtCreateCharArray(2, iv1);
          emlrtInitCharArrayR2013a(&c_st, 53, m1, &cv[0]);
          emlrtAssign(&d_y, m1);
          e_y = NULL;
          m2 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
          tol_v = muDoubleScalarRound(out->prox_iters);
          if (tol_v < 2.147483648E+9) {
            if (tol_v >= -2.147483648E+9) {
              i = (int32_T)tol_v;
            } else {
              i = MIN_int32_T;
            }
          } else if (tol_v >= 2.147483648E+9) {
            i = MAX_int32_T;
          } else {
            i = 0;
          }

          *(int32_T *)emlrtMxGetData(m2) = i;
          emlrtAssign(&e_y, m2);
          f_y = NULL;
          m2 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
          tol_v = muDoubleScalarRound(out->newton_iters);
          if (tol_v < 2.147483648E+9) {
            if (tol_v >= -2.147483648E+9) {
              i = (int32_T)tol_v;
            } else {
              i = MIN_int32_T;
            }
          } else if (tol_v >= 2.147483648E+9) {
            i = MAX_int32_T;
          } else {
            i = 0;
          }

          *(int32_T *)emlrtMxGetData(m2) = i;
          emlrtAssign(&f_y, m2);
          d_st.site = &wk_emlrtRSI;
          emlrt_marshallIn(&d_st, feval(&d_st, c_y, emlrt_marshallOut(1.0), d_y,
            e_y, f_y, emlrt_marshallOut(E0), emlrt_marshallOut(0.0),
            emlrt_marshallOut(b_y), emlrt_marshallOut(y), emlrt_marshallOut(itol),
            emlrt_marshallOut(sigma), &emlrtMCI), "<output of feval>");
        }

        st.site = &vb_emlrtRSI;
        c_FBstabAlgorithm_SolveSubprobl(&st, o, sigma, itol, Ek, out, &E0,
          &tol_v, &rv);
        out->prox_iters++;
        if ((rv == 1.0) || (rv == 2.0)) {
          y = o->sigma_min;
          sigma = muDoubleScalarMax(sigma / 10.0, y);
          E0 = o->itol_red_factor * itol;
          y = o->itol_min;

          /*  */
          /*  https://github.com/dliaomcp/fbstab-matlab */
          /*  */
          /*  and is subject to the BSD-3-Clause license  */
          /*  algorithm parameters */
          /*  display settings */
          /*  0 = none */
          /*  1 = final */
          /*  2 = outer iters */
          /*  3 = inner iters */
          /*  constituent classes */
          /*  qp data object */
          /*  linear system object */
          /*  feasibility checker */
          /*  residual objects */
          /*  variable objects */
          /*  properties */
          /*  constructor  */
          /*  harmonize alpha */
          /*  Solves the QP. */
          /* 		%% initialization ************************************* */
          /*  Outer loop variable */
          /*  Inner loop variable */
          /*  Workspace */
          /*  Workspace */
          /*  Outer loop */
          /*  Inner loop */
          /*  Get quality of the initial guess. */
          /*  Initialize output structure. */
          /*  Initialize tolerance */
          /*  initial regularization parameter */
          /*  Begin the main proximal loop. */
          /*  Termination check. */
          /*  if Ek <= o.tol + E0*o.rtol */
          /*  Call inner solver ************************************* */
          /*  Reduce sigma if the iteration is deemed to have stalled or is successfull. */
          /*  if the subproblem was roughly solved */
          /*  Increase sigma after an iteration timeout that indicates  */
          /*  that the inner solver failed. */
          /*  Feasibility Check	 */
          /*  dx = xi - xk */
          /*  Accept the update if the subproblem was declared solved */
          /*  prox loop */
          /*  output solution */
          /*  end solve */
          /*  Different modes: */
          /*  1: Everything OK -> reduce tolerances */
          /*  2: Stall, subproblem solved but no progress is made -> reduce sigma */
          /*  3: Out of iterations: don't reduce itol */
          /*  4: itol_min hit -> usually happens during infeasibility detection */
          /*  5: having trouble hitting full target but can hit relaxed -> reduce sigma */
          /*  6: Divergence detected -> usually a linalg failure, increase sigma */
          /*  -1: Out of newton iterations */
          /*  Convergence check. */
          /*  form and factor the iteration matrix */
          /*  Solve the system for the rhs -ri and  store the result in dx. */
          /*  Linesearch */
          /*  compute xp = x + t*dx */
          /*  x = x + t*dx */
          /*  pfb loop */
          /*  Iteration timeout flag */
          /*  Computes the tolerances at a given point. */
          /*  printing */
          /*  update options */
          /*  methods */
          /*  Projects x onto [a,b] */
          itol = muDoubleScalarMax(muDoubleScalarMin(E0, tol_v), y);
        } else {
          if (rv == 5.0) {
            y = o->sigma_min;
            sigma = muDoubleScalarMax(sigma / 10.0, y);
          }
        }

        if (rv == 3.0) {
          y = o->sigma_min;
          b_y = o->sigma_max;

          /*  */
          /*  https://github.com/dliaomcp/fbstab-matlab */
          /*  */
          /*  and is subject to the BSD-3-Clause license  */
          /*  algorithm parameters */
          /*  display settings */
          /*  0 = none */
          /*  1 = final */
          /*  2 = outer iters */
          /*  3 = inner iters */
          /*  constituent classes */
          /*  qp data object */
          /*  linear system object */
          /*  feasibility checker */
          /*  residual objects */
          /*  variable objects */
          /*  properties */
          /*  constructor  */
          /*  harmonize alpha */
          /*  Solves the QP. */
          /* 		%% initialization ************************************* */
          /*  Outer loop variable */
          /*  Inner loop variable */
          /*  Workspace */
          /*  Workspace */
          /*  Outer loop */
          /*  Inner loop */
          /*  Get quality of the initial guess. */
          /*  Initialize output structure. */
          /*  Initialize tolerance */
          /*  initial regularization parameter */
          /*  Begin the main proximal loop. */
          /*  Termination check. */
          /*  if Ek <= o.tol + E0*o.rtol */
          /*  Call inner solver ************************************* */
          /*  Reduce sigma if the iteration is deemed to have stalled or is successfull. */
          /*  if the subproblem was roughly solved */
          /*  Increase sigma after an iteration timeout that indicates  */
          /*  that the inner solver failed. */
          /*  Feasibility Check	 */
          /*  dx = xi - xk */
          /*  Accept the update if the subproblem was declared solved */
          /*  prox loop */
          /*  output solution */
          /*  end solve */
          /*  Different modes: */
          /*  1: Everything OK -> reduce tolerances */
          /*  2: Stall, subproblem solved but no progress is made -> reduce sigma */
          /*  3: Out of iterations: don't reduce itol */
          /*  4: itol_min hit -> usually happens during infeasibility detection */
          /*  5: having trouble hitting full target but can hit relaxed -> reduce sigma */
          /*  6: Divergence detected -> usually a linalg failure, increase sigma */
          /*  -1: Out of newton iterations */
          /*  Convergence check. */
          /*  form and factor the iteration matrix */
          /*  Solve the system for the rhs -ri and  store the result in dx. */
          /*  Linesearch */
          /*  compute xp = x + t*dx */
          /*  x = x + t*dx */
          /*  pfb loop */
          /*  Iteration timeout flag */
          /*  Computes the tolerances at a given point. */
          /*  printing */
          /*  update options */
          /*  methods */
          /*  Projects x onto [a,b] */
          sigma = muDoubleScalarMax(muDoubleScalarMin(sigma * 10.0, b_y), y);
          E0 = itol / o->itol_red_factor;
          y = o->itol_min;

          /*  */
          /*  https://github.com/dliaomcp/fbstab-matlab */
          /*  */
          /*  and is subject to the BSD-3-Clause license  */
          /*  algorithm parameters */
          /*  display settings */
          /*  0 = none */
          /*  1 = final */
          /*  2 = outer iters */
          /*  3 = inner iters */
          /*  constituent classes */
          /*  qp data object */
          /*  linear system object */
          /*  feasibility checker */
          /*  residual objects */
          /*  variable objects */
          /*  properties */
          /*  constructor  */
          /*  harmonize alpha */
          /*  Solves the QP. */
          /* 		%% initialization ************************************* */
          /*  Outer loop variable */
          /*  Inner loop variable */
          /*  Workspace */
          /*  Workspace */
          /*  Outer loop */
          /*  Inner loop */
          /*  Get quality of the initial guess. */
          /*  Initialize output structure. */
          /*  Initialize tolerance */
          /*  initial regularization parameter */
          /*  Begin the main proximal loop. */
          /*  Termination check. */
          /*  if Ek <= o.tol + E0*o.rtol */
          /*  Call inner solver ************************************* */
          /*  Reduce sigma if the iteration is deemed to have stalled or is successfull. */
          /*  if the subproblem was roughly solved */
          /*  Increase sigma after an iteration timeout that indicates  */
          /*  that the inner solver failed. */
          /*  Feasibility Check	 */
          /*  dx = xi - xk */
          /*  Accept the update if the subproblem was declared solved */
          /*  prox loop */
          /*  output solution */
          /*  end solve */
          /*  Different modes: */
          /*  1: Everything OK -> reduce tolerances */
          /*  2: Stall, subproblem solved but no progress is made -> reduce sigma */
          /*  3: Out of iterations: don't reduce itol */
          /*  4: itol_min hit -> usually happens during infeasibility detection */
          /*  5: having trouble hitting full target but can hit relaxed -> reduce sigma */
          /*  6: Divergence detected -> usually a linalg failure, increase sigma */
          /*  -1: Out of newton iterations */
          /*  Convergence check. */
          /*  form and factor the iteration matrix */
          /*  Solve the system for the rhs -ri and  store the result in dx. */
          /*  Linesearch */
          /*  compute xp = x + t*dx */
          /*  x = x + t*dx */
          /*  pfb loop */
          /*  Iteration timeout flag */
          /*  Computes the tolerances at a given point. */
          /*  printing */
          /*  update options */
          /*  methods */
          /*  Projects x onto [a,b] */
          itol = muDoubleScalarMax(muDoubleScalarMin(E0, tol_v), y);
        }

        if (rv == -1.0) {
          guard1 = true;
          exitg1 = 1;
        } else {
          st.site = &ub_emlrtRSI;

          /*  Performs a value copy i.e., x <- y */
          for (i = 0; i < 31; i++) {
            b_dx[i] = xi->z[i];
          }

          for (i = 0; i < 31; i++) {
            dx->z[i] = b_dx[i];
          }

          for (i = 0; i < 124; i++) {
            c_dx[i] = xi->v[i];
          }

          for (i = 0; i < 124; i++) {
            dx->v[i] = c_dx[i];
          }

          for (i = 0; i < 124; i++) {
            c_dx[i] = xi->y[i];
          }

          for (i = 0; i < 124; i++) {
            dx->y[i] = c_dx[i];
          }

          st.site = &tb_emlrtRSI;

          /*  compute y <- y + ax */
          /*  for a scalar */
          for (i = 0; i < 31; i++) {
            b_dx[i] = xk->z[i];
          }

          for (i = 0; i < 31; i++) {
            dx->z[i] += -b_dx[i];
          }

          for (i = 0; i < 124; i++) {
            b[i] = xk->v[i];
          }

          for (i = 0; i < 124; i++) {
            dx->v[i] += -b[i];
          }

          for (i = 0; i < 124; i++) {
            b[i] = xk->y[i] - dx->data->b[i];
          }

          for (i = 0; i < 124; i++) {
            dx->y[i] += -b[i];
          }

          b_guard1 = false;
          if (o->check_infeasibility) {
            st.site = &sb_emlrtRSI;
            c_CondensedFeasibility_CheckFea(&st, o->feas_checker, dx, o->inf_tol,
              &primal, &dual);
            if ((!primal) && (!dual)) {
              out->eflag = -5.0;
              st.site = &rb_emlrtRSI;

              /*  Write to a struct */
              for (i = 0; i < 31; i++) {
                x_z[i] = dx->z[i];
              }

              for (i = 0; i < 124; i++) {
                x_v[i] = dx->v[i];
              }

              st.site = &qb_emlrtRSI;
              out->res = CondensedResidual_norm(&st, rk);
              st.site = &pb_emlrtRSI;
              FBstabAlgorithm_PrintFinal(&st, o, -5.0, out->newton_iters,
                out->prox_iters, rk);
              exitg1 = 1;
            } else if (!primal) {
              out->eflag = -3.0;
              st.site = &ob_emlrtRSI;

              /*  Write to a struct */
              for (i = 0; i < 31; i++) {
                x_z[i] = dx->z[i];
              }

              for (i = 0; i < 124; i++) {
                x_v[i] = dx->v[i];
              }

              st.site = &nb_emlrtRSI;
              out->res = CondensedResidual_norm(&st, rk);
              st.site = &mb_emlrtRSI;
              FBstabAlgorithm_PrintFinal(&st, o, -3.0, out->newton_iters,
                out->prox_iters, rk);
              exitg1 = 1;
            } else if (!dual) {
              out->eflag = -4.0;
              st.site = &lb_emlrtRSI;

              /*  Write to a struct */
              for (i = 0; i < 31; i++) {
                x_z[i] = dx->z[i];
              }

              for (i = 0; i < 124; i++) {
                x_v[i] = dx->v[i];
              }

              st.site = &kb_emlrtRSI;
              out->res = CondensedResidual_norm(&st, rk);
              st.site = &jb_emlrtRSI;
              FBstabAlgorithm_PrintFinal(&st, o, -4.0, out->newton_iters,
                out->prox_iters, rk);
              exitg1 = 1;
            } else {
              b_guard1 = true;
            }
          } else {
            b_guard1 = true;
          }

          if (b_guard1) {
            if ((tol_v <= Ek) && (!o->check_infeasibility)) {
              st.site = &ib_emlrtRSI;

              /*  Performs a value copy i.e., x <- y */
              for (i = 0; i < 31; i++) {
                b_dx[i] = xi->z[i];
              }

              for (i = 0; i < 31; i++) {
                xk->z[i] = b_dx[i];
              }

              for (i = 0; i < 124; i++) {
                c_dx[i] = xi->v[i];
              }

              for (i = 0; i < 124; i++) {
                xk->v[i] = c_dx[i];
              }

              for (i = 0; i < 124; i++) {
                c_dx[i] = xi->y[i];
              }

              for (i = 0; i < 124; i++) {
                xk->y[i] = c_dx[i];
              }
            } else {
              if ((rv == 1.0) || (rv == 4.0) || (rv == 5.0)) {
                st.site = &hb_emlrtRSI;

                /*  Performs a value copy i.e., x <- y */
                for (i = 0; i < 31; i++) {
                  b_dx[i] = xi->z[i];
                }

                for (i = 0; i < 31; i++) {
                  xk->z[i] = b_dx[i];
                }

                for (i = 0; i < 124; i++) {
                  c_dx[i] = xi->v[i];
                }

                for (i = 0; i < 124; i++) {
                  xk->v[i] = c_dx[i];
                }

                for (i = 0; i < 124; i++) {
                  c_dx[i] = xi->y[i];
                }

                for (i = 0; i < 124; i++) {
                  xk->y[i] = c_dx[i];
                }
              }
            }

            k++;
            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b(sp);
            }

            guard1 = false;
          }
        }
      }
    } else {
      guard1 = true;
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  if (guard1) {
    st.site = &gb_emlrtRSI;
    c_CondensedResidual_NaturalResi(&st, rk, xk);
    st.site = &fb_emlrtRSI;
    out->res = CondensedResidual_norm(&st, rk);
    st.site = &eb_emlrtRSI;

    /*  Write to a struct */
    for (i = 0; i < 31; i++) {
      x_z[i] = xk->z[i];
    }

    for (i = 0; i < 124; i++) {
      x_v[i] = xk->v[i];
    }

    st.site = &db_emlrtRSI;
    FBstabAlgorithm_PrintFinal(&st, o, out->eflag, out->newton_iters,
      out->prox_iters, rk);
  }
}

void b_FBstabAlgorithm_Solve(const emlrtStack *sp, FBstabAlgorithm_1 *o, const
  real_T x0_v[124], const real_T x0_l[124], const real_T x0_z[155], real_T x_z
  [155], real_T x_l[124], real_T x_v[124], struct4_T *out)
{
  FullVariable *xk;
  FullVariable *xi;
  FullVariable *dx;
  int32_T i;
  real_T b[124];
  real_T b_dx[155];
  real_T c_dx[124];
  FullResidual *rk;
  FullResidual *ri;
  real_T E0;
  real_T y;
  real_T b_y;
  real_T itol;
  real_T sigma;
  real_T d;
  int32_T k;
  boolean_T guard1 = false;
  int32_T exitg1;
  real_T Ek;
  real_T tol_v;
  real_T rz;
  real_T rl;
  const mxArray *c_y;
  const mxArray *m;
  static const int32_T iv[2] = { 1, 7 };

  static const char_T u[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  const mxArray *d_y;
  const mxArray *m1;
  static const int32_T iv1[2] = { 1, 53 };

  const mxArray *e_y;
  const mxArray *m2;
  const mxArray *f_y;
  boolean_T b_guard1 = false;
  boolean_T primal;
  boolean_T dual;
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

  /*  The sizes are recomputed to help */
  /*  with code generation. */
  /*  The sizes are recomputed to help */
  /*  with code generation. */
  /* methods */
  xk = o->xk;
  xi = o->xi;
  dx = o->dx;
  st.site = &hc_emlrtRSI;

  /*  Loads a variable from a struct */
  /*  initialize from a struct */
  for (i = 0; i < 155; i++) {
    xk->z[i] = x0_z[i];
  }

  for (i = 0; i < 124; i++) {
    xk->l[i] = x0_l[i];
  }

  for (i = 0; i < 124; i++) {
    xk->v[i] = x0_v[i];
  }

  b_st.site = &hh_emlrtRSI;
  MpcData_A(&b_st, xk->data, x0_z, b);
  for (i = 0; i < 124; i++) {
    b[i] = xk->data->b[i] - b[i];
  }

  for (i = 0; i < 124; i++) {
    xk->y[i] = b[i];
  }

  st.site = &gc_emlrtRSI;

  /*  Fill with all ones */
  /*  The sizes are recomputed to help */
  /*  with code generation. */
  /*  The sizes are recomputed to help */
  /*  with code generation. */
  /* methods */
  for (i = 0; i < 155; i++) {
    dx->z[i] = 1.0;
  }

  for (i = 0; i < 124; i++) {
    dx->l[i] = 1.0;
  }

  for (i = 0; i < 124; i++) {
    dx->v[i] = 1.0;
  }

  memcpy(&b_dx[0], &dx->z[0], 155U * sizeof(real_T));
  b_st.site = &ih_emlrtRSI;
  MpcData_A(&b_st, dx->data, b_dx, b);
  for (i = 0; i < 124; i++) {
    c_dx[i] = dx->data->b[i] - b[i];
  }

  for (i = 0; i < 124; i++) {
    dx->y[i] = c_dx[i];
  }

  rk = o->rk;
  ri = o->ri;
  st.site = &fc_emlrtRSI;
  FullResidual_NaturalResidual(&st, rk, xk);
  st.site = &ec_emlrtRSI;
  E0 = FullResidual_norm(&st, rk);
  out->eflag = -1.0;
  out->newton_iters = 0.0;
  out->prox_iters = 0.0;
  out->res = E0;
  y = o->itol_min;
  b_y = o->itol_max;

  /*  */
  /*  https://github.com/dliaomcp/fbstab-matlab */
  /*  */
  /*  and is subject to the BSD-3-Clause license  */
  /*  algorithm parameters */
  /*  display settings */
  /*  0 = none */
  /*  1 = final */
  /*  2 = outer iters */
  /*  3 = inner iters */
  /*  constituent classes */
  /*  qp data object */
  /*  linear system object */
  /*  feasibility checker */
  /*  residual objects */
  /*  variable objects */
  /*  properties */
  /*  constructor  */
  /*  harmonize alpha */
  /*  Solves the QP. */
  /* 		%% initialization ************************************* */
  /*  Outer loop variable */
  /*  Inner loop variable */
  /*  Workspace */
  /*  Workspace */
  /*  Outer loop */
  /*  Inner loop */
  /*  Get quality of the initial guess. */
  /*  Initialize output structure. */
  /*  Initialize tolerance */
  /*  initial regularization parameter */
  /*  Begin the main proximal loop. */
  /*  Termination check. */
  /*  if Ek <= o.tol + E0*o.rtol */
  /*  Call inner solver ************************************* */
  /*  Reduce sigma if the iteration is deemed to have stalled or is successfull. */
  /*  if the subproblem was roughly solved */
  /*  Increase sigma after an iteration timeout that indicates  */
  /*  that the inner solver failed. */
  /*  Feasibility Check	 */
  /*  dx = xi - xk */
  /*  Accept the update if the subproblem was declared solved */
  /*  prox loop */
  /*  output solution */
  /*  end solve */
  /*  Different modes: */
  /*  1: Everything OK -> reduce tolerances */
  /*  2: Stall, subproblem solved but no progress is made -> reduce sigma */
  /*  3: Out of iterations: don't reduce itol */
  /*  4: itol_min hit -> usually happens during infeasibility detection */
  /*  5: having trouble hitting full target but can hit relaxed -> reduce sigma */
  /*  6: Divergence detected -> usually a linalg failure, increase sigma */
  /*  -1: Out of newton iterations */
  /*  Convergence check. */
  /*  form and factor the iteration matrix */
  /*  Solve the system for the rhs -ri and  store the result in dx. */
  /*  Linesearch */
  /*  compute xp = x + t*dx */
  /*  x = x + t*dx */
  /*  pfb loop */
  /*  Iteration timeout flag */
  /*  Computes the tolerances at a given point. */
  /*  printing */
  /*  update options */
  /*  methods */
  /*  Projects x onto [a,b] */
  itol = muDoubleScalarMax(muDoubleScalarMin(E0, b_y), y);
  sigma = o->sigma;
  st.site = &dc_emlrtRSI;
  d_FBstabAlgorithm_PrintIteratio(&st, o);
  d = o->max_prox_iters;
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, d, mxDOUBLE_CLASS, (int32_T)d,
    &b_emlrtRTEI, sp);
  k = 0;
  guard1 = false;
  do {
    exitg1 = 0;
    if (k <= (int32_T)d - 1) {
      st.site = &cc_emlrtRSI;
      FullResidual_NaturalResidual(&st, rk, xk);
      st.site = &bc_emlrtRSI;
      Ek = FullResidual_norm(&st, rk);
      st.site = &ac_emlrtRSI;
      o->ztol = o->fnorm + 1.0;
      o->ltol = o->hnorm + 1.0;
      o->vtol = o->bnorm + 1.0;
      o->ztol = o->rtol * o->ztol + o->tol;
      o->ltol = o->rtol * o->ltol + o->tol;
      o->vtol = o->rtol * o->vtol + o->tol;
      E0 = o->ztol;
      b_y = o->ltol;
      tol_v = o->vtol;
      st.site = &yb_emlrtRSI;
      rz = rk->znorm;
      y = rk->vnorm;
      rl = rk->lnorm;
      if ((rz <= E0) && (rl <= b_y) && (y <= tol_v)) {
        out->eflag = 0.0;
        guard1 = true;
        exitg1 = 1;
      } else if (out->newton_iters > o->max_newton_iters) {
        out->eflag = -1.0;
        guard1 = true;
        exitg1 = 1;
      } else {
        if (1.0E+6 <= o->dtol) {
          out->eflag = -2.0;
        }

        st.site = &xb_emlrtRSI;
        e_FBstabAlgorithm_PrintDetailed(&st, o, out->prox_iters,
          out->newton_iters, rk, sigma);
        st.site = &wb_emlrtRSI;
        if (o->display_level == 2.0) {
          b_st.site = &ad_emlrtRSI;
          E0 = rk->znorm;
          b_y = rk->vnorm;
          y = rk->lnorm;
          b_st.site = &bd_emlrtRSI;
          c_st.site = &bd_emlrtRSI;
          tol_v = FullResidual_norm(&c_st, ri);
          c_st.site = &wc_emlrtRSI;
          c_y = NULL;
          m = emlrtCreateCharArray(2, iv);
          emlrtInitCharArrayR2013a(&c_st, 7, m, &u[0]);
          emlrtAssign(&c_y, m);
          d_y = NULL;
          m1 = emlrtCreateCharArray(2, iv1);
          emlrtInitCharArrayR2013a(&c_st, 53, m1, &cv[0]);
          emlrtAssign(&d_y, m1);
          e_y = NULL;
          m2 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
          rz = muDoubleScalarRound(out->prox_iters);
          if (rz < 2.147483648E+9) {
            if (rz >= -2.147483648E+9) {
              i = (int32_T)rz;
            } else {
              i = MIN_int32_T;
            }
          } else if (rz >= 2.147483648E+9) {
            i = MAX_int32_T;
          } else {
            i = 0;
          }

          *(int32_T *)emlrtMxGetData(m2) = i;
          emlrtAssign(&e_y, m2);
          f_y = NULL;
          m2 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
          rz = muDoubleScalarRound(out->newton_iters);
          if (rz < 2.147483648E+9) {
            if (rz >= -2.147483648E+9) {
              i = (int32_T)rz;
            } else {
              i = MIN_int32_T;
            }
          } else if (rz >= 2.147483648E+9) {
            i = MAX_int32_T;
          } else {
            i = 0;
          }

          *(int32_T *)emlrtMxGetData(m2) = i;
          emlrtAssign(&f_y, m2);
          d_st.site = &wk_emlrtRSI;
          emlrt_marshallIn(&d_st, feval(&d_st, c_y, emlrt_marshallOut(1.0), d_y,
            e_y, f_y, emlrt_marshallOut(E0), emlrt_marshallOut(y),
            emlrt_marshallOut(b_y), emlrt_marshallOut(tol_v), emlrt_marshallOut
            (itol), emlrt_marshallOut(sigma), &emlrtMCI), "<output of feval>");
        }

        st.site = &vb_emlrtRSI;
        d_FBstabAlgorithm_SolveSubprobl(&st, o, sigma, itol, Ek, out, &E0,
          &tol_v, &rz);
        out->prox_iters++;
        if ((rz == 1.0) || (rz == 2.0)) {
          y = o->sigma_min;
          sigma = muDoubleScalarMax(sigma / 10.0, y);
          E0 = o->itol_red_factor * itol;
          y = o->itol_min;

          /*  */
          /*  https://github.com/dliaomcp/fbstab-matlab */
          /*  */
          /*  and is subject to the BSD-3-Clause license  */
          /*  algorithm parameters */
          /*  display settings */
          /*  0 = none */
          /*  1 = final */
          /*  2 = outer iters */
          /*  3 = inner iters */
          /*  constituent classes */
          /*  qp data object */
          /*  linear system object */
          /*  feasibility checker */
          /*  residual objects */
          /*  variable objects */
          /*  properties */
          /*  constructor  */
          /*  harmonize alpha */
          /*  Solves the QP. */
          /* 		%% initialization ************************************* */
          /*  Outer loop variable */
          /*  Inner loop variable */
          /*  Workspace */
          /*  Workspace */
          /*  Outer loop */
          /*  Inner loop */
          /*  Get quality of the initial guess. */
          /*  Initialize output structure. */
          /*  Initialize tolerance */
          /*  initial regularization parameter */
          /*  Begin the main proximal loop. */
          /*  Termination check. */
          /*  if Ek <= o.tol + E0*o.rtol */
          /*  Call inner solver ************************************* */
          /*  Reduce sigma if the iteration is deemed to have stalled or is successfull. */
          /*  if the subproblem was roughly solved */
          /*  Increase sigma after an iteration timeout that indicates  */
          /*  that the inner solver failed. */
          /*  Feasibility Check	 */
          /*  dx = xi - xk */
          /*  Accept the update if the subproblem was declared solved */
          /*  prox loop */
          /*  output solution */
          /*  end solve */
          /*  Different modes: */
          /*  1: Everything OK -> reduce tolerances */
          /*  2: Stall, subproblem solved but no progress is made -> reduce sigma */
          /*  3: Out of iterations: don't reduce itol */
          /*  4: itol_min hit -> usually happens during infeasibility detection */
          /*  5: having trouble hitting full target but can hit relaxed -> reduce sigma */
          /*  6: Divergence detected -> usually a linalg failure, increase sigma */
          /*  -1: Out of newton iterations */
          /*  Convergence check. */
          /*  form and factor the iteration matrix */
          /*  Solve the system for the rhs -ri and  store the result in dx. */
          /*  Linesearch */
          /*  compute xp = x + t*dx */
          /*  x = x + t*dx */
          /*  pfb loop */
          /*  Iteration timeout flag */
          /*  Computes the tolerances at a given point. */
          /*  printing */
          /*  update options */
          /*  methods */
          /*  Projects x onto [a,b] */
          itol = muDoubleScalarMax(muDoubleScalarMin(E0, tol_v), y);
        } else {
          if (rz == 5.0) {
            y = o->sigma_min;
            sigma = muDoubleScalarMax(sigma / 10.0, y);
          }
        }

        if (rz == 3.0) {
          y = o->sigma_min;
          b_y = o->sigma_max;

          /*  */
          /*  https://github.com/dliaomcp/fbstab-matlab */
          /*  */
          /*  and is subject to the BSD-3-Clause license  */
          /*  algorithm parameters */
          /*  display settings */
          /*  0 = none */
          /*  1 = final */
          /*  2 = outer iters */
          /*  3 = inner iters */
          /*  constituent classes */
          /*  qp data object */
          /*  linear system object */
          /*  feasibility checker */
          /*  residual objects */
          /*  variable objects */
          /*  properties */
          /*  constructor  */
          /*  harmonize alpha */
          /*  Solves the QP. */
          /* 		%% initialization ************************************* */
          /*  Outer loop variable */
          /*  Inner loop variable */
          /*  Workspace */
          /*  Workspace */
          /*  Outer loop */
          /*  Inner loop */
          /*  Get quality of the initial guess. */
          /*  Initialize output structure. */
          /*  Initialize tolerance */
          /*  initial regularization parameter */
          /*  Begin the main proximal loop. */
          /*  Termination check. */
          /*  if Ek <= o.tol + E0*o.rtol */
          /*  Call inner solver ************************************* */
          /*  Reduce sigma if the iteration is deemed to have stalled or is successfull. */
          /*  if the subproblem was roughly solved */
          /*  Increase sigma after an iteration timeout that indicates  */
          /*  that the inner solver failed. */
          /*  Feasibility Check	 */
          /*  dx = xi - xk */
          /*  Accept the update if the subproblem was declared solved */
          /*  prox loop */
          /*  output solution */
          /*  end solve */
          /*  Different modes: */
          /*  1: Everything OK -> reduce tolerances */
          /*  2: Stall, subproblem solved but no progress is made -> reduce sigma */
          /*  3: Out of iterations: don't reduce itol */
          /*  4: itol_min hit -> usually happens during infeasibility detection */
          /*  5: having trouble hitting full target but can hit relaxed -> reduce sigma */
          /*  6: Divergence detected -> usually a linalg failure, increase sigma */
          /*  -1: Out of newton iterations */
          /*  Convergence check. */
          /*  form and factor the iteration matrix */
          /*  Solve the system for the rhs -ri and  store the result in dx. */
          /*  Linesearch */
          /*  compute xp = x + t*dx */
          /*  x = x + t*dx */
          /*  pfb loop */
          /*  Iteration timeout flag */
          /*  Computes the tolerances at a given point. */
          /*  printing */
          /*  update options */
          /*  methods */
          /*  Projects x onto [a,b] */
          sigma = muDoubleScalarMax(muDoubleScalarMin(sigma * 10.0, b_y), y);
          E0 = itol / o->itol_red_factor;
          y = o->itol_min;

          /*  */
          /*  https://github.com/dliaomcp/fbstab-matlab */
          /*  */
          /*  and is subject to the BSD-3-Clause license  */
          /*  algorithm parameters */
          /*  display settings */
          /*  0 = none */
          /*  1 = final */
          /*  2 = outer iters */
          /*  3 = inner iters */
          /*  constituent classes */
          /*  qp data object */
          /*  linear system object */
          /*  feasibility checker */
          /*  residual objects */
          /*  variable objects */
          /*  properties */
          /*  constructor  */
          /*  harmonize alpha */
          /*  Solves the QP. */
          /* 		%% initialization ************************************* */
          /*  Outer loop variable */
          /*  Inner loop variable */
          /*  Workspace */
          /*  Workspace */
          /*  Outer loop */
          /*  Inner loop */
          /*  Get quality of the initial guess. */
          /*  Initialize output structure. */
          /*  Initialize tolerance */
          /*  initial regularization parameter */
          /*  Begin the main proximal loop. */
          /*  Termination check. */
          /*  if Ek <= o.tol + E0*o.rtol */
          /*  Call inner solver ************************************* */
          /*  Reduce sigma if the iteration is deemed to have stalled or is successfull. */
          /*  if the subproblem was roughly solved */
          /*  Increase sigma after an iteration timeout that indicates  */
          /*  that the inner solver failed. */
          /*  Feasibility Check	 */
          /*  dx = xi - xk */
          /*  Accept the update if the subproblem was declared solved */
          /*  prox loop */
          /*  output solution */
          /*  end solve */
          /*  Different modes: */
          /*  1: Everything OK -> reduce tolerances */
          /*  2: Stall, subproblem solved but no progress is made -> reduce sigma */
          /*  3: Out of iterations: don't reduce itol */
          /*  4: itol_min hit -> usually happens during infeasibility detection */
          /*  5: having trouble hitting full target but can hit relaxed -> reduce sigma */
          /*  6: Divergence detected -> usually a linalg failure, increase sigma */
          /*  -1: Out of newton iterations */
          /*  Convergence check. */
          /*  form and factor the iteration matrix */
          /*  Solve the system for the rhs -ri and  store the result in dx. */
          /*  Linesearch */
          /*  compute xp = x + t*dx */
          /*  x = x + t*dx */
          /*  pfb loop */
          /*  Iteration timeout flag */
          /*  Computes the tolerances at a given point. */
          /*  printing */
          /*  update options */
          /*  methods */
          /*  Projects x onto [a,b] */
          itol = muDoubleScalarMax(muDoubleScalarMin(E0, tol_v), y);
        }

        if (rz == -1.0) {
          guard1 = true;
          exitg1 = 1;
        } else {
          st.site = &ub_emlrtRSI;

          /*  Performs a value copy i.e., x <- y */
          for (i = 0; i < 155; i++) {
            b_dx[i] = xi->z[i];
          }

          for (i = 0; i < 155; i++) {
            dx->z[i] = b_dx[i];
          }

          for (i = 0; i < 124; i++) {
            c_dx[i] = xi->l[i];
          }

          for (i = 0; i < 124; i++) {
            dx->l[i] = c_dx[i];
          }

          for (i = 0; i < 124; i++) {
            c_dx[i] = xi->v[i];
          }

          for (i = 0; i < 124; i++) {
            dx->v[i] = c_dx[i];
          }

          for (i = 0; i < 124; i++) {
            c_dx[i] = xi->y[i];
          }

          for (i = 0; i < 124; i++) {
            dx->y[i] = c_dx[i];
          }

          st.site = &tb_emlrtRSI;

          /*  compute y <- y + ax */
          /*  for a scalar */
          for (i = 0; i < 155; i++) {
            b_dx[i] = xk->z[i];
          }

          for (i = 0; i < 155; i++) {
            dx->z[i] += -b_dx[i];
          }

          for (i = 0; i < 124; i++) {
            b[i] = xk->l[i];
          }

          for (i = 0; i < 124; i++) {
            dx->l[i] += -b[i];
          }

          for (i = 0; i < 124; i++) {
            b[i] = xk->v[i];
          }

          for (i = 0; i < 124; i++) {
            dx->v[i] += -b[i];
          }

          for (i = 0; i < 124; i++) {
            b[i] = xk->y[i] - dx->data->b[i];
          }

          for (i = 0; i < 124; i++) {
            dx->y[i] += -b[i];
          }

          b_guard1 = false;
          if (o->check_infeasibility) {
            st.site = &sb_emlrtRSI;
            c_FullFeasibility_CheckFeasibil(&st, o->feas_checker, dx, o->inf_tol,
              &primal, &dual);
            if ((!primal) && (!dual)) {
              out->eflag = -5.0;
              st.site = &rb_emlrtRSI;

              /*  Write to a struct */
              for (i = 0; i < 155; i++) {
                x_z[i] = dx->z[i];
              }

              for (i = 0; i < 124; i++) {
                x_l[i] = dx->l[i];
              }

              for (i = 0; i < 124; i++) {
                x_v[i] = dx->v[i];
              }

              st.site = &qb_emlrtRSI;
              out->res = FullResidual_norm(&st, rk);
              st.site = &pb_emlrtRSI;
              b_FBstabAlgorithm_PrintFinal(&st, o, -5.0, out->newton_iters,
                out->prox_iters, rk);
              exitg1 = 1;
            } else if (!primal) {
              out->eflag = -3.0;
              st.site = &ob_emlrtRSI;

              /*  Write to a struct */
              for (i = 0; i < 155; i++) {
                x_z[i] = dx->z[i];
              }

              for (i = 0; i < 124; i++) {
                x_l[i] = dx->l[i];
              }

              for (i = 0; i < 124; i++) {
                x_v[i] = dx->v[i];
              }

              st.site = &nb_emlrtRSI;
              out->res = FullResidual_norm(&st, rk);
              st.site = &mb_emlrtRSI;
              b_FBstabAlgorithm_PrintFinal(&st, o, -3.0, out->newton_iters,
                out->prox_iters, rk);
              exitg1 = 1;
            } else if (!dual) {
              out->eflag = -4.0;
              st.site = &lb_emlrtRSI;

              /*  Write to a struct */
              for (i = 0; i < 155; i++) {
                x_z[i] = dx->z[i];
              }

              for (i = 0; i < 124; i++) {
                x_l[i] = dx->l[i];
              }

              for (i = 0; i < 124; i++) {
                x_v[i] = dx->v[i];
              }

              st.site = &kb_emlrtRSI;
              out->res = FullResidual_norm(&st, rk);
              st.site = &jb_emlrtRSI;
              b_FBstabAlgorithm_PrintFinal(&st, o, -4.0, out->newton_iters,
                out->prox_iters, rk);
              exitg1 = 1;
            } else {
              b_guard1 = true;
            }
          } else {
            b_guard1 = true;
          }

          if (b_guard1) {
            if ((tol_v <= Ek) && (!o->check_infeasibility)) {
              st.site = &ib_emlrtRSI;

              /*  Performs a value copy i.e., x <- y */
              for (i = 0; i < 155; i++) {
                b_dx[i] = xi->z[i];
              }

              for (i = 0; i < 155; i++) {
                xk->z[i] = b_dx[i];
              }

              for (i = 0; i < 124; i++) {
                c_dx[i] = xi->l[i];
              }

              for (i = 0; i < 124; i++) {
                xk->l[i] = c_dx[i];
              }

              for (i = 0; i < 124; i++) {
                c_dx[i] = xi->v[i];
              }

              for (i = 0; i < 124; i++) {
                xk->v[i] = c_dx[i];
              }

              for (i = 0; i < 124; i++) {
                c_dx[i] = xi->y[i];
              }

              for (i = 0; i < 124; i++) {
                xk->y[i] = c_dx[i];
              }
            } else {
              if ((rz == 1.0) || (rz == 4.0) || (rz == 5.0)) {
                st.site = &hb_emlrtRSI;

                /*  Performs a value copy i.e., x <- y */
                for (i = 0; i < 155; i++) {
                  b_dx[i] = xi->z[i];
                }

                for (i = 0; i < 155; i++) {
                  xk->z[i] = b_dx[i];
                }

                for (i = 0; i < 124; i++) {
                  c_dx[i] = xi->l[i];
                }

                for (i = 0; i < 124; i++) {
                  xk->l[i] = c_dx[i];
                }

                for (i = 0; i < 124; i++) {
                  c_dx[i] = xi->v[i];
                }

                for (i = 0; i < 124; i++) {
                  xk->v[i] = c_dx[i];
                }

                for (i = 0; i < 124; i++) {
                  c_dx[i] = xi->y[i];
                }

                for (i = 0; i < 124; i++) {
                  xk->y[i] = c_dx[i];
                }
              }
            }

            k++;
            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b(sp);
            }

            guard1 = false;
          }
        }
      }
    } else {
      guard1 = true;
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  if (guard1) {
    st.site = &gb_emlrtRSI;
    FullResidual_NaturalResidual(&st, rk, xk);
    st.site = &fb_emlrtRSI;
    out->res = FullResidual_norm(&st, rk);
    st.site = &eb_emlrtRSI;

    /*  Write to a struct */
    for (i = 0; i < 155; i++) {
      x_z[i] = xk->z[i];
    }

    for (i = 0; i < 124; i++) {
      x_l[i] = xk->l[i];
    }

    for (i = 0; i < 124; i++) {
      x_v[i] = xk->v[i];
    }

    st.site = &db_emlrtRSI;
    b_FBstabAlgorithm_PrintFinal(&st, o, out->eflag, out->newton_iters,
      out->prox_iters, rk);
  }
}

/* End of code generation (FBstabAlgorithm.c) */
