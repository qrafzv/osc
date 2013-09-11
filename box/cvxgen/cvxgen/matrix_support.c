/* Produced by CVXGEN, 2012-04-22 16:51:12 -0700.  */
/* CVXGEN is Copyright (C) 2006-2011 Jacob Mattingley, jem@cvxgen.com. */
/* The code in this file is Copyright (C) 2006-2011 Jacob Mattingley. */
/* CVXGEN, or solvers produced by CVXGEN, cannot be used for commercial */
/* applications without prior written permission from Jacob Mattingley. */

/* Filename: matrix_support.c. */
/* Description: Support functions for matrix multiplication and vector filling. */

#include "solver.h"

void multbymA(double *lhs, double *rhs) {
  lhs[0] = -rhs[0]*(-params.B[0])-rhs[1]*(-params.B[5])-rhs[22]*(1);
  lhs[1] = -rhs[0]*(-params.B[1])-rhs[1]*(-params.B[6])-rhs[23]*(1);
  lhs[2] = -rhs[0]*(-params.B[2])-rhs[1]*(-params.B[7])-rhs[24]*(1);
  lhs[3] = -rhs[0]*(-params.B[3])-rhs[1]*(-params.B[8])-rhs[25]*(1);
  lhs[4] = -rhs[0]*(-params.B[4])-rhs[1]*(-params.B[9])-rhs[26]*(1);
  lhs[5] = -rhs[2]*(-params.B[0])-rhs[3]*(-params.B[5])-rhs[22]*(-params.A[0])-rhs[23]*(-params.A[5])-rhs[24]*(-params.A[10])-rhs[25]*(-params.A[15])-rhs[26]*(-params.A[20])-rhs[27]*(1);
  lhs[6] = -rhs[2]*(-params.B[1])-rhs[3]*(-params.B[6])-rhs[22]*(-params.A[1])-rhs[23]*(-params.A[6])-rhs[24]*(-params.A[11])-rhs[25]*(-params.A[16])-rhs[26]*(-params.A[21])-rhs[28]*(1);
  lhs[7] = -rhs[2]*(-params.B[2])-rhs[3]*(-params.B[7])-rhs[22]*(-params.A[2])-rhs[23]*(-params.A[7])-rhs[24]*(-params.A[12])-rhs[25]*(-params.A[17])-rhs[26]*(-params.A[22])-rhs[29]*(1);
  lhs[8] = -rhs[2]*(-params.B[3])-rhs[3]*(-params.B[8])-rhs[22]*(-params.A[3])-rhs[23]*(-params.A[8])-rhs[24]*(-params.A[13])-rhs[25]*(-params.A[18])-rhs[26]*(-params.A[23])-rhs[30]*(1);
  lhs[9] = -rhs[2]*(-params.B[4])-rhs[3]*(-params.B[9])-rhs[22]*(-params.A[4])-rhs[23]*(-params.A[9])-rhs[24]*(-params.A[14])-rhs[25]*(-params.A[19])-rhs[26]*(-params.A[24])-rhs[31]*(1);
  lhs[10] = -rhs[4]*(-params.B[0])-rhs[5]*(-params.B[5])-rhs[27]*(-params.A[0])-rhs[28]*(-params.A[5])-rhs[29]*(-params.A[10])-rhs[30]*(-params.A[15])-rhs[31]*(-params.A[20])-rhs[32]*(1);
  lhs[11] = -rhs[4]*(-params.B[1])-rhs[5]*(-params.B[6])-rhs[27]*(-params.A[1])-rhs[28]*(-params.A[6])-rhs[29]*(-params.A[11])-rhs[30]*(-params.A[16])-rhs[31]*(-params.A[21])-rhs[33]*(1);
  lhs[12] = -rhs[4]*(-params.B[2])-rhs[5]*(-params.B[7])-rhs[27]*(-params.A[2])-rhs[28]*(-params.A[7])-rhs[29]*(-params.A[12])-rhs[30]*(-params.A[17])-rhs[31]*(-params.A[22])-rhs[34]*(1);
  lhs[13] = -rhs[4]*(-params.B[3])-rhs[5]*(-params.B[8])-rhs[27]*(-params.A[3])-rhs[28]*(-params.A[8])-rhs[29]*(-params.A[13])-rhs[30]*(-params.A[18])-rhs[31]*(-params.A[23])-rhs[35]*(1);
  lhs[14] = -rhs[4]*(-params.B[4])-rhs[5]*(-params.B[9])-rhs[27]*(-params.A[4])-rhs[28]*(-params.A[9])-rhs[29]*(-params.A[14])-rhs[30]*(-params.A[19])-rhs[31]*(-params.A[24])-rhs[36]*(1);
  lhs[15] = -rhs[6]*(-params.B[0])-rhs[7]*(-params.B[5])-rhs[32]*(-params.A[0])-rhs[33]*(-params.A[5])-rhs[34]*(-params.A[10])-rhs[35]*(-params.A[15])-rhs[36]*(-params.A[20])-rhs[37]*(1);
  lhs[16] = -rhs[6]*(-params.B[1])-rhs[7]*(-params.B[6])-rhs[32]*(-params.A[1])-rhs[33]*(-params.A[6])-rhs[34]*(-params.A[11])-rhs[35]*(-params.A[16])-rhs[36]*(-params.A[21])-rhs[38]*(1);
  lhs[17] = -rhs[6]*(-params.B[2])-rhs[7]*(-params.B[7])-rhs[32]*(-params.A[2])-rhs[33]*(-params.A[7])-rhs[34]*(-params.A[12])-rhs[35]*(-params.A[17])-rhs[36]*(-params.A[22])-rhs[39]*(1);
  lhs[18] = -rhs[6]*(-params.B[3])-rhs[7]*(-params.B[8])-rhs[32]*(-params.A[3])-rhs[33]*(-params.A[8])-rhs[34]*(-params.A[13])-rhs[35]*(-params.A[18])-rhs[36]*(-params.A[23])-rhs[40]*(1);
  lhs[19] = -rhs[6]*(-params.B[4])-rhs[7]*(-params.B[9])-rhs[32]*(-params.A[4])-rhs[33]*(-params.A[9])-rhs[34]*(-params.A[14])-rhs[35]*(-params.A[19])-rhs[36]*(-params.A[24])-rhs[41]*(1);
  lhs[20] = -rhs[8]*(-params.B[0])-rhs[9]*(-params.B[5])-rhs[37]*(-params.A[0])-rhs[38]*(-params.A[5])-rhs[39]*(-params.A[10])-rhs[40]*(-params.A[15])-rhs[41]*(-params.A[20])-rhs[42]*(1);
  lhs[21] = -rhs[8]*(-params.B[1])-rhs[9]*(-params.B[6])-rhs[37]*(-params.A[1])-rhs[38]*(-params.A[6])-rhs[39]*(-params.A[11])-rhs[40]*(-params.A[16])-rhs[41]*(-params.A[21])-rhs[43]*(1);
  lhs[22] = -rhs[8]*(-params.B[2])-rhs[9]*(-params.B[7])-rhs[37]*(-params.A[2])-rhs[38]*(-params.A[7])-rhs[39]*(-params.A[12])-rhs[40]*(-params.A[17])-rhs[41]*(-params.A[22])-rhs[44]*(1);
  lhs[23] = -rhs[8]*(-params.B[3])-rhs[9]*(-params.B[8])-rhs[37]*(-params.A[3])-rhs[38]*(-params.A[8])-rhs[39]*(-params.A[13])-rhs[40]*(-params.A[18])-rhs[41]*(-params.A[23])-rhs[45]*(1);
  lhs[24] = -rhs[8]*(-params.B[4])-rhs[9]*(-params.B[9])-rhs[37]*(-params.A[4])-rhs[38]*(-params.A[9])-rhs[39]*(-params.A[14])-rhs[40]*(-params.A[19])-rhs[41]*(-params.A[24])-rhs[46]*(1);
  lhs[25] = -rhs[10]*(-params.B[0])-rhs[11]*(-params.B[5])-rhs[42]*(-params.A[0])-rhs[43]*(-params.A[5])-rhs[44]*(-params.A[10])-rhs[45]*(-params.A[15])-rhs[46]*(-params.A[20])-rhs[47]*(1);
  lhs[26] = -rhs[10]*(-params.B[1])-rhs[11]*(-params.B[6])-rhs[42]*(-params.A[1])-rhs[43]*(-params.A[6])-rhs[44]*(-params.A[11])-rhs[45]*(-params.A[16])-rhs[46]*(-params.A[21])-rhs[48]*(1);
  lhs[27] = -rhs[10]*(-params.B[2])-rhs[11]*(-params.B[7])-rhs[42]*(-params.A[2])-rhs[43]*(-params.A[7])-rhs[44]*(-params.A[12])-rhs[45]*(-params.A[17])-rhs[46]*(-params.A[22])-rhs[49]*(1);
  lhs[28] = -rhs[10]*(-params.B[3])-rhs[11]*(-params.B[8])-rhs[42]*(-params.A[3])-rhs[43]*(-params.A[8])-rhs[44]*(-params.A[13])-rhs[45]*(-params.A[18])-rhs[46]*(-params.A[23])-rhs[50]*(1);
  lhs[29] = -rhs[10]*(-params.B[4])-rhs[11]*(-params.B[9])-rhs[42]*(-params.A[4])-rhs[43]*(-params.A[9])-rhs[44]*(-params.A[14])-rhs[45]*(-params.A[19])-rhs[46]*(-params.A[24])-rhs[51]*(1);
  lhs[30] = -rhs[12]*(-params.B[0])-rhs[13]*(-params.B[5])-rhs[47]*(-params.A[0])-rhs[48]*(-params.A[5])-rhs[49]*(-params.A[10])-rhs[50]*(-params.A[15])-rhs[51]*(-params.A[20])-rhs[52]*(1);
  lhs[31] = -rhs[12]*(-params.B[1])-rhs[13]*(-params.B[6])-rhs[47]*(-params.A[1])-rhs[48]*(-params.A[6])-rhs[49]*(-params.A[11])-rhs[50]*(-params.A[16])-rhs[51]*(-params.A[21])-rhs[53]*(1);
  lhs[32] = -rhs[12]*(-params.B[2])-rhs[13]*(-params.B[7])-rhs[47]*(-params.A[2])-rhs[48]*(-params.A[7])-rhs[49]*(-params.A[12])-rhs[50]*(-params.A[17])-rhs[51]*(-params.A[22])-rhs[54]*(1);
  lhs[33] = -rhs[12]*(-params.B[3])-rhs[13]*(-params.B[8])-rhs[47]*(-params.A[3])-rhs[48]*(-params.A[8])-rhs[49]*(-params.A[13])-rhs[50]*(-params.A[18])-rhs[51]*(-params.A[23])-rhs[55]*(1);
  lhs[34] = -rhs[12]*(-params.B[4])-rhs[13]*(-params.B[9])-rhs[47]*(-params.A[4])-rhs[48]*(-params.A[9])-rhs[49]*(-params.A[14])-rhs[50]*(-params.A[19])-rhs[51]*(-params.A[24])-rhs[56]*(1);
  lhs[35] = -rhs[14]*(-params.B[0])-rhs[15]*(-params.B[5])-rhs[52]*(-params.A[0])-rhs[53]*(-params.A[5])-rhs[54]*(-params.A[10])-rhs[55]*(-params.A[15])-rhs[56]*(-params.A[20])-rhs[57]*(1);
  lhs[36] = -rhs[14]*(-params.B[1])-rhs[15]*(-params.B[6])-rhs[52]*(-params.A[1])-rhs[53]*(-params.A[6])-rhs[54]*(-params.A[11])-rhs[55]*(-params.A[16])-rhs[56]*(-params.A[21])-rhs[58]*(1);
  lhs[37] = -rhs[14]*(-params.B[2])-rhs[15]*(-params.B[7])-rhs[52]*(-params.A[2])-rhs[53]*(-params.A[7])-rhs[54]*(-params.A[12])-rhs[55]*(-params.A[17])-rhs[56]*(-params.A[22])-rhs[59]*(1);
  lhs[38] = -rhs[14]*(-params.B[3])-rhs[15]*(-params.B[8])-rhs[52]*(-params.A[3])-rhs[53]*(-params.A[8])-rhs[54]*(-params.A[13])-rhs[55]*(-params.A[18])-rhs[56]*(-params.A[23])-rhs[60]*(1);
  lhs[39] = -rhs[14]*(-params.B[4])-rhs[15]*(-params.B[9])-rhs[52]*(-params.A[4])-rhs[53]*(-params.A[9])-rhs[54]*(-params.A[14])-rhs[55]*(-params.A[19])-rhs[56]*(-params.A[24])-rhs[61]*(1);
  lhs[40] = -rhs[16]*(-params.B[0])-rhs[17]*(-params.B[5])-rhs[57]*(-params.A[0])-rhs[58]*(-params.A[5])-rhs[59]*(-params.A[10])-rhs[60]*(-params.A[15])-rhs[61]*(-params.A[20])-rhs[62]*(1);
  lhs[41] = -rhs[16]*(-params.B[1])-rhs[17]*(-params.B[6])-rhs[57]*(-params.A[1])-rhs[58]*(-params.A[6])-rhs[59]*(-params.A[11])-rhs[60]*(-params.A[16])-rhs[61]*(-params.A[21])-rhs[63]*(1);
  lhs[42] = -rhs[16]*(-params.B[2])-rhs[17]*(-params.B[7])-rhs[57]*(-params.A[2])-rhs[58]*(-params.A[7])-rhs[59]*(-params.A[12])-rhs[60]*(-params.A[17])-rhs[61]*(-params.A[22])-rhs[64]*(1);
  lhs[43] = -rhs[16]*(-params.B[3])-rhs[17]*(-params.B[8])-rhs[57]*(-params.A[3])-rhs[58]*(-params.A[8])-rhs[59]*(-params.A[13])-rhs[60]*(-params.A[18])-rhs[61]*(-params.A[23])-rhs[65]*(1);
  lhs[44] = -rhs[16]*(-params.B[4])-rhs[17]*(-params.B[9])-rhs[57]*(-params.A[4])-rhs[58]*(-params.A[9])-rhs[59]*(-params.A[14])-rhs[60]*(-params.A[19])-rhs[61]*(-params.A[24])-rhs[66]*(1);
  lhs[45] = -rhs[18]*(-params.B[0])-rhs[19]*(-params.B[5])-rhs[62]*(-params.A[0])-rhs[63]*(-params.A[5])-rhs[64]*(-params.A[10])-rhs[65]*(-params.A[15])-rhs[66]*(-params.A[20])-rhs[67]*(1);
  lhs[46] = -rhs[18]*(-params.B[1])-rhs[19]*(-params.B[6])-rhs[62]*(-params.A[1])-rhs[63]*(-params.A[6])-rhs[64]*(-params.A[11])-rhs[65]*(-params.A[16])-rhs[66]*(-params.A[21])-rhs[68]*(1);
  lhs[47] = -rhs[18]*(-params.B[2])-rhs[19]*(-params.B[7])-rhs[62]*(-params.A[2])-rhs[63]*(-params.A[7])-rhs[64]*(-params.A[12])-rhs[65]*(-params.A[17])-rhs[66]*(-params.A[22])-rhs[69]*(1);
  lhs[48] = -rhs[18]*(-params.B[3])-rhs[19]*(-params.B[8])-rhs[62]*(-params.A[3])-rhs[63]*(-params.A[8])-rhs[64]*(-params.A[13])-rhs[65]*(-params.A[18])-rhs[66]*(-params.A[23])-rhs[70]*(1);
  lhs[49] = -rhs[18]*(-params.B[4])-rhs[19]*(-params.B[9])-rhs[62]*(-params.A[4])-rhs[63]*(-params.A[9])-rhs[64]*(-params.A[14])-rhs[65]*(-params.A[19])-rhs[66]*(-params.A[24])-rhs[71]*(1);
}

