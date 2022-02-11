/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_fbstab_mpc_api.c
 *
 * Code generation for function '_coder_fbstab_mpc_api'
 *
 */

/* Include files */
#include "_coder_fbstab_mpc_api.h"
#include "FBstabAlgorithm.h"
#include "fbstab_mpc.h"
#include "fbstab_mpc_data.h"
#include "fbstab_mpc_mexutil.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Declarations */
static void ab_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[31]);
static const mxArray *b_emlrt_marshallOut(const struct3_T *u);
static void bb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[124]);
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *x0, const
  char_T *identifier, struct0_T *y);
static const mxArray *c_emlrt_marshallOut(const struct4_T u);
static void cb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[480]);
static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, struct0_T *y);
static void db_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[120]);
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[124]);
static void eb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[120]);
static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[155]);
static void fb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[124]);
static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *mpc, const
  char_T *identifier, struct1_T *y);
static void gb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[124]);
static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, struct1_T *y);
static void hb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[4]);
static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[496]);
static void ib_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[31]);
static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[31]);
static void jb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret[3]);
static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[124]);
static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[480]);
static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[120]);
static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[120]);
static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[124]);
static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[124]);
static void q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[4]);
static void r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[31]);
static struct2_T s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *opts,
  const char_T *identifier);
static struct2_T t_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId);
static void u_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, char_T y[3]);
static void w_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[124]);
static void x_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[155]);
static void y_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[496]);

/* Function Definitions */
static void ab_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[31])
{
  static const int32_T dims[3] = { 1, 1, 31 };

  real_T (*r)[31];
  int32_T i;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 3U, dims);
  r = (real_T (*)[31])emlrtMxGetData(src);
  for (i = 0; i < 31; i++) {
    ret[i] = (*r)[i];
  }

  emlrtDestroyArray(&src);
}

static const mxArray *b_emlrt_marshallOut(const struct3_T *u)
{
  const mxArray *y;
  static const char * sv[3] = { "z", "l", "v" };

  const mxArray *b_y;
  const mxArray *m;
  static const int32_T iv[1] = { 155 };

  real_T *pData;
  int32_T i;
  int32_T b_i;
  const mxArray *m1;
  static const int32_T iv1[1] = { 124 };

  real_T *b_pData;
  const mxArray *m2;
  static const int32_T iv2[1] = { 124 };

  real_T *c_pData;
  y = NULL;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 3, sv));
  b_y = NULL;
  m = emlrtCreateNumericArray(1, iv, mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (b_i = 0; b_i < 155; b_i++) {
    pData[i] = u->z[b_i];
    i++;
  }

  emlrtAssign(&b_y, m);
  emlrtSetFieldR2017b(y, 0, "z", b_y, 0);
  b_y = NULL;
  m1 = emlrtCreateNumericArray(1, iv1, mxDOUBLE_CLASS, mxREAL);
  b_pData = emlrtMxGetPr(m1);
  i = 0;
  for (b_i = 0; b_i < 124; b_i++) {
    b_pData[i] = u->l[b_i];
    i++;
  }

  emlrtAssign(&b_y, m1);
  emlrtSetFieldR2017b(y, 0, "l", b_y, 1);
  b_y = NULL;
  m2 = emlrtCreateNumericArray(1, iv2, mxDOUBLE_CLASS, mxREAL);
  c_pData = emlrtMxGetPr(m2);
  i = 0;
  for (b_i = 0; b_i < 124; b_i++) {
    c_pData[i] = u->v[b_i];
    i++;
  }

  emlrtAssign(&b_y, m2);
  emlrtSetFieldR2017b(y, 0, "v", b_y, 2);
  return y;
}

static void bb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[124])
{
  static const int32_T dims[3] = { 1, 4, 31 };

  real_T (*r)[124];
  int32_T i;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 3U, dims);
  r = (real_T (*)[124])emlrtMxGetData(src);
  for (i = 0; i < 124; i++) {
    ret[i] = (*r)[i];
  }

  emlrtDestroyArray(&src);
}

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *x0, const
  char_T *identifier, struct0_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  d_emlrt_marshallIn(sp, emlrtAlias(x0), &thisId, y);
  emlrtDestroyArray(&x0);
}