void multbymAT(double *lhs, double *rhs) {
  lhs[0] = -rhs[0]*(-params.B[0])-rhs[1]*(-params.B[1])-rhs[2]*(-params.B[2])-rhs[3]*(-params.B[3])-rhs[4]*(-params.B[4]);
  lhs[1] = -rhs[0]*(-params.B[5])-rhs[1]*(-params.B[6])-rhs[2]*(-params.B[7])-rhs[3]*(-params.B[8])-rhs[4]*(-params.B[9]);
  lhs[2] = -rhs[5]*(-params.B[0])-rhs[6]*(-params.B[1])-rhs[7]*(-params.B[2])-rhs[8]*(-params.B[3])-rhs[9]*(-params.B[4]);
  lhs[3] = -rhs[5]*(-params.B[5])-rhs[6]*(-params.B[6])-rhs[7]*(-params.B[7])-rhs[8]*(-params.B[8])-rhs[9]*(-params.B[9]);
  lhs[4] = -rhs[10]*(-params.B[0])-rhs[11]*(-params.B[1])-rhs[12]*(-params.B[2])-rhs[13]*(-params.B[3])-rhs[14]*(-params.B[4]);
  lhs[5] = -rhs[10]*(-params.B[5])-rhs[11]*(-params.B[6])-rhs[12]*(-params.B[7])-rhs[13]*(-params.B[8])-rhs[14]*(-params.B[9]);
  lhs[6] = -rhs[15]*(-params.B[0])-rhs[16]*(-params.B[1])-rhs[17]*(-params.B[2])-rhs[18]*(-params.B[3])-rhs[19]*(-params.B[4]);
  lhs[7] = -rhs[15]*(-params.B[5])-rhs[16]*(-params.B[6])-rhs[17]*(-params.B[7])-rhs[18]*(-params.B[8])-rhs[19]*(-params.B[9]);
  lhs[8] = -rhs[20]*(-params.B[0])-rhs[21]*(-params.B[1])-rhs[22]*(-params.B[2])-rhs[23]*(-params.B[3])-rhs[24]*(-params.B[4]);
  lhs[9] = -rhs[20]*(-params.B[5])-rhs[21]*(-params.B[6])-rhs[22]*(-params.B[7])-rhs[23]*(-params.B[8])-rhs[24]*(-params.B[9]);
  lhs[10] = -rhs[25]*(-params.B[0])-rhs[26]*(-params.B[1])-rhs[27]*(-params.B[2])-rhs[28]*(-params.B[3])-rhs[29]*(-params.B[4]);
  lhs[11] = -rhs[25]*(-params.B[5])-rhs[26]*(-params.B[6])-rhs[27]*(-params.B[7])-rhs[28]*(-params.B[8])-rhs[29]*(-params.B[9]);
  lhs[12] = -rhs[30]*(-params.B[0])-rhs[31]*(-params.B[1])-rhs[32]*(-params.B[2])-rhs[33]*(-params.B[3])-rhs[34]*(-params.B[4]);
  lhs[13] = -rhs[30]*(-params.B[5])-rhs[31]*(-params.B[6])-rhs[32]*(-params.B[7])-rhs[33]*(-params.B[8])-rhs[34]*(-params.B[9]);
  lhs[14] = -rhs[35]*(-params.B[0])-rhs[36]*(-params.B[1])-rhs[37]*(-params.B[2])-rhs[38]*(-params.B[3])-rhs[39]*(-params.B[4]);
  lhs[15] = -rhs[35]*(-params.B[5])-rhs[36]*(-params.B[6])-rhs[37]*(-params.B[7])-rhs[38]*(-params.B[8])-rhs[39]*(-params.B[9]);
  lhs[16] = -rhs[40]*(-params.B[0])-rhs[41]*(-params.B[1])-rhs[42]*(-params.B[2])-rhs[43]*(-params.B[3])-rhs[44]*(-params.B[4]);
  lhs[17] = -rhs[40]*(-params.B[5])-rhs[41]*(-params.B[6])-rhs[42]*(-params.B[7])-rhs[43]*(-params.B[8])-rhs[44]*(-params.B[9]);
  lhs[18] = -rhs[45]*(-params.B[0])-rhs[46]*(-params.B[1])-rhs[47]*(-params.B[2])-rhs[48]*(-params.B[3])-rhs[49]*(-params.B[4]);
  lhs[19] = -rhs[45]*(-params.B[5])-rhs[46]*(-params.B[6])-rhs[47]*(-params.B[7])-rhs[48]*(-params.B[8])-rhs[49]*(-params.B[9]);
  lhs[20] = 0;
  lhs[21] = 0;
  lhs[22] = -rhs[0]*(1)-rhs[5]*(-params.A[0])-rhs[6]*(-params.A[1])-rhs[7]*(-params.A[2])-rhs[8]*(-params.A[3])-rhs[9]*(-params.A[4]);
  lhs[23] = -rhs[1]*(1)-rhs[5]*(-params.A[5])-rhs[6]*(-params.A[6])-rhs[7]*(-params.A[7])-rhs[8]*(-params.A[8])-rhs[9]*(-params.A[9]);
  lhs[24] = -rhs[2]*(1)-rhs[5]*(-params.A[10])-rhs[6]*(-params.A[11])-rhs[7]*(-params.A[12])-rhs[8]*(-params.A[13])-rhs[9]*(-params.A[14]);
  lhs[25] = -rhs[3]*(1)-rhs[5]*(-params.A[15])-rhs[6]*(-params.A[16])-rhs[7]*(-params.A[17])-rhs[8]*(-params.A[18])-rhs[9]*(-params.A[19]);
  lhs[26] = -rhs[4]*(1)-rhs[5]*(-params.A[20])-rhs[6]*(-params.A[21])-rhs[7]*(-params.A[22])-rhs[8]*(-params.A[23])-rhs[9]*(-params.A[24]);
  lhs[27] = -rhs[5]*(1)-rhs[10]*(-params.A[0])-rhs[11]*(-params.A[1])-rhs[12]*(-params.A[2])-rhs[13]*(-params.A[3])-rhs[14]*(-params.A[4]);
  lhs[28] = -rhs[6]*(1)-rhs[10]*(-params.A[5])-rhs[11]*(-params.A[6])-rhs[12]*(-params.A[7])-rhs[13]*(-params.A[8])-rhs[14]*(-params.A[9]);
  lhs[29] = -rhs[7]*(1)-rhs[10]*(-params.A[10])-rhs[11]*(-params.A[11])-rhs[12]*(-params.A[12])-rhs[13]*(-params.A[13])-rhs[14]*(-params.A[14]);
  lhs[30] = -rhs[8]*(1)-rhs[10]*(-params.A[15])-rhs[11]*(-params.A[16])-rhs[12]*(-params.A[17])-rhs[13]*(-params.A[18])-rhs[14]*(-params.A[19]);
  lhs[31] = -rhs[9]*(1)-rhs[10]*(-params.A[20])-rhs[11]*(-params.A[21])-rhs[12]*(-params.A[22])-rhs[13]*(-params.A[23])-rhs[14]*(-params.A[24]);
  lhs[32] = -rhs[10]*(1)-rhs[15]*(-params.A[0])-rhs[16]*(-params.A[1])-rhs[17]*(-params.A[2])-rhs[18]*(-params.A[3])-rhs[19]*(-params.A[4]);
  lhs[33] = -rhs[11]*(1)-rhs[15]*(-params.A[5])-rhs[16]*(-params.A[6])-rhs[17]*(-params.A[7])-rhs[18]*(-params.A[8])-rhs[19]*(-params.A[9]);
  lhs[34] = -rhs[12]*(1)-rhs[15]*(-params.A[10])-rhs[16]*(-params.A[11])-rhs[17]*(-params.A[12])-rhs[18]*(-params.A[13])-rhs[19]*(-params.A[14]);
  lhs[35] = -rhs[13]*(1)-rhs[15]*(-params.A[15])-rhs[16]*(-params.A[16])-rhs[17]*(-params.A[17])-rhs[18]*(-params.A[18])-rhs[19]*(-params.A[19]);
  lhs[36] = -rhs[14]*(1)-rhs[15]*(-params.A[20])-rhs[16]*(-params.A[21])-rhs[17]*(-params.A[22])-rhs[18]*(-params.A[23])-rhs[19]*(-params.A[24]);
  lhs[37] = -rhs[15]*(1)-rhs[20]*(-params.A[0])-rhs[21]*(-params.A[1])-rhs[22]*(-params.A[2])-rhs[23]*(-params.A[3])-rhs[24]*(-params.A[4]);
  lhs[38] = -rhs[16]*(1)-rhs[20]*(-params.A[5])-rhs[21]*(-params.A[6])-rhs[22]*(-params.A[7])-rhs[23]*(-params.A[8])-rhs[24]*(-params.A[9]);
  lhs[39] = -rhs[17]*(1)-rhs[20]*(-params.A[10])-rhs[21]*(-params.A[11])-rhs[22]*(-params.A[12])-rhs[23]*(-params.A[13])-rhs[24]*(-params.A[14]);
  lhs[40] = -rhs[18]*(1)-rhs[20]*(-params.A[15])-rhs[21]*(-params.A[16])-rhs[22]*(-params.A[17])-rhs[23]*(-params.A[18])-rhs[24]*(-params.A[19]);
  lhs[41] = -rhs[19]*(1)-rhs[20]*(-params.A[20])-rhs[21]*(-params.A[21])-rhs[22]*(-params.A[22])-rhs[23]*(-params.A[23])-rhs[24]*(-params.A[24]);
  lhs[42] = -rhs[20]*(1)-rhs[25]*(-params.A[0])-rhs[26]*(-params.A[1])-rhs[27]*(-params.A[2])-rhs[28]*(-params.A[3])-rhs[29]*(-params.A[4]);
  lhs[43] = -rhs[21]*(1)-rhs[25]*(-params.A[5])-rhs[26]*(-params.A[6])-rhs[27]*(-params.A[7])-rhs[28]*(-params.A[8])-rhs[29]*(-params.A[9]);
  lhs[44] = -rhs[22]*(1)-rhs[25]*(-params.A[10])-rhs[26]*(-params.A[11])-rhs[27]*(-params.A[12])-rhs[28]*(-params.A[13])-rhs[29]*(-params.A[14]);
  lhs[45] = -rhs[23]*(1)-rhs[25]*(-params.A[15])-rhs[26]*(-params.A[16])-rhs[27]*(-params.A[17])-rhs[28]*(-params.A[18])-rhs[29]*(-params.A[19]);
  lhs[46] = -rhs[24]*(1)-rhs[25]*(-params.A[20])-rhs[26]*(-params.A[21])-rhs[27]*(-params.A[22])-rhs[28]*(-params.A[23])-rhs[29]*(-params.A[24]);
  lhs[47] = -rhs[25]*(1)-rhs[30]*(-params.A[0])-rhs[31]*(-params.A[1])-rhs[32]*(-params.A[2])-rhs[33]*(-params.A[3])-rhs[34]*(-params.A[4]);
  lhs[48] = -rhs[26]*(1)-rhs[30]*(-params.A[5])-rhs[31]*(-params.A[6])-rhs[32]*(-params.A[7])-rhs[33]*(-params.A[8])-rhs[34]*(-params.A[9]);
  lhs[49] = -rhs[27]*(1)-rhs[30]*(-params.A[10])-rhs[31]*(-params.A[11])-rhs[32]*(-params.A[12])-rhs[33]*(-params.A[13])-rhs[34]*(-params.A[14]);
  lhs[50] = -rhs[28]*(1)-rhs[30]*(-params.A[15])-rhs[31]*(-params.A[16])-rhs[32]*(-params.A[17])-rhs[33]*(-params.A[18])-rhs[34]*(-params.A[19]);
  lhs[51] = -rhs[29]*(1)-rhs[30]*(-params.A[20])-rhs[31]*(-params.A[21])-rhs[32]*(-params.A[22])-rhs[33]*(-params.A[23])-rhs[34]*(-params.A[24]);
  lhs[52] = -rhs[30]*(1)-rhs[35]*(-params.A[0])-rhs[36]*(-params.A[1])-rhs[37]*(-params.A[2])-rhs[38]*(-params.A[3])-rhs[39]*(-params.A[4]);
  lhs[53] = -rhs[31]*(1)-rhs[35]*(-params.A[5])-rhs[36]*(-params.A[6])-rhs[37]*(-params.A[7])-rhs[38]*(-params.A[8])-rhs[39]*(-params.A[9]);
  lhs[54] = -rhs[32]*(1)-rhs[35]*(-params.A[10])-rhs[36]*(-params.A[11])-rhs[37]*(-params.A[12])-rhs[38]*(-params.A[13])-rhs[39]*(-params.A[14]);
  lhs[55] = -rhs[33]*(1)-rhs[35]*(-params.A[15])-rhs[36]*(-params.A[16])-rhs[37]*(-params.A[17])-rhs[38]*(-params.A[18])-rhs[39]*(-params.A[19]);
  lhs[56] = -rhs[34]*(1)-rhs[35]*(-params.A[20])-rhs[36]*(-params.A[21])-rhs[37]*(-params.A[22])-rhs[38]*(-params.A[23])-rhs[39]*(-params.A[24]);
  lhs[57] = -rhs[35]*(1)-rhs[40]*(-params.A[0])-rhs[41]*(-params.A[1])-rhs[42]*(-params.A[2])-rhs[43]*(-params.A[3])-rhs[44]*(-params.A[4]);
  lhs[58] = -rhs[36]*(1)-rhs[40]*(-params.A[5])-rhs[41]*(-params.A[6])-rhs[42]*(-params.A[7])-rhs[43]*(-params.A[8])-rhs[44]*(-params.A[9]);
  lhs[59] = -rhs[37]*(1)-rhs[40]*(-params.A[10])-rhs[41]*(-params.A[11])-rhs[42]*(-params.A[12])-rhs[43]*(-params.A[13])-rhs[44]*(-params.A[14]);
  lhs[60] = -rhs[38]*(1)-rhs[40]*(-params.A[15])-rhs[41]*(-params.A[16])-rhs[42]*(-params.A[17])-rhs[43]*(-params.A[18])-rhs[44]*(-params.A[19]);
  lhs[61] = -rhs[39]*(1)-rhs[40]*(-params.A[20])-rhs[41]*(-params.A[21])-rhs[42]*(-params.A[22])-rhs[43]*(-params.A[23])-rhs[44]*(-params.A[24]);
  lhs[62] = -rhs[40]*(1)-rhs[45]*(-params.A[0])-rhs[46]*(-params.A[1])-rhs[47]*(-params.A[2])-rhs[48]*(-params.A[3])-rhs[49]*(-params.A[4]);
  lhs[63] = -rhs[41]*(1)-rhs[45]*(-params.A[5])-rhs[46]*(-params.A[6])-rhs[47]*(-params.A[7])-rhs[48]*(-params.A[8])-rhs[49]*(-params.A[9]);
  lhs[64] = -rhs[42]*(1)-rhs[45]*(-params.A[10])-rhs[46]*(-params.A[11])-rhs[47]*(-params.A[12])-rhs[48]*(-params.A[13])-rhs[49]*(-params.A[14]);
  lhs[65] = -rhs[43]*(1)-rhs[45]*(-params.A[15])-rhs[46]*(-params.A[16])-rhs[47]*(-params.A[17])-rhs[48]*(-params.A[18])-rhs[49]*(-params.A[19]);
  lhs[66] = -rhs[44]*(1)-rhs[45]*(-params.A[20])-rhs[46]*(-params.A[21])-rhs[47]*(-params.A[22])-rhs[48]*(-params.A[23])-rhs[49]*(-params.A[24]);
  lhs[67] = -rhs[45]*(1);
  lhs[68] = -rhs[46]*(1);
  lhs[69] = -rhs[47]*(1);
  lhs[70] = -rhs[48]*(1);
  lhs[71] = -rhs[49]*(1);
}

void multbymG(double *lhs, double *rhs) {
  lhs[0] = -rhs[0]*(1);
  lhs[1] = -rhs[1]*(1);
  lhs[2] = -rhs[2]*(1);
  lhs[3] = -rhs[3]*(1);
  lhs[4] = -rhs[4]*(1);
  lhs[5] = -rhs[5]*(1);
  lhs[6] = -rhs[6]*(1);
  lhs[7] = -rhs[7]*(1);
  lhs[8] = -rhs[8]*(1);
  lhs[9] = -rhs[9]*(1);
  lhs[10] = -rhs[10]*(1);
  lhs[11] = -rhs[11]*(1);
  lhs[12] = -rhs[12]*(1);
  lhs[13] = -rhs[13]*(1);
  lhs[14] = -rhs[14]*(1);
  lhs[15] = -rhs[15]*(1);
  lhs[16] = -rhs[16]*(1);
  lhs[17] = -rhs[17]*(1);
  lhs[18] = -rhs[18]*(1);
  lhs[19] = -rhs[19]*(1);
  lhs[20] = -rhs[20]*(1);
  lhs[21] = -rhs[21]*(1);
  lhs[22] = -rhs[0]*(-1);
  lhs[23] = -rhs[1]*(-1);
  lhs[24] = -rhs[2]*(-1);
  lhs[25] = -rhs[3]*(-1);
  lhs[26] = -rhs[4]*(-1);
  lhs[27] = -rhs[5]*(-1);
  lhs[28] = -rhs[6]*(-1);
  lhs[29] = -rhs[7]*(-1);
  lhs[30] = -rhs[8]*(-1);
  lhs[31] = -rhs[9]*(-1);
  lhs[32] = -rhs[10]*(-1);
  lhs[33] = -rhs[11]*(-1);
  lhs[34] = -rhs[12]*(-1);
  lhs[35] = -rhs[13]*(-1);
  lhs[36] = -rhs[14]*(-1);
  lhs[37] = -rhs[15]*(-1);
  lhs[38] = -rhs[16]*(-1);
  lhs[39] = -rhs[17]*(-1);
  lhs[40] = -rhs[18]*(-1);
  lhs[41] = -rhs[19]*(-1);
  lhs[42] = -rhs[20]*(-1);
  lhs[43] = -rhs[21]*(-1);
}