static const mxArray *c_emlrt_marshallOut(const struct4_T u)
{
  const mxArray *y;
  static const char * sv[4] = { "eflag", "newton_iters", "prox_iters", "res" };

  y = NULL;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 4, sv));
  emlrtSetFieldR2017b(y, 0, "eflag", emlrt_marshallOut(u.eflag), 0);
  emlrtSetFieldR2017b(y, 0, "newton_iters", emlrt_marshallOut(u.newton_iters), 1);
  emlrtSetFieldR2017b(y, 0, "prox_iters", emlrt_marshallOut(u.prox_iters), 2);
  emlrtSetFieldR2017b(y, 0, "res", emlrt_marshallOut(u.res), 3);
  return y;
}

static void cb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[480])
{
  static const int32_T dims[3] = { 4, 4, 30 };

  real_T (*r)[480];
  int32_T i;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 3U, dims);
  r = (real_T (*)[480])emlrtMxGetData(src);
  for (i = 0; i < 480; i++) {
    ret[i] = (*r)[i];
  }

  emlrtDestroyArray(&src);
}

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, struct0_T *y)
{
  emlrtMsgIdentifier thisId;
  static const char * fieldNames[3] = { "v", "l", "z" };

  static const int32_T dims = 0;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b(sp, parentId, u, 3, fieldNames, 0U, &dims);
  thisId.fIdentifier = "v";
  e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 0, "v")),
                     &thisId, y->v);
  thisId.fIdentifier = "l";
  e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 1, "l")),
                     &thisId, y->l);
  thisId.fIdentifier = "z";
  f_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 2, "z")),
                     &thisId, y->z);
  emlrtDestroyArray(&u);
}

static void db_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[120])
{
  static const int32_T dims[3] = { 4, 1, 30 };

  real_T (*r)[120];
  int32_T i;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 3U, dims);
  r = (real_T (*)[120])emlrtMxGetData(src);
  for (i = 0; i < 120; i++) {
    ret[i] = (*r)[i];
  }

  emlrtDestroyArray(&src);
}

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[124])
{
  w_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void eb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[120])
{
  static const int32_T dims[2] = { 4, 30 };

  real_T (*r)[120];
  int32_T i;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  r = (real_T (*)[120])emlrtMxGetData(src);
  for (i = 0; i < 120; i++) {
    ret[i] = (*r)[i];
  }

  emlrtDestroyArray(&src);
}

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[155])
{
  x_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void fb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[124])
{
  static const int32_T dims[3] = { 4, 1, 31 };

  real_T (*r)[124];
  int32_T i;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 3U, dims);
  r = (real_T (*)[124])emlrtMxGetData(src);
  for (i = 0; i < 124; i++) {
    ret[i] = (*r)[i];
  }

  emlrtDestroyArray(&src);
}

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *mpc, const
  char_T *identifier, struct1_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  h_emlrt_marshallIn(sp, emlrtAlias(mpc), &thisId, y);
  emlrtDestroyArray(&mpc);
}

static void gb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[124])
{
  static const int32_T dims[2] = { 4, 31 };

  real_T (*r)[124];
  int32_T i;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  r = (real_T (*)[124])emlrtMxGetData(src);
  for (i = 0; i < 124; i++) {
    ret[i] = (*r)[i];
  }

  emlrtDestroyArray(&src);
}

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, struct1_T *y)
{
  emlrtMsgIdentifier thisId;
  static const char * fieldNames[15] = { "Q", "R", "S", "A", "B", "c", "nc", "E",
    "L", "d", "xtrg", "utrg", "q", "r", "x0" };

  static const int32_T dims = 0;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b(sp, parentId, u, 15, fieldNames, 0U, &dims);
  thisId.fIdentifier = "Q";
  i_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 0, "Q")),
                     &thisId, y->Q);
  thisId.fIdentifier = "R";
  j_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 1, "R")),
                     &thisId, y->R);
  thisId.fIdentifier = "S";
  k_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 2, "S")),
                     &thisId, y->S);
  thisId.fIdentifier = "A";
  l_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 3, "A")),
                     &thisId, y->A);
  thisId.fIdentifier = "B";
  m_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 4, "B")),
                     &thisId, y->B);
  thisId.fIdentifier = "c";
  n_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 5, "c")),
                     &thisId, y->c);
  thisId.fIdentifier = "nc";
  y->nc = b_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 6,
    "nc")), &thisId);
  thisId.fIdentifier = "E";
  i_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 7, "E")),
                     &thisId, y->E);
  thisId.fIdentifier = "L";
  o_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 8, "L")),
                     &thisId, y->L);
  thisId.fIdentifier = "d";
  p_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 9, "d")),
                     &thisId, y->d);
  thisId.fIdentifier = "xtrg";
  q_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 10, "xtrg")),
                     &thisId, y->xtrg);
  thisId.fIdentifier = "utrg";
  y->utrg = b_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 11,
    "utrg")), &thisId);
  thisId.fIdentifier = "q";
  p_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 12, "q")),
                     &thisId, y->q);
  thisId.fIdentifier = "r";
  r_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 13, "r")),
                     &thisId, y->r);
  thisId.fIdentifier = "x0";
  q_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 14, "x0")),
                     &thisId, y->x0);
  emlrtDestroyArray(&u);
}