void multbymGT(double *lhs, double *rhs) {
  lhs[0] = -rhs[0]*(1)-rhs[22]*(-1);
  lhs[1] = -rhs[1]*(1)-rhs[23]*(-1);
  lhs[2] = -rhs[2]*(1)-rhs[24]*(-1);
  lhs[3] = -rhs[3]*(1)-rhs[25]*(-1);
  lhs[4] = -rhs[4]*(1)-rhs[26]*(-1);
  lhs[5] = -rhs[5]*(1)-rhs[27]*(-1);
  lhs[6] = -rhs[6]*(1)-rhs[28]*(-1);
  lhs[7] = -rhs[7]*(1)-rhs[29]*(-1);
  lhs[8] = -rhs[8]*(1)-rhs[30]*(-1);
  lhs[9] = -rhs[9]*(1)-rhs[31]*(-1);
  lhs[10] = -rhs[10]*(1)-rhs[32]*(-1);
  lhs[11] = -rhs[11]*(1)-rhs[33]*(-1);
  lhs[12] = -rhs[12]*(1)-rhs[34]*(-1);
  lhs[13] = -rhs[13]*(1)-rhs[35]*(-1);
  lhs[14] = -rhs[14]*(1)-rhs[36]*(-1);
  lhs[15] = -rhs[15]*(1)-rhs[37]*(-1);
  lhs[16] = -rhs[16]*(1)-rhs[38]*(-1);
  lhs[17] = -rhs[17]*(1)-rhs[39]*(-1);
  lhs[18] = -rhs[18]*(1)-rhs[40]*(-1);
  lhs[19] = -rhs[19]*(1)-rhs[41]*(-1);
  lhs[20] = -rhs[20]*(1)-rhs[42]*(-1);
  lhs[21] = -rhs[21]*(1)-rhs[43]*(-1);
  lhs[22] = 0;
  lhs[23] = 0;
  lhs[24] = 0;
  lhs[25] = 0;
  lhs[26] = 0;
  lhs[27] = 0;
  lhs[28] = 0;
  lhs[29] = 0;
  lhs[30] = 0;
  lhs[31] = 0;
  lhs[32] = 0;
  lhs[33] = 0;
  lhs[34] = 0;
  lhs[35] = 0;
  lhs[36] = 0;
  lhs[37] = 0;
  lhs[38] = 0;
  lhs[39] = 0;
  lhs[40] = 0;
  lhs[41] = 0;
  lhs[42] = 0;
  lhs[43] = 0;
  lhs[44] = 0;
  lhs[45] = 0;
  lhs[46] = 0;
  lhs[47] = 0;
  lhs[48] = 0;
  lhs[49] = 0;
  lhs[50] = 0;
  lhs[51] = 0;
  lhs[52] = 0;
  lhs[53] = 0;
  lhs[54] = 0;
  lhs[55] = 0;
  lhs[56] = 0;
  lhs[57] = 0;
  lhs[58] = 0;
  lhs[59] = 0;
  lhs[60] = 0;
  lhs[61] = 0;
  lhs[62] = 0;
  lhs[63] = 0;
  lhs[64] = 0;
  lhs[65] = 0;
  lhs[66] = 0;
  lhs[67] = 0;
  lhs[68] = 0;
  lhs[69] = 0;
  lhs[70] = 0;
  lhs[71] = 0;
}

void multbyP(double *lhs, double *rhs) {
  /* TODO use the fact that P is symmetric? */
  /* TODO check doubling / half factor etc. */
  lhs[0] = rhs[0]*(2*params.R[0])+rhs[1]*(2*params.R[2]);
  lhs[1] = rhs[0]*(2*params.R[1])+rhs[1]*(2*params.R[3]);
  lhs[2] = rhs[2]*(2*params.R[0])+rhs[3]*(2*params.R[2]);
  lhs[3] = rhs[2]*(2*params.R[1])+rhs[3]*(2*params.R[3]);
  lhs[4] = rhs[4]*(2*params.R[0])+rhs[5]*(2*params.R[2]);
  lhs[5] = rhs[4]*(2*params.R[1])+rhs[5]*(2*params.R[3]);
  lhs[6] = rhs[6]*(2*params.R[0])+rhs[7]*(2*params.R[2]);
  lhs[7] = rhs[6]*(2*params.R[1])+rhs[7]*(2*params.R[3]);
  lhs[8] = rhs[8]*(2*params.R[0])+rhs[9]*(2*params.R[2]);
  lhs[9] = rhs[8]*(2*params.R[1])+rhs[9]*(2*params.R[3]);
  lhs[10] = rhs[10]*(2*params.R[0])+rhs[11]*(2*params.R[2]);
  lhs[11] = rhs[10]*(2*params.R[1])+rhs[11]*(2*params.R[3]);
  lhs[12] = rhs[12]*(2*params.R[0])+rhs[13]*(2*params.R[2]);
  lhs[13] = rhs[12]*(2*params.R[1])+rhs[13]*(2*params.R[3]);
  lhs[14] = rhs[14]*(2*params.R[0])+rhs[15]*(2*params.R[2]);
  lhs[15] = rhs[14]*(2*params.R[1])+rhs[15]*(2*params.R[3]);
  lhs[16] = rhs[16]*(2*params.R[0])+rhs[17]*(2*params.R[2]);
  lhs[17] = rhs[16]*(2*params.R[1])+rhs[17]*(2*params.R[3]);
  lhs[18] = rhs[18]*(2*params.R[0])+rhs[19]*(2*params.R[2]);
  lhs[19] = rhs[18]*(2*params.R[1])+rhs[19]*(2*params.R[3]);
  lhs[20] = rhs[20]*(2*params.R[0])+rhs[21]*(2*params.R[2]);
  lhs[21] = rhs[20]*(2*params.R[1])+rhs[21]*(2*params.R[3]);
  lhs[22] = rhs[22]*(2*params.Q[0])+rhs[23]*(2*params.Q[5])+rhs[24]*(2*params.Q[10])+rhs[25]*(2*params.Q[15])+rhs[26]*(2*params.Q[20]);
  lhs[23] = rhs[22]*(2*params.Q[1])+rhs[23]*(2*params.Q[6])+rhs[24]*(2*params.Q[11])+rhs[25]*(2*params.Q[16])+rhs[26]*(2*params.Q[21]);
  lhs[24] = rhs[22]*(2*params.Q[2])+rhs[23]*(2*params.Q[7])+rhs[24]*(2*params.Q[12])+rhs[25]*(2*params.Q[17])+rhs[26]*(2*params.Q[22]);
  lhs[25] = rhs[22]*(2*params.Q[3])+rhs[23]*(2*params.Q[8])+rhs[24]*(2*params.Q[13])+rhs[25]*(2*params.Q[18])+rhs[26]*(2*params.Q[23]);
  lhs[26] = rhs[22]*(2*params.Q[4])+rhs[23]*(2*params.Q[9])+rhs[24]*(2*params.Q[14])+rhs[25]*(2*params.Q[19])+rhs[26]*(2*params.Q[24]);
  lhs[27] = rhs[27]*(2*params.Q[0])+rhs[28]*(2*params.Q[5])+rhs[29]*(2*params.Q[10])+rhs[30]*(2*params.Q[15])+rhs[31]*(2*params.Q[20]);
  lhs[28] = rhs[27]*(2*params.Q[1])+rhs[28]*(2*params.Q[6])+rhs[29]*(2*params.Q[11])+rhs[30]*(2*params.Q[16])+rhs[31]*(2*params.Q[21]);
  lhs[29] = rhs[27]*(2*params.Q[2])+rhs[28]*(2*params.Q[7])+rhs[29]*(2*params.Q[12])+rhs[30]*(2*params.Q[17])+rhs[31]*(2*params.Q[22]);
  lhs[30] = rhs[27]*(2*params.Q[3])+rhs[28]*(2*params.Q[8])+rhs[29]*(2*params.Q[13])+rhs[30]*(2*params.Q[18])+rhs[31]*(2*params.Q[23]);
  lhs[31] = rhs[27]*(2*params.Q[4])+rhs[28]*(2*params.Q[9])+rhs[29]*(2*params.Q[14])+rhs[30]*(2*params.Q[19])+rhs[31]*(2*params.Q[24]);
  lhs[32] = rhs[32]*(2*params.Q[0])+rhs[33]*(2*params.Q[5])+rhs[34]*(2*params.Q[10])+rhs[35]*(2*params.Q[15])+rhs[36]*(2*params.Q[20]);
  lhs[33] = rhs[32]*(2*params.Q[1])+rhs[33]*(2*params.Q[6])+rhs[34]*(2*params.Q[11])+rhs[35]*(2*params.Q[16])+rhs[36]*(2*params.Q[21]);
  lhs[34] = rhs[32]*(2*params.Q[2])+rhs[33]*(2*params.Q[7])+rhs[34]*(2*params.Q[12])+rhs[35]*(2*params.Q[17])+rhs[36]*(2*params.Q[22]);
  lhs[35] = rhs[32]*(2*params.Q[3])+rhs[33]*(2*params.Q[8])+rhs[34]*(2*params.Q[13])+rhs[35]*(2*params.Q[18])+rhs[36]*(2*params.Q[23]);
  lhs[36] = rhs[32]*(2*params.Q[4])+rhs[33]*(2*params.Q[9])+rhs[34]*(2*params.Q[14])+rhs[35]*(2*params.Q[19])+rhs[36]*(2*params.Q[24]);
  lhs[37] = rhs[37]*(2*params.Q[0])+rhs[38]*(2*params.Q[5])+rhs[39]*(2*params.Q[10])+rhs[40]*(2*params.Q[15])+rhs[41]*(2*params.Q[20]);
  lhs[38] = rhs[37]*(2*params.Q[1])+rhs[38]*(2*params.Q[6])+rhs[39]*(2*params.Q[11])+rhs[40]*(2*params.Q[16])+rhs[41]*(2*params.Q[21]);
  lhs[39] = rhs[37]*(2*params.Q[2])+rhs[38]*(2*params.Q[7])+rhs[39]*(2*params.Q[12])+rhs[40]*(2*params.Q[17])+rhs[41]*(2*params.Q[22]);
  lhs[40] = rhs[37]*(2*params.Q[3])+rhs[38]*(2*params.Q[8])+rhs[39]*(2*params.Q[13])+rhs[40]*(2*params.Q[18])+rhs[41]*(2*params.Q[23]);
  lhs[41] = rhs[37]*(2*params.Q[4])+rhs[38]*(2*params.Q[9])+rhs[39]*(2*params.Q[14])+rhs[40]*(2*params.Q[19])+rhs[41]*(2*params.Q[24]);
  lhs[42] = rhs[42]*(2*params.Q[0])+rhs[43]*(2*params.Q[5])+rhs[44]*(2*params.Q[10])+rhs[45]*(2*params.Q[15])+rhs[46]*(2*params.Q[20]);
  lhs[43] = rhs[42]*(2*params.Q[1])+rhs[43]*(2*params.Q[6])+rhs[44]*(2*params.Q[11])+rhs[45]*(2*params.Q[16])+rhs[46]*(2*params.Q[21]);
  lhs[44] = rhs[42]*(2*params.Q[2])+rhs[43]*(2*params.Q[7])+rhs[44]*(2*params.Q[12])+rhs[45]*(2*params.Q[17])+rhs[46]*(2*params.Q[22]);
  lhs[45] = rhs[42]*(2*params.Q[3])+rhs[43]*(2*params.Q[8])+rhs[44]*(2*params.Q[13])+rhs[45]*(2*params.Q[18])+rhs[46]*(2*params.Q[23]);
  lhs[46] = rhs[42]*(2*params.Q[4])+rhs[43]*(2*params.Q[9])+rhs[44]*(2*params.Q[14])+rhs[45]*(2*params.Q[19])+rhs[46]*(2*params.Q[24]);
  lhs[47] = rhs[47]*(2*params.Q[0])+rhs[48]*(2*params.Q[5])+rhs[49]*(2*params.Q[10])+rhs[50]*(2*params.Q[15])+rhs[51]*(2*params.Q[20]);
  lhs[48] = rhs[47]*(2*params.Q[1])+rhs[48]*(2*params.Q[6])+rhs[49]*(2*params.Q[11])+rhs[50]*(2*params.Q[16])+rhs[51]*(2*params.Q[21]);
  lhs[49] = rhs[47]*(2*params.Q[2])+rhs[48]*(2*params.Q[7])+rhs[49]*(2*params.Q[12])+rhs[50]*(2*params.Q[17])+rhs[51]*(2*params.Q[22]);
  lhs[50] = rhs[47]*(2*params.Q[3])+rhs[48]*(2*params.Q[8])+rhs[49]*(2*params.Q[13])+rhs[50]*(2*params.Q[18])+rhs[51]*(2*params.Q[23]);
  lhs[51] = rhs[47]*(2*params.Q[4])+rhs[48]*(2*params.Q[9])+rhs[49]*(2*params.Q[14])+rhs[50]*(2*params.Q[19])+rhs[51]*(2*params.Q[24]);
  lhs[52] = rhs[52]*(2*params.Q[0])+rhs[53]*(2*params.Q[5])+rhs[54]*(2*params.Q[10])+rhs[55]*(2*params.Q[15])+rhs[56]*(2*params.Q[20]);
  lhs[53] = rhs[52]*(2*params.Q[1])+rhs[53]*(2*params.Q[6])+rhs[54]*(2*params.Q[11])+rhs[55]*(2*params.Q[16])+rhs[56]*(2*params.Q[21]);
  lhs[54] = rhs[52]*(2*params.Q[2])+rhs[53]*(2*params.Q[7])+rhs[54]*(2*params.Q[12])+rhs[55]*(2*params.Q[17])+rhs[56]*(2*params.Q[22]);
  lhs[55] = rhs[52]*(2*params.Q[3])+rhs[53]*(2*params.Q[8])+rhs[54]*(2*params.Q[13])+rhs[55]*(2*params.Q[18])+rhs[56]*(2*params.Q[23]);
  lhs[56] = rhs[52]*(2*params.Q[4])+rhs[53]*(2*params.Q[9])+rhs[54]*(2*params.Q[14])+rhs[55]*(2*params.Q[19])+rhs[56]*(2*params.Q[24]);
  lhs[57] = rhs[57]*(2*params.Q[0])+rhs[58]*(2*params.Q[5])+rhs[59]*(2*params.Q[10])+rhs[60]*(2*params.Q[15])+rhs[61]*(2*params.Q[20]);
  lhs[58] = rhs[57]*(2*params.Q[1])+rhs[58]*(2*params.Q[6])+rhs[59]*(2*params.Q[11])+rhs[60]*(2*params.Q[16])+rhs[61]*(2*params.Q[21]);
  lhs[59] = rhs[57]*(2*params.Q[2])+rhs[58]*(2*params.Q[7])+rhs[59]*(2*params.Q[12])+rhs[60]*(2*params.Q[17])+rhs[61]*(2*params.Q[22]);
  lhs[60] = rhs[57]*(2*params.Q[3])+rhs[58]*(2*params.Q[8])+rhs[59]*(2*params.Q[13])+rhs[60]*(2*params.Q[18])+rhs[61]*(2*params.Q[23]);
  lhs[61] = rhs[57]*(2*params.Q[4])+rhs[58]*(2*params.Q[9])+rhs[59]*(2*params.Q[14])+rhs[60]*(2*params.Q[19])+rhs[61]*(2*params.Q[24]);
  lhs[62] = rhs[62]*(2*params.Q[0])+rhs[63]*(2*params.Q[5])+rhs[64]*(2*params.Q[10])+rhs[65]*(2*params.Q[15])+rhs[66]*(2*params.Q[20]);
  lhs[63] = rhs[62]*(2*params.Q[1])+rhs[63]*(2*params.Q[6])+rhs[64]*(2*params.Q[11])+rhs[65]*(2*params.Q[16])+rhs[66]*(2*params.Q[21]);
  lhs[64] = rhs[62]*(2*params.Q[2])+rhs[63]*(2*params.Q[7])+rhs[64]*(2*params.Q[12])+rhs[65]*(2*params.Q[17])+rhs[66]*(2*params.Q[22]);
  lhs[65] = rhs[62]*(2*params.Q[3])+rhs[63]*(2*params.Q[8])+rhs[64]*(2*params.Q[13])+rhs[65]*(2*params.Q[18])+rhs[66]*(2*params.Q[23]);
  lhs[66] = rhs[62]*(2*params.Q[4])+rhs[63]*(2*params.Q[9])+rhs[64]*(2*params.Q[14])+rhs[65]*(2*params.Q[19])+rhs[66]*(2*params.Q[24]);
  lhs[67] = rhs[67]*(2*params.Q[0])+rhs[68]*(2*params.Q[5])+rhs[69]*(2*params.Q[10])+rhs[70]*(2*params.Q[15])+rhs[71]*(2*params.Q[20]);
  lhs[68] = rhs[67]*(2*params.Q[1])+rhs[68]*(2*params.Q[6])+rhs[69]*(2*params.Q[11])+rhs[70]*(2*params.Q[16])+rhs[71]*(2*params.Q[21]);
  lhs[69] = rhs[67]*(2*params.Q[2])+rhs[68]*(2*params.Q[7])+rhs[69]*(2*params.Q[12])+rhs[70]*(2*params.Q[17])+rhs[71]*(2*params.Q[22]);
  lhs[70] = rhs[67]*(2*params.Q[3])+rhs[68]*(2*params.Q[8])+rhs[69]*(2*params.Q[13])+rhs[70]*(2*params.Q[18])+rhs[71]*(2*params.Q[23]);
  lhs[71] = rhs[67]*(2*params.Q[4])+rhs[68]*(2*params.Q[9])+rhs[69]*(2*params.Q[14])+rhs[70]*(2*params.Q[19])+rhs[71]*(2*params.Q[24]);
}