static void hb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[4])
{
  static const int32_T dims[1] = { 4 };

  real_T (*r)[4];
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims);
  r = (real_T (*)[4])emlrtMxGetData(src);
  ret[0] = (*r)[0];
  ret[1] = (*r)[1];
  ret[2] = (*r)[2];
  ret[3] = (*r)[3];
  emlrtDestroyArray(&src);
}

static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[496])
{
  y_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void ib_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[31])
{
  static const int32_T dims[2] = { 1, 31 };

  real_T (*r)[31];
  int32_T i;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  r = (real_T (*)[31])emlrtMxGetData(src);
  for (i = 0; i < 31; i++) {
    ret[i] = (*r)[i];
  }

  emlrtDestroyArray(&src);
}

static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[31])
{
  ab_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void jb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret[3])
{
  static const int32_T dims[2] = { 1, 3 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "char", false, 2U, dims);
  emlrtImportCharArrayR2015b(sp, src, &ret[0], 3);
  emlrtDestroyArray(&src);
}

static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[124])
{
  bb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[480])
{
  cb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[120])
{
  db_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[120])
{
  eb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[124])
{
  fb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[124])
{
  gb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[4])
{
  hb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[31])
{
  ib_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static struct2_T s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *opts,
  const char_T *identifier)
{
  struct2_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = t_emlrt_marshallIn(sp, emlrtAlias(opts), &thisId);
  emlrtDestroyArray(&opts);
  return y;
}

static struct2_T t_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId)
{
  struct2_T y;
  emlrtMsgIdentifier thisId;
  static const char * fieldNames[2] = { "display_level", "linear_solver" };

  static const int32_T dims = 0;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b(sp, parentId, u, 2, fieldNames, 0U, &dims);
  thisId.fIdentifier = "display_level";
  y.display_level = b_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u,
    0, 0, "display_level")), &thisId);
  thisId.fIdentifier = "linear_solver";
  u_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 1,
    "linear_solver")), &thisId, y.linear_solver);
  emlrtDestroyArray(&u);
  return y;
}

static void u_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, char_T y[3])
{
  jb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void w_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[124])
{
  static const int32_T dims[1] = { 124 };

  real_T (*r)[124];
  int32_T i;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims);
  r = (real_T (*)[124])emlrtMxGetData(src);
  for (i = 0; i < 124; i++) {
    ret[i] = (*r)[i];
  }

  emlrtDestroyArray(&src);
}

static void x_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[155])
{
  static const int32_T dims[1] = { 155 };

  real_T (*r)[155];
  int32_T i;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims);
  r = (real_T (*)[155])emlrtMxGetData(src);
  for (i = 0; i < 155; i++) {
    ret[i] = (*r)[i];
  }

  emlrtDestroyArray(&src);
}

static void y_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[496])
{
  static const int32_T dims[3] = { 4, 4, 31 };

  real_T (*r)[496];
  int32_T i;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 3U, dims);
  r = (real_T (*)[496])emlrtMxGetData(src);
  for (i = 0; i < 496; i++) {
    ret[i] = (*r)[i];
  }

  emlrtDestroyArray(&src);
}

void fbstab_mpc_api(const mxArray * const prhs[3], int32_T nlhs, const mxArray
                    *plhs[3])
{
  struct0_T x0;
  struct1_T mpc;
  struct2_T opts;
  struct3_T x;
  real_T u;
  struct4_T out;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Marshall function inputs */
  c_emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "x0", &x0);
  g_emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "mpc", &mpc);
  opts = s_emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "opts");

  /* Invoke the target function */
  fbstab_mpc(&st, &x0, &mpc, &opts, &x, &u, &out);

  /* Marshall function outputs */
  plhs[0] = b_emlrt_marshallOut(&x);
  if (nlhs > 1) {
    plhs[1] = emlrt_marshallOut(u);
  }

  if (nlhs > 2) {
    plhs[2] = c_emlrt_marshallOut(out);
  }
}

/* End of code generation (_coder_fbstab_mpc_api.c) */