void fillq(void) {
  work.q[0] = 0;
  work.q[1] = 0;
  work.q[2] = 0;
  work.q[3] = 0;
  work.q[4] = 0;
  work.q[5] = 0;
  work.q[6] = 0;
  work.q[7] = 0;
  work.q[8] = 0;
  work.q[9] = 0;
  work.q[10] = 0;
  work.q[11] = 0;
  work.q[12] = 0;
  work.q[13] = 0;
  work.q[14] = 0;
  work.q[15] = 0;
  work.q[16] = 0;
  work.q[17] = 0;
  work.q[18] = 0;
  work.q[19] = 0;
  work.q[20] = 0;
  work.q[21] = 0;
  work.q[22] = 0;
  work.q[23] = 0;
  work.q[24] = 0;
  work.q[25] = 0;
  work.q[26] = 0;
  work.q[27] = 0;
  work.q[28] = 0;
  work.q[29] = 0;
  work.q[30] = 0;
  work.q[31] = 0;
  work.q[32] = 0;
  work.q[33] = 0;
  work.q[34] = 0;
  work.q[35] = 0;
  work.q[36] = 0;
  work.q[37] = 0;
  work.q[38] = 0;
  work.q[39] = 0;
  work.q[40] = 0;
  work.q[41] = 0;
  work.q[42] = 0;
  work.q[43] = 0;
  work.q[44] = 0;
  work.q[45] = 0;
  work.q[46] = 0;
  work.q[47] = 0;
  work.q[48] = 0;
  work.q[49] = 0;
  work.q[50] = 0;
  work.q[51] = 0;
  work.q[52] = 0;
  work.q[53] = 0;
  work.q[54] = 0;
  work.q[55] = 0;
  work.q[56] = 0;
  work.q[57] = 0;
  work.q[58] = 0;
  work.q[59] = 0;
  work.q[60] = 0;
  work.q[61] = 0;
  work.q[62] = 0;
  work.q[63] = 0;
  work.q[64] = 0;
  work.q[65] = 0;
  work.q[66] = 0;
  work.q[67] = 0;
  work.q[68] = 0;
  work.q[69] = 0;
  work.q[70] = 0;
  work.q[71] = 0;
}

void fillh(void) {
  work.h[0] = params.u_max[0];
  work.h[1] = params.u_max[0];
  work.h[2] = params.u_max[0];
  work.h[3] = params.u_max[0];
  work.h[4] = params.u_max[0];
  work.h[5] = params.u_max[0];
  work.h[6] = params.u_max[0];
  work.h[7] = params.u_max[0];
  work.h[8] = params.u_max[0];
  work.h[9] = params.u_max[0];
  work.h[10] = params.u_max[0];
  work.h[11] = params.u_max[0];
  work.h[12] = params.u_max[0];
  work.h[13] = params.u_max[0];
  work.h[14] = params.u_max[0];
  work.h[15] = params.u_max[0];
  work.h[16] = params.u_max[0];
  work.h[17] = params.u_max[0];
  work.h[18] = params.u_max[0];
  work.h[19] = params.u_max[0];
  work.h[20] = params.u_max[0];
  work.h[21] = params.u_max[0];
  work.h[22] = -params.u_min[0];
  work.h[23] = -params.u_min[0];
  work.h[24] = -params.u_min[0];
  work.h[25] = -params.u_min[0];
  work.h[26] = -params.u_min[0];
  work.h[27] = -params.u_min[0];
  work.h[28] = -params.u_min[0];
  work.h[29] = -params.u_min[0];
  work.h[30] = -params.u_min[0];
  work.h[31] = -params.u_min[0];
  work.h[32] = -params.u_min[0];
  work.h[33] = -params.u_min[0];
  work.h[34] = -params.u_min[0];
  work.h[35] = -params.u_min[0];
  work.h[36] = -params.u_min[0];
  work.h[37] = -params.u_min[0];
  work.h[38] = -params.u_min[0];
  work.h[39] = -params.u_min[0];
  work.h[40] = -params.u_min[0];
  work.h[41] = -params.u_min[0];
  work.h[42] = -params.u_min[0];
  work.h[43] = -params.u_min[0];
}

void fillb(void) {
  work.b[0] = params.A[0]*params.x_0[0]+params.A[5]*params.x_0[1]+params.A[10]*params.x_0[2]+params.A[15]*params.x_0[3]+params.A[20]*params.x_0[4];
  work.b[1] = params.A[1]*params.x_0[0]+params.A[6]*params.x_0[1]+params.A[11]*params.x_0[2]+params.A[16]*params.x_0[3]+params.A[21]*params.x_0[4];
  work.b[2] = params.A[2]*params.x_0[0]+params.A[7]*params.x_0[1]+params.A[12]*params.x_0[2]+params.A[17]*params.x_0[3]+params.A[22]*params.x_0[4];
  work.b[3] = params.A[3]*params.x_0[0]+params.A[8]*params.x_0[1]+params.A[13]*params.x_0[2]+params.A[18]*params.x_0[3]+params.A[23]*params.x_0[4];
  work.b[4] = params.A[4]*params.x_0[0]+params.A[9]*params.x_0[1]+params.A[14]*params.x_0[2]+params.A[19]*params.x_0[3]+params.A[24]*params.x_0[4];
  work.b[5] = 0;
  work.b[6] = 0;
  work.b[7] = 0;
  work.b[8] = 0;
  work.b[9] = 0;
  work.b[10] = 0;
  work.b[11] = 0;
  work.b[12] = 0;
  work.b[13] = 0;
  work.b[14] = 0;
  work.b[15] = 0;
  work.b[16] = 0;
  work.b[17] = 0;
  work.b[18] = 0;
  work.b[19] = 0;
  work.b[20] = 0;
  work.b[21] = 0;
  work.b[22] = 0;
  work.b[23] = 0;
  work.b[24] = 0;
  work.b[25] = 0;
  work.b[26] = 0;
  work.b[27] = 0;
  work.b[28] = 0;
  work.b[29] = 0;
  work.b[30] = 0;
  work.b[31] = 0;
  work.b[32] = 0;
  work.b[33] = 0;
  work.b[34] = 0;
  work.b[35] = 0;
  work.b[36] = 0;
  work.b[37] = 0;
  work.b[38] = 0;
  work.b[39] = 0;
  work.b[40] = 0;
  work.b[41] = 0;
  work.b[42] = 0;
  work.b[43] = 0;
  work.b[44] = 0;
  work.b[45] = 0;
  work.b[46] = 0;
  work.b[47] = 0;
  work.b[48] = 0;
  work.b[49] = 0;
}

void pre_ops(void) {
  work.quad_645199597568[0] = (params.x_0[0]*(params.Q[0]*params.x_0[0]+params.Q[5]*params.x_0[1]+params.Q[10]*params.x_0[2]+params.Q[15]*params.x_0[3]+params.Q[20]*params.x_0[4])+params.x_0[1]*(params.Q[1]*params.x_0[0]+params.Q[6]*params.x_0[1]+params.Q[11]*params.x_0[2]+params.Q[16]*params.x_0[3]+params.Q[21]*params.x_0[4])+params.x_0[2]*(params.Q[2]*params.x_0[0]+params.Q[7]*params.x_0[1]+params.Q[12]*params.x_0[2]+params.Q[17]*params.x_0[3]+params.Q[22]*params.x_0[4])+params.x_0[3]*(params.Q[3]*params.x_0[0]+params.Q[8]*params.x_0[1]+params.Q[13]*params.x_0[2]+params.Q[18]*params.x_0[3]+params.Q[23]*params.x_0[4])+params.x_0[4]*(params.Q[4]*params.x_0[0]+params.Q[9]*params.x_0[1]+params.Q[14]*params.x_0[2]+params.Q[19]*params.x_0[3]+params.Q[24]*params.x_0[4]));

}
