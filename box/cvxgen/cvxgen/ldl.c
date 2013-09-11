/* Produced by CVXGEN, 2012-04-22 16:51:13 -0700.  */
/* CVXGEN is Copyright (C) 2006-2011 Jacob Mattingley, jem@cvxgen.com. */
/* The code in this file is Copyright (C) 2006-2011 Jacob Mattingley. */
/* CVXGEN, or solvers produced by CVXGEN, cannot be used for commercial */
/* applications without prior written permission from Jacob Mattingley. */

/* Filename: ldl.c. */
/* Description: Basic test harness for solver.c. */

#include "solver.h"

/* Be sure to place ldl_solve first, so storage schemes are defined by it. */
void ldl_solve(double *target, double *var) {
  int i;
  /* Find var = (L*diag(work.d)*L') \ target, then unpermute. */
  /* Answer goes into var. */

  /* Forward substitution. */
  /* Include permutation as we retrieve from target. Use v so we can unpermute */
  /* later. */
  work.v[0] = target[72];
  work.v[1] = target[73];
  work.v[2] = target[74];
  work.v[3] = target[75];
  work.v[4] = target[76];
  work.v[5] = target[77];
  work.v[6] = target[78];
  work.v[7] = target[79];
  work.v[8] = target[80];
  work.v[9] = target[81];
  work.v[10] = target[82];
  work.v[11] = target[83];
  work.v[12] = target[84];
  work.v[13] = target[85];
  work.v[14] = target[86];
  work.v[15] = target[87];
  work.v[16] = target[88];
  work.v[17] = target[89];
  work.v[18] = target[90];
  work.v[19] = target[91];
  work.v[20] = target[92];
  work.v[21] = target[93];
  work.v[22] = target[94];
  work.v[23] = target[95];
  work.v[24] = target[96];
  work.v[25] = target[97];
  work.v[26] = target[98];
  work.v[27] = target[99];
  work.v[28] = target[100];
  work.v[29] = target[101];
  work.v[30] = target[102];
  work.v[31] = target[103];
  work.v[32] = target[104];
  work.v[33] = target[105];
  work.v[34] = target[106];
  work.v[35] = target[107];
  work.v[36] = target[108];
  work.v[37] = target[109];
  work.v[38] = target[110];
  work.v[39] = target[111];
  work.v[40] = target[112];
  work.v[41] = target[113];
  work.v[42] = target[114];
  work.v[43] = target[115];
  work.v[44] = target[116]-work.L[0]*work.v[0];
  work.v[45] = target[117]-work.L[1]*work.v[1];
  work.v[46] = target[118]-work.L[2]*work.v[2];
  work.v[47] = target[119]-work.L[3]*work.v[3];
  work.v[48] = target[120]-work.L[4]*work.v[4];
  work.v[49] = target[121]-work.L[5]*work.v[5];
  work.v[50] = target[122]-work.L[6]*work.v[6];
  work.v[51] = target[123]-work.L[7]*work.v[7];
  work.v[52] = target[124]-work.L[8]*work.v[8];
  work.v[53] = target[125]-work.L[9]*work.v[9];
  work.v[54] = target[126]-work.L[10]*work.v[10];
  work.v[55] = target[127]-work.L[11]*work.v[11];
  work.v[56] = target[128]-work.L[12]*work.v[12];
  work.v[57] = target[129]-work.L[13]*work.v[13];
  work.v[58] = target[130]-work.L[14]*work.v[14];
  work.v[59] = target[131]-work.L[15]*work.v[15];
  work.v[60] = target[132]-work.L[16]*work.v[16];
  work.v[61] = target[133]-work.L[17]*work.v[17];
  work.v[62] = target[134]-work.L[18]*work.v[18];
  work.v[63] = target[135]-work.L[19]*work.v[19];
  work.v[64] = target[136]-work.L[20]*work.v[20];
  work.v[65] = target[137]-work.L[21]*work.v[21];
  work.v[66] = target[138]-work.L[22]*work.v[22];
  work.v[67] = target[139]-work.L[23]*work.v[23];
  work.v[68] = target[140]-work.L[24]*work.v[24];
  work.v[69] = target[141]-work.L[25]*work.v[25];
  work.v[70] = target[142]-work.L[26]*work.v[26];
  work.v[71] = target[143]-work.L[27]*work.v[27];
  work.v[72] = target[144]-work.L[28]*work.v[28];
  work.v[73] = target[145]-work.L[29]*work.v[29];
  work.v[74] = target[146]-work.L[30]*work.v[30];
  work.v[75] = target[147]-work.L[31]*work.v[31];
  work.v[76] = target[148]-work.L[32]*work.v[32];
  work.v[77] = target[149]-work.L[33]*work.v[33];
  work.v[78] = target[150]-work.L[34]*work.v[34];
  work.v[79] = target[151]-work.L[35]*work.v[35];
  work.v[80] = target[152]-work.L[36]*work.v[36];
  work.v[81] = target[153]-work.L[37]*work.v[37];
  work.v[82] = target[154]-work.L[38]*work.v[38];
  work.v[83] = target[155]-work.L[39]*work.v[39];
  work.v[84] = target[156]-work.L[40]*work.v[40];
  work.v[85] = target[157]-work.L[41]*work.v[41];
  work.v[86] = target[158]-work.L[42]*work.v[42];
  work.v[87] = target[20]-work.L[43]*work.v[64]-work.L[44]*work.v[86];
  work.v[88] = target[21]-work.L[45]*work.v[65]-work.L[46]*work.v[87];
  work.v[89] = target[159]-work.L[47]*work.v[43]-work.L[48]*work.v[88];
  work.v[90] = target[160];
  work.v[91] = target[161];
  work.v[92] = target[162];
  work.v[93] = target[163];
  work.v[94] = target[164];
  work.v[95] = target[0]-work.L[49]*work.v[44]-work.L[50]*work.v[66]-work.L[51]*work.v[90]-work.L[52]*work.v[91]-work.L[53]*work.v[92]-work.L[54]*work.v[93]-work.L[55]*work.v[94];
  work.v[96] = target[1]-work.L[56]*work.v[45]-work.L[57]*work.v[67]-work.L[58]*work.v[90]-work.L[59]*work.v[91]-work.L[60]*work.v[92]-work.L[61]*work.v[93]-work.L[62]*work.v[94]-work.L[63]*work.v[95];
  work.v[97] = target[67];
  work.v[98] = target[68]-work.L[64]*work.v[97];
  work.v[99] = target[69]-work.L[65]*work.v[97]-work.L[66]*work.v[98];
  work.v[100] = target[70]-work.L[67]*work.v[97]-work.L[68]*work.v[98]-work.L[69]*work.v[99];
  work.v[101] = target[18]-work.L[70]*work.v[62]-work.L[71]*work.v[84];
  work.v[102] = target[19]-work.L[72]*work.v[63]-work.L[73]*work.v[85]-work.L[74]*work.v[101];
  work.v[103] = target[71]-work.L[75]*work.v[97]-work.L[76]*work.v[98]-work.L[77]*work.v[99]-work.L[78]*work.v[100];
  work.v[104] = target[205]-work.L[79]*work.v[97]-work.L[80]*work.v[98]-work.L[81]*work.v[99]-work.L[82]*work.v[100]-work.L[83]*work.v[101]-work.L[84]*work.v[102]-work.L[85]*work.v[103];
  work.v[105] = target[206]-work.L[86]*work.v[98]-work.L[87]*work.v[99]-work.L[88]*work.v[100]-work.L[89]*work.v[101]-work.L[90]*work.v[102]-work.L[91]*work.v[103]-work.L[92]*work.v[104];
  work.v[106] = target[207]-work.L[93]*work.v[99]-work.L[94]*work.v[100]-work.L[95]*work.v[101]-work.L[96]*work.v[102]-work.L[97]*work.v[103]-work.L[98]*work.v[104]-work.L[99]*work.v[105];
  work.v[107] = target[208]-work.L[100]*work.v[100]-work.L[101]*work.v[101]-work.L[102]*work.v[102]-work.L[103]*work.v[103]-work.L[104]*work.v[104]-work.L[105]*work.v[105]-work.L[106]*work.v[106];
  work.v[108] = target[209]-work.L[107]*work.v[101]-work.L[108]*work.v[102]-work.L[109]*work.v[103]-work.L[110]*work.v[104]-work.L[111]*work.v[105]-work.L[112]*work.v[106]-work.L[113]*work.v[107];
  work.v[109] = target[62]-work.L[114]*work.v[104]-work.L[115]*work.v[105]-work.L[116]*work.v[106]-work.L[117]*work.v[107]-work.L[118]*work.v[108];
  work.v[110] = target[63]-work.L[119]*work.v[104]-work.L[120]*work.v[105]-work.L[121]*work.v[106]-work.L[122]*work.v[107]-work.L[123]*work.v[108]-work.L[124]*work.v[109];
  work.v[111] = target[64]-work.L[125]*work.v[104]-work.L[126]*work.v[105]-work.L[127]*work.v[106]-work.L[128]*work.v[107]-work.L[129]*work.v[108]-work.L[130]*work.v[109]-work.L[131]*work.v[110];
  work.v[112] = target[65]-work.L[132]*work.v[104]-work.L[133]*work.v[105]-work.L[134]*work.v[106]-work.L[135]*work.v[107]-work.L[136]*work.v[108]-work.L[137]*work.v[109]-work.L[138]*work.v[110]-work.L[139]*work.v[111];
  work.v[113] = target[16]-work.L[140]*work.v[60]-work.L[141]*work.v[82];
  work.v[114] = target[17]-work.L[142]*work.v[61]-work.L[143]*work.v[83]-work.L[144]*work.v[113];
  work.v[115] = target[66]-work.L[145]*work.v[104]-work.L[146]*work.v[105]-work.L[147]*work.v[106]-work.L[148]*work.v[107]-work.L[149]*work.v[108]-work.L[150]*work.v[109]-work.L[151]*work.v[110]-work.L[152]*work.v[111]-work.L[153]*work.v[112];
  work.v[116] = target[200]-work.L[154]*work.v[109]-work.L[155]*work.v[110]-work.L[156]*work.v[111]-work.L[157]*work.v[112]-work.L[158]*work.v[113]-work.L[159]*work.v[114]-work.L[160]*work.v[115];
  work.v[117] = target[201]-work.L[161]*work.v[110]-work.L[162]*work.v[111]-work.L[163]*work.v[112]-work.L[164]*work.v[113]-work.L[165]*work.v[114]-work.L[166]*work.v[115]-work.L[167]*work.v[116];
  work.v[118] = target[202]-work.L[168]*work.v[111]-work.L[169]*work.v[112]-work.L[170]*work.v[113]-work.L[171]*work.v[114]-work.L[172]*work.v[115]-work.L[173]*work.v[116]-work.L[174]*work.v[117];
  work.v[119] = target[203]-work.L[175]*work.v[112]-work.L[176]*work.v[113]-work.L[177]*work.v[114]-work.L[178]*work.v[115]-work.L[179]*work.v[116]-work.L[180]*work.v[117]-work.L[181]*work.v[118];
  work.v[120] = target[204]-work.L[182]*work.v[113]-work.L[183]*work.v[114]-work.L[184]*work.v[115]-work.L[185]*work.v[116]-work.L[186]*work.v[117]-work.L[187]*work.v[118]-work.L[188]*work.v[119];
  work.v[121] = target[57]-work.L[189]*work.v[116]-work.L[190]*work.v[117]-work.L[191]*work.v[118]-work.L[192]*work.v[119]-work.L[193]*work.v[120];
  work.v[122] = target[58]-work.L[194]*work.v[116]-work.L[195]*work.v[117]-work.L[196]*work.v[118]-work.L[197]*work.v[119]-work.L[198]*work.v[120]-work.L[199]*work.v[121];
  work.v[123] = target[59]-work.L[200]*work.v[116]-work.L[201]*work.v[117]-work.L[202]*work.v[118]-work.L[203]*work.v[119]-work.L[204]*work.v[120]-work.L[205]*work.v[121]-work.L[206]*work.v[122];
  work.v[124] = target[60]-work.L[207]*work.v[116]-work.L[208]*work.v[117]-work.L[209]*work.v[118]-work.L[210]*work.v[119]-work.L[211]*work.v[120]-work.L[212]*work.v[121]-work.L[213]*work.v[122]-work.L[214]*work.v[123];
  work.v[125] = target[14]-work.L[215]*work.v[58]-work.L[216]*work.v[80];
  work.v[126] = target[15]-work.L[217]*work.v[59]-work.L[218]*work.v[81]-work.L[219]*work.v[125];
  work.v[127] = target[61]-work.L[220]*work.v[116]-work.L[221]*work.v[117]-work.L[222]*work.v[118]-work.L[223]*work.v[119]-work.L[224]*work.v[120]-work.L[225]*work.v[121]-work.L[226]*work.v[122]-work.L[227]*work.v[123]-work.L[228]*work.v[124];
  work.v[128] = target[195]-work.L[229]*work.v[121]-work.L[230]*work.v[122]-work.L[231]*work.v[123]-work.L[232]*work.v[124]-work.L[233]*work.v[125]-work.L[234]*work.v[126]-work.L[235]*work.v[127];
  work.v[129] = target[196]-work.L[236]*work.v[122]-work.L[237]*work.v[123]-work.L[238]*work.v[124]-work.L[239]*work.v[125]-work.L[240]*work.v[126]-work.L[241]*work.v[127]-work.L[242]*work.v[128];
  work.v[130] = target[197]-work.L[243]*work.v[123]-work.L[244]*work.v[124]-work.L[245]*work.v[125]-work.L[246]*work.v[126]-work.L[247]*work.v[127]-work.L[248]*work.v[128]-work.L[249]*work.v[129];
  work.v[131] = target[198]-work.L[250]*work.v[124]-work.L[251]*work.v[125]-work.L[252]*work.v[126]-work.L[253]*work.v[127]-work.L[254]*work.v[128]-work.L[255]*work.v[129]-work.L[256]*work.v[130];
  work.v[132] = target[199]-work.L[257]*work.v[125]-work.L[258]*work.v[126]-work.L[259]*work.v[127]-work.L[260]*work.v[128]-work.L[261]*work.v[129]-work.L[262]*work.v[130]-work.L[263]*work.v[131];
  work.v[133] = target[52]-work.L[264]*work.v[128]-work.L[265]*work.v[129]-work.L[266]*work.v[130]-work.L[267]*work.v[131]-work.L[268]*work.v[132];
  work.v[134] = target[53]-work.L[269]*work.v[128]-work.L[270]*work.v[129]-work.L[271]*work.v[130]-work.L[272]*work.v[131]-work.L[273]*work.v[132]-work.L[274]*work.v[133];
  work.v[135] = target[54]-work.L[275]*work.v[128]-work.L[276]*work.v[129]-work.L[277]*work.v[130]-work.L[278]*work.v[131]-work.L[279]*work.v[132]-work.L[280]*work.v[133]-work.L[281]*work.v[134];
  work.v[136] = target[55]-work.L[282]*work.v[128]-work.L[283]*work.v[129]-work.L[284]*work.v[130]-work.L[285]*work.v[131]-work.L[286]*work.v[132]-work.L[287]*work.v[133]-work.L[288]*work.v[134]-work.L[289]*work.v[135];
  work.v[137] = target[12]-work.L[290]*work.v[56]-work.L[291]*work.v[78];
  work.v[138] = target[13]-work.L[292]*work.v[57]-work.L[293]*work.v[79]-work.L[294]*work.v[137];
  work.v[139] = target[56]-work.L[295]*work.v[128]-work.L[296]*work.v[129]-work.L[297]*work.v[130]-work.L[298]*work.v[131]-work.L[299]*work.v[132]-work.L[300]*work.v[133]-work.L[301]*work.v[134]-work.L[302]*work.v[135]-work.L[303]*work.v[136];
  work.v[140] = target[190]-work.L[304]*work.v[133]-work.L[305]*work.v[134]-work.L[306]*work.v[135]-work.L[307]*work.v[136]-work.L[308]*work.v[137]-work.L[309]*work.v[138]-work.L[310]*work.v[139];
  work.v[141] = target[191]-work.L[311]*work.v[134]-work.L[312]*work.v[135]-work.L[313]*work.v[136]-work.L[314]*work.v[137]-work.L[315]*work.v[138]-work.L[316]*work.v[139]-work.L[317]*work.v[140];
  work.v[142] = target[192]-work.L[318]*work.v[135]-work.L[319]*work.v[136]-work.L[320]*work.v[137]-work.L[321]*work.v[138]-work.L[322]*work.v[139]-work.L[323]*work.v[140]-work.L[324]*work.v[141];
  work.v[143] = target[193]-work.L[325]*work.v[136]-work.L[326]*work.v[137]-work.L[327]*work.v[138]-work.L[328]*work.v[139]-work.L[329]*work.v[140]-work.L[330]*work.v[141]-work.L[331]*work.v[142];
  work.v[144] = target[194]-work.L[332]*work.v[137]-work.L[333]*work.v[138]-work.L[334]*work.v[139]-work.L[335]*work.v[140]-work.L[336]*work.v[141]-work.L[337]*work.v[142]-work.L[338]*work.v[143];
  work.v[145] = target[47]-work.L[339]*work.v[140]-work.L[340]*work.v[141]-work.L[341]*work.v[142]-work.L[342]*work.v[143]-work.L[343]*work.v[144];
  work.v[146] = target[48]-work.L[344]*work.v[140]-work.L[345]*work.v[141]-work.L[346]*work.v[142]-work.L[347]*work.v[143]-work.L[348]*work.v[144]-work.L[349]*work.v[145];
  work.v[147] = target[49]-work.L[350]*work.v[140]-work.L[351]*work.v[141]-work.L[352]*work.v[142]-work.L[353]*work.v[143]-work.L[354]*work.v[144]-work.L[355]*work.v[145]-work.L[356]*work.v[146];
  work.v[148] = target[50]-work.L[357]*work.v[140]-work.L[358]*work.v[141]-work.L[359]*work.v[142]-work.L[360]*work.v[143]-work.L[361]*work.v[144]-work.L[362]*work.v[145]-work.L[363]*work.v[146]-work.L[364]*work.v[147];
  work.v[149] = target[10]-work.L[365]*work.v[54]-work.L[366]*work.v[76];
  work.v[150] = target[11]-work.L[367]*work.v[55]-work.L[368]*work.v[77]-work.L[369]*work.v[149];
  work.v[151] = target[51]-work.L[370]*work.v[140]-work.L[371]*work.v[141]-work.L[372]*work.v[142]-work.L[373]*work.v[143]-work.L[374]*work.v[144]-work.L[375]*work.v[145]-work.L[376]*work.v[146]-work.L[377]*work.v[147]-work.L[378]*work.v[148];
  work.v[152] = target[185]-work.L[379]*work.v[145]-work.L[380]*work.v[146]-work.L[381]*work.v[147]-work.L[382]*work.v[148]-work.L[383]*work.v[149]-work.L[384]*work.v[150]-work.L[385]*work.v[151];
  work.v[153] = target[186]-work.L[386]*work.v[146]-work.L[387]*work.v[147]-work.L[388]*work.v[148]-work.L[389]*work.v[149]-work.L[390]*work.v[150]-work.L[391]*work.v[151]-work.L[392]*work.v[152];
  work.v[154] = target[187]-work.L[393]*work.v[147]-work.L[394]*work.v[148]-work.L[395]*work.v[149]-work.L[396]*work.v[150]-work.L[397]*work.v[151]-work.L[398]*work.v[152]-work.L[399]*work.v[153];
  work.v[155] = target[188]-work.L[400]*work.v[148]-work.L[401]*work.v[149]-work.L[402]*work.v[150]-work.L[403]*work.v[151]-work.L[404]*work.v[152]-work.L[405]*work.v[153]-work.L[406]*work.v[154];
  work.v[156] = target[189]-work.L[407]*work.v[149]-work.L[408]*work.v[150]-work.L[409]*work.v[151]-work.L[410]*work.v[152]-work.L[411]*work.v[153]-work.L[412]*work.v[154]-work.L[413]*work.v[155];
  work.v[157] = target[42]-work.L[414]*work.v[152]-work.L[415]*work.v[153]-work.L[416]*work.v[154]-work.L[417]*work.v[155]-work.L[418]*work.v[156];
  work.v[158] = target[43]-work.L[419]*work.v[152]-work.L[420]*work.v[153]-work.L[421]*work.v[154]-work.L[422]*work.v[155]-work.L[423]*work.v[156]-work.L[424]*work.v[157];
  work.v[159] = target[44]-work.L[425]*work.v[152]-work.L[426]*work.v[153]-work.L[427]*work.v[154]-work.L[428]*work.v[155]-work.L[429]*work.v[156]-work.L[430]*work.v[157]-work.L[431]*work.v[158];
  work.v[160] = target[45]-work.L[432]*work.v[152]-work.L[433]*work.v[153]-work.L[434]*work.v[154]-work.L[435]*work.v[155]-work.L[436]*work.v[156]-work.L[437]*work.v[157]-work.L[438]*work.v[158]-work.L[439]*work.v[159];
  work.v[161] = target[8]-work.L[440]*work.v[52]-work.L[441]*work.v[74];
  work.v[162] = target[9]-work.L[442]*work.v[53]-work.L[443]*work.v[75]-work.L[444]*work.v[161];
  work.v[163] = target[46]-work.L[445]*work.v[152]-work.L[446]*work.v[153]-work.L[447]*work.v[154]-work.L[448]*work.v[155]-work.L[449]*work.v[156]-work.L[450]*work.v[157]-work.L[451]*work.v[158]-work.L[452]*work.v[159]-work.L[453]*work.v[160];
  work.v[164] = target[180]-work.L[454]*work.v[157]-work.L[455]*work.v[158]-work.L[456]*work.v[159]-work.L[457]*work.v[160]-work.L[458]*work.v[161]-work.L[459]*work.v[162]-work.L[460]*work.v[163];
  work.v[165] = target[181]-work.L[461]*work.v[158]-work.L[462]*work.v[159]-work.L[463]*work.v[160]-work.L[464]*work.v[161]-work.L[465]*work.v[162]-work.L[466]*work.v[163]-work.L[467]*work.v[164];
  work.v[166] = target[182]-work.L[468]*work.v[159]-work.L[469]*work.v[160]-work.L[470]*work.v[161]-work.L[471]*work.v[162]-work.L[472]*work.v[163]-work.L[473]*work.v[164]-work.L[474]*work.v[165];
  work.v[167] = target[183]-work.L[475]*work.v[160]-work.L[476]*work.v[161]-work.L[477]*work.v[162]-work.L[478]*work.v[163]-work.L[479]*work.v[164]-work.L[480]*work.v[165]-work.L[481]*work.v[166];
  work.v[168] = target[184]-work.L[482]*work.v[161]-work.L[483]*work.v[162]-work.L[484]*work.v[163]-work.L[485]*work.v[164]-work.L[486]*work.v[165]-work.L[487]*work.v[166]-work.L[488]*work.v[167];
  work.v[169] = target[37]-work.L[489]*work.v[164]-work.L[490]*work.v[165]-work.L[491]*work.v[166]-work.L[492]*work.v[167]-work.L[493]*work.v[168];
  work.v[170] = target[38]-work.L[494]*work.v[164]-work.L[495]*work.v[165]-work.L[496]*work.v[166]-work.L[497]*work.v[167]-work.L[498]*work.v[168]-work.L[499]*work.v[169];
  work.v[171] = target[39]-work.L[500]*work.v[164]-work.L[501]*work.v[165]-work.L[502]*work.v[166]-work.L[503]*work.v[167]-work.L[504]*work.v[168]-work.L[505]*work.v[169]-work.L[506]*work.v[170];
  work.v[172] = target[40]-work.L[507]*work.v[164]-work.L[508]*work.v[165]-work.L[509]*work.v[166]-work.L[510]*work.v[167]-work.L[511]*work.v[168]-work.L[512]*work.v[169]-work.L[513]*work.v[170]-work.L[514]*work.v[171];
  work.v[173] = target[6]-work.L[515]*work.v[50]-work.L[516]*work.v[72];
  work.v[174] = target[7]-work.L[517]*work.v[51]-work.L[518]*work.v[73]-work.L[519]*work.v[173];
  work.v[175] = target[41]-work.L[520]*work.v[164]-work.L[521]*work.v[165]-work.L[522]*work.v[166]-work.L[523]*work.v[167]-work.L[524]*work.v[168]-work.L[525]*work.v[169]-work.L[526]*work.v[170]-work.L[527]*work.v[171]-work.L[528]*work.v[172];
  work.v[176] = target[175]-work.L[529]*work.v[169]-work.L[530]*work.v[170]-work.L[531]*work.v[171]-work.L[532]*work.v[172]-work.L[533]*work.v[173]-work.L[534]*work.v[174]-work.L[535]*work.v[175];
  work.v[177] = target[176]-work.L[536]*work.v[170]-work.L[537]*work.v[171]-work.L[538]*work.v[172]-work.L[539]*work.v[173]-work.L[540]*work.v[174]-work.L[541]*work.v[175]-work.L[542]*work.v[176];
  work.v[178] = target[177]-work.L[543]*work.v[171]-work.L[544]*work.v[172]-work.L[545]*work.v[173]-work.L[546]*work.v[174]-work.L[547]*work.v[175]-work.L[548]*work.v[176]-work.L[549]*work.v[177];
  work.v[179] = target[178]-work.L[550]*work.v[172]-work.L[551]*work.v[173]-work.L[552]*work.v[174]-work.L[553]*work.v[175]-work.L[554]*work.v[176]-work.L[555]*work.v[177]-work.L[556]*work.v[178];
  work.v[180] = target[179]-work.L[557]*work.v[173]-work.L[558]*work.v[174]-work.L[559]*work.v[175]-work.L[560]*work.v[176]-work.L[561]*work.v[177]-work.L[562]*work.v[178]-work.L[563]*work.v[179];
  work.v[181] = target[32]-work.L[564]*work.v[176]-work.L[565]*work.v[177]-work.L[566]*work.v[178]-work.L[567]*work.v[179]-work.L[568]*work.v[180];
  work.v[182] = target[33]-work.L[569]*work.v[176]-work.L[570]*work.v[177]-work.L[571]*work.v[178]-work.L[572]*work.v[179]-work.L[573]*work.v[180]-work.L[574]*work.v[181];
  work.v[183] = target[34]-work.L[575]*work.v[176]-work.L[576]*work.v[177]-work.L[577]*work.v[178]-work.L[578]*work.v[179]-work.L[579]*work.v[180]-work.L[580]*work.v[181]-work.L[581]*work.v[182];
  work.v[184] = target[35]-work.L[582]*work.v[176]-work.L[583]*work.v[177]-work.L[584]*work.v[178]-work.L[585]*work.v[179]-work.L[586]*work.v[180]-work.L[587]*work.v[181]-work.L[588]*work.v[182]-work.L[589]*work.v[183];
  work.v[185] = target[4]-work.L[590]*work.v[48]-work.L[591]*work.v[70];
  work.v[186] = target[5]-work.L[592]*work.v[49]-work.L[593]*work.v[71]-work.L[594]*work.v[185];
  work.v[187] = target[36]-work.L[595]*work.v[176]-work.L[596]*work.v[177]-work.L[597]*work.v[178]-work.L[598]*work.v[179]-work.L[599]*work.v[180]-work.L[600]*work.v[181]-work.L[601]*work.v[182]-work.L[602]*work.v[183]-work.L[603]*work.v[184];
  work.v[188] = target[170]-work.L[604]*work.v[181]-work.L[605]*work.v[182]-work.L[606]*work.v[183]-work.L[607]*work.v[184]-work.L[608]*work.v[185]-work.L[609]*work.v[186]-work.L[610]*work.v[187];
  work.v[189] = target[171]-work.L[611]*work.v[182]-work.L[612]*work.v[183]-work.L[613]*work.v[184]-work.L[614]*work.v[185]-work.L[615]*work.v[186]-work.L[616]*work.v[187]-work.L[617]*work.v[188];
  work.v[190] = target[172]-work.L[618]*work.v[183]-work.L[619]*work.v[184]-work.L[620]*work.v[185]-work.L[621]*work.v[186]-work.L[622]*work.v[187]-work.L[623]*work.v[188]-work.L[624]*work.v[189];
  work.v[191] = target[173]-work.L[625]*work.v[184]-work.L[626]*work.v[185]-work.L[627]*work.v[186]-work.L[628]*work.v[187]-work.L[629]*work.v[188]-work.L[630]*work.v[189]-work.L[631]*work.v[190];
  work.v[192] = target[174]-work.L[632]*work.v[185]-work.L[633]*work.v[186]-work.L[634]*work.v[187]-work.L[635]*work.v[188]-work.L[636]*work.v[189]-work.L[637]*work.v[190]-work.L[638]*work.v[191];
  work.v[193] = target[27]-work.L[639]*work.v[188]-work.L[640]*work.v[189]-work.L[641]*work.v[190]-work.L[642]*work.v[191]-work.L[643]*work.v[192];
  work.v[194] = target[28]-work.L[644]*work.v[188]-work.L[645]*work.v[189]-work.L[646]*work.v[190]-work.L[647]*work.v[191]-work.L[648]*work.v[192]-work.L[649]*work.v[193];
  work.v[195] = target[29]-work.L[650]*work.v[188]-work.L[651]*work.v[189]-work.L[652]*work.v[190]-work.L[653]*work.v[191]-work.L[654]*work.v[192]-work.L[655]*work.v[193]-work.L[656]*work.v[194];
  work.v[196] = target[30]-work.L[657]*work.v[188]-work.L[658]*work.v[189]-work.L[659]*work.v[190]-work.L[660]*work.v[191]-work.L[661]*work.v[192]-work.L[662]*work.v[193]-work.L[663]*work.v[194]-work.L[664]*work.v[195];
  work.v[197] = target[2]-work.L[665]*work.v[46]-work.L[666]*work.v[68];
  work.v[198] = target[3]-work.L[667]*work.v[47]-work.L[668]*work.v[69]-work.L[669]*work.v[197];
  work.v[199] = target[22]-work.L[670]*work.v[90]-work.L[671]*work.v[95]-work.L[672]*work.v[96];
  work.v[200] = target[23]-work.L[673]*work.v[91]-work.L[674]*work.v[95]-work.L[675]*work.v[96]-work.L[676]*work.v[199];
  work.v[201] = target[24]-work.L[677]*work.v[92]-work.L[678]*work.v[95]-work.L[679]*work.v[96]-work.L[680]*work.v[199]-work.L[681]*work.v[200];
  work.v[202] = target[25]-work.L[682]*work.v[93]-work.L[683]*work.v[95]-work.L[684]*work.v[96]-work.L[685]*work.v[199]-work.L[686]*work.v[200]-work.L[687]*work.v[201];
  work.v[203] = target[26]-work.L[688]*work.v[94]-work.L[689]*work.v[95]-work.L[690]*work.v[96]-work.L[691]*work.v[199]-work.L[692]*work.v[200]-work.L[693]*work.v[201]-work.L[694]*work.v[202];
  work.v[204] = target[31]-work.L[695]*work.v[188]-work.L[696]*work.v[189]-work.L[697]*work.v[190]-work.L[698]*work.v[191]-work.L[699]*work.v[192]-work.L[700]*work.v[193]-work.L[701]*work.v[194]-work.L[702]*work.v[195]-work.L[703]*work.v[196];
  work.v[205] = target[165]-work.L[704]*work.v[193]-work.L[705]*work.v[194]-work.L[706]*work.v[195]-work.L[707]*work.v[196]-work.L[708]*work.v[197]-work.L[709]*work.v[198]-work.L[710]*work.v[199]-work.L[711]*work.v[200]-work.L[712]*work.v[201]-work.L[713]*work.v[202]-work.L[714]*work.v[203]-work.L[715]*work.v[204];
  work.v[206] = target[166]-work.L[716]*work.v[194]-work.L[717]*work.v[195]-work.L[718]*work.v[196]-work.L[719]*work.v[197]-work.L[720]*work.v[198]-work.L[721]*work.v[199]-work.L[722]*work.v[200]-work.L[723]*work.v[201]-work.L[724]*work.v[202]-work.L[725]*work.v[203]-work.L[726]*work.v[204]-work.L[727]*work.v[205];
  work.v[207] = target[167]-work.L[728]*work.v[195]-work.L[729]*work.v[196]-work.L[730]*work.v[197]-work.L[731]*work.v[198]-work.L[732]*work.v[199]-work.L[733]*work.v[200]-work.L[734]*work.v[201]-work.L[735]*work.v[202]-work.L[736]*work.v[203]-work.L[737]*work.v[204]-work.L[738]*work.v[205]-work.L[739]*work.v[206];
  work.v[208] = target[168]-work.L[740]*work.v[196]-work.L[741]*work.v[197]-work.L[742]*work.v[198]-work.L[743]*work.v[199]-work.L[744]*work.v[200]-work.L[745]*work.v[201]-work.L[746]*work.v[202]-work.L[747]*work.v[203]-work.L[748]*work.v[204]-work.L[749]*work.v[205]-work.L[750]*work.v[206]-work.L[751]*work.v[207];
  work.v[209] = target[169]-work.L[752]*work.v[197]-work.L[753]*work.v[198]-work.L[754]*work.v[199]-work.L[755]*work.v[200]-work.L[756]*work.v[201]-work.L[757]*work.v[202]-work.L[758]*work.v[203]-work.L[759]*work.v[204]-work.L[760]*work.v[205]-work.L[761]*work.v[206]-work.L[762]*work.v[207]-work.L[763]*work.v[208];
  /* Diagonal scaling. Assume correctness of work.d_inv. */
  for (i = 0; i < 210; i++)
    work.v[i] *= work.d_inv[i];
  /* Back substitution */
  work.v[208] -= work.L[763]*work.v[209];
  work.v[207] -= work.L[751]*work.v[208]+work.L[762]*work.v[209];
  work.v[206] -= work.L[739]*work.v[207]+work.L[750]*work.v[208]+work.L[761]*work.v[209];
  work.v[205] -= work.L[727]*work.v[206]+work.L[738]*work.v[207]+work.L[749]*work.v[208]+work.L[760]*work.v[209];
  work.v[204] -= work.L[715]*work.v[205]+work.L[726]*work.v[206]+work.L[737]*work.v[207]+work.L[748]*work.v[208]+work.L[759]*work.v[209];
  work.v[203] -= work.L[714]*work.v[205]+work.L[725]*work.v[206]+work.L[736]*work.v[207]+work.L[747]*work.v[208]+work.L[758]*work.v[209];
  work.v[202] -= work.L[694]*work.v[203]+work.L[713]*work.v[205]+work.L[724]*work.v[206]+work.L[735]*work.v[207]+work.L[746]*work.v[208]+work.L[757]*work.v[209];
  work.v[201] -= work.L[687]*work.v[202]+work.L[693]*work.v[203]+work.L[712]*work.v[205]+work.L[723]*work.v[206]+work.L[734]*work.v[207]+work.L[745]*work.v[208]+work.L[756]*work.v[209];
  work.v[200] -= work.L[681]*work.v[201]+work.L[686]*work.v[202]+work.L[692]*work.v[203]+work.L[711]*work.v[205]+work.L[722]*work.v[206]+work.L[733]*work.v[207]+work.L[744]*work.v[208]+work.L[755]*work.v[209];
  work.v[199] -= work.L[676]*work.v[200]+work.L[680]*work.v[201]+work.L[685]*work.v[202]+work.L[691]*work.v[203]+work.L[710]*work.v[205]+work.L[721]*work.v[206]+work.L[732]*work.v[207]+work.L[743]*work.v[208]+work.L[754]*work.v[209];
  work.v[198] -= work.L[709]*work.v[205]+work.L[720]*work.v[206]+work.L[731]*work.v[207]+work.L[742]*work.v[208]+work.L[753]*work.v[209];
  work.v[197] -= work.L[669]*work.v[198]+work.L[708]*work.v[205]+work.L[719]*work.v[206]+work.L[730]*work.v[207]+work.L[741]*work.v[208]+work.L[752]*work.v[209];
  work.v[196] -= work.L[703]*work.v[204]+work.L[707]*work.v[205]+work.L[718]*work.v[206]+work.L[729]*work.v[207]+work.L[740]*work.v[208];
  work.v[195] -= work.L[664]*work.v[196]+work.L[702]*work.v[204]+work.L[706]*work.v[205]+work.L[717]*work.v[206]+work.L[728]*work.v[207];
  work.v[194] -= work.L[656]*work.v[195]+work.L[663]*work.v[196]+work.L[701]*work.v[204]+work.L[705]*work.v[205]+work.L[716]*work.v[206];
  work.v[193] -= work.L[649]*work.v[194]+work.L[655]*work.v[195]+work.L[662]*work.v[196]+work.L[700]*work.v[204]+work.L[704]*work.v[205];
  work.v[192] -= work.L[643]*work.v[193]+work.L[648]*work.v[194]+work.L[654]*work.v[195]+work.L[661]*work.v[196]+work.L[699]*work.v[204];
  work.v[191] -= work.L[638]*work.v[192]+work.L[642]*work.v[193]+work.L[647]*work.v[194]+work.L[653]*work.v[195]+work.L[660]*work.v[196]+work.L[698]*work.v[204];
  work.v[190] -= work.L[631]*work.v[191]+work.L[637]*work.v[192]+work.L[641]*work.v[193]+work.L[646]*work.v[194]+work.L[652]*work.v[195]+work.L[659]*work.v[196]+work.L[697]*work.v[204];
  work.v[189] -= work.L[624]*work.v[190]+work.L[630]*work.v[191]+work.L[636]*work.v[192]+work.L[640]*work.v[193]+work.L[645]*work.v[194]+work.L[651]*work.v[195]+work.L[658]*work.v[196]+work.L[696]*work.v[204];
  work.v[188] -= work.L[617]*work.v[189]+work.L[623]*work.v[190]+work.L[629]*work.v[191]+work.L[635]*work.v[192]+work.L[639]*work.v[193]+work.L[644]*work.v[194]+work.L[650]*work.v[195]+work.L[657]*work.v[196]+work.L[695]*work.v[204];
  work.v[187] -= work.L[610]*work.v[188]+work.L[616]*work.v[189]+work.L[622]*work.v[190]+work.L[628]*work.v[191]+work.L[634]*work.v[192];
  work.v[186] -= work.L[609]*work.v[188]+work.L[615]*work.v[189]+work.L[621]*work.v[190]+work.L[627]*work.v[191]+work.L[633]*work.v[192];
  work.v[185] -= work.L[594]*work.v[186]+work.L[608]*work.v[188]+work.L[614]*work.v[189]+work.L[620]*work.v[190]+work.L[626]*work.v[191]+work.L[632]*work.v[192];
  work.v[184] -= work.L[603]*work.v[187]+work.L[607]*work.v[188]+work.L[613]*work.v[189]+work.L[619]*work.v[190]+work.L[625]*work.v[191];
  work.v[183] -= work.L[589]*work.v[184]+work.L[602]*work.v[187]+work.L[606]*work.v[188]+work.L[612]*work.v[189]+work.L[618]*work.v[190];
  work.v[182] -= work.L[581]*work.v[183]+work.L[588]*work.v[184]+work.L[601]*work.v[187]+work.L[605]*work.v[188]+work.L[611]*work.v[189];
  work.v[181] -= work.L[574]*work.v[182]+work.L[580]*work.v[183]+work.L[587]*work.v[184]+work.L[600]*work.v[187]+work.L[604]*work.v[188];
  work.v[180] -= work.L[568]*work.v[181]+work.L[573]*work.v[182]+work.L[579]*work.v[183]+work.L[586]*work.v[184]+work.L[599]*work.v[187];
  work.v[179] -= work.L[563]*work.v[180]+work.L[567]*work.v[181]+work.L[572]*work.v[182]+work.L[578]*work.v[183]+work.L[585]*work.v[184]+work.L[598]*work.v[187];
  work.v[178] -= work.L[556]*work.v[179]+work.L[562]*work.v[180]+work.L[566]*work.v[181]+work.L[571]*work.v[182]+work.L[577]*work.v[183]+work.L[584]*work.v[184]+work.L[597]*work.v[187];
  work.v[177] -= work.L[549]*work.v[178]+work.L[555]*work.v[179]+work.L[561]*work.v[180]+work.L[565]*work.v[181]+work.L[570]*work.v[182]+work.L[576]*work.v[183]+work.L[583]*work.v[184]+work.L[596]*work.v[187];
  work.v[176] -= work.L[542]*work.v[177]+work.L[548]*work.v[178]+work.L[554]*work.v[179]+work.L[560]*work.v[180]+work.L[564]*work.v[181]+work.L[569]*work.v[182]+work.L[575]*work.v[183]+work.L[582]*work.v[184]+work.L[595]*work.v[187];
  work.v[175] -= work.L[535]*work.v[176]+work.L[541]*work.v[177]+work.L[547]*work.v[178]+work.L[553]*work.v[179]+work.L[559]*work.v[180];
  work.v[174] -= work.L[534]*work.v[176]+work.L[540]*work.v[177]+work.L[546]*work.v[178]+work.L[552]*work.v[179]+work.L[558]*work.v[180];
  work.v[173] -= work.L[519]*work.v[174]+work.L[533]*work.v[176]+work.L[539]*work.v[177]+work.L[545]*work.v[178]+work.L[551]*work.v[179]+work.L[557]*work.v[180];
  work.v[172] -= work.L[528]*work.v[175]+work.L[532]*work.v[176]+work.L[538]*work.v[177]+work.L[544]*work.v[178]+work.L[550]*work.v[179];
  work.v[171] -= work.L[514]*work.v[172]+work.L[527]*work.v[175]+work.L[531]*work.v[176]+work.L[537]*work.v[177]+work.L[543]*work.v[178];
  work.v[170] -= work.L[506]*work.v[171]+work.L[513]*work.v[172]+work.L[526]*work.v[175]+work.L[530]*work.v[176]+work.L[536]*work.v[177];
  work.v[169] -= work.L[499]*work.v[170]+work.L[505]*work.v[171]+work.L[512]*work.v[172]+work.L[525]*work.v[175]+work.L[529]*work.v[176];
  work.v[168] -= work.L[493]*work.v[169]+work.L[498]*work.v[170]+work.L[504]*work.v[171]+work.L[511]*work.v[172]+work.L[524]*work.v[175];
  work.v[167] -= work.L[488]*work.v[168]+work.L[492]*work.v[169]+work.L[497]*work.v[170]+work.L[503]*work.v[171]+work.L[510]*work.v[172]+work.L[523]*work.v[175];
  work.v[166] -= work.L[481]*work.v[167]+work.L[487]*work.v[168]+work.L[491]*work.v[169]+work.L[496]*work.v[170]+work.L[502]*work.v[171]+work.L[509]*work.v[172]+work.L[522]*work.v[175];
  work.v[165] -= work.L[474]*work.v[166]+work.L[480]*work.v[167]+work.L[486]*work.v[168]+work.L[490]*work.v[169]+work.L[495]*work.v[170]+work.L[501]*work.v[171]+work.L[508]*work.v[172]+work.L[521]*work.v[175];
  work.v[164] -= work.L[467]*work.v[165]+work.L[473]*work.v[166]+work.L[479]*work.v[167]+work.L[485]*work.v[168]+work.L[489]*work.v[169]+work.L[494]*work.v[170]+work.L[500]*work.v[171]+work.L[507]*work.v[172]+work.L[520]*work.v[175];
  work.v[163] -= work.L[460]*work.v[164]+work.L[466]*work.v[165]+work.L[472]*work.v[166]+work.L[478]*work.v[167]+work.L[484]*work.v[168];
  work.v[162] -= work.L[459]*work.v[164]+work.L[465]*work.v[165]+work.L[471]*work.v[166]+work.L[477]*work.v[167]+work.L[483]*work.v[168];
  work.v[161] -= work.L[444]*work.v[162]+work.L[458]*work.v[164]+work.L[464]*work.v[165]+work.L[470]*work.v[166]+work.L[476]*work.v[167]+work.L[482]*work.v[168];
  work.v[160] -= work.L[453]*work.v[163]+work.L[457]*work.v[164]+work.L[463]*work.v[165]+work.L[469]*work.v[166]+work.L[475]*work.v[167];
  work.v[159] -= work.L[439]*work.v[160]+work.L[452]*work.v[163]+work.L[456]*work.v[164]+work.L[462]*work.v[165]+work.L[468]*work.v[166];
  work.v[158] -= work.L[431]*work.v[159]+work.L[438]*work.v[160]+work.L[451]*work.v[163]+work.L[455]*work.v[164]+work.L[461]*work.v[165];
  work.v[157] -= work.L[424]*work.v[158]+work.L[430]*work.v[159]+work.L[437]*work.v[160]+work.L[450]*work.v[163]+work.L[454]*work.v[164];
  work.v[156] -= work.L[418]*work.v[157]+work.L[423]*work.v[158]+work.L[429]*work.v[159]+work.L[436]*work.v[160]+work.L[449]*work.v[163];
  work.v[155] -= work.L[413]*work.v[156]+work.L[417]*work.v[157]+work.L[422]*work.v[158]+work.L[428]*work.v[159]+work.L[435]*work.v[160]+work.L[448]*work.v[163];
  work.v[154] -= work.L[406]*work.v[155]+work.L[412]*work.v[156]+work.L[416]*work.v[157]+work.L[421]*work.v[158]+work.L[427]*work.v[159]+work.L[434]*work.v[160]+work.L[447]*work.v[163];
  work.v[153] -= work.L[399]*work.v[154]+work.L[405]*work.v[155]+work.L[411]*work.v[156]+work.L[415]*work.v[157]+work.L[420]*work.v[158]+work.L[426]*work.v[159]+work.L[433]*work.v[160]+work.L[446]*work.v[163];
  work.v[152] -= work.L[392]*work.v[153]+work.L[398]*work.v[154]+work.L[404]*work.v[155]+work.L[410]*work.v[156]+work.L[414]*work.v[157]+work.L[419]*work.v[158]+work.L[425]*work.v[159]+work.L[432]*work.v[160]+work.L[445]*work.v[163];
  work.v[151] -= work.L[385]*work.v[152]+work.L[391]*work.v[153]+work.L[397]*work.v[154]+work.L[403]*work.v[155]+work.L[409]*work.v[156];
  work.v[150] -= work.L[384]*work.v[152]+work.L[390]*work.v[153]+work.L[396]*work.v[154]+work.L[402]*work.v[155]+work.L[408]*work.v[156];
  work.v[149] -= work.L[369]*work.v[150]+work.L[383]*work.v[152]+work.L[389]*work.v[153]+work.L[395]*work.v[154]+work.L[401]*work.v[155]+work.L[407]*work.v[156];
  work.v[148] -= work.L[378]*work.v[151]+work.L[382]*work.v[152]+work.L[388]*work.v[153]+work.L[394]*work.v[154]+work.L[400]*work.v[155];
  work.v[147] -= work.L[364]*work.v[148]+work.L[377]*work.v[151]+work.L[381]*work.v[152]+work.L[387]*work.v[153]+work.L[393]*work.v[154];
  work.v[146] -= work.L[356]*work.v[147]+work.L[363]*work.v[148]+work.L[376]*work.v[151]+work.L[380]*work.v[152]+work.L[386]*work.v[153];
  work.v[145] -= work.L[349]*work.v[146]+work.L[355]*work.v[147]+work.L[362]*work.v[148]+work.L[375]*work.v[151]+work.L[379]*work.v[152];
  work.v[144] -= work.L[343]*work.v[145]+work.L[348]*work.v[146]+work.L[354]*work.v[147]+work.L[361]*work.v[148]+work.L[374]*work.v[151];
  work.v[143] -= work.L[338]*work.v[144]+work.L[342]*work.v[145]+work.L[347]*work.v[146]+work.L[353]*work.v[147]+work.L[360]*work.v[148]+work.L[373]*work.v[151];
  work.v[142] -= work.L[331]*work.v[143]+work.L[337]*work.v[144]+work.L[341]*work.v[145]+work.L[346]*work.v[146]+work.L[352]*work.v[147]+work.L[359]*work.v[148]+work.L[372]*work.v[151];
  work.v[141] -= work.L[324]*work.v[142]+work.L[330]*work.v[143]+work.L[336]*work.v[144]+work.L[340]*work.v[145]+work.L[345]*work.v[146]+work.L[351]*work.v[147]+work.L[358]*work.v[148]+work.L[371]*work.v[151];
  work.v[140] -= work.L[317]*work.v[141]+work.L[323]*work.v[142]+work.L[329]*work.v[143]+work.L[335]*work.v[144]+work.L[339]*work.v[145]+work.L[344]*work.v[146]+work.L[350]*work.v[147]+work.L[357]*work.v[148]+work.L[370]*work.v[151];
  work.v[139] -= work.L[310]*work.v[140]+work.L[316]*work.v[141]+work.L[322]*work.v[142]+work.L[328]*work.v[143]+work.L[334]*work.v[144];
  work.v[138] -= work.L[309]*work.v[140]+work.L[315]*work.v[141]+work.L[321]*work.v[142]+work.L[327]*work.v[143]+work.L[333]*work.v[144];
  work.v[137] -= work.L[294]*work.v[138]+work.L[308]*work.v[140]+work.L[314]*work.v[141]+work.L[320]*work.v[142]+work.L[326]*work.v[143]+work.L[332]*work.v[144];
  work.v[136] -= work.L[303]*work.v[139]+work.L[307]*work.v[140]+work.L[313]*work.v[141]+work.L[319]*work.v[142]+work.L[325]*work.v[143];
  work.v[135] -= work.L[289]*work.v[136]+work.L[302]*work.v[139]+work.L[306]*work.v[140]+work.L[312]*work.v[141]+work.L[318]*work.v[142];
  work.v[134] -= work.L[281]*work.v[135]+work.L[288]*work.v[136]+work.L[301]*work.v[139]+work.L[305]*work.v[140]+work.L[311]*work.v[141];
  work.v[133] -= work.L[274]*work.v[134]+work.L[280]*work.v[135]+work.L[287]*work.v[136]+work.L[300]*work.v[139]+work.L[304]*work.v[140];
  work.v[132] -= work.L[268]*work.v[133]+work.L[273]*work.v[134]+work.L[279]*work.v[135]+work.L[286]*work.v[136]+work.L[299]*work.v[139];
  work.v[131] -= work.L[263]*work.v[132]+work.L[267]*work.v[133]+work.L[272]*work.v[134]+work.L[278]*work.v[135]+work.L[285]*work.v[136]+work.L[298]*work.v[139];
  work.v[130] -= work.L[256]*work.v[131]+work.L[262]*work.v[132]+work.L[266]*work.v[133]+work.L[271]*work.v[134]+work.L[277]*work.v[135]+work.L[284]*work.v[136]+work.L[297]*work.v[139];
  work.v[129] -= work.L[249]*work.v[130]+work.L[255]*work.v[131]+work.L[261]*work.v[132]+work.L[265]*work.v[133]+work.L[270]*work.v[134]+work.L[276]*work.v[135]+work.L[283]*work.v[136]+work.L[296]*work.v[139];
  work.v[128] -= work.L[242]*work.v[129]+work.L[248]*work.v[130]+work.L[254]*work.v[131]+work.L[260]*work.v[132]+work.L[264]*work.v[133]+work.L[269]*work.v[134]+work.L[275]*work.v[135]+work.L[282]*work.v[136]+work.L[295]*work.v[139];
  work.v[127] -= work.L[235]*work.v[128]+work.L[241]*work.v[129]+work.L[247]*work.v[130]+work.L[253]*work.v[131]+work.L[259]*work.v[132];
  work.v[126] -= work.L[234]*work.v[128]+work.L[240]*work.v[129]+work.L[246]*work.v[130]+work.L[252]*work.v[131]+work.L[258]*work.v[132];
  work.v[125] -= work.L[219]*work.v[126]+work.L[233]*work.v[128]+work.L[239]*work.v[129]+work.L[245]*work.v[130]+work.L[251]*work.v[131]+work.L[257]*work.v[132];
  work.v[124] -= work.L[228]*work.v[127]+work.L[232]*work.v[128]+work.L[238]*work.v[129]+work.L[244]*work.v[130]+work.L[250]*work.v[131];
  work.v[123] -= work.L[214]*work.v[124]+work.L[227]*work.v[127]+work.L[231]*work.v[128]+work.L[237]*work.v[129]+work.L[243]*work.v[130];
  work.v[122] -= work.L[206]*work.v[123]+work.L[213]*work.v[124]+work.L[226]*work.v[127]+work.L[230]*work.v[128]+work.L[236]*work.v[129];
  work.v[121] -= work.L[199]*work.v[122]+work.L[205]*work.v[123]+work.L[212]*work.v[124]+work.L[225]*work.v[127]+work.L[229]*work.v[128];
  work.v[120] -= work.L[193]*work.v[121]+work.L[198]*work.v[122]+work.L[204]*work.v[123]+work.L[211]*work.v[124]+work.L[224]*work.v[127];
  work.v[119] -= work.L[188]*work.v[120]+work.L[192]*work.v[121]+work.L[197]*work.v[122]+work.L[203]*work.v[123]+work.L[210]*work.v[124]+work.L[223]*work.v[127];
  work.v[118] -= work.L[181]*work.v[119]+work.L[187]*work.v[120]+work.L[191]*work.v[121]+work.L[196]*work.v[122]+work.L[202]*work.v[123]+work.L[209]*work.v[124]+work.L[222]*work.v[127];
  work.v[117] -= work.L[174]*work.v[118]+work.L[180]*work.v[119]+work.L[186]*work.v[120]+work.L[190]*work.v[121]+work.L[195]*work.v[122]+work.L[201]*work.v[123]+work.L[208]*work.v[124]+work.L[221]*work.v[127];
  work.v[116] -= work.L[167]*work.v[117]+work.L[173]*work.v[118]+work.L[179]*work.v[119]+work.L[185]*work.v[120]+work.L[189]*work.v[121]+work.L[194]*work.v[122]+work.L[200]*work.v[123]+work.L[207]*work.v[124]+work.L[220]*work.v[127];
  work.v[115] -= work.L[160]*work.v[116]+work.L[166]*work.v[117]+work.L[172]*work.v[118]+work.L[178]*work.v[119]+work.L[184]*work.v[120];
  work.v[114] -= work.L[159]*work.v[116]+work.L[165]*work.v[117]+work.L[171]*work.v[118]+work.L[177]*work.v[119]+work.L[183]*work.v[120];
  work.v[113] -= work.L[144]*work.v[114]+work.L[158]*work.v[116]+work.L[164]*work.v[117]+work.L[170]*work.v[118]+work.L[176]*work.v[119]+work.L[182]*work.v[120];
  work.v[112] -= work.L[153]*work.v[115]+work.L[157]*work.v[116]+work.L[163]*work.v[117]+work.L[169]*work.v[118]+work.L[175]*work.v[119];
  work.v[111] -= work.L[139]*work.v[112]+work.L[152]*work.v[115]+work.L[156]*work.v[116]+work.L[162]*work.v[117]+work.L[168]*work.v[118];
  work.v[110] -= work.L[131]*work.v[111]+work.L[138]*work.v[112]+work.L[151]*work.v[115]+work.L[155]*work.v[116]+work.L[161]*work.v[117];
  work.v[109] -= work.L[124]*work.v[110]+work.L[130]*work.v[111]+work.L[137]*work.v[112]+work.L[150]*work.v[115]+work.L[154]*work.v[116];
  work.v[108] -= work.L[118]*work.v[109]+work.L[123]*work.v[110]+work.L[129]*work.v[111]+work.L[136]*work.v[112]+work.L[149]*work.v[115];
  work.v[107] -= work.L[113]*work.v[108]+work.L[117]*work.v[109]+work.L[122]*work.v[110]+work.L[128]*work.v[111]+work.L[135]*work.v[112]+work.L[148]*work.v[115];
  work.v[106] -= work.L[106]*work.v[107]+work.L[112]*work.v[108]+work.L[116]*work.v[109]+work.L[121]*work.v[110]+work.L[127]*work.v[111]+work.L[134]*work.v[112]+work.L[147]*work.v[115];
  work.v[105] -= work.L[99]*work.v[106]+work.L[105]*work.v[107]+work.L[111]*work.v[108]+work.L[115]*work.v[109]+work.L[120]*work.v[110]+work.L[126]*work.v[111]+work.L[133]*work.v[112]+work.L[146]*work.v[115];
  work.v[104] -= work.L[92]*work.v[105]+work.L[98]*work.v[106]+work.L[104]*work.v[107]+work.L[110]*work.v[108]+work.L[114]*work.v[109]+work.L[119]*work.v[110]+work.L[125]*work.v[111]+work.L[132]*work.v[112]+work.L[145]*work.v[115];
  work.v[103] -= work.L[85]*work.v[104]+work.L[91]*work.v[105]+work.L[97]*work.v[106]+work.L[103]*work.v[107]+work.L[109]*work.v[108];
  work.v[102] -= work.L[84]*work.v[104]+work.L[90]*work.v[105]+work.L[96]*work.v[106]+work.L[102]*work.v[107]+work.L[108]*work.v[108];
  work.v[101] -= work.L[74]*work.v[102]+work.L[83]*work.v[104]+work.L[89]*work.v[105]+work.L[95]*work.v[106]+work.L[101]*work.v[107]+work.L[107]*work.v[108];
  work.v[100] -= work.L[78]*work.v[103]+work.L[82]*work.v[104]+work.L[88]*work.v[105]+work.L[94]*work.v[106]+work.L[100]*work.v[107];
  work.v[99] -= work.L[69]*work.v[100]+work.L[77]*work.v[103]+work.L[81]*work.v[104]+work.L[87]*work.v[105]+work.L[93]*work.v[106];
  work.v[98] -= work.L[66]*work.v[99]+work.L[68]*work.v[100]+work.L[76]*work.v[103]+work.L[80]*work.v[104]+work.L[86]*work.v[105];
  work.v[97] -= work.L[64]*work.v[98]+work.L[65]*work.v[99]+work.L[67]*work.v[100]+work.L[75]*work.v[103]+work.L[79]*work.v[104];
  work.v[96] -= work.L[672]*work.v[199]+work.L[675]*work.v[200]+work.L[679]*work.v[201]+work.L[684]*work.v[202]+work.L[690]*work.v[203];
  work.v[95] -= work.L[63]*work.v[96]+work.L[671]*work.v[199]+work.L[674]*work.v[200]+work.L[678]*work.v[201]+work.L[683]*work.v[202]+work.L[689]*work.v[203];
  work.v[94] -= work.L[55]*work.v[95]+work.L[62]*work.v[96]+work.L[688]*work.v[203];
  work.v[93] -= work.L[54]*work.v[95]+work.L[61]*work.v[96]+work.L[682]*work.v[202];
  work.v[92] -= work.L[53]*work.v[95]+work.L[60]*work.v[96]+work.L[677]*work.v[201];
  work.v[91] -= work.L[52]*work.v[95]+work.L[59]*work.v[96]+work.L[673]*work.v[200];
  work.v[90] -= work.L[51]*work.v[95]+work.L[58]*work.v[96]+work.L[670]*work.v[199];
  work.v[88] -= work.L[48]*work.v[89];
  work.v[87] -= work.L[46]*work.v[88];
  work.v[86] -= work.L[44]*work.v[87];
  work.v[85] -= work.L[73]*work.v[102];
  work.v[84] -= work.L[71]*work.v[101];
  work.v[83] -= work.L[143]*work.v[114];
  work.v[82] -= work.L[141]*work.v[113];
  work.v[81] -= work.L[218]*work.v[126];
  work.v[80] -= work.L[216]*work.v[125];
  work.v[79] -= work.L[293]*work.v[138];
  work.v[78] -= work.L[291]*work.v[137];
  work.v[77] -= work.L[368]*work.v[150];
  work.v[76] -= work.L[366]*work.v[149];
  work.v[75] -= work.L[443]*work.v[162];
  work.v[74] -= work.L[441]*work.v[161];
  work.v[73] -= work.L[518]*work.v[174];
  work.v[72] -= work.L[516]*work.v[173];
  work.v[71] -= work.L[593]*work.v[186];
  work.v[70] -= work.L[591]*work.v[185];
  work.v[69] -= work.L[668]*work.v[198];
  work.v[68] -= work.L[666]*work.v[197];
  work.v[67] -= work.L[57]*work.v[96];
  work.v[66] -= work.L[50]*work.v[95];
  work.v[65] -= work.L[45]*work.v[88];
  work.v[64] -= work.L[43]*work.v[87];
  work.v[63] -= work.L[72]*work.v[102];
  work.v[62] -= work.L[70]*work.v[101];
  work.v[61] -= work.L[142]*work.v[114];
  work.v[60] -= work.L[140]*work.v[113];
  work.v[59] -= work.L[217]*work.v[126];
  work.v[58] -= work.L[215]*work.v[125];
  work.v[57] -= work.L[292]*work.v[138];
  work.v[56] -= work.L[290]*work.v[137];
  work.v[55] -= work.L[367]*work.v[150];
  work.v[54] -= work.L[365]*work.v[149];
  work.v[53] -= work.L[442]*work.v[162];
  work.v[52] -= work.L[440]*work.v[161];
  work.v[51] -= work.L[517]*work.v[174];
  work.v[50] -= work.L[515]*work.v[173];
  work.v[49] -= work.L[592]*work.v[186];
  work.v[48] -= work.L[590]*work.v[185];
  work.v[47] -= work.L[667]*work.v[198];
  work.v[46] -= work.L[665]*work.v[197];
  work.v[45] -= work.L[56]*work.v[96];
  work.v[44] -= work.L[49]*work.v[95];
  work.v[43] -= work.L[47]*work.v[89];
  work.v[42] -= work.L[42]*work.v[86];
  work.v[41] -= work.L[41]*work.v[85];
  work.v[40] -= work.L[40]*work.v[84];
  work.v[39] -= work.L[39]*work.v[83];
  work.v[38] -= work.L[38]*work.v[82];
  work.v[37] -= work.L[37]*work.v[81];
  work.v[36] -= work.L[36]*work.v[80];
  work.v[35] -= work.L[35]*work.v[79];
  work.v[34] -= work.L[34]*work.v[78];
  work.v[33] -= work.L[33]*work.v[77];
  work.v[32] -= work.L[32]*work.v[76];
  work.v[31] -= work.L[31]*work.v[75];
  work.v[30] -= work.L[30]*work.v[74];
  work.v[29] -= work.L[29]*work.v[73];
  work.v[28] -= work.L[28]*work.v[72];
  work.v[27] -= work.L[27]*work.v[71];
  work.v[26] -= work.L[26]*work.v[70];
  work.v[25] -= work.L[25]*work.v[69];
  work.v[24] -= work.L[24]*work.v[68];
  work.v[23] -= work.L[23]*work.v[67];
  work.v[22] -= work.L[22]*work.v[66];
  work.v[21] -= work.L[21]*work.v[65];
  work.v[20] -= work.L[20]*work.v[64];
  work.v[19] -= work.L[19]*work.v[63];
  work.v[18] -= work.L[18]*work.v[62];
  work.v[17] -= work.L[17]*work.v[61];
  work.v[16] -= work.L[16]*work.v[60];
  work.v[15] -= work.L[15]*work.v[59];
  work.v[14] -= work.L[14]*work.v[58];
  work.v[13] -= work.L[13]*work.v[57];
  work.v[12] -= work.L[12]*work.v[56];
  work.v[11] -= work.L[11]*work.v[55];
  work.v[10] -= work.L[10]*work.v[54];
  work.v[9] -= work.L[9]*work.v[53];
  work.v[8] -= work.L[8]*work.v[52];
  work.v[7] -= work.L[7]*work.v[51];
  work.v[6] -= work.L[6]*work.v[50];
  work.v[5] -= work.L[5]*work.v[49];
  work.v[4] -= work.L[4]*work.v[48];
  work.v[3] -= work.L[3]*work.v[47];
  work.v[2] -= work.L[2]*work.v[46];
  work.v[1] -= work.L[1]*work.v[45];
  work.v[0] -= work.L[0]*work.v[44];
  /* Unpermute the result, from v to var. */
  var[0] = work.v[95];
  var[1] = work.v[96];
  var[2] = work.v[197];
  var[3] = work.v[198];
  var[4] = work.v[185];
  var[5] = work.v[186];
  var[6] = work.v[173];
  var[7] = work.v[174];
  var[8] = work.v[161];
  var[9] = work.v[162];
  var[10] = work.v[149];
  var[11] = work.v[150];
  var[12] = work.v[137];
  var[13] = work.v[138];
  var[14] = work.v[125];
  var[15] = work.v[126];
  var[16] = work.v[113];
  var[17] = work.v[114];
  var[18] = work.v[101];
  var[19] = work.v[102];
  var[20] = work.v[87];
  var[21] = work.v[88];
  var[22] = work.v[199];
  var[23] = work.v[200];
  var[24] = work.v[201];
  var[25] = work.v[202];
  var[26] = work.v[203];
  var[27] = work.v[193];
  var[28] = work.v[194];
  var[29] = work.v[195];
  var[30] = work.v[196];
  var[31] = work.v[204];
  var[32] = work.v[181];
  var[33] = work.v[182];
  var[34] = work.v[183];
  var[35] = work.v[184];
  var[36] = work.v[187];
  var[37] = work.v[169];
  var[38] = work.v[170];
  var[39] = work.v[171];
  var[40] = work.v[172];
  var[41] = work.v[175];
  var[42] = work.v[157];
  var[43] = work.v[158];
  var[44] = work.v[159];
  var[45] = work.v[160];
  var[46] = work.v[163];
  var[47] = work.v[145];
  var[48] = work.v[146];
  var[49] = work.v[147];
  var[50] = work.v[148];
  var[51] = work.v[151];
  var[52] = work.v[133];
  var[53] = work.v[134];
  var[54] = work.v[135];
  var[55] = work.v[136];
  var[56] = work.v[139];
  var[57] = work.v[121];
  var[58] = work.v[122];
  var[59] = work.v[123];
  var[60] = work.v[124];
  var[61] = work.v[127];
  var[62] = work.v[109];
  var[63] = work.v[110];
  var[64] = work.v[111];
  var[65] = work.v[112];
  var[66] = work.v[115];
  var[67] = work.v[97];
  var[68] = work.v[98];
  var[69] = work.v[99];
  var[70] = work.v[100];
  var[71] = work.v[103];
  var[72] = work.v[0];
  var[73] = work.v[1];
  var[74] = work.v[2];
  var[75] = work.v[3];
  var[76] = work.v[4];
  var[77] = work.v[5];
  var[78] = work.v[6];
  var[79] = work.v[7];
  var[80] = work.v[8];
  var[81] = work.v[9];
  var[82] = work.v[10];
  var[83] = work.v[11];
  var[84] = work.v[12];
  var[85] = work.v[13];
  var[86] = work.v[14];
  var[87] = work.v[15];
  var[88] = work.v[16];
  var[89] = work.v[17];
  var[90] = work.v[18];
  var[91] = work.v[19];
  var[92] = work.v[20];
  var[93] = work.v[21];
  var[94] = work.v[22];
  var[95] = work.v[23];
  var[96] = work.v[24];
  var[97] = work.v[25];
  var[98] = work.v[26];
  var[99] = work.v[27];
  var[100] = work.v[28];
  var[101] = work.v[29];
  var[102] = work.v[30];
  var[103] = work.v[31];
  var[104] = work.v[32];
  var[105] = work.v[33];
  var[106] = work.v[34];
  var[107] = work.v[35];
  var[108] = work.v[36];
  var[109] = work.v[37];
  var[110] = work.v[38];
  var[111] = work.v[39];
  var[112] = work.v[40];
  var[113] = work.v[41];
  var[114] = work.v[42];
  var[115] = work.v[43];
  var[116] = work.v[44];
  var[117] = work.v[45];
  var[118] = work.v[46];
  var[119] = work.v[47];
  var[120] = work.v[48];
  var[121] = work.v[49];
  var[122] = work.v[50];
  var[123] = work.v[51];
  var[124] = work.v[52];
  var[125] = work.v[53];
  var[126] = work.v[54];
  var[127] = work.v[55];
  var[128] = work.v[56];
  var[129] = work.v[57];
  var[130] = work.v[58];
  var[131] = work.v[59];
  var[132] = work.v[60];
  var[133] = work.v[61];
  var[134] = work.v[62];
  var[135] = work.v[63];
  var[136] = work.v[64];
  var[137] = work.v[65];
  var[138] = work.v[66];
  var[139] = work.v[67];
  var[140] = work.v[68];
  var[141] = work.v[69];
  var[142] = work.v[70];
  var[143] = work.v[71];
  var[144] = work.v[72];
  var[145] = work.v[73];
  var[146] = work.v[74];
  var[147] = work.v[75];
  var[148] = work.v[76];
  var[149] = work.v[77];
  var[150] = work.v[78];
  var[151] = work.v[79];
  var[152] = work.v[80];
  var[153] = work.v[81];
  var[154] = work.v[82];
  var[155] = work.v[83];
  var[156] = work.v[84];
  var[157] = work.v[85];
  var[158] = work.v[86];
  var[159] = work.v[89];
  var[160] = work.v[90];
  var[161] = work.v[91];
  var[162] = work.v[92];
  var[163] = work.v[93];
  var[164] = work.v[94];
  var[165] = work.v[205];
  var[166] = work.v[206];
  var[167] = work.v[207];
  var[168] = work.v[208];
  var[169] = work.v[209];
  var[170] = work.v[188];
  var[171] = work.v[189];
  var[172] = work.v[190];
  var[173] = work.v[191];
  var[174] = work.v[192];
  var[175] = work.v[176];
  var[176] = work.v[177];
  var[177] = work.v[178];
  var[178] = work.v[179];
  var[179] = work.v[180];
  var[180] = work.v[164];
  var[181] = work.v[165];
  var[182] = work.v[166];
  var[183] = work.v[167];
  var[184] = work.v[168];
  var[185] = work.v[152];
  var[186] = work.v[153];
  var[187] = work.v[154];
  var[188] = work.v[155];
  var[189] = work.v[156];
  var[190] = work.v[140];
  var[191] = work.v[141];
  var[192] = work.v[142];
  var[193] = work.v[143];
  var[194] = work.v[144];
  var[195] = work.v[128];
  var[196] = work.v[129];
  var[197] = work.v[130];
  var[198] = work.v[131];
  var[199] = work.v[132];
  var[200] = work.v[116];
  var[201] = work.v[117];
  var[202] = work.v[118];
  var[203] = work.v[119];
  var[204] = work.v[120];
  var[205] = work.v[104];
  var[206] = work.v[105];
  var[207] = work.v[106];
  var[208] = work.v[107];
  var[209] = work.v[108];
#ifndef ZERO_LIBRARY_MODE
  if (settings.debug) {
    printf("Squared norm for solution is %.8g.\n", check_residual(target, var));
  }
#endif
}

void ldl_factor(void) {
  work.d[0] = work.KKT[0];
  if (work.d[0] < 0)
    work.d[0] = settings.kkt_reg;
  else
    work.d[0] += settings.kkt_reg;
  work.d_inv[0] = 1/work.d[0];

  work.L[0] = work.KKT[1]*work.d_inv[0];

  work.v[1] = work.KKT[2];
  work.d[1] = work.v[1];

  if (work.d[1] < 0)
    work.d[1] = settings.kkt_reg;
  else
    work.d[1] += settings.kkt_reg;
  work.d_inv[1] = 1/work.d[1];

  work.L[1] = (work.KKT[3])*work.d_inv[1];
  work.v[2] = work.KKT[4];
  work.d[2] = work.v[2];

  if (work.d[2] < 0)
    work.d[2] = settings.kkt_reg;
  else
    work.d[2] += settings.kkt_reg;
  work.d_inv[2] = 1/work.d[2];

  work.L[2] = (work.KKT[5])*work.d_inv[2];
  work.v[3] = work.KKT[6];
  work.d[3] = work.v[3];

  if (work.d[3] < 0)
    work.d[3] = settings.kkt_reg;
  else
    work.d[3] += settings.kkt_reg;
  work.d_inv[3] = 1/work.d[3];

  work.L[3] = (work.KKT[7])*work.d_inv[3];
  work.v[4] = work.KKT[8];
  work.d[4] = work.v[4];

  if (work.d[4] < 0)
    work.d[4] = settings.kkt_reg;
  else
    work.d[4] += settings.kkt_reg;
  work.d_inv[4] = 1/work.d[4];

  work.L[4] = (work.KKT[9])*work.d_inv[4];
  work.v[5] = work.KKT[10];
  work.d[5] = work.v[5];

  if (work.d[5] < 0)
    work.d[5] = settings.kkt_reg;
  else
    work.d[5] += settings.kkt_reg;
  work.d_inv[5] = 1/work.d[5];

  work.L[5] = (work.KKT[11])*work.d_inv[5];
  work.v[6] = work.KKT[12];
  work.d[6] = work.v[6];

  if (work.d[6] < 0)
    work.d[6] = settings.kkt_reg;
  else
    work.d[6] += settings.kkt_reg;
  work.d_inv[6] = 1/work.d[6];

  work.L[6] = (work.KKT[13])*work.d_inv[6];
  work.v[7] = work.KKT[14];
  work.d[7] = work.v[7];

  if (work.d[7] < 0)
    work.d[7] = settings.kkt_reg;
  else
    work.d[7] += settings.kkt_reg;
  work.d_inv[7] = 1/work.d[7];

  work.L[7] = (work.KKT[15])*work.d_inv[7];
  work.v[8] = work.KKT[16];
  work.d[8] = work.v[8];

  if (work.d[8] < 0)
    work.d[8] = settings.kkt_reg;
  else
    work.d[8] += settings.kkt_reg;
  work.d_inv[8] = 1/work.d[8];

  work.L[8] = (work.KKT[17])*work.d_inv[8];
  work.v[9] = work.KKT[18];
  work.d[9] = work.v[9];

  if (work.d[9] < 0)
    work.d[9] = settings.kkt_reg;
  else
    work.d[9] += settings.kkt_reg;
  work.d_inv[9] = 1/work.d[9];

  work.L[9] = (work.KKT[19])*work.d_inv[9];
  work.v[10] = work.KKT[20];
  work.d[10] = work.v[10];

  if (work.d[10] < 0)
    work.d[10] = settings.kkt_reg;
  else
    work.d[10] += settings.kkt_reg;
  work.d_inv[10] = 1/work.d[10];

  work.L[10] = (work.KKT[21])*work.d_inv[10];
  work.v[11] = work.KKT[22];
  work.d[11] = work.v[11];

  if (work.d[11] < 0)
    work.d[11] = settings.kkt_reg;
  else
    work.d[11] += settings.kkt_reg;
  work.d_inv[11] = 1/work.d[11];

  work.L[11] = (work.KKT[23])*work.d_inv[11];
  work.v[12] = work.KKT[24];
  work.d[12] = work.v[12];

  if (work.d[12] < 0)
    work.d[12] = settings.kkt_reg;
  else
    work.d[12] += settings.kkt_reg;
  work.d_inv[12] = 1/work.d[12];

  work.L[12] = (work.KKT[25])*work.d_inv[12];
  work.v[13] = work.KKT[26];
  work.d[13] = work.v[13];

  if (work.d[13] < 0)
    work.d[13] = settings.kkt_reg;
  else
    work.d[13] += settings.kkt_reg;
  work.d_inv[13] = 1/work.d[13];

  work.L[13] = (work.KKT[27])*work.d_inv[13];
  work.v[14] = work.KKT[28];
  work.d[14] = work.v[14];

  if (work.d[14] < 0)
    work.d[14] = settings.kkt_reg;
  else
    work.d[14] += settings.kkt_reg;
  work.d_inv[14] = 1/work.d[14];

  work.L[14] = (work.KKT[29])*work.d_inv[14];
  work.v[15] = work.KKT[30];
  work.d[15] = work.v[15];

  if (work.d[15] < 0)
    work.d[15] = settings.kkt_reg;
  else
    work.d[15] += settings.kkt_reg;
  work.d_inv[15] = 1/work.d[15];

  work.L[15] = (work.KKT[31])*work.d_inv[15];
  work.v[16] = work.KKT[32];
  work.d[16] = work.v[16];

  if (work.d[16] < 0)
    work.d[16] = settings.kkt_reg;
  else
    work.d[16] += settings.kkt_reg;
  work.d_inv[16] = 1/work.d[16];

  work.L[16] = (work.KKT[33])*work.d_inv[16];
  work.v[17] = work.KKT[34];
  work.d[17] = work.v[17];

  if (work.d[17] < 0)
    work.d[17] = settings.kkt_reg;
  else
    work.d[17] += settings.kkt_reg;
  work.d_inv[17] = 1/work.d[17];

  work.L[17] = (work.KKT[35])*work.d_inv[17];
  work.v[18] = work.KKT[36];
  work.d[18] = work.v[18];

  if (work.d[18] < 0)
    work.d[18] = settings.kkt_reg;
  else
    work.d[18] += settings.kkt_reg;
  work.d_inv[18] = 1/work.d[18];

  work.L[18] = (work.KKT[37])*work.d_inv[18];
  work.v[19] = work.KKT[38];
  work.d[19] = work.v[19];

  if (work.d[19] < 0)
    work.d[19] = settings.kkt_reg;
  else
    work.d[19] += settings.kkt_reg;
  work.d_inv[19] = 1/work.d[19];

  work.L[19] = (work.KKT[39])*work.d_inv[19];
  work.v[20] = work.KKT[40];
  work.d[20] = work.v[20];

  if (work.d[20] < 0)
    work.d[20] = settings.kkt_reg;
  else
    work.d[20] += settings.kkt_reg;
  work.d_inv[20] = 1/work.d[20];

  work.L[20] = (work.KKT[41])*work.d_inv[20];
  work.v[21] = work.KKT[42];
  work.d[21] = work.v[21];

  if (work.d[21] < 0)
    work.d[21] = settings.kkt_reg;
  else
    work.d[21] += settings.kkt_reg;
  work.d_inv[21] = 1/work.d[21];

  work.L[21] = (work.KKT[43])*work.d_inv[21];
  work.v[22] = work.KKT[44];
  work.d[22] = work.v[22];

  if (work.d[22] < 0)
    work.d[22] = settings.kkt_reg;
  else
    work.d[22] += settings.kkt_reg;
  work.d_inv[22] = 1/work.d[22];

  work.L[22] = (work.KKT[45])*work.d_inv[22];
  work.v[23] = work.KKT[46];
  work.d[23] = work.v[23];

  if (work.d[23] < 0)
    work.d[23] = settings.kkt_reg;
  else
    work.d[23] += settings.kkt_reg;
  work.d_inv[23] = 1/work.d[23];

  work.L[23] = (work.KKT[47])*work.d_inv[23];
  work.v[24] = work.KKT[48];
  work.d[24] = work.v[24];

  if (work.d[24] < 0)
    work.d[24] = settings.kkt_reg;
  else
    work.d[24] += settings.kkt_reg;
  work.d_inv[24] = 1/work.d[24];

  work.L[24] = (work.KKT[49])*work.d_inv[24];
  work.v[25] = work.KKT[50];
  work.d[25] = work.v[25];

  if (work.d[25] < 0)
    work.d[25] = settings.kkt_reg;
  else
    work.d[25] += settings.kkt_reg;
  work.d_inv[25] = 1/work.d[25];

  work.L[25] = (work.KKT[51])*work.d_inv[25];
  work.v[26] = work.KKT[52];
  work.d[26] = work.v[26];

  if (work.d[26] < 0)
    work.d[26] = settings.kkt_reg;
  else
    work.d[26] += settings.kkt_reg;
  work.d_inv[26] = 1/work.d[26];

  work.L[26] = (work.KKT[53])*work.d_inv[26];
  work.v[27] = work.KKT[54];
  work.d[27] = work.v[27];

  if (work.d[27] < 0)
    work.d[27] = settings.kkt_reg;
  else
    work.d[27] += settings.kkt_reg;
  work.d_inv[27] = 1/work.d[27];

  work.L[27] = (work.KKT[55])*work.d_inv[27];
  work.v[28] = work.KKT[56];
  work.d[28] = work.v[28];

  if (work.d[28] < 0)
    work.d[28] = settings.kkt_reg;
  else
    work.d[28] += settings.kkt_reg;
  work.d_inv[28] = 1/work.d[28];

  work.L[28] = (work.KKT[57])*work.d_inv[28];
  work.v[29] = work.KKT[58];
  work.d[29] = work.v[29];

  if (work.d[29] < 0)
    work.d[29] = settings.kkt_reg;
  else
    work.d[29] += settings.kkt_reg;
  work.d_inv[29] = 1/work.d[29];

  work.L[29] = (work.KKT[59])*work.d_inv[29];
  work.v[30] = work.KKT[60];
  work.d[30] = work.v[30];

  if (work.d[30] < 0)
    work.d[30] = settings.kkt_reg;
  else
    work.d[30] += settings.kkt_reg;
  work.d_inv[30] = 1/work.d[30];

  work.L[30] = (work.KKT[61])*work.d_inv[30];
  work.v[31] = work.KKT[62];
  work.d[31] = work.v[31];

  if (work.d[31] < 0)
    work.d[31] = settings.kkt_reg;
  else
    work.d[31] += settings.kkt_reg;
  work.d_inv[31] = 1/work.d[31];

  work.L[31] = (work.KKT[63])*work.d_inv[31];
  work.v[32] = work.KKT[64];
  work.d[32] = work.v[32];

  if (work.d[32] < 0)
    work.d[32] = settings.kkt_reg;
  else
    work.d[32] += settings.kkt_reg;
  work.d_inv[32] = 1/work.d[32];

  work.L[32] = (work.KKT[65])*work.d_inv[32];
  work.v[33] = work.KKT[66];
  work.d[33] = work.v[33];

  if (work.d[33] < 0)
    work.d[33] = settings.kkt_reg;
  else
    work.d[33] += settings.kkt_reg;
  work.d_inv[33] = 1/work.d[33];

  work.L[33] = (work.KKT[67])*work.d_inv[33];
  work.v[34] = work.KKT[68];
  work.d[34] = work.v[34];

  if (work.d[34] < 0)
    work.d[34] = settings.kkt_reg;
  else
    work.d[34] += settings.kkt_reg;
  work.d_inv[34] = 1/work.d[34];

  work.L[34] = (work.KKT[69])*work.d_inv[34];
  work.v[35] = work.KKT[70];
  work.d[35] = work.v[35];

  if (work.d[35] < 0)
    work.d[35] = settings.kkt_reg;
  else
    work.d[35] += settings.kkt_reg;
  work.d_inv[35] = 1/work.d[35];

  work.L[35] = (work.KKT[71])*work.d_inv[35];
  work.v[36] = work.KKT[72];
  work.d[36] = work.v[36];

  if (work.d[36] < 0)
    work.d[36] = settings.kkt_reg;
  else
    work.d[36] += settings.kkt_reg;
  work.d_inv[36] = 1/work.d[36];

  work.L[36] = (work.KKT[73])*work.d_inv[36];
  work.v[37] = work.KKT[74];
  work.d[37] = work.v[37];

  if (work.d[37] < 0)
    work.d[37] = settings.kkt_reg;
  else
    work.d[37] += settings.kkt_reg;
  work.d_inv[37] = 1/work.d[37];

  work.L[37] = (work.KKT[75])*work.d_inv[37];
  work.v[38] = work.KKT[76];
  work.d[38] = work.v[38];

  if (work.d[38] < 0)
    work.d[38] = settings.kkt_reg;
  else
    work.d[38] += settings.kkt_reg;
  work.d_inv[38] = 1/work.d[38];

  work.L[38] = (work.KKT[77])*work.d_inv[38];
  work.v[39] = work.KKT[78];
  work.d[39] = work.v[39];

  if (work.d[39] < 0)
    work.d[39] = settings.kkt_reg;
  else
    work.d[39] += settings.kkt_reg;
  work.d_inv[39] = 1/work.d[39];

  work.L[39] = (work.KKT[79])*work.d_inv[39];
  work.v[40] = work.KKT[80];
  work.d[40] = work.v[40];

  if (work.d[40] < 0)
    work.d[40] = settings.kkt_reg;
  else
    work.d[40] += settings.kkt_reg;
  work.d_inv[40] = 1/work.d[40];

  work.L[40] = (work.KKT[81])*work.d_inv[40];
  work.v[41] = work.KKT[82];
  work.d[41] = work.v[41];

  if (work.d[41] < 0)
    work.d[41] = settings.kkt_reg;
  else
    work.d[41] += settings.kkt_reg;
  work.d_inv[41] = 1/work.d[41];

  work.L[41] = (work.KKT[83])*work.d_inv[41];
  work.v[42] = work.KKT[84];
  work.d[42] = work.v[42];

  if (work.d[42] < 0)
    work.d[42] = settings.kkt_reg;
  else
    work.d[42] += settings.kkt_reg;
  work.d_inv[42] = 1/work.d[42];

  work.L[42] = (work.KKT[85])*work.d_inv[42];
  work.v[43] = work.KKT[86];
  work.d[43] = work.v[43];

  if (work.d[43] < 0)
    work.d[43] = settings.kkt_reg;
  else
    work.d[43] += settings.kkt_reg;
  work.d_inv[43] = 1/work.d[43];

  work.L[47] = (work.KKT[87])*work.d_inv[43];
  work.v[0] = work.L[0]*work.d[0];
  work.v[44] = work.KKT[88]-work.L[0]*work.v[0];
  work.d[44] = work.v[44];

  if (work.d[44] > 0)
    work.d[44] = -settings.kkt_reg;
  else
    work.d[44] -= settings.kkt_reg;

  work.d_inv[44] = 1/work.d[44];

  work.L[49] = (work.KKT[89])*work.d_inv[44];
  work.v[1] = work.L[1]*work.d[1];
  work.v[45] = work.KKT[90]-work.L[1]*work.v[1];
  work.d[45] = work.v[45];

  if (work.d[45] > 0)
    work.d[45] = -settings.kkt_reg;
  else
    work.d[45] -= settings.kkt_reg;

  work.d_inv[45] = 1/work.d[45];

  work.L[56] = (work.KKT[91])*work.d_inv[45];
  work.v[2] = work.L[2]*work.d[2];
  work.v[46] = work.KKT[92]-work.L[2]*work.v[2];
  work.d[46] = work.v[46];

  if (work.d[46] > 0)
    work.d[46] = -settings.kkt_reg;
  else
    work.d[46] -= settings.kkt_reg;

  work.d_inv[46] = 1/work.d[46];

  work.L[665] = (work.KKT[93])*work.d_inv[46];
  work.v[3] = work.L[3]*work.d[3];
  work.v[47] = work.KKT[94]-work.L[3]*work.v[3];
  work.d[47] = work.v[47];

  if (work.d[47] > 0)
    work.d[47] = -settings.kkt_reg;
  else
    work.d[47] -= settings.kkt_reg;

  work.d_inv[47] = 1/work.d[47];

  work.L[667] = (work.KKT[95])*work.d_inv[47];
  work.v[4] = work.L[4]*work.d[4];
  work.v[48] = work.KKT[96]-work.L[4]*work.v[4];
  work.d[48] = work.v[48];

  if (work.d[48] > 0)
    work.d[48] = -settings.kkt_reg;
  else
    work.d[48] -= settings.kkt_reg;

  work.d_inv[48] = 1/work.d[48];

  work.L[590] = (work.KKT[97])*work.d_inv[48];
  work.v[5] = work.L[5]*work.d[5];
  work.v[49] = work.KKT[98]-work.L[5]*work.v[5];
  work.d[49] = work.v[49];

  if (work.d[49] > 0)
    work.d[49] = -settings.kkt_reg;
  else
    work.d[49] -= settings.kkt_reg;

  work.d_inv[49] = 1/work.d[49];

  work.L[592] = (work.KKT[99])*work.d_inv[49];
  work.v[6] = work.L[6]*work.d[6];
  work.v[50] = work.KKT[100]-work.L[6]*work.v[6];
  work.d[50] = work.v[50];

  if (work.d[50] > 0)
    work.d[50] = -settings.kkt_reg;
  else
    work.d[50] -= settings.kkt_reg;

  work.d_inv[50] = 1/work.d[50];

  work.L[515] = (work.KKT[101])*work.d_inv[50];
  work.v[7] = work.L[7]*work.d[7];
  work.v[51] = work.KKT[102]-work.L[7]*work.v[7];
  work.d[51] = work.v[51];

  if (work.d[51] > 0)
    work.d[51] = -settings.kkt_reg;
  else
    work.d[51] -= settings.kkt_reg;

  work.d_inv[51] = 1/work.d[51];

  work.L[517] = (work.KKT[103])*work.d_inv[51];
  work.v[8] = work.L[8]*work.d[8];
  work.v[52] = work.KKT[104]-work.L[8]*work.v[8];
  work.d[52] = work.v[52];

  if (work.d[52] > 0)
    work.d[52] = -settings.kkt_reg;
  else
    work.d[52] -= settings.kkt_reg;

  work.d_inv[52] = 1/work.d[52];

  work.L[440] = (work.KKT[105])*work.d_inv[52];
  work.v[9] = work.L[9]*work.d[9];
  work.v[53] = work.KKT[106]-work.L[9]*work.v[9];
  work.d[53] = work.v[53];

  if (work.d[53] > 0)
    work.d[53] = -settings.kkt_reg;
  else
    work.d[53] -= settings.kkt_reg;

  work.d_inv[53] = 1/work.d[53];

  work.L[442] = (work.KKT[107])*work.d_inv[53];
  work.v[10] = work.L[10]*work.d[10];
  work.v[54] = work.KKT[108]-work.L[10]*work.v[10];
  work.d[54] = work.v[54];

  if (work.d[54] > 0)
    work.d[54] = -settings.kkt_reg;
  else
    work.d[54] -= settings.kkt_reg;

  work.d_inv[54] = 1/work.d[54];

  work.L[365] = (work.KKT[109])*work.d_inv[54];
  work.v[11] = work.L[11]*work.d[11];
  work.v[55] = work.KKT[110]-work.L[11]*work.v[11];
  work.d[55] = work.v[55];

  if (work.d[55] > 0)
    work.d[55] = -settings.kkt_reg;
  else
    work.d[55] -= settings.kkt_reg;

  work.d_inv[55] = 1/work.d[55];

  work.L[367] = (work.KKT[111])*work.d_inv[55];
  work.v[12] = work.L[12]*work.d[12];
  work.v[56] = work.KKT[112]-work.L[12]*work.v[12];
  work.d[56] = work.v[56];

  if (work.d[56] > 0)
    work.d[56] = -settings.kkt_reg;
  else
    work.d[56] -= settings.kkt_reg;

  work.d_inv[56] = 1/work.d[56];

  work.L[290] = (work.KKT[113])*work.d_inv[56];
  work.v[13] = work.L[13]*work.d[13];
  work.v[57] = work.KKT[114]-work.L[13]*work.v[13];
  work.d[57] = work.v[57];

  if (work.d[57] > 0)
    work.d[57] = -settings.kkt_reg;
  else
    work.d[57] -= settings.kkt_reg;

  work.d_inv[57] = 1/work.d[57];

  work.L[292] = (work.KKT[115])*work.d_inv[57];
  work.v[14] = work.L[14]*work.d[14];
  work.v[58] = work.KKT[116]-work.L[14]*work.v[14];
  work.d[58] = work.v[58];

  if (work.d[58] > 0)
    work.d[58] = -settings.kkt_reg;
  else
    work.d[58] -= settings.kkt_reg;

  work.d_inv[58] = 1/work.d[58];

  work.L[215] = (work.KKT[117])*work.d_inv[58];
  work.v[15] = work.L[15]*work.d[15];
  work.v[59] = work.KKT[118]-work.L[15]*work.v[15];
  work.d[59] = work.v[59];

  if (work.d[59] > 0)
    work.d[59] = -settings.kkt_reg;
  else
    work.d[59] -= settings.kkt_reg;

  work.d_inv[59] = 1/work.d[59];

  work.L[217] = (work.KKT[119])*work.d_inv[59];
  work.v[16] = work.L[16]*work.d[16];
  work.v[60] = work.KKT[120]-work.L[16]*work.v[16];
  work.d[60] = work.v[60];

  if (work.d[60] > 0)
    work.d[60] = -settings.kkt_reg;
  else
    work.d[60] -= settings.kkt_reg;

  work.d_inv[60] = 1/work.d[60];

  work.L[140] = (work.KKT[121])*work.d_inv[60];
  work.v[17] = work.L[17]*work.d[17];
  work.v[61] = work.KKT[122]-work.L[17]*work.v[17];
  work.d[61] = work.v[61];

  if (work.d[61] > 0)
    work.d[61] = -settings.kkt_reg;
  else
    work.d[61] -= settings.kkt_reg;

  work.d_inv[61] = 1/work.d[61];

  work.L[142] = (work.KKT[123])*work.d_inv[61];
  work.v[18] = work.L[18]*work.d[18];
  work.v[62] = work.KKT[124]-work.L[18]*work.v[18];
  work.d[62] = work.v[62];

  if (work.d[62] > 0)
    work.d[62] = -settings.kkt_reg;
  else
    work.d[62] -= settings.kkt_reg;

  work.d_inv[62] = 1/work.d[62];

  work.L[70] = (work.KKT[125])*work.d_inv[62];
  work.v[19] = work.L[19]*work.d[19];
  work.v[63] = work.KKT[126]-work.L[19]*work.v[19];
  work.d[63] = work.v[63];

  if (work.d[63] > 0)
    work.d[63] = -settings.kkt_reg;
  else
    work.d[63] -= settings.kkt_reg;

  work.d_inv[63] = 1/work.d[63];

  work.L[72] = (work.KKT[127])*work.d_inv[63];
  work.v[20] = work.L[20]*work.d[20];
  work.v[64] = work.KKT[128]-work.L[20]*work.v[20];
  work.d[64] = work.v[64];

  if (work.d[64] > 0)
    work.d[64] = -settings.kkt_reg;
  else
    work.d[64] -= settings.kkt_reg;

  work.d_inv[64] = 1/work.d[64];

  work.L[43] = (work.KKT[129])*work.d_inv[64];
  work.v[21] = work.L[21]*work.d[21];
  work.v[65] = work.KKT[130]-work.L[21]*work.v[21];
  work.d[65] = work.v[65];

  if (work.d[65] > 0)
    work.d[65] = -settings.kkt_reg;
  else
    work.d[65] -= settings.kkt_reg;

  work.d_inv[65] = 1/work.d[65];

  work.L[45] = (work.KKT[131])*work.d_inv[65];
  work.v[22] = work.L[22]*work.d[22];
  work.v[66] = work.KKT[132]-work.L[22]*work.v[22];
  work.d[66] = work.v[66];

  if (work.d[66] > 0)
    work.d[66] = -settings.kkt_reg;
  else
    work.d[66] -= settings.kkt_reg;

  work.d_inv[66] = 1/work.d[66];

  work.L[50] = (work.KKT[133])*work.d_inv[66];
  work.v[23] = work.L[23]*work.d[23];
  work.v[67] = work.KKT[134]-work.L[23]*work.v[23];
  work.d[67] = work.v[67];

  if (work.d[67] > 0)
    work.d[67] = -settings.kkt_reg;
  else
    work.d[67] -= settings.kkt_reg;

  work.d_inv[67] = 1/work.d[67];

  work.L[57] = (work.KKT[135])*work.d_inv[67];
  work.v[24] = work.L[24]*work.d[24];
  work.v[68] = work.KKT[136]-work.L[24]*work.v[24];
  work.d[68] = work.v[68];

  if (work.d[68] > 0)
    work.d[68] = -settings.kkt_reg;
  else
    work.d[68] -= settings.kkt_reg;

  work.d_inv[68] = 1/work.d[68];

  work.L[666] = (work.KKT[137])*work.d_inv[68];
  work.v[25] = work.L[25]*work.d[25];
  work.v[69] = work.KKT[138]-work.L[25]*work.v[25];
  work.d[69] = work.v[69];

  if (work.d[69] > 0)
    work.d[69] = -settings.kkt_reg;
  else
    work.d[69] -= settings.kkt_reg;

  work.d_inv[69] = 1/work.d[69];

  work.L[668] = (work.KKT[139])*work.d_inv[69];
  work.v[26] = work.L[26]*work.d[26];
  work.v[70] = work.KKT[140]-work.L[26]*work.v[26];
  work.d[70] = work.v[70];

  if (work.d[70] > 0)
    work.d[70] = -settings.kkt_reg;
  else
    work.d[70] -= settings.kkt_reg;

  work.d_inv[70] = 1/work.d[70];

  work.L[591] = (work.KKT[141])*work.d_inv[70];
  work.v[27] = work.L[27]*work.d[27];
  work.v[71] = work.KKT[142]-work.L[27]*work.v[27];
  work.d[71] = work.v[71];

  if (work.d[71] > 0)
    work.d[71] = -settings.kkt_reg;
  else
    work.d[71] -= settings.kkt_reg;

  work.d_inv[71] = 1/work.d[71];

  work.L[593] = (work.KKT[143])*work.d_inv[71];
  work.v[28] = work.L[28]*work.d[28];
  work.v[72] = work.KKT[144]-work.L[28]*work.v[28];
  work.d[72] = work.v[72];

  if (work.d[72] > 0)
    work.d[72] = -settings.kkt_reg;
  else
    work.d[72] -= settings.kkt_reg;

  work.d_inv[72] = 1/work.d[72];

  work.L[516] = (work.KKT[145])*work.d_inv[72];
  work.v[29] = work.L[29]*work.d[29];
  work.v[73] = work.KKT[146]-work.L[29]*work.v[29];
  work.d[73] = work.v[73];

  if (work.d[73] > 0)
    work.d[73] = -settings.kkt_reg;
  else
    work.d[73] -= settings.kkt_reg;

  work.d_inv[73] = 1/work.d[73];

  work.L[518] = (work.KKT[147])*work.d_inv[73];
  work.v[30] = work.L[30]*work.d[30];
  work.v[74] = work.KKT[148]-work.L[30]*work.v[30];
  work.d[74] = work.v[74];

  if (work.d[74] > 0)
    work.d[74] = -settings.kkt_reg;
  else
    work.d[74] -= settings.kkt_reg;

  work.d_inv[74] = 1/work.d[74];

  work.L[441] = (work.KKT[149])*work.d_inv[74];
  work.v[31] = work.L[31]*work.d[31];
  work.v[75] = work.KKT[150]-work.L[31]*work.v[31];
  work.d[75] = work.v[75];

  if (work.d[75] > 0)
    work.d[75] = -settings.kkt_reg;
  else
    work.d[75] -= settings.kkt_reg;

  work.d_inv[75] = 1/work.d[75];

  work.L[443] = (work.KKT[151])*work.d_inv[75];
  work.v[32] = work.L[32]*work.d[32];
  work.v[76] = work.KKT[152]-work.L[32]*work.v[32];
  work.d[76] = work.v[76];

  if (work.d[76] > 0)
    work.d[76] = -settings.kkt_reg;
  else
    work.d[76] -= settings.kkt_reg;

  work.d_inv[76] = 1/work.d[76];

  work.L[366] = (work.KKT[153])*work.d_inv[76];
  work.v[33] = work.L[33]*work.d[33];
  work.v[77] = work.KKT[154]-work.L[33]*work.v[33];
  work.d[77] = work.v[77];

  if (work.d[77] > 0)
    work.d[77] = -settings.kkt_reg;
  else
    work.d[77] -= settings.kkt_reg;

  work.d_inv[77] = 1/work.d[77];

  work.L[368] = (work.KKT[155])*work.d_inv[77];
  work.v[34] = work.L[34]*work.d[34];
  work.v[78] = work.KKT[156]-work.L[34]*work.v[34];
  work.d[78] = work.v[78];

  if (work.d[78] > 0)
    work.d[78] = -settings.kkt_reg;
  else
    work.d[78] -= settings.kkt_reg;

  work.d_inv[78] = 1/work.d[78];

  work.L[291] = (work.KKT[157])*work.d_inv[78];
  work.v[35] = work.L[35]*work.d[35];
  work.v[79] = work.KKT[158]-work.L[35]*work.v[35];
  work.d[79] = work.v[79];

  if (work.d[79] > 0)
    work.d[79] = -settings.kkt_reg;
  else
    work.d[79] -= settings.kkt_reg;

  work.d_inv[79] = 1/work.d[79];

  work.L[293] = (work.KKT[159])*work.d_inv[79];
  work.v[36] = work.L[36]*work.d[36];
  work.v[80] = work.KKT[160]-work.L[36]*work.v[36];
  work.d[80] = work.v[80];

  if (work.d[80] > 0)
    work.d[80] = -settings.kkt_reg;
  else
    work.d[80] -= settings.kkt_reg;

  work.d_inv[80] = 1/work.d[80];

  work.L[216] = (work.KKT[161])*work.d_inv[80];
  work.v[37] = work.L[37]*work.d[37];
  work.v[81] = work.KKT[162]-work.L[37]*work.v[37];
  work.d[81] = work.v[81];

  if (work.d[81] > 0)
    work.d[81] = -settings.kkt_reg;
  else
    work.d[81] -= settings.kkt_reg;

  work.d_inv[81] = 1/work.d[81];

  work.L[218] = (work.KKT[163])*work.d_inv[81];
  work.v[38] = work.L[38]*work.d[38];
  work.v[82] = work.KKT[164]-work.L[38]*work.v[38];
  work.d[82] = work.v[82];

  if (work.d[82] > 0)
    work.d[82] = -settings.kkt_reg;
  else
    work.d[82] -= settings.kkt_reg;

  work.d_inv[82] = 1/work.d[82];

  work.L[141] = (work.KKT[165])*work.d_inv[82];
  work.v[39] = work.L[39]*work.d[39];
  work.v[83] = work.KKT[166]-work.L[39]*work.v[39];
  work.d[83] = work.v[83];

  if (work.d[83] > 0)
    work.d[83] = -settings.kkt_reg;
  else
    work.d[83] -= settings.kkt_reg;

  work.d_inv[83] = 1/work.d[83];

  work.L[143] = (work.KKT[167])*work.d_inv[83];
  work.v[40] = work.L[40]*work.d[40];
  work.v[84] = work.KKT[168]-work.L[40]*work.v[40];
  work.d[84] = work.v[84];

  if (work.d[84] > 0)
    work.d[84] = -settings.kkt_reg;
  else
    work.d[84] -= settings.kkt_reg;

  work.d_inv[84] = 1/work.d[84];

  work.L[71] = (work.KKT[169])*work.d_inv[84];
  work.v[41] = work.L[41]*work.d[41];
  work.v[85] = work.KKT[170]-work.L[41]*work.v[41];
  work.d[85] = work.v[85];

  if (work.d[85] > 0)
    work.d[85] = -settings.kkt_reg;
  else
    work.d[85] -= settings.kkt_reg;

  work.d_inv[85] = 1/work.d[85];

  work.L[73] = (work.KKT[171])*work.d_inv[85];
  work.v[42] = work.L[42]*work.d[42];
  work.v[86] = work.KKT[172]-work.L[42]*work.v[42];
  work.d[86] = work.v[86];

  if (work.d[86] > 0)
    work.d[86] = -settings.kkt_reg;
  else
    work.d[86] -= settings.kkt_reg;

  work.d_inv[86] = 1/work.d[86];

  work.L[44] = (work.KKT[173])*work.d_inv[86];
  work.v[64] = work.L[43]*work.d[64];
  work.v[86] = work.L[44]*work.d[86];
  work.v[87] = work.KKT[174]-work.L[43]*work.v[64]-work.L[44]*work.v[86];
  work.d[87] = work.v[87];

  if (work.d[87] < 0)
    work.d[87] = settings.kkt_reg;
  else
    work.d[87] += settings.kkt_reg;
  work.d_inv[87] = 1/work.d[87];

  work.L[46] = (work.KKT[175])*work.d_inv[87];
  work.v[65] = work.L[45]*work.d[65];
  work.v[87] = work.L[46]*work.d[87];
  work.v[88] = work.KKT[176]-work.L[45]*work.v[65]-work.L[46]*work.v[87];
  work.d[88] = work.v[88];

  if (work.d[88] < 0)
    work.d[88] = settings.kkt_reg;
  else
    work.d[88] += settings.kkt_reg;
  work.d_inv[88] = 1/work.d[88];

  work.L[48] = (work.KKT[177])*work.d_inv[88];
  work.v[43] = work.L[47]*work.d[43];
  work.v[88] = work.L[48]*work.d[88];
  work.v[89] = work.KKT[178]-work.L[47]*work.v[43]-work.L[48]*work.v[88];
  work.d[89] = work.v[89];

  if (work.d[89] > 0)
    work.d[89] = -settings.kkt_reg;
  else
    work.d[89] -= settings.kkt_reg;

  work.d_inv[89] = 1/work.d[89];

  work.v[90] = 0;
  work.d[90] = work.v[90];

  if (work.d[90] > 0)
    work.d[90] = -settings.kkt_reg;
  else
    work.d[90] -= settings.kkt_reg;

  work.d_inv[90] = 1/work.d[90];

  work.L[51] = (work.KKT[179])*work.d_inv[90];
  work.L[58] = (work.KKT[180])*work.d_inv[90];
  work.L[670] = (work.KKT[181])*work.d_inv[90];
  work.v[91] = 0;
  work.d[91] = work.v[91];

  if (work.d[91] > 0)
    work.d[91] = -settings.kkt_reg;
  else
    work.d[91] -= settings.kkt_reg;

  work.d_inv[91] = 1/work.d[91];

  work.L[52] = (work.KKT[182])*work.d_inv[91];
  work.L[59] = (work.KKT[183])*work.d_inv[91];
  work.L[673] = (work.KKT[184])*work.d_inv[91];
  work.v[92] = 0;
  work.d[92] = work.v[92];

  if (work.d[92] > 0)
    work.d[92] = -settings.kkt_reg;
  else
    work.d[92] -= settings.kkt_reg;

  work.d_inv[92] = 1/work.d[92];

  work.L[53] = (work.KKT[185])*work.d_inv[92];
  work.L[60] = (work.KKT[186])*work.d_inv[92];
  work.L[677] = (work.KKT[187])*work.d_inv[92];
  work.v[93] = 0;
  work.d[93] = work.v[93];

  if (work.d[93] > 0)
    work.d[93] = -settings.kkt_reg;
  else
    work.d[93] -= settings.kkt_reg;

  work.d_inv[93] = 1/work.d[93];

  work.L[54] = (work.KKT[188])*work.d_inv[93];
  work.L[61] = (work.KKT[189])*work.d_inv[93];
  work.L[682] = (work.KKT[190])*work.d_inv[93];
  work.v[94] = 0;
  work.d[94] = work.v[94];

  if (work.d[94] > 0)
    work.d[94] = -settings.kkt_reg;
  else
    work.d[94] -= settings.kkt_reg;

  work.d_inv[94] = 1/work.d[94];

  work.L[55] = (work.KKT[191])*work.d_inv[94];
  work.L[62] = (work.KKT[192])*work.d_inv[94];
  work.L[688] = (work.KKT[193])*work.d_inv[94];
  work.v[44] = work.L[49]*work.d[44];
  work.v[66] = work.L[50]*work.d[66];
  work.v[90] = work.L[51]*work.d[90];
  work.v[91] = work.L[52]*work.d[91];
  work.v[92] = work.L[53]*work.d[92];
  work.v[93] = work.L[54]*work.d[93];
  work.v[94] = work.L[55]*work.d[94];
  work.v[95] = work.KKT[194]-work.L[49]*work.v[44]-work.L[50]*work.v[66]-work.L[51]*work.v[90]-work.L[52]*work.v[91]-work.L[53]*work.v[92]-work.L[54]*work.v[93]-work.L[55]*work.v[94];
  work.d[95] = work.v[95];

  if (work.d[95] < 0)
    work.d[95] = settings.kkt_reg;
  else
    work.d[95] += settings.kkt_reg;
  work.d_inv[95] = 1/work.d[95];

  work.L[63] = (work.KKT[195]-work.L[58]*work.v[90]-work.L[59]*work.v[91]-work.L[60]*work.v[92]-work.L[61]*work.v[93]-work.L[62]*work.v[94])*work.d_inv[95];
  work.L[671] = (-work.L[670]*work.v[90])*work.d_inv[95];
  work.L[674] = (-work.L[673]*work.v[91])*work.d_inv[95];
  work.L[678] = (-work.L[677]*work.v[92])*work.d_inv[95];
  work.L[683] = (-work.L[682]*work.v[93])*work.d_inv[95];
  work.L[689] = (-work.L[688]*work.v[94])*work.d_inv[95];
  work.v[45] = work.L[56]*work.d[45];
  work.v[67] = work.L[57]*work.d[67];
  work.v[90] = work.L[58]*work.d[90];
  work.v[91] = work.L[59]*work.d[91];
  work.v[92] = work.L[60]*work.d[92];
  work.v[93] = work.L[61]*work.d[93];
  work.v[94] = work.L[62]*work.d[94];
  work.v[95] = work.L[63]*work.d[95];
  work.v[96] = work.KKT[196]-work.L[56]*work.v[45]-work.L[57]*work.v[67]-work.L[58]*work.v[90]-work.L[59]*work.v[91]-work.L[60]*work.v[92]-work.L[61]*work.v[93]-work.L[62]*work.v[94]-work.L[63]*work.v[95];
  work.d[96] = work.v[96];

  if (work.d[96] < 0)
    work.d[96] = settings.kkt_reg;
  else
    work.d[96] += settings.kkt_reg;
  work.d_inv[96] = 1/work.d[96];

  work.L[672] = (-work.L[670]*work.v[90]-work.L[671]*work.v[95])*work.d_inv[96];
  work.L[675] = (-work.L[673]*work.v[91]-work.L[674]*work.v[95])*work.d_inv[96];
  work.L[679] = (-work.L[677]*work.v[92]-work.L[678]*work.v[95])*work.d_inv[96];
  work.L[684] = (-work.L[682]*work.v[93]-work.L[683]*work.v[95])*work.d_inv[96];
  work.L[690] = (-work.L[688]*work.v[94]-work.L[689]*work.v[95])*work.d_inv[96];
  work.v[97] = work.KKT[197];
  work.d[97] = work.v[97];

  if (work.d[97] < 0)
    work.d[97] = settings.kkt_reg;
  else
    work.d[97] += settings.kkt_reg;
  work.d_inv[97] = 1/work.d[97];

  work.L[64] = (work.KKT[198])*work.d_inv[97];
  work.L[65] = (work.KKT[199])*work.d_inv[97];
  work.L[67] = (work.KKT[200])*work.d_inv[97];
  work.L[75] = (work.KKT[201])*work.d_inv[97];
  work.L[79] = (work.KKT[202])*work.d_inv[97];
  work.v[97] = work.L[64]*work.d[97];
  work.v[98] = work.KKT[203]-work.L[64]*work.v[97];
  work.d[98] = work.v[98];

  if (work.d[98] < 0)
    work.d[98] = settings.kkt_reg;
  else
    work.d[98] += settings.kkt_reg;
  work.d_inv[98] = 1/work.d[98];

  work.L[66] = (work.KKT[204]-work.L[65]*work.v[97])*work.d_inv[98];
  work.L[68] = (work.KKT[205]-work.L[67]*work.v[97])*work.d_inv[98];
  work.L[76] = (work.KKT[206]-work.L[75]*work.v[97])*work.d_inv[98];
  work.L[80] = (-work.L[79]*work.v[97])*work.d_inv[98];
  work.L[86] = (work.KKT[207])*work.d_inv[98];
  work.v[97] = work.L[65]*work.d[97];
  work.v[98] = work.L[66]*work.d[98];
  work.v[99] = work.KKT[208]-work.L[65]*work.v[97]-work.L[66]*work.v[98];
  work.d[99] = work.v[99];

  if (work.d[99] < 0)
    work.d[99] = settings.kkt_reg;
  else
    work.d[99] += settings.kkt_reg;
  work.d_inv[99] = 1/work.d[99];

  work.L[69] = (work.KKT[209]-work.L[67]*work.v[97]-work.L[68]*work.v[98])*work.d_inv[99];
  work.L[77] = (work.KKT[210]-work.L[75]*work.v[97]-work.L[76]*work.v[98])*work.d_inv[99];
  work.L[81] = (-work.L[79]*work.v[97]-work.L[80]*work.v[98])*work.d_inv[99];
  work.L[87] = (-work.L[86]*work.v[98])*work.d_inv[99];
  work.L[93] = (work.KKT[211])*work.d_inv[99];
  work.v[97] = work.L[67]*work.d[97];
  work.v[98] = work.L[68]*work.d[98];
  work.v[99] = work.L[69]*work.d[99];
  work.v[100] = work.KKT[212]-work.L[67]*work.v[97]-work.L[68]*work.v[98]-work.L[69]*work.v[99];
  work.d[100] = work.v[100];

  if (work.d[100] < 0)
    work.d[100] = settings.kkt_reg;
  else
    work.d[100] += settings.kkt_reg;
  work.d_inv[100] = 1/work.d[100];

  work.L[78] = (work.KKT[213]-work.L[75]*work.v[97]-work.L[76]*work.v[98]-work.L[77]*work.v[99])*work.d_inv[100];
  work.L[82] = (-work.L[79]*work.v[97]-work.L[80]*work.v[98]-work.L[81]*work.v[99])*work.d_inv[100];
  work.L[88] = (-work.L[86]*work.v[98]-work.L[87]*work.v[99])*work.d_inv[100];
  work.L[94] = (-work.L[93]*work.v[99])*work.d_inv[100];
  work.L[100] = (work.KKT[214])*work.d_inv[100];
  work.v[62] = work.L[70]*work.d[62];
  work.v[84] = work.L[71]*work.d[84];
  work.v[101] = work.KKT[215]-work.L[70]*work.v[62]-work.L[71]*work.v[84];
  work.d[101] = work.v[101];

  if (work.d[101] < 0)
    work.d[101] = settings.kkt_reg;
  else
    work.d[101] += settings.kkt_reg;
  work.d_inv[101] = 1/work.d[101];

  work.L[74] = (work.KKT[216])*work.d_inv[101];
  work.L[83] = (work.KKT[217])*work.d_inv[101];
  work.L[89] = (work.KKT[218])*work.d_inv[101];
  work.L[95] = (work.KKT[219])*work.d_inv[101];
  work.L[101] = (work.KKT[220])*work.d_inv[101];
  work.L[107] = (work.KKT[221])*work.d_inv[101];
  work.v[63] = work.L[72]*work.d[63];
  work.v[85] = work.L[73]*work.d[85];
  work.v[101] = work.L[74]*work.d[101];
  work.v[102] = work.KKT[222]-work.L[72]*work.v[63]-work.L[73]*work.v[85]-work.L[74]*work.v[101];
  work.d[102] = work.v[102];

  if (work.d[102] < 0)
    work.d[102] = settings.kkt_reg;
  else
    work.d[102] += settings.kkt_reg;
  work.d_inv[102] = 1/work.d[102];

  work.L[84] = (work.KKT[223]-work.L[83]*work.v[101])*work.d_inv[102];
  work.L[90] = (work.KKT[224]-work.L[89]*work.v[101])*work.d_inv[102];
  work.L[96] = (work.KKT[225]-work.L[95]*work.v[101])*work.d_inv[102];
  work.L[102] = (work.KKT[226]-work.L[101]*work.v[101])*work.d_inv[102];
  work.L[108] = (work.KKT[227]-work.L[107]*work.v[101])*work.d_inv[102];
  work.v[97] = work.L[75]*work.d[97];
  work.v[98] = work.L[76]*work.d[98];
  work.v[99] = work.L[77]*work.d[99];
  work.v[100] = work.L[78]*work.d[100];
  work.v[103] = work.KKT[228]-work.L[75]*work.v[97]-work.L[76]*work.v[98]-work.L[77]*work.v[99]-work.L[78]*work.v[100];
  work.d[103] = work.v[103];

  if (work.d[103] < 0)
    work.d[103] = settings.kkt_reg;
  else
    work.d[103] += settings.kkt_reg;
  work.d_inv[103] = 1/work.d[103];

  work.L[85] = (-work.L[79]*work.v[97]-work.L[80]*work.v[98]-work.L[81]*work.v[99]-work.L[82]*work.v[100])*work.d_inv[103];
  work.L[91] = (-work.L[86]*work.v[98]-work.L[87]*work.v[99]-work.L[88]*work.v[100])*work.d_inv[103];
  work.L[97] = (-work.L[93]*work.v[99]-work.L[94]*work.v[100])*work.d_inv[103];
  work.L[103] = (-work.L[100]*work.v[100])*work.d_inv[103];
  work.L[109] = (work.KKT[229])*work.d_inv[103];
  work.v[97] = work.L[79]*work.d[97];
  work.v[98] = work.L[80]*work.d[98];
  work.v[99] = work.L[81]*work.d[99];
  work.v[100] = work.L[82]*work.d[100];
  work.v[101] = work.L[83]*work.d[101];
  work.v[102] = work.L[84]*work.d[102];
  work.v[103] = work.L[85]*work.d[103];
  work.v[104] = 0-work.L[79]*work.v[97]-work.L[80]*work.v[98]-work.L[81]*work.v[99]-work.L[82]*work.v[100]-work.L[83]*work.v[101]-work.L[84]*work.v[102]-work.L[85]*work.v[103];
  work.d[104] = work.v[104];

  if (work.d[104] > 0)
    work.d[104] = -settings.kkt_reg;
  else
    work.d[104] -= settings.kkt_reg;

  work.d_inv[104] = 1/work.d[104];

  work.L[92] = (-work.L[86]*work.v[98]-work.L[87]*work.v[99]-work.L[88]*work.v[100]-work.L[89]*work.v[101]-work.L[90]*work.v[102]-work.L[91]*work.v[103])*work.d_inv[104];
  work.L[98] = (-work.L[93]*work.v[99]-work.L[94]*work.v[100]-work.L[95]*work.v[101]-work.L[96]*work.v[102]-work.L[97]*work.v[103])*work.d_inv[104];
  work.L[104] = (-work.L[100]*work.v[100]-work.L[101]*work.v[101]-work.L[102]*work.v[102]-work.L[103]*work.v[103])*work.d_inv[104];
  work.L[110] = (-work.L[107]*work.v[101]-work.L[108]*work.v[102]-work.L[109]*work.v[103])*work.d_inv[104];
  work.L[114] = (work.KKT[230])*work.d_inv[104];
  work.L[119] = (work.KKT[231])*work.d_inv[104];
  work.L[125] = (work.KKT[232])*work.d_inv[104];
  work.L[132] = (work.KKT[233])*work.d_inv[104];
  work.L[145] = (work.KKT[234])*work.d_inv[104];
  work.v[98] = work.L[86]*work.d[98];
  work.v[99] = work.L[87]*work.d[99];
  work.v[100] = work.L[88]*work.d[100];
  work.v[101] = work.L[89]*work.d[101];
  work.v[102] = work.L[90]*work.d[102];
  work.v[103] = work.L[91]*work.d[103];
  work.v[104] = work.L[92]*work.d[104];
  work.v[105] = 0-work.L[86]*work.v[98]-work.L[87]*work.v[99]-work.L[88]*work.v[100]-work.L[89]*work.v[101]-work.L[90]*work.v[102]-work.L[91]*work.v[103]-work.L[92]*work.v[104];
  work.d[105] = work.v[105];

  if (work.d[105] > 0)
    work.d[105] = -settings.kkt_reg;
  else
    work.d[105] -= settings.kkt_reg;

  work.d_inv[105] = 1/work.d[105];

  work.L[99] = (-work.L[93]*work.v[99]-work.L[94]*work.v[100]-work.L[95]*work.v[101]-work.L[96]*work.v[102]-work.L[97]*work.v[103]-work.L[98]*work.v[104])*work.d_inv[105];
  work.L[105] = (-work.L[100]*work.v[100]-work.L[101]*work.v[101]-work.L[102]*work.v[102]-work.L[103]*work.v[103]-work.L[104]*work.v[104])*work.d_inv[105];
  work.L[111] = (-work.L[107]*work.v[101]-work.L[108]*work.v[102]-work.L[109]*work.v[103]-work.L[110]*work.v[104])*work.d_inv[105];
  work.L[115] = (work.KKT[235]-work.L[114]*work.v[104])*work.d_inv[105];
  work.L[120] = (work.KKT[236]-work.L[119]*work.v[104])*work.d_inv[105];
  work.L[126] = (work.KKT[237]-work.L[125]*work.v[104])*work.d_inv[105];
  work.L[133] = (work.KKT[238]-work.L[132]*work.v[104])*work.d_inv[105];
  work.L[146] = (work.KKT[239]-work.L[145]*work.v[104])*work.d_inv[105];
  work.v[99] = work.L[93]*work.d[99];
  work.v[100] = work.L[94]*work.d[100];
  work.v[101] = work.L[95]*work.d[101];
  work.v[102] = work.L[96]*work.d[102];
  work.v[103] = work.L[97]*work.d[103];
  work.v[104] = work.L[98]*work.d[104];
  work.v[105] = work.L[99]*work.d[105];
  work.v[106] = 0-work.L[93]*work.v[99]-work.L[94]*work.v[100]-work.L[95]*work.v[101]-work.L[96]*work.v[102]-work.L[97]*work.v[103]-work.L[98]*work.v[104]-work.L[99]*work.v[105];
  work.d[106] = work.v[106];

  if (work.d[106] > 0)
    work.d[106] = -settings.kkt_reg;
  else
    work.d[106] -= settings.kkt_reg;

  work.d_inv[106] = 1/work.d[106];

  work.L[106] = (-work.L[100]*work.v[100]-work.L[101]*work.v[101]-work.L[102]*work.v[102]-work.L[103]*work.v[103]-work.L[104]*work.v[104]-work.L[105]*work.v[105])*work.d_inv[106];
  work.L[112] = (-work.L[107]*work.v[101]-work.L[108]*work.v[102]-work.L[109]*work.v[103]-work.L[110]*work.v[104]-work.L[111]*work.v[105])*work.d_inv[106];
  work.L[116] = (work.KKT[240]-work.L[114]*work.v[104]-work.L[115]*work.v[105])*work.d_inv[106];
  work.L[121] = (work.KKT[241]-work.L[119]*work.v[104]-work.L[120]*work.v[105])*work.d_inv[106];
  work.L[127] = (work.KKT[242]-work.L[125]*work.v[104]-work.L[126]*work.v[105])*work.d_inv[106];
  work.L[134] = (work.KKT[243]-work.L[132]*work.v[104]-work.L[133]*work.v[105])*work.d_inv[106];
  work.L[147] = (work.KKT[244]-work.L[145]*work.v[104]-work.L[146]*work.v[105])*work.d_inv[106];
  work.v[100] = work.L[100]*work.d[100];
  work.v[101] = work.L[101]*work.d[101];
  work.v[102] = work.L[102]*work.d[102];
  work.v[103] = work.L[103]*work.d[103];
  work.v[104] = work.L[104]*work.d[104];
  work.v[105] = work.L[105]*work.d[105];
  work.v[106] = work.L[106]*work.d[106];
  work.v[107] = 0-work.L[100]*work.v[100]-work.L[101]*work.v[101]-work.L[102]*work.v[102]-work.L[103]*work.v[103]-work.L[104]*work.v[104]-work.L[105]*work.v[105]-work.L[106]*work.v[106];
  work.d[107] = work.v[107];

  if (work.d[107] > 0)
    work.d[107] = -settings.kkt_reg;
  else
    work.d[107] -= settings.kkt_reg;

  work.d_inv[107] = 1/work.d[107];

  work.L[113] = (-work.L[107]*work.v[101]-work.L[108]*work.v[102]-work.L[109]*work.v[103]-work.L[110]*work.v[104]-work.L[111]*work.v[105]-work.L[112]*work.v[106])*work.d_inv[107];
  work.L[117] = (work.KKT[245]-work.L[114]*work.v[104]-work.L[115]*work.v[105]-work.L[116]*work.v[106])*work.d_inv[107];
  work.L[122] = (work.KKT[246]-work.L[119]*work.v[104]-work.L[120]*work.v[105]-work.L[121]*work.v[106])*work.d_inv[107];
  work.L[128] = (work.KKT[247]-work.L[125]*work.v[104]-work.L[126]*work.v[105]-work.L[127]*work.v[106])*work.d_inv[107];
  work.L[135] = (work.KKT[248]-work.L[132]*work.v[104]-work.L[133]*work.v[105]-work.L[134]*work.v[106])*work.d_inv[107];
  work.L[148] = (work.KKT[249]-work.L[145]*work.v[104]-work.L[146]*work.v[105]-work.L[147]*work.v[106])*work.d_inv[107];
  work.v[101] = work.L[107]*work.d[101];
  work.v[102] = work.L[108]*work.d[102];
  work.v[103] = work.L[109]*work.d[103];
  work.v[104] = work.L[110]*work.d[104];
  work.v[105] = work.L[111]*work.d[105];
  work.v[106] = work.L[112]*work.d[106];
  work.v[107] = work.L[113]*work.d[107];
  work.v[108] = 0-work.L[107]*work.v[101]-work.L[108]*work.v[102]-work.L[109]*work.v[103]-work.L[110]*work.v[104]-work.L[111]*work.v[105]-work.L[112]*work.v[106]-work.L[113]*work.v[107];
  work.d[108] = work.v[108];

  if (work.d[108] > 0)
    work.d[108] = -settings.kkt_reg;
  else
    work.d[108] -= settings.kkt_reg;

  work.d_inv[108] = 1/work.d[108];

  work.L[118] = (work.KKT[250]-work.L[114]*work.v[104]-work.L[115]*work.v[105]-work.L[116]*work.v[106]-work.L[117]*work.v[107])*work.d_inv[108];
  work.L[123] = (work.KKT[251]-work.L[119]*work.v[104]-work.L[120]*work.v[105]-work.L[121]*work.v[106]-work.L[122]*work.v[107])*work.d_inv[108];
  work.L[129] = (work.KKT[252]-work.L[125]*work.v[104]-work.L[126]*work.v[105]-work.L[127]*work.v[106]-work.L[128]*work.v[107])*work.d_inv[108];
  work.L[136] = (work.KKT[253]-work.L[132]*work.v[104]-work.L[133]*work.v[105]-work.L[134]*work.v[106]-work.L[135]*work.v[107])*work.d_inv[108];
  work.L[149] = (work.KKT[254]-work.L[145]*work.v[104]-work.L[146]*work.v[105]-work.L[147]*work.v[106]-work.L[148]*work.v[107])*work.d_inv[108];
  work.v[104] = work.L[114]*work.d[104];
  work.v[105] = work.L[115]*work.d[105];
  work.v[106] = work.L[116]*work.d[106];
  work.v[107] = work.L[117]*work.d[107];
  work.v[108] = work.L[118]*work.d[108];
  work.v[109] = work.KKT[255]-work.L[114]*work.v[104]-work.L[115]*work.v[105]-work.L[116]*work.v[106]-work.L[117]*work.v[107]-work.L[118]*work.v[108];
  work.d[109] = work.v[109];

  if (work.d[109] < 0)
    work.d[109] = settings.kkt_reg;
  else
    work.d[109] += settings.kkt_reg;
  work.d_inv[109] = 1/work.d[109];

  work.L[124] = (work.KKT[256]-work.L[119]*work.v[104]-work.L[120]*work.v[105]-work.L[121]*work.v[106]-work.L[122]*work.v[107]-work.L[123]*work.v[108])*work.d_inv[109];
  work.L[130] = (work.KKT[257]-work.L[125]*work.v[104]-work.L[126]*work.v[105]-work.L[127]*work.v[106]-work.L[128]*work.v[107]-work.L[129]*work.v[108])*work.d_inv[109];
  work.L[137] = (work.KKT[258]-work.L[132]*work.v[104]-work.L[133]*work.v[105]-work.L[134]*work.v[106]-work.L[135]*work.v[107]-work.L[136]*work.v[108])*work.d_inv[109];
  work.L[150] = (work.KKT[259]-work.L[145]*work.v[104]-work.L[146]*work.v[105]-work.L[147]*work.v[106]-work.L[148]*work.v[107]-work.L[149]*work.v[108])*work.d_inv[109];
  work.L[154] = (work.KKT[260])*work.d_inv[109];
  work.v[104] = work.L[119]*work.d[104];
  work.v[105] = work.L[120]*work.d[105];
  work.v[106] = work.L[121]*work.d[106];
  work.v[107] = work.L[122]*work.d[107];
  work.v[108] = work.L[123]*work.d[108];
  work.v[109] = work.L[124]*work.d[109];
  work.v[110] = work.KKT[261]-work.L[119]*work.v[104]-work.L[120]*work.v[105]-work.L[121]*work.v[106]-work.L[122]*work.v[107]-work.L[123]*work.v[108]-work.L[124]*work.v[109];
  work.d[110] = work.v[110];

  if (work.d[110] < 0)
    work.d[110] = settings.kkt_reg;
  else
    work.d[110] += settings.kkt_reg;
  work.d_inv[110] = 1/work.d[110];

  work.L[131] = (work.KKT[262]-work.L[125]*work.v[104]-work.L[126]*work.v[105]-work.L[127]*work.v[106]-work.L[128]*work.v[107]-work.L[129]*work.v[108]-work.L[130]*work.v[109])*work.d_inv[110];
  work.L[138] = (work.KKT[263]-work.L[132]*work.v[104]-work.L[133]*work.v[105]-work.L[134]*work.v[106]-work.L[135]*work.v[107]-work.L[136]*work.v[108]-work.L[137]*work.v[109])*work.d_inv[110];
  work.L[151] = (work.KKT[264]-work.L[145]*work.v[104]-work.L[146]*work.v[105]-work.L[147]*work.v[106]-work.L[148]*work.v[107]-work.L[149]*work.v[108]-work.L[150]*work.v[109])*work.d_inv[110];
  work.L[155] = (-work.L[154]*work.v[109])*work.d_inv[110];
  work.L[161] = (work.KKT[265])*work.d_inv[110];
  work.v[104] = work.L[125]*work.d[104];
  work.v[105] = work.L[126]*work.d[105];
  work.v[106] = work.L[127]*work.d[106];
  work.v[107] = work.L[128]*work.d[107];
  work.v[108] = work.L[129]*work.d[108];
  work.v[109] = work.L[130]*work.d[109];
  work.v[110] = work.L[131]*work.d[110];
  work.v[111] = work.KKT[266]-work.L[125]*work.v[104]-work.L[126]*work.v[105]-work.L[127]*work.v[106]-work.L[128]*work.v[107]-work.L[129]*work.v[108]-work.L[130]*work.v[109]-work.L[131]*work.v[110];
  work.d[111] = work.v[111];

  if (work.d[111] < 0)
    work.d[111] = settings.kkt_reg;
  else
    work.d[111] += settings.kkt_reg;
  work.d_inv[111] = 1/work.d[111];

  work.L[139] = (work.KKT[267]-work.L[132]*work.v[104]-work.L[133]*work.v[105]-work.L[134]*work.v[106]-work.L[135]*work.v[107]-work.L[136]*work.v[108]-work.L[137]*work.v[109]-work.L[138]*work.v[110])*work.d_inv[111];
  work.L[152] = (work.KKT[268]-work.L[145]*work.v[104]-work.L[146]*work.v[105]-work.L[147]*work.v[106]-work.L[148]*work.v[107]-work.L[149]*work.v[108]-work.L[150]*work.v[109]-work.L[151]*work.v[110])*work.d_inv[111];
  work.L[156] = (-work.L[154]*work.v[109]-work.L[155]*work.v[110])*work.d_inv[111];
  work.L[162] = (-work.L[161]*work.v[110])*work.d_inv[111];
  work.L[168] = (work.KKT[269])*work.d_inv[111];
  work.v[104] = work.L[132]*work.d[104];
  work.v[105] = work.L[133]*work.d[105];
  work.v[106] = work.L[134]*work.d[106];
  work.v[107] = work.L[135]*work.d[107];
  work.v[108] = work.L[136]*work.d[108];
  work.v[109] = work.L[137]*work.d[109];
  work.v[110] = work.L[138]*work.d[110];
  work.v[111] = work.L[139]*work.d[111];
  work.v[112] = work.KKT[270]-work.L[132]*work.v[104]-work.L[133]*work.v[105]-work.L[134]*work.v[106]-work.L[135]*work.v[107]-work.L[136]*work.v[108]-work.L[137]*work.v[109]-work.L[138]*work.v[110]-work.L[139]*work.v[111];
  work.d[112] = work.v[112];

  if (work.d[112] < 0)
    work.d[112] = settings.kkt_reg;
  else
    work.d[112] += settings.kkt_reg;
  work.d_inv[112] = 1/work.d[112];

  work.L[153] = (work.KKT[271]-work.L[145]*work.v[104]-work.L[146]*work.v[105]-work.L[147]*work.v[106]-work.L[148]*work.v[107]-work.L[149]*work.v[108]-work.L[150]*work.v[109]-work.L[151]*work.v[110]-work.L[152]*work.v[111])*work.d_inv[112];
  work.L[157] = (-work.L[154]*work.v[109]-work.L[155]*work.v[110]-work.L[156]*work.v[111])*work.d_inv[112];
  work.L[163] = (-work.L[161]*work.v[110]-work.L[162]*work.v[111])*work.d_inv[112];
  work.L[169] = (-work.L[168]*work.v[111])*work.d_inv[112];
  work.L[175] = (work.KKT[272])*work.d_inv[112];
  work.v[60] = work.L[140]*work.d[60];
  work.v[82] = work.L[141]*work.d[82];
  work.v[113] = work.KKT[273]-work.L[140]*work.v[60]-work.L[141]*work.v[82];
  work.d[113] = work.v[113];

  if (work.d[113] < 0)
    work.d[113] = settings.kkt_reg;
  else
    work.d[113] += settings.kkt_reg;
  work.d_inv[113] = 1/work.d[113];

  work.L[144] = (work.KKT[274])*work.d_inv[113];
  work.L[158] = (work.KKT[275])*work.d_inv[113];
  work.L[164] = (work.KKT[276])*work.d_inv[113];
  work.L[170] = (work.KKT[277])*work.d_inv[113];
  work.L[176] = (work.KKT[278])*work.d_inv[113];
  work.L[182] = (work.KKT[279])*work.d_inv[113];
  work.v[61] = work.L[142]*work.d[61];
  work.v[83] = work.L[143]*work.d[83];
  work.v[113] = work.L[144]*work.d[113];
  work.v[114] = work.KKT[280]-work.L[142]*work.v[61]-work.L[143]*work.v[83]-work.L[144]*work.v[113];
  work.d[114] = work.v[114];

  if (work.d[114] < 0)
    work.d[114] = settings.kkt_reg;
  else
    work.d[114] += settings.kkt_reg;
  work.d_inv[114] = 1/work.d[114];

  work.L[159] = (work.KKT[281]-work.L[158]*work.v[113])*work.d_inv[114];
  work.L[165] = (work.KKT[282]-work.L[164]*work.v[113])*work.d_inv[114];
  work.L[171] = (work.KKT[283]-work.L[170]*work.v[113])*work.d_inv[114];
  work.L[177] = (work.KKT[284]-work.L[176]*work.v[113])*work.d_inv[114];
  work.L[183] = (work.KKT[285]-work.L[182]*work.v[113])*work.d_inv[114];
  work.v[104] = work.L[145]*work.d[104];
  work.v[105] = work.L[146]*work.d[105];
  work.v[106] = work.L[147]*work.d[106];
  work.v[107] = work.L[148]*work.d[107];
  work.v[108] = work.L[149]*work.d[108];
  work.v[109] = work.L[150]*work.d[109];
  work.v[110] = work.L[151]*work.d[110];
  work.v[111] = work.L[152]*work.d[111];
  work.v[112] = work.L[153]*work.d[112];
  work.v[115] = work.KKT[286]-work.L[145]*work.v[104]-work.L[146]*work.v[105]-work.L[147]*work.v[106]-work.L[148]*work.v[107]-work.L[149]*work.v[108]-work.L[150]*work.v[109]-work.L[151]*work.v[110]-work.L[152]*work.v[111]-work.L[153]*work.v[112];
  work.d[115] = work.v[115];

  if (work.d[115] < 0)
    work.d[115] = settings.kkt_reg;
  else
    work.d[115] += settings.kkt_reg;
  work.d_inv[115] = 1/work.d[115];

  work.L[160] = (-work.L[154]*work.v[109]-work.L[155]*work.v[110]-work.L[156]*work.v[111]-work.L[157]*work.v[112])*work.d_inv[115];
  work.L[166] = (-work.L[161]*work.v[110]-work.L[162]*work.v[111]-work.L[163]*work.v[112])*work.d_inv[115];
  work.L[172] = (-work.L[168]*work.v[111]-work.L[169]*work.v[112])*work.d_inv[115];
  work.L[178] = (-work.L[175]*work.v[112])*work.d_inv[115];
  work.L[184] = (work.KKT[287])*work.d_inv[115];
  work.v[109] = work.L[154]*work.d[109];
  work.v[110] = work.L[155]*work.d[110];
  work.v[111] = work.L[156]*work.d[111];
  work.v[112] = work.L[157]*work.d[112];
  work.v[113] = work.L[158]*work.d[113];
  work.v[114] = work.L[159]*work.d[114];
  work.v[115] = work.L[160]*work.d[115];
  work.v[116] = 0-work.L[154]*work.v[109]-work.L[155]*work.v[110]-work.L[156]*work.v[111]-work.L[157]*work.v[112]-work.L[158]*work.v[113]-work.L[159]*work.v[114]-work.L[160]*work.v[115];
  work.d[116] = work.v[116];

  if (work.d[116] > 0)
    work.d[116] = -settings.kkt_reg;
  else
    work.d[116] -= settings.kkt_reg;

  work.d_inv[116] = 1/work.d[116];

  work.L[167] = (-work.L[161]*work.v[110]-work.L[162]*work.v[111]-work.L[163]*work.v[112]-work.L[164]*work.v[113]-work.L[165]*work.v[114]-work.L[166]*work.v[115])*work.d_inv[116];
  work.L[173] = (-work.L[168]*work.v[111]-work.L[169]*work.v[112]-work.L[170]*work.v[113]-work.L[171]*work.v[114]-work.L[172]*work.v[115])*work.d_inv[116];
  work.L[179] = (-work.L[175]*work.v[112]-work.L[176]*work.v[113]-work.L[177]*work.v[114]-work.L[178]*work.v[115])*work.d_inv[116];
  work.L[185] = (-work.L[182]*work.v[113]-work.L[183]*work.v[114]-work.L[184]*work.v[115])*work.d_inv[116];
  work.L[189] = (work.KKT[288])*work.d_inv[116];
  work.L[194] = (work.KKT[289])*work.d_inv[116];
  work.L[200] = (work.KKT[290])*work.d_inv[116];
  work.L[207] = (work.KKT[291])*work.d_inv[116];
  work.L[220] = (work.KKT[292])*work.d_inv[116];
  work.v[110] = work.L[161]*work.d[110];
  work.v[111] = work.L[162]*work.d[111];
  work.v[112] = work.L[163]*work.d[112];
  work.v[113] = work.L[164]*work.d[113];
  work.v[114] = work.L[165]*work.d[114];
  work.v[115] = work.L[166]*work.d[115];
  work.v[116] = work.L[167]*work.d[116];
  work.v[117] = 0-work.L[161]*work.v[110]-work.L[162]*work.v[111]-work.L[163]*work.v[112]-work.L[164]*work.v[113]-work.L[165]*work.v[114]-work.L[166]*work.v[115]-work.L[167]*work.v[116];
  work.d[117] = work.v[117];

  if (work.d[117] > 0)
    work.d[117] = -settings.kkt_reg;
  else
    work.d[117] -= settings.kkt_reg;

  work.d_inv[117] = 1/work.d[117];

  work.L[174] = (-work.L[168]*work.v[111]-work.L[169]*work.v[112]-work.L[170]*work.v[113]-work.L[171]*work.v[114]-work.L[172]*work.v[115]-work.L[173]*work.v[116])*work.d_inv[117];
  work.L[180] = (-work.L[175]*work.v[112]-work.L[176]*work.v[113]-work.L[177]*work.v[114]-work.L[178]*work.v[115]-work.L[179]*work.v[116])*work.d_inv[117];
  work.L[186] = (-work.L[182]*work.v[113]-work.L[183]*work.v[114]-work.L[184]*work.v[115]-work.L[185]*work.v[116])*work.d_inv[117];
  work.L[190] = (work.KKT[293]-work.L[189]*work.v[116])*work.d_inv[117];
  work.L[195] = (work.KKT[294]-work.L[194]*work.v[116])*work.d_inv[117];
  work.L[201] = (work.KKT[295]-work.L[200]*work.v[116])*work.d_inv[117];
  work.L[208] = (work.KKT[296]-work.L[207]*work.v[116])*work.d_inv[117];
  work.L[221] = (work.KKT[297]-work.L[220]*work.v[116])*work.d_inv[117];
  work.v[111] = work.L[168]*work.d[111];
  work.v[112] = work.L[169]*work.d[112];
  work.v[113] = work.L[170]*work.d[113];
  work.v[114] = work.L[171]*work.d[114];
  work.v[115] = work.L[172]*work.d[115];
  work.v[116] = work.L[173]*work.d[116];
  work.v[117] = work.L[174]*work.d[117];
  work.v[118] = 0-work.L[168]*work.v[111]-work.L[169]*work.v[112]-work.L[170]*work.v[113]-work.L[171]*work.v[114]-work.L[172]*work.v[115]-work.L[173]*work.v[116]-work.L[174]*work.v[117];
  work.d[118] = work.v[118];

  if (work.d[118] > 0)
    work.d[118] = -settings.kkt_reg;
  else
    work.d[118] -= settings.kkt_reg;

  work.d_inv[118] = 1/work.d[118];

  work.L[181] = (-work.L[175]*work.v[112]-work.L[176]*work.v[113]-work.L[177]*work.v[114]-work.L[178]*work.v[115]-work.L[179]*work.v[116]-work.L[180]*work.v[117])*work.d_inv[118];
  work.L[187] = (-work.L[182]*work.v[113]-work.L[183]*work.v[114]-work.L[184]*work.v[115]-work.L[185]*work.v[116]-work.L[186]*work.v[117])*work.d_inv[118];
  work.L[191] = (work.KKT[298]-work.L[189]*work.v[116]-work.L[190]*work.v[117])*work.d_inv[118];
  work.L[196] = (work.KKT[299]-work.L[194]*work.v[116]-work.L[195]*work.v[117])*work.d_inv[118];
  work.L[202] = (work.KKT[300]-work.L[200]*work.v[116]-work.L[201]*work.v[117])*work.d_inv[118];
  work.L[209] = (work.KKT[301]-work.L[207]*work.v[116]-work.L[208]*work.v[117])*work.d_inv[118];
  work.L[222] = (work.KKT[302]-work.L[220]*work.v[116]-work.L[221]*work.v[117])*work.d_inv[118];
  work.v[112] = work.L[175]*work.d[112];
  work.v[113] = work.L[176]*work.d[113];
  work.v[114] = work.L[177]*work.d[114];
  work.v[115] = work.L[178]*work.d[115];
  work.v[116] = work.L[179]*work.d[116];
  work.v[117] = work.L[180]*work.d[117];
  work.v[118] = work.L[181]*work.d[118];
  work.v[119] = 0-work.L[175]*work.v[112]-work.L[176]*work.v[113]-work.L[177]*work.v[114]-work.L[178]*work.v[115]-work.L[179]*work.v[116]-work.L[180]*work.v[117]-work.L[181]*work.v[118];
  work.d[119] = work.v[119];

  if (work.d[119] > 0)
    work.d[119] = -settings.kkt_reg;
  else
    work.d[119] -= settings.kkt_reg;

  work.d_inv[119] = 1/work.d[119];

  work.L[188] = (-work.L[182]*work.v[113]-work.L[183]*work.v[114]-work.L[184]*work.v[115]-work.L[185]*work.v[116]-work.L[186]*work.v[117]-work.L[187]*work.v[118])*work.d_inv[119];
  work.L[192] = (work.KKT[303]-work.L[189]*work.v[116]-work.L[190]*work.v[117]-work.L[191]*work.v[118])*work.d_inv[119];
  work.L[197] = (work.KKT[304]-work.L[194]*work.v[116]-work.L[195]*work.v[117]-work.L[196]*work.v[118])*work.d_inv[119];
  work.L[203] = (work.KKT[305]-work.L[200]*work.v[116]-work.L[201]*work.v[117]-work.L[202]*work.v[118])*work.d_inv[119];
  work.L[210] = (work.KKT[306]-work.L[207]*work.v[116]-work.L[208]*work.v[117]-work.L[209]*work.v[118])*work.d_inv[119];
  work.L[223] = (work.KKT[307]-work.L[220]*work.v[116]-work.L[221]*work.v[117]-work.L[222]*work.v[118])*work.d_inv[119];
  work.v[113] = work.L[182]*work.d[113];
  work.v[114] = work.L[183]*work.d[114];
  work.v[115] = work.L[184]*work.d[115];
  work.v[116] = work.L[185]*work.d[116];
  work.v[117] = work.L[186]*work.d[117];
  work.v[118] = work.L[187]*work.d[118];
  work.v[119] = work.L[188]*work.d[119];
  work.v[120] = 0-work.L[182]*work.v[113]-work.L[183]*work.v[114]-work.L[184]*work.v[115]-work.L[185]*work.v[116]-work.L[186]*work.v[117]-work.L[187]*work.v[118]-work.L[188]*work.v[119];
  work.d[120] = work.v[120];

  if (work.d[120] > 0)
    work.d[120] = -settings.kkt_reg;
  else
    work.d[120] -= settings.kkt_reg;

  work.d_inv[120] = 1/work.d[120];

  work.L[193] = (work.KKT[308]-work.L[189]*work.v[116]-work.L[190]*work.v[117]-work.L[191]*work.v[118]-work.L[192]*work.v[119])*work.d_inv[120];
  work.L[198] = (work.KKT[309]-work.L[194]*work.v[116]-work.L[195]*work.v[117]-work.L[196]*work.v[118]-work.L[197]*work.v[119])*work.d_inv[120];
  work.L[204] = (work.KKT[310]-work.L[200]*work.v[116]-work.L[201]*work.v[117]-work.L[202]*work.v[118]-work.L[203]*work.v[119])*work.d_inv[120];
  work.L[211] = (work.KKT[311]-work.L[207]*work.v[116]-work.L[208]*work.v[117]-work.L[209]*work.v[118]-work.L[210]*work.v[119])*work.d_inv[120];
  work.L[224] = (work.KKT[312]-work.L[220]*work.v[116]-work.L[221]*work.v[117]-work.L[222]*work.v[118]-work.L[223]*work.v[119])*work.d_inv[120];
  work.v[116] = work.L[189]*work.d[116];
  work.v[117] = work.L[190]*work.d[117];
  work.v[118] = work.L[191]*work.d[118];
  work.v[119] = work.L[192]*work.d[119];
  work.v[120] = work.L[193]*work.d[120];
  work.v[121] = work.KKT[313]-work.L[189]*work.v[116]-work.L[190]*work.v[117]-work.L[191]*work.v[118]-work.L[192]*work.v[119]-work.L[193]*work.v[120];
  work.d[121] = work.v[121];

  if (work.d[121] < 0)
    work.d[121] = settings.kkt_reg;
  else
    work.d[121] += settings.kkt_reg;
  work.d_inv[121] = 1/work.d[121];

  work.L[199] = (work.KKT[314]-work.L[194]*work.v[116]-work.L[195]*work.v[117]-work.L[196]*work.v[118]-work.L[197]*work.v[119]-work.L[198]*work.v[120])*work.d_inv[121];
  work.L[205] = (work.KKT[315]-work.L[200]*work.v[116]-work.L[201]*work.v[117]-work.L[202]*work.v[118]-work.L[203]*work.v[119]-work.L[204]*work.v[120])*work.d_inv[121];
  work.L[212] = (work.KKT[316]-work.L[207]*work.v[116]-work.L[208]*work.v[117]-work.L[209]*work.v[118]-work.L[210]*work.v[119]-work.L[211]*work.v[120])*work.d_inv[121];
  work.L[225] = (work.KKT[317]-work.L[220]*work.v[116]-work.L[221]*work.v[117]-work.L[222]*work.v[118]-work.L[223]*work.v[119]-work.L[224]*work.v[120])*work.d_inv[121];
  work.L[229] = (work.KKT[318])*work.d_inv[121];
  work.v[116] = work.L[194]*work.d[116];
  work.v[117] = work.L[195]*work.d[117];
  work.v[118] = work.L[196]*work.d[118];
  work.v[119] = work.L[197]*work.d[119];
  work.v[120] = work.L[198]*work.d[120];
  work.v[121] = work.L[199]*work.d[121];
  work.v[122] = work.KKT[319]-work.L[194]*work.v[116]-work.L[195]*work.v[117]-work.L[196]*work.v[118]-work.L[197]*work.v[119]-work.L[198]*work.v[120]-work.L[199]*work.v[121];
  work.d[122] = work.v[122];

  if (work.d[122] < 0)
    work.d[122] = settings.kkt_reg;
  else
    work.d[122] += settings.kkt_reg;
  work.d_inv[122] = 1/work.d[122];

  work.L[206] = (work.KKT[320]-work.L[200]*work.v[116]-work.L[201]*work.v[117]-work.L[202]*work.v[118]-work.L[203]*work.v[119]-work.L[204]*work.v[120]-work.L[205]*work.v[121])*work.d_inv[122];
  work.L[213] = (work.KKT[321]-work.L[207]*work.v[116]-work.L[208]*work.v[117]-work.L[209]*work.v[118]-work.L[210]*work.v[119]-work.L[211]*work.v[120]-work.L[212]*work.v[121])*work.d_inv[122];
  work.L[226] = (work.KKT[322]-work.L[220]*work.v[116]-work.L[221]*work.v[117]-work.L[222]*work.v[118]-work.L[223]*work.v[119]-work.L[224]*work.v[120]-work.L[225]*work.v[121])*work.d_inv[122];
  work.L[230] = (-work.L[229]*work.v[121])*work.d_inv[122];
  work.L[236] = (work.KKT[323])*work.d_inv[122];
  work.v[116] = work.L[200]*work.d[116];
  work.v[117] = work.L[201]*work.d[117];
  work.v[118] = work.L[202]*work.d[118];
  work.v[119] = work.L[203]*work.d[119];
  work.v[120] = work.L[204]*work.d[120];
  work.v[121] = work.L[205]*work.d[121];
  work.v[122] = work.L[206]*work.d[122];
  work.v[123] = work.KKT[324]-work.L[200]*work.v[116]-work.L[201]*work.v[117]-work.L[202]*work.v[118]-work.L[203]*work.v[119]-work.L[204]*work.v[120]-work.L[205]*work.v[121]-work.L[206]*work.v[122];
  work.d[123] = work.v[123];

  if (work.d[123] < 0)
    work.d[123] = settings.kkt_reg;
  else
    work.d[123] += settings.kkt_reg;
  work.d_inv[123] = 1/work.d[123];

  work.L[214] = (work.KKT[325]-work.L[207]*work.v[116]-work.L[208]*work.v[117]-work.L[209]*work.v[118]-work.L[210]*work.v[119]-work.L[211]*work.v[120]-work.L[212]*work.v[121]-work.L[213]*work.v[122])*work.d_inv[123];
  work.L[227] = (work.KKT[326]-work.L[220]*work.v[116]-work.L[221]*work.v[117]-work.L[222]*work.v[118]-work.L[223]*work.v[119]-work.L[224]*work.v[120]-work.L[225]*work.v[121]-work.L[226]*work.v[122])*work.d_inv[123];
  work.L[231] = (-work.L[229]*work.v[121]-work.L[230]*work.v[122])*work.d_inv[123];
  work.L[237] = (-work.L[236]*work.v[122])*work.d_inv[123];
  work.L[243] = (work.KKT[327])*work.d_inv[123];
  work.v[116] = work.L[207]*work.d[116];
  work.v[117] = work.L[208]*work.d[117];
  work.v[118] = work.L[209]*work.d[118];
  work.v[119] = work.L[210]*work.d[119];
  work.v[120] = work.L[211]*work.d[120];
  work.v[121] = work.L[212]*work.d[121];
  work.v[122] = work.L[213]*work.d[122];
  work.v[123] = work.L[214]*work.d[123];
  work.v[124] = work.KKT[328]-work.L[207]*work.v[116]-work.L[208]*work.v[117]-work.L[209]*work.v[118]-work.L[210]*work.v[119]-work.L[211]*work.v[120]-work.L[212]*work.v[121]-work.L[213]*work.v[122]-work.L[214]*work.v[123];
  work.d[124] = work.v[124];

  if (work.d[124] < 0)
    work.d[124] = settings.kkt_reg;
  else
    work.d[124] += settings.kkt_reg;
  work.d_inv[124] = 1/work.d[124];

  work.L[228] = (work.KKT[329]-work.L[220]*work.v[116]-work.L[221]*work.v[117]-work.L[222]*work.v[118]-work.L[223]*work.v[119]-work.L[224]*work.v[120]-work.L[225]*work.v[121]-work.L[226]*work.v[122]-work.L[227]*work.v[123])*work.d_inv[124];
  work.L[232] = (-work.L[229]*work.v[121]-work.L[230]*work.v[122]-work.L[231]*work.v[123])*work.d_inv[124];
  work.L[238] = (-work.L[236]*work.v[122]-work.L[237]*work.v[123])*work.d_inv[124];
  work.L[244] = (-work.L[243]*work.v[123])*work.d_inv[124];
  work.L[250] = (work.KKT[330])*work.d_inv[124];
  work.v[58] = work.L[215]*work.d[58];
  work.v[80] = work.L[216]*work.d[80];
  work.v[125] = work.KKT[331]-work.L[215]*work.v[58]-work.L[216]*work.v[80];
  work.d[125] = work.v[125];

  if (work.d[125] < 0)
    work.d[125] = settings.kkt_reg;
  else
    work.d[125] += settings.kkt_reg;
  work.d_inv[125] = 1/work.d[125];

  work.L[219] = (work.KKT[332])*work.d_inv[125];
  work.L[233] = (work.KKT[333])*work.d_inv[125];
  work.L[239] = (work.KKT[334])*work.d_inv[125];
  work.L[245] = (work.KKT[335])*work.d_inv[125];
  work.L[251] = (work.KKT[336])*work.d_inv[125];
  work.L[257] = (work.KKT[337])*work.d_inv[125];
  work.v[59] = work.L[217]*work.d[59];
  work.v[81] = work.L[218]*work.d[81];
  work.v[125] = work.L[219]*work.d[125];
  work.v[126] = work.KKT[338]-work.L[217]*work.v[59]-work.L[218]*work.v[81]-work.L[219]*work.v[125];
  work.d[126] = work.v[126];

  if (work.d[126] < 0)
    work.d[126] = settings.kkt_reg;
  else
    work.d[126] += settings.kkt_reg;
  work.d_inv[126] = 1/work.d[126];

  work.L[234] = (work.KKT[339]-work.L[233]*work.v[125])*work.d_inv[126];
  work.L[240] = (work.KKT[340]-work.L[239]*work.v[125])*work.d_inv[126];
  work.L[246] = (work.KKT[341]-work.L[245]*work.v[125])*work.d_inv[126];
  work.L[252] = (work.KKT[342]-work.L[251]*work.v[125])*work.d_inv[126];
  work.L[258] = (work.KKT[343]-work.L[257]*work.v[125])*work.d_inv[126];
  work.v[116] = work.L[220]*work.d[116];
  work.v[117] = work.L[221]*work.d[117];
  work.v[118] = work.L[222]*work.d[118];
  work.v[119] = work.L[223]*work.d[119];
  work.v[120] = work.L[224]*work.d[120];
  work.v[121] = work.L[225]*work.d[121];
  work.v[122] = work.L[226]*work.d[122];
  work.v[123] = work.L[227]*work.d[123];
  work.v[124] = work.L[228]*work.d[124];
  work.v[127] = work.KKT[344]-work.L[220]*work.v[116]-work.L[221]*work.v[117]-work.L[222]*work.v[118]-work.L[223]*work.v[119]-work.L[224]*work.v[120]-work.L[225]*work.v[121]-work.L[226]*work.v[122]-work.L[227]*work.v[123]-work.L[228]*work.v[124];
  work.d[127] = work.v[127];

  if (work.d[127] < 0)
    work.d[127] = settings.kkt_reg;
  else
    work.d[127] += settings.kkt_reg;
  work.d_inv[127] = 1/work.d[127];

  work.L[235] = (-work.L[229]*work.v[121]-work.L[230]*work.v[122]-work.L[231]*work.v[123]-work.L[232]*work.v[124])*work.d_inv[127];
  work.L[241] = (-work.L[236]*work.v[122]-work.L[237]*work.v[123]-work.L[238]*work.v[124])*work.d_inv[127];
  work.L[247] = (-work.L[243]*work.v[123]-work.L[244]*work.v[124])*work.d_inv[127];
  work.L[253] = (-work.L[250]*work.v[124])*work.d_inv[127];
  work.L[259] = (work.KKT[345])*work.d_inv[127];
  work.v[121] = work.L[229]*work.d[121];
  work.v[122] = work.L[230]*work.d[122];
  work.v[123] = work.L[231]*work.d[123];
  work.v[124] = work.L[232]*work.d[124];
  work.v[125] = work.L[233]*work.d[125];
  work.v[126] = work.L[234]*work.d[126];
  work.v[127] = work.L[235]*work.d[127];
  work.v[128] = 0-work.L[229]*work.v[121]-work.L[230]*work.v[122]-work.L[231]*work.v[123]-work.L[232]*work.v[124]-work.L[233]*work.v[125]-work.L[234]*work.v[126]-work.L[235]*work.v[127];
  work.d[128] = work.v[128];

  if (work.d[128] > 0)
    work.d[128] = -settings.kkt_reg;
  else
    work.d[128] -= settings.kkt_reg;

  work.d_inv[128] = 1/work.d[128];

  work.L[242] = (-work.L[236]*work.v[122]-work.L[237]*work.v[123]-work.L[238]*work.v[124]-work.L[239]*work.v[125]-work.L[240]*work.v[126]-work.L[241]*work.v[127])*work.d_inv[128];
  work.L[248] = (-work.L[243]*work.v[123]-work.L[244]*work.v[124]-work.L[245]*work.v[125]-work.L[246]*work.v[126]-work.L[247]*work.v[127])*work.d_inv[128];
  work.L[254] = (-work.L[250]*work.v[124]-work.L[251]*work.v[125]-work.L[252]*work.v[126]-work.L[253]*work.v[127])*work.d_inv[128];
  work.L[260] = (-work.L[257]*work.v[125]-work.L[258]*work.v[126]-work.L[259]*work.v[127])*work.d_inv[128];
  work.L[264] = (work.KKT[346])*work.d_inv[128];
  work.L[269] = (work.KKT[347])*work.d_inv[128];
  work.L[275] = (work.KKT[348])*work.d_inv[128];
  work.L[282] = (work.KKT[349])*work.d_inv[128];
  work.L[295] = (work.KKT[350])*work.d_inv[128];
  work.v[122] = work.L[236]*work.d[122];
  work.v[123] = work.L[237]*work.d[123];
  work.v[124] = work.L[238]*work.d[124];
  work.v[125] = work.L[239]*work.d[125];
  work.v[126] = work.L[240]*work.d[126];
  work.v[127] = work.L[241]*work.d[127];
  work.v[128] = work.L[242]*work.d[128];
  work.v[129] = 0-work.L[236]*work.v[122]-work.L[237]*work.v[123]-work.L[238]*work.v[124]-work.L[239]*work.v[125]-work.L[240]*work.v[126]-work.L[241]*work.v[127]-work.L[242]*work.v[128];
  work.d[129] = work.v[129];

  if (work.d[129] > 0)
    work.d[129] = -settings.kkt_reg;
  else
    work.d[129] -= settings.kkt_reg;

  work.d_inv[129] = 1/work.d[129];

  work.L[249] = (-work.L[243]*work.v[123]-work.L[244]*work.v[124]-work.L[245]*work.v[125]-work.L[246]*work.v[126]-work.L[247]*work.v[127]-work.L[248]*work.v[128])*work.d_inv[129];
  work.L[255] = (-work.L[250]*work.v[124]-work.L[251]*work.v[125]-work.L[252]*work.v[126]-work.L[253]*work.v[127]-work.L[254]*work.v[128])*work.d_inv[129];
  work.L[261] = (-work.L[257]*work.v[125]-work.L[258]*work.v[126]-work.L[259]*work.v[127]-work.L[260]*work.v[128])*work.d_inv[129];
  work.L[265] = (work.KKT[351]-work.L[264]*work.v[128])*work.d_inv[129];
  work.L[270] = (work.KKT[352]-work.L[269]*work.v[128])*work.d_inv[129];
  work.L[276] = (work.KKT[353]-work.L[275]*work.v[128])*work.d_inv[129];
  work.L[283] = (work.KKT[354]-work.L[282]*work.v[128])*work.d_inv[129];
  work.L[296] = (work.KKT[355]-work.L[295]*work.v[128])*work.d_inv[129];
  work.v[123] = work.L[243]*work.d[123];
  work.v[124] = work.L[244]*work.d[124];
  work.v[125] = work.L[245]*work.d[125];
  work.v[126] = work.L[246]*work.d[126];
  work.v[127] = work.L[247]*work.d[127];
  work.v[128] = work.L[248]*work.d[128];
  work.v[129] = work.L[249]*work.d[129];
  work.v[130] = 0-work.L[243]*work.v[123]-work.L[244]*work.v[124]-work.L[245]*work.v[125]-work.L[246]*work.v[126]-work.L[247]*work.v[127]-work.L[248]*work.v[128]-work.L[249]*work.v[129];
  work.d[130] = work.v[130];

  if (work.d[130] > 0)
    work.d[130] = -settings.kkt_reg;
  else
    work.d[130] -= settings.kkt_reg;

  work.d_inv[130] = 1/work.d[130];

  work.L[256] = (-work.L[250]*work.v[124]-work.L[251]*work.v[125]-work.L[252]*work.v[126]-work.L[253]*work.v[127]-work.L[254]*work.v[128]-work.L[255]*work.v[129])*work.d_inv[130];
  work.L[262] = (-work.L[257]*work.v[125]-work.L[258]*work.v[126]-work.L[259]*work.v[127]-work.L[260]*work.v[128]-work.L[261]*work.v[129])*work.d_inv[130];
  work.L[266] = (work.KKT[356]-work.L[264]*work.v[128]-work.L[265]*work.v[129])*work.d_inv[130];
  work.L[271] = (work.KKT[357]-work.L[269]*work.v[128]-work.L[270]*work.v[129])*work.d_inv[130];
  work.L[277] = (work.KKT[358]-work.L[275]*work.v[128]-work.L[276]*work.v[129])*work.d_inv[130];
  work.L[284] = (work.KKT[359]-work.L[282]*work.v[128]-work.L[283]*work.v[129])*work.d_inv[130];
  work.L[297] = (work.KKT[360]-work.L[295]*work.v[128]-work.L[296]*work.v[129])*work.d_inv[130];
  work.v[124] = work.L[250]*work.d[124];
  work.v[125] = work.L[251]*work.d[125];
  work.v[126] = work.L[252]*work.d[126];
  work.v[127] = work.L[253]*work.d[127];
  work.v[128] = work.L[254]*work.d[128];
  work.v[129] = work.L[255]*work.d[129];
  work.v[130] = work.L[256]*work.d[130];
  work.v[131] = 0-work.L[250]*work.v[124]-work.L[251]*work.v[125]-work.L[252]*work.v[126]-work.L[253]*work.v[127]-work.L[254]*work.v[128]-work.L[255]*work.v[129]-work.L[256]*work.v[130];
  work.d[131] = work.v[131];

  if (work.d[131] > 0)
    work.d[131] = -settings.kkt_reg;
  else
    work.d[131] -= settings.kkt_reg;

  work.d_inv[131] = 1/work.d[131];

  work.L[263] = (-work.L[257]*work.v[125]-work.L[258]*work.v[126]-work.L[259]*work.v[127]-work.L[260]*work.v[128]-work.L[261]*work.v[129]-work.L[262]*work.v[130])*work.d_inv[131];
  work.L[267] = (work.KKT[361]-work.L[264]*work.v[128]-work.L[265]*work.v[129]-work.L[266]*work.v[130])*work.d_inv[131];
  work.L[272] = (work.KKT[362]-work.L[269]*work.v[128]-work.L[270]*work.v[129]-work.L[271]*work.v[130])*work.d_inv[131];
  work.L[278] = (work.KKT[363]-work.L[275]*work.v[128]-work.L[276]*work.v[129]-work.L[277]*work.v[130])*work.d_inv[131];
  work.L[285] = (work.KKT[364]-work.L[282]*work.v[128]-work.L[283]*work.v[129]-work.L[284]*work.v[130])*work.d_inv[131];
  work.L[298] = (work.KKT[365]-work.L[295]*work.v[128]-work.L[296]*work.v[129]-work.L[297]*work.v[130])*work.d_inv[131];
  work.v[125] = work.L[257]*work.d[125];
  work.v[126] = work.L[258]*work.d[126];
  work.v[127] = work.L[259]*work.d[127];
  work.v[128] = work.L[260]*work.d[128];
  work.v[129] = work.L[261]*work.d[129];
  work.v[130] = work.L[262]*work.d[130];
  work.v[131] = work.L[263]*work.d[131];
  work.v[132] = 0-work.L[257]*work.v[125]-work.L[258]*work.v[126]-work.L[259]*work.v[127]-work.L[260]*work.v[128]-work.L[261]*work.v[129]-work.L[262]*work.v[130]-work.L[263]*work.v[131];
  work.d[132] = work.v[132];

  if (work.d[132] > 0)
    work.d[132] = -settings.kkt_reg;
  else
    work.d[132] -= settings.kkt_reg;

  work.d_inv[132] = 1/work.d[132];

  work.L[268] = (work.KKT[366]-work.L[264]*work.v[128]-work.L[265]*work.v[129]-work.L[266]*work.v[130]-work.L[267]*work.v[131])*work.d_inv[132];
  work.L[273] = (work.KKT[367]-work.L[269]*work.v[128]-work.L[270]*work.v[129]-work.L[271]*work.v[130]-work.L[272]*work.v[131])*work.d_inv[132];
  work.L[279] = (work.KKT[368]-work.L[275]*work.v[128]-work.L[276]*work.v[129]-work.L[277]*work.v[130]-work.L[278]*work.v[131])*work.d_inv[132];
  work.L[286] = (work.KKT[369]-work.L[282]*work.v[128]-work.L[283]*work.v[129]-work.L[284]*work.v[130]-work.L[285]*work.v[131])*work.d_inv[132];
  work.L[299] = (work.KKT[370]-work.L[295]*work.v[128]-work.L[296]*work.v[129]-work.L[297]*work.v[130]-work.L[298]*work.v[131])*work.d_inv[132];
  work.v[128] = work.L[264]*work.d[128];
  work.v[129] = work.L[265]*work.d[129];
  work.v[130] = work.L[266]*work.d[130];
  work.v[131] = work.L[267]*work.d[131];
  work.v[132] = work.L[268]*work.d[132];
  work.v[133] = work.KKT[371]-work.L[264]*work.v[128]-work.L[265]*work.v[129]-work.L[266]*work.v[130]-work.L[267]*work.v[131]-work.L[268]*work.v[132];
  work.d[133] = work.v[133];

  if (work.d[133] < 0)
    work.d[133] = settings.kkt_reg;
  else
    work.d[133] += settings.kkt_reg;
  work.d_inv[133] = 1/work.d[133];

  work.L[274] = (work.KKT[372]-work.L[269]*work.v[128]-work.L[270]*work.v[129]-work.L[271]*work.v[130]-work.L[272]*work.v[131]-work.L[273]*work.v[132])*work.d_inv[133];
  work.L[280] = (work.KKT[373]-work.L[275]*work.v[128]-work.L[276]*work.v[129]-work.L[277]*work.v[130]-work.L[278]*work.v[131]-work.L[279]*work.v[132])*work.d_inv[133];
  work.L[287] = (work.KKT[374]-work.L[282]*work.v[128]-work.L[283]*work.v[129]-work.L[284]*work.v[130]-work.L[285]*work.v[131]-work.L[286]*work.v[132])*work.d_inv[133];
  work.L[300] = (work.KKT[375]-work.L[295]*work.v[128]-work.L[296]*work.v[129]-work.L[297]*work.v[130]-work.L[298]*work.v[131]-work.L[299]*work.v[132])*work.d_inv[133];
  work.L[304] = (work.KKT[376])*work.d_inv[133];
  work.v[128] = work.L[269]*work.d[128];
  work.v[129] = work.L[270]*work.d[129];
  work.v[130] = work.L[271]*work.d[130];
  work.v[131] = work.L[272]*work.d[131];
  work.v[132] = work.L[273]*work.d[132];
  work.v[133] = work.L[274]*work.d[133];
  work.v[134] = work.KKT[377]-work.L[269]*work.v[128]-work.L[270]*work.v[129]-work.L[271]*work.v[130]-work.L[272]*work.v[131]-work.L[273]*work.v[132]-work.L[274]*work.v[133];
  work.d[134] = work.v[134];

  if (work.d[134] < 0)
    work.d[134] = settings.kkt_reg;
  else
    work.d[134] += settings.kkt_reg;
  work.d_inv[134] = 1/work.d[134];

  work.L[281] = (work.KKT[378]-work.L[275]*work.v[128]-work.L[276]*work.v[129]-work.L[277]*work.v[130]-work.L[278]*work.v[131]-work.L[279]*work.v[132]-work.L[280]*work.v[133])*work.d_inv[134];
  work.L[288] = (work.KKT[379]-work.L[282]*work.v[128]-work.L[283]*work.v[129]-work.L[284]*work.v[130]-work.L[285]*work.v[131]-work.L[286]*work.v[132]-work.L[287]*work.v[133])*work.d_inv[134];
  work.L[301] = (work.KKT[380]-work.L[295]*work.v[128]-work.L[296]*work.v[129]-work.L[297]*work.v[130]-work.L[298]*work.v[131]-work.L[299]*work.v[132]-work.L[300]*work.v[133])*work.d_inv[134];
  work.L[305] = (-work.L[304]*work.v[133])*work.d_inv[134];
  work.L[311] = (work.KKT[381])*work.d_inv[134];
  work.v[128] = work.L[275]*work.d[128];
  work.v[129] = work.L[276]*work.d[129];
  work.v[130] = work.L[277]*work.d[130];
  work.v[131] = work.L[278]*work.d[131];
  work.v[132] = work.L[279]*work.d[132];
  work.v[133] = work.L[280]*work.d[133];
  work.v[134] = work.L[281]*work.d[134];
  work.v[135] = work.KKT[382]-work.L[275]*work.v[128]-work.L[276]*work.v[129]-work.L[277]*work.v[130]-work.L[278]*work.v[131]-work.L[279]*work.v[132]-work.L[280]*work.v[133]-work.L[281]*work.v[134];
  work.d[135] = work.v[135];

  if (work.d[135] < 0)
    work.d[135] = settings.kkt_reg;
  else
    work.d[135] += settings.kkt_reg;
  work.d_inv[135] = 1/work.d[135];

  work.L[289] = (work.KKT[383]-work.L[282]*work.v[128]-work.L[283]*work.v[129]-work.L[284]*work.v[130]-work.L[285]*work.v[131]-work.L[286]*work.v[132]-work.L[287]*work.v[133]-work.L[288]*work.v[134])*work.d_inv[135];
  work.L[302] = (work.KKT[384]-work.L[295]*work.v[128]-work.L[296]*work.v[129]-work.L[297]*work.v[130]-work.L[298]*work.v[131]-work.L[299]*work.v[132]-work.L[300]*work.v[133]-work.L[301]*work.v[134])*work.d_inv[135];
  work.L[306] = (-work.L[304]*work.v[133]-work.L[305]*work.v[134])*work.d_inv[135];
  work.L[312] = (-work.L[311]*work.v[134])*work.d_inv[135];
  work.L[318] = (work.KKT[385])*work.d_inv[135];
  work.v[128] = work.L[282]*work.d[128];
  work.v[129] = work.L[283]*work.d[129];
  work.v[130] = work.L[284]*work.d[130];
  work.v[131] = work.L[285]*work.d[131];
  work.v[132] = work.L[286]*work.d[132];
  work.v[133] = work.L[287]*work.d[133];
  work.v[134] = work.L[288]*work.d[134];
  work.v[135] = work.L[289]*work.d[135];
  work.v[136] = work.KKT[386]-work.L[282]*work.v[128]-work.L[283]*work.v[129]-work.L[284]*work.v[130]-work.L[285]*work.v[131]-work.L[286]*work.v[132]-work.L[287]*work.v[133]-work.L[288]*work.v[134]-work.L[289]*work.v[135];
  work.d[136] = work.v[136];

  if (work.d[136] < 0)
    work.d[136] = settings.kkt_reg;
  else
    work.d[136] += settings.kkt_reg;
  work.d_inv[136] = 1/work.d[136];

  work.L[303] = (work.KKT[387]-work.L[295]*work.v[128]-work.L[296]*work.v[129]-work.L[297]*work.v[130]-work.L[298]*work.v[131]-work.L[299]*work.v[132]-work.L[300]*work.v[133]-work.L[301]*work.v[134]-work.L[302]*work.v[135])*work.d_inv[136];
  work.L[307] = (-work.L[304]*work.v[133]-work.L[305]*work.v[134]-work.L[306]*work.v[135])*work.d_inv[136];
  work.L[313] = (-work.L[311]*work.v[134]-work.L[312]*work.v[135])*work.d_inv[136];
  work.L[319] = (-work.L[318]*work.v[135])*work.d_inv[136];
  work.L[325] = (work.KKT[388])*work.d_inv[136];
  work.v[56] = work.L[290]*work.d[56];
  work.v[78] = work.L[291]*work.d[78];
  work.v[137] = work.KKT[389]-work.L[290]*work.v[56]-work.L[291]*work.v[78];
  work.d[137] = work.v[137];

  if (work.d[137] < 0)
    work.d[137] = settings.kkt_reg;
  else
    work.d[137] += settings.kkt_reg;
  work.d_inv[137] = 1/work.d[137];

  work.L[294] = (work.KKT[390])*work.d_inv[137];
  work.L[308] = (work.KKT[391])*work.d_inv[137];
  work.L[314] = (work.KKT[392])*work.d_inv[137];
  work.L[320] = (work.KKT[393])*work.d_inv[137];
  work.L[326] = (work.KKT[394])*work.d_inv[137];
  work.L[332] = (work.KKT[395])*work.d_inv[137];
  work.v[57] = work.L[292]*work.d[57];
  work.v[79] = work.L[293]*work.d[79];
  work.v[137] = work.L[294]*work.d[137];
  work.v[138] = work.KKT[396]-work.L[292]*work.v[57]-work.L[293]*work.v[79]-work.L[294]*work.v[137];
  work.d[138] = work.v[138];

  if (work.d[138] < 0)
    work.d[138] = settings.kkt_reg;
  else
    work.d[138] += settings.kkt_reg;
  work.d_inv[138] = 1/work.d[138];

  work.L[309] = (work.KKT[397]-work.L[308]*work.v[137])*work.d_inv[138];
  work.L[315] = (work.KKT[398]-work.L[314]*work.v[137])*work.d_inv[138];
  work.L[321] = (work.KKT[399]-work.L[320]*work.v[137])*work.d_inv[138];
  work.L[327] = (work.KKT[400]-work.L[326]*work.v[137])*work.d_inv[138];
  work.L[333] = (work.KKT[401]-work.L[332]*work.v[137])*work.d_inv[138];
  work.v[128] = work.L[295]*work.d[128];
  work.v[129] = work.L[296]*work.d[129];
  work.v[130] = work.L[297]*work.d[130];
  work.v[131] = work.L[298]*work.d[131];
  work.v[132] = work.L[299]*work.d[132];
  work.v[133] = work.L[300]*work.d[133];
  work.v[134] = work.L[301]*work.d[134];
  work.v[135] = work.L[302]*work.d[135];
  work.v[136] = work.L[303]*work.d[136];
  work.v[139] = work.KKT[402]-work.L[295]*work.v[128]-work.L[296]*work.v[129]-work.L[297]*work.v[130]-work.L[298]*work.v[131]-work.L[299]*work.v[132]-work.L[300]*work.v[133]-work.L[301]*work.v[134]-work.L[302]*work.v[135]-work.L[303]*work.v[136];
  work.d[139] = work.v[139];

  if (work.d[139] < 0)
    work.d[139] = settings.kkt_reg;
  else
    work.d[139] += settings.kkt_reg;
  work.d_inv[139] = 1/work.d[139];

  work.L[310] = (-work.L[304]*work.v[133]-work.L[305]*work.v[134]-work.L[306]*work.v[135]-work.L[307]*work.v[136])*work.d_inv[139];
  work.L[316] = (-work.L[311]*work.v[134]-work.L[312]*work.v[135]-work.L[313]*work.v[136])*work.d_inv[139];
  work.L[322] = (-work.L[318]*work.v[135]-work.L[319]*work.v[136])*work.d_inv[139];
  work.L[328] = (-work.L[325]*work.v[136])*work.d_inv[139];
  work.L[334] = (work.KKT[403])*work.d_inv[139];
  work.v[133] = work.L[304]*work.d[133];
  work.v[134] = work.L[305]*work.d[134];
  work.v[135] = work.L[306]*work.d[135];
  work.v[136] = work.L[307]*work.d[136];
  work.v[137] = work.L[308]*work.d[137];
  work.v[138] = work.L[309]*work.d[138];
  work.v[139] = work.L[310]*work.d[139];
  work.v[140] = 0-work.L[304]*work.v[133]-work.L[305]*work.v[134]-work.L[306]*work.v[135]-work.L[307]*work.v[136]-work.L[308]*work.v[137]-work.L[309]*work.v[138]-work.L[310]*work.v[139];
  work.d[140] = work.v[140];

  if (work.d[140] > 0)
    work.d[140] = -settings.kkt_reg;
  else
    work.d[140] -= settings.kkt_reg;

  work.d_inv[140] = 1/work.d[140];

  work.L[317] = (-work.L[311]*work.v[134]-work.L[312]*work.v[135]-work.L[313]*work.v[136]-work.L[314]*work.v[137]-work.L[315]*work.v[138]-work.L[316]*work.v[139])*work.d_inv[140];
  work.L[323] = (-work.L[318]*work.v[135]-work.L[319]*work.v[136]-work.L[320]*work.v[137]-work.L[321]*work.v[138]-work.L[322]*work.v[139])*work.d_inv[140];
  work.L[329] = (-work.L[325]*work.v[136]-work.L[326]*work.v[137]-work.L[327]*work.v[138]-work.L[328]*work.v[139])*work.d_inv[140];
  work.L[335] = (-work.L[332]*work.v[137]-work.L[333]*work.v[138]-work.L[334]*work.v[139])*work.d_inv[140];
  work.L[339] = (work.KKT[404])*work.d_inv[140];
  work.L[344] = (work.KKT[405])*work.d_inv[140];
  work.L[350] = (work.KKT[406])*work.d_inv[140];
  work.L[357] = (work.KKT[407])*work.d_inv[140];
  work.L[370] = (work.KKT[408])*work.d_inv[140];
  work.v[134] = work.L[311]*work.d[134];
  work.v[135] = work.L[312]*work.d[135];
  work.v[136] = work.L[313]*work.d[136];
  work.v[137] = work.L[314]*work.d[137];
  work.v[138] = work.L[315]*work.d[138];
  work.v[139] = work.L[316]*work.d[139];
  work.v[140] = work.L[317]*work.d[140];
  work.v[141] = 0-work.L[311]*work.v[134]-work.L[312]*work.v[135]-work.L[313]*work.v[136]-work.L[314]*work.v[137]-work.L[315]*work.v[138]-work.L[316]*work.v[139]-work.L[317]*work.v[140];
  work.d[141] = work.v[141];

  if (work.d[141] > 0)
    work.d[141] = -settings.kkt_reg;
  else
    work.d[141] -= settings.kkt_reg;

  work.d_inv[141] = 1/work.d[141];

  work.L[324] = (-work.L[318]*work.v[135]-work.L[319]*work.v[136]-work.L[320]*work.v[137]-work.L[321]*work.v[138]-work.L[322]*work.v[139]-work.L[323]*work.v[140])*work.d_inv[141];
  work.L[330] = (-work.L[325]*work.v[136]-work.L[326]*work.v[137]-work.L[327]*work.v[138]-work.L[328]*work.v[139]-work.L[329]*work.v[140])*work.d_inv[141];
  work.L[336] = (-work.L[332]*work.v[137]-work.L[333]*work.v[138]-work.L[334]*work.v[139]-work.L[335]*work.v[140])*work.d_inv[141];
  work.L[340] = (work.KKT[409]-work.L[339]*work.v[140])*work.d_inv[141];
  work.L[345] = (work.KKT[410]-work.L[344]*work.v[140])*work.d_inv[141];
  work.L[351] = (work.KKT[411]-work.L[350]*work.v[140])*work.d_inv[141];
  work.L[358] = (work.KKT[412]-work.L[357]*work.v[140])*work.d_inv[141];
  work.L[371] = (work.KKT[413]-work.L[370]*work.v[140])*work.d_inv[141];
  work.v[135] = work.L[318]*work.d[135];
  work.v[136] = work.L[319]*work.d[136];
  work.v[137] = work.L[320]*work.d[137];
  work.v[138] = work.L[321]*work.d[138];
  work.v[139] = work.L[322]*work.d[139];
  work.v[140] = work.L[323]*work.d[140];
  work.v[141] = work.L[324]*work.d[141];
  work.v[142] = 0-work.L[318]*work.v[135]-work.L[319]*work.v[136]-work.L[320]*work.v[137]-work.L[321]*work.v[138]-work.L[322]*work.v[139]-work.L[323]*work.v[140]-work.L[324]*work.v[141];
  work.d[142] = work.v[142];

  if (work.d[142] > 0)
    work.d[142] = -settings.kkt_reg;
  else
    work.d[142] -= settings.kkt_reg;

  work.d_inv[142] = 1/work.d[142];

  work.L[331] = (-work.L[325]*work.v[136]-work.L[326]*work.v[137]-work.L[327]*work.v[138]-work.L[328]*work.v[139]-work.L[329]*work.v[140]-work.L[330]*work.v[141])*work.d_inv[142];
  work.L[337] = (-work.L[332]*work.v[137]-work.L[333]*work.v[138]-work.L[334]*work.v[139]-work.L[335]*work.v[140]-work.L[336]*work.v[141])*work.d_inv[142];
  work.L[341] = (work.KKT[414]-work.L[339]*work.v[140]-work.L[340]*work.v[141])*work.d_inv[142];
  work.L[346] = (work.KKT[415]-work.L[344]*work.v[140]-work.L[345]*work.v[141])*work.d_inv[142];
  work.L[352] = (work.KKT[416]-work.L[350]*work.v[140]-work.L[351]*work.v[141])*work.d_inv[142];
  work.L[359] = (work.KKT[417]-work.L[357]*work.v[140]-work.L[358]*work.v[141])*work.d_inv[142];
  work.L[372] = (work.KKT[418]-work.L[370]*work.v[140]-work.L[371]*work.v[141])*work.d_inv[142];
  work.v[136] = work.L[325]*work.d[136];
  work.v[137] = work.L[326]*work.d[137];
  work.v[138] = work.L[327]*work.d[138];
  work.v[139] = work.L[328]*work.d[139];
  work.v[140] = work.L[329]*work.d[140];
  work.v[141] = work.L[330]*work.d[141];
  work.v[142] = work.L[331]*work.d[142];
  work.v[143] = 0-work.L[325]*work.v[136]-work.L[326]*work.v[137]-work.L[327]*work.v[138]-work.L[328]*work.v[139]-work.L[329]*work.v[140]-work.L[330]*work.v[141]-work.L[331]*work.v[142];
  work.d[143] = work.v[143];

  if (work.d[143] > 0)
    work.d[143] = -settings.kkt_reg;
  else
    work.d[143] -= settings.kkt_reg;

  work.d_inv[143] = 1/work.d[143];

  work.L[338] = (-work.L[332]*work.v[137]-work.L[333]*work.v[138]-work.L[334]*work.v[139]-work.L[335]*work.v[140]-work.L[336]*work.v[141]-work.L[337]*work.v[142])*work.d_inv[143];
  work.L[342] = (work.KKT[419]-work.L[339]*work.v[140]-work.L[340]*work.v[141]-work.L[341]*work.v[142])*work.d_inv[143];
  work.L[347] = (work.KKT[420]-work.L[344]*work.v[140]-work.L[345]*work.v[141]-work.L[346]*work.v[142])*work.d_inv[143];
  work.L[353] = (work.KKT[421]-work.L[350]*work.v[140]-work.L[351]*work.v[141]-work.L[352]*work.v[142])*work.d_inv[143];
  work.L[360] = (work.KKT[422]-work.L[357]*work.v[140]-work.L[358]*work.v[141]-work.L[359]*work.v[142])*work.d_inv[143];
  work.L[373] = (work.KKT[423]-work.L[370]*work.v[140]-work.L[371]*work.v[141]-work.L[372]*work.v[142])*work.d_inv[143];
  work.v[137] = work.L[332]*work.d[137];
  work.v[138] = work.L[333]*work.d[138];
  work.v[139] = work.L[334]*work.d[139];
  work.v[140] = work.L[335]*work.d[140];
  work.v[141] = work.L[336]*work.d[141];
  work.v[142] = work.L[337]*work.d[142];
  work.v[143] = work.L[338]*work.d[143];
  work.v[144] = 0-work.L[332]*work.v[137]-work.L[333]*work.v[138]-work.L[334]*work.v[139]-work.L[335]*work.v[140]-work.L[336]*work.v[141]-work.L[337]*work.v[142]-work.L[338]*work.v[143];
  work.d[144] = work.v[144];

  if (work.d[144] > 0)
    work.d[144] = -settings.kkt_reg;
  else
    work.d[144] -= settings.kkt_reg;

  work.d_inv[144] = 1/work.d[144];

  work.L[343] = (work.KKT[424]-work.L[339]*work.v[140]-work.L[340]*work.v[141]-work.L[341]*work.v[142]-work.L[342]*work.v[143])*work.d_inv[144];
  work.L[348] = (work.KKT[425]-work.L[344]*work.v[140]-work.L[345]*work.v[141]-work.L[346]*work.v[142]-work.L[347]*work.v[143])*work.d_inv[144];
  work.L[354] = (work.KKT[426]-work.L[350]*work.v[140]-work.L[351]*work.v[141]-work.L[352]*work.v[142]-work.L[353]*work.v[143])*work.d_inv[144];
  work.L[361] = (work.KKT[427]-work.L[357]*work.v[140]-work.L[358]*work.v[141]-work.L[359]*work.v[142]-work.L[360]*work.v[143])*work.d_inv[144];
  work.L[374] = (work.KKT[428]-work.L[370]*work.v[140]-work.L[371]*work.v[141]-work.L[372]*work.v[142]-work.L[373]*work.v[143])*work.d_inv[144];
  work.v[140] = work.L[339]*work.d[140];
  work.v[141] = work.L[340]*work.d[141];
  work.v[142] = work.L[341]*work.d[142];
  work.v[143] = work.L[342]*work.d[143];
  work.v[144] = work.L[343]*work.d[144];
  work.v[145] = work.KKT[429]-work.L[339]*work.v[140]-work.L[340]*work.v[141]-work.L[341]*work.v[142]-work.L[342]*work.v[143]-work.L[343]*work.v[144];
  work.d[145] = work.v[145];

  if (work.d[145] < 0)
    work.d[145] = settings.kkt_reg;
  else
    work.d[145] += settings.kkt_reg;
  work.d_inv[145] = 1/work.d[145];

  work.L[349] = (work.KKT[430]-work.L[344]*work.v[140]-work.L[345]*work.v[141]-work.L[346]*work.v[142]-work.L[347]*work.v[143]-work.L[348]*work.v[144])*work.d_inv[145];
  work.L[355] = (work.KKT[431]-work.L[350]*work.v[140]-work.L[351]*work.v[141]-work.L[352]*work.v[142]-work.L[353]*work.v[143]-work.L[354]*work.v[144])*work.d_inv[145];
  work.L[362] = (work.KKT[432]-work.L[357]*work.v[140]-work.L[358]*work.v[141]-work.L[359]*work.v[142]-work.L[360]*work.v[143]-work.L[361]*work.v[144])*work.d_inv[145];
  work.L[375] = (work.KKT[433]-work.L[370]*work.v[140]-work.L[371]*work.v[141]-work.L[372]*work.v[142]-work.L[373]*work.v[143]-work.L[374]*work.v[144])*work.d_inv[145];
  work.L[379] = (work.KKT[434])*work.d_inv[145];
  work.v[140] = work.L[344]*work.d[140];
  work.v[141] = work.L[345]*work.d[141];
  work.v[142] = work.L[346]*work.d[142];
  work.v[143] = work.L[347]*work.d[143];
  work.v[144] = work.L[348]*work.d[144];
  work.v[145] = work.L[349]*work.d[145];
  work.v[146] = work.KKT[435]-work.L[344]*work.v[140]-work.L[345]*work.v[141]-work.L[346]*work.v[142]-work.L[347]*work.v[143]-work.L[348]*work.v[144]-work.L[349]*work.v[145];
  work.d[146] = work.v[146];

  if (work.d[146] < 0)
    work.d[146] = settings.kkt_reg;
  else
    work.d[146] += settings.kkt_reg;
  work.d_inv[146] = 1/work.d[146];

  work.L[356] = (work.KKT[436]-work.L[350]*work.v[140]-work.L[351]*work.v[141]-work.L[352]*work.v[142]-work.L[353]*work.v[143]-work.L[354]*work.v[144]-work.L[355]*work.v[145])*work.d_inv[146];
  work.L[363] = (work.KKT[437]-work.L[357]*work.v[140]-work.L[358]*work.v[141]-work.L[359]*work.v[142]-work.L[360]*work.v[143]-work.L[361]*work.v[144]-work.L[362]*work.v[145])*work.d_inv[146];
  work.L[376] = (work.KKT[438]-work.L[370]*work.v[140]-work.L[371]*work.v[141]-work.L[372]*work.v[142]-work.L[373]*work.v[143]-work.L[374]*work.v[144]-work.L[375]*work.v[145])*work.d_inv[146];
  work.L[380] = (-work.L[379]*work.v[145])*work.d_inv[146];
  work.L[386] = (work.KKT[439])*work.d_inv[146];
  work.v[140] = work.L[350]*work.d[140];
  work.v[141] = work.L[351]*work.d[141];
  work.v[142] = work.L[352]*work.d[142];
  work.v[143] = work.L[353]*work.d[143];
  work.v[144] = work.L[354]*work.d[144];
  work.v[145] = work.L[355]*work.d[145];
  work.v[146] = work.L[356]*work.d[146];
  work.v[147] = work.KKT[440]-work.L[350]*work.v[140]-work.L[351]*work.v[141]-work.L[352]*work.v[142]-work.L[353]*work.v[143]-work.L[354]*work.v[144]-work.L[355]*work.v[145]-work.L[356]*work.v[146];
  work.d[147] = work.v[147];

  if (work.d[147] < 0)
    work.d[147] = settings.kkt_reg;
  else
    work.d[147] += settings.kkt_reg;
  work.d_inv[147] = 1/work.d[147];

  work.L[364] = (work.KKT[441]-work.L[357]*work.v[140]-work.L[358]*work.v[141]-work.L[359]*work.v[142]-work.L[360]*work.v[143]-work.L[361]*work.v[144]-work.L[362]*work.v[145]-work.L[363]*work.v[146])*work.d_inv[147];
  work.L[377] = (work.KKT[442]-work.L[370]*work.v[140]-work.L[371]*work.v[141]-work.L[372]*work.v[142]-work.L[373]*work.v[143]-work.L[374]*work.v[144]-work.L[375]*work.v[145]-work.L[376]*work.v[146])*work.d_inv[147];
  work.L[381] = (-work.L[379]*work.v[145]-work.L[380]*work.v[146])*work.d_inv[147];
  work.L[387] = (-work.L[386]*work.v[146])*work.d_inv[147];
  work.L[393] = (work.KKT[443])*work.d_inv[147];
  work.v[140] = work.L[357]*work.d[140];
  work.v[141] = work.L[358]*work.d[141];
  work.v[142] = work.L[359]*work.d[142];
  work.v[143] = work.L[360]*work.d[143];
  work.v[144] = work.L[361]*work.d[144];
  work.v[145] = work.L[362]*work.d[145];
  work.v[146] = work.L[363]*work.d[146];
  work.v[147] = work.L[364]*work.d[147];
  work.v[148] = work.KKT[444]-work.L[357]*work.v[140]-work.L[358]*work.v[141]-work.L[359]*work.v[142]-work.L[360]*work.v[143]-work.L[361]*work.v[144]-work.L[362]*work.v[145]-work.L[363]*work.v[146]-work.L[364]*work.v[147];
  work.d[148] = work.v[148];

  if (work.d[148] < 0)
    work.d[148] = settings.kkt_reg;
  else
    work.d[148] += settings.kkt_reg;
  work.d_inv[148] = 1/work.d[148];

  work.L[378] = (work.KKT[445]-work.L[370]*work.v[140]-work.L[371]*work.v[141]-work.L[372]*work.v[142]-work.L[373]*work.v[143]-work.L[374]*work.v[144]-work.L[375]*work.v[145]-work.L[376]*work.v[146]-work.L[377]*work.v[147])*work.d_inv[148];
  work.L[382] = (-work.L[379]*work.v[145]-work.L[380]*work.v[146]-work.L[381]*work.v[147])*work.d_inv[148];
  work.L[388] = (-work.L[386]*work.v[146]-work.L[387]*work.v[147])*work.d_inv[148];
  work.L[394] = (-work.L[393]*work.v[147])*work.d_inv[148];
  work.L[400] = (work.KKT[446])*work.d_inv[148];
  work.v[54] = work.L[365]*work.d[54];
  work.v[76] = work.L[366]*work.d[76];
  work.v[149] = work.KKT[447]-work.L[365]*work.v[54]-work.L[366]*work.v[76];
  work.d[149] = work.v[149];

  if (work.d[149] < 0)
    work.d[149] = settings.kkt_reg;
  else
    work.d[149] += settings.kkt_reg;
  work.d_inv[149] = 1/work.d[149];

  work.L[369] = (work.KKT[448])*work.d_inv[149];
  work.L[383] = (work.KKT[449])*work.d_inv[149];
  work.L[389] = (work.KKT[450])*work.d_inv[149];
  work.L[395] = (work.KKT[451])*work.d_inv[149];
  work.L[401] = (work.KKT[452])*work.d_inv[149];
  work.L[407] = (work.KKT[453])*work.d_inv[149];
  work.v[55] = work.L[367]*work.d[55];
  work.v[77] = work.L[368]*work.d[77];
  work.v[149] = work.L[369]*work.d[149];
  work.v[150] = work.KKT[454]-work.L[367]*work.v[55]-work.L[368]*work.v[77]-work.L[369]*work.v[149];
  work.d[150] = work.v[150];

  if (work.d[150] < 0)
    work.d[150] = settings.kkt_reg;
  else
    work.d[150] += settings.kkt_reg;
  work.d_inv[150] = 1/work.d[150];

  work.L[384] = (work.KKT[455]-work.L[383]*work.v[149])*work.d_inv[150];
  work.L[390] = (work.KKT[456]-work.L[389]*work.v[149])*work.d_inv[150];
  work.L[396] = (work.KKT[457]-work.L[395]*work.v[149])*work.d_inv[150];
  work.L[402] = (work.KKT[458]-work.L[401]*work.v[149])*work.d_inv[150];
  work.L[408] = (work.KKT[459]-work.L[407]*work.v[149])*work.d_inv[150];
  work.v[140] = work.L[370]*work.d[140];
  work.v[141] = work.L[371]*work.d[141];
  work.v[142] = work.L[372]*work.d[142];
  work.v[143] = work.L[373]*work.d[143];
  work.v[144] = work.L[374]*work.d[144];
  work.v[145] = work.L[375]*work.d[145];
  work.v[146] = work.L[376]*work.d[146];
  work.v[147] = work.L[377]*work.d[147];
  work.v[148] = work.L[378]*work.d[148];
  work.v[151] = work.KKT[460]-work.L[370]*work.v[140]-work.L[371]*work.v[141]-work.L[372]*work.v[142]-work.L[373]*work.v[143]-work.L[374]*work.v[144]-work.L[375]*work.v[145]-work.L[376]*work.v[146]-work.L[377]*work.v[147]-work.L[378]*work.v[148];
  work.d[151] = work.v[151];

  if (work.d[151] < 0)
    work.d[151] = settings.kkt_reg;
  else
    work.d[151] += settings.kkt_reg;
  work.d_inv[151] = 1/work.d[151];

  work.L[385] = (-work.L[379]*work.v[145]-work.L[380]*work.v[146]-work.L[381]*work.v[147]-work.L[382]*work.v[148])*work.d_inv[151];
  work.L[391] = (-work.L[386]*work.v[146]-work.L[387]*work.v[147]-work.L[388]*work.v[148])*work.d_inv[151];
  work.L[397] = (-work.L[393]*work.v[147]-work.L[394]*work.v[148])*work.d_inv[151];
  work.L[403] = (-work.L[400]*work.v[148])*work.d_inv[151];
  work.L[409] = (work.KKT[461])*work.d_inv[151];
  work.v[145] = work.L[379]*work.d[145];
  work.v[146] = work.L[380]*work.d[146];
  work.v[147] = work.L[381]*work.d[147];
  work.v[148] = work.L[382]*work.d[148];
  work.v[149] = work.L[383]*work.d[149];
  work.v[150] = work.L[384]*work.d[150];
  work.v[151] = work.L[385]*work.d[151];
  work.v[152] = 0-work.L[379]*work.v[145]-work.L[380]*work.v[146]-work.L[381]*work.v[147]-work.L[382]*work.v[148]-work.L[383]*work.v[149]-work.L[384]*work.v[150]-work.L[385]*work.v[151];
  work.d[152] = work.v[152];

  if (work.d[152] > 0)
    work.d[152] = -settings.kkt_reg;
  else
    work.d[152] -= settings.kkt_reg;

  work.d_inv[152] = 1/work.d[152];

  work.L[392] = (-work.L[386]*work.v[146]-work.L[387]*work.v[147]-work.L[388]*work.v[148]-work.L[389]*work.v[149]-work.L[390]*work.v[150]-work.L[391]*work.v[151])*work.d_inv[152];
  work.L[398] = (-work.L[393]*work.v[147]-work.L[394]*work.v[148]-work.L[395]*work.v[149]-work.L[396]*work.v[150]-work.L[397]*work.v[151])*work.d_inv[152];
  work.L[404] = (-work.L[400]*work.v[148]-work.L[401]*work.v[149]-work.L[402]*work.v[150]-work.L[403]*work.v[151])*work.d_inv[152];
  work.L[410] = (-work.L[407]*work.v[149]-work.L[408]*work.v[150]-work.L[409]*work.v[151])*work.d_inv[152];
  work.L[414] = (work.KKT[462])*work.d_inv[152];
  work.L[419] = (work.KKT[463])*work.d_inv[152];
  work.L[425] = (work.KKT[464])*work.d_inv[152];
  work.L[432] = (work.KKT[465])*work.d_inv[152];
  work.L[445] = (work.KKT[466])*work.d_inv[152];
  work.v[146] = work.L[386]*work.d[146];
  work.v[147] = work.L[387]*work.d[147];
  work.v[148] = work.L[388]*work.d[148];
  work.v[149] = work.L[389]*work.d[149];
  work.v[150] = work.L[390]*work.d[150];
  work.v[151] = work.L[391]*work.d[151];
  work.v[152] = work.L[392]*work.d[152];
  work.v[153] = 0-work.L[386]*work.v[146]-work.L[387]*work.v[147]-work.L[388]*work.v[148]-work.L[389]*work.v[149]-work.L[390]*work.v[150]-work.L[391]*work.v[151]-work.L[392]*work.v[152];
  work.d[153] = work.v[153];

  if (work.d[153] > 0)
    work.d[153] = -settings.kkt_reg;
  else
    work.d[153] -= settings.kkt_reg;

  work.d_inv[153] = 1/work.d[153];

  work.L[399] = (-work.L[393]*work.v[147]-work.L[394]*work.v[148]-work.L[395]*work.v[149]-work.L[396]*work.v[150]-work.L[397]*work.v[151]-work.L[398]*work.v[152])*work.d_inv[153];
  work.L[405] = (-work.L[400]*work.v[148]-work.L[401]*work.v[149]-work.L[402]*work.v[150]-work.L[403]*work.v[151]-work.L[404]*work.v[152])*work.d_inv[153];
  work.L[411] = (-work.L[407]*work.v[149]-work.L[408]*work.v[150]-work.L[409]*work.v[151]-work.L[410]*work.v[152])*work.d_inv[153];
  work.L[415] = (work.KKT[467]-work.L[414]*work.v[152])*work.d_inv[153];
  work.L[420] = (work.KKT[468]-work.L[419]*work.v[152])*work.d_inv[153];
  work.L[426] = (work.KKT[469]-work.L[425]*work.v[152])*work.d_inv[153];
  work.L[433] = (work.KKT[470]-work.L[432]*work.v[152])*work.d_inv[153];
  work.L[446] = (work.KKT[471]-work.L[445]*work.v[152])*work.d_inv[153];
  work.v[147] = work.L[393]*work.d[147];
  work.v[148] = work.L[394]*work.d[148];
  work.v[149] = work.L[395]*work.d[149];
  work.v[150] = work.L[396]*work.d[150];
  work.v[151] = work.L[397]*work.d[151];
  work.v[152] = work.L[398]*work.d[152];
  work.v[153] = work.L[399]*work.d[153];
  work.v[154] = 0-work.L[393]*work.v[147]-work.L[394]*work.v[148]-work.L[395]*work.v[149]-work.L[396]*work.v[150]-work.L[397]*work.v[151]-work.L[398]*work.v[152]-work.L[399]*work.v[153];
  work.d[154] = work.v[154];

  if (work.d[154] > 0)
    work.d[154] = -settings.kkt_reg;
  else
    work.d[154] -= settings.kkt_reg;

  work.d_inv[154] = 1/work.d[154];

  work.L[406] = (-work.L[400]*work.v[148]-work.L[401]*work.v[149]-work.L[402]*work.v[150]-work.L[403]*work.v[151]-work.L[404]*work.v[152]-work.L[405]*work.v[153])*work.d_inv[154];
  work.L[412] = (-work.L[407]*work.v[149]-work.L[408]*work.v[150]-work.L[409]*work.v[151]-work.L[410]*work.v[152]-work.L[411]*work.v[153])*work.d_inv[154];
  work.L[416] = (work.KKT[472]-work.L[414]*work.v[152]-work.L[415]*work.v[153])*work.d_inv[154];
  work.L[421] = (work.KKT[473]-work.L[419]*work.v[152]-work.L[420]*work.v[153])*work.d_inv[154];
  work.L[427] = (work.KKT[474]-work.L[425]*work.v[152]-work.L[426]*work.v[153])*work.d_inv[154];
  work.L[434] = (work.KKT[475]-work.L[432]*work.v[152]-work.L[433]*work.v[153])*work.d_inv[154];
  work.L[447] = (work.KKT[476]-work.L[445]*work.v[152]-work.L[446]*work.v[153])*work.d_inv[154];
  work.v[148] = work.L[400]*work.d[148];
  work.v[149] = work.L[401]*work.d[149];
  work.v[150] = work.L[402]*work.d[150];
  work.v[151] = work.L[403]*work.d[151];
  work.v[152] = work.L[404]*work.d[152];
  work.v[153] = work.L[405]*work.d[153];
  work.v[154] = work.L[406]*work.d[154];
  work.v[155] = 0-work.L[400]*work.v[148]-work.L[401]*work.v[149]-work.L[402]*work.v[150]-work.L[403]*work.v[151]-work.L[404]*work.v[152]-work.L[405]*work.v[153]-work.L[406]*work.v[154];
  work.d[155] = work.v[155];

  if (work.d[155] > 0)
    work.d[155] = -settings.kkt_reg;
  else
    work.d[155] -= settings.kkt_reg;

  work.d_inv[155] = 1/work.d[155];

  work.L[413] = (-work.L[407]*work.v[149]-work.L[408]*work.v[150]-work.L[409]*work.v[151]-work.L[410]*work.v[152]-work.L[411]*work.v[153]-work.L[412]*work.v[154])*work.d_inv[155];
  work.L[417] = (work.KKT[477]-work.L[414]*work.v[152]-work.L[415]*work.v[153]-work.L[416]*work.v[154])*work.d_inv[155];
  work.L[422] = (work.KKT[478]-work.L[419]*work.v[152]-work.L[420]*work.v[153]-work.L[421]*work.v[154])*work.d_inv[155];
  work.L[428] = (work.KKT[479]-work.L[425]*work.v[152]-work.L[426]*work.v[153]-work.L[427]*work.v[154])*work.d_inv[155];
  work.L[435] = (work.KKT[480]-work.L[432]*work.v[152]-work.L[433]*work.v[153]-work.L[434]*work.v[154])*work.d_inv[155];
  work.L[448] = (work.KKT[481]-work.L[445]*work.v[152]-work.L[446]*work.v[153]-work.L[447]*work.v[154])*work.d_inv[155];
  work.v[149] = work.L[407]*work.d[149];
  work.v[150] = work.L[408]*work.d[150];
  work.v[151] = work.L[409]*work.d[151];
  work.v[152] = work.L[410]*work.d[152];
  work.v[153] = work.L[411]*work.d[153];
  work.v[154] = work.L[412]*work.d[154];
  work.v[155] = work.L[413]*work.d[155];
  work.v[156] = 0-work.L[407]*work.v[149]-work.L[408]*work.v[150]-work.L[409]*work.v[151]-work.L[410]*work.v[152]-work.L[411]*work.v[153]-work.L[412]*work.v[154]-work.L[413]*work.v[155];
  work.d[156] = work.v[156];

  if (work.d[156] > 0)
    work.d[156] = -settings.kkt_reg;
  else
    work.d[156] -= settings.kkt_reg;

  work.d_inv[156] = 1/work.d[156];

  work.L[418] = (work.KKT[482]-work.L[414]*work.v[152]-work.L[415]*work.v[153]-work.L[416]*work.v[154]-work.L[417]*work.v[155])*work.d_inv[156];
  work.L[423] = (work.KKT[483]-work.L[419]*work.v[152]-work.L[420]*work.v[153]-work.L[421]*work.v[154]-work.L[422]*work.v[155])*work.d_inv[156];
  work.L[429] = (work.KKT[484]-work.L[425]*work.v[152]-work.L[426]*work.v[153]-work.L[427]*work.v[154]-work.L[428]*work.v[155])*work.d_inv[156];
  work.L[436] = (work.KKT[485]-work.L[432]*work.v[152]-work.L[433]*work.v[153]-work.L[434]*work.v[154]-work.L[435]*work.v[155])*work.d_inv[156];
  work.L[449] = (work.KKT[486]-work.L[445]*work.v[152]-work.L[446]*work.v[153]-work.L[447]*work.v[154]-work.L[448]*work.v[155])*work.d_inv[156];
  work.v[152] = work.L[414]*work.d[152];
  work.v[153] = work.L[415]*work.d[153];
  work.v[154] = work.L[416]*work.d[154];
  work.v[155] = work.L[417]*work.d[155];
  work.v[156] = work.L[418]*work.d[156];
  work.v[157] = work.KKT[487]-work.L[414]*work.v[152]-work.L[415]*work.v[153]-work.L[416]*work.v[154]-work.L[417]*work.v[155]-work.L[418]*work.v[156];
  work.d[157] = work.v[157];

  if (work.d[157] < 0)
    work.d[157] = settings.kkt_reg;
  else
    work.d[157] += settings.kkt_reg;
  work.d_inv[157] = 1/work.d[157];

  work.L[424] = (work.KKT[488]-work.L[419]*work.v[152]-work.L[420]*work.v[153]-work.L[421]*work.v[154]-work.L[422]*work.v[155]-work.L[423]*work.v[156])*work.d_inv[157];
  work.L[430] = (work.KKT[489]-work.L[425]*work.v[152]-work.L[426]*work.v[153]-work.L[427]*work.v[154]-work.L[428]*work.v[155]-work.L[429]*work.v[156])*work.d_inv[157];
  work.L[437] = (work.KKT[490]-work.L[432]*work.v[152]-work.L[433]*work.v[153]-work.L[434]*work.v[154]-work.L[435]*work.v[155]-work.L[436]*work.v[156])*work.d_inv[157];
  work.L[450] = (work.KKT[491]-work.L[445]*work.v[152]-work.L[446]*work.v[153]-work.L[447]*work.v[154]-work.L[448]*work.v[155]-work.L[449]*work.v[156])*work.d_inv[157];
  work.L[454] = (work.KKT[492])*work.d_inv[157];
  work.v[152] = work.L[419]*work.d[152];
  work.v[153] = work.L[420]*work.d[153];
  work.v[154] = work.L[421]*work.d[154];
  work.v[155] = work.L[422]*work.d[155];
  work.v[156] = work.L[423]*work.d[156];
  work.v[157] = work.L[424]*work.d[157];
  work.v[158] = work.KKT[493]-work.L[419]*work.v[152]-work.L[420]*work.v[153]-work.L[421]*work.v[154]-work.L[422]*work.v[155]-work.L[423]*work.v[156]-work.L[424]*work.v[157];
  work.d[158] = work.v[158];

  if (work.d[158] < 0)
    work.d[158] = settings.kkt_reg;
  else
    work.d[158] += settings.kkt_reg;
  work.d_inv[158] = 1/work.d[158];

  work.L[431] = (work.KKT[494]-work.L[425]*work.v[152]-work.L[426]*work.v[153]-work.L[427]*work.v[154]-work.L[428]*work.v[155]-work.L[429]*work.v[156]-work.L[430]*work.v[157])*work.d_inv[158];
  work.L[438] = (work.KKT[495]-work.L[432]*work.v[152]-work.L[433]*work.v[153]-work.L[434]*work.v[154]-work.L[435]*work.v[155]-work.L[436]*work.v[156]-work.L[437]*work.v[157])*work.d_inv[158];
  work.L[451] = (work.KKT[496]-work.L[445]*work.v[152]-work.L[446]*work.v[153]-work.L[447]*work.v[154]-work.L[448]*work.v[155]-work.L[449]*work.v[156]-work.L[450]*work.v[157])*work.d_inv[158];
  work.L[455] = (-work.L[454]*work.v[157])*work.d_inv[158];
  work.L[461] = (work.KKT[497])*work.d_inv[158];
  work.v[152] = work.L[425]*work.d[152];
  work.v[153] = work.L[426]*work.d[153];
  work.v[154] = work.L[427]*work.d[154];
  work.v[155] = work.L[428]*work.d[155];
  work.v[156] = work.L[429]*work.d[156];
  work.v[157] = work.L[430]*work.d[157];
  work.v[158] = work.L[431]*work.d[158];
  work.v[159] = work.KKT[498]-work.L[425]*work.v[152]-work.L[426]*work.v[153]-work.L[427]*work.v[154]-work.L[428]*work.v[155]-work.L[429]*work.v[156]-work.L[430]*work.v[157]-work.L[431]*work.v[158];
  work.d[159] = work.v[159];

  if (work.d[159] < 0)
    work.d[159] = settings.kkt_reg;
  else
    work.d[159] += settings.kkt_reg;
  work.d_inv[159] = 1/work.d[159];

  work.L[439] = (work.KKT[499]-work.L[432]*work.v[152]-work.L[433]*work.v[153]-work.L[434]*work.v[154]-work.L[435]*work.v[155]-work.L[436]*work.v[156]-work.L[437]*work.v[157]-work.L[438]*work.v[158])*work.d_inv[159];
  work.L[452] = (work.KKT[500]-work.L[445]*work.v[152]-work.L[446]*work.v[153]-work.L[447]*work.v[154]-work.L[448]*work.v[155]-work.L[449]*work.v[156]-work.L[450]*work.v[157]-work.L[451]*work.v[158])*work.d_inv[159];
  work.L[456] = (-work.L[454]*work.v[157]-work.L[455]*work.v[158])*work.d_inv[159];
  work.L[462] = (-work.L[461]*work.v[158])*work.d_inv[159];
  work.L[468] = (work.KKT[501])*work.d_inv[159];
  work.v[152] = work.L[432]*work.d[152];
  work.v[153] = work.L[433]*work.d[153];
  work.v[154] = work.L[434]*work.d[154];
  work.v[155] = work.L[435]*work.d[155];
  work.v[156] = work.L[436]*work.d[156];
  work.v[157] = work.L[437]*work.d[157];
  work.v[158] = work.L[438]*work.d[158];
  work.v[159] = work.L[439]*work.d[159];
  work.v[160] = work.KKT[502]-work.L[432]*work.v[152]-work.L[433]*work.v[153]-work.L[434]*work.v[154]-work.L[435]*work.v[155]-work.L[436]*work.v[156]-work.L[437]*work.v[157]-work.L[438]*work.v[158]-work.L[439]*work.v[159];
  work.d[160] = work.v[160];

  if (work.d[160] < 0)
    work.d[160] = settings.kkt_reg;
  else
    work.d[160] += settings.kkt_reg;
  work.d_inv[160] = 1/work.d[160];

  work.L[453] = (work.KKT[503]-work.L[445]*work.v[152]-work.L[446]*work.v[153]-work.L[447]*work.v[154]-work.L[448]*work.v[155]-work.L[449]*work.v[156]-work.L[450]*work.v[157]-work.L[451]*work.v[158]-work.L[452]*work.v[159])*work.d_inv[160];
  work.L[457] = (-work.L[454]*work.v[157]-work.L[455]*work.v[158]-work.L[456]*work.v[159])*work.d_inv[160];
  work.L[463] = (-work.L[461]*work.v[158]-work.L[462]*work.v[159])*work.d_inv[160];
  work.L[469] = (-work.L[468]*work.v[159])*work.d_inv[160];
  work.L[475] = (work.KKT[504])*work.d_inv[160];
  work.v[52] = work.L[440]*work.d[52];
  work.v[74] = work.L[441]*work.d[74];
  work.v[161] = work.KKT[505]-work.L[440]*work.v[52]-work.L[441]*work.v[74];
  work.d[161] = work.v[161];

  if (work.d[161] < 0)
    work.d[161] = settings.kkt_reg;
  else
    work.d[161] += settings.kkt_reg;
  work.d_inv[161] = 1/work.d[161];

  work.L[444] = (work.KKT[506])*work.d_inv[161];
  work.L[458] = (work.KKT[507])*work.d_inv[161];
  work.L[464] = (work.KKT[508])*work.d_inv[161];
  work.L[470] = (work.KKT[509])*work.d_inv[161];
  work.L[476] = (work.KKT[510])*work.d_inv[161];
  work.L[482] = (work.KKT[511])*work.d_inv[161];
  work.v[53] = work.L[442]*work.d[53];
  work.v[75] = work.L[443]*work.d[75];
  work.v[161] = work.L[444]*work.d[161];
  work.v[162] = work.KKT[512]-work.L[442]*work.v[53]-work.L[443]*work.v[75]-work.L[444]*work.v[161];
  work.d[162] = work.v[162];

  if (work.d[162] < 0)
    work.d[162] = settings.kkt_reg;
  else
    work.d[162] += settings.kkt_reg;
  work.d_inv[162] = 1/work.d[162];

  work.L[459] = (work.KKT[513]-work.L[458]*work.v[161])*work.d_inv[162];
  work.L[465] = (work.KKT[514]-work.L[464]*work.v[161])*work.d_inv[162];
  work.L[471] = (work.KKT[515]-work.L[470]*work.v[161])*work.d_inv[162];
  work.L[477] = (work.KKT[516]-work.L[476]*work.v[161])*work.d_inv[162];
  work.L[483] = (work.KKT[517]-work.L[482]*work.v[161])*work.d_inv[162];
  work.v[152] = work.L[445]*work.d[152];
  work.v[153] = work.L[446]*work.d[153];
  work.v[154] = work.L[447]*work.d[154];
  work.v[155] = work.L[448]*work.d[155];
  work.v[156] = work.L[449]*work.d[156];
  work.v[157] = work.L[450]*work.d[157];
  work.v[158] = work.L[451]*work.d[158];
  work.v[159] = work.L[452]*work.d[159];
  work.v[160] = work.L[453]*work.d[160];
  work.v[163] = work.KKT[518]-work.L[445]*work.v[152]-work.L[446]*work.v[153]-work.L[447]*work.v[154]-work.L[448]*work.v[155]-work.L[449]*work.v[156]-work.L[450]*work.v[157]-work.L[451]*work.v[158]-work.L[452]*work.v[159]-work.L[453]*work.v[160];
  work.d[163] = work.v[163];

  if (work.d[163] < 0)
    work.d[163] = settings.kkt_reg;
  else
    work.d[163] += settings.kkt_reg;
  work.d_inv[163] = 1/work.d[163];

  work.L[460] = (-work.L[454]*work.v[157]-work.L[455]*work.v[158]-work.L[456]*work.v[159]-work.L[457]*work.v[160])*work.d_inv[163];
  work.L[466] = (-work.L[461]*work.v[158]-work.L[462]*work.v[159]-work.L[463]*work.v[160])*work.d_inv[163];
  work.L[472] = (-work.L[468]*work.v[159]-work.L[469]*work.v[160])*work.d_inv[163];
  work.L[478] = (-work.L[475]*work.v[160])*work.d_inv[163];
  work.L[484] = (work.KKT[519])*work.d_inv[163];
  work.v[157] = work.L[454]*work.d[157];
  work.v[158] = work.L[455]*work.d[158];
  work.v[159] = work.L[456]*work.d[159];
  work.v[160] = work.L[457]*work.d[160];
  work.v[161] = work.L[458]*work.d[161];
  work.v[162] = work.L[459]*work.d[162];
  work.v[163] = work.L[460]*work.d[163];
  work.v[164] = 0-work.L[454]*work.v[157]-work.L[455]*work.v[158]-work.L[456]*work.v[159]-work.L[457]*work.v[160]-work.L[458]*work.v[161]-work.L[459]*work.v[162]-work.L[460]*work.v[163];
  work.d[164] = work.v[164];

  if (work.d[164] > 0)
    work.d[164] = -settings.kkt_reg;
  else
    work.d[164] -= settings.kkt_reg;

  work.d_inv[164] = 1/work.d[164];

  work.L[467] = (-work.L[461]*work.v[158]-work.L[462]*work.v[159]-work.L[463]*work.v[160]-work.L[464]*work.v[161]-work.L[465]*work.v[162]-work.L[466]*work.v[163])*work.d_inv[164];
  work.L[473] = (-work.L[468]*work.v[159]-work.L[469]*work.v[160]-work.L[470]*work.v[161]-work.L[471]*work.v[162]-work.L[472]*work.v[163])*work.d_inv[164];
  work.L[479] = (-work.L[475]*work.v[160]-work.L[476]*work.v[161]-work.L[477]*work.v[162]-work.L[478]*work.v[163])*work.d_inv[164];
  work.L[485] = (-work.L[482]*work.v[161]-work.L[483]*work.v[162]-work.L[484]*work.v[163])*work.d_inv[164];
  work.L[489] = (work.KKT[520])*work.d_inv[164];
  work.L[494] = (work.KKT[521])*work.d_inv[164];
  work.L[500] = (work.KKT[522])*work.d_inv[164];
  work.L[507] = (work.KKT[523])*work.d_inv[164];
  work.L[520] = (work.KKT[524])*work.d_inv[164];
  work.v[158] = work.L[461]*work.d[158];
  work.v[159] = work.L[462]*work.d[159];
  work.v[160] = work.L[463]*work.d[160];
  work.v[161] = work.L[464]*work.d[161];
  work.v[162] = work.L[465]*work.d[162];
  work.v[163] = work.L[466]*work.d[163];
  work.v[164] = work.L[467]*work.d[164];
  work.v[165] = 0-work.L[461]*work.v[158]-work.L[462]*work.v[159]-work.L[463]*work.v[160]-work.L[464]*work.v[161]-work.L[465]*work.v[162]-work.L[466]*work.v[163]-work.L[467]*work.v[164];
  work.d[165] = work.v[165];

  if (work.d[165] > 0)
    work.d[165] = -settings.kkt_reg;
  else
    work.d[165] -= settings.kkt_reg;

  work.d_inv[165] = 1/work.d[165];

  work.L[474] = (-work.L[468]*work.v[159]-work.L[469]*work.v[160]-work.L[470]*work.v[161]-work.L[471]*work.v[162]-work.L[472]*work.v[163]-work.L[473]*work.v[164])*work.d_inv[165];
  work.L[480] = (-work.L[475]*work.v[160]-work.L[476]*work.v[161]-work.L[477]*work.v[162]-work.L[478]*work.v[163]-work.L[479]*work.v[164])*work.d_inv[165];
  work.L[486] = (-work.L[482]*work.v[161]-work.L[483]*work.v[162]-work.L[484]*work.v[163]-work.L[485]*work.v[164])*work.d_inv[165];
  work.L[490] = (work.KKT[525]-work.L[489]*work.v[164])*work.d_inv[165];
  work.L[495] = (work.KKT[526]-work.L[494]*work.v[164])*work.d_inv[165];
  work.L[501] = (work.KKT[527]-work.L[500]*work.v[164])*work.d_inv[165];
  work.L[508] = (work.KKT[528]-work.L[507]*work.v[164])*work.d_inv[165];
  work.L[521] = (work.KKT[529]-work.L[520]*work.v[164])*work.d_inv[165];
  work.v[159] = work.L[468]*work.d[159];
  work.v[160] = work.L[469]*work.d[160];
  work.v[161] = work.L[470]*work.d[161];
  work.v[162] = work.L[471]*work.d[162];
  work.v[163] = work.L[472]*work.d[163];
  work.v[164] = work.L[473]*work.d[164];
  work.v[165] = work.L[474]*work.d[165];
  work.v[166] = 0-work.L[468]*work.v[159]-work.L[469]*work.v[160]-work.L[470]*work.v[161]-work.L[471]*work.v[162]-work.L[472]*work.v[163]-work.L[473]*work.v[164]-work.L[474]*work.v[165];
  work.d[166] = work.v[166];

  if (work.d[166] > 0)
    work.d[166] = -settings.kkt_reg;
  else
    work.d[166] -= settings.kkt_reg;

  work.d_inv[166] = 1/work.d[166];

  work.L[481] = (-work.L[475]*work.v[160]-work.L[476]*work.v[161]-work.L[477]*work.v[162]-work.L[478]*work.v[163]-work.L[479]*work.v[164]-work.L[480]*work.v[165])*work.d_inv[166];
  work.L[487] = (-work.L[482]*work.v[161]-work.L[483]*work.v[162]-work.L[484]*work.v[163]-work.L[485]*work.v[164]-work.L[486]*work.v[165])*work.d_inv[166];
  work.L[491] = (work.KKT[530]-work.L[489]*work.v[164]-work.L[490]*work.v[165])*work.d_inv[166];
  work.L[496] = (work.KKT[531]-work.L[494]*work.v[164]-work.L[495]*work.v[165])*work.d_inv[166];
  work.L[502] = (work.KKT[532]-work.L[500]*work.v[164]-work.L[501]*work.v[165])*work.d_inv[166];
  work.L[509] = (work.KKT[533]-work.L[507]*work.v[164]-work.L[508]*work.v[165])*work.d_inv[166];
  work.L[522] = (work.KKT[534]-work.L[520]*work.v[164]-work.L[521]*work.v[165])*work.d_inv[166];
  work.v[160] = work.L[475]*work.d[160];
  work.v[161] = work.L[476]*work.d[161];
  work.v[162] = work.L[477]*work.d[162];
  work.v[163] = work.L[478]*work.d[163];
  work.v[164] = work.L[479]*work.d[164];
  work.v[165] = work.L[480]*work.d[165];
  work.v[166] = work.L[481]*work.d[166];
  work.v[167] = 0-work.L[475]*work.v[160]-work.L[476]*work.v[161]-work.L[477]*work.v[162]-work.L[478]*work.v[163]-work.L[479]*work.v[164]-work.L[480]*work.v[165]-work.L[481]*work.v[166];
  work.d[167] = work.v[167];

  if (work.d[167] > 0)
    work.d[167] = -settings.kkt_reg;
  else
    work.d[167] -= settings.kkt_reg;

  work.d_inv[167] = 1/work.d[167];

  work.L[488] = (-work.L[482]*work.v[161]-work.L[483]*work.v[162]-work.L[484]*work.v[163]-work.L[485]*work.v[164]-work.L[486]*work.v[165]-work.L[487]*work.v[166])*work.d_inv[167];
  work.L[492] = (work.KKT[535]-work.L[489]*work.v[164]-work.L[490]*work.v[165]-work.L[491]*work.v[166])*work.d_inv[167];
  work.L[497] = (work.KKT[536]-work.L[494]*work.v[164]-work.L[495]*work.v[165]-work.L[496]*work.v[166])*work.d_inv[167];
  work.L[503] = (work.KKT[537]-work.L[500]*work.v[164]-work.L[501]*work.v[165]-work.L[502]*work.v[166])*work.d_inv[167];
  work.L[510] = (work.KKT[538]-work.L[507]*work.v[164]-work.L[508]*work.v[165]-work.L[509]*work.v[166])*work.d_inv[167];
  work.L[523] = (work.KKT[539]-work.L[520]*work.v[164]-work.L[521]*work.v[165]-work.L[522]*work.v[166])*work.d_inv[167];
  work.v[161] = work.L[482]*work.d[161];
  work.v[162] = work.L[483]*work.d[162];
  work.v[163] = work.L[484]*work.d[163];
  work.v[164] = work.L[485]*work.d[164];
  work.v[165] = work.L[486]*work.d[165];
  work.v[166] = work.L[487]*work.d[166];
  work.v[167] = work.L[488]*work.d[167];
  work.v[168] = 0-work.L[482]*work.v[161]-work.L[483]*work.v[162]-work.L[484]*work.v[163]-work.L[485]*work.v[164]-work.L[486]*work.v[165]-work.L[487]*work.v[166]-work.L[488]*work.v[167];
  work.d[168] = work.v[168];

  if (work.d[168] > 0)
    work.d[168] = -settings.kkt_reg;
  else
    work.d[168] -= settings.kkt_reg;

  work.d_inv[168] = 1/work.d[168];

  work.L[493] = (work.KKT[540]-work.L[489]*work.v[164]-work.L[490]*work.v[165]-work.L[491]*work.v[166]-work.L[492]*work.v[167])*work.d_inv[168];
  work.L[498] = (work.KKT[541]-work.L[494]*work.v[164]-work.L[495]*work.v[165]-work.L[496]*work.v[166]-work.L[497]*work.v[167])*work.d_inv[168];
  work.L[504] = (work.KKT[542]-work.L[500]*work.v[164]-work.L[501]*work.v[165]-work.L[502]*work.v[166]-work.L[503]*work.v[167])*work.d_inv[168];
  work.L[511] = (work.KKT[543]-work.L[507]*work.v[164]-work.L[508]*work.v[165]-work.L[509]*work.v[166]-work.L[510]*work.v[167])*work.d_inv[168];
  work.L[524] = (work.KKT[544]-work.L[520]*work.v[164]-work.L[521]*work.v[165]-work.L[522]*work.v[166]-work.L[523]*work.v[167])*work.d_inv[168];
  work.v[164] = work.L[489]*work.d[164];
  work.v[165] = work.L[490]*work.d[165];
  work.v[166] = work.L[491]*work.d[166];
  work.v[167] = work.L[492]*work.d[167];
  work.v[168] = work.L[493]*work.d[168];
  work.v[169] = work.KKT[545]-work.L[489]*work.v[164]-work.L[490]*work.v[165]-work.L[491]*work.v[166]-work.L[492]*work.v[167]-work.L[493]*work.v[168];
  work.d[169] = work.v[169];

  if (work.d[169] < 0)
    work.d[169] = settings.kkt_reg;
  else
    work.d[169] += settings.kkt_reg;
  work.d_inv[169] = 1/work.d[169];

  work.L[499] = (work.KKT[546]-work.L[494]*work.v[164]-work.L[495]*work.v[165]-work.L[496]*work.v[166]-work.L[497]*work.v[167]-work.L[498]*work.v[168])*work.d_inv[169];
  work.L[505] = (work.KKT[547]-work.L[500]*work.v[164]-work.L[501]*work.v[165]-work.L[502]*work.v[166]-work.L[503]*work.v[167]-work.L[504]*work.v[168])*work.d_inv[169];
  work.L[512] = (work.KKT[548]-work.L[507]*work.v[164]-work.L[508]*work.v[165]-work.L[509]*work.v[166]-work.L[510]*work.v[167]-work.L[511]*work.v[168])*work.d_inv[169];
  work.L[525] = (work.KKT[549]-work.L[520]*work.v[164]-work.L[521]*work.v[165]-work.L[522]*work.v[166]-work.L[523]*work.v[167]-work.L[524]*work.v[168])*work.d_inv[169];
  work.L[529] = (work.KKT[550])*work.d_inv[169];
  work.v[164] = work.L[494]*work.d[164];
  work.v[165] = work.L[495]*work.d[165];
  work.v[166] = work.L[496]*work.d[166];
  work.v[167] = work.L[497]*work.d[167];
  work.v[168] = work.L[498]*work.d[168];
  work.v[169] = work.L[499]*work.d[169];
  work.v[170] = work.KKT[551]-work.L[494]*work.v[164]-work.L[495]*work.v[165]-work.L[496]*work.v[166]-work.L[497]*work.v[167]-work.L[498]*work.v[168]-work.L[499]*work.v[169];
  work.d[170] = work.v[170];

  if (work.d[170] < 0)
    work.d[170] = settings.kkt_reg;
  else
    work.d[170] += settings.kkt_reg;
  work.d_inv[170] = 1/work.d[170];

  work.L[506] = (work.KKT[552]-work.L[500]*work.v[164]-work.L[501]*work.v[165]-work.L[502]*work.v[166]-work.L[503]*work.v[167]-work.L[504]*work.v[168]-work.L[505]*work.v[169])*work.d_inv[170];
  work.L[513] = (work.KKT[553]-work.L[507]*work.v[164]-work.L[508]*work.v[165]-work.L[509]*work.v[166]-work.L[510]*work.v[167]-work.L[511]*work.v[168]-work.L[512]*work.v[169])*work.d_inv[170];
  work.L[526] = (work.KKT[554]-work.L[520]*work.v[164]-work.L[521]*work.v[165]-work.L[522]*work.v[166]-work.L[523]*work.v[167]-work.L[524]*work.v[168]-work.L[525]*work.v[169])*work.d_inv[170];
  work.L[530] = (-work.L[529]*work.v[169])*work.d_inv[170];
  work.L[536] = (work.KKT[555])*work.d_inv[170];
  work.v[164] = work.L[500]*work.d[164];
  work.v[165] = work.L[501]*work.d[165];
  work.v[166] = work.L[502]*work.d[166];
  work.v[167] = work.L[503]*work.d[167];
  work.v[168] = work.L[504]*work.d[168];
  work.v[169] = work.L[505]*work.d[169];
  work.v[170] = work.L[506]*work.d[170];
  work.v[171] = work.KKT[556]-work.L[500]*work.v[164]-work.L[501]*work.v[165]-work.L[502]*work.v[166]-work.L[503]*work.v[167]-work.L[504]*work.v[168]-work.L[505]*work.v[169]-work.L[506]*work.v[170];
  work.d[171] = work.v[171];

  if (work.d[171] < 0)
    work.d[171] = settings.kkt_reg;
  else
    work.d[171] += settings.kkt_reg;
  work.d_inv[171] = 1/work.d[171];

  work.L[514] = (work.KKT[557]-work.L[507]*work.v[164]-work.L[508]*work.v[165]-work.L[509]*work.v[166]-work.L[510]*work.v[167]-work.L[511]*work.v[168]-work.L[512]*work.v[169]-work.L[513]*work.v[170])*work.d_inv[171];
  work.L[527] = (work.KKT[558]-work.L[520]*work.v[164]-work.L[521]*work.v[165]-work.L[522]*work.v[166]-work.L[523]*work.v[167]-work.L[524]*work.v[168]-work.L[525]*work.v[169]-work.L[526]*work.v[170])*work.d_inv[171];
  work.L[531] = (-work.L[529]*work.v[169]-work.L[530]*work.v[170])*work.d_inv[171];
  work.L[537] = (-work.L[536]*work.v[170])*work.d_inv[171];
  work.L[543] = (work.KKT[559])*work.d_inv[171];
  work.v[164] = work.L[507]*work.d[164];
  work.v[165] = work.L[508]*work.d[165];
  work.v[166] = work.L[509]*work.d[166];
  work.v[167] = work.L[510]*work.d[167];
  work.v[168] = work.L[511]*work.d[168];
  work.v[169] = work.L[512]*work.d[169];
  work.v[170] = work.L[513]*work.d[170];
  work.v[171] = work.L[514]*work.d[171];
  work.v[172] = work.KKT[560]-work.L[507]*work.v[164]-work.L[508]*work.v[165]-work.L[509]*work.v[166]-work.L[510]*work.v[167]-work.L[511]*work.v[168]-work.L[512]*work.v[169]-work.L[513]*work.v[170]-work.L[514]*work.v[171];
  work.d[172] = work.v[172];

  if (work.d[172] < 0)
    work.d[172] = settings.kkt_reg;
  else
    work.d[172] += settings.kkt_reg;
  work.d_inv[172] = 1/work.d[172];

  work.L[528] = (work.KKT[561]-work.L[520]*work.v[164]-work.L[521]*work.v[165]-work.L[522]*work.v[166]-work.L[523]*work.v[167]-work.L[524]*work.v[168]-work.L[525]*work.v[169]-work.L[526]*work.v[170]-work.L[527]*work.v[171])*work.d_inv[172];
  work.L[532] = (-work.L[529]*work.v[169]-work.L[530]*work.v[170]-work.L[531]*work.v[171])*work.d_inv[172];
  work.L[538] = (-work.L[536]*work.v[170]-work.L[537]*work.v[171])*work.d_inv[172];
  work.L[544] = (-work.L[543]*work.v[171])*work.d_inv[172];
  work.L[550] = (work.KKT[562])*work.d_inv[172];
  work.v[50] = work.L[515]*work.d[50];
  work.v[72] = work.L[516]*work.d[72];
  work.v[173] = work.KKT[563]-work.L[515]*work.v[50]-work.L[516]*work.v[72];
  work.d[173] = work.v[173];

  if (work.d[173] < 0)
    work.d[173] = settings.kkt_reg;
  else
    work.d[173] += settings.kkt_reg;
  work.d_inv[173] = 1/work.d[173];

  work.L[519] = (work.KKT[564])*work.d_inv[173];
  work.L[533] = (work.KKT[565])*work.d_inv[173];
  work.L[539] = (work.KKT[566])*work.d_inv[173];
  work.L[545] = (work.KKT[567])*work.d_inv[173];
  work.L[551] = (work.KKT[568])*work.d_inv[173];
  work.L[557] = (work.KKT[569])*work.d_inv[173];
  work.v[51] = work.L[517]*work.d[51];
  work.v[73] = work.L[518]*work.d[73];
  work.v[173] = work.L[519]*work.d[173];
  work.v[174] = work.KKT[570]-work.L[517]*work.v[51]-work.L[518]*work.v[73]-work.L[519]*work.v[173];
  work.d[174] = work.v[174];

  if (work.d[174] < 0)
    work.d[174] = settings.kkt_reg;
  else
    work.d[174] += settings.kkt_reg;
  work.d_inv[174] = 1/work.d[174];

  work.L[534] = (work.KKT[571]-work.L[533]*work.v[173])*work.d_inv[174];
  work.L[540] = (work.KKT[572]-work.L[539]*work.v[173])*work.d_inv[174];
  work.L[546] = (work.KKT[573]-work.L[545]*work.v[173])*work.d_inv[174];
  work.L[552] = (work.KKT[574]-work.L[551]*work.v[173])*work.d_inv[174];
  work.L[558] = (work.KKT[575]-work.L[557]*work.v[173])*work.d_inv[174];
  work.v[164] = work.L[520]*work.d[164];
  work.v[165] = work.L[521]*work.d[165];
  work.v[166] = work.L[522]*work.d[166];
  work.v[167] = work.L[523]*work.d[167];
  work.v[168] = work.L[524]*work.d[168];
  work.v[169] = work.L[525]*work.d[169];
  work.v[170] = work.L[526]*work.d[170];
  work.v[171] = work.L[527]*work.d[171];
  work.v[172] = work.L[528]*work.d[172];
  work.v[175] = work.KKT[576]-work.L[520]*work.v[164]-work.L[521]*work.v[165]-work.L[522]*work.v[166]-work.L[523]*work.v[167]-work.L[524]*work.v[168]-work.L[525]*work.v[169]-work.L[526]*work.v[170]-work.L[527]*work.v[171]-work.L[528]*work.v[172];
  work.d[175] = work.v[175];

  if (work.d[175] < 0)
    work.d[175] = settings.kkt_reg;
  else
    work.d[175] += settings.kkt_reg;
  work.d_inv[175] = 1/work.d[175];

  work.L[535] = (-work.L[529]*work.v[169]-work.L[530]*work.v[170]-work.L[531]*work.v[171]-work.L[532]*work.v[172])*work.d_inv[175];
  work.L[541] = (-work.L[536]*work.v[170]-work.L[537]*work.v[171]-work.L[538]*work.v[172])*work.d_inv[175];
  work.L[547] = (-work.L[543]*work.v[171]-work.L[544]*work.v[172])*work.d_inv[175];
  work.L[553] = (-work.L[550]*work.v[172])*work.d_inv[175];
  work.L[559] = (work.KKT[577])*work.d_inv[175];
  work.v[169] = work.L[529]*work.d[169];
  work.v[170] = work.L[530]*work.d[170];
  work.v[171] = work.L[531]*work.d[171];
  work.v[172] = work.L[532]*work.d[172];
  work.v[173] = work.L[533]*work.d[173];
  work.v[174] = work.L[534]*work.d[174];
  work.v[175] = work.L[535]*work.d[175];
  work.v[176] = 0-work.L[529]*work.v[169]-work.L[530]*work.v[170]-work.L[531]*work.v[171]-work.L[532]*work.v[172]-work.L[533]*work.v[173]-work.L[534]*work.v[174]-work.L[535]*work.v[175];
  work.d[176] = work.v[176];

  if (work.d[176] > 0)
    work.d[176] = -settings.kkt_reg;
  else
    work.d[176] -= settings.kkt_reg;

  work.d_inv[176] = 1/work.d[176];

  work.L[542] = (-work.L[536]*work.v[170]-work.L[537]*work.v[171]-work.L[538]*work.v[172]-work.L[539]*work.v[173]-work.L[540]*work.v[174]-work.L[541]*work.v[175])*work.d_inv[176];
  work.L[548] = (-work.L[543]*work.v[171]-work.L[544]*work.v[172]-work.L[545]*work.v[173]-work.L[546]*work.v[174]-work.L[547]*work.v[175])*work.d_inv[176];
  work.L[554] = (-work.L[550]*work.v[172]-work.L[551]*work.v[173]-work.L[552]*work.v[174]-work.L[553]*work.v[175])*work.d_inv[176];
  work.L[560] = (-work.L[557]*work.v[173]-work.L[558]*work.v[174]-work.L[559]*work.v[175])*work.d_inv[176];
  work.L[564] = (work.KKT[578])*work.d_inv[176];
  work.L[569] = (work.KKT[579])*work.d_inv[176];
  work.L[575] = (work.KKT[580])*work.d_inv[176];
  work.L[582] = (work.KKT[581])*work.d_inv[176];
  work.L[595] = (work.KKT[582])*work.d_inv[176];
  work.v[170] = work.L[536]*work.d[170];
  work.v[171] = work.L[537]*work.d[171];
  work.v[172] = work.L[538]*work.d[172];
  work.v[173] = work.L[539]*work.d[173];
  work.v[174] = work.L[540]*work.d[174];
  work.v[175] = work.L[541]*work.d[175];
  work.v[176] = work.L[542]*work.d[176];
  work.v[177] = 0-work.L[536]*work.v[170]-work.L[537]*work.v[171]-work.L[538]*work.v[172]-work.L[539]*work.v[173]-work.L[540]*work.v[174]-work.L[541]*work.v[175]-work.L[542]*work.v[176];
  work.d[177] = work.v[177];

  if (work.d[177] > 0)
    work.d[177] = -settings.kkt_reg;
  else
    work.d[177] -= settings.kkt_reg;

  work.d_inv[177] = 1/work.d[177];

  work.L[549] = (-work.L[543]*work.v[171]-work.L[544]*work.v[172]-work.L[545]*work.v[173]-work.L[546]*work.v[174]-work.L[547]*work.v[175]-work.L[548]*work.v[176])*work.d_inv[177];
  work.L[555] = (-work.L[550]*work.v[172]-work.L[551]*work.v[173]-work.L[552]*work.v[174]-work.L[553]*work.v[175]-work.L[554]*work.v[176])*work.d_inv[177];
  work.L[561] = (-work.L[557]*work.v[173]-work.L[558]*work.v[174]-work.L[559]*work.v[175]-work.L[560]*work.v[176])*work.d_inv[177];
  work.L[565] = (work.KKT[583]-work.L[564]*work.v[176])*work.d_inv[177];
  work.L[570] = (work.KKT[584]-work.L[569]*work.v[176])*work.d_inv[177];
  work.L[576] = (work.KKT[585]-work.L[575]*work.v[176])*work.d_inv[177];
  work.L[583] = (work.KKT[586]-work.L[582]*work.v[176])*work.d_inv[177];
  work.L[596] = (work.KKT[587]-work.L[595]*work.v[176])*work.d_inv[177];
  work.v[171] = work.L[543]*work.d[171];
  work.v[172] = work.L[544]*work.d[172];
  work.v[173] = work.L[545]*work.d[173];
  work.v[174] = work.L[546]*work.d[174];
  work.v[175] = work.L[547]*work.d[175];
  work.v[176] = work.L[548]*work.d[176];
  work.v[177] = work.L[549]*work.d[177];
  work.v[178] = 0-work.L[543]*work.v[171]-work.L[544]*work.v[172]-work.L[545]*work.v[173]-work.L[546]*work.v[174]-work.L[547]*work.v[175]-work.L[548]*work.v[176]-work.L[549]*work.v[177];
  work.d[178] = work.v[178];

  if (work.d[178] > 0)
    work.d[178] = -settings.kkt_reg;
  else
    work.d[178] -= settings.kkt_reg;

  work.d_inv[178] = 1/work.d[178];

  work.L[556] = (-work.L[550]*work.v[172]-work.L[551]*work.v[173]-work.L[552]*work.v[174]-work.L[553]*work.v[175]-work.L[554]*work.v[176]-work.L[555]*work.v[177])*work.d_inv[178];
  work.L[562] = (-work.L[557]*work.v[173]-work.L[558]*work.v[174]-work.L[559]*work.v[175]-work.L[560]*work.v[176]-work.L[561]*work.v[177])*work.d_inv[178];
  work.L[566] = (work.KKT[588]-work.L[564]*work.v[176]-work.L[565]*work.v[177])*work.d_inv[178];
  work.L[571] = (work.KKT[589]-work.L[569]*work.v[176]-work.L[570]*work.v[177])*work.d_inv[178];
  work.L[577] = (work.KKT[590]-work.L[575]*work.v[176]-work.L[576]*work.v[177])*work.d_inv[178];
  work.L[584] = (work.KKT[591]-work.L[582]*work.v[176]-work.L[583]*work.v[177])*work.d_inv[178];
  work.L[597] = (work.KKT[592]-work.L[595]*work.v[176]-work.L[596]*work.v[177])*work.d_inv[178];
  work.v[172] = work.L[550]*work.d[172];
  work.v[173] = work.L[551]*work.d[173];
  work.v[174] = work.L[552]*work.d[174];
  work.v[175] = work.L[553]*work.d[175];
  work.v[176] = work.L[554]*work.d[176];
  work.v[177] = work.L[555]*work.d[177];
  work.v[178] = work.L[556]*work.d[178];
  work.v[179] = 0-work.L[550]*work.v[172]-work.L[551]*work.v[173]-work.L[552]*work.v[174]-work.L[553]*work.v[175]-work.L[554]*work.v[176]-work.L[555]*work.v[177]-work.L[556]*work.v[178];
  work.d[179] = work.v[179];

  if (work.d[179] > 0)
    work.d[179] = -settings.kkt_reg;
  else
    work.d[179] -= settings.kkt_reg;

  work.d_inv[179] = 1/work.d[179];

  work.L[563] = (-work.L[557]*work.v[173]-work.L[558]*work.v[174]-work.L[559]*work.v[175]-work.L[560]*work.v[176]-work.L[561]*work.v[177]-work.L[562]*work.v[178])*work.d_inv[179];
  work.L[567] = (work.KKT[593]-work.L[564]*work.v[176]-work.L[565]*work.v[177]-work.L[566]*work.v[178])*work.d_inv[179];
  work.L[572] = (work.KKT[594]-work.L[569]*work.v[176]-work.L[570]*work.v[177]-work.L[571]*work.v[178])*work.d_inv[179];
  work.L[578] = (work.KKT[595]-work.L[575]*work.v[176]-work.L[576]*work.v[177]-work.L[577]*work.v[178])*work.d_inv[179];
  work.L[585] = (work.KKT[596]-work.L[582]*work.v[176]-work.L[583]*work.v[177]-work.L[584]*work.v[178])*work.d_inv[179];
  work.L[598] = (work.KKT[597]-work.L[595]*work.v[176]-work.L[596]*work.v[177]-work.L[597]*work.v[178])*work.d_inv[179];
  work.v[173] = work.L[557]*work.d[173];
  work.v[174] = work.L[558]*work.d[174];
  work.v[175] = work.L[559]*work.d[175];
  work.v[176] = work.L[560]*work.d[176];
  work.v[177] = work.L[561]*work.d[177];
  work.v[178] = work.L[562]*work.d[178];
  work.v[179] = work.L[563]*work.d[179];
  work.v[180] = 0-work.L[557]*work.v[173]-work.L[558]*work.v[174]-work.L[559]*work.v[175]-work.L[560]*work.v[176]-work.L[561]*work.v[177]-work.L[562]*work.v[178]-work.L[563]*work.v[179];
  work.d[180] = work.v[180];

  if (work.d[180] > 0)
    work.d[180] = -settings.kkt_reg;
  else
    work.d[180] -= settings.kkt_reg;

  work.d_inv[180] = 1/work.d[180];

  work.L[568] = (work.KKT[598]-work.L[564]*work.v[176]-work.L[565]*work.v[177]-work.L[566]*work.v[178]-work.L[567]*work.v[179])*work.d_inv[180];
  work.L[573] = (work.KKT[599]-work.L[569]*work.v[176]-work.L[570]*work.v[177]-work.L[571]*work.v[178]-work.L[572]*work.v[179])*work.d_inv[180];
  work.L[579] = (work.KKT[600]-work.L[575]*work.v[176]-work.L[576]*work.v[177]-work.L[577]*work.v[178]-work.L[578]*work.v[179])*work.d_inv[180];
  work.L[586] = (work.KKT[601]-work.L[582]*work.v[176]-work.L[583]*work.v[177]-work.L[584]*work.v[178]-work.L[585]*work.v[179])*work.d_inv[180];
  work.L[599] = (work.KKT[602]-work.L[595]*work.v[176]-work.L[596]*work.v[177]-work.L[597]*work.v[178]-work.L[598]*work.v[179])*work.d_inv[180];
  work.v[176] = work.L[564]*work.d[176];
  work.v[177] = work.L[565]*work.d[177];
  work.v[178] = work.L[566]*work.d[178];
  work.v[179] = work.L[567]*work.d[179];
  work.v[180] = work.L[568]*work.d[180];
  work.v[181] = work.KKT[603]-work.L[564]*work.v[176]-work.L[565]*work.v[177]-work.L[566]*work.v[178]-work.L[567]*work.v[179]-work.L[568]*work.v[180];
  work.d[181] = work.v[181];

  if (work.d[181] < 0)
    work.d[181] = settings.kkt_reg;
  else
    work.d[181] += settings.kkt_reg;
  work.d_inv[181] = 1/work.d[181];

  work.L[574] = (work.KKT[604]-work.L[569]*work.v[176]-work.L[570]*work.v[177]-work.L[571]*work.v[178]-work.L[572]*work.v[179]-work.L[573]*work.v[180])*work.d_inv[181];
  work.L[580] = (work.KKT[605]-work.L[575]*work.v[176]-work.L[576]*work.v[177]-work.L[577]*work.v[178]-work.L[578]*work.v[179]-work.L[579]*work.v[180])*work.d_inv[181];
  work.L[587] = (work.KKT[606]-work.L[582]*work.v[176]-work.L[583]*work.v[177]-work.L[584]*work.v[178]-work.L[585]*work.v[179]-work.L[586]*work.v[180])*work.d_inv[181];
  work.L[600] = (work.KKT[607]-work.L[595]*work.v[176]-work.L[596]*work.v[177]-work.L[597]*work.v[178]-work.L[598]*work.v[179]-work.L[599]*work.v[180])*work.d_inv[181];
  work.L[604] = (work.KKT[608])*work.d_inv[181];
  work.v[176] = work.L[569]*work.d[176];
  work.v[177] = work.L[570]*work.d[177];
  work.v[178] = work.L[571]*work.d[178];
  work.v[179] = work.L[572]*work.d[179];
  work.v[180] = work.L[573]*work.d[180];
  work.v[181] = work.L[574]*work.d[181];
  work.v[182] = work.KKT[609]-work.L[569]*work.v[176]-work.L[570]*work.v[177]-work.L[571]*work.v[178]-work.L[572]*work.v[179]-work.L[573]*work.v[180]-work.L[574]*work.v[181];
  work.d[182] = work.v[182];

  if (work.d[182] < 0)
    work.d[182] = settings.kkt_reg;
  else
    work.d[182] += settings.kkt_reg;
  work.d_inv[182] = 1/work.d[182];

  work.L[581] = (work.KKT[610]-work.L[575]*work.v[176]-work.L[576]*work.v[177]-work.L[577]*work.v[178]-work.L[578]*work.v[179]-work.L[579]*work.v[180]-work.L[580]*work.v[181])*work.d_inv[182];
  work.L[588] = (work.KKT[611]-work.L[582]*work.v[176]-work.L[583]*work.v[177]-work.L[584]*work.v[178]-work.L[585]*work.v[179]-work.L[586]*work.v[180]-work.L[587]*work.v[181])*work.d_inv[182];
  work.L[601] = (work.KKT[612]-work.L[595]*work.v[176]-work.L[596]*work.v[177]-work.L[597]*work.v[178]-work.L[598]*work.v[179]-work.L[599]*work.v[180]-work.L[600]*work.v[181])*work.d_inv[182];
  work.L[605] = (-work.L[604]*work.v[181])*work.d_inv[182];
  work.L[611] = (work.KKT[613])*work.d_inv[182];
  work.v[176] = work.L[575]*work.d[176];
  work.v[177] = work.L[576]*work.d[177];
  work.v[178] = work.L[577]*work.d[178];
  work.v[179] = work.L[578]*work.d[179];
  work.v[180] = work.L[579]*work.d[180];
  work.v[181] = work.L[580]*work.d[181];
  work.v[182] = work.L[581]*work.d[182];
  work.v[183] = work.KKT[614]-work.L[575]*work.v[176]-work.L[576]*work.v[177]-work.L[577]*work.v[178]-work.L[578]*work.v[179]-work.L[579]*work.v[180]-work.L[580]*work.v[181]-work.L[581]*work.v[182];
  work.d[183] = work.v[183];

  if (work.d[183] < 0)
    work.d[183] = settings.kkt_reg;
  else
    work.d[183] += settings.kkt_reg;
  work.d_inv[183] = 1/work.d[183];

  work.L[589] = (work.KKT[615]-work.L[582]*work.v[176]-work.L[583]*work.v[177]-work.L[584]*work.v[178]-work.L[585]*work.v[179]-work.L[586]*work.v[180]-work.L[587]*work.v[181]-work.L[588]*work.v[182])*work.d_inv[183];
  work.L[602] = (work.KKT[616]-work.L[595]*work.v[176]-work.L[596]*work.v[177]-work.L[597]*work.v[178]-work.L[598]*work.v[179]-work.L[599]*work.v[180]-work.L[600]*work.v[181]-work.L[601]*work.v[182])*work.d_inv[183];
  work.L[606] = (-work.L[604]*work.v[181]-work.L[605]*work.v[182])*work.d_inv[183];
  work.L[612] = (-work.L[611]*work.v[182])*work.d_inv[183];
  work.L[618] = (work.KKT[617])*work.d_inv[183];
  work.v[176] = work.L[582]*work.d[176];
  work.v[177] = work.L[583]*work.d[177];
  work.v[178] = work.L[584]*work.d[178];
  work.v[179] = work.L[585]*work.d[179];
  work.v[180] = work.L[586]*work.d[180];
  work.v[181] = work.L[587]*work.d[181];
  work.v[182] = work.L[588]*work.d[182];
  work.v[183] = work.L[589]*work.d[183];
  work.v[184] = work.KKT[618]-work.L[582]*work.v[176]-work.L[583]*work.v[177]-work.L[584]*work.v[178]-work.L[585]*work.v[179]-work.L[586]*work.v[180]-work.L[587]*work.v[181]-work.L[588]*work.v[182]-work.L[589]*work.v[183];
  work.d[184] = work.v[184];

  if (work.d[184] < 0)
    work.d[184] = settings.kkt_reg;
  else
    work.d[184] += settings.kkt_reg;
  work.d_inv[184] = 1/work.d[184];

  work.L[603] = (work.KKT[619]-work.L[595]*work.v[176]-work.L[596]*work.v[177]-work.L[597]*work.v[178]-work.L[598]*work.v[179]-work.L[599]*work.v[180]-work.L[600]*work.v[181]-work.L[601]*work.v[182]-work.L[602]*work.v[183])*work.d_inv[184];
  work.L[607] = (-work.L[604]*work.v[181]-work.L[605]*work.v[182]-work.L[606]*work.v[183])*work.d_inv[184];
  work.L[613] = (-work.L[611]*work.v[182]-work.L[612]*work.v[183])*work.d_inv[184];
  work.L[619] = (-work.L[618]*work.v[183])*work.d_inv[184];
  work.L[625] = (work.KKT[620])*work.d_inv[184];
  work.v[48] = work.L[590]*work.d[48];
  work.v[70] = work.L[591]*work.d[70];
  work.v[185] = work.KKT[621]-work.L[590]*work.v[48]-work.L[591]*work.v[70];
  work.d[185] = work.v[185];

  if (work.d[185] < 0)
    work.d[185] = settings.kkt_reg;
  else
    work.d[185] += settings.kkt_reg;
  work.d_inv[185] = 1/work.d[185];

  work.L[594] = (work.KKT[622])*work.d_inv[185];
  work.L[608] = (work.KKT[623])*work.d_inv[185];
  work.L[614] = (work.KKT[624])*work.d_inv[185];
  work.L[620] = (work.KKT[625])*work.d_inv[185];
  work.L[626] = (work.KKT[626])*work.d_inv[185];
  work.L[632] = (work.KKT[627])*work.d_inv[185];
  work.v[49] = work.L[592]*work.d[49];
  work.v[71] = work.L[593]*work.d[71];
  work.v[185] = work.L[594]*work.d[185];
  work.v[186] = work.KKT[628]-work.L[592]*work.v[49]-work.L[593]*work.v[71]-work.L[594]*work.v[185];
  work.d[186] = work.v[186];

  if (work.d[186] < 0)
    work.d[186] = settings.kkt_reg;
  else
    work.d[186] += settings.kkt_reg;
  work.d_inv[186] = 1/work.d[186];

  work.L[609] = (work.KKT[629]-work.L[608]*work.v[185])*work.d_inv[186];
  work.L[615] = (work.KKT[630]-work.L[614]*work.v[185])*work.d_inv[186];
  work.L[621] = (work.KKT[631]-work.L[620]*work.v[185])*work.d_inv[186];
  work.L[627] = (work.KKT[632]-work.L[626]*work.v[185])*work.d_inv[186];
  work.L[633] = (work.KKT[633]-work.L[632]*work.v[185])*work.d_inv[186];
  work.v[176] = work.L[595]*work.d[176];
  work.v[177] = work.L[596]*work.d[177];
  work.v[178] = work.L[597]*work.d[178];
  work.v[179] = work.L[598]*work.d[179];
  work.v[180] = work.L[599]*work.d[180];
  work.v[181] = work.L[600]*work.d[181];
  work.v[182] = work.L[601]*work.d[182];
  work.v[183] = work.L[602]*work.d[183];
  work.v[184] = work.L[603]*work.d[184];
  work.v[187] = work.KKT[634]-work.L[595]*work.v[176]-work.L[596]*work.v[177]-work.L[597]*work.v[178]-work.L[598]*work.v[179]-work.L[599]*work.v[180]-work.L[600]*work.v[181]-work.L[601]*work.v[182]-work.L[602]*work.v[183]-work.L[603]*work.v[184];
  work.d[187] = work.v[187];

  if (work.d[187] < 0)
    work.d[187] = settings.kkt_reg;
  else
    work.d[187] += settings.kkt_reg;
  work.d_inv[187] = 1/work.d[187];

  work.L[610] = (-work.L[604]*work.v[181]-work.L[605]*work.v[182]-work.L[606]*work.v[183]-work.L[607]*work.v[184])*work.d_inv[187];
  work.L[616] = (-work.L[611]*work.v[182]-work.L[612]*work.v[183]-work.L[613]*work.v[184])*work.d_inv[187];
  work.L[622] = (-work.L[618]*work.v[183]-work.L[619]*work.v[184])*work.d_inv[187];
  work.L[628] = (-work.L[625]*work.v[184])*work.d_inv[187];
  work.L[634] = (work.KKT[635])*work.d_inv[187];
  work.v[181] = work.L[604]*work.d[181];
  work.v[182] = work.L[605]*work.d[182];
  work.v[183] = work.L[606]*work.d[183];
  work.v[184] = work.L[607]*work.d[184];
  work.v[185] = work.L[608]*work.d[185];
  work.v[186] = work.L[609]*work.d[186];
  work.v[187] = work.L[610]*work.d[187];
  work.v[188] = 0-work.L[604]*work.v[181]-work.L[605]*work.v[182]-work.L[606]*work.v[183]-work.L[607]*work.v[184]-work.L[608]*work.v[185]-work.L[609]*work.v[186]-work.L[610]*work.v[187];
  work.d[188] = work.v[188];

  if (work.d[188] > 0)
    work.d[188] = -settings.kkt_reg;
  else
    work.d[188] -= settings.kkt_reg;

  work.d_inv[188] = 1/work.d[188];

  work.L[617] = (-work.L[611]*work.v[182]-work.L[612]*work.v[183]-work.L[613]*work.v[184]-work.L[614]*work.v[185]-work.L[615]*work.v[186]-work.L[616]*work.v[187])*work.d_inv[188];
  work.L[623] = (-work.L[618]*work.v[183]-work.L[619]*work.v[184]-work.L[620]*work.v[185]-work.L[621]*work.v[186]-work.L[622]*work.v[187])*work.d_inv[188];
  work.L[629] = (-work.L[625]*work.v[184]-work.L[626]*work.v[185]-work.L[627]*work.v[186]-work.L[628]*work.v[187])*work.d_inv[188];
  work.L[635] = (-work.L[632]*work.v[185]-work.L[633]*work.v[186]-work.L[634]*work.v[187])*work.d_inv[188];
  work.L[639] = (work.KKT[636])*work.d_inv[188];
  work.L[644] = (work.KKT[637])*work.d_inv[188];
  work.L[650] = (work.KKT[638])*work.d_inv[188];
  work.L[657] = (work.KKT[639])*work.d_inv[188];
  work.L[695] = (work.KKT[640])*work.d_inv[188];
  work.v[182] = work.L[611]*work.d[182];
  work.v[183] = work.L[612]*work.d[183];
  work.v[184] = work.L[613]*work.d[184];
  work.v[185] = work.L[614]*work.d[185];
  work.v[186] = work.L[615]*work.d[186];
  work.v[187] = work.L[616]*work.d[187];
  work.v[188] = work.L[617]*work.d[188];
  work.v[189] = 0-work.L[611]*work.v[182]-work.L[612]*work.v[183]-work.L[613]*work.v[184]-work.L[614]*work.v[185]-work.L[615]*work.v[186]-work.L[616]*work.v[187]-work.L[617]*work.v[188];
  work.d[189] = work.v[189];

  if (work.d[189] > 0)
    work.d[189] = -settings.kkt_reg;
  else
    work.d[189] -= settings.kkt_reg;

  work.d_inv[189] = 1/work.d[189];

  work.L[624] = (-work.L[618]*work.v[183]-work.L[619]*work.v[184]-work.L[620]*work.v[185]-work.L[621]*work.v[186]-work.L[622]*work.v[187]-work.L[623]*work.v[188])*work.d_inv[189];
  work.L[630] = (-work.L[625]*work.v[184]-work.L[626]*work.v[185]-work.L[627]*work.v[186]-work.L[628]*work.v[187]-work.L[629]*work.v[188])*work.d_inv[189];
  work.L[636] = (-work.L[632]*work.v[185]-work.L[633]*work.v[186]-work.L[634]*work.v[187]-work.L[635]*work.v[188])*work.d_inv[189];
  work.L[640] = (work.KKT[641]-work.L[639]*work.v[188])*work.d_inv[189];
  work.L[645] = (work.KKT[642]-work.L[644]*work.v[188])*work.d_inv[189];
  work.L[651] = (work.KKT[643]-work.L[650]*work.v[188])*work.d_inv[189];
  work.L[658] = (work.KKT[644]-work.L[657]*work.v[188])*work.d_inv[189];
  work.L[696] = (work.KKT[645]-work.L[695]*work.v[188])*work.d_inv[189];
  work.v[183] = work.L[618]*work.d[183];
  work.v[184] = work.L[619]*work.d[184];
  work.v[185] = work.L[620]*work.d[185];
  work.v[186] = work.L[621]*work.d[186];
  work.v[187] = work.L[622]*work.d[187];
  work.v[188] = work.L[623]*work.d[188];
  work.v[189] = work.L[624]*work.d[189];
  work.v[190] = 0-work.L[618]*work.v[183]-work.L[619]*work.v[184]-work.L[620]*work.v[185]-work.L[621]*work.v[186]-work.L[622]*work.v[187]-work.L[623]*work.v[188]-work.L[624]*work.v[189];
  work.d[190] = work.v[190];

  if (work.d[190] > 0)
    work.d[190] = -settings.kkt_reg;
  else
    work.d[190] -= settings.kkt_reg;

  work.d_inv[190] = 1/work.d[190];

  work.L[631] = (-work.L[625]*work.v[184]-work.L[626]*work.v[185]-work.L[627]*work.v[186]-work.L[628]*work.v[187]-work.L[629]*work.v[188]-work.L[630]*work.v[189])*work.d_inv[190];
  work.L[637] = (-work.L[632]*work.v[185]-work.L[633]*work.v[186]-work.L[634]*work.v[187]-work.L[635]*work.v[188]-work.L[636]*work.v[189])*work.d_inv[190];
  work.L[641] = (work.KKT[646]-work.L[639]*work.v[188]-work.L[640]*work.v[189])*work.d_inv[190];
  work.L[646] = (work.KKT[647]-work.L[644]*work.v[188]-work.L[645]*work.v[189])*work.d_inv[190];
  work.L[652] = (work.KKT[648]-work.L[650]*work.v[188]-work.L[651]*work.v[189])*work.d_inv[190];
  work.L[659] = (work.KKT[649]-work.L[657]*work.v[188]-work.L[658]*work.v[189])*work.d_inv[190];
  work.L[697] = (work.KKT[650]-work.L[695]*work.v[188]-work.L[696]*work.v[189])*work.d_inv[190];
  work.v[184] = work.L[625]*work.d[184];
  work.v[185] = work.L[626]*work.d[185];
  work.v[186] = work.L[627]*work.d[186];
  work.v[187] = work.L[628]*work.d[187];
  work.v[188] = work.L[629]*work.d[188];
  work.v[189] = work.L[630]*work.d[189];
  work.v[190] = work.L[631]*work.d[190];
  work.v[191] = 0-work.L[625]*work.v[184]-work.L[626]*work.v[185]-work.L[627]*work.v[186]-work.L[628]*work.v[187]-work.L[629]*work.v[188]-work.L[630]*work.v[189]-work.L[631]*work.v[190];
  work.d[191] = work.v[191];

  if (work.d[191] > 0)
    work.d[191] = -settings.kkt_reg;
  else
    work.d[191] -= settings.kkt_reg;

  work.d_inv[191] = 1/work.d[191];

  work.L[638] = (-work.L[632]*work.v[185]-work.L[633]*work.v[186]-work.L[634]*work.v[187]-work.L[635]*work.v[188]-work.L[636]*work.v[189]-work.L[637]*work.v[190])*work.d_inv[191];
  work.L[642] = (work.KKT[651]-work.L[639]*work.v[188]-work.L[640]*work.v[189]-work.L[641]*work.v[190])*work.d_inv[191];
  work.L[647] = (work.KKT[652]-work.L[644]*work.v[188]-work.L[645]*work.v[189]-work.L[646]*work.v[190])*work.d_inv[191];
  work.L[653] = (work.KKT[653]-work.L[650]*work.v[188]-work.L[651]*work.v[189]-work.L[652]*work.v[190])*work.d_inv[191];
  work.L[660] = (work.KKT[654]-work.L[657]*work.v[188]-work.L[658]*work.v[189]-work.L[659]*work.v[190])*work.d_inv[191];
  work.L[698] = (work.KKT[655]-work.L[695]*work.v[188]-work.L[696]*work.v[189]-work.L[697]*work.v[190])*work.d_inv[191];
  work.v[185] = work.L[632]*work.d[185];
  work.v[186] = work.L[633]*work.d[186];
  work.v[187] = work.L[634]*work.d[187];
  work.v[188] = work.L[635]*work.d[188];
  work.v[189] = work.L[636]*work.d[189];
  work.v[190] = work.L[637]*work.d[190];
  work.v[191] = work.L[638]*work.d[191];
  work.v[192] = 0-work.L[632]*work.v[185]-work.L[633]*work.v[186]-work.L[634]*work.v[187]-work.L[635]*work.v[188]-work.L[636]*work.v[189]-work.L[637]*work.v[190]-work.L[638]*work.v[191];
  work.d[192] = work.v[192];

  if (work.d[192] > 0)
    work.d[192] = -settings.kkt_reg;
  else
    work.d[192] -= settings.kkt_reg;

  work.d_inv[192] = 1/work.d[192];

  work.L[643] = (work.KKT[656]-work.L[639]*work.v[188]-work.L[640]*work.v[189]-work.L[641]*work.v[190]-work.L[642]*work.v[191])*work.d_inv[192];
  work.L[648] = (work.KKT[657]-work.L[644]*work.v[188]-work.L[645]*work.v[189]-work.L[646]*work.v[190]-work.L[647]*work.v[191])*work.d_inv[192];
  work.L[654] = (work.KKT[658]-work.L[650]*work.v[188]-work.L[651]*work.v[189]-work.L[652]*work.v[190]-work.L[653]*work.v[191])*work.d_inv[192];
  work.L[661] = (work.KKT[659]-work.L[657]*work.v[188]-work.L[658]*work.v[189]-work.L[659]*work.v[190]-work.L[660]*work.v[191])*work.d_inv[192];
  work.L[699] = (work.KKT[660]-work.L[695]*work.v[188]-work.L[696]*work.v[189]-work.L[697]*work.v[190]-work.L[698]*work.v[191])*work.d_inv[192];
  work.v[188] = work.L[639]*work.d[188];
  work.v[189] = work.L[640]*work.d[189];
  work.v[190] = work.L[641]*work.d[190];
  work.v[191] = work.L[642]*work.d[191];
  work.v[192] = work.L[643]*work.d[192];
  work.v[193] = work.KKT[661]-work.L[639]*work.v[188]-work.L[640]*work.v[189]-work.L[641]*work.v[190]-work.L[642]*work.v[191]-work.L[643]*work.v[192];
  work.d[193] = work.v[193];

  if (work.d[193] < 0)
    work.d[193] = settings.kkt_reg;
  else
    work.d[193] += settings.kkt_reg;
  work.d_inv[193] = 1/work.d[193];

  work.L[649] = (work.KKT[662]-work.L[644]*work.v[188]-work.L[645]*work.v[189]-work.L[646]*work.v[190]-work.L[647]*work.v[191]-work.L[648]*work.v[192])*work.d_inv[193];
  work.L[655] = (work.KKT[663]-work.L[650]*work.v[188]-work.L[651]*work.v[189]-work.L[652]*work.v[190]-work.L[653]*work.v[191]-work.L[654]*work.v[192])*work.d_inv[193];
  work.L[662] = (work.KKT[664]-work.L[657]*work.v[188]-work.L[658]*work.v[189]-work.L[659]*work.v[190]-work.L[660]*work.v[191]-work.L[661]*work.v[192])*work.d_inv[193];
  work.L[700] = (work.KKT[665]-work.L[695]*work.v[188]-work.L[696]*work.v[189]-work.L[697]*work.v[190]-work.L[698]*work.v[191]-work.L[699]*work.v[192])*work.d_inv[193];
  work.L[704] = (work.KKT[666])*work.d_inv[193];
  work.v[188] = work.L[644]*work.d[188];
  work.v[189] = work.L[645]*work.d[189];
  work.v[190] = work.L[646]*work.d[190];
  work.v[191] = work.L[647]*work.d[191];
  work.v[192] = work.L[648]*work.d[192];
  work.v[193] = work.L[649]*work.d[193];
  work.v[194] = work.KKT[667]-work.L[644]*work.v[188]-work.L[645]*work.v[189]-work.L[646]*work.v[190]-work.L[647]*work.v[191]-work.L[648]*work.v[192]-work.L[649]*work.v[193];
  work.d[194] = work.v[194];

  if (work.d[194] < 0)
    work.d[194] = settings.kkt_reg;
  else
    work.d[194] += settings.kkt_reg;
  work.d_inv[194] = 1/work.d[194];

  work.L[656] = (work.KKT[668]-work.L[650]*work.v[188]-work.L[651]*work.v[189]-work.L[652]*work.v[190]-work.L[653]*work.v[191]-work.L[654]*work.v[192]-work.L[655]*work.v[193])*work.d_inv[194];
  work.L[663] = (work.KKT[669]-work.L[657]*work.v[188]-work.L[658]*work.v[189]-work.L[659]*work.v[190]-work.L[660]*work.v[191]-work.L[661]*work.v[192]-work.L[662]*work.v[193])*work.d_inv[194];
  work.L[701] = (work.KKT[670]-work.L[695]*work.v[188]-work.L[696]*work.v[189]-work.L[697]*work.v[190]-work.L[698]*work.v[191]-work.L[699]*work.v[192]-work.L[700]*work.v[193])*work.d_inv[194];
  work.L[705] = (-work.L[704]*work.v[193])*work.d_inv[194];
  work.L[716] = (work.KKT[671])*work.d_inv[194];
  work.v[188] = work.L[650]*work.d[188];
  work.v[189] = work.L[651]*work.d[189];
  work.v[190] = work.L[652]*work.d[190];
  work.v[191] = work.L[653]*work.d[191];
  work.v[192] = work.L[654]*work.d[192];
  work.v[193] = work.L[655]*work.d[193];
  work.v[194] = work.L[656]*work.d[194];
  work.v[195] = work.KKT[672]-work.L[650]*work.v[188]-work.L[651]*work.v[189]-work.L[652]*work.v[190]-work.L[653]*work.v[191]-work.L[654]*work.v[192]-work.L[655]*work.v[193]-work.L[656]*work.v[194];
  work.d[195] = work.v[195];

  if (work.d[195] < 0)
    work.d[195] = settings.kkt_reg;
  else
    work.d[195] += settings.kkt_reg;
  work.d_inv[195] = 1/work.d[195];

  work.L[664] = (work.KKT[673]-work.L[657]*work.v[188]-work.L[658]*work.v[189]-work.L[659]*work.v[190]-work.L[660]*work.v[191]-work.L[661]*work.v[192]-work.L[662]*work.v[193]-work.L[663]*work.v[194])*work.d_inv[195];
  work.L[702] = (work.KKT[674]-work.L[695]*work.v[188]-work.L[696]*work.v[189]-work.L[697]*work.v[190]-work.L[698]*work.v[191]-work.L[699]*work.v[192]-work.L[700]*work.v[193]-work.L[701]*work.v[194])*work.d_inv[195];
  work.L[706] = (-work.L[704]*work.v[193]-work.L[705]*work.v[194])*work.d_inv[195];
  work.L[717] = (-work.L[716]*work.v[194])*work.d_inv[195];
  work.L[728] = (work.KKT[675])*work.d_inv[195];
  work.v[188] = work.L[657]*work.d[188];
  work.v[189] = work.L[658]*work.d[189];
  work.v[190] = work.L[659]*work.d[190];
  work.v[191] = work.L[660]*work.d[191];
  work.v[192] = work.L[661]*work.d[192];
  work.v[193] = work.L[662]*work.d[193];
  work.v[194] = work.L[663]*work.d[194];
  work.v[195] = work.L[664]*work.d[195];
  work.v[196] = work.KKT[676]-work.L[657]*work.v[188]-work.L[658]*work.v[189]-work.L[659]*work.v[190]-work.L[660]*work.v[191]-work.L[661]*work.v[192]-work.L[662]*work.v[193]-work.L[663]*work.v[194]-work.L[664]*work.v[195];
  work.d[196] = work.v[196];

  if (work.d[196] < 0)
    work.d[196] = settings.kkt_reg;
  else
    work.d[196] += settings.kkt_reg;
  work.d_inv[196] = 1/work.d[196];

  work.L[703] = (work.KKT[677]-work.L[695]*work.v[188]-work.L[696]*work.v[189]-work.L[697]*work.v[190]-work.L[698]*work.v[191]-work.L[699]*work.v[192]-work.L[700]*work.v[193]-work.L[701]*work.v[194]-work.L[702]*work.v[195])*work.d_inv[196];
  work.L[707] = (-work.L[704]*work.v[193]-work.L[705]*work.v[194]-work.L[706]*work.v[195])*work.d_inv[196];
  work.L[718] = (-work.L[716]*work.v[194]-work.L[717]*work.v[195])*work.d_inv[196];
  work.L[729] = (-work.L[728]*work.v[195])*work.d_inv[196];
  work.L[740] = (work.KKT[678])*work.d_inv[196];
  work.v[46] = work.L[665]*work.d[46];
  work.v[68] = work.L[666]*work.d[68];
  work.v[197] = work.KKT[679]-work.L[665]*work.v[46]-work.L[666]*work.v[68];
  work.d[197] = work.v[197];

  if (work.d[197] < 0)
    work.d[197] = settings.kkt_reg;
  else
    work.d[197] += settings.kkt_reg;
  work.d_inv[197] = 1/work.d[197];

  work.L[669] = (work.KKT[680])*work.d_inv[197];
  work.L[708] = (work.KKT[681])*work.d_inv[197];
  work.L[719] = (work.KKT[682])*work.d_inv[197];
  work.L[730] = (work.KKT[683])*work.d_inv[197];
  work.L[741] = (work.KKT[684])*work.d_inv[197];
  work.L[752] = (work.KKT[685])*work.d_inv[197];
  work.v[47] = work.L[667]*work.d[47];
  work.v[69] = work.L[668]*work.d[69];
  work.v[197] = work.L[669]*work.d[197];
  work.v[198] = work.KKT[686]-work.L[667]*work.v[47]-work.L[668]*work.v[69]-work.L[669]*work.v[197];
  work.d[198] = work.v[198];

  if (work.d[198] < 0)
    work.d[198] = settings.kkt_reg;
  else
    work.d[198] += settings.kkt_reg;
  work.d_inv[198] = 1/work.d[198];

  work.L[709] = (work.KKT[687]-work.L[708]*work.v[197])*work.d_inv[198];
  work.L[720] = (work.KKT[688]-work.L[719]*work.v[197])*work.d_inv[198];
  work.L[731] = (work.KKT[689]-work.L[730]*work.v[197])*work.d_inv[198];
  work.L[742] = (work.KKT[690]-work.L[741]*work.v[197])*work.d_inv[198];
  work.L[753] = (work.KKT[691]-work.L[752]*work.v[197])*work.d_inv[198];
  work.v[90] = work.L[670]*work.d[90];
  work.v[95] = work.L[671]*work.d[95];
  work.v[96] = work.L[672]*work.d[96];
  work.v[199] = work.KKT[692]-work.L[670]*work.v[90]-work.L[671]*work.v[95]-work.L[672]*work.v[96];
  work.d[199] = work.v[199];

  if (work.d[199] < 0)
    work.d[199] = settings.kkt_reg;
  else
    work.d[199] += settings.kkt_reg;
  work.d_inv[199] = 1/work.d[199];

  work.L[676] = (work.KKT[693]-work.L[674]*work.v[95]-work.L[675]*work.v[96])*work.d_inv[199];
  work.L[680] = (work.KKT[694]-work.L[678]*work.v[95]-work.L[679]*work.v[96])*work.d_inv[199];
  work.L[685] = (work.KKT[695]-work.L[683]*work.v[95]-work.L[684]*work.v[96])*work.d_inv[199];
  work.L[691] = (work.KKT[696]-work.L[689]*work.v[95]-work.L[690]*work.v[96])*work.d_inv[199];
  work.L[710] = (work.KKT[697])*work.d_inv[199];
  work.L[721] = (work.KKT[698])*work.d_inv[199];
  work.L[732] = (work.KKT[699])*work.d_inv[199];
  work.L[743] = (work.KKT[700])*work.d_inv[199];
  work.L[754] = (work.KKT[701])*work.d_inv[199];
  work.v[91] = work.L[673]*work.d[91];
  work.v[95] = work.L[674]*work.d[95];
  work.v[96] = work.L[675]*work.d[96];
  work.v[199] = work.L[676]*work.d[199];
  work.v[200] = work.KKT[702]-work.L[673]*work.v[91]-work.L[674]*work.v[95]-work.L[675]*work.v[96]-work.L[676]*work.v[199];
  work.d[200] = work.v[200];

  if (work.d[200] < 0)
    work.d[200] = settings.kkt_reg;
  else
    work.d[200] += settings.kkt_reg;
  work.d_inv[200] = 1/work.d[200];

  work.L[681] = (work.KKT[703]-work.L[678]*work.v[95]-work.L[679]*work.v[96]-work.L[680]*work.v[199])*work.d_inv[200];
  work.L[686] = (work.KKT[704]-work.L[683]*work.v[95]-work.L[684]*work.v[96]-work.L[685]*work.v[199])*work.d_inv[200];
  work.L[692] = (work.KKT[705]-work.L[689]*work.v[95]-work.L[690]*work.v[96]-work.L[691]*work.v[199])*work.d_inv[200];
  work.L[711] = (work.KKT[706]-work.L[710]*work.v[199])*work.d_inv[200];
  work.L[722] = (work.KKT[707]-work.L[721]*work.v[199])*work.d_inv[200];
  work.L[733] = (work.KKT[708]-work.L[732]*work.v[199])*work.d_inv[200];
  work.L[744] = (work.KKT[709]-work.L[743]*work.v[199])*work.d_inv[200];
  work.L[755] = (work.KKT[710]-work.L[754]*work.v[199])*work.d_inv[200];
  work.v[92] = work.L[677]*work.d[92];
  work.v[95] = work.L[678]*work.d[95];
  work.v[96] = work.L[679]*work.d[96];
  work.v[199] = work.L[680]*work.d[199];
  work.v[200] = work.L[681]*work.d[200];
  work.v[201] = work.KKT[711]-work.L[677]*work.v[92]-work.L[678]*work.v[95]-work.L[679]*work.v[96]-work.L[680]*work.v[199]-work.L[681]*work.v[200];
  work.d[201] = work.v[201];

  if (work.d[201] < 0)
    work.d[201] = settings.kkt_reg;
  else
    work.d[201] += settings.kkt_reg;
  work.d_inv[201] = 1/work.d[201];

  work.L[687] = (work.KKT[712]-work.L[683]*work.v[95]-work.L[684]*work.v[96]-work.L[685]*work.v[199]-work.L[686]*work.v[200])*work.d_inv[201];
  work.L[693] = (work.KKT[713]-work.L[689]*work.v[95]-work.L[690]*work.v[96]-work.L[691]*work.v[199]-work.L[692]*work.v[200])*work.d_inv[201];
  work.L[712] = (work.KKT[714]-work.L[710]*work.v[199]-work.L[711]*work.v[200])*work.d_inv[201];
  work.L[723] = (work.KKT[715]-work.L[721]*work.v[199]-work.L[722]*work.v[200])*work.d_inv[201];
  work.L[734] = (work.KKT[716]-work.L[732]*work.v[199]-work.L[733]*work.v[200])*work.d_inv[201];
  work.L[745] = (work.KKT[717]-work.L[743]*work.v[199]-work.L[744]*work.v[200])*work.d_inv[201];
  work.L[756] = (work.KKT[718]-work.L[754]*work.v[199]-work.L[755]*work.v[200])*work.d_inv[201];
  work.v[93] = work.L[682]*work.d[93];
  work.v[95] = work.L[683]*work.d[95];
  work.v[96] = work.L[684]*work.d[96];
  work.v[199] = work.L[685]*work.d[199];
  work.v[200] = work.L[686]*work.d[200];
  work.v[201] = work.L[687]*work.d[201];
  work.v[202] = work.KKT[719]-work.L[682]*work.v[93]-work.L[683]*work.v[95]-work.L[684]*work.v[96]-work.L[685]*work.v[199]-work.L[686]*work.v[200]-work.L[687]*work.v[201];
  work.d[202] = work.v[202];

  if (work.d[202] < 0)
    work.d[202] = settings.kkt_reg;
  else
    work.d[202] += settings.kkt_reg;
  work.d_inv[202] = 1/work.d[202];

  work.L[694] = (work.KKT[720]-work.L[689]*work.v[95]-work.L[690]*work.v[96]-work.L[691]*work.v[199]-work.L[692]*work.v[200]-work.L[693]*work.v[201])*work.d_inv[202];
  work.L[713] = (work.KKT[721]-work.L[710]*work.v[199]-work.L[711]*work.v[200]-work.L[712]*work.v[201])*work.d_inv[202];
  work.L[724] = (work.KKT[722]-work.L[721]*work.v[199]-work.L[722]*work.v[200]-work.L[723]*work.v[201])*work.d_inv[202];
  work.L[735] = (work.KKT[723]-work.L[732]*work.v[199]-work.L[733]*work.v[200]-work.L[734]*work.v[201])*work.d_inv[202];
  work.L[746] = (work.KKT[724]-work.L[743]*work.v[199]-work.L[744]*work.v[200]-work.L[745]*work.v[201])*work.d_inv[202];
  work.L[757] = (work.KKT[725]-work.L[754]*work.v[199]-work.L[755]*work.v[200]-work.L[756]*work.v[201])*work.d_inv[202];
  work.v[94] = work.L[688]*work.d[94];
  work.v[95] = work.L[689]*work.d[95];
  work.v[96] = work.L[690]*work.d[96];
  work.v[199] = work.L[691]*work.d[199];
  work.v[200] = work.L[692]*work.d[200];
  work.v[201] = work.L[693]*work.d[201];
  work.v[202] = work.L[694]*work.d[202];
  work.v[203] = work.KKT[726]-work.L[688]*work.v[94]-work.L[689]*work.v[95]-work.L[690]*work.v[96]-work.L[691]*work.v[199]-work.L[692]*work.v[200]-work.L[693]*work.v[201]-work.L[694]*work.v[202];
  work.d[203] = work.v[203];

  if (work.d[203] < 0)
    work.d[203] = settings.kkt_reg;
  else
    work.d[203] += settings.kkt_reg;
  work.d_inv[203] = 1/work.d[203];

  work.L[714] = (work.KKT[727]-work.L[710]*work.v[199]-work.L[711]*work.v[200]-work.L[712]*work.v[201]-work.L[713]*work.v[202])*work.d_inv[203];
  work.L[725] = (work.KKT[728]-work.L[721]*work.v[199]-work.L[722]*work.v[200]-work.L[723]*work.v[201]-work.L[724]*work.v[202])*work.d_inv[203];
  work.L[736] = (work.KKT[729]-work.L[732]*work.v[199]-work.L[733]*work.v[200]-work.L[734]*work.v[201]-work.L[735]*work.v[202])*work.d_inv[203];
  work.L[747] = (work.KKT[730]-work.L[743]*work.v[199]-work.L[744]*work.v[200]-work.L[745]*work.v[201]-work.L[746]*work.v[202])*work.d_inv[203];
  work.L[758] = (work.KKT[731]-work.L[754]*work.v[199]-work.L[755]*work.v[200]-work.L[756]*work.v[201]-work.L[757]*work.v[202])*work.d_inv[203];
  work.v[188] = work.L[695]*work.d[188];
  work.v[189] = work.L[696]*work.d[189];
  work.v[190] = work.L[697]*work.d[190];
  work.v[191] = work.L[698]*work.d[191];
  work.v[192] = work.L[699]*work.d[192];
  work.v[193] = work.L[700]*work.d[193];
  work.v[194] = work.L[701]*work.d[194];
  work.v[195] = work.L[702]*work.d[195];
  work.v[196] = work.L[703]*work.d[196];
  work.v[204] = work.KKT[732]-work.L[695]*work.v[188]-work.L[696]*work.v[189]-work.L[697]*work.v[190]-work.L[698]*work.v[191]-work.L[699]*work.v[192]-work.L[700]*work.v[193]-work.L[701]*work.v[194]-work.L[702]*work.v[195]-work.L[703]*work.v[196];
  work.d[204] = work.v[204];

  if (work.d[204] < 0)
    work.d[204] = settings.kkt_reg;
  else
    work.d[204] += settings.kkt_reg;
  work.d_inv[204] = 1/work.d[204];

  work.L[715] = (-work.L[704]*work.v[193]-work.L[705]*work.v[194]-work.L[706]*work.v[195]-work.L[707]*work.v[196])*work.d_inv[204];
  work.L[726] = (-work.L[716]*work.v[194]-work.L[717]*work.v[195]-work.L[718]*work.v[196])*work.d_inv[204];
  work.L[737] = (-work.L[728]*work.v[195]-work.L[729]*work.v[196])*work.d_inv[204];
  work.L[748] = (-work.L[740]*work.v[196])*work.d_inv[204];
  work.L[759] = (work.KKT[733])*work.d_inv[204];
  work.v[193] = work.L[704]*work.d[193];
  work.v[194] = work.L[705]*work.d[194];
  work.v[195] = work.L[706]*work.d[195];
  work.v[196] = work.L[707]*work.d[196];
  work.v[197] = work.L[708]*work.d[197];
  work.v[198] = work.L[709]*work.d[198];
  work.v[199] = work.L[710]*work.d[199];
  work.v[200] = work.L[711]*work.d[200];
  work.v[201] = work.L[712]*work.d[201];
  work.v[202] = work.L[713]*work.d[202];
  work.v[203] = work.L[714]*work.d[203];
  work.v[204] = work.L[715]*work.d[204];
  work.v[205] = 0-work.L[704]*work.v[193]-work.L[705]*work.v[194]-work.L[706]*work.v[195]-work.L[707]*work.v[196]-work.L[708]*work.v[197]-work.L[709]*work.v[198]-work.L[710]*work.v[199]-work.L[711]*work.v[200]-work.L[712]*work.v[201]-work.L[713]*work.v[202]-work.L[714]*work.v[203]-work.L[715]*work.v[204];
  work.d[205] = work.v[205];

  if (work.d[205] > 0)
    work.d[205] = -settings.kkt_reg;
  else
    work.d[205] -= settings.kkt_reg;

  work.d_inv[205] = 1/work.d[205];

  work.L[727] = (-work.L[716]*work.v[194]-work.L[717]*work.v[195]-work.L[718]*work.v[196]-work.L[719]*work.v[197]-work.L[720]*work.v[198]-work.L[721]*work.v[199]-work.L[722]*work.v[200]-work.L[723]*work.v[201]-work.L[724]*work.v[202]-work.L[725]*work.v[203]-work.L[726]*work.v[204])*work.d_inv[205];
  work.L[738] = (-work.L[728]*work.v[195]-work.L[729]*work.v[196]-work.L[730]*work.v[197]-work.L[731]*work.v[198]-work.L[732]*work.v[199]-work.L[733]*work.v[200]-work.L[734]*work.v[201]-work.L[735]*work.v[202]-work.L[736]*work.v[203]-work.L[737]*work.v[204])*work.d_inv[205];
  work.L[749] = (-work.L[740]*work.v[196]-work.L[741]*work.v[197]-work.L[742]*work.v[198]-work.L[743]*work.v[199]-work.L[744]*work.v[200]-work.L[745]*work.v[201]-work.L[746]*work.v[202]-work.L[747]*work.v[203]-work.L[748]*work.v[204])*work.d_inv[205];
  work.L[760] = (-work.L[752]*work.v[197]-work.L[753]*work.v[198]-work.L[754]*work.v[199]-work.L[755]*work.v[200]-work.L[756]*work.v[201]-work.L[757]*work.v[202]-work.L[758]*work.v[203]-work.L[759]*work.v[204])*work.d_inv[205];
  work.v[194] = work.L[716]*work.d[194];
  work.v[195] = work.L[717]*work.d[195];
  work.v[196] = work.L[718]*work.d[196];
  work.v[197] = work.L[719]*work.d[197];
  work.v[198] = work.L[720]*work.d[198];
  work.v[199] = work.L[721]*work.d[199];
  work.v[200] = work.L[722]*work.d[200];
  work.v[201] = work.L[723]*work.d[201];
  work.v[202] = work.L[724]*work.d[202];
  work.v[203] = work.L[725]*work.d[203];
  work.v[204] = work.L[726]*work.d[204];
  work.v[205] = work.L[727]*work.d[205];
  work.v[206] = 0-work.L[716]*work.v[194]-work.L[717]*work.v[195]-work.L[718]*work.v[196]-work.L[719]*work.v[197]-work.L[720]*work.v[198]-work.L[721]*work.v[199]-work.L[722]*work.v[200]-work.L[723]*work.v[201]-work.L[724]*work.v[202]-work.L[725]*work.v[203]-work.L[726]*work.v[204]-work.L[727]*work.v[205];
  work.d[206] = work.v[206];

  if (work.d[206] > 0)
    work.d[206] = -settings.kkt_reg;
  else
    work.d[206] -= settings.kkt_reg;

  work.d_inv[206] = 1/work.d[206];

  work.L[739] = (-work.L[728]*work.v[195]-work.L[729]*work.v[196]-work.L[730]*work.v[197]-work.L[731]*work.v[198]-work.L[732]*work.v[199]-work.L[733]*work.v[200]-work.L[734]*work.v[201]-work.L[735]*work.v[202]-work.L[736]*work.v[203]-work.L[737]*work.v[204]-work.L[738]*work.v[205])*work.d_inv[206];
  work.L[750] = (-work.L[740]*work.v[196]-work.L[741]*work.v[197]-work.L[742]*work.v[198]-work.L[743]*work.v[199]-work.L[744]*work.v[200]-work.L[745]*work.v[201]-work.L[746]*work.v[202]-work.L[747]*work.v[203]-work.L[748]*work.v[204]-work.L[749]*work.v[205])*work.d_inv[206];
  work.L[761] = (-work.L[752]*work.v[197]-work.L[753]*work.v[198]-work.L[754]*work.v[199]-work.L[755]*work.v[200]-work.L[756]*work.v[201]-work.L[757]*work.v[202]-work.L[758]*work.v[203]-work.L[759]*work.v[204]-work.L[760]*work.v[205])*work.d_inv[206];
  work.v[195] = work.L[728]*work.d[195];
  work.v[196] = work.L[729]*work.d[196];
  work.v[197] = work.L[730]*work.d[197];
  work.v[198] = work.L[731]*work.d[198];
  work.v[199] = work.L[732]*work.d[199];
  work.v[200] = work.L[733]*work.d[200];
  work.v[201] = work.L[734]*work.d[201];
  work.v[202] = work.L[735]*work.d[202];
  work.v[203] = work.L[736]*work.d[203];
  work.v[204] = work.L[737]*work.d[204];
  work.v[205] = work.L[738]*work.d[205];
  work.v[206] = work.L[739]*work.d[206];
  work.v[207] = 0-work.L[728]*work.v[195]-work.L[729]*work.v[196]-work.L[730]*work.v[197]-work.L[731]*work.v[198]-work.L[732]*work.v[199]-work.L[733]*work.v[200]-work.L[734]*work.v[201]-work.L[735]*work.v[202]-work.L[736]*work.v[203]-work.L[737]*work.v[204]-work.L[738]*work.v[205]-work.L[739]*work.v[206];
  work.d[207] = work.v[207];

  if (work.d[207] > 0)
    work.d[207] = -settings.kkt_reg;
  else
    work.d[207] -= settings.kkt_reg;

  work.d_inv[207] = 1/work.d[207];

  work.L[751] = (-work.L[740]*work.v[196]-work.L[741]*work.v[197]-work.L[742]*work.v[198]-work.L[743]*work.v[199]-work.L[744]*work.v[200]-work.L[745]*work.v[201]-work.L[746]*work.v[202]-work.L[747]*work.v[203]-work.L[748]*work.v[204]-work.L[749]*work.v[205]-work.L[750]*work.v[206])*work.d_inv[207];
  work.L[762] = (-work.L[752]*work.v[197]-work.L[753]*work.v[198]-work.L[754]*work.v[199]-work.L[755]*work.v[200]-work.L[756]*work.v[201]-work.L[757]*work.v[202]-work.L[758]*work.v[203]-work.L[759]*work.v[204]-work.L[760]*work.v[205]-work.L[761]*work.v[206])*work.d_inv[207];
  work.v[196] = work.L[740]*work.d[196];
  work.v[197] = work.L[741]*work.d[197];
  work.v[198] = work.L[742]*work.d[198];
  work.v[199] = work.L[743]*work.d[199];
  work.v[200] = work.L[744]*work.d[200];
  work.v[201] = work.L[745]*work.d[201];
  work.v[202] = work.L[746]*work.d[202];
  work.v[203] = work.L[747]*work.d[203];
  work.v[204] = work.L[748]*work.d[204];
  work.v[205] = work.L[749]*work.d[205];
  work.v[206] = work.L[750]*work.d[206];
  work.v[207] = work.L[751]*work.d[207];
  work.v[208] = 0-work.L[740]*work.v[196]-work.L[741]*work.v[197]-work.L[742]*work.v[198]-work.L[743]*work.v[199]-work.L[744]*work.v[200]-work.L[745]*work.v[201]-work.L[746]*work.v[202]-work.L[747]*work.v[203]-work.L[748]*work.v[204]-work.L[749]*work.v[205]-work.L[750]*work.v[206]-work.L[751]*work.v[207];
  work.d[208] = work.v[208];

  if (work.d[208] > 0)
    work.d[208] = -settings.kkt_reg;
  else
    work.d[208] -= settings.kkt_reg;

  work.d_inv[208] = 1/work.d[208];

  work.L[763] = (-work.L[752]*work.v[197]-work.L[753]*work.v[198]-work.L[754]*work.v[199]-work.L[755]*work.v[200]-work.L[756]*work.v[201]-work.L[757]*work.v[202]-work.L[758]*work.v[203]-work.L[759]*work.v[204]-work.L[760]*work.v[205]-work.L[761]*work.v[206]-work.L[762]*work.v[207])*work.d_inv[208];
  work.v[197] = work.L[752]*work.d[197];
  work.v[198] = work.L[753]*work.d[198];
  work.v[199] = work.L[754]*work.d[199];
  work.v[200] = work.L[755]*work.d[200];
  work.v[201] = work.L[756]*work.d[201];
  work.v[202] = work.L[757]*work.d[202];
  work.v[203] = work.L[758]*work.d[203];
  work.v[204] = work.L[759]*work.d[204];
  work.v[205] = work.L[760]*work.d[205];
  work.v[206] = work.L[761]*work.d[206];
  work.v[207] = work.L[762]*work.d[207];
  work.v[208] = work.L[763]*work.d[208];
  work.v[209] = 0-work.L[752]*work.v[197]-work.L[753]*work.v[198]-work.L[754]*work.v[199]-work.L[755]*work.v[200]-work.L[756]*work.v[201]-work.L[757]*work.v[202]-work.L[758]*work.v[203]-work.L[759]*work.v[204]-work.L[760]*work.v[205]-work.L[761]*work.v[206]-work.L[762]*work.v[207]-work.L[763]*work.v[208];
  work.d[209] = work.v[209];

  if (work.d[209] > 0)
    work.d[209] = -settings.kkt_reg;
  else
    work.d[209] -= settings.kkt_reg;

  work.d_inv[209] = 1/work.d[209];

#ifndef ZERO_LIBRARY_MODE
  if (settings.debug) {
    printf("Squared Frobenius for factorization is %.8g.\n", check_factorization());
  }
#endif
}

double check_factorization(void) {
  /* Returns the squared Frobenius norm of A - L*D*L'. */
  double temp, residual;

  /* Only check the lower triangle. */
  residual = 0;
  temp = work.KKT[194]-1*work.d[95]*1-work.L[49]*work.d[44]*work.L[49]-work.L[50]*work.d[66]*work.L[50]-work.L[51]*work.d[90]*work.L[51]-work.L[52]*work.d[91]*work.L[52]-work.L[53]*work.d[92]*work.L[53]-work.L[54]*work.d[93]*work.L[54]-work.L[55]*work.d[94]*work.L[55];
  residual += temp*temp;

  temp = work.KKT[195]-work.L[63]*work.d[95]*1-work.L[58]*work.d[90]*work.L[51]-work.L[59]*work.d[91]*work.L[52]-work.L[60]*work.d[92]*work.L[53]-work.L[61]*work.d[93]*work.L[54]-work.L[62]*work.d[94]*work.L[55];
  residual += temp*temp;

  temp = work.KKT[196]-work.L[63]*work.d[95]*work.L[63]-1*work.d[96]*1-work.L[56]*work.d[45]*work.L[56]-work.L[57]*work.d[67]*work.L[57]-work.L[58]*work.d[90]*work.L[58]-work.L[59]*work.d[91]*work.L[59]-work.L[60]*work.d[92]*work.L[60]-work.L[61]*work.d[93]*work.L[61]-work.L[62]*work.d[94]*work.L[62];
  residual += temp*temp;

  temp = work.KKT[679]-1*work.d[197]*1-work.L[665]*work.d[46]*work.L[665]-work.L[666]*work.d[68]*work.L[666];
  residual += temp*temp;

  temp = work.KKT[680]-work.L[669]*work.d[197]*1;
  residual += temp*temp;

  temp = work.KKT[686]-work.L[669]*work.d[197]*work.L[669]-1*work.d[198]*1-work.L[667]*work.d[47]*work.L[667]-work.L[668]*work.d[69]*work.L[668];
  residual += temp*temp;

  temp = work.KKT[621]-1*work.d[185]*1-work.L[590]*work.d[48]*work.L[590]-work.L[591]*work.d[70]*work.L[591];
  residual += temp*temp;

  temp = work.KKT[622]-work.L[594]*work.d[185]*1;
  residual += temp*temp;

  temp = work.KKT[628]-work.L[594]*work.d[185]*work.L[594]-1*work.d[186]*1-work.L[592]*work.d[49]*work.L[592]-work.L[593]*work.d[71]*work.L[593];
  residual += temp*temp;

  temp = work.KKT[563]-1*work.d[173]*1-work.L[515]*work.d[50]*work.L[515]-work.L[516]*work.d[72]*work.L[516];
  residual += temp*temp;

  temp = work.KKT[564]-work.L[519]*work.d[173]*1;
  residual += temp*temp;

  temp = work.KKT[570]-work.L[519]*work.d[173]*work.L[519]-1*work.d[174]*1-work.L[517]*work.d[51]*work.L[517]-work.L[518]*work.d[73]*work.L[518];
  residual += temp*temp;

  temp = work.KKT[505]-1*work.d[161]*1-work.L[440]*work.d[52]*work.L[440]-work.L[441]*work.d[74]*work.L[441];
  residual += temp*temp;

  temp = work.KKT[506]-work.L[444]*work.d[161]*1;
  residual += temp*temp;

  temp = work.KKT[512]-work.L[444]*work.d[161]*work.L[444]-1*work.d[162]*1-work.L[442]*work.d[53]*work.L[442]-work.L[443]*work.d[75]*work.L[443];
  residual += temp*temp;

  temp = work.KKT[447]-1*work.d[149]*1-work.L[365]*work.d[54]*work.L[365]-work.L[366]*work.d[76]*work.L[366];
  residual += temp*temp;

  temp = work.KKT[448]-work.L[369]*work.d[149]*1;
  residual += temp*temp;

  temp = work.KKT[454]-work.L[369]*work.d[149]*work.L[369]-1*work.d[150]*1-work.L[367]*work.d[55]*work.L[367]-work.L[368]*work.d[77]*work.L[368];
  residual += temp*temp;

  temp = work.KKT[389]-1*work.d[137]*1-work.L[290]*work.d[56]*work.L[290]-work.L[291]*work.d[78]*work.L[291];
  residual += temp*temp;

  temp = work.KKT[390]-work.L[294]*work.d[137]*1;
  residual += temp*temp;

  temp = work.KKT[396]-work.L[294]*work.d[137]*work.L[294]-1*work.d[138]*1-work.L[292]*work.d[57]*work.L[292]-work.L[293]*work.d[79]*work.L[293];
  residual += temp*temp;

  temp = work.KKT[331]-1*work.d[125]*1-work.L[215]*work.d[58]*work.L[215]-work.L[216]*work.d[80]*work.L[216];
  residual += temp*temp;

  temp = work.KKT[332]-work.L[219]*work.d[125]*1;
  residual += temp*temp;

  temp = work.KKT[338]-work.L[219]*work.d[125]*work.L[219]-1*work.d[126]*1-work.L[217]*work.d[59]*work.L[217]-work.L[218]*work.d[81]*work.L[218];
  residual += temp*temp;

  temp = work.KKT[273]-1*work.d[113]*1-work.L[140]*work.d[60]*work.L[140]-work.L[141]*work.d[82]*work.L[141];
  residual += temp*temp;

  temp = work.KKT[274]-work.L[144]*work.d[113]*1;
  residual += temp*temp;

  temp = work.KKT[280]-work.L[144]*work.d[113]*work.L[144]-1*work.d[114]*1-work.L[142]*work.d[61]*work.L[142]-work.L[143]*work.d[83]*work.L[143];
  residual += temp*temp;

  temp = work.KKT[215]-1*work.d[101]*1-work.L[70]*work.d[62]*work.L[70]-work.L[71]*work.d[84]*work.L[71];
  residual += temp*temp;

  temp = work.KKT[216]-work.L[74]*work.d[101]*1;
  residual += temp*temp;

  temp = work.KKT[222]-work.L[74]*work.d[101]*work.L[74]-1*work.d[102]*1-work.L[72]*work.d[63]*work.L[72]-work.L[73]*work.d[85]*work.L[73];
  residual += temp*temp;

  temp = work.KKT[174]-1*work.d[87]*1-work.L[43]*work.d[64]*work.L[43]-work.L[44]*work.d[86]*work.L[44];
  residual += temp*temp;

  temp = work.KKT[175]-work.L[46]*work.d[87]*1;
  residual += temp*temp;

  temp = work.KKT[176]-work.L[46]*work.d[87]*work.L[46]-1*work.d[88]*1-work.L[45]*work.d[65]*work.L[45];
  residual += temp*temp;

  temp = work.KKT[692]-1*work.d[199]*1-work.L[670]*work.d[90]*work.L[670]-work.L[671]*work.d[95]*work.L[671]-work.L[672]*work.d[96]*work.L[672];
  residual += temp*temp;

  temp = work.KKT[693]-work.L[676]*work.d[199]*1-work.L[674]*work.d[95]*work.L[671]-work.L[675]*work.d[96]*work.L[672];
  residual += temp*temp;

  temp = work.KKT[694]-work.L[680]*work.d[199]*1-work.L[678]*work.d[95]*work.L[671]-work.L[679]*work.d[96]*work.L[672];
  residual += temp*temp;

  temp = work.KKT[695]-work.L[685]*work.d[199]*1-work.L[683]*work.d[95]*work.L[671]-work.L[684]*work.d[96]*work.L[672];
  residual += temp*temp;

  temp = work.KKT[696]-work.L[691]*work.d[199]*1-work.L[689]*work.d[95]*work.L[671]-work.L[690]*work.d[96]*work.L[672];
  residual += temp*temp;

  temp = work.KKT[702]-work.L[676]*work.d[199]*work.L[676]-1*work.d[200]*1-work.L[673]*work.d[91]*work.L[673]-work.L[674]*work.d[95]*work.L[674]-work.L[675]*work.d[96]*work.L[675];
  residual += temp*temp;

  temp = work.KKT[703]-work.L[680]*work.d[199]*work.L[676]-work.L[681]*work.d[200]*1-work.L[678]*work.d[95]*work.L[674]-work.L[679]*work.d[96]*work.L[675];
  residual += temp*temp;

  temp = work.KKT[704]-work.L[685]*work.d[199]*work.L[676]-work.L[686]*work.d[200]*1-work.L[683]*work.d[95]*work.L[674]-work.L[684]*work.d[96]*work.L[675];
  residual += temp*temp;

  temp = work.KKT[705]-work.L[691]*work.d[199]*work.L[676]-work.L[692]*work.d[200]*1-work.L[689]*work.d[95]*work.L[674]-work.L[690]*work.d[96]*work.L[675];
  residual += temp*temp;

  temp = work.KKT[711]-work.L[680]*work.d[199]*work.L[680]-work.L[681]*work.d[200]*work.L[681]-1*work.d[201]*1-work.L[677]*work.d[92]*work.L[677]-work.L[678]*work.d[95]*work.L[678]-work.L[679]*work.d[96]*work.L[679];
  residual += temp*temp;

  temp = work.KKT[712]-work.L[685]*work.d[199]*work.L[680]-work.L[686]*work.d[200]*work.L[681]-work.L[687]*work.d[201]*1-work.L[683]*work.d[95]*work.L[678]-work.L[684]*work.d[96]*work.L[679];
  residual += temp*temp;

  temp = work.KKT[713]-work.L[691]*work.d[199]*work.L[680]-work.L[692]*work.d[200]*work.L[681]-work.L[693]*work.d[201]*1-work.L[689]*work.d[95]*work.L[678]-work.L[690]*work.d[96]*work.L[679];
  residual += temp*temp;

  temp = work.KKT[719]-work.L[685]*work.d[199]*work.L[685]-work.L[686]*work.d[200]*work.L[686]-work.L[687]*work.d[201]*work.L[687]-1*work.d[202]*1-work.L[682]*work.d[93]*work.L[682]-work.L[683]*work.d[95]*work.L[683]-work.L[684]*work.d[96]*work.L[684];
  residual += temp*temp;

  temp = work.KKT[720]-work.L[691]*work.d[199]*work.L[685]-work.L[692]*work.d[200]*work.L[686]-work.L[693]*work.d[201]*work.L[687]-work.L[694]*work.d[202]*1-work.L[689]*work.d[95]*work.L[683]-work.L[690]*work.d[96]*work.L[684];
  residual += temp*temp;

  temp = work.KKT[726]-work.L[691]*work.d[199]*work.L[691]-work.L[692]*work.d[200]*work.L[692]-work.L[693]*work.d[201]*work.L[693]-work.L[694]*work.d[202]*work.L[694]-1*work.d[203]*1-work.L[688]*work.d[94]*work.L[688]-work.L[689]*work.d[95]*work.L[689]-work.L[690]*work.d[96]*work.L[690];
  residual += temp*temp;

  temp = work.KKT[661]-1*work.d[193]*1-work.L[639]*work.d[188]*work.L[639]-work.L[640]*work.d[189]*work.L[640]-work.L[641]*work.d[190]*work.L[641]-work.L[642]*work.d[191]*work.L[642]-work.L[643]*work.d[192]*work.L[643];
  residual += temp*temp;

  temp = work.KKT[662]-work.L[649]*work.d[193]*1-work.L[644]*work.d[188]*work.L[639]-work.L[645]*work.d[189]*work.L[640]-work.L[646]*work.d[190]*work.L[641]-work.L[647]*work.d[191]*work.L[642]-work.L[648]*work.d[192]*work.L[643];
  residual += temp*temp;

  temp = work.KKT[663]-work.L[655]*work.d[193]*1-work.L[650]*work.d[188]*work.L[639]-work.L[651]*work.d[189]*work.L[640]-work.L[652]*work.d[190]*work.L[641]-work.L[653]*work.d[191]*work.L[642]-work.L[654]*work.d[192]*work.L[643];
  residual += temp*temp;

  temp = work.KKT[664]-work.L[662]*work.d[193]*1-work.L[657]*work.d[188]*work.L[639]-work.L[658]*work.d[189]*work.L[640]-work.L[659]*work.d[190]*work.L[641]-work.L[660]*work.d[191]*work.L[642]-work.L[661]*work.d[192]*work.L[643];
  residual += temp*temp;

  temp = work.KKT[665]-work.L[700]*work.d[193]*1-work.L[695]*work.d[188]*work.L[639]-work.L[696]*work.d[189]*work.L[640]-work.L[697]*work.d[190]*work.L[641]-work.L[698]*work.d[191]*work.L[642]-work.L[699]*work.d[192]*work.L[643];
  residual += temp*temp;

  temp = work.KKT[667]-work.L[649]*work.d[193]*work.L[649]-1*work.d[194]*1-work.L[644]*work.d[188]*work.L[644]-work.L[645]*work.d[189]*work.L[645]-work.L[646]*work.d[190]*work.L[646]-work.L[647]*work.d[191]*work.L[647]-work.L[648]*work.d[192]*work.L[648];
  residual += temp*temp;

  temp = work.KKT[668]-work.L[655]*work.d[193]*work.L[649]-work.L[656]*work.d[194]*1-work.L[650]*work.d[188]*work.L[644]-work.L[651]*work.d[189]*work.L[645]-work.L[652]*work.d[190]*work.L[646]-work.L[653]*work.d[191]*work.L[647]-work.L[654]*work.d[192]*work.L[648];
  residual += temp*temp;

  temp = work.KKT[669]-work.L[662]*work.d[193]*work.L[649]-work.L[663]*work.d[194]*1-work.L[657]*work.d[188]*work.L[644]-work.L[658]*work.d[189]*work.L[645]-work.L[659]*work.d[190]*work.L[646]-work.L[660]*work.d[191]*work.L[647]-work.L[661]*work.d[192]*work.L[648];
  residual += temp*temp;

  temp = work.KKT[670]-work.L[700]*work.d[193]*work.L[649]-work.L[701]*work.d[194]*1-work.L[695]*work.d[188]*work.L[644]-work.L[696]*work.d[189]*work.L[645]-work.L[697]*work.d[190]*work.L[646]-work.L[698]*work.d[191]*work.L[647]-work.L[699]*work.d[192]*work.L[648];
  residual += temp*temp;

  temp = work.KKT[672]-work.L[655]*work.d[193]*work.L[655]-work.L[656]*work.d[194]*work.L[656]-1*work.d[195]*1-work.L[650]*work.d[188]*work.L[650]-work.L[651]*work.d[189]*work.L[651]-work.L[652]*work.d[190]*work.L[652]-work.L[653]*work.d[191]*work.L[653]-work.L[654]*work.d[192]*work.L[654];
  residual += temp*temp;

  temp = work.KKT[673]-work.L[662]*work.d[193]*work.L[655]-work.L[663]*work.d[194]*work.L[656]-work.L[664]*work.d[195]*1-work.L[657]*work.d[188]*work.L[650]-work.L[658]*work.d[189]*work.L[651]-work.L[659]*work.d[190]*work.L[652]-work.L[660]*work.d[191]*work.L[653]-work.L[661]*work.d[192]*work.L[654];
  residual += temp*temp;

  temp = work.KKT[674]-work.L[700]*work.d[193]*work.L[655]-work.L[701]*work.d[194]*work.L[656]-work.L[702]*work.d[195]*1-work.L[695]*work.d[188]*work.L[650]-work.L[696]*work.d[189]*work.L[651]-work.L[697]*work.d[190]*work.L[652]-work.L[698]*work.d[191]*work.L[653]-work.L[699]*work.d[192]*work.L[654];
  residual += temp*temp;

  temp = work.KKT[676]-work.L[662]*work.d[193]*work.L[662]-work.L[663]*work.d[194]*work.L[663]-work.L[664]*work.d[195]*work.L[664]-1*work.d[196]*1-work.L[657]*work.d[188]*work.L[657]-work.L[658]*work.d[189]*work.L[658]-work.L[659]*work.d[190]*work.L[659]-work.L[660]*work.d[191]*work.L[660]-work.L[661]*work.d[192]*work.L[661];
  residual += temp*temp;

  temp = work.KKT[677]-work.L[700]*work.d[193]*work.L[662]-work.L[701]*work.d[194]*work.L[663]-work.L[702]*work.d[195]*work.L[664]-work.L[703]*work.d[196]*1-work.L[695]*work.d[188]*work.L[657]-work.L[696]*work.d[189]*work.L[658]-work.L[697]*work.d[190]*work.L[659]-work.L[698]*work.d[191]*work.L[660]-work.L[699]*work.d[192]*work.L[661];
  residual += temp*temp;

  temp = work.KKT[732]-work.L[700]*work.d[193]*work.L[700]-work.L[701]*work.d[194]*work.L[701]-work.L[702]*work.d[195]*work.L[702]-work.L[703]*work.d[196]*work.L[703]-1*work.d[204]*1-work.L[695]*work.d[188]*work.L[695]-work.L[696]*work.d[189]*work.L[696]-work.L[697]*work.d[190]*work.L[697]-work.L[698]*work.d[191]*work.L[698]-work.L[699]*work.d[192]*work.L[699];
  residual += temp*temp;

  temp = work.KKT[603]-1*work.d[181]*1-work.L[564]*work.d[176]*work.L[564]-work.L[565]*work.d[177]*work.L[565]-work.L[566]*work.d[178]*work.L[566]-work.L[567]*work.d[179]*work.L[567]-work.L[568]*work.d[180]*work.L[568];
  residual += temp*temp;

  temp = work.KKT[604]-work.L[574]*work.d[181]*1-work.L[569]*work.d[176]*work.L[564]-work.L[570]*work.d[177]*work.L[565]-work.L[571]*work.d[178]*work.L[566]-work.L[572]*work.d[179]*work.L[567]-work.L[573]*work.d[180]*work.L[568];
  residual += temp*temp;

  temp = work.KKT[605]-work.L[580]*work.d[181]*1-work.L[575]*work.d[176]*work.L[564]-work.L[576]*work.d[177]*work.L[565]-work.L[577]*work.d[178]*work.L[566]-work.L[578]*work.d[179]*work.L[567]-work.L[579]*work.d[180]*work.L[568];
  residual += temp*temp;

  temp = work.KKT[606]-work.L[587]*work.d[181]*1-work.L[582]*work.d[176]*work.L[564]-work.L[583]*work.d[177]*work.L[565]-work.L[584]*work.d[178]*work.L[566]-work.L[585]*work.d[179]*work.L[567]-work.L[586]*work.d[180]*work.L[568];
  residual += temp*temp;

  temp = work.KKT[607]-work.L[600]*work.d[181]*1-work.L[595]*work.d[176]*work.L[564]-work.L[596]*work.d[177]*work.L[565]-work.L[597]*work.d[178]*work.L[566]-work.L[598]*work.d[179]*work.L[567]-work.L[599]*work.d[180]*work.L[568];
  residual += temp*temp;

  temp = work.KKT[609]-work.L[574]*work.d[181]*work.L[574]-1*work.d[182]*1-work.L[569]*work.d[176]*work.L[569]-work.L[570]*work.d[177]*work.L[570]-work.L[571]*work.d[178]*work.L[571]-work.L[572]*work.d[179]*work.L[572]-work.L[573]*work.d[180]*work.L[573];
  residual += temp*temp;

  temp = work.KKT[610]-work.L[580]*work.d[181]*work.L[574]-work.L[581]*work.d[182]*1-work.L[575]*work.d[176]*work.L[569]-work.L[576]*work.d[177]*work.L[570]-work.L[577]*work.d[178]*work.L[571]-work.L[578]*work.d[179]*work.L[572]-work.L[579]*work.d[180]*work.L[573];
  residual += temp*temp;

  temp = work.KKT[611]-work.L[587]*work.d[181]*work.L[574]-work.L[588]*work.d[182]*1-work.L[582]*work.d[176]*work.L[569]-work.L[583]*work.d[177]*work.L[570]-work.L[584]*work.d[178]*work.L[571]-work.L[585]*work.d[179]*work.L[572]-work.L[586]*work.d[180]*work.L[573];
  residual += temp*temp;

  temp = work.KKT[612]-work.L[600]*work.d[181]*work.L[574]-work.L[601]*work.d[182]*1-work.L[595]*work.d[176]*work.L[569]-work.L[596]*work.d[177]*work.L[570]-work.L[597]*work.d[178]*work.L[571]-work.L[598]*work.d[179]*work.L[572]-work.L[599]*work.d[180]*work.L[573];
  residual += temp*temp;

  temp = work.KKT[614]-work.L[580]*work.d[181]*work.L[580]-work.L[581]*work.d[182]*work.L[581]-1*work.d[183]*1-work.L[575]*work.d[176]*work.L[575]-work.L[576]*work.d[177]*work.L[576]-work.L[577]*work.d[178]*work.L[577]-work.L[578]*work.d[179]*work.L[578]-work.L[579]*work.d[180]*work.L[579];
  residual += temp*temp;

  temp = work.KKT[615]-work.L[587]*work.d[181]*work.L[580]-work.L[588]*work.d[182]*work.L[581]-work.L[589]*work.d[183]*1-work.L[582]*work.d[176]*work.L[575]-work.L[583]*work.d[177]*work.L[576]-work.L[584]*work.d[178]*work.L[577]-work.L[585]*work.d[179]*work.L[578]-work.L[586]*work.d[180]*work.L[579];
  residual += temp*temp;

  temp = work.KKT[616]-work.L[600]*work.d[181]*work.L[580]-work.L[601]*work.d[182]*work.L[581]-work.L[602]*work.d[183]*1-work.L[595]*work.d[176]*work.L[575]-work.L[596]*work.d[177]*work.L[576]-work.L[597]*work.d[178]*work.L[577]-work.L[598]*work.d[179]*work.L[578]-work.L[599]*work.d[180]*work.L[579];
  residual += temp*temp;

  temp = work.KKT[618]-work.L[587]*work.d[181]*work.L[587]-work.L[588]*work.d[182]*work.L[588]-work.L[589]*work.d[183]*work.L[589]-1*work.d[184]*1-work.L[582]*work.d[176]*work.L[582]-work.L[583]*work.d[177]*work.L[583]-work.L[584]*work.d[178]*work.L[584]-work.L[585]*work.d[179]*work.L[585]-work.L[586]*work.d[180]*work.L[586];
  residual += temp*temp;

  temp = work.KKT[619]-work.L[600]*work.d[181]*work.L[587]-work.L[601]*work.d[182]*work.L[588]-work.L[602]*work.d[183]*work.L[589]-work.L[603]*work.d[184]*1-work.L[595]*work.d[176]*work.L[582]-work.L[596]*work.d[177]*work.L[583]-work.L[597]*work.d[178]*work.L[584]-work.L[598]*work.d[179]*work.L[585]-work.L[599]*work.d[180]*work.L[586];
  residual += temp*temp;

  temp = work.KKT[634]-work.L[600]*work.d[181]*work.L[600]-work.L[601]*work.d[182]*work.L[601]-work.L[602]*work.d[183]*work.L[602]-work.L[603]*work.d[184]*work.L[603]-1*work.d[187]*1-work.L[595]*work.d[176]*work.L[595]-work.L[596]*work.d[177]*work.L[596]-work.L[597]*work.d[178]*work.L[597]-work.L[598]*work.d[179]*work.L[598]-work.L[599]*work.d[180]*work.L[599];
  residual += temp*temp;

  temp = work.KKT[545]-1*work.d[169]*1-work.L[489]*work.d[164]*work.L[489]-work.L[490]*work.d[165]*work.L[490]-work.L[491]*work.d[166]*work.L[491]-work.L[492]*work.d[167]*work.L[492]-work.L[493]*work.d[168]*work.L[493];
  residual += temp*temp;

  temp = work.KKT[546]-work.L[499]*work.d[169]*1-work.L[494]*work.d[164]*work.L[489]-work.L[495]*work.d[165]*work.L[490]-work.L[496]*work.d[166]*work.L[491]-work.L[497]*work.d[167]*work.L[492]-work.L[498]*work.d[168]*work.L[493];
  residual += temp*temp;

  temp = work.KKT[547]-work.L[505]*work.d[169]*1-work.L[500]*work.d[164]*work.L[489]-work.L[501]*work.d[165]*work.L[490]-work.L[502]*work.d[166]*work.L[491]-work.L[503]*work.d[167]*work.L[492]-work.L[504]*work.d[168]*work.L[493];
  residual += temp*temp;

  temp = work.KKT[548]-work.L[512]*work.d[169]*1-work.L[507]*work.d[164]*work.L[489]-work.L[508]*work.d[165]*work.L[490]-work.L[509]*work.d[166]*work.L[491]-work.L[510]*work.d[167]*work.L[492]-work.L[511]*work.d[168]*work.L[493];
  residual += temp*temp;

  temp = work.KKT[549]-work.L[525]*work.d[169]*1-work.L[520]*work.d[164]*work.L[489]-work.L[521]*work.d[165]*work.L[490]-work.L[522]*work.d[166]*work.L[491]-work.L[523]*work.d[167]*work.L[492]-work.L[524]*work.d[168]*work.L[493];
  residual += temp*temp;

  temp = work.KKT[551]-work.L[499]*work.d[169]*work.L[499]-1*work.d[170]*1-work.L[494]*work.d[164]*work.L[494]-work.L[495]*work.d[165]*work.L[495]-work.L[496]*work.d[166]*work.L[496]-work.L[497]*work.d[167]*work.L[497]-work.L[498]*work.d[168]*work.L[498];
  residual += temp*temp;

  temp = work.KKT[552]-work.L[505]*work.d[169]*work.L[499]-work.L[506]*work.d[170]*1-work.L[500]*work.d[164]*work.L[494]-work.L[501]*work.d[165]*work.L[495]-work.L[502]*work.d[166]*work.L[496]-work.L[503]*work.d[167]*work.L[497]-work.L[504]*work.d[168]*work.L[498];
  residual += temp*temp;

  temp = work.KKT[553]-work.L[512]*work.d[169]*work.L[499]-work.L[513]*work.d[170]*1-work.L[507]*work.d[164]*work.L[494]-work.L[508]*work.d[165]*work.L[495]-work.L[509]*work.d[166]*work.L[496]-work.L[510]*work.d[167]*work.L[497]-work.L[511]*work.d[168]*work.L[498];
  residual += temp*temp;

  temp = work.KKT[554]-work.L[525]*work.d[169]*work.L[499]-work.L[526]*work.d[170]*1-work.L[520]*work.d[164]*work.L[494]-work.L[521]*work.d[165]*work.L[495]-work.L[522]*work.d[166]*work.L[496]-work.L[523]*work.d[167]*work.L[497]-work.L[524]*work.d[168]*work.L[498];
  residual += temp*temp;

  temp = work.KKT[556]-work.L[505]*work.d[169]*work.L[505]-work.L[506]*work.d[170]*work.L[506]-1*work.d[171]*1-work.L[500]*work.d[164]*work.L[500]-work.L[501]*work.d[165]*work.L[501]-work.L[502]*work.d[166]*work.L[502]-work.L[503]*work.d[167]*work.L[503]-work.L[504]*work.d[168]*work.L[504];
  residual += temp*temp;

  temp = work.KKT[557]-work.L[512]*work.d[169]*work.L[505]-work.L[513]*work.d[170]*work.L[506]-work.L[514]*work.d[171]*1-work.L[507]*work.d[164]*work.L[500]-work.L[508]*work.d[165]*work.L[501]-work.L[509]*work.d[166]*work.L[502]-work.L[510]*work.d[167]*work.L[503]-work.L[511]*work.d[168]*work.L[504];
  residual += temp*temp;

  temp = work.KKT[558]-work.L[525]*work.d[169]*work.L[505]-work.L[526]*work.d[170]*work.L[506]-work.L[527]*work.d[171]*1-work.L[520]*work.d[164]*work.L[500]-work.L[521]*work.d[165]*work.L[501]-work.L[522]*work.d[166]*work.L[502]-work.L[523]*work.d[167]*work.L[503]-work.L[524]*work.d[168]*work.L[504];
  residual += temp*temp;

  temp = work.KKT[560]-work.L[512]*work.d[169]*work.L[512]-work.L[513]*work.d[170]*work.L[513]-work.L[514]*work.d[171]*work.L[514]-1*work.d[172]*1-work.L[507]*work.d[164]*work.L[507]-work.L[508]*work.d[165]*work.L[508]-work.L[509]*work.d[166]*work.L[509]-work.L[510]*work.d[167]*work.L[510]-work.L[511]*work.d[168]*work.L[511];
  residual += temp*temp;

  temp = work.KKT[561]-work.L[525]*work.d[169]*work.L[512]-work.L[526]*work.d[170]*work.L[513]-work.L[527]*work.d[171]*work.L[514]-work.L[528]*work.d[172]*1-work.L[520]*work.d[164]*work.L[507]-work.L[521]*work.d[165]*work.L[508]-work.L[522]*work.d[166]*work.L[509]-work.L[523]*work.d[167]*work.L[510]-work.L[524]*work.d[168]*work.L[511];
  residual += temp*temp;

  temp = work.KKT[576]-work.L[525]*work.d[169]*work.L[525]-work.L[526]*work.d[170]*work.L[526]-work.L[527]*work.d[171]*work.L[527]-work.L[528]*work.d[172]*work.L[528]-1*work.d[175]*1-work.L[520]*work.d[164]*work.L[520]-work.L[521]*work.d[165]*work.L[521]-work.L[522]*work.d[166]*work.L[522]-work.L[523]*work.d[167]*work.L[523]-work.L[524]*work.d[168]*work.L[524];
  residual += temp*temp;

  temp = work.KKT[487]-1*work.d[157]*1-work.L[414]*work.d[152]*work.L[414]-work.L[415]*work.d[153]*work.L[415]-work.L[416]*work.d[154]*work.L[416]-work.L[417]*work.d[155]*work.L[417]-work.L[418]*work.d[156]*work.L[418];
  residual += temp*temp;

  temp = work.KKT[488]-work.L[424]*work.d[157]*1-work.L[419]*work.d[152]*work.L[414]-work.L[420]*work.d[153]*work.L[415]-work.L[421]*work.d[154]*work.L[416]-work.L[422]*work.d[155]*work.L[417]-work.L[423]*work.d[156]*work.L[418];
  residual += temp*temp;

  temp = work.KKT[489]-work.L[430]*work.d[157]*1-work.L[425]*work.d[152]*work.L[414]-work.L[426]*work.d[153]*work.L[415]-work.L[427]*work.d[154]*work.L[416]-work.L[428]*work.d[155]*work.L[417]-work.L[429]*work.d[156]*work.L[418];
  residual += temp*temp;

  temp = work.KKT[490]-work.L[437]*work.d[157]*1-work.L[432]*work.d[152]*work.L[414]-work.L[433]*work.d[153]*work.L[415]-work.L[434]*work.d[154]*work.L[416]-work.L[435]*work.d[155]*work.L[417]-work.L[436]*work.d[156]*work.L[418];
  residual += temp*temp;

  temp = work.KKT[491]-work.L[450]*work.d[157]*1-work.L[445]*work.d[152]*work.L[414]-work.L[446]*work.d[153]*work.L[415]-work.L[447]*work.d[154]*work.L[416]-work.L[448]*work.d[155]*work.L[417]-work.L[449]*work.d[156]*work.L[418];
  residual += temp*temp;

  temp = work.KKT[493]-work.L[424]*work.d[157]*work.L[424]-1*work.d[158]*1-work.L[419]*work.d[152]*work.L[419]-work.L[420]*work.d[153]*work.L[420]-work.L[421]*work.d[154]*work.L[421]-work.L[422]*work.d[155]*work.L[422]-work.L[423]*work.d[156]*work.L[423];
  residual += temp*temp;

  temp = work.KKT[494]-work.L[430]*work.d[157]*work.L[424]-work.L[431]*work.d[158]*1-work.L[425]*work.d[152]*work.L[419]-work.L[426]*work.d[153]*work.L[420]-work.L[427]*work.d[154]*work.L[421]-work.L[428]*work.d[155]*work.L[422]-work.L[429]*work.d[156]*work.L[423];
  residual += temp*temp;

  temp = work.KKT[495]-work.L[437]*work.d[157]*work.L[424]-work.L[438]*work.d[158]*1-work.L[432]*work.d[152]*work.L[419]-work.L[433]*work.d[153]*work.L[420]-work.L[434]*work.d[154]*work.L[421]-work.L[435]*work.d[155]*work.L[422]-work.L[436]*work.d[156]*work.L[423];
  residual += temp*temp;

  temp = work.KKT[496]-work.L[450]*work.d[157]*work.L[424]-work.L[451]*work.d[158]*1-work.L[445]*work.d[152]*work.L[419]-work.L[446]*work.d[153]*work.L[420]-work.L[447]*work.d[154]*work.L[421]-work.L[448]*work.d[155]*work.L[422]-work.L[449]*work.d[156]*work.L[423];
  residual += temp*temp;

  temp = work.KKT[498]-work.L[430]*work.d[157]*work.L[430]-work.L[431]*work.d[158]*work.L[431]-1*work.d[159]*1-work.L[425]*work.d[152]*work.L[425]-work.L[426]*work.d[153]*work.L[426]-work.L[427]*work.d[154]*work.L[427]-work.L[428]*work.d[155]*work.L[428]-work.L[429]*work.d[156]*work.L[429];
  residual += temp*temp;

  temp = work.KKT[499]-work.L[437]*work.d[157]*work.L[430]-work.L[438]*work.d[158]*work.L[431]-work.L[439]*work.d[159]*1-work.L[432]*work.d[152]*work.L[425]-work.L[433]*work.d[153]*work.L[426]-work.L[434]*work.d[154]*work.L[427]-work.L[435]*work.d[155]*work.L[428]-work.L[436]*work.d[156]*work.L[429];
  residual += temp*temp;

  temp = work.KKT[500]-work.L[450]*work.d[157]*work.L[430]-work.L[451]*work.d[158]*work.L[431]-work.L[452]*work.d[159]*1-work.L[445]*work.d[152]*work.L[425]-work.L[446]*work.d[153]*work.L[426]-work.L[447]*work.d[154]*work.L[427]-work.L[448]*work.d[155]*work.L[428]-work.L[449]*work.d[156]*work.L[429];
  residual += temp*temp;

  temp = work.KKT[502]-work.L[437]*work.d[157]*work.L[437]-work.L[438]*work.d[158]*work.L[438]-work.L[439]*work.d[159]*work.L[439]-1*work.d[160]*1-work.L[432]*work.d[152]*work.L[432]-work.L[433]*work.d[153]*work.L[433]-work.L[434]*work.d[154]*work.L[434]-work.L[435]*work.d[155]*work.L[435]-work.L[436]*work.d[156]*work.L[436];
  residual += temp*temp;

  temp = work.KKT[503]-work.L[450]*work.d[157]*work.L[437]-work.L[451]*work.d[158]*work.L[438]-work.L[452]*work.d[159]*work.L[439]-work.L[453]*work.d[160]*1-work.L[445]*work.d[152]*work.L[432]-work.L[446]*work.d[153]*work.L[433]-work.L[447]*work.d[154]*work.L[434]-work.L[448]*work.d[155]*work.L[435]-work.L[449]*work.d[156]*work.L[436];
  residual += temp*temp;

  temp = work.KKT[518]-work.L[450]*work.d[157]*work.L[450]-work.L[451]*work.d[158]*work.L[451]-work.L[452]*work.d[159]*work.L[452]-work.L[453]*work.d[160]*work.L[453]-1*work.d[163]*1-work.L[445]*work.d[152]*work.L[445]-work.L[446]*work.d[153]*work.L[446]-work.L[447]*work.d[154]*work.L[447]-work.L[448]*work.d[155]*work.L[448]-work.L[449]*work.d[156]*work.L[449];
  residual += temp*temp;

  temp = work.KKT[429]-1*work.d[145]*1-work.L[339]*work.d[140]*work.L[339]-work.L[340]*work.d[141]*work.L[340]-work.L[341]*work.d[142]*work.L[341]-work.L[342]*work.d[143]*work.L[342]-work.L[343]*work.d[144]*work.L[343];
  residual += temp*temp;

  temp = work.KKT[430]-work.L[349]*work.d[145]*1-work.L[344]*work.d[140]*work.L[339]-work.L[345]*work.d[141]*work.L[340]-work.L[346]*work.d[142]*work.L[341]-work.L[347]*work.d[143]*work.L[342]-work.L[348]*work.d[144]*work.L[343];
  residual += temp*temp;

  temp = work.KKT[431]-work.L[355]*work.d[145]*1-work.L[350]*work.d[140]*work.L[339]-work.L[351]*work.d[141]*work.L[340]-work.L[352]*work.d[142]*work.L[341]-work.L[353]*work.d[143]*work.L[342]-work.L[354]*work.d[144]*work.L[343];
  residual += temp*temp;

  temp = work.KKT[432]-work.L[362]*work.d[145]*1-work.L[357]*work.d[140]*work.L[339]-work.L[358]*work.d[141]*work.L[340]-work.L[359]*work.d[142]*work.L[341]-work.L[360]*work.d[143]*work.L[342]-work.L[361]*work.d[144]*work.L[343];
  residual += temp*temp;

  temp = work.KKT[433]-work.L[375]*work.d[145]*1-work.L[370]*work.d[140]*work.L[339]-work.L[371]*work.d[141]*work.L[340]-work.L[372]*work.d[142]*work.L[341]-work.L[373]*work.d[143]*work.L[342]-work.L[374]*work.d[144]*work.L[343];
  residual += temp*temp;

  temp = work.KKT[435]-work.L[349]*work.d[145]*work.L[349]-1*work.d[146]*1-work.L[344]*work.d[140]*work.L[344]-work.L[345]*work.d[141]*work.L[345]-work.L[346]*work.d[142]*work.L[346]-work.L[347]*work.d[143]*work.L[347]-work.L[348]*work.d[144]*work.L[348];
  residual += temp*temp;

  temp = work.KKT[436]-work.L[355]*work.d[145]*work.L[349]-work.L[356]*work.d[146]*1-work.L[350]*work.d[140]*work.L[344]-work.L[351]*work.d[141]*work.L[345]-work.L[352]*work.d[142]*work.L[346]-work.L[353]*work.d[143]*work.L[347]-work.L[354]*work.d[144]*work.L[348];
  residual += temp*temp;

  temp = work.KKT[437]-work.L[362]*work.d[145]*work.L[349]-work.L[363]*work.d[146]*1-work.L[357]*work.d[140]*work.L[344]-work.L[358]*work.d[141]*work.L[345]-work.L[359]*work.d[142]*work.L[346]-work.L[360]*work.d[143]*work.L[347]-work.L[361]*work.d[144]*work.L[348];
  residual += temp*temp;

  temp = work.KKT[438]-work.L[375]*work.d[145]*work.L[349]-work.L[376]*work.d[146]*1-work.L[370]*work.d[140]*work.L[344]-work.L[371]*work.d[141]*work.L[345]-work.L[372]*work.d[142]*work.L[346]-work.L[373]*work.d[143]*work.L[347]-work.L[374]*work.d[144]*work.L[348];
  residual += temp*temp;

  temp = work.KKT[440]-work.L[355]*work.d[145]*work.L[355]-work.L[356]*work.d[146]*work.L[356]-1*work.d[147]*1-work.L[350]*work.d[140]*work.L[350]-work.L[351]*work.d[141]*work.L[351]-work.L[352]*work.d[142]*work.L[352]-work.L[353]*work.d[143]*work.L[353]-work.L[354]*work.d[144]*work.L[354];
  residual += temp*temp;

  temp = work.KKT[441]-work.L[362]*work.d[145]*work.L[355]-work.L[363]*work.d[146]*work.L[356]-work.L[364]*work.d[147]*1-work.L[357]*work.d[140]*work.L[350]-work.L[358]*work.d[141]*work.L[351]-work.L[359]*work.d[142]*work.L[352]-work.L[360]*work.d[143]*work.L[353]-work.L[361]*work.d[144]*work.L[354];
  residual += temp*temp;

  temp = work.KKT[442]-work.L[375]*work.d[145]*work.L[355]-work.L[376]*work.d[146]*work.L[356]-work.L[377]*work.d[147]*1-work.L[370]*work.d[140]*work.L[350]-work.L[371]*work.d[141]*work.L[351]-work.L[372]*work.d[142]*work.L[352]-work.L[373]*work.d[143]*work.L[353]-work.L[374]*work.d[144]*work.L[354];
  residual += temp*temp;

  temp = work.KKT[444]-work.L[362]*work.d[145]*work.L[362]-work.L[363]*work.d[146]*work.L[363]-work.L[364]*work.d[147]*work.L[364]-1*work.d[148]*1-work.L[357]*work.d[140]*work.L[357]-work.L[358]*work.d[141]*work.L[358]-work.L[359]*work.d[142]*work.L[359]-work.L[360]*work.d[143]*work.L[360]-work.L[361]*work.d[144]*work.L[361];
  residual += temp*temp;

  temp = work.KKT[445]-work.L[375]*work.d[145]*work.L[362]-work.L[376]*work.d[146]*work.L[363]-work.L[377]*work.d[147]*work.L[364]-work.L[378]*work.d[148]*1-work.L[370]*work.d[140]*work.L[357]-work.L[371]*work.d[141]*work.L[358]-work.L[372]*work.d[142]*work.L[359]-work.L[373]*work.d[143]*work.L[360]-work.L[374]*work.d[144]*work.L[361];
  residual += temp*temp;

  temp = work.KKT[460]-work.L[375]*work.d[145]*work.L[375]-work.L[376]*work.d[146]*work.L[376]-work.L[377]*work.d[147]*work.L[377]-work.L[378]*work.d[148]*work.L[378]-1*work.d[151]*1-work.L[370]*work.d[140]*work.L[370]-work.L[371]*work.d[141]*work.L[371]-work.L[372]*work.d[142]*work.L[372]-work.L[373]*work.d[143]*work.L[373]-work.L[374]*work.d[144]*work.L[374];
  residual += temp*temp;

  temp = work.KKT[371]-1*work.d[133]*1-work.L[264]*work.d[128]*work.L[264]-work.L[265]*work.d[129]*work.L[265]-work.L[266]*work.d[130]*work.L[266]-work.L[267]*work.d[131]*work.L[267]-work.L[268]*work.d[132]*work.L[268];
  residual += temp*temp;

  temp = work.KKT[372]-work.L[274]*work.d[133]*1-work.L[269]*work.d[128]*work.L[264]-work.L[270]*work.d[129]*work.L[265]-work.L[271]*work.d[130]*work.L[266]-work.L[272]*work.d[131]*work.L[267]-work.L[273]*work.d[132]*work.L[268];
  residual += temp*temp;

  temp = work.KKT[373]-work.L[280]*work.d[133]*1-work.L[275]*work.d[128]*work.L[264]-work.L[276]*work.d[129]*work.L[265]-work.L[277]*work.d[130]*work.L[266]-work.L[278]*work.d[131]*work.L[267]-work.L[279]*work.d[132]*work.L[268];
  residual += temp*temp;

  temp = work.KKT[374]-work.L[287]*work.d[133]*1-work.L[282]*work.d[128]*work.L[264]-work.L[283]*work.d[129]*work.L[265]-work.L[284]*work.d[130]*work.L[266]-work.L[285]*work.d[131]*work.L[267]-work.L[286]*work.d[132]*work.L[268];
  residual += temp*temp;

  temp = work.KKT[375]-work.L[300]*work.d[133]*1-work.L[295]*work.d[128]*work.L[264]-work.L[296]*work.d[129]*work.L[265]-work.L[297]*work.d[130]*work.L[266]-work.L[298]*work.d[131]*work.L[267]-work.L[299]*work.d[132]*work.L[268];
  residual += temp*temp;

  temp = work.KKT[377]-work.L[274]*work.d[133]*work.L[274]-1*work.d[134]*1-work.L[269]*work.d[128]*work.L[269]-work.L[270]*work.d[129]*work.L[270]-work.L[271]*work.d[130]*work.L[271]-work.L[272]*work.d[131]*work.L[272]-work.L[273]*work.d[132]*work.L[273];
  residual += temp*temp;

  temp = work.KKT[378]-work.L[280]*work.d[133]*work.L[274]-work.L[281]*work.d[134]*1-work.L[275]*work.d[128]*work.L[269]-work.L[276]*work.d[129]*work.L[270]-work.L[277]*work.d[130]*work.L[271]-work.L[278]*work.d[131]*work.L[272]-work.L[279]*work.d[132]*work.L[273];
  residual += temp*temp;

  temp = work.KKT[379]-work.L[287]*work.d[133]*work.L[274]-work.L[288]*work.d[134]*1-work.L[282]*work.d[128]*work.L[269]-work.L[283]*work.d[129]*work.L[270]-work.L[284]*work.d[130]*work.L[271]-work.L[285]*work.d[131]*work.L[272]-work.L[286]*work.d[132]*work.L[273];
  residual += temp*temp;

  temp = work.KKT[380]-work.L[300]*work.d[133]*work.L[274]-work.L[301]*work.d[134]*1-work.L[295]*work.d[128]*work.L[269]-work.L[296]*work.d[129]*work.L[270]-work.L[297]*work.d[130]*work.L[271]-work.L[298]*work.d[131]*work.L[272]-work.L[299]*work.d[132]*work.L[273];
  residual += temp*temp;

  temp = work.KKT[382]-work.L[280]*work.d[133]*work.L[280]-work.L[281]*work.d[134]*work.L[281]-1*work.d[135]*1-work.L[275]*work.d[128]*work.L[275]-work.L[276]*work.d[129]*work.L[276]-work.L[277]*work.d[130]*work.L[277]-work.L[278]*work.d[131]*work.L[278]-work.L[279]*work.d[132]*work.L[279];
  residual += temp*temp;

  temp = work.KKT[383]-work.L[287]*work.d[133]*work.L[280]-work.L[288]*work.d[134]*work.L[281]-work.L[289]*work.d[135]*1-work.L[282]*work.d[128]*work.L[275]-work.L[283]*work.d[129]*work.L[276]-work.L[284]*work.d[130]*work.L[277]-work.L[285]*work.d[131]*work.L[278]-work.L[286]*work.d[132]*work.L[279];
  residual += temp*temp;

  temp = work.KKT[384]-work.L[300]*work.d[133]*work.L[280]-work.L[301]*work.d[134]*work.L[281]-work.L[302]*work.d[135]*1-work.L[295]*work.d[128]*work.L[275]-work.L[296]*work.d[129]*work.L[276]-work.L[297]*work.d[130]*work.L[277]-work.L[298]*work.d[131]*work.L[278]-work.L[299]*work.d[132]*work.L[279];
  residual += temp*temp;

  temp = work.KKT[386]-work.L[287]*work.d[133]*work.L[287]-work.L[288]*work.d[134]*work.L[288]-work.L[289]*work.d[135]*work.L[289]-1*work.d[136]*1-work.L[282]*work.d[128]*work.L[282]-work.L[283]*work.d[129]*work.L[283]-work.L[284]*work.d[130]*work.L[284]-work.L[285]*work.d[131]*work.L[285]-work.L[286]*work.d[132]*work.L[286];
  residual += temp*temp;

  temp = work.KKT[387]-work.L[300]*work.d[133]*work.L[287]-work.L[301]*work.d[134]*work.L[288]-work.L[302]*work.d[135]*work.L[289]-work.L[303]*work.d[136]*1-work.L[295]*work.d[128]*work.L[282]-work.L[296]*work.d[129]*work.L[283]-work.L[297]*work.d[130]*work.L[284]-work.L[298]*work.d[131]*work.L[285]-work.L[299]*work.d[132]*work.L[286];
  residual += temp*temp;

  temp = work.KKT[402]-work.L[300]*work.d[133]*work.L[300]-work.L[301]*work.d[134]*work.L[301]-work.L[302]*work.d[135]*work.L[302]-work.L[303]*work.d[136]*work.L[303]-1*work.d[139]*1-work.L[295]*work.d[128]*work.L[295]-work.L[296]*work.d[129]*work.L[296]-work.L[297]*work.d[130]*work.L[297]-work.L[298]*work.d[131]*work.L[298]-work.L[299]*work.d[132]*work.L[299];
  residual += temp*temp;

  temp = work.KKT[313]-1*work.d[121]*1-work.L[189]*work.d[116]*work.L[189]-work.L[190]*work.d[117]*work.L[190]-work.L[191]*work.d[118]*work.L[191]-work.L[192]*work.d[119]*work.L[192]-work.L[193]*work.d[120]*work.L[193];
  residual += temp*temp;

  temp = work.KKT[314]-work.L[199]*work.d[121]*1-work.L[194]*work.d[116]*work.L[189]-work.L[195]*work.d[117]*work.L[190]-work.L[196]*work.d[118]*work.L[191]-work.L[197]*work.d[119]*work.L[192]-work.L[198]*work.d[120]*work.L[193];
  residual += temp*temp;

  temp = work.KKT[315]-work.L[205]*work.d[121]*1-work.L[200]*work.d[116]*work.L[189]-work.L[201]*work.d[117]*work.L[190]-work.L[202]*work.d[118]*work.L[191]-work.L[203]*work.d[119]*work.L[192]-work.L[204]*work.d[120]*work.L[193];
  residual += temp*temp;

  temp = work.KKT[316]-work.L[212]*work.d[121]*1-work.L[207]*work.d[116]*work.L[189]-work.L[208]*work.d[117]*work.L[190]-work.L[209]*work.d[118]*work.L[191]-work.L[210]*work.d[119]*work.L[192]-work.L[211]*work.d[120]*work.L[193];
  residual += temp*temp;

  temp = work.KKT[317]-work.L[225]*work.d[121]*1-work.L[220]*work.d[116]*work.L[189]-work.L[221]*work.d[117]*work.L[190]-work.L[222]*work.d[118]*work.L[191]-work.L[223]*work.d[119]*work.L[192]-work.L[224]*work.d[120]*work.L[193];
  residual += temp*temp;

  temp = work.KKT[319]-work.L[199]*work.d[121]*work.L[199]-1*work.d[122]*1-work.L[194]*work.d[116]*work.L[194]-work.L[195]*work.d[117]*work.L[195]-work.L[196]*work.d[118]*work.L[196]-work.L[197]*work.d[119]*work.L[197]-work.L[198]*work.d[120]*work.L[198];
  residual += temp*temp;

  temp = work.KKT[320]-work.L[205]*work.d[121]*work.L[199]-work.L[206]*work.d[122]*1-work.L[200]*work.d[116]*work.L[194]-work.L[201]*work.d[117]*work.L[195]-work.L[202]*work.d[118]*work.L[196]-work.L[203]*work.d[119]*work.L[197]-work.L[204]*work.d[120]*work.L[198];
  residual += temp*temp;

  temp = work.KKT[321]-work.L[212]*work.d[121]*work.L[199]-work.L[213]*work.d[122]*1-work.L[207]*work.d[116]*work.L[194]-work.L[208]*work.d[117]*work.L[195]-work.L[209]*work.d[118]*work.L[196]-work.L[210]*work.d[119]*work.L[197]-work.L[211]*work.d[120]*work.L[198];
  residual += temp*temp;

  temp = work.KKT[322]-work.L[225]*work.d[121]*work.L[199]-work.L[226]*work.d[122]*1-work.L[220]*work.d[116]*work.L[194]-work.L[221]*work.d[117]*work.L[195]-work.L[222]*work.d[118]*work.L[196]-work.L[223]*work.d[119]*work.L[197]-work.L[224]*work.d[120]*work.L[198];
  residual += temp*temp;

  temp = work.KKT[324]-work.L[205]*work.d[121]*work.L[205]-work.L[206]*work.d[122]*work.L[206]-1*work.d[123]*1-work.L[200]*work.d[116]*work.L[200]-work.L[201]*work.d[117]*work.L[201]-work.L[202]*work.d[118]*work.L[202]-work.L[203]*work.d[119]*work.L[203]-work.L[204]*work.d[120]*work.L[204];
  residual += temp*temp;

  temp = work.KKT[325]-work.L[212]*work.d[121]*work.L[205]-work.L[213]*work.d[122]*work.L[206]-work.L[214]*work.d[123]*1-work.L[207]*work.d[116]*work.L[200]-work.L[208]*work.d[117]*work.L[201]-work.L[209]*work.d[118]*work.L[202]-work.L[210]*work.d[119]*work.L[203]-work.L[211]*work.d[120]*work.L[204];
  residual += temp*temp;

  temp = work.KKT[326]-work.L[225]*work.d[121]*work.L[205]-work.L[226]*work.d[122]*work.L[206]-work.L[227]*work.d[123]*1-work.L[220]*work.d[116]*work.L[200]-work.L[221]*work.d[117]*work.L[201]-work.L[222]*work.d[118]*work.L[202]-work.L[223]*work.d[119]*work.L[203]-work.L[224]*work.d[120]*work.L[204];
  residual += temp*temp;

  temp = work.KKT[328]-work.L[212]*work.d[121]*work.L[212]-work.L[213]*work.d[122]*work.L[213]-work.L[214]*work.d[123]*work.L[214]-1*work.d[124]*1-work.L[207]*work.d[116]*work.L[207]-work.L[208]*work.d[117]*work.L[208]-work.L[209]*work.d[118]*work.L[209]-work.L[210]*work.d[119]*work.L[210]-work.L[211]*work.d[120]*work.L[211];
  residual += temp*temp;

  temp = work.KKT[329]-work.L[225]*work.d[121]*work.L[212]-work.L[226]*work.d[122]*work.L[213]-work.L[227]*work.d[123]*work.L[214]-work.L[228]*work.d[124]*1-work.L[220]*work.d[116]*work.L[207]-work.L[221]*work.d[117]*work.L[208]-work.L[222]*work.d[118]*work.L[209]-work.L[223]*work.d[119]*work.L[210]-work.L[224]*work.d[120]*work.L[211];
  residual += temp*temp;

  temp = work.KKT[344]-work.L[225]*work.d[121]*work.L[225]-work.L[226]*work.d[122]*work.L[226]-work.L[227]*work.d[123]*work.L[227]-work.L[228]*work.d[124]*work.L[228]-1*work.d[127]*1-work.L[220]*work.d[116]*work.L[220]-work.L[221]*work.d[117]*work.L[221]-work.L[222]*work.d[118]*work.L[222]-work.L[223]*work.d[119]*work.L[223]-work.L[224]*work.d[120]*work.L[224];
  residual += temp*temp;

  temp = work.KKT[255]-1*work.d[109]*1-work.L[114]*work.d[104]*work.L[114]-work.L[115]*work.d[105]*work.L[115]-work.L[116]*work.d[106]*work.L[116]-work.L[117]*work.d[107]*work.L[117]-work.L[118]*work.d[108]*work.L[118];
  residual += temp*temp;

  temp = work.KKT[256]-work.L[124]*work.d[109]*1-work.L[119]*work.d[104]*work.L[114]-work.L[120]*work.d[105]*work.L[115]-work.L[121]*work.d[106]*work.L[116]-work.L[122]*work.d[107]*work.L[117]-work.L[123]*work.d[108]*work.L[118];
  residual += temp*temp;

  temp = work.KKT[257]-work.L[130]*work.d[109]*1-work.L[125]*work.d[104]*work.L[114]-work.L[126]*work.d[105]*work.L[115]-work.L[127]*work.d[106]*work.L[116]-work.L[128]*work.d[107]*work.L[117]-work.L[129]*work.d[108]*work.L[118];
  residual += temp*temp;

  temp = work.KKT[258]-work.L[137]*work.d[109]*1-work.L[132]*work.d[104]*work.L[114]-work.L[133]*work.d[105]*work.L[115]-work.L[134]*work.d[106]*work.L[116]-work.L[135]*work.d[107]*work.L[117]-work.L[136]*work.d[108]*work.L[118];
  residual += temp*temp;

  temp = work.KKT[259]-work.L[150]*work.d[109]*1-work.L[145]*work.d[104]*work.L[114]-work.L[146]*work.d[105]*work.L[115]-work.L[147]*work.d[106]*work.L[116]-work.L[148]*work.d[107]*work.L[117]-work.L[149]*work.d[108]*work.L[118];
  residual += temp*temp;

  temp = work.KKT[261]-work.L[124]*work.d[109]*work.L[124]-1*work.d[110]*1-work.L[119]*work.d[104]*work.L[119]-work.L[120]*work.d[105]*work.L[120]-work.L[121]*work.d[106]*work.L[121]-work.L[122]*work.d[107]*work.L[122]-work.L[123]*work.d[108]*work.L[123];
  residual += temp*temp;

  temp = work.KKT[262]-work.L[130]*work.d[109]*work.L[124]-work.L[131]*work.d[110]*1-work.L[125]*work.d[104]*work.L[119]-work.L[126]*work.d[105]*work.L[120]-work.L[127]*work.d[106]*work.L[121]-work.L[128]*work.d[107]*work.L[122]-work.L[129]*work.d[108]*work.L[123];
  residual += temp*temp;

  temp = work.KKT[263]-work.L[137]*work.d[109]*work.L[124]-work.L[138]*work.d[110]*1-work.L[132]*work.d[104]*work.L[119]-work.L[133]*work.d[105]*work.L[120]-work.L[134]*work.d[106]*work.L[121]-work.L[135]*work.d[107]*work.L[122]-work.L[136]*work.d[108]*work.L[123];
  residual += temp*temp;

  temp = work.KKT[264]-work.L[150]*work.d[109]*work.L[124]-work.L[151]*work.d[110]*1-work.L[145]*work.d[104]*work.L[119]-work.L[146]*work.d[105]*work.L[120]-work.L[147]*work.d[106]*work.L[121]-work.L[148]*work.d[107]*work.L[122]-work.L[149]*work.d[108]*work.L[123];
  residual += temp*temp;

  temp = work.KKT[266]-work.L[130]*work.d[109]*work.L[130]-work.L[131]*work.d[110]*work.L[131]-1*work.d[111]*1-work.L[125]*work.d[104]*work.L[125]-work.L[126]*work.d[105]*work.L[126]-work.L[127]*work.d[106]*work.L[127]-work.L[128]*work.d[107]*work.L[128]-work.L[129]*work.d[108]*work.L[129];
  residual += temp*temp;

  temp = work.KKT[267]-work.L[137]*work.d[109]*work.L[130]-work.L[138]*work.d[110]*work.L[131]-work.L[139]*work.d[111]*1-work.L[132]*work.d[104]*work.L[125]-work.L[133]*work.d[105]*work.L[126]-work.L[134]*work.d[106]*work.L[127]-work.L[135]*work.d[107]*work.L[128]-work.L[136]*work.d[108]*work.L[129];
  residual += temp*temp;

  temp = work.KKT[268]-work.L[150]*work.d[109]*work.L[130]-work.L[151]*work.d[110]*work.L[131]-work.L[152]*work.d[111]*1-work.L[145]*work.d[104]*work.L[125]-work.L[146]*work.d[105]*work.L[126]-work.L[147]*work.d[106]*work.L[127]-work.L[148]*work.d[107]*work.L[128]-work.L[149]*work.d[108]*work.L[129];
  residual += temp*temp;

  temp = work.KKT[270]-work.L[137]*work.d[109]*work.L[137]-work.L[138]*work.d[110]*work.L[138]-work.L[139]*work.d[111]*work.L[139]-1*work.d[112]*1-work.L[132]*work.d[104]*work.L[132]-work.L[133]*work.d[105]*work.L[133]-work.L[134]*work.d[106]*work.L[134]-work.L[135]*work.d[107]*work.L[135]-work.L[136]*work.d[108]*work.L[136];
  residual += temp*temp;

  temp = work.KKT[271]-work.L[150]*work.d[109]*work.L[137]-work.L[151]*work.d[110]*work.L[138]-work.L[152]*work.d[111]*work.L[139]-work.L[153]*work.d[112]*1-work.L[145]*work.d[104]*work.L[132]-work.L[146]*work.d[105]*work.L[133]-work.L[147]*work.d[106]*work.L[134]-work.L[148]*work.d[107]*work.L[135]-work.L[149]*work.d[108]*work.L[136];
  residual += temp*temp;

  temp = work.KKT[286]-work.L[150]*work.d[109]*work.L[150]-work.L[151]*work.d[110]*work.L[151]-work.L[152]*work.d[111]*work.L[152]-work.L[153]*work.d[112]*work.L[153]-1*work.d[115]*1-work.L[145]*work.d[104]*work.L[145]-work.L[146]*work.d[105]*work.L[146]-work.L[147]*work.d[106]*work.L[147]-work.L[148]*work.d[107]*work.L[148]-work.L[149]*work.d[108]*work.L[149];
  residual += temp*temp;

  temp = work.KKT[197]-1*work.d[97]*1;
  residual += temp*temp;

  temp = work.KKT[198]-work.L[64]*work.d[97]*1;
  residual += temp*temp;

  temp = work.KKT[199]-work.L[65]*work.d[97]*1;
  residual += temp*temp;

  temp = work.KKT[200]-work.L[67]*work.d[97]*1;
  residual += temp*temp;

  temp = work.KKT[201]-work.L[75]*work.d[97]*1;
  residual += temp*temp;

  temp = work.KKT[203]-work.L[64]*work.d[97]*work.L[64]-1*work.d[98]*1;
  residual += temp*temp;

  temp = work.KKT[204]-work.L[65]*work.d[97]*work.L[64]-work.L[66]*work.d[98]*1;
  residual += temp*temp;

  temp = work.KKT[205]-work.L[67]*work.d[97]*work.L[64]-work.L[68]*work.d[98]*1;
  residual += temp*temp;

  temp = work.KKT[206]-work.L[75]*work.d[97]*work.L[64]-work.L[76]*work.d[98]*1;
  residual += temp*temp;

  temp = work.KKT[208]-work.L[65]*work.d[97]*work.L[65]-work.L[66]*work.d[98]*work.L[66]-1*work.d[99]*1;
  residual += temp*temp;

  temp = work.KKT[209]-work.L[67]*work.d[97]*work.L[65]-work.L[68]*work.d[98]*work.L[66]-work.L[69]*work.d[99]*1;
  residual += temp*temp;

  temp = work.KKT[210]-work.L[75]*work.d[97]*work.L[65]-work.L[76]*work.d[98]*work.L[66]-work.L[77]*work.d[99]*1;
  residual += temp*temp;

  temp = work.KKT[212]-work.L[67]*work.d[97]*work.L[67]-work.L[68]*work.d[98]*work.L[68]-work.L[69]*work.d[99]*work.L[69]-1*work.d[100]*1;
  residual += temp*temp;

  temp = work.KKT[213]-work.L[75]*work.d[97]*work.L[67]-work.L[76]*work.d[98]*work.L[68]-work.L[77]*work.d[99]*work.L[69]-work.L[78]*work.d[100]*1;
  residual += temp*temp;

  temp = work.KKT[228]-work.L[75]*work.d[97]*work.L[75]-work.L[76]*work.d[98]*work.L[76]-work.L[77]*work.d[99]*work.L[77]-work.L[78]*work.d[100]*work.L[78]-1*work.d[103]*1;
  residual += temp*temp;

  temp = work.KKT[0]-1*work.d[0]*1;
  residual += temp*temp;

  temp = work.KKT[2]-1*work.d[1]*1;
  residual += temp*temp;

  temp = work.KKT[4]-1*work.d[2]*1;
  residual += temp*temp;

  temp = work.KKT[6]-1*work.d[3]*1;
  residual += temp*temp;

  temp = work.KKT[8]-1*work.d[4]*1;
  residual += temp*temp;

  temp = work.KKT[10]-1*work.d[5]*1;
  residual += temp*temp;

  temp = work.KKT[12]-1*work.d[6]*1;
  residual += temp*temp;

  temp = work.KKT[14]-1*work.d[7]*1;
  residual += temp*temp;

  temp = work.KKT[16]-1*work.d[8]*1;
  residual += temp*temp;

  temp = work.KKT[18]-1*work.d[9]*1;
  residual += temp*temp;

  temp = work.KKT[20]-1*work.d[10]*1;
  residual += temp*temp;

  temp = work.KKT[22]-1*work.d[11]*1;
  residual += temp*temp;

  temp = work.KKT[24]-1*work.d[12]*1;
  residual += temp*temp;

  temp = work.KKT[26]-1*work.d[13]*1;
  residual += temp*temp;

  temp = work.KKT[28]-1*work.d[14]*1;
  residual += temp*temp;

  temp = work.KKT[30]-1*work.d[15]*1;
  residual += temp*temp;

  temp = work.KKT[32]-1*work.d[16]*1;
  residual += temp*temp;

  temp = work.KKT[34]-1*work.d[17]*1;
  residual += temp*temp;

  temp = work.KKT[36]-1*work.d[18]*1;
  residual += temp*temp;

  temp = work.KKT[38]-1*work.d[19]*1;
  residual += temp*temp;

  temp = work.KKT[40]-1*work.d[20]*1;
  residual += temp*temp;

  temp = work.KKT[42]-1*work.d[21]*1;
  residual += temp*temp;

  temp = work.KKT[44]-1*work.d[22]*1;
  residual += temp*temp;

  temp = work.KKT[46]-1*work.d[23]*1;
  residual += temp*temp;

  temp = work.KKT[48]-1*work.d[24]*1;
  residual += temp*temp;

  temp = work.KKT[50]-1*work.d[25]*1;
  residual += temp*temp;

  temp = work.KKT[52]-1*work.d[26]*1;
  residual += temp*temp;

  temp = work.KKT[54]-1*work.d[27]*1;
  residual += temp*temp;

  temp = work.KKT[56]-1*work.d[28]*1;
  residual += temp*temp;

  temp = work.KKT[58]-1*work.d[29]*1;
  residual += temp*temp;

  temp = work.KKT[60]-1*work.d[30]*1;
  residual += temp*temp;

  temp = work.KKT[62]-1*work.d[31]*1;
  residual += temp*temp;

  temp = work.KKT[64]-1*work.d[32]*1;
  residual += temp*temp;

  temp = work.KKT[66]-1*work.d[33]*1;
  residual += temp*temp;

  temp = work.KKT[68]-1*work.d[34]*1;
  residual += temp*temp;

  temp = work.KKT[70]-1*work.d[35]*1;
  residual += temp*temp;

  temp = work.KKT[72]-1*work.d[36]*1;
  residual += temp*temp;

  temp = work.KKT[74]-1*work.d[37]*1;
  residual += temp*temp;

  temp = work.KKT[76]-1*work.d[38]*1;
  residual += temp*temp;

  temp = work.KKT[78]-1*work.d[39]*1;
  residual += temp*temp;

  temp = work.KKT[80]-1*work.d[40]*1;
  residual += temp*temp;

  temp = work.KKT[82]-1*work.d[41]*1;
  residual += temp*temp;

  temp = work.KKT[84]-1*work.d[42]*1;
  residual += temp*temp;

  temp = work.KKT[86]-1*work.d[43]*1;
  residual += temp*temp;

  temp = work.KKT[1]-work.L[0]*work.d[0]*1;
  residual += temp*temp;

  temp = work.KKT[3]-work.L[1]*work.d[1]*1;
  residual += temp*temp;

  temp = work.KKT[5]-work.L[2]*work.d[2]*1;
  residual += temp*temp;

  temp = work.KKT[7]-work.L[3]*work.d[3]*1;
  residual += temp*temp;

  temp = work.KKT[9]-work.L[4]*work.d[4]*1;
  residual += temp*temp;

  temp = work.KKT[11]-work.L[5]*work.d[5]*1;
  residual += temp*temp;

  temp = work.KKT[13]-work.L[6]*work.d[6]*1;
  residual += temp*temp;

  temp = work.KKT[15]-work.L[7]*work.d[7]*1;
  residual += temp*temp;

  temp = work.KKT[17]-work.L[8]*work.d[8]*1;
  residual += temp*temp;

  temp = work.KKT[19]-work.L[9]*work.d[9]*1;
  residual += temp*temp;

  temp = work.KKT[21]-work.L[10]*work.d[10]*1;
  residual += temp*temp;

  temp = work.KKT[23]-work.L[11]*work.d[11]*1;
  residual += temp*temp;

  temp = work.KKT[25]-work.L[12]*work.d[12]*1;
  residual += temp*temp;

  temp = work.KKT[27]-work.L[13]*work.d[13]*1;
  residual += temp*temp;

  temp = work.KKT[29]-work.L[14]*work.d[14]*1;
  residual += temp*temp;

  temp = work.KKT[31]-work.L[15]*work.d[15]*1;
  residual += temp*temp;

  temp = work.KKT[33]-work.L[16]*work.d[16]*1;
  residual += temp*temp;

  temp = work.KKT[35]-work.L[17]*work.d[17]*1;
  residual += temp*temp;

  temp = work.KKT[37]-work.L[18]*work.d[18]*1;
  residual += temp*temp;

  temp = work.KKT[39]-work.L[19]*work.d[19]*1;
  residual += temp*temp;

  temp = work.KKT[41]-work.L[20]*work.d[20]*1;
  residual += temp*temp;

  temp = work.KKT[43]-work.L[21]*work.d[21]*1;
  residual += temp*temp;

  temp = work.KKT[45]-work.L[22]*work.d[22]*1;
  residual += temp*temp;

  temp = work.KKT[47]-work.L[23]*work.d[23]*1;
  residual += temp*temp;

  temp = work.KKT[49]-work.L[24]*work.d[24]*1;
  residual += temp*temp;

  temp = work.KKT[51]-work.L[25]*work.d[25]*1;
  residual += temp*temp;

  temp = work.KKT[53]-work.L[26]*work.d[26]*1;
  residual += temp*temp;

  temp = work.KKT[55]-work.L[27]*work.d[27]*1;
  residual += temp*temp;

  temp = work.KKT[57]-work.L[28]*work.d[28]*1;
  residual += temp*temp;

  temp = work.KKT[59]-work.L[29]*work.d[29]*1;
  residual += temp*temp;

  temp = work.KKT[61]-work.L[30]*work.d[30]*1;
  residual += temp*temp;

  temp = work.KKT[63]-work.L[31]*work.d[31]*1;
  residual += temp*temp;

  temp = work.KKT[65]-work.L[32]*work.d[32]*1;
  residual += temp*temp;

  temp = work.KKT[67]-work.L[33]*work.d[33]*1;
  residual += temp*temp;

  temp = work.KKT[69]-work.L[34]*work.d[34]*1;
  residual += temp*temp;

  temp = work.KKT[71]-work.L[35]*work.d[35]*1;
  residual += temp*temp;

  temp = work.KKT[73]-work.L[36]*work.d[36]*1;
  residual += temp*temp;

  temp = work.KKT[75]-work.L[37]*work.d[37]*1;
  residual += temp*temp;

  temp = work.KKT[77]-work.L[38]*work.d[38]*1;
  residual += temp*temp;

  temp = work.KKT[79]-work.L[39]*work.d[39]*1;
  residual += temp*temp;

  temp = work.KKT[81]-work.L[40]*work.d[40]*1;
  residual += temp*temp;

  temp = work.KKT[83]-work.L[41]*work.d[41]*1;
  residual += temp*temp;

  temp = work.KKT[85]-work.L[42]*work.d[42]*1;
  residual += temp*temp;

  temp = work.KKT[87]-work.L[47]*work.d[43]*1;
  residual += temp*temp;

  temp = work.KKT[88]-work.L[0]*work.d[0]*work.L[0]-1*work.d[44]*1;
  residual += temp*temp;

  temp = work.KKT[90]-work.L[1]*work.d[1]*work.L[1]-1*work.d[45]*1;
  residual += temp*temp;

  temp = work.KKT[92]-work.L[2]*work.d[2]*work.L[2]-1*work.d[46]*1;
  residual += temp*temp;

  temp = work.KKT[94]-work.L[3]*work.d[3]*work.L[3]-1*work.d[47]*1;
  residual += temp*temp;

  temp = work.KKT[96]-work.L[4]*work.d[4]*work.L[4]-1*work.d[48]*1;
  residual += temp*temp;

  temp = work.KKT[98]-work.L[5]*work.d[5]*work.L[5]-1*work.d[49]*1;
  residual += temp*temp;

  temp = work.KKT[100]-work.L[6]*work.d[6]*work.L[6]-1*work.d[50]*1;
  residual += temp*temp;

  temp = work.KKT[102]-work.L[7]*work.d[7]*work.L[7]-1*work.d[51]*1;
  residual += temp*temp;

  temp = work.KKT[104]-work.L[8]*work.d[8]*work.L[8]-1*work.d[52]*1;
  residual += temp*temp;

  temp = work.KKT[106]-work.L[9]*work.d[9]*work.L[9]-1*work.d[53]*1;
  residual += temp*temp;

  temp = work.KKT[108]-work.L[10]*work.d[10]*work.L[10]-1*work.d[54]*1;
  residual += temp*temp;

  temp = work.KKT[110]-work.L[11]*work.d[11]*work.L[11]-1*work.d[55]*1;
  residual += temp*temp;

  temp = work.KKT[112]-work.L[12]*work.d[12]*work.L[12]-1*work.d[56]*1;
  residual += temp*temp;

  temp = work.KKT[114]-work.L[13]*work.d[13]*work.L[13]-1*work.d[57]*1;
  residual += temp*temp;

  temp = work.KKT[116]-work.L[14]*work.d[14]*work.L[14]-1*work.d[58]*1;
  residual += temp*temp;

  temp = work.KKT[118]-work.L[15]*work.d[15]*work.L[15]-1*work.d[59]*1;
  residual += temp*temp;

  temp = work.KKT[120]-work.L[16]*work.d[16]*work.L[16]-1*work.d[60]*1;
  residual += temp*temp;

  temp = work.KKT[122]-work.L[17]*work.d[17]*work.L[17]-1*work.d[61]*1;
  residual += temp*temp;

  temp = work.KKT[124]-work.L[18]*work.d[18]*work.L[18]-1*work.d[62]*1;
  residual += temp*temp;

  temp = work.KKT[126]-work.L[19]*work.d[19]*work.L[19]-1*work.d[63]*1;
  residual += temp*temp;

  temp = work.KKT[128]-work.L[20]*work.d[20]*work.L[20]-1*work.d[64]*1;
  residual += temp*temp;

  temp = work.KKT[130]-work.L[21]*work.d[21]*work.L[21]-1*work.d[65]*1;
  residual += temp*temp;

  temp = work.KKT[132]-work.L[22]*work.d[22]*work.L[22]-1*work.d[66]*1;
  residual += temp*temp;

  temp = work.KKT[134]-work.L[23]*work.d[23]*work.L[23]-1*work.d[67]*1;
  residual += temp*temp;

  temp = work.KKT[136]-work.L[24]*work.d[24]*work.L[24]-1*work.d[68]*1;
  residual += temp*temp;

  temp = work.KKT[138]-work.L[25]*work.d[25]*work.L[25]-1*work.d[69]*1;
  residual += temp*temp;

  temp = work.KKT[140]-work.L[26]*work.d[26]*work.L[26]-1*work.d[70]*1;
  residual += temp*temp;

  temp = work.KKT[142]-work.L[27]*work.d[27]*work.L[27]-1*work.d[71]*1;
  residual += temp*temp;

  temp = work.KKT[144]-work.L[28]*work.d[28]*work.L[28]-1*work.d[72]*1;
  residual += temp*temp;

  temp = work.KKT[146]-work.L[29]*work.d[29]*work.L[29]-1*work.d[73]*1;
  residual += temp*temp;

  temp = work.KKT[148]-work.L[30]*work.d[30]*work.L[30]-1*work.d[74]*1;
  residual += temp*temp;

  temp = work.KKT[150]-work.L[31]*work.d[31]*work.L[31]-1*work.d[75]*1;
  residual += temp*temp;

  temp = work.KKT[152]-work.L[32]*work.d[32]*work.L[32]-1*work.d[76]*1;
  residual += temp*temp;

  temp = work.KKT[154]-work.L[33]*work.d[33]*work.L[33]-1*work.d[77]*1;
  residual += temp*temp;

  temp = work.KKT[156]-work.L[34]*work.d[34]*work.L[34]-1*work.d[78]*1;
  residual += temp*temp;

  temp = work.KKT[158]-work.L[35]*work.d[35]*work.L[35]-1*work.d[79]*1;
  residual += temp*temp;

  temp = work.KKT[160]-work.L[36]*work.d[36]*work.L[36]-1*work.d[80]*1;
  residual += temp*temp;

  temp = work.KKT[162]-work.L[37]*work.d[37]*work.L[37]-1*work.d[81]*1;
  residual += temp*temp;

  temp = work.KKT[164]-work.L[38]*work.d[38]*work.L[38]-1*work.d[82]*1;
  residual += temp*temp;

  temp = work.KKT[166]-work.L[39]*work.d[39]*work.L[39]-1*work.d[83]*1;
  residual += temp*temp;

  temp = work.KKT[168]-work.L[40]*work.d[40]*work.L[40]-1*work.d[84]*1;
  residual += temp*temp;

  temp = work.KKT[170]-work.L[41]*work.d[41]*work.L[41]-1*work.d[85]*1;
  residual += temp*temp;

  temp = work.KKT[172]-work.L[42]*work.d[42]*work.L[42]-1*work.d[86]*1;
  residual += temp*temp;

  temp = work.KKT[178]-work.L[47]*work.d[43]*work.L[47]-1*work.d[89]*1-work.L[48]*work.d[88]*work.L[48];
  residual += temp*temp;

  temp = work.KKT[89]-1*work.d[44]*work.L[49];
  residual += temp*temp;

  temp = work.KKT[91]-1*work.d[45]*work.L[56];
  residual += temp*temp;

  temp = work.KKT[93]-1*work.d[46]*work.L[665];
  residual += temp*temp;

  temp = work.KKT[95]-1*work.d[47]*work.L[667];
  residual += temp*temp;

  temp = work.KKT[97]-1*work.d[48]*work.L[590];
  residual += temp*temp;

  temp = work.KKT[99]-1*work.d[49]*work.L[592];
  residual += temp*temp;

  temp = work.KKT[101]-1*work.d[50]*work.L[515];
  residual += temp*temp;

  temp = work.KKT[103]-1*work.d[51]*work.L[517];
  residual += temp*temp;

  temp = work.KKT[105]-1*work.d[52]*work.L[440];
  residual += temp*temp;

  temp = work.KKT[107]-1*work.d[53]*work.L[442];
  residual += temp*temp;

  temp = work.KKT[109]-1*work.d[54]*work.L[365];
  residual += temp*temp;

  temp = work.KKT[111]-1*work.d[55]*work.L[367];
  residual += temp*temp;

  temp = work.KKT[113]-1*work.d[56]*work.L[290];
  residual += temp*temp;

  temp = work.KKT[115]-1*work.d[57]*work.L[292];
  residual += temp*temp;

  temp = work.KKT[117]-1*work.d[58]*work.L[215];
  residual += temp*temp;

  temp = work.KKT[119]-1*work.d[59]*work.L[217];
  residual += temp*temp;

  temp = work.KKT[121]-1*work.d[60]*work.L[140];
  residual += temp*temp;

  temp = work.KKT[123]-1*work.d[61]*work.L[142];
  residual += temp*temp;

  temp = work.KKT[125]-1*work.d[62]*work.L[70];
  residual += temp*temp;

  temp = work.KKT[127]-1*work.d[63]*work.L[72];
  residual += temp*temp;

  temp = work.KKT[129]-1*work.d[64]*work.L[43];
  residual += temp*temp;

  temp = work.KKT[131]-1*work.d[65]*work.L[45];
  residual += temp*temp;

  temp = work.KKT[133]-1*work.d[66]*work.L[50];
  residual += temp*temp;

  temp = work.KKT[135]-1*work.d[67]*work.L[57];
  residual += temp*temp;

  temp = work.KKT[137]-1*work.d[68]*work.L[666];
  residual += temp*temp;

  temp = work.KKT[139]-1*work.d[69]*work.L[668];
  residual += temp*temp;

  temp = work.KKT[141]-1*work.d[70]*work.L[591];
  residual += temp*temp;

  temp = work.KKT[143]-1*work.d[71]*work.L[593];
  residual += temp*temp;

  temp = work.KKT[145]-1*work.d[72]*work.L[516];
  residual += temp*temp;

  temp = work.KKT[147]-1*work.d[73]*work.L[518];
  residual += temp*temp;

  temp = work.KKT[149]-1*work.d[74]*work.L[441];
  residual += temp*temp;

  temp = work.KKT[151]-1*work.d[75]*work.L[443];
  residual += temp*temp;

  temp = work.KKT[153]-1*work.d[76]*work.L[366];
  residual += temp*temp;

  temp = work.KKT[155]-1*work.d[77]*work.L[368];
  residual += temp*temp;

  temp = work.KKT[157]-1*work.d[78]*work.L[291];
  residual += temp*temp;

  temp = work.KKT[159]-1*work.d[79]*work.L[293];
  residual += temp*temp;

  temp = work.KKT[161]-1*work.d[80]*work.L[216];
  residual += temp*temp;

  temp = work.KKT[163]-1*work.d[81]*work.L[218];
  residual += temp*temp;

  temp = work.KKT[165]-1*work.d[82]*work.L[141];
  residual += temp*temp;

  temp = work.KKT[167]-1*work.d[83]*work.L[143];
  residual += temp*temp;

  temp = work.KKT[169]-1*work.d[84]*work.L[71];
  residual += temp*temp;

  temp = work.KKT[171]-1*work.d[85]*work.L[73];
  residual += temp*temp;

  temp = work.KKT[173]-1*work.d[86]*work.L[44];
  residual += temp*temp;

  temp = work.KKT[177]-work.L[48]*work.d[88]*1;
  residual += temp*temp;

  temp = work.KKT[179]-1*work.d[90]*work.L[51];
  residual += temp*temp;

  temp = work.KKT[180]-1*work.d[90]*work.L[58];
  residual += temp*temp;

  temp = work.KKT[182]-1*work.d[91]*work.L[52];
  residual += temp*temp;

  temp = work.KKT[183]-1*work.d[91]*work.L[59];
  residual += temp*temp;

  temp = work.KKT[185]-1*work.d[92]*work.L[53];
  residual += temp*temp;

  temp = work.KKT[186]-1*work.d[92]*work.L[60];
  residual += temp*temp;

  temp = work.KKT[188]-1*work.d[93]*work.L[54];
  residual += temp*temp;

  temp = work.KKT[189]-1*work.d[93]*work.L[61];
  residual += temp*temp;

  temp = work.KKT[191]-1*work.d[94]*work.L[55];
  residual += temp*temp;

  temp = work.KKT[192]-1*work.d[94]*work.L[62];
  residual += temp*temp;

  temp = work.KKT[181]-1*work.d[90]*work.L[670];
  residual += temp*temp;

  temp = work.KKT[184]-1*work.d[91]*work.L[673];
  residual += temp*temp;

  temp = work.KKT[187]-1*work.d[92]*work.L[677];
  residual += temp*temp;

  temp = work.KKT[190]-1*work.d[93]*work.L[682];
  residual += temp*temp;

  temp = work.KKT[193]-1*work.d[94]*work.L[688];
  residual += temp*temp;

  temp = work.KKT[681]-work.L[708]*work.d[197]*1;
  residual += temp*temp;

  temp = work.KKT[687]-work.L[708]*work.d[197]*work.L[669]-work.L[709]*work.d[198]*1;
  residual += temp*temp;

  temp = work.KKT[682]-work.L[719]*work.d[197]*1;
  residual += temp*temp;

  temp = work.KKT[688]-work.L[719]*work.d[197]*work.L[669]-work.L[720]*work.d[198]*1;
  residual += temp*temp;

  temp = work.KKT[683]-work.L[730]*work.d[197]*1;
  residual += temp*temp;

  temp = work.KKT[689]-work.L[730]*work.d[197]*work.L[669]-work.L[731]*work.d[198]*1;
  residual += temp*temp;

  temp = work.KKT[684]-work.L[741]*work.d[197]*1;
  residual += temp*temp;

  temp = work.KKT[690]-work.L[741]*work.d[197]*work.L[669]-work.L[742]*work.d[198]*1;
  residual += temp*temp;

  temp = work.KKT[685]-work.L[752]*work.d[197]*1;
  residual += temp*temp;

  temp = work.KKT[691]-work.L[752]*work.d[197]*work.L[669]-work.L[753]*work.d[198]*1;
  residual += temp*temp;

  temp = work.KKT[697]-work.L[710]*work.d[199]*1;
  residual += temp*temp;

  temp = work.KKT[706]-work.L[710]*work.d[199]*work.L[676]-work.L[711]*work.d[200]*1;
  residual += temp*temp;

  temp = work.KKT[714]-work.L[710]*work.d[199]*work.L[680]-work.L[711]*work.d[200]*work.L[681]-work.L[712]*work.d[201]*1;
  residual += temp*temp;

  temp = work.KKT[721]-work.L[710]*work.d[199]*work.L[685]-work.L[711]*work.d[200]*work.L[686]-work.L[712]*work.d[201]*work.L[687]-work.L[713]*work.d[202]*1;
  residual += temp*temp;

  temp = work.KKT[727]-work.L[710]*work.d[199]*work.L[691]-work.L[711]*work.d[200]*work.L[692]-work.L[712]*work.d[201]*work.L[693]-work.L[713]*work.d[202]*work.L[694]-work.L[714]*work.d[203]*1;
  residual += temp*temp;

  temp = work.KKT[698]-work.L[721]*work.d[199]*1;
  residual += temp*temp;

  temp = work.KKT[707]-work.L[721]*work.d[199]*work.L[676]-work.L[722]*work.d[200]*1;
  residual += temp*temp;

  temp = work.KKT[715]-work.L[721]*work.d[199]*work.L[680]-work.L[722]*work.d[200]*work.L[681]-work.L[723]*work.d[201]*1;
  residual += temp*temp;

  temp = work.KKT[722]-work.L[721]*work.d[199]*work.L[685]-work.L[722]*work.d[200]*work.L[686]-work.L[723]*work.d[201]*work.L[687]-work.L[724]*work.d[202]*1;
  residual += temp*temp;

  temp = work.KKT[728]-work.L[721]*work.d[199]*work.L[691]-work.L[722]*work.d[200]*work.L[692]-work.L[723]*work.d[201]*work.L[693]-work.L[724]*work.d[202]*work.L[694]-work.L[725]*work.d[203]*1;
  residual += temp*temp;

  temp = work.KKT[699]-work.L[732]*work.d[199]*1;
  residual += temp*temp;

  temp = work.KKT[708]-work.L[732]*work.d[199]*work.L[676]-work.L[733]*work.d[200]*1;
  residual += temp*temp;

  temp = work.KKT[716]-work.L[732]*work.d[199]*work.L[680]-work.L[733]*work.d[200]*work.L[681]-work.L[734]*work.d[201]*1;
  residual += temp*temp;

  temp = work.KKT[723]-work.L[732]*work.d[199]*work.L[685]-work.L[733]*work.d[200]*work.L[686]-work.L[734]*work.d[201]*work.L[687]-work.L[735]*work.d[202]*1;
  residual += temp*temp;

  temp = work.KKT[729]-work.L[732]*work.d[199]*work.L[691]-work.L[733]*work.d[200]*work.L[692]-work.L[734]*work.d[201]*work.L[693]-work.L[735]*work.d[202]*work.L[694]-work.L[736]*work.d[203]*1;
  residual += temp*temp;

  temp = work.KKT[700]-work.L[743]*work.d[199]*1;
  residual += temp*temp;

  temp = work.KKT[709]-work.L[743]*work.d[199]*work.L[676]-work.L[744]*work.d[200]*1;
  residual += temp*temp;

  temp = work.KKT[717]-work.L[743]*work.d[199]*work.L[680]-work.L[744]*work.d[200]*work.L[681]-work.L[745]*work.d[201]*1;
  residual += temp*temp;

  temp = work.KKT[724]-work.L[743]*work.d[199]*work.L[685]-work.L[744]*work.d[200]*work.L[686]-work.L[745]*work.d[201]*work.L[687]-work.L[746]*work.d[202]*1;
  residual += temp*temp;

  temp = work.KKT[730]-work.L[743]*work.d[199]*work.L[691]-work.L[744]*work.d[200]*work.L[692]-work.L[745]*work.d[201]*work.L[693]-work.L[746]*work.d[202]*work.L[694]-work.L[747]*work.d[203]*1;
  residual += temp*temp;

  temp = work.KKT[701]-work.L[754]*work.d[199]*1;
  residual += temp*temp;

  temp = work.KKT[710]-work.L[754]*work.d[199]*work.L[676]-work.L[755]*work.d[200]*1;
  residual += temp*temp;

  temp = work.KKT[718]-work.L[754]*work.d[199]*work.L[680]-work.L[755]*work.d[200]*work.L[681]-work.L[756]*work.d[201]*1;
  residual += temp*temp;

  temp = work.KKT[725]-work.L[754]*work.d[199]*work.L[685]-work.L[755]*work.d[200]*work.L[686]-work.L[756]*work.d[201]*work.L[687]-work.L[757]*work.d[202]*1;
  residual += temp*temp;

  temp = work.KKT[731]-work.L[754]*work.d[199]*work.L[691]-work.L[755]*work.d[200]*work.L[692]-work.L[756]*work.d[201]*work.L[693]-work.L[757]*work.d[202]*work.L[694]-work.L[758]*work.d[203]*1;
  residual += temp*temp;

  temp = work.KKT[666]-work.L[704]*work.d[193]*1;
  residual += temp*temp;

  temp = work.KKT[671]-work.L[716]*work.d[194]*1;
  residual += temp*temp;

  temp = work.KKT[675]-work.L[728]*work.d[195]*1;
  residual += temp*temp;

  temp = work.KKT[678]-work.L[740]*work.d[196]*1;
  residual += temp*temp;

  temp = work.KKT[733]-work.L[759]*work.d[204]*1;
  residual += temp*temp;

  temp = work.KKT[623]-work.L[608]*work.d[185]*1;
  residual += temp*temp;

  temp = work.KKT[629]-work.L[608]*work.d[185]*work.L[594]-work.L[609]*work.d[186]*1;
  residual += temp*temp;

  temp = work.KKT[624]-work.L[614]*work.d[185]*1;
  residual += temp*temp;

  temp = work.KKT[630]-work.L[614]*work.d[185]*work.L[594]-work.L[615]*work.d[186]*1;
  residual += temp*temp;

  temp = work.KKT[625]-work.L[620]*work.d[185]*1;
  residual += temp*temp;

  temp = work.KKT[631]-work.L[620]*work.d[185]*work.L[594]-work.L[621]*work.d[186]*1;
  residual += temp*temp;

  temp = work.KKT[626]-work.L[626]*work.d[185]*1;
  residual += temp*temp;

  temp = work.KKT[632]-work.L[626]*work.d[185]*work.L[594]-work.L[627]*work.d[186]*1;
  residual += temp*temp;

  temp = work.KKT[627]-work.L[632]*work.d[185]*1;
  residual += temp*temp;

  temp = work.KKT[633]-work.L[632]*work.d[185]*work.L[594]-work.L[633]*work.d[186]*1;
  residual += temp*temp;

  temp = work.KKT[636]-1*work.d[188]*work.L[639];
  residual += temp*temp;

  temp = work.KKT[637]-1*work.d[188]*work.L[644];
  residual += temp*temp;

  temp = work.KKT[638]-1*work.d[188]*work.L[650];
  residual += temp*temp;

  temp = work.KKT[639]-1*work.d[188]*work.L[657];
  residual += temp*temp;

  temp = work.KKT[640]-1*work.d[188]*work.L[695];
  residual += temp*temp;

  temp = work.KKT[641]-1*work.d[189]*work.L[640]-work.L[617]*work.d[188]*work.L[639];
  residual += temp*temp;

  temp = work.KKT[642]-1*work.d[189]*work.L[645]-work.L[617]*work.d[188]*work.L[644];
  residual += temp*temp;

  temp = work.KKT[643]-1*work.d[189]*work.L[651]-work.L[617]*work.d[188]*work.L[650];
  residual += temp*temp;

  temp = work.KKT[644]-1*work.d[189]*work.L[658]-work.L[617]*work.d[188]*work.L[657];
  residual += temp*temp;

  temp = work.KKT[645]-1*work.d[189]*work.L[696]-work.L[617]*work.d[188]*work.L[695];
  residual += temp*temp;

  temp = work.KKT[646]-1*work.d[190]*work.L[641]-work.L[623]*work.d[188]*work.L[639]-work.L[624]*work.d[189]*work.L[640];
  residual += temp*temp;

  temp = work.KKT[647]-1*work.d[190]*work.L[646]-work.L[623]*work.d[188]*work.L[644]-work.L[624]*work.d[189]*work.L[645];
  residual += temp*temp;

  temp = work.KKT[648]-1*work.d[190]*work.L[652]-work.L[623]*work.d[188]*work.L[650]-work.L[624]*work.d[189]*work.L[651];
  residual += temp*temp;

  temp = work.KKT[649]-1*work.d[190]*work.L[659]-work.L[623]*work.d[188]*work.L[657]-work.L[624]*work.d[189]*work.L[658];
  residual += temp*temp;

  temp = work.KKT[650]-1*work.d[190]*work.L[697]-work.L[623]*work.d[188]*work.L[695]-work.L[624]*work.d[189]*work.L[696];
  residual += temp*temp;

  temp = work.KKT[651]-1*work.d[191]*work.L[642]-work.L[629]*work.d[188]*work.L[639]-work.L[630]*work.d[189]*work.L[640]-work.L[631]*work.d[190]*work.L[641];
  residual += temp*temp;

  temp = work.KKT[652]-1*work.d[191]*work.L[647]-work.L[629]*work.d[188]*work.L[644]-work.L[630]*work.d[189]*work.L[645]-work.L[631]*work.d[190]*work.L[646];
  residual += temp*temp;

  temp = work.KKT[653]-1*work.d[191]*work.L[653]-work.L[629]*work.d[188]*work.L[650]-work.L[630]*work.d[189]*work.L[651]-work.L[631]*work.d[190]*work.L[652];
  residual += temp*temp;

  temp = work.KKT[654]-1*work.d[191]*work.L[660]-work.L[629]*work.d[188]*work.L[657]-work.L[630]*work.d[189]*work.L[658]-work.L[631]*work.d[190]*work.L[659];
  residual += temp*temp;

  temp = work.KKT[655]-1*work.d[191]*work.L[698]-work.L[629]*work.d[188]*work.L[695]-work.L[630]*work.d[189]*work.L[696]-work.L[631]*work.d[190]*work.L[697];
  residual += temp*temp;

  temp = work.KKT[656]-work.L[635]*work.d[188]*work.L[639]-work.L[636]*work.d[189]*work.L[640]-work.L[637]*work.d[190]*work.L[641]-work.L[638]*work.d[191]*work.L[642]-1*work.d[192]*work.L[643];
  residual += temp*temp;

  temp = work.KKT[657]-work.L[635]*work.d[188]*work.L[644]-work.L[636]*work.d[189]*work.L[645]-work.L[637]*work.d[190]*work.L[646]-work.L[638]*work.d[191]*work.L[647]-1*work.d[192]*work.L[648];
  residual += temp*temp;

  temp = work.KKT[658]-work.L[635]*work.d[188]*work.L[650]-work.L[636]*work.d[189]*work.L[651]-work.L[637]*work.d[190]*work.L[652]-work.L[638]*work.d[191]*work.L[653]-1*work.d[192]*work.L[654];
  residual += temp*temp;

  temp = work.KKT[659]-work.L[635]*work.d[188]*work.L[657]-work.L[636]*work.d[189]*work.L[658]-work.L[637]*work.d[190]*work.L[659]-work.L[638]*work.d[191]*work.L[660]-1*work.d[192]*work.L[661];
  residual += temp*temp;

  temp = work.KKT[660]-work.L[635]*work.d[188]*work.L[695]-work.L[636]*work.d[189]*work.L[696]-work.L[637]*work.d[190]*work.L[697]-work.L[638]*work.d[191]*work.L[698]-1*work.d[192]*work.L[699];
  residual += temp*temp;

  temp = work.KKT[608]-work.L[604]*work.d[181]*1;
  residual += temp*temp;

  temp = work.KKT[613]-work.L[611]*work.d[182]*1;
  residual += temp*temp;

  temp = work.KKT[617]-work.L[618]*work.d[183]*1;
  residual += temp*temp;

  temp = work.KKT[620]-work.L[625]*work.d[184]*1;
  residual += temp*temp;

  temp = work.KKT[635]-work.L[634]*work.d[187]*1;
  residual += temp*temp;

  temp = work.KKT[565]-work.L[533]*work.d[173]*1;
  residual += temp*temp;

  temp = work.KKT[571]-work.L[533]*work.d[173]*work.L[519]-work.L[534]*work.d[174]*1;
  residual += temp*temp;

  temp = work.KKT[566]-work.L[539]*work.d[173]*1;
  residual += temp*temp;

  temp = work.KKT[572]-work.L[539]*work.d[173]*work.L[519]-work.L[540]*work.d[174]*1;
  residual += temp*temp;

  temp = work.KKT[567]-work.L[545]*work.d[173]*1;
  residual += temp*temp;

  temp = work.KKT[573]-work.L[545]*work.d[173]*work.L[519]-work.L[546]*work.d[174]*1;
  residual += temp*temp;

  temp = work.KKT[568]-work.L[551]*work.d[173]*1;
  residual += temp*temp;

  temp = work.KKT[574]-work.L[551]*work.d[173]*work.L[519]-work.L[552]*work.d[174]*1;
  residual += temp*temp;

  temp = work.KKT[569]-work.L[557]*work.d[173]*1;
  residual += temp*temp;

  temp = work.KKT[575]-work.L[557]*work.d[173]*work.L[519]-work.L[558]*work.d[174]*1;
  residual += temp*temp;

  temp = work.KKT[578]-1*work.d[176]*work.L[564];
  residual += temp*temp;

  temp = work.KKT[579]-1*work.d[176]*work.L[569];
  residual += temp*temp;

  temp = work.KKT[580]-1*work.d[176]*work.L[575];
  residual += temp*temp;

  temp = work.KKT[581]-1*work.d[176]*work.L[582];
  residual += temp*temp;

  temp = work.KKT[582]-1*work.d[176]*work.L[595];
  residual += temp*temp;

  temp = work.KKT[583]-1*work.d[177]*work.L[565]-work.L[542]*work.d[176]*work.L[564];
  residual += temp*temp;

  temp = work.KKT[584]-1*work.d[177]*work.L[570]-work.L[542]*work.d[176]*work.L[569];
  residual += temp*temp;

  temp = work.KKT[585]-1*work.d[177]*work.L[576]-work.L[542]*work.d[176]*work.L[575];
  residual += temp*temp;

  temp = work.KKT[586]-1*work.d[177]*work.L[583]-work.L[542]*work.d[176]*work.L[582];
  residual += temp*temp;

  temp = work.KKT[587]-1*work.d[177]*work.L[596]-work.L[542]*work.d[176]*work.L[595];
  residual += temp*temp;

  temp = work.KKT[588]-1*work.d[178]*work.L[566]-work.L[548]*work.d[176]*work.L[564]-work.L[549]*work.d[177]*work.L[565];
  residual += temp*temp;

  temp = work.KKT[589]-1*work.d[178]*work.L[571]-work.L[548]*work.d[176]*work.L[569]-work.L[549]*work.d[177]*work.L[570];
  residual += temp*temp;

  temp = work.KKT[590]-1*work.d[178]*work.L[577]-work.L[548]*work.d[176]*work.L[575]-work.L[549]*work.d[177]*work.L[576];
  residual += temp*temp;

  temp = work.KKT[591]-1*work.d[178]*work.L[584]-work.L[548]*work.d[176]*work.L[582]-work.L[549]*work.d[177]*work.L[583];
  residual += temp*temp;

  temp = work.KKT[592]-1*work.d[178]*work.L[597]-work.L[548]*work.d[176]*work.L[595]-work.L[549]*work.d[177]*work.L[596];
  residual += temp*temp;

  temp = work.KKT[593]-1*work.d[179]*work.L[567]-work.L[554]*work.d[176]*work.L[564]-work.L[555]*work.d[177]*work.L[565]-work.L[556]*work.d[178]*work.L[566];
  residual += temp*temp;

  temp = work.KKT[594]-1*work.d[179]*work.L[572]-work.L[554]*work.d[176]*work.L[569]-work.L[555]*work.d[177]*work.L[570]-work.L[556]*work.d[178]*work.L[571];
  residual += temp*temp;

  temp = work.KKT[595]-1*work.d[179]*work.L[578]-work.L[554]*work.d[176]*work.L[575]-work.L[555]*work.d[177]*work.L[576]-work.L[556]*work.d[178]*work.L[577];
  residual += temp*temp;

  temp = work.KKT[596]-1*work.d[179]*work.L[585]-work.L[554]*work.d[176]*work.L[582]-work.L[555]*work.d[177]*work.L[583]-work.L[556]*work.d[178]*work.L[584];
  residual += temp*temp;

  temp = work.KKT[597]-1*work.d[179]*work.L[598]-work.L[554]*work.d[176]*work.L[595]-work.L[555]*work.d[177]*work.L[596]-work.L[556]*work.d[178]*work.L[597];
  residual += temp*temp;

  temp = work.KKT[598]-work.L[560]*work.d[176]*work.L[564]-work.L[561]*work.d[177]*work.L[565]-work.L[562]*work.d[178]*work.L[566]-work.L[563]*work.d[179]*work.L[567]-1*work.d[180]*work.L[568];
  residual += temp*temp;

  temp = work.KKT[599]-work.L[560]*work.d[176]*work.L[569]-work.L[561]*work.d[177]*work.L[570]-work.L[562]*work.d[178]*work.L[571]-work.L[563]*work.d[179]*work.L[572]-1*work.d[180]*work.L[573];
  residual += temp*temp;

  temp = work.KKT[600]-work.L[560]*work.d[176]*work.L[575]-work.L[561]*work.d[177]*work.L[576]-work.L[562]*work.d[178]*work.L[577]-work.L[563]*work.d[179]*work.L[578]-1*work.d[180]*work.L[579];
  residual += temp*temp;

  temp = work.KKT[601]-work.L[560]*work.d[176]*work.L[582]-work.L[561]*work.d[177]*work.L[583]-work.L[562]*work.d[178]*work.L[584]-work.L[563]*work.d[179]*work.L[585]-1*work.d[180]*work.L[586];
  residual += temp*temp;

  temp = work.KKT[602]-work.L[560]*work.d[176]*work.L[595]-work.L[561]*work.d[177]*work.L[596]-work.L[562]*work.d[178]*work.L[597]-work.L[563]*work.d[179]*work.L[598]-1*work.d[180]*work.L[599];
  residual += temp*temp;

  temp = work.KKT[550]-work.L[529]*work.d[169]*1;
  residual += temp*temp;

  temp = work.KKT[555]-work.L[536]*work.d[170]*1;
  residual += temp*temp;

  temp = work.KKT[559]-work.L[543]*work.d[171]*1;
  residual += temp*temp;

  temp = work.KKT[562]-work.L[550]*work.d[172]*1;
  residual += temp*temp;

  temp = work.KKT[577]-work.L[559]*work.d[175]*1;
  residual += temp*temp;

  temp = work.KKT[507]-work.L[458]*work.d[161]*1;
  residual += temp*temp;

  temp = work.KKT[513]-work.L[458]*work.d[161]*work.L[444]-work.L[459]*work.d[162]*1;
  residual += temp*temp;

  temp = work.KKT[508]-work.L[464]*work.d[161]*1;
  residual += temp*temp;

  temp = work.KKT[514]-work.L[464]*work.d[161]*work.L[444]-work.L[465]*work.d[162]*1;
  residual += temp*temp;

  temp = work.KKT[509]-work.L[470]*work.d[161]*1;
  residual += temp*temp;

  temp = work.KKT[515]-work.L[470]*work.d[161]*work.L[444]-work.L[471]*work.d[162]*1;
  residual += temp*temp;

  temp = work.KKT[510]-work.L[476]*work.d[161]*1;
  residual += temp*temp;

  temp = work.KKT[516]-work.L[476]*work.d[161]*work.L[444]-work.L[477]*work.d[162]*1;
  residual += temp*temp;

  temp = work.KKT[511]-work.L[482]*work.d[161]*1;
  residual += temp*temp;

  temp = work.KKT[517]-work.L[482]*work.d[161]*work.L[444]-work.L[483]*work.d[162]*1;
  residual += temp*temp;

  temp = work.KKT[520]-1*work.d[164]*work.L[489];
  residual += temp*temp;

  temp = work.KKT[521]-1*work.d[164]*work.L[494];
  residual += temp*temp;

  temp = work.KKT[522]-1*work.d[164]*work.L[500];
  residual += temp*temp;

  temp = work.KKT[523]-1*work.d[164]*work.L[507];
  residual += temp*temp;

  temp = work.KKT[524]-1*work.d[164]*work.L[520];
  residual += temp*temp;

  temp = work.KKT[525]-1*work.d[165]*work.L[490]-work.L[467]*work.d[164]*work.L[489];
  residual += temp*temp;

  temp = work.KKT[526]-1*work.d[165]*work.L[495]-work.L[467]*work.d[164]*work.L[494];
  residual += temp*temp;

  temp = work.KKT[527]-1*work.d[165]*work.L[501]-work.L[467]*work.d[164]*work.L[500];
  residual += temp*temp;

  temp = work.KKT[528]-1*work.d[165]*work.L[508]-work.L[467]*work.d[164]*work.L[507];
  residual += temp*temp;

  temp = work.KKT[529]-1*work.d[165]*work.L[521]-work.L[467]*work.d[164]*work.L[520];
  residual += temp*temp;

  temp = work.KKT[530]-1*work.d[166]*work.L[491]-work.L[473]*work.d[164]*work.L[489]-work.L[474]*work.d[165]*work.L[490];
  residual += temp*temp;

  temp = work.KKT[531]-1*work.d[166]*work.L[496]-work.L[473]*work.d[164]*work.L[494]-work.L[474]*work.d[165]*work.L[495];
  residual += temp*temp;

  temp = work.KKT[532]-1*work.d[166]*work.L[502]-work.L[473]*work.d[164]*work.L[500]-work.L[474]*work.d[165]*work.L[501];
  residual += temp*temp;

  temp = work.KKT[533]-1*work.d[166]*work.L[509]-work.L[473]*work.d[164]*work.L[507]-work.L[474]*work.d[165]*work.L[508];
  residual += temp*temp;

  temp = work.KKT[534]-1*work.d[166]*work.L[522]-work.L[473]*work.d[164]*work.L[520]-work.L[474]*work.d[165]*work.L[521];
  residual += temp*temp;

  temp = work.KKT[535]-1*work.d[167]*work.L[492]-work.L[479]*work.d[164]*work.L[489]-work.L[480]*work.d[165]*work.L[490]-work.L[481]*work.d[166]*work.L[491];
  residual += temp*temp;

  temp = work.KKT[536]-1*work.d[167]*work.L[497]-work.L[479]*work.d[164]*work.L[494]-work.L[480]*work.d[165]*work.L[495]-work.L[481]*work.d[166]*work.L[496];
  residual += temp*temp;

  temp = work.KKT[537]-1*work.d[167]*work.L[503]-work.L[479]*work.d[164]*work.L[500]-work.L[480]*work.d[165]*work.L[501]-work.L[481]*work.d[166]*work.L[502];
  residual += temp*temp;

  temp = work.KKT[538]-1*work.d[167]*work.L[510]-work.L[479]*work.d[164]*work.L[507]-work.L[480]*work.d[165]*work.L[508]-work.L[481]*work.d[166]*work.L[509];
  residual += temp*temp;

  temp = work.KKT[539]-1*work.d[167]*work.L[523]-work.L[479]*work.d[164]*work.L[520]-work.L[480]*work.d[165]*work.L[521]-work.L[481]*work.d[166]*work.L[522];
  residual += temp*temp;

  temp = work.KKT[540]-work.L[485]*work.d[164]*work.L[489]-work.L[486]*work.d[165]*work.L[490]-work.L[487]*work.d[166]*work.L[491]-work.L[488]*work.d[167]*work.L[492]-1*work.d[168]*work.L[493];
  residual += temp*temp;

  temp = work.KKT[541]-work.L[485]*work.d[164]*work.L[494]-work.L[486]*work.d[165]*work.L[495]-work.L[487]*work.d[166]*work.L[496]-work.L[488]*work.d[167]*work.L[497]-1*work.d[168]*work.L[498];
  residual += temp*temp;

  temp = work.KKT[542]-work.L[485]*work.d[164]*work.L[500]-work.L[486]*work.d[165]*work.L[501]-work.L[487]*work.d[166]*work.L[502]-work.L[488]*work.d[167]*work.L[503]-1*work.d[168]*work.L[504];
  residual += temp*temp;

  temp = work.KKT[543]-work.L[485]*work.d[164]*work.L[507]-work.L[486]*work.d[165]*work.L[508]-work.L[487]*work.d[166]*work.L[509]-work.L[488]*work.d[167]*work.L[510]-1*work.d[168]*work.L[511];
  residual += temp*temp;

  temp = work.KKT[544]-work.L[485]*work.d[164]*work.L[520]-work.L[486]*work.d[165]*work.L[521]-work.L[487]*work.d[166]*work.L[522]-work.L[488]*work.d[167]*work.L[523]-1*work.d[168]*work.L[524];
  residual += temp*temp;

  temp = work.KKT[492]-work.L[454]*work.d[157]*1;
  residual += temp*temp;

  temp = work.KKT[497]-work.L[461]*work.d[158]*1;
  residual += temp*temp;

  temp = work.KKT[501]-work.L[468]*work.d[159]*1;
  residual += temp*temp;

  temp = work.KKT[504]-work.L[475]*work.d[160]*1;
  residual += temp*temp;

  temp = work.KKT[519]-work.L[484]*work.d[163]*1;
  residual += temp*temp;

  temp = work.KKT[449]-work.L[383]*work.d[149]*1;
  residual += temp*temp;

  temp = work.KKT[455]-work.L[383]*work.d[149]*work.L[369]-work.L[384]*work.d[150]*1;
  residual += temp*temp;

  temp = work.KKT[450]-work.L[389]*work.d[149]*1;
  residual += temp*temp;

  temp = work.KKT[456]-work.L[389]*work.d[149]*work.L[369]-work.L[390]*work.d[150]*1;
  residual += temp*temp;

  temp = work.KKT[451]-work.L[395]*work.d[149]*1;
  residual += temp*temp;

  temp = work.KKT[457]-work.L[395]*work.d[149]*work.L[369]-work.L[396]*work.d[150]*1;
  residual += temp*temp;

  temp = work.KKT[452]-work.L[401]*work.d[149]*1;
  residual += temp*temp;

  temp = work.KKT[458]-work.L[401]*work.d[149]*work.L[369]-work.L[402]*work.d[150]*1;
  residual += temp*temp;

  temp = work.KKT[453]-work.L[407]*work.d[149]*1;
  residual += temp*temp;

  temp = work.KKT[459]-work.L[407]*work.d[149]*work.L[369]-work.L[408]*work.d[150]*1;
  residual += temp*temp;

  temp = work.KKT[462]-1*work.d[152]*work.L[414];
  residual += temp*temp;

  temp = work.KKT[463]-1*work.d[152]*work.L[419];
  residual += temp*temp;

  temp = work.KKT[464]-1*work.d[152]*work.L[425];
  residual += temp*temp;

  temp = work.KKT[465]-1*work.d[152]*work.L[432];
  residual += temp*temp;

  temp = work.KKT[466]-1*work.d[152]*work.L[445];
  residual += temp*temp;

  temp = work.KKT[467]-1*work.d[153]*work.L[415]-work.L[392]*work.d[152]*work.L[414];
  residual += temp*temp;

  temp = work.KKT[468]-1*work.d[153]*work.L[420]-work.L[392]*work.d[152]*work.L[419];
  residual += temp*temp;

  temp = work.KKT[469]-1*work.d[153]*work.L[426]-work.L[392]*work.d[152]*work.L[425];
  residual += temp*temp;

  temp = work.KKT[470]-1*work.d[153]*work.L[433]-work.L[392]*work.d[152]*work.L[432];
  residual += temp*temp;

  temp = work.KKT[471]-1*work.d[153]*work.L[446]-work.L[392]*work.d[152]*work.L[445];
  residual += temp*temp;

  temp = work.KKT[472]-1*work.d[154]*work.L[416]-work.L[398]*work.d[152]*work.L[414]-work.L[399]*work.d[153]*work.L[415];
  residual += temp*temp;

  temp = work.KKT[473]-1*work.d[154]*work.L[421]-work.L[398]*work.d[152]*work.L[419]-work.L[399]*work.d[153]*work.L[420];
  residual += temp*temp;

  temp = work.KKT[474]-1*work.d[154]*work.L[427]-work.L[398]*work.d[152]*work.L[425]-work.L[399]*work.d[153]*work.L[426];
  residual += temp*temp;

  temp = work.KKT[475]-1*work.d[154]*work.L[434]-work.L[398]*work.d[152]*work.L[432]-work.L[399]*work.d[153]*work.L[433];
  residual += temp*temp;

  temp = work.KKT[476]-1*work.d[154]*work.L[447]-work.L[398]*work.d[152]*work.L[445]-work.L[399]*work.d[153]*work.L[446];
  residual += temp*temp;

  temp = work.KKT[477]-1*work.d[155]*work.L[417]-work.L[404]*work.d[152]*work.L[414]-work.L[405]*work.d[153]*work.L[415]-work.L[406]*work.d[154]*work.L[416];
  residual += temp*temp;

  temp = work.KKT[478]-1*work.d[155]*work.L[422]-work.L[404]*work.d[152]*work.L[419]-work.L[405]*work.d[153]*work.L[420]-work.L[406]*work.d[154]*work.L[421];
  residual += temp*temp;

  temp = work.KKT[479]-1*work.d[155]*work.L[428]-work.L[404]*work.d[152]*work.L[425]-work.L[405]*work.d[153]*work.L[426]-work.L[406]*work.d[154]*work.L[427];
  residual += temp*temp;

  temp = work.KKT[480]-1*work.d[155]*work.L[435]-work.L[404]*work.d[152]*work.L[432]-work.L[405]*work.d[153]*work.L[433]-work.L[406]*work.d[154]*work.L[434];
  residual += temp*temp;

  temp = work.KKT[481]-1*work.d[155]*work.L[448]-work.L[404]*work.d[152]*work.L[445]-work.L[405]*work.d[153]*work.L[446]-work.L[406]*work.d[154]*work.L[447];
  residual += temp*temp;

  temp = work.KKT[482]-work.L[410]*work.d[152]*work.L[414]-work.L[411]*work.d[153]*work.L[415]-work.L[412]*work.d[154]*work.L[416]-work.L[413]*work.d[155]*work.L[417]-1*work.d[156]*work.L[418];
  residual += temp*temp;

  temp = work.KKT[483]-work.L[410]*work.d[152]*work.L[419]-work.L[411]*work.d[153]*work.L[420]-work.L[412]*work.d[154]*work.L[421]-work.L[413]*work.d[155]*work.L[422]-1*work.d[156]*work.L[423];
  residual += temp*temp;

  temp = work.KKT[484]-work.L[410]*work.d[152]*work.L[425]-work.L[411]*work.d[153]*work.L[426]-work.L[412]*work.d[154]*work.L[427]-work.L[413]*work.d[155]*work.L[428]-1*work.d[156]*work.L[429];
  residual += temp*temp;

  temp = work.KKT[485]-work.L[410]*work.d[152]*work.L[432]-work.L[411]*work.d[153]*work.L[433]-work.L[412]*work.d[154]*work.L[434]-work.L[413]*work.d[155]*work.L[435]-1*work.d[156]*work.L[436];
  residual += temp*temp;

  temp = work.KKT[486]-work.L[410]*work.d[152]*work.L[445]-work.L[411]*work.d[153]*work.L[446]-work.L[412]*work.d[154]*work.L[447]-work.L[413]*work.d[155]*work.L[448]-1*work.d[156]*work.L[449];
  residual += temp*temp;

  temp = work.KKT[434]-work.L[379]*work.d[145]*1;
  residual += temp*temp;

  temp = work.KKT[439]-work.L[386]*work.d[146]*1;
  residual += temp*temp;

  temp = work.KKT[443]-work.L[393]*work.d[147]*1;
  residual += temp*temp;

  temp = work.KKT[446]-work.L[400]*work.d[148]*1;
  residual += temp*temp;

  temp = work.KKT[461]-work.L[409]*work.d[151]*1;
  residual += temp*temp;

  temp = work.KKT[391]-work.L[308]*work.d[137]*1;
  residual += temp*temp;

  temp = work.KKT[397]-work.L[308]*work.d[137]*work.L[294]-work.L[309]*work.d[138]*1;
  residual += temp*temp;

  temp = work.KKT[392]-work.L[314]*work.d[137]*1;
  residual += temp*temp;

  temp = work.KKT[398]-work.L[314]*work.d[137]*work.L[294]-work.L[315]*work.d[138]*1;
  residual += temp*temp;

  temp = work.KKT[393]-work.L[320]*work.d[137]*1;
  residual += temp*temp;

  temp = work.KKT[399]-work.L[320]*work.d[137]*work.L[294]-work.L[321]*work.d[138]*1;
  residual += temp*temp;

  temp = work.KKT[394]-work.L[326]*work.d[137]*1;
  residual += temp*temp;

  temp = work.KKT[400]-work.L[326]*work.d[137]*work.L[294]-work.L[327]*work.d[138]*1;
  residual += temp*temp;

  temp = work.KKT[395]-work.L[332]*work.d[137]*1;
  residual += temp*temp;

  temp = work.KKT[401]-work.L[332]*work.d[137]*work.L[294]-work.L[333]*work.d[138]*1;
  residual += temp*temp;

  temp = work.KKT[404]-1*work.d[140]*work.L[339];
  residual += temp*temp;

  temp = work.KKT[405]-1*work.d[140]*work.L[344];
  residual += temp*temp;

  temp = work.KKT[406]-1*work.d[140]*work.L[350];
  residual += temp*temp;

  temp = work.KKT[407]-1*work.d[140]*work.L[357];
  residual += temp*temp;

  temp = work.KKT[408]-1*work.d[140]*work.L[370];
  residual += temp*temp;

  temp = work.KKT[409]-1*work.d[141]*work.L[340]-work.L[317]*work.d[140]*work.L[339];
  residual += temp*temp;

  temp = work.KKT[410]-1*work.d[141]*work.L[345]-work.L[317]*work.d[140]*work.L[344];
  residual += temp*temp;

  temp = work.KKT[411]-1*work.d[141]*work.L[351]-work.L[317]*work.d[140]*work.L[350];
  residual += temp*temp;

  temp = work.KKT[412]-1*work.d[141]*work.L[358]-work.L[317]*work.d[140]*work.L[357];
  residual += temp*temp;

  temp = work.KKT[413]-1*work.d[141]*work.L[371]-work.L[317]*work.d[140]*work.L[370];
  residual += temp*temp;

  temp = work.KKT[414]-1*work.d[142]*work.L[341]-work.L[323]*work.d[140]*work.L[339]-work.L[324]*work.d[141]*work.L[340];
  residual += temp*temp;

  temp = work.KKT[415]-1*work.d[142]*work.L[346]-work.L[323]*work.d[140]*work.L[344]-work.L[324]*work.d[141]*work.L[345];
  residual += temp*temp;

  temp = work.KKT[416]-1*work.d[142]*work.L[352]-work.L[323]*work.d[140]*work.L[350]-work.L[324]*work.d[141]*work.L[351];
  residual += temp*temp;

  temp = work.KKT[417]-1*work.d[142]*work.L[359]-work.L[323]*work.d[140]*work.L[357]-work.L[324]*work.d[141]*work.L[358];
  residual += temp*temp;

  temp = work.KKT[418]-1*work.d[142]*work.L[372]-work.L[323]*work.d[140]*work.L[370]-work.L[324]*work.d[141]*work.L[371];
  residual += temp*temp;

  temp = work.KKT[419]-1*work.d[143]*work.L[342]-work.L[329]*work.d[140]*work.L[339]-work.L[330]*work.d[141]*work.L[340]-work.L[331]*work.d[142]*work.L[341];
  residual += temp*temp;

  temp = work.KKT[420]-1*work.d[143]*work.L[347]-work.L[329]*work.d[140]*work.L[344]-work.L[330]*work.d[141]*work.L[345]-work.L[331]*work.d[142]*work.L[346];
  residual += temp*temp;

  temp = work.KKT[421]-1*work.d[143]*work.L[353]-work.L[329]*work.d[140]*work.L[350]-work.L[330]*work.d[141]*work.L[351]-work.L[331]*work.d[142]*work.L[352];
  residual += temp*temp;

  temp = work.KKT[422]-1*work.d[143]*work.L[360]-work.L[329]*work.d[140]*work.L[357]-work.L[330]*work.d[141]*work.L[358]-work.L[331]*work.d[142]*work.L[359];
  residual += temp*temp;

  temp = work.KKT[423]-1*work.d[143]*work.L[373]-work.L[329]*work.d[140]*work.L[370]-work.L[330]*work.d[141]*work.L[371]-work.L[331]*work.d[142]*work.L[372];
  residual += temp*temp;

  temp = work.KKT[424]-work.L[335]*work.d[140]*work.L[339]-work.L[336]*work.d[141]*work.L[340]-work.L[337]*work.d[142]*work.L[341]-work.L[338]*work.d[143]*work.L[342]-1*work.d[144]*work.L[343];
  residual += temp*temp;

  temp = work.KKT[425]-work.L[335]*work.d[140]*work.L[344]-work.L[336]*work.d[141]*work.L[345]-work.L[337]*work.d[142]*work.L[346]-work.L[338]*work.d[143]*work.L[347]-1*work.d[144]*work.L[348];
  residual += temp*temp;

  temp = work.KKT[426]-work.L[335]*work.d[140]*work.L[350]-work.L[336]*work.d[141]*work.L[351]-work.L[337]*work.d[142]*work.L[352]-work.L[338]*work.d[143]*work.L[353]-1*work.d[144]*work.L[354];
  residual += temp*temp;

  temp = work.KKT[427]-work.L[335]*work.d[140]*work.L[357]-work.L[336]*work.d[141]*work.L[358]-work.L[337]*work.d[142]*work.L[359]-work.L[338]*work.d[143]*work.L[360]-1*work.d[144]*work.L[361];
  residual += temp*temp;

  temp = work.KKT[428]-work.L[335]*work.d[140]*work.L[370]-work.L[336]*work.d[141]*work.L[371]-work.L[337]*work.d[142]*work.L[372]-work.L[338]*work.d[143]*work.L[373]-1*work.d[144]*work.L[374];
  residual += temp*temp;

  temp = work.KKT[376]-work.L[304]*work.d[133]*1;
  residual += temp*temp;

  temp = work.KKT[381]-work.L[311]*work.d[134]*1;
  residual += temp*temp;

  temp = work.KKT[385]-work.L[318]*work.d[135]*1;
  residual += temp*temp;

  temp = work.KKT[388]-work.L[325]*work.d[136]*1;
  residual += temp*temp;

  temp = work.KKT[403]-work.L[334]*work.d[139]*1;
  residual += temp*temp;

  temp = work.KKT[333]-work.L[233]*work.d[125]*1;
  residual += temp*temp;

  temp = work.KKT[339]-work.L[233]*work.d[125]*work.L[219]-work.L[234]*work.d[126]*1;
  residual += temp*temp;

  temp = work.KKT[334]-work.L[239]*work.d[125]*1;
  residual += temp*temp;

  temp = work.KKT[340]-work.L[239]*work.d[125]*work.L[219]-work.L[240]*work.d[126]*1;
  residual += temp*temp;

  temp = work.KKT[335]-work.L[245]*work.d[125]*1;
  residual += temp*temp;

  temp = work.KKT[341]-work.L[245]*work.d[125]*work.L[219]-work.L[246]*work.d[126]*1;
  residual += temp*temp;

  temp = work.KKT[336]-work.L[251]*work.d[125]*1;
  residual += temp*temp;

  temp = work.KKT[342]-work.L[251]*work.d[125]*work.L[219]-work.L[252]*work.d[126]*1;
  residual += temp*temp;

  temp = work.KKT[337]-work.L[257]*work.d[125]*1;
  residual += temp*temp;

  temp = work.KKT[343]-work.L[257]*work.d[125]*work.L[219]-work.L[258]*work.d[126]*1;
  residual += temp*temp;

  temp = work.KKT[346]-1*work.d[128]*work.L[264];
  residual += temp*temp;

  temp = work.KKT[347]-1*work.d[128]*work.L[269];
  residual += temp*temp;

  temp = work.KKT[348]-1*work.d[128]*work.L[275];
  residual += temp*temp;

  temp = work.KKT[349]-1*work.d[128]*work.L[282];
  residual += temp*temp;

  temp = work.KKT[350]-1*work.d[128]*work.L[295];
  residual += temp*temp;

  temp = work.KKT[351]-1*work.d[129]*work.L[265]-work.L[242]*work.d[128]*work.L[264];
  residual += temp*temp;

  temp = work.KKT[352]-1*work.d[129]*work.L[270]-work.L[242]*work.d[128]*work.L[269];
  residual += temp*temp;

  temp = work.KKT[353]-1*work.d[129]*work.L[276]-work.L[242]*work.d[128]*work.L[275];
  residual += temp*temp;

  temp = work.KKT[354]-1*work.d[129]*work.L[283]-work.L[242]*work.d[128]*work.L[282];
  residual += temp*temp;

  temp = work.KKT[355]-1*work.d[129]*work.L[296]-work.L[242]*work.d[128]*work.L[295];
  residual += temp*temp;

  temp = work.KKT[356]-1*work.d[130]*work.L[266]-work.L[248]*work.d[128]*work.L[264]-work.L[249]*work.d[129]*work.L[265];
  residual += temp*temp;

  temp = work.KKT[357]-1*work.d[130]*work.L[271]-work.L[248]*work.d[128]*work.L[269]-work.L[249]*work.d[129]*work.L[270];
  residual += temp*temp;

  temp = work.KKT[358]-1*work.d[130]*work.L[277]-work.L[248]*work.d[128]*work.L[275]-work.L[249]*work.d[129]*work.L[276];
  residual += temp*temp;

  temp = work.KKT[359]-1*work.d[130]*work.L[284]-work.L[248]*work.d[128]*work.L[282]-work.L[249]*work.d[129]*work.L[283];
  residual += temp*temp;

  temp = work.KKT[360]-1*work.d[130]*work.L[297]-work.L[248]*work.d[128]*work.L[295]-work.L[249]*work.d[129]*work.L[296];
  residual += temp*temp;

  temp = work.KKT[361]-1*work.d[131]*work.L[267]-work.L[254]*work.d[128]*work.L[264]-work.L[255]*work.d[129]*work.L[265]-work.L[256]*work.d[130]*work.L[266];
  residual += temp*temp;

  temp = work.KKT[362]-1*work.d[131]*work.L[272]-work.L[254]*work.d[128]*work.L[269]-work.L[255]*work.d[129]*work.L[270]-work.L[256]*work.d[130]*work.L[271];
  residual += temp*temp;

  temp = work.KKT[363]-1*work.d[131]*work.L[278]-work.L[254]*work.d[128]*work.L[275]-work.L[255]*work.d[129]*work.L[276]-work.L[256]*work.d[130]*work.L[277];
  residual += temp*temp;

  temp = work.KKT[364]-1*work.d[131]*work.L[285]-work.L[254]*work.d[128]*work.L[282]-work.L[255]*work.d[129]*work.L[283]-work.L[256]*work.d[130]*work.L[284];
  residual += temp*temp;

  temp = work.KKT[365]-1*work.d[131]*work.L[298]-work.L[254]*work.d[128]*work.L[295]-work.L[255]*work.d[129]*work.L[296]-work.L[256]*work.d[130]*work.L[297];
  residual += temp*temp;

  temp = work.KKT[366]-work.L[260]*work.d[128]*work.L[264]-work.L[261]*work.d[129]*work.L[265]-work.L[262]*work.d[130]*work.L[266]-work.L[263]*work.d[131]*work.L[267]-1*work.d[132]*work.L[268];
  residual += temp*temp;

  temp = work.KKT[367]-work.L[260]*work.d[128]*work.L[269]-work.L[261]*work.d[129]*work.L[270]-work.L[262]*work.d[130]*work.L[271]-work.L[263]*work.d[131]*work.L[272]-1*work.d[132]*work.L[273];
  residual += temp*temp;

  temp = work.KKT[368]-work.L[260]*work.d[128]*work.L[275]-work.L[261]*work.d[129]*work.L[276]-work.L[262]*work.d[130]*work.L[277]-work.L[263]*work.d[131]*work.L[278]-1*work.d[132]*work.L[279];
  residual += temp*temp;

  temp = work.KKT[369]-work.L[260]*work.d[128]*work.L[282]-work.L[261]*work.d[129]*work.L[283]-work.L[262]*work.d[130]*work.L[284]-work.L[263]*work.d[131]*work.L[285]-1*work.d[132]*work.L[286];
  residual += temp*temp;

  temp = work.KKT[370]-work.L[260]*work.d[128]*work.L[295]-work.L[261]*work.d[129]*work.L[296]-work.L[262]*work.d[130]*work.L[297]-work.L[263]*work.d[131]*work.L[298]-1*work.d[132]*work.L[299];
  residual += temp*temp;

  temp = work.KKT[318]-work.L[229]*work.d[121]*1;
  residual += temp*temp;

  temp = work.KKT[323]-work.L[236]*work.d[122]*1;
  residual += temp*temp;

  temp = work.KKT[327]-work.L[243]*work.d[123]*1;
  residual += temp*temp;

  temp = work.KKT[330]-work.L[250]*work.d[124]*1;
  residual += temp*temp;

  temp = work.KKT[345]-work.L[259]*work.d[127]*1;
  residual += temp*temp;

  temp = work.KKT[275]-work.L[158]*work.d[113]*1;
  residual += temp*temp;

  temp = work.KKT[281]-work.L[158]*work.d[113]*work.L[144]-work.L[159]*work.d[114]*1;
  residual += temp*temp;

  temp = work.KKT[276]-work.L[164]*work.d[113]*1;
  residual += temp*temp;

  temp = work.KKT[282]-work.L[164]*work.d[113]*work.L[144]-work.L[165]*work.d[114]*1;
  residual += temp*temp;

  temp = work.KKT[277]-work.L[170]*work.d[113]*1;
  residual += temp*temp;

  temp = work.KKT[283]-work.L[170]*work.d[113]*work.L[144]-work.L[171]*work.d[114]*1;
  residual += temp*temp;

  temp = work.KKT[278]-work.L[176]*work.d[113]*1;
  residual += temp*temp;

  temp = work.KKT[284]-work.L[176]*work.d[113]*work.L[144]-work.L[177]*work.d[114]*1;
  residual += temp*temp;

  temp = work.KKT[279]-work.L[182]*work.d[113]*1;
  residual += temp*temp;

  temp = work.KKT[285]-work.L[182]*work.d[113]*work.L[144]-work.L[183]*work.d[114]*1;
  residual += temp*temp;

  temp = work.KKT[288]-1*work.d[116]*work.L[189];
  residual += temp*temp;

  temp = work.KKT[289]-1*work.d[116]*work.L[194];
  residual += temp*temp;

  temp = work.KKT[290]-1*work.d[116]*work.L[200];
  residual += temp*temp;

  temp = work.KKT[291]-1*work.d[116]*work.L[207];
  residual += temp*temp;

  temp = work.KKT[292]-1*work.d[116]*work.L[220];
  residual += temp*temp;

  temp = work.KKT[293]-1*work.d[117]*work.L[190]-work.L[167]*work.d[116]*work.L[189];
  residual += temp*temp;

  temp = work.KKT[294]-1*work.d[117]*work.L[195]-work.L[167]*work.d[116]*work.L[194];
  residual += temp*temp;

  temp = work.KKT[295]-1*work.d[117]*work.L[201]-work.L[167]*work.d[116]*work.L[200];
  residual += temp*temp;

  temp = work.KKT[296]-1*work.d[117]*work.L[208]-work.L[167]*work.d[116]*work.L[207];
  residual += temp*temp;

  temp = work.KKT[297]-1*work.d[117]*work.L[221]-work.L[167]*work.d[116]*work.L[220];
  residual += temp*temp;

  temp = work.KKT[298]-1*work.d[118]*work.L[191]-work.L[173]*work.d[116]*work.L[189]-work.L[174]*work.d[117]*work.L[190];
  residual += temp*temp;

  temp = work.KKT[299]-1*work.d[118]*work.L[196]-work.L[173]*work.d[116]*work.L[194]-work.L[174]*work.d[117]*work.L[195];
  residual += temp*temp;

  temp = work.KKT[300]-1*work.d[118]*work.L[202]-work.L[173]*work.d[116]*work.L[200]-work.L[174]*work.d[117]*work.L[201];
  residual += temp*temp;

  temp = work.KKT[301]-1*work.d[118]*work.L[209]-work.L[173]*work.d[116]*work.L[207]-work.L[174]*work.d[117]*work.L[208];
  residual += temp*temp;

  temp = work.KKT[302]-1*work.d[118]*work.L[222]-work.L[173]*work.d[116]*work.L[220]-work.L[174]*work.d[117]*work.L[221];
  residual += temp*temp;

  temp = work.KKT[303]-1*work.d[119]*work.L[192]-work.L[179]*work.d[116]*work.L[189]-work.L[180]*work.d[117]*work.L[190]-work.L[181]*work.d[118]*work.L[191];
  residual += temp*temp;

  temp = work.KKT[304]-1*work.d[119]*work.L[197]-work.L[179]*work.d[116]*work.L[194]-work.L[180]*work.d[117]*work.L[195]-work.L[181]*work.d[118]*work.L[196];
  residual += temp*temp;

  temp = work.KKT[305]-1*work.d[119]*work.L[203]-work.L[179]*work.d[116]*work.L[200]-work.L[180]*work.d[117]*work.L[201]-work.L[181]*work.d[118]*work.L[202];
  residual += temp*temp;

  temp = work.KKT[306]-1*work.d[119]*work.L[210]-work.L[179]*work.d[116]*work.L[207]-work.L[180]*work.d[117]*work.L[208]-work.L[181]*work.d[118]*work.L[209];
  residual += temp*temp;

  temp = work.KKT[307]-1*work.d[119]*work.L[223]-work.L[179]*work.d[116]*work.L[220]-work.L[180]*work.d[117]*work.L[221]-work.L[181]*work.d[118]*work.L[222];
  residual += temp*temp;

  temp = work.KKT[308]-work.L[185]*work.d[116]*work.L[189]-work.L[186]*work.d[117]*work.L[190]-work.L[187]*work.d[118]*work.L[191]-work.L[188]*work.d[119]*work.L[192]-1*work.d[120]*work.L[193];
  residual += temp*temp;

  temp = work.KKT[309]-work.L[185]*work.d[116]*work.L[194]-work.L[186]*work.d[117]*work.L[195]-work.L[187]*work.d[118]*work.L[196]-work.L[188]*work.d[119]*work.L[197]-1*work.d[120]*work.L[198];
  residual += temp*temp;

  temp = work.KKT[310]-work.L[185]*work.d[116]*work.L[200]-work.L[186]*work.d[117]*work.L[201]-work.L[187]*work.d[118]*work.L[202]-work.L[188]*work.d[119]*work.L[203]-1*work.d[120]*work.L[204];
  residual += temp*temp;

  temp = work.KKT[311]-work.L[185]*work.d[116]*work.L[207]-work.L[186]*work.d[117]*work.L[208]-work.L[187]*work.d[118]*work.L[209]-work.L[188]*work.d[119]*work.L[210]-1*work.d[120]*work.L[211];
  residual += temp*temp;

  temp = work.KKT[312]-work.L[185]*work.d[116]*work.L[220]-work.L[186]*work.d[117]*work.L[221]-work.L[187]*work.d[118]*work.L[222]-work.L[188]*work.d[119]*work.L[223]-1*work.d[120]*work.L[224];
  residual += temp*temp;

  temp = work.KKT[260]-work.L[154]*work.d[109]*1;
  residual += temp*temp;

  temp = work.KKT[265]-work.L[161]*work.d[110]*1;
  residual += temp*temp;

  temp = work.KKT[269]-work.L[168]*work.d[111]*1;
  residual += temp*temp;

  temp = work.KKT[272]-work.L[175]*work.d[112]*1;
  residual += temp*temp;

  temp = work.KKT[287]-work.L[184]*work.d[115]*1;
  residual += temp*temp;

  temp = work.KKT[217]-work.L[83]*work.d[101]*1;
  residual += temp*temp;

  temp = work.KKT[223]-work.L[83]*work.d[101]*work.L[74]-work.L[84]*work.d[102]*1;
  residual += temp*temp;

  temp = work.KKT[218]-work.L[89]*work.d[101]*1;
  residual += temp*temp;

  temp = work.KKT[224]-work.L[89]*work.d[101]*work.L[74]-work.L[90]*work.d[102]*1;
  residual += temp*temp;

  temp = work.KKT[219]-work.L[95]*work.d[101]*1;
  residual += temp*temp;

  temp = work.KKT[225]-work.L[95]*work.d[101]*work.L[74]-work.L[96]*work.d[102]*1;
  residual += temp*temp;

  temp = work.KKT[220]-work.L[101]*work.d[101]*1;
  residual += temp*temp;

  temp = work.KKT[226]-work.L[101]*work.d[101]*work.L[74]-work.L[102]*work.d[102]*1;
  residual += temp*temp;

  temp = work.KKT[221]-work.L[107]*work.d[101]*1;
  residual += temp*temp;

  temp = work.KKT[227]-work.L[107]*work.d[101]*work.L[74]-work.L[108]*work.d[102]*1;
  residual += temp*temp;

  temp = work.KKT[230]-1*work.d[104]*work.L[114];
  residual += temp*temp;

  temp = work.KKT[231]-1*work.d[104]*work.L[119];
  residual += temp*temp;

  temp = work.KKT[232]-1*work.d[104]*work.L[125];
  residual += temp*temp;

  temp = work.KKT[233]-1*work.d[104]*work.L[132];
  residual += temp*temp;

  temp = work.KKT[234]-1*work.d[104]*work.L[145];
  residual += temp*temp;

  temp = work.KKT[235]-1*work.d[105]*work.L[115]-work.L[92]*work.d[104]*work.L[114];
  residual += temp*temp;

  temp = work.KKT[236]-1*work.d[105]*work.L[120]-work.L[92]*work.d[104]*work.L[119];
  residual += temp*temp;

  temp = work.KKT[237]-1*work.d[105]*work.L[126]-work.L[92]*work.d[104]*work.L[125];
  residual += temp*temp;

  temp = work.KKT[238]-1*work.d[105]*work.L[133]-work.L[92]*work.d[104]*work.L[132];
  residual += temp*temp;

  temp = work.KKT[239]-1*work.d[105]*work.L[146]-work.L[92]*work.d[104]*work.L[145];
  residual += temp*temp;

  temp = work.KKT[240]-1*work.d[106]*work.L[116]-work.L[98]*work.d[104]*work.L[114]-work.L[99]*work.d[105]*work.L[115];
  residual += temp*temp;

  temp = work.KKT[241]-1*work.d[106]*work.L[121]-work.L[98]*work.d[104]*work.L[119]-work.L[99]*work.d[105]*work.L[120];
  residual += temp*temp;

  temp = work.KKT[242]-1*work.d[106]*work.L[127]-work.L[98]*work.d[104]*work.L[125]-work.L[99]*work.d[105]*work.L[126];
  residual += temp*temp;

  temp = work.KKT[243]-1*work.d[106]*work.L[134]-work.L[98]*work.d[104]*work.L[132]-work.L[99]*work.d[105]*work.L[133];
  residual += temp*temp;

  temp = work.KKT[244]-1*work.d[106]*work.L[147]-work.L[98]*work.d[104]*work.L[145]-work.L[99]*work.d[105]*work.L[146];
  residual += temp*temp;

  temp = work.KKT[245]-1*work.d[107]*work.L[117]-work.L[104]*work.d[104]*work.L[114]-work.L[105]*work.d[105]*work.L[115]-work.L[106]*work.d[106]*work.L[116];
  residual += temp*temp;

  temp = work.KKT[246]-1*work.d[107]*work.L[122]-work.L[104]*work.d[104]*work.L[119]-work.L[105]*work.d[105]*work.L[120]-work.L[106]*work.d[106]*work.L[121];
  residual += temp*temp;

  temp = work.KKT[247]-1*work.d[107]*work.L[128]-work.L[104]*work.d[104]*work.L[125]-work.L[105]*work.d[105]*work.L[126]-work.L[106]*work.d[106]*work.L[127];
  residual += temp*temp;

  temp = work.KKT[248]-1*work.d[107]*work.L[135]-work.L[104]*work.d[104]*work.L[132]-work.L[105]*work.d[105]*work.L[133]-work.L[106]*work.d[106]*work.L[134];
  residual += temp*temp;

  temp = work.KKT[249]-1*work.d[107]*work.L[148]-work.L[104]*work.d[104]*work.L[145]-work.L[105]*work.d[105]*work.L[146]-work.L[106]*work.d[106]*work.L[147];
  residual += temp*temp;

  temp = work.KKT[250]-work.L[110]*work.d[104]*work.L[114]-work.L[111]*work.d[105]*work.L[115]-work.L[112]*work.d[106]*work.L[116]-work.L[113]*work.d[107]*work.L[117]-1*work.d[108]*work.L[118];
  residual += temp*temp;

  temp = work.KKT[251]-work.L[110]*work.d[104]*work.L[119]-work.L[111]*work.d[105]*work.L[120]-work.L[112]*work.d[106]*work.L[121]-work.L[113]*work.d[107]*work.L[122]-1*work.d[108]*work.L[123];
  residual += temp*temp;

  temp = work.KKT[252]-work.L[110]*work.d[104]*work.L[125]-work.L[111]*work.d[105]*work.L[126]-work.L[112]*work.d[106]*work.L[127]-work.L[113]*work.d[107]*work.L[128]-1*work.d[108]*work.L[129];
  residual += temp*temp;

  temp = work.KKT[253]-work.L[110]*work.d[104]*work.L[132]-work.L[111]*work.d[105]*work.L[133]-work.L[112]*work.d[106]*work.L[134]-work.L[113]*work.d[107]*work.L[135]-1*work.d[108]*work.L[136];
  residual += temp*temp;

  temp = work.KKT[254]-work.L[110]*work.d[104]*work.L[145]-work.L[111]*work.d[105]*work.L[146]-work.L[112]*work.d[106]*work.L[147]-work.L[113]*work.d[107]*work.L[148]-1*work.d[108]*work.L[149];
  residual += temp*temp;

  temp = work.KKT[202]-work.L[79]*work.d[97]*1;
  residual += temp*temp;

  temp = work.KKT[207]-work.L[86]*work.d[98]*1;
  residual += temp*temp;

  temp = work.KKT[211]-work.L[93]*work.d[99]*1;
  residual += temp*temp;

  temp = work.KKT[214]-work.L[100]*work.d[100]*1;
  residual += temp*temp;

  temp = work.KKT[229]-work.L[109]*work.d[103]*1;
  residual += temp*temp;

  return residual;
}

void matrix_multiply(double *result, double *source) {
  /* Finds result = A*source. */

  result[0] = work.KKT[194]*source[0]+work.KKT[195]*source[1]+work.KKT[89]*source[116]+work.KKT[133]*source[138]+work.KKT[179]*source[160]+work.KKT[182]*source[161]+work.KKT[185]*source[162]+work.KKT[188]*source[163]+work.KKT[191]*source[164];
  result[1] = work.KKT[195]*source[0]+work.KKT[196]*source[1]+work.KKT[91]*source[117]+work.KKT[135]*source[139]+work.KKT[180]*source[160]+work.KKT[183]*source[161]+work.KKT[186]*source[162]+work.KKT[189]*source[163]+work.KKT[192]*source[164];
  result[2] = work.KKT[679]*source[2]+work.KKT[680]*source[3]+work.KKT[93]*source[118]+work.KKT[137]*source[140]+work.KKT[681]*source[165]+work.KKT[682]*source[166]+work.KKT[683]*source[167]+work.KKT[684]*source[168]+work.KKT[685]*source[169];
  result[3] = work.KKT[680]*source[2]+work.KKT[686]*source[3]+work.KKT[95]*source[119]+work.KKT[139]*source[141]+work.KKT[687]*source[165]+work.KKT[688]*source[166]+work.KKT[689]*source[167]+work.KKT[690]*source[168]+work.KKT[691]*source[169];
  result[4] = work.KKT[621]*source[4]+work.KKT[622]*source[5]+work.KKT[97]*source[120]+work.KKT[141]*source[142]+work.KKT[623]*source[170]+work.KKT[624]*source[171]+work.KKT[625]*source[172]+work.KKT[626]*source[173]+work.KKT[627]*source[174];
  result[5] = work.KKT[622]*source[4]+work.KKT[628]*source[5]+work.KKT[99]*source[121]+work.KKT[143]*source[143]+work.KKT[629]*source[170]+work.KKT[630]*source[171]+work.KKT[631]*source[172]+work.KKT[632]*source[173]+work.KKT[633]*source[174];
  result[6] = work.KKT[563]*source[6]+work.KKT[564]*source[7]+work.KKT[101]*source[122]+work.KKT[145]*source[144]+work.KKT[565]*source[175]+work.KKT[566]*source[176]+work.KKT[567]*source[177]+work.KKT[568]*source[178]+work.KKT[569]*source[179];
  result[7] = work.KKT[564]*source[6]+work.KKT[570]*source[7]+work.KKT[103]*source[123]+work.KKT[147]*source[145]+work.KKT[571]*source[175]+work.KKT[572]*source[176]+work.KKT[573]*source[177]+work.KKT[574]*source[178]+work.KKT[575]*source[179];
  result[8] = work.KKT[505]*source[8]+work.KKT[506]*source[9]+work.KKT[105]*source[124]+work.KKT[149]*source[146]+work.KKT[507]*source[180]+work.KKT[508]*source[181]+work.KKT[509]*source[182]+work.KKT[510]*source[183]+work.KKT[511]*source[184];
  result[9] = work.KKT[506]*source[8]+work.KKT[512]*source[9]+work.KKT[107]*source[125]+work.KKT[151]*source[147]+work.KKT[513]*source[180]+work.KKT[514]*source[181]+work.KKT[515]*source[182]+work.KKT[516]*source[183]+work.KKT[517]*source[184];
  result[10] = work.KKT[447]*source[10]+work.KKT[448]*source[11]+work.KKT[109]*source[126]+work.KKT[153]*source[148]+work.KKT[449]*source[185]+work.KKT[450]*source[186]+work.KKT[451]*source[187]+work.KKT[452]*source[188]+work.KKT[453]*source[189];
  result[11] = work.KKT[448]*source[10]+work.KKT[454]*source[11]+work.KKT[111]*source[127]+work.KKT[155]*source[149]+work.KKT[455]*source[185]+work.KKT[456]*source[186]+work.KKT[457]*source[187]+work.KKT[458]*source[188]+work.KKT[459]*source[189];
  result[12] = work.KKT[389]*source[12]+work.KKT[390]*source[13]+work.KKT[113]*source[128]+work.KKT[157]*source[150]+work.KKT[391]*source[190]+work.KKT[392]*source[191]+work.KKT[393]*source[192]+work.KKT[394]*source[193]+work.KKT[395]*source[194];
  result[13] = work.KKT[390]*source[12]+work.KKT[396]*source[13]+work.KKT[115]*source[129]+work.KKT[159]*source[151]+work.KKT[397]*source[190]+work.KKT[398]*source[191]+work.KKT[399]*source[192]+work.KKT[400]*source[193]+work.KKT[401]*source[194];
  result[14] = work.KKT[331]*source[14]+work.KKT[332]*source[15]+work.KKT[117]*source[130]+work.KKT[161]*source[152]+work.KKT[333]*source[195]+work.KKT[334]*source[196]+work.KKT[335]*source[197]+work.KKT[336]*source[198]+work.KKT[337]*source[199];
  result[15] = work.KKT[332]*source[14]+work.KKT[338]*source[15]+work.KKT[119]*source[131]+work.KKT[163]*source[153]+work.KKT[339]*source[195]+work.KKT[340]*source[196]+work.KKT[341]*source[197]+work.KKT[342]*source[198]+work.KKT[343]*source[199];
  result[16] = work.KKT[273]*source[16]+work.KKT[274]*source[17]+work.KKT[121]*source[132]+work.KKT[165]*source[154]+work.KKT[275]*source[200]+work.KKT[276]*source[201]+work.KKT[277]*source[202]+work.KKT[278]*source[203]+work.KKT[279]*source[204];
  result[17] = work.KKT[274]*source[16]+work.KKT[280]*source[17]+work.KKT[123]*source[133]+work.KKT[167]*source[155]+work.KKT[281]*source[200]+work.KKT[282]*source[201]+work.KKT[283]*source[202]+work.KKT[284]*source[203]+work.KKT[285]*source[204];
  result[18] = work.KKT[215]*source[18]+work.KKT[216]*source[19]+work.KKT[125]*source[134]+work.KKT[169]*source[156]+work.KKT[217]*source[205]+work.KKT[218]*source[206]+work.KKT[219]*source[207]+work.KKT[220]*source[208]+work.KKT[221]*source[209];
  result[19] = work.KKT[216]*source[18]+work.KKT[222]*source[19]+work.KKT[127]*source[135]+work.KKT[171]*source[157]+work.KKT[223]*source[205]+work.KKT[224]*source[206]+work.KKT[225]*source[207]+work.KKT[226]*source[208]+work.KKT[227]*source[209];
  result[20] = work.KKT[174]*source[20]+work.KKT[175]*source[21]+work.KKT[129]*source[136]+work.KKT[173]*source[158];
  result[21] = work.KKT[175]*source[20]+work.KKT[176]*source[21]+work.KKT[131]*source[137]+work.KKT[177]*source[159];
  result[22] = work.KKT[692]*source[22]+work.KKT[693]*source[23]+work.KKT[694]*source[24]+work.KKT[695]*source[25]+work.KKT[696]*source[26]+work.KKT[181]*source[160]+work.KKT[697]*source[165]+work.KKT[698]*source[166]+work.KKT[699]*source[167]+work.KKT[700]*source[168]+work.KKT[701]*source[169];
  result[23] = work.KKT[693]*source[22]+work.KKT[702]*source[23]+work.KKT[703]*source[24]+work.KKT[704]*source[25]+work.KKT[705]*source[26]+work.KKT[184]*source[161]+work.KKT[706]*source[165]+work.KKT[707]*source[166]+work.KKT[708]*source[167]+work.KKT[709]*source[168]+work.KKT[710]*source[169];
  result[24] = work.KKT[694]*source[22]+work.KKT[703]*source[23]+work.KKT[711]*source[24]+work.KKT[712]*source[25]+work.KKT[713]*source[26]+work.KKT[187]*source[162]+work.KKT[714]*source[165]+work.KKT[715]*source[166]+work.KKT[716]*source[167]+work.KKT[717]*source[168]+work.KKT[718]*source[169];
  result[25] = work.KKT[695]*source[22]+work.KKT[704]*source[23]+work.KKT[712]*source[24]+work.KKT[719]*source[25]+work.KKT[720]*source[26]+work.KKT[190]*source[163]+work.KKT[721]*source[165]+work.KKT[722]*source[166]+work.KKT[723]*source[167]+work.KKT[724]*source[168]+work.KKT[725]*source[169];
  result[26] = work.KKT[696]*source[22]+work.KKT[705]*source[23]+work.KKT[713]*source[24]+work.KKT[720]*source[25]+work.KKT[726]*source[26]+work.KKT[193]*source[164]+work.KKT[727]*source[165]+work.KKT[728]*source[166]+work.KKT[729]*source[167]+work.KKT[730]*source[168]+work.KKT[731]*source[169];
  result[27] = work.KKT[661]*source[27]+work.KKT[662]*source[28]+work.KKT[663]*source[29]+work.KKT[664]*source[30]+work.KKT[665]*source[31]+work.KKT[666]*source[165]+work.KKT[636]*source[170]+work.KKT[641]*source[171]+work.KKT[646]*source[172]+work.KKT[651]*source[173]+work.KKT[656]*source[174];
  result[28] = work.KKT[662]*source[27]+work.KKT[667]*source[28]+work.KKT[668]*source[29]+work.KKT[669]*source[30]+work.KKT[670]*source[31]+work.KKT[671]*source[166]+work.KKT[637]*source[170]+work.KKT[642]*source[171]+work.KKT[647]*source[172]+work.KKT[652]*source[173]+work.KKT[657]*source[174];
  result[29] = work.KKT[663]*source[27]+work.KKT[668]*source[28]+work.KKT[672]*source[29]+work.KKT[673]*source[30]+work.KKT[674]*source[31]+work.KKT[675]*source[167]+work.KKT[638]*source[170]+work.KKT[643]*source[171]+work.KKT[648]*source[172]+work.KKT[653]*source[173]+work.KKT[658]*source[174];
  result[30] = work.KKT[664]*source[27]+work.KKT[669]*source[28]+work.KKT[673]*source[29]+work.KKT[676]*source[30]+work.KKT[677]*source[31]+work.KKT[678]*source[168]+work.KKT[639]*source[170]+work.KKT[644]*source[171]+work.KKT[649]*source[172]+work.KKT[654]*source[173]+work.KKT[659]*source[174];
  result[31] = work.KKT[665]*source[27]+work.KKT[670]*source[28]+work.KKT[674]*source[29]+work.KKT[677]*source[30]+work.KKT[732]*source[31]+work.KKT[733]*source[169]+work.KKT[640]*source[170]+work.KKT[645]*source[171]+work.KKT[650]*source[172]+work.KKT[655]*source[173]+work.KKT[660]*source[174];
  result[32] = work.KKT[603]*source[32]+work.KKT[604]*source[33]+work.KKT[605]*source[34]+work.KKT[606]*source[35]+work.KKT[607]*source[36]+work.KKT[608]*source[170]+work.KKT[578]*source[175]+work.KKT[583]*source[176]+work.KKT[588]*source[177]+work.KKT[593]*source[178]+work.KKT[598]*source[179];
  result[33] = work.KKT[604]*source[32]+work.KKT[609]*source[33]+work.KKT[610]*source[34]+work.KKT[611]*source[35]+work.KKT[612]*source[36]+work.KKT[613]*source[171]+work.KKT[579]*source[175]+work.KKT[584]*source[176]+work.KKT[589]*source[177]+work.KKT[594]*source[178]+work.KKT[599]*source[179];
  result[34] = work.KKT[605]*source[32]+work.KKT[610]*source[33]+work.KKT[614]*source[34]+work.KKT[615]*source[35]+work.KKT[616]*source[36]+work.KKT[617]*source[172]+work.KKT[580]*source[175]+work.KKT[585]*source[176]+work.KKT[590]*source[177]+work.KKT[595]*source[178]+work.KKT[600]*source[179];
  result[35] = work.KKT[606]*source[32]+work.KKT[611]*source[33]+work.KKT[615]*source[34]+work.KKT[618]*source[35]+work.KKT[619]*source[36]+work.KKT[620]*source[173]+work.KKT[581]*source[175]+work.KKT[586]*source[176]+work.KKT[591]*source[177]+work.KKT[596]*source[178]+work.KKT[601]*source[179];
  result[36] = work.KKT[607]*source[32]+work.KKT[612]*source[33]+work.KKT[616]*source[34]+work.KKT[619]*source[35]+work.KKT[634]*source[36]+work.KKT[635]*source[174]+work.KKT[582]*source[175]+work.KKT[587]*source[176]+work.KKT[592]*source[177]+work.KKT[597]*source[178]+work.KKT[602]*source[179];
  result[37] = work.KKT[545]*source[37]+work.KKT[546]*source[38]+work.KKT[547]*source[39]+work.KKT[548]*source[40]+work.KKT[549]*source[41]+work.KKT[550]*source[175]+work.KKT[520]*source[180]+work.KKT[525]*source[181]+work.KKT[530]*source[182]+work.KKT[535]*source[183]+work.KKT[540]*source[184];
  result[38] = work.KKT[546]*source[37]+work.KKT[551]*source[38]+work.KKT[552]*source[39]+work.KKT[553]*source[40]+work.KKT[554]*source[41]+work.KKT[555]*source[176]+work.KKT[521]*source[180]+work.KKT[526]*source[181]+work.KKT[531]*source[182]+work.KKT[536]*source[183]+work.KKT[541]*source[184];
  result[39] = work.KKT[547]*source[37]+work.KKT[552]*source[38]+work.KKT[556]*source[39]+work.KKT[557]*source[40]+work.KKT[558]*source[41]+work.KKT[559]*source[177]+work.KKT[522]*source[180]+work.KKT[527]*source[181]+work.KKT[532]*source[182]+work.KKT[537]*source[183]+work.KKT[542]*source[184];
  result[40] = work.KKT[548]*source[37]+work.KKT[553]*source[38]+work.KKT[557]*source[39]+work.KKT[560]*source[40]+work.KKT[561]*source[41]+work.KKT[562]*source[178]+work.KKT[523]*source[180]+work.KKT[528]*source[181]+work.KKT[533]*source[182]+work.KKT[538]*source[183]+work.KKT[543]*source[184];
  result[41] = work.KKT[549]*source[37]+work.KKT[554]*source[38]+work.KKT[558]*source[39]+work.KKT[561]*source[40]+work.KKT[576]*source[41]+work.KKT[577]*source[179]+work.KKT[524]*source[180]+work.KKT[529]*source[181]+work.KKT[534]*source[182]+work.KKT[539]*source[183]+work.KKT[544]*source[184];
  result[42] = work.KKT[487]*source[42]+work.KKT[488]*source[43]+work.KKT[489]*source[44]+work.KKT[490]*source[45]+work.KKT[491]*source[46]+work.KKT[492]*source[180]+work.KKT[462]*source[185]+work.KKT[467]*source[186]+work.KKT[472]*source[187]+work.KKT[477]*source[188]+work.KKT[482]*source[189];
  result[43] = work.KKT[488]*source[42]+work.KKT[493]*source[43]+work.KKT[494]*source[44]+work.KKT[495]*source[45]+work.KKT[496]*source[46]+work.KKT[497]*source[181]+work.KKT[463]*source[185]+work.KKT[468]*source[186]+work.KKT[473]*source[187]+work.KKT[478]*source[188]+work.KKT[483]*source[189];
  result[44] = work.KKT[489]*source[42]+work.KKT[494]*source[43]+work.KKT[498]*source[44]+work.KKT[499]*source[45]+work.KKT[500]*source[46]+work.KKT[501]*source[182]+work.KKT[464]*source[185]+work.KKT[469]*source[186]+work.KKT[474]*source[187]+work.KKT[479]*source[188]+work.KKT[484]*source[189];
  result[45] = work.KKT[490]*source[42]+work.KKT[495]*source[43]+work.KKT[499]*source[44]+work.KKT[502]*source[45]+work.KKT[503]*source[46]+work.KKT[504]*source[183]+work.KKT[465]*source[185]+work.KKT[470]*source[186]+work.KKT[475]*source[187]+work.KKT[480]*source[188]+work.KKT[485]*source[189];
  result[46] = work.KKT[491]*source[42]+work.KKT[496]*source[43]+work.KKT[500]*source[44]+work.KKT[503]*source[45]+work.KKT[518]*source[46]+work.KKT[519]*source[184]+work.KKT[466]*source[185]+work.KKT[471]*source[186]+work.KKT[476]*source[187]+work.KKT[481]*source[188]+work.KKT[486]*source[189];
  result[47] = work.KKT[429]*source[47]+work.KKT[430]*source[48]+work.KKT[431]*source[49]+work.KKT[432]*source[50]+work.KKT[433]*source[51]+work.KKT[434]*source[185]+work.KKT[404]*source[190]+work.KKT[409]*source[191]+work.KKT[414]*source[192]+work.KKT[419]*source[193]+work.KKT[424]*source[194];
  result[48] = work.KKT[430]*source[47]+work.KKT[435]*source[48]+work.KKT[436]*source[49]+work.KKT[437]*source[50]+work.KKT[438]*source[51]+work.KKT[439]*source[186]+work.KKT[405]*source[190]+work.KKT[410]*source[191]+work.KKT[415]*source[192]+work.KKT[420]*source[193]+work.KKT[425]*source[194];
  result[49] = work.KKT[431]*source[47]+work.KKT[436]*source[48]+work.KKT[440]*source[49]+work.KKT[441]*source[50]+work.KKT[442]*source[51]+work.KKT[443]*source[187]+work.KKT[406]*source[190]+work.KKT[411]*source[191]+work.KKT[416]*source[192]+work.KKT[421]*source[193]+work.KKT[426]*source[194];
  result[50] = work.KKT[432]*source[47]+work.KKT[437]*source[48]+work.KKT[441]*source[49]+work.KKT[444]*source[50]+work.KKT[445]*source[51]+work.KKT[446]*source[188]+work.KKT[407]*source[190]+work.KKT[412]*source[191]+work.KKT[417]*source[192]+work.KKT[422]*source[193]+work.KKT[427]*source[194];
  result[51] = work.KKT[433]*source[47]+work.KKT[438]*source[48]+work.KKT[442]*source[49]+work.KKT[445]*source[50]+work.KKT[460]*source[51]+work.KKT[461]*source[189]+work.KKT[408]*source[190]+work.KKT[413]*source[191]+work.KKT[418]*source[192]+work.KKT[423]*source[193]+work.KKT[428]*source[194];
  result[52] = work.KKT[371]*source[52]+work.KKT[372]*source[53]+work.KKT[373]*source[54]+work.KKT[374]*source[55]+work.KKT[375]*source[56]+work.KKT[376]*source[190]+work.KKT[346]*source[195]+work.KKT[351]*source[196]+work.KKT[356]*source[197]+work.KKT[361]*source[198]+work.KKT[366]*source[199];
  result[53] = work.KKT[372]*source[52]+work.KKT[377]*source[53]+work.KKT[378]*source[54]+work.KKT[379]*source[55]+work.KKT[380]*source[56]+work.KKT[381]*source[191]+work.KKT[347]*source[195]+work.KKT[352]*source[196]+work.KKT[357]*source[197]+work.KKT[362]*source[198]+work.KKT[367]*source[199];
  result[54] = work.KKT[373]*source[52]+work.KKT[378]*source[53]+work.KKT[382]*source[54]+work.KKT[383]*source[55]+work.KKT[384]*source[56]+work.KKT[385]*source[192]+work.KKT[348]*source[195]+work.KKT[353]*source[196]+work.KKT[358]*source[197]+work.KKT[363]*source[198]+work.KKT[368]*source[199];
  result[55] = work.KKT[374]*source[52]+work.KKT[379]*source[53]+work.KKT[383]*source[54]+work.KKT[386]*source[55]+work.KKT[387]*source[56]+work.KKT[388]*source[193]+work.KKT[349]*source[195]+work.KKT[354]*source[196]+work.KKT[359]*source[197]+work.KKT[364]*source[198]+work.KKT[369]*source[199];
  result[56] = work.KKT[375]*source[52]+work.KKT[380]*source[53]+work.KKT[384]*source[54]+work.KKT[387]*source[55]+work.KKT[402]*source[56]+work.KKT[403]*source[194]+work.KKT[350]*source[195]+work.KKT[355]*source[196]+work.KKT[360]*source[197]+work.KKT[365]*source[198]+work.KKT[370]*source[199];
  result[57] = work.KKT[313]*source[57]+work.KKT[314]*source[58]+work.KKT[315]*source[59]+work.KKT[316]*source[60]+work.KKT[317]*source[61]+work.KKT[318]*source[195]+work.KKT[288]*source[200]+work.KKT[293]*source[201]+work.KKT[298]*source[202]+work.KKT[303]*source[203]+work.KKT[308]*source[204];
  result[58] = work.KKT[314]*source[57]+work.KKT[319]*source[58]+work.KKT[320]*source[59]+work.KKT[321]*source[60]+work.KKT[322]*source[61]+work.KKT[323]*source[196]+work.KKT[289]*source[200]+work.KKT[294]*source[201]+work.KKT[299]*source[202]+work.KKT[304]*source[203]+work.KKT[309]*source[204];
  result[59] = work.KKT[315]*source[57]+work.KKT[320]*source[58]+work.KKT[324]*source[59]+work.KKT[325]*source[60]+work.KKT[326]*source[61]+work.KKT[327]*source[197]+work.KKT[290]*source[200]+work.KKT[295]*source[201]+work.KKT[300]*source[202]+work.KKT[305]*source[203]+work.KKT[310]*source[204];
  result[60] = work.KKT[316]*source[57]+work.KKT[321]*source[58]+work.KKT[325]*source[59]+work.KKT[328]*source[60]+work.KKT[329]*source[61]+work.KKT[330]*source[198]+work.KKT[291]*source[200]+work.KKT[296]*source[201]+work.KKT[301]*source[202]+work.KKT[306]*source[203]+work.KKT[311]*source[204];
  result[61] = work.KKT[317]*source[57]+work.KKT[322]*source[58]+work.KKT[326]*source[59]+work.KKT[329]*source[60]+work.KKT[344]*source[61]+work.KKT[345]*source[199]+work.KKT[292]*source[200]+work.KKT[297]*source[201]+work.KKT[302]*source[202]+work.KKT[307]*source[203]+work.KKT[312]*source[204];
  result[62] = work.KKT[255]*source[62]+work.KKT[256]*source[63]+work.KKT[257]*source[64]+work.KKT[258]*source[65]+work.KKT[259]*source[66]+work.KKT[260]*source[200]+work.KKT[230]*source[205]+work.KKT[235]*source[206]+work.KKT[240]*source[207]+work.KKT[245]*source[208]+work.KKT[250]*source[209];
  result[63] = work.KKT[256]*source[62]+work.KKT[261]*source[63]+work.KKT[262]*source[64]+work.KKT[263]*source[65]+work.KKT[264]*source[66]+work.KKT[265]*source[201]+work.KKT[231]*source[205]+work.KKT[236]*source[206]+work.KKT[241]*source[207]+work.KKT[246]*source[208]+work.KKT[251]*source[209];
  result[64] = work.KKT[257]*source[62]+work.KKT[262]*source[63]+work.KKT[266]*source[64]+work.KKT[267]*source[65]+work.KKT[268]*source[66]+work.KKT[269]*source[202]+work.KKT[232]*source[205]+work.KKT[237]*source[206]+work.KKT[242]*source[207]+work.KKT[247]*source[208]+work.KKT[252]*source[209];
  result[65] = work.KKT[258]*source[62]+work.KKT[263]*source[63]+work.KKT[267]*source[64]+work.KKT[270]*source[65]+work.KKT[271]*source[66]+work.KKT[272]*source[203]+work.KKT[233]*source[205]+work.KKT[238]*source[206]+work.KKT[243]*source[207]+work.KKT[248]*source[208]+work.KKT[253]*source[209];
  result[66] = work.KKT[259]*source[62]+work.KKT[264]*source[63]+work.KKT[268]*source[64]+work.KKT[271]*source[65]+work.KKT[286]*source[66]+work.KKT[287]*source[204]+work.KKT[234]*source[205]+work.KKT[239]*source[206]+work.KKT[244]*source[207]+work.KKT[249]*source[208]+work.KKT[254]*source[209];
  result[67] = work.KKT[197]*source[67]+work.KKT[198]*source[68]+work.KKT[199]*source[69]+work.KKT[200]*source[70]+work.KKT[201]*source[71]+work.KKT[202]*source[205];
  result[68] = work.KKT[198]*source[67]+work.KKT[203]*source[68]+work.KKT[204]*source[69]+work.KKT[205]*source[70]+work.KKT[206]*source[71]+work.KKT[207]*source[206];
  result[69] = work.KKT[199]*source[67]+work.KKT[204]*source[68]+work.KKT[208]*source[69]+work.KKT[209]*source[70]+work.KKT[210]*source[71]+work.KKT[211]*source[207];
  result[70] = work.KKT[200]*source[67]+work.KKT[205]*source[68]+work.KKT[209]*source[69]+work.KKT[212]*source[70]+work.KKT[213]*source[71]+work.KKT[214]*source[208];
  result[71] = work.KKT[201]*source[67]+work.KKT[206]*source[68]+work.KKT[210]*source[69]+work.KKT[213]*source[70]+work.KKT[228]*source[71]+work.KKT[229]*source[209];
  result[72] = work.KKT[0]*source[72]+work.KKT[1]*source[116];
  result[73] = work.KKT[2]*source[73]+work.KKT[3]*source[117];
  result[74] = work.KKT[4]*source[74]+work.KKT[5]*source[118];
  result[75] = work.KKT[6]*source[75]+work.KKT[7]*source[119];
  result[76] = work.KKT[8]*source[76]+work.KKT[9]*source[120];
  result[77] = work.KKT[10]*source[77]+work.KKT[11]*source[121];
  result[78] = work.KKT[12]*source[78]+work.KKT[13]*source[122];
  result[79] = work.KKT[14]*source[79]+work.KKT[15]*source[123];
  result[80] = work.KKT[16]*source[80]+work.KKT[17]*source[124];
  result[81] = work.KKT[18]*source[81]+work.KKT[19]*source[125];
  result[82] = work.KKT[20]*source[82]+work.KKT[21]*source[126];
  result[83] = work.KKT[22]*source[83]+work.KKT[23]*source[127];
  result[84] = work.KKT[24]*source[84]+work.KKT[25]*source[128];
  result[85] = work.KKT[26]*source[85]+work.KKT[27]*source[129];
  result[86] = work.KKT[28]*source[86]+work.KKT[29]*source[130];
  result[87] = work.KKT[30]*source[87]+work.KKT[31]*source[131];
  result[88] = work.KKT[32]*source[88]+work.KKT[33]*source[132];
  result[89] = work.KKT[34]*source[89]+work.KKT[35]*source[133];
  result[90] = work.KKT[36]*source[90]+work.KKT[37]*source[134];
  result[91] = work.KKT[38]*source[91]+work.KKT[39]*source[135];
  result[92] = work.KKT[40]*source[92]+work.KKT[41]*source[136];
  result[93] = work.KKT[42]*source[93]+work.KKT[43]*source[137];
  result[94] = work.KKT[44]*source[94]+work.KKT[45]*source[138];
  result[95] = work.KKT[46]*source[95]+work.KKT[47]*source[139];
  result[96] = work.KKT[48]*source[96]+work.KKT[49]*source[140];
  result[97] = work.KKT[50]*source[97]+work.KKT[51]*source[141];
  result[98] = work.KKT[52]*source[98]+work.KKT[53]*source[142];
  result[99] = work.KKT[54]*source[99]+work.KKT[55]*source[143];
  result[100] = work.KKT[56]*source[100]+work.KKT[57]*source[144];
  result[101] = work.KKT[58]*source[101]+work.KKT[59]*source[145];
  result[102] = work.KKT[60]*source[102]+work.KKT[61]*source[146];
  result[103] = work.KKT[62]*source[103]+work.KKT[63]*source[147];
  result[104] = work.KKT[64]*source[104]+work.KKT[65]*source[148];
  result[105] = work.KKT[66]*source[105]+work.KKT[67]*source[149];
  result[106] = work.KKT[68]*source[106]+work.KKT[69]*source[150];
  result[107] = work.KKT[70]*source[107]+work.KKT[71]*source[151];
  result[108] = work.KKT[72]*source[108]+work.KKT[73]*source[152];
  result[109] = work.KKT[74]*source[109]+work.KKT[75]*source[153];
  result[110] = work.KKT[76]*source[110]+work.KKT[77]*source[154];
  result[111] = work.KKT[78]*source[111]+work.KKT[79]*source[155];
  result[112] = work.KKT[80]*source[112]+work.KKT[81]*source[156];
  result[113] = work.KKT[82]*source[113]+work.KKT[83]*source[157];
  result[114] = work.KKT[84]*source[114]+work.KKT[85]*source[158];
  result[115] = work.KKT[86]*source[115]+work.KKT[87]*source[159];
  result[116] = work.KKT[1]*source[72]+work.KKT[88]*source[116]+work.KKT[89]*source[0];
  result[117] = work.KKT[3]*source[73]+work.KKT[90]*source[117]+work.KKT[91]*source[1];
  result[118] = work.KKT[5]*source[74]+work.KKT[92]*source[118]+work.KKT[93]*source[2];
  result[119] = work.KKT[7]*source[75]+work.KKT[94]*source[119]+work.KKT[95]*source[3];
  result[120] = work.KKT[9]*source[76]+work.KKT[96]*source[120]+work.KKT[97]*source[4];
  result[121] = work.KKT[11]*source[77]+work.KKT[98]*source[121]+work.KKT[99]*source[5];
  result[122] = work.KKT[13]*source[78]+work.KKT[100]*source[122]+work.KKT[101]*source[6];
  result[123] = work.KKT[15]*source[79]+work.KKT[102]*source[123]+work.KKT[103]*source[7];
  result[124] = work.KKT[17]*source[80]+work.KKT[104]*source[124]+work.KKT[105]*source[8];
  result[125] = work.KKT[19]*source[81]+work.KKT[106]*source[125]+work.KKT[107]*source[9];
  result[126] = work.KKT[21]*source[82]+work.KKT[108]*source[126]+work.KKT[109]*source[10];
  result[127] = work.KKT[23]*source[83]+work.KKT[110]*source[127]+work.KKT[111]*source[11];
  result[128] = work.KKT[25]*source[84]+work.KKT[112]*source[128]+work.KKT[113]*source[12];
  result[129] = work.KKT[27]*source[85]+work.KKT[114]*source[129]+work.KKT[115]*source[13];
  result[130] = work.KKT[29]*source[86]+work.KKT[116]*source[130]+work.KKT[117]*source[14];
  result[131] = work.KKT[31]*source[87]+work.KKT[118]*source[131]+work.KKT[119]*source[15];
  result[132] = work.KKT[33]*source[88]+work.KKT[120]*source[132]+work.KKT[121]*source[16];
  result[133] = work.KKT[35]*source[89]+work.KKT[122]*source[133]+work.KKT[123]*source[17];
  result[134] = work.KKT[37]*source[90]+work.KKT[124]*source[134]+work.KKT[125]*source[18];
  result[135] = work.KKT[39]*source[91]+work.KKT[126]*source[135]+work.KKT[127]*source[19];
  result[136] = work.KKT[41]*source[92]+work.KKT[128]*source[136]+work.KKT[129]*source[20];
  result[137] = work.KKT[43]*source[93]+work.KKT[130]*source[137]+work.KKT[131]*source[21];
  result[138] = work.KKT[45]*source[94]+work.KKT[132]*source[138]+work.KKT[133]*source[0];
  result[139] = work.KKT[47]*source[95]+work.KKT[134]*source[139]+work.KKT[135]*source[1];
  result[140] = work.KKT[49]*source[96]+work.KKT[136]*source[140]+work.KKT[137]*source[2];
  result[141] = work.KKT[51]*source[97]+work.KKT[138]*source[141]+work.KKT[139]*source[3];
  result[142] = work.KKT[53]*source[98]+work.KKT[140]*source[142]+work.KKT[141]*source[4];
  result[143] = work.KKT[55]*source[99]+work.KKT[142]*source[143]+work.KKT[143]*source[5];
  result[144] = work.KKT[57]*source[100]+work.KKT[144]*source[144]+work.KKT[145]*source[6];
  result[145] = work.KKT[59]*source[101]+work.KKT[146]*source[145]+work.KKT[147]*source[7];
  result[146] = work.KKT[61]*source[102]+work.KKT[148]*source[146]+work.KKT[149]*source[8];
  result[147] = work.KKT[63]*source[103]+work.KKT[150]*source[147]+work.KKT[151]*source[9];
  result[148] = work.KKT[65]*source[104]+work.KKT[152]*source[148]+work.KKT[153]*source[10];
  result[149] = work.KKT[67]*source[105]+work.KKT[154]*source[149]+work.KKT[155]*source[11];
  result[150] = work.KKT[69]*source[106]+work.KKT[156]*source[150]+work.KKT[157]*source[12];
  result[151] = work.KKT[71]*source[107]+work.KKT[158]*source[151]+work.KKT[159]*source[13];
  result[152] = work.KKT[73]*source[108]+work.KKT[160]*source[152]+work.KKT[161]*source[14];
  result[153] = work.KKT[75]*source[109]+work.KKT[162]*source[153]+work.KKT[163]*source[15];
  result[154] = work.KKT[77]*source[110]+work.KKT[164]*source[154]+work.KKT[165]*source[16];
  result[155] = work.KKT[79]*source[111]+work.KKT[166]*source[155]+work.KKT[167]*source[17];
  result[156] = work.KKT[81]*source[112]+work.KKT[168]*source[156]+work.KKT[169]*source[18];
  result[157] = work.KKT[83]*source[113]+work.KKT[170]*source[157]+work.KKT[171]*source[19];
  result[158] = work.KKT[85]*source[114]+work.KKT[172]*source[158]+work.KKT[173]*source[20];
  result[159] = work.KKT[87]*source[115]+work.KKT[178]*source[159]+work.KKT[177]*source[21];
  result[160] = work.KKT[179]*source[0]+work.KKT[180]*source[1]+work.KKT[181]*source[22];
  result[161] = work.KKT[182]*source[0]+work.KKT[183]*source[1]+work.KKT[184]*source[23];
  result[162] = work.KKT[185]*source[0]+work.KKT[186]*source[1]+work.KKT[187]*source[24];
  result[163] = work.KKT[188]*source[0]+work.KKT[189]*source[1]+work.KKT[190]*source[25];
  result[164] = work.KKT[191]*source[0]+work.KKT[192]*source[1]+work.KKT[193]*source[26];
  result[165] = work.KKT[681]*source[2]+work.KKT[687]*source[3]+work.KKT[697]*source[22]+work.KKT[706]*source[23]+work.KKT[714]*source[24]+work.KKT[721]*source[25]+work.KKT[727]*source[26]+work.KKT[666]*source[27];
  result[166] = work.KKT[682]*source[2]+work.KKT[688]*source[3]+work.KKT[698]*source[22]+work.KKT[707]*source[23]+work.KKT[715]*source[24]+work.KKT[722]*source[25]+work.KKT[728]*source[26]+work.KKT[671]*source[28];
  result[167] = work.KKT[683]*source[2]+work.KKT[689]*source[3]+work.KKT[699]*source[22]+work.KKT[708]*source[23]+work.KKT[716]*source[24]+work.KKT[723]*source[25]+work.KKT[729]*source[26]+work.KKT[675]*source[29];
  result[168] = work.KKT[684]*source[2]+work.KKT[690]*source[3]+work.KKT[700]*source[22]+work.KKT[709]*source[23]+work.KKT[717]*source[24]+work.KKT[724]*source[25]+work.KKT[730]*source[26]+work.KKT[678]*source[30];
  result[169] = work.KKT[685]*source[2]+work.KKT[691]*source[3]+work.KKT[701]*source[22]+work.KKT[710]*source[23]+work.KKT[718]*source[24]+work.KKT[725]*source[25]+work.KKT[731]*source[26]+work.KKT[733]*source[31];
  result[170] = work.KKT[623]*source[4]+work.KKT[629]*source[5]+work.KKT[636]*source[27]+work.KKT[637]*source[28]+work.KKT[638]*source[29]+work.KKT[639]*source[30]+work.KKT[640]*source[31]+work.KKT[608]*source[32];
  result[171] = work.KKT[624]*source[4]+work.KKT[630]*source[5]+work.KKT[641]*source[27]+work.KKT[642]*source[28]+work.KKT[643]*source[29]+work.KKT[644]*source[30]+work.KKT[645]*source[31]+work.KKT[613]*source[33];
  result[172] = work.KKT[625]*source[4]+work.KKT[631]*source[5]+work.KKT[646]*source[27]+work.KKT[647]*source[28]+work.KKT[648]*source[29]+work.KKT[649]*source[30]+work.KKT[650]*source[31]+work.KKT[617]*source[34];
  result[173] = work.KKT[626]*source[4]+work.KKT[632]*source[5]+work.KKT[651]*source[27]+work.KKT[652]*source[28]+work.KKT[653]*source[29]+work.KKT[654]*source[30]+work.KKT[655]*source[31]+work.KKT[620]*source[35];
  result[174] = work.KKT[627]*source[4]+work.KKT[633]*source[5]+work.KKT[656]*source[27]+work.KKT[657]*source[28]+work.KKT[658]*source[29]+work.KKT[659]*source[30]+work.KKT[660]*source[31]+work.KKT[635]*source[36];
  result[175] = work.KKT[565]*source[6]+work.KKT[571]*source[7]+work.KKT[578]*source[32]+work.KKT[579]*source[33]+work.KKT[580]*source[34]+work.KKT[581]*source[35]+work.KKT[582]*source[36]+work.KKT[550]*source[37];
  result[176] = work.KKT[566]*source[6]+work.KKT[572]*source[7]+work.KKT[583]*source[32]+work.KKT[584]*source[33]+work.KKT[585]*source[34]+work.KKT[586]*source[35]+work.KKT[587]*source[36]+work.KKT[555]*source[38];
  result[177] = work.KKT[567]*source[6]+work.KKT[573]*source[7]+work.KKT[588]*source[32]+work.KKT[589]*source[33]+work.KKT[590]*source[34]+work.KKT[591]*source[35]+work.KKT[592]*source[36]+work.KKT[559]*source[39];
  result[178] = work.KKT[568]*source[6]+work.KKT[574]*source[7]+work.KKT[593]*source[32]+work.KKT[594]*source[33]+work.KKT[595]*source[34]+work.KKT[596]*source[35]+work.KKT[597]*source[36]+work.KKT[562]*source[40];
  result[179] = work.KKT[569]*source[6]+work.KKT[575]*source[7]+work.KKT[598]*source[32]+work.KKT[599]*source[33]+work.KKT[600]*source[34]+work.KKT[601]*source[35]+work.KKT[602]*source[36]+work.KKT[577]*source[41];
  result[180] = work.KKT[507]*source[8]+work.KKT[513]*source[9]+work.KKT[520]*source[37]+work.KKT[521]*source[38]+work.KKT[522]*source[39]+work.KKT[523]*source[40]+work.KKT[524]*source[41]+work.KKT[492]*source[42];
  result[181] = work.KKT[508]*source[8]+work.KKT[514]*source[9]+work.KKT[525]*source[37]+work.KKT[526]*source[38]+work.KKT[527]*source[39]+work.KKT[528]*source[40]+work.KKT[529]*source[41]+work.KKT[497]*source[43];
  result[182] = work.KKT[509]*source[8]+work.KKT[515]*source[9]+work.KKT[530]*source[37]+work.KKT[531]*source[38]+work.KKT[532]*source[39]+work.KKT[533]*source[40]+work.KKT[534]*source[41]+work.KKT[501]*source[44];
  result[183] = work.KKT[510]*source[8]+work.KKT[516]*source[9]+work.KKT[535]*source[37]+work.KKT[536]*source[38]+work.KKT[537]*source[39]+work.KKT[538]*source[40]+work.KKT[539]*source[41]+work.KKT[504]*source[45];
  result[184] = work.KKT[511]*source[8]+work.KKT[517]*source[9]+work.KKT[540]*source[37]+work.KKT[541]*source[38]+work.KKT[542]*source[39]+work.KKT[543]*source[40]+work.KKT[544]*source[41]+work.KKT[519]*source[46];
  result[185] = work.KKT[449]*source[10]+work.KKT[455]*source[11]+work.KKT[462]*source[42]+work.KKT[463]*source[43]+work.KKT[464]*source[44]+work.KKT[465]*source[45]+work.KKT[466]*source[46]+work.KKT[434]*source[47];
  result[186] = work.KKT[450]*source[10]+work.KKT[456]*source[11]+work.KKT[467]*source[42]+work.KKT[468]*source[43]+work.KKT[469]*source[44]+work.KKT[470]*source[45]+work.KKT[471]*source[46]+work.KKT[439]*source[48];
  result[187] = work.KKT[451]*source[10]+work.KKT[457]*source[11]+work.KKT[472]*source[42]+work.KKT[473]*source[43]+work.KKT[474]*source[44]+work.KKT[475]*source[45]+work.KKT[476]*source[46]+work.KKT[443]*source[49];
  result[188] = work.KKT[452]*source[10]+work.KKT[458]*source[11]+work.KKT[477]*source[42]+work.KKT[478]*source[43]+work.KKT[479]*source[44]+work.KKT[480]*source[45]+work.KKT[481]*source[46]+work.KKT[446]*source[50];
  result[189] = work.KKT[453]*source[10]+work.KKT[459]*source[11]+work.KKT[482]*source[42]+work.KKT[483]*source[43]+work.KKT[484]*source[44]+work.KKT[485]*source[45]+work.KKT[486]*source[46]+work.KKT[461]*source[51];
  result[190] = work.KKT[391]*source[12]+work.KKT[397]*source[13]+work.KKT[404]*source[47]+work.KKT[405]*source[48]+work.KKT[406]*source[49]+work.KKT[407]*source[50]+work.KKT[408]*source[51]+work.KKT[376]*source[52];
  result[191] = work.KKT[392]*source[12]+work.KKT[398]*source[13]+work.KKT[409]*source[47]+work.KKT[410]*source[48]+work.KKT[411]*source[49]+work.KKT[412]*source[50]+work.KKT[413]*source[51]+work.KKT[381]*source[53];
  result[192] = work.KKT[393]*source[12]+work.KKT[399]*source[13]+work.KKT[414]*source[47]+work.KKT[415]*source[48]+work.KKT[416]*source[49]+work.KKT[417]*source[50]+work.KKT[418]*source[51]+work.KKT[385]*source[54];
  result[193] = work.KKT[394]*source[12]+work.KKT[400]*source[13]+work.KKT[419]*source[47]+work.KKT[420]*source[48]+work.KKT[421]*source[49]+work.KKT[422]*source[50]+work.KKT[423]*source[51]+work.KKT[388]*source[55];
  result[194] = work.KKT[395]*source[12]+work.KKT[401]*source[13]+work.KKT[424]*source[47]+work.KKT[425]*source[48]+work.KKT[426]*source[49]+work.KKT[427]*source[50]+work.KKT[428]*source[51]+work.KKT[403]*source[56];
  result[195] = work.KKT[333]*source[14]+work.KKT[339]*source[15]+work.KKT[346]*source[52]+work.KKT[347]*source[53]+work.KKT[348]*source[54]+work.KKT[349]*source[55]+work.KKT[350]*source[56]+work.KKT[318]*source[57];
  result[196] = work.KKT[334]*source[14]+work.KKT[340]*source[15]+work.KKT[351]*source[52]+work.KKT[352]*source[53]+work.KKT[353]*source[54]+work.KKT[354]*source[55]+work.KKT[355]*source[56]+work.KKT[323]*source[58];
  result[197] = work.KKT[335]*source[14]+work.KKT[341]*source[15]+work.KKT[356]*source[52]+work.KKT[357]*source[53]+work.KKT[358]*source[54]+work.KKT[359]*source[55]+work.KKT[360]*source[56]+work.KKT[327]*source[59];
  result[198] = work.KKT[336]*source[14]+work.KKT[342]*source[15]+work.KKT[361]*source[52]+work.KKT[362]*source[53]+work.KKT[363]*source[54]+work.KKT[364]*source[55]+work.KKT[365]*source[56]+work.KKT[330]*source[60];
  result[199] = work.KKT[337]*source[14]+work.KKT[343]*source[15]+work.KKT[366]*source[52]+work.KKT[367]*source[53]+work.KKT[368]*source[54]+work.KKT[369]*source[55]+work.KKT[370]*source[56]+work.KKT[345]*source[61];
  result[200] = work.KKT[275]*source[16]+work.KKT[281]*source[17]+work.KKT[288]*source[57]+work.KKT[289]*source[58]+work.KKT[290]*source[59]+work.KKT[291]*source[60]+work.KKT[292]*source[61]+work.KKT[260]*source[62];
  result[201] = work.KKT[276]*source[16]+work.KKT[282]*source[17]+work.KKT[293]*source[57]+work.KKT[294]*source[58]+work.KKT[295]*source[59]+work.KKT[296]*source[60]+work.KKT[297]*source[61]+work.KKT[265]*source[63];
  result[202] = work.KKT[277]*source[16]+work.KKT[283]*source[17]+work.KKT[298]*source[57]+work.KKT[299]*source[58]+work.KKT[300]*source[59]+work.KKT[301]*source[60]+work.KKT[302]*source[61]+work.KKT[269]*source[64];
  result[203] = work.KKT[278]*source[16]+work.KKT[284]*source[17]+work.KKT[303]*source[57]+work.KKT[304]*source[58]+work.KKT[305]*source[59]+work.KKT[306]*source[60]+work.KKT[307]*source[61]+work.KKT[272]*source[65];
  result[204] = work.KKT[279]*source[16]+work.KKT[285]*source[17]+work.KKT[308]*source[57]+work.KKT[309]*source[58]+work.KKT[310]*source[59]+work.KKT[311]*source[60]+work.KKT[312]*source[61]+work.KKT[287]*source[66];
  result[205] = work.KKT[217]*source[18]+work.KKT[223]*source[19]+work.KKT[230]*source[62]+work.KKT[231]*source[63]+work.KKT[232]*source[64]+work.KKT[233]*source[65]+work.KKT[234]*source[66]+work.KKT[202]*source[67];
  result[206] = work.KKT[218]*source[18]+work.KKT[224]*source[19]+work.KKT[235]*source[62]+work.KKT[236]*source[63]+work.KKT[237]*source[64]+work.KKT[238]*source[65]+work.KKT[239]*source[66]+work.KKT[207]*source[68];
  result[207] = work.KKT[219]*source[18]+work.KKT[225]*source[19]+work.KKT[240]*source[62]+work.KKT[241]*source[63]+work.KKT[242]*source[64]+work.KKT[243]*source[65]+work.KKT[244]*source[66]+work.KKT[211]*source[69];
  result[208] = work.KKT[220]*source[18]+work.KKT[226]*source[19]+work.KKT[245]*source[62]+work.KKT[246]*source[63]+work.KKT[247]*source[64]+work.KKT[248]*source[65]+work.KKT[249]*source[66]+work.KKT[214]*source[70];
  result[209] = work.KKT[221]*source[18]+work.KKT[227]*source[19]+work.KKT[250]*source[62]+work.KKT[251]*source[63]+work.KKT[252]*source[64]+work.KKT[253]*source[65]+work.KKT[254]*source[66]+work.KKT[229]*source[71];
}

double check_residual(double *target, double *multiplicand) {
  /* Returns the squared 2-norm of lhs - A*rhs. */
  /* Reuses v to find the residual. */
  int i;
  double residual;

  residual = 0;
  matrix_multiply(work.v, multiplicand);
  for (i = 0; i < 72; i++) {
    residual += (target[i] - work.v[i])*(target[i] - work.v[i]);
  }
  return residual;
}

void fill_KKT(void) {
  work.KKT[194] = 2*params.R[0];
  work.KKT[195] = 2*params.R[2];
  work.KKT[196] = 2*params.R[3];
  work.KKT[679] = 2*params.R[0];
  work.KKT[680] = 2*params.R[2];
  work.KKT[686] = 2*params.R[3];
  work.KKT[621] = 2*params.R[0];
  work.KKT[622] = 2*params.R[2];
  work.KKT[628] = 2*params.R[3];
  work.KKT[563] = 2*params.R[0];
  work.KKT[564] = 2*params.R[2];
  work.KKT[570] = 2*params.R[3];
  work.KKT[505] = 2*params.R[0];
  work.KKT[506] = 2*params.R[2];
  work.KKT[512] = 2*params.R[3];
  work.KKT[447] = 2*params.R[0];
  work.KKT[448] = 2*params.R[2];
  work.KKT[454] = 2*params.R[3];
  work.KKT[389] = 2*params.R[0];
  work.KKT[390] = 2*params.R[2];
  work.KKT[396] = 2*params.R[3];
  work.KKT[331] = 2*params.R[0];
  work.KKT[332] = 2*params.R[2];
  work.KKT[338] = 2*params.R[3];
  work.KKT[273] = 2*params.R[0];
  work.KKT[274] = 2*params.R[2];
  work.KKT[280] = 2*params.R[3];
  work.KKT[215] = 2*params.R[0];
  work.KKT[216] = 2*params.R[2];
  work.KKT[222] = 2*params.R[3];
  work.KKT[174] = 2*params.R[0];
  work.KKT[175] = 2*params.R[2];
  work.KKT[176] = 2*params.R[3];
  work.KKT[692] = 2*params.Q[0];
  work.KKT[693] = 2*params.Q[5];
  work.KKT[694] = 2*params.Q[10];
  work.KKT[695] = 2*params.Q[15];
  work.KKT[696] = 2*params.Q[20];
  work.KKT[702] = 2*params.Q[6];
  work.KKT[703] = 2*params.Q[11];
  work.KKT[704] = 2*params.Q[16];
  work.KKT[705] = 2*params.Q[21];
  work.KKT[711] = 2*params.Q[12];
  work.KKT[712] = 2*params.Q[17];
  work.KKT[713] = 2*params.Q[22];
  work.KKT[719] = 2*params.Q[18];
  work.KKT[720] = 2*params.Q[23];
  work.KKT[726] = 2*params.Q[24];
  work.KKT[661] = 2*params.Q[0];
  work.KKT[662] = 2*params.Q[5];
  work.KKT[663] = 2*params.Q[10];
  work.KKT[664] = 2*params.Q[15];
  work.KKT[665] = 2*params.Q[20];
  work.KKT[667] = 2*params.Q[6];
  work.KKT[668] = 2*params.Q[11];
  work.KKT[669] = 2*params.Q[16];
  work.KKT[670] = 2*params.Q[21];
  work.KKT[672] = 2*params.Q[12];
  work.KKT[673] = 2*params.Q[17];
  work.KKT[674] = 2*params.Q[22];
  work.KKT[676] = 2*params.Q[18];
  work.KKT[677] = 2*params.Q[23];
  work.KKT[732] = 2*params.Q[24];
  work.KKT[603] = 2*params.Q[0];
  work.KKT[604] = 2*params.Q[5];
  work.KKT[605] = 2*params.Q[10];
  work.KKT[606] = 2*params.Q[15];
  work.KKT[607] = 2*params.Q[20];
  work.KKT[609] = 2*params.Q[6];
  work.KKT[610] = 2*params.Q[11];
  work.KKT[611] = 2*params.Q[16];
  work.KKT[612] = 2*params.Q[21];
  work.KKT[614] = 2*params.Q[12];
  work.KKT[615] = 2*params.Q[17];
  work.KKT[616] = 2*params.Q[22];
  work.KKT[618] = 2*params.Q[18];
  work.KKT[619] = 2*params.Q[23];
  work.KKT[634] = 2*params.Q[24];
  work.KKT[545] = 2*params.Q[0];
  work.KKT[546] = 2*params.Q[5];
  work.KKT[547] = 2*params.Q[10];
  work.KKT[548] = 2*params.Q[15];
  work.KKT[549] = 2*params.Q[20];
  work.KKT[551] = 2*params.Q[6];
  work.KKT[552] = 2*params.Q[11];
  work.KKT[553] = 2*params.Q[16];
  work.KKT[554] = 2*params.Q[21];
  work.KKT[556] = 2*params.Q[12];
  work.KKT[557] = 2*params.Q[17];
  work.KKT[558] = 2*params.Q[22];
  work.KKT[560] = 2*params.Q[18];
  work.KKT[561] = 2*params.Q[23];
  work.KKT[576] = 2*params.Q[24];
  work.KKT[487] = 2*params.Q[0];
  work.KKT[488] = 2*params.Q[5];
  work.KKT[489] = 2*params.Q[10];
  work.KKT[490] = 2*params.Q[15];
  work.KKT[491] = 2*params.Q[20];
  work.KKT[493] = 2*params.Q[6];
  work.KKT[494] = 2*params.Q[11];
  work.KKT[495] = 2*params.Q[16];
  work.KKT[496] = 2*params.Q[21];
  work.KKT[498] = 2*params.Q[12];
  work.KKT[499] = 2*params.Q[17];
  work.KKT[500] = 2*params.Q[22];
  work.KKT[502] = 2*params.Q[18];
  work.KKT[503] = 2*params.Q[23];
  work.KKT[518] = 2*params.Q[24];
  work.KKT[429] = 2*params.Q[0];
  work.KKT[430] = 2*params.Q[5];
  work.KKT[431] = 2*params.Q[10];
  work.KKT[432] = 2*params.Q[15];
  work.KKT[433] = 2*params.Q[20];
  work.KKT[435] = 2*params.Q[6];
  work.KKT[436] = 2*params.Q[11];
  work.KKT[437] = 2*params.Q[16];
  work.KKT[438] = 2*params.Q[21];
  work.KKT[440] = 2*params.Q[12];
  work.KKT[441] = 2*params.Q[17];
  work.KKT[442] = 2*params.Q[22];
  work.KKT[444] = 2*params.Q[18];
  work.KKT[445] = 2*params.Q[23];
  work.KKT[460] = 2*params.Q[24];
  work.KKT[371] = 2*params.Q[0];
  work.KKT[372] = 2*params.Q[5];
  work.KKT[373] = 2*params.Q[10];
  work.KKT[374] = 2*params.Q[15];
  work.KKT[375] = 2*params.Q[20];
  work.KKT[377] = 2*params.Q[6];
  work.KKT[378] = 2*params.Q[11];
  work.KKT[379] = 2*params.Q[16];
  work.KKT[380] = 2*params.Q[21];
  work.KKT[382] = 2*params.Q[12];
  work.KKT[383] = 2*params.Q[17];
  work.KKT[384] = 2*params.Q[22];
  work.KKT[386] = 2*params.Q[18];
  work.KKT[387] = 2*params.Q[23];
  work.KKT[402] = 2*params.Q[24];
  work.KKT[313] = 2*params.Q[0];
  work.KKT[314] = 2*params.Q[5];
  work.KKT[315] = 2*params.Q[10];
  work.KKT[316] = 2*params.Q[15];
  work.KKT[317] = 2*params.Q[20];
  work.KKT[319] = 2*params.Q[6];
  work.KKT[320] = 2*params.Q[11];
  work.KKT[321] = 2*params.Q[16];
  work.KKT[322] = 2*params.Q[21];
  work.KKT[324] = 2*params.Q[12];
  work.KKT[325] = 2*params.Q[17];
  work.KKT[326] = 2*params.Q[22];
  work.KKT[328] = 2*params.Q[18];
  work.KKT[329] = 2*params.Q[23];
  work.KKT[344] = 2*params.Q[24];
  work.KKT[255] = 2*params.Q[0];
  work.KKT[256] = 2*params.Q[5];
  work.KKT[257] = 2*params.Q[10];
  work.KKT[258] = 2*params.Q[15];
  work.KKT[259] = 2*params.Q[20];
  work.KKT[261] = 2*params.Q[6];
  work.KKT[262] = 2*params.Q[11];
  work.KKT[263] = 2*params.Q[16];
  work.KKT[264] = 2*params.Q[21];
  work.KKT[266] = 2*params.Q[12];
  work.KKT[267] = 2*params.Q[17];
  work.KKT[268] = 2*params.Q[22];
  work.KKT[270] = 2*params.Q[18];
  work.KKT[271] = 2*params.Q[23];
  work.KKT[286] = 2*params.Q[24];
  work.KKT[197] = 2*params.Q[0];
  work.KKT[198] = 2*params.Q[5];
  work.KKT[199] = 2*params.Q[10];
  work.KKT[200] = 2*params.Q[15];
  work.KKT[201] = 2*params.Q[20];
  work.KKT[203] = 2*params.Q[6];
  work.KKT[204] = 2*params.Q[11];
  work.KKT[205] = 2*params.Q[16];
  work.KKT[206] = 2*params.Q[21];
  work.KKT[208] = 2*params.Q[12];
  work.KKT[209] = 2*params.Q[17];
  work.KKT[210] = 2*params.Q[22];
  work.KKT[212] = 2*params.Q[18];
  work.KKT[213] = 2*params.Q[23];
  work.KKT[228] = 2*params.Q[24];
  work.KKT[0] = work.s_inv_z[0];
  work.KKT[2] = work.s_inv_z[1];
  work.KKT[4] = work.s_inv_z[2];
  work.KKT[6] = work.s_inv_z[3];
  work.KKT[8] = work.s_inv_z[4];
  work.KKT[10] = work.s_inv_z[5];
  work.KKT[12] = work.s_inv_z[6];
  work.KKT[14] = work.s_inv_z[7];
  work.KKT[16] = work.s_inv_z[8];
  work.KKT[18] = work.s_inv_z[9];
  work.KKT[20] = work.s_inv_z[10];
  work.KKT[22] = work.s_inv_z[11];
  work.KKT[24] = work.s_inv_z[12];
  work.KKT[26] = work.s_inv_z[13];
  work.KKT[28] = work.s_inv_z[14];
  work.KKT[30] = work.s_inv_z[15];
  work.KKT[32] = work.s_inv_z[16];
  work.KKT[34] = work.s_inv_z[17];
  work.KKT[36] = work.s_inv_z[18];
  work.KKT[38] = work.s_inv_z[19];
  work.KKT[40] = work.s_inv_z[20];
  work.KKT[42] = work.s_inv_z[21];
  work.KKT[44] = work.s_inv_z[22];
  work.KKT[46] = work.s_inv_z[23];
  work.KKT[48] = work.s_inv_z[24];
  work.KKT[50] = work.s_inv_z[25];
  work.KKT[52] = work.s_inv_z[26];
  work.KKT[54] = work.s_inv_z[27];
  work.KKT[56] = work.s_inv_z[28];
  work.KKT[58] = work.s_inv_z[29];
  work.KKT[60] = work.s_inv_z[30];
  work.KKT[62] = work.s_inv_z[31];
  work.KKT[64] = work.s_inv_z[32];
  work.KKT[66] = work.s_inv_z[33];
  work.KKT[68] = work.s_inv_z[34];
  work.KKT[70] = work.s_inv_z[35];
  work.KKT[72] = work.s_inv_z[36];
  work.KKT[74] = work.s_inv_z[37];
  work.KKT[76] = work.s_inv_z[38];
  work.KKT[78] = work.s_inv_z[39];
  work.KKT[80] = work.s_inv_z[40];
  work.KKT[82] = work.s_inv_z[41];
  work.KKT[84] = work.s_inv_z[42];
  work.KKT[86] = work.s_inv_z[43];
  work.KKT[1] = 1;
  work.KKT[3] = 1;
  work.KKT[5] = 1;
  work.KKT[7] = 1;
  work.KKT[9] = 1;
  work.KKT[11] = 1;
  work.KKT[13] = 1;
  work.KKT[15] = 1;
  work.KKT[17] = 1;
  work.KKT[19] = 1;
  work.KKT[21] = 1;
  work.KKT[23] = 1;
  work.KKT[25] = 1;
  work.KKT[27] = 1;
  work.KKT[29] = 1;
  work.KKT[31] = 1;
  work.KKT[33] = 1;
  work.KKT[35] = 1;
  work.KKT[37] = 1;
  work.KKT[39] = 1;
  work.KKT[41] = 1;
  work.KKT[43] = 1;
  work.KKT[45] = 1;
  work.KKT[47] = 1;
  work.KKT[49] = 1;
  work.KKT[51] = 1;
  work.KKT[53] = 1;
  work.KKT[55] = 1;
  work.KKT[57] = 1;
  work.KKT[59] = 1;
  work.KKT[61] = 1;
  work.KKT[63] = 1;
  work.KKT[65] = 1;
  work.KKT[67] = 1;
  work.KKT[69] = 1;
  work.KKT[71] = 1;
  work.KKT[73] = 1;
  work.KKT[75] = 1;
  work.KKT[77] = 1;
  work.KKT[79] = 1;
  work.KKT[81] = 1;
  work.KKT[83] = 1;
  work.KKT[85] = 1;
  work.KKT[87] = 1;
  work.KKT[88] = work.block_33[0];
  work.KKT[90] = work.block_33[0];
  work.KKT[92] = work.block_33[0];
  work.KKT[94] = work.block_33[0];
  work.KKT[96] = work.block_33[0];
  work.KKT[98] = work.block_33[0];
  work.KKT[100] = work.block_33[0];
  work.KKT[102] = work.block_33[0];
  work.KKT[104] = work.block_33[0];
  work.KKT[106] = work.block_33[0];
  work.KKT[108] = work.block_33[0];
  work.KKT[110] = work.block_33[0];
  work.KKT[112] = work.block_33[0];
  work.KKT[114] = work.block_33[0];
  work.KKT[116] = work.block_33[0];
  work.KKT[118] = work.block_33[0];
  work.KKT[120] = work.block_33[0];
  work.KKT[122] = work.block_33[0];
  work.KKT[124] = work.block_33[0];
  work.KKT[126] = work.block_33[0];
  work.KKT[128] = work.block_33[0];
  work.KKT[130] = work.block_33[0];
  work.KKT[132] = work.block_33[0];
  work.KKT[134] = work.block_33[0];
  work.KKT[136] = work.block_33[0];
  work.KKT[138] = work.block_33[0];
  work.KKT[140] = work.block_33[0];
  work.KKT[142] = work.block_33[0];
  work.KKT[144] = work.block_33[0];
  work.KKT[146] = work.block_33[0];
  work.KKT[148] = work.block_33[0];
  work.KKT[150] = work.block_33[0];
  work.KKT[152] = work.block_33[0];
  work.KKT[154] = work.block_33[0];
  work.KKT[156] = work.block_33[0];
  work.KKT[158] = work.block_33[0];
  work.KKT[160] = work.block_33[0];
  work.KKT[162] = work.block_33[0];
  work.KKT[164] = work.block_33[0];
  work.KKT[166] = work.block_33[0];
  work.KKT[168] = work.block_33[0];
  work.KKT[170] = work.block_33[0];
  work.KKT[172] = work.block_33[0];
  work.KKT[178] = work.block_33[0];
  work.KKT[89] = 1;
  work.KKT[91] = 1;
  work.KKT[93] = 1;
  work.KKT[95] = 1;
  work.KKT[97] = 1;
  work.KKT[99] = 1;
  work.KKT[101] = 1;
  work.KKT[103] = 1;
  work.KKT[105] = 1;
  work.KKT[107] = 1;
  work.KKT[109] = 1;
  work.KKT[111] = 1;
  work.KKT[113] = 1;
  work.KKT[115] = 1;
  work.KKT[117] = 1;
  work.KKT[119] = 1;
  work.KKT[121] = 1;
  work.KKT[123] = 1;
  work.KKT[125] = 1;
  work.KKT[127] = 1;
  work.KKT[129] = 1;
  work.KKT[131] = 1;
  work.KKT[133] = -1;
  work.KKT[135] = -1;
  work.KKT[137] = -1;
  work.KKT[139] = -1;
  work.KKT[141] = -1;
  work.KKT[143] = -1;
  work.KKT[145] = -1;
  work.KKT[147] = -1;
  work.KKT[149] = -1;
  work.KKT[151] = -1;
  work.KKT[153] = -1;
  work.KKT[155] = -1;
  work.KKT[157] = -1;
  work.KKT[159] = -1;
  work.KKT[161] = -1;
  work.KKT[163] = -1;
  work.KKT[165] = -1;
  work.KKT[167] = -1;
  work.KKT[169] = -1;
  work.KKT[171] = -1;
  work.KKT[173] = -1;
  work.KKT[177] = -1;
  work.KKT[179] = -params.B[0];
  work.KKT[180] = -params.B[5];
  work.KKT[182] = -params.B[1];
  work.KKT[183] = -params.B[6];
  work.KKT[185] = -params.B[2];
  work.KKT[186] = -params.B[7];
  work.KKT[188] = -params.B[3];
  work.KKT[189] = -params.B[8];
  work.KKT[191] = -params.B[4];
  work.KKT[192] = -params.B[9];
  work.KKT[181] = 1;
  work.KKT[184] = 1;
  work.KKT[187] = 1;
  work.KKT[190] = 1;
  work.KKT[193] = 1;
  work.KKT[681] = -params.B[0];
  work.KKT[687] = -params.B[5];
  work.KKT[682] = -params.B[1];
  work.KKT[688] = -params.B[6];
  work.KKT[683] = -params.B[2];
  work.KKT[689] = -params.B[7];
  work.KKT[684] = -params.B[3];
  work.KKT[690] = -params.B[8];
  work.KKT[685] = -params.B[4];
  work.KKT[691] = -params.B[9];
  work.KKT[697] = -params.A[0];
  work.KKT[706] = -params.A[5];
  work.KKT[714] = -params.A[10];
  work.KKT[721] = -params.A[15];
  work.KKT[727] = -params.A[20];
  work.KKT[698] = -params.A[1];
  work.KKT[707] = -params.A[6];
  work.KKT[715] = -params.A[11];
  work.KKT[722] = -params.A[16];
  work.KKT[728] = -params.A[21];
  work.KKT[699] = -params.A[2];
  work.KKT[708] = -params.A[7];
  work.KKT[716] = -params.A[12];
  work.KKT[723] = -params.A[17];
  work.KKT[729] = -params.A[22];
  work.KKT[700] = -params.A[3];
  work.KKT[709] = -params.A[8];
  work.KKT[717] = -params.A[13];
  work.KKT[724] = -params.A[18];
  work.KKT[730] = -params.A[23];
  work.KKT[701] = -params.A[4];
  work.KKT[710] = -params.A[9];
  work.KKT[718] = -params.A[14];
  work.KKT[725] = -params.A[19];
  work.KKT[731] = -params.A[24];
  work.KKT[666] = 1;
  work.KKT[671] = 1;
  work.KKT[675] = 1;
  work.KKT[678] = 1;
  work.KKT[733] = 1;
  work.KKT[623] = -params.B[0];
  work.KKT[629] = -params.B[5];
  work.KKT[624] = -params.B[1];
  work.KKT[630] = -params.B[6];
  work.KKT[625] = -params.B[2];
  work.KKT[631] = -params.B[7];
  work.KKT[626] = -params.B[3];
  work.KKT[632] = -params.B[8];
  work.KKT[627] = -params.B[4];
  work.KKT[633] = -params.B[9];
  work.KKT[636] = -params.A[0];
  work.KKT[637] = -params.A[5];
  work.KKT[638] = -params.A[10];
  work.KKT[639] = -params.A[15];
  work.KKT[640] = -params.A[20];
  work.KKT[641] = -params.A[1];
  work.KKT[642] = -params.A[6];
  work.KKT[643] = -params.A[11];
  work.KKT[644] = -params.A[16];
  work.KKT[645] = -params.A[21];
  work.KKT[646] = -params.A[2];
  work.KKT[647] = -params.A[7];
  work.KKT[648] = -params.A[12];
  work.KKT[649] = -params.A[17];
  work.KKT[650] = -params.A[22];
  work.KKT[651] = -params.A[3];
  work.KKT[652] = -params.A[8];
  work.KKT[653] = -params.A[13];
  work.KKT[654] = -params.A[18];
  work.KKT[655] = -params.A[23];
  work.KKT[656] = -params.A[4];
  work.KKT[657] = -params.A[9];
  work.KKT[658] = -params.A[14];
  work.KKT[659] = -params.A[19];
  work.KKT[660] = -params.A[24];
  work.KKT[608] = 1;
  work.KKT[613] = 1;
  work.KKT[617] = 1;
  work.KKT[620] = 1;
  work.KKT[635] = 1;
  work.KKT[565] = -params.B[0];
  work.KKT[571] = -params.B[5];
  work.KKT[566] = -params.B[1];
  work.KKT[572] = -params.B[6];
  work.KKT[567] = -params.B[2];
  work.KKT[573] = -params.B[7];
  work.KKT[568] = -params.B[3];
  work.KKT[574] = -params.B[8];
  work.KKT[569] = -params.B[4];
  work.KKT[575] = -params.B[9];
  work.KKT[578] = -params.A[0];
  work.KKT[579] = -params.A[5];
  work.KKT[580] = -params.A[10];
  work.KKT[581] = -params.A[15];
  work.KKT[582] = -params.A[20];
  work.KKT[583] = -params.A[1];
  work.KKT[584] = -params.A[6];
  work.KKT[585] = -params.A[11];
  work.KKT[586] = -params.A[16];
  work.KKT[587] = -params.A[21];
  work.KKT[588] = -params.A[2];
  work.KKT[589] = -params.A[7];
  work.KKT[590] = -params.A[12];
  work.KKT[591] = -params.A[17];
  work.KKT[592] = -params.A[22];
  work.KKT[593] = -params.A[3];
  work.KKT[594] = -params.A[8];
  work.KKT[595] = -params.A[13];
  work.KKT[596] = -params.A[18];
  work.KKT[597] = -params.A[23];
  work.KKT[598] = -params.A[4];
  work.KKT[599] = -params.A[9];
  work.KKT[600] = -params.A[14];
  work.KKT[601] = -params.A[19];
  work.KKT[602] = -params.A[24];
  work.KKT[550] = 1;
  work.KKT[555] = 1;
  work.KKT[559] = 1;
  work.KKT[562] = 1;
  work.KKT[577] = 1;
  work.KKT[507] = -params.B[0];
  work.KKT[513] = -params.B[5];
  work.KKT[508] = -params.B[1];
  work.KKT[514] = -params.B[6];
  work.KKT[509] = -params.B[2];
  work.KKT[515] = -params.B[7];
  work.KKT[510] = -params.B[3];
  work.KKT[516] = -params.B[8];
  work.KKT[511] = -params.B[4];
  work.KKT[517] = -params.B[9];
  work.KKT[520] = -params.A[0];
  work.KKT[521] = -params.A[5];
  work.KKT[522] = -params.A[10];
  work.KKT[523] = -params.A[15];
  work.KKT[524] = -params.A[20];
  work.KKT[525] = -params.A[1];
  work.KKT[526] = -params.A[6];
  work.KKT[527] = -params.A[11];
  work.KKT[528] = -params.A[16];
  work.KKT[529] = -params.A[21];
  work.KKT[530] = -params.A[2];
  work.KKT[531] = -params.A[7];
  work.KKT[532] = -params.A[12];
  work.KKT[533] = -params.A[17];
  work.KKT[534] = -params.A[22];
  work.KKT[535] = -params.A[3];
  work.KKT[536] = -params.A[8];
  work.KKT[537] = -params.A[13];
  work.KKT[538] = -params.A[18];
  work.KKT[539] = -params.A[23];
  work.KKT[540] = -params.A[4];
  work.KKT[541] = -params.A[9];
  work.KKT[542] = -params.A[14];
  work.KKT[543] = -params.A[19];
  work.KKT[544] = -params.A[24];
  work.KKT[492] = 1;
  work.KKT[497] = 1;
  work.KKT[501] = 1;
  work.KKT[504] = 1;
  work.KKT[519] = 1;
  work.KKT[449] = -params.B[0];
  work.KKT[455] = -params.B[5];
  work.KKT[450] = -params.B[1];
  work.KKT[456] = -params.B[6];
  work.KKT[451] = -params.B[2];
  work.KKT[457] = -params.B[7];
  work.KKT[452] = -params.B[3];
  work.KKT[458] = -params.B[8];
  work.KKT[453] = -params.B[4];
  work.KKT[459] = -params.B[9];
  work.KKT[462] = -params.A[0];
  work.KKT[463] = -params.A[5];
  work.KKT[464] = -params.A[10];
  work.KKT[465] = -params.A[15];
  work.KKT[466] = -params.A[20];
  work.KKT[467] = -params.A[1];
  work.KKT[468] = -params.A[6];
  work.KKT[469] = -params.A[11];
  work.KKT[470] = -params.A[16];
  work.KKT[471] = -params.A[21];
  work.KKT[472] = -params.A[2];
  work.KKT[473] = -params.A[7];
  work.KKT[474] = -params.A[12];
  work.KKT[475] = -params.A[17];
  work.KKT[476] = -params.A[22];
  work.KKT[477] = -params.A[3];
  work.KKT[478] = -params.A[8];
  work.KKT[479] = -params.A[13];
  work.KKT[480] = -params.A[18];
  work.KKT[481] = -params.A[23];
  work.KKT[482] = -params.A[4];
  work.KKT[483] = -params.A[9];
  work.KKT[484] = -params.A[14];
  work.KKT[485] = -params.A[19];
  work.KKT[486] = -params.A[24];
  work.KKT[434] = 1;
  work.KKT[439] = 1;
  work.KKT[443] = 1;
  work.KKT[446] = 1;
  work.KKT[461] = 1;
  work.KKT[391] = -params.B[0];
  work.KKT[397] = -params.B[5];
  work.KKT[392] = -params.B[1];
  work.KKT[398] = -params.B[6];
  work.KKT[393] = -params.B[2];
  work.KKT[399] = -params.B[7];
  work.KKT[394] = -params.B[3];
  work.KKT[400] = -params.B[8];
  work.KKT[395] = -params.B[4];
  work.KKT[401] = -params.B[9];
  work.KKT[404] = -params.A[0];
  work.KKT[405] = -params.A[5];
  work.KKT[406] = -params.A[10];
  work.KKT[407] = -params.A[15];
  work.KKT[408] = -params.A[20];
  work.KKT[409] = -params.A[1];
  work.KKT[410] = -params.A[6];
  work.KKT[411] = -params.A[11];
  work.KKT[412] = -params.A[16];
  work.KKT[413] = -params.A[21];
  work.KKT[414] = -params.A[2];
  work.KKT[415] = -params.A[7];
  work.KKT[416] = -params.A[12];
  work.KKT[417] = -params.A[17];
  work.KKT[418] = -params.A[22];
  work.KKT[419] = -params.A[3];
  work.KKT[420] = -params.A[8];
  work.KKT[421] = -params.A[13];
  work.KKT[422] = -params.A[18];
  work.KKT[423] = -params.A[23];
  work.KKT[424] = -params.A[4];
  work.KKT[425] = -params.A[9];
  work.KKT[426] = -params.A[14];
  work.KKT[427] = -params.A[19];
  work.KKT[428] = -params.A[24];
  work.KKT[376] = 1;
  work.KKT[381] = 1;
  work.KKT[385] = 1;
  work.KKT[388] = 1;
  work.KKT[403] = 1;
  work.KKT[333] = -params.B[0];
  work.KKT[339] = -params.B[5];
  work.KKT[334] = -params.B[1];
  work.KKT[340] = -params.B[6];
  work.KKT[335] = -params.B[2];
  work.KKT[341] = -params.B[7];
  work.KKT[336] = -params.B[3];
  work.KKT[342] = -params.B[8];
  work.KKT[337] = -params.B[4];
  work.KKT[343] = -params.B[9];
  work.KKT[346] = -params.A[0];
  work.KKT[347] = -params.A[5];
  work.KKT[348] = -params.A[10];
  work.KKT[349] = -params.A[15];
  work.KKT[350] = -params.A[20];
  work.KKT[351] = -params.A[1];
  work.KKT[352] = -params.A[6];
  work.KKT[353] = -params.A[11];
  work.KKT[354] = -params.A[16];
  work.KKT[355] = -params.A[21];
  work.KKT[356] = -params.A[2];
  work.KKT[357] = -params.A[7];
  work.KKT[358] = -params.A[12];
  work.KKT[359] = -params.A[17];
  work.KKT[360] = -params.A[22];
  work.KKT[361] = -params.A[3];
  work.KKT[362] = -params.A[8];
  work.KKT[363] = -params.A[13];
  work.KKT[364] = -params.A[18];
  work.KKT[365] = -params.A[23];
  work.KKT[366] = -params.A[4];
  work.KKT[367] = -params.A[9];
  work.KKT[368] = -params.A[14];
  work.KKT[369] = -params.A[19];
  work.KKT[370] = -params.A[24];
  work.KKT[318] = 1;
  work.KKT[323] = 1;
  work.KKT[327] = 1;
  work.KKT[330] = 1;
  work.KKT[345] = 1;
  work.KKT[275] = -params.B[0];
  work.KKT[281] = -params.B[5];
  work.KKT[276] = -params.B[1];
  work.KKT[282] = -params.B[6];
  work.KKT[277] = -params.B[2];
  work.KKT[283] = -params.B[7];
  work.KKT[278] = -params.B[3];
  work.KKT[284] = -params.B[8];
  work.KKT[279] = -params.B[4];
  work.KKT[285] = -params.B[9];
  work.KKT[288] = -params.A[0];
  work.KKT[289] = -params.A[5];
  work.KKT[290] = -params.A[10];
  work.KKT[291] = -params.A[15];
  work.KKT[292] = -params.A[20];
  work.KKT[293] = -params.A[1];
  work.KKT[294] = -params.A[6];
  work.KKT[295] = -params.A[11];
  work.KKT[296] = -params.A[16];
  work.KKT[297] = -params.A[21];
  work.KKT[298] = -params.A[2];
  work.KKT[299] = -params.A[7];
  work.KKT[300] = -params.A[12];
  work.KKT[301] = -params.A[17];
  work.KKT[302] = -params.A[22];
  work.KKT[303] = -params.A[3];
  work.KKT[304] = -params.A[8];
  work.KKT[305] = -params.A[13];
  work.KKT[306] = -params.A[18];
  work.KKT[307] = -params.A[23];
  work.KKT[308] = -params.A[4];
  work.KKT[309] = -params.A[9];
  work.KKT[310] = -params.A[14];
  work.KKT[311] = -params.A[19];
  work.KKT[312] = -params.A[24];
  work.KKT[260] = 1;
  work.KKT[265] = 1;
  work.KKT[269] = 1;
  work.KKT[272] = 1;
  work.KKT[287] = 1;
  work.KKT[217] = -params.B[0];
  work.KKT[223] = -params.B[5];
  work.KKT[218] = -params.B[1];
  work.KKT[224] = -params.B[6];
  work.KKT[219] = -params.B[2];
  work.KKT[225] = -params.B[7];
  work.KKT[220] = -params.B[3];
  work.KKT[226] = -params.B[8];
  work.KKT[221] = -params.B[4];
  work.KKT[227] = -params.B[9];
  work.KKT[230] = -params.A[0];
  work.KKT[231] = -params.A[5];
  work.KKT[232] = -params.A[10];
  work.KKT[233] = -params.A[15];
  work.KKT[234] = -params.A[20];
  work.KKT[235] = -params.A[1];
  work.KKT[236] = -params.A[6];
  work.KKT[237] = -params.A[11];
  work.KKT[238] = -params.A[16];
  work.KKT[239] = -params.A[21];
  work.KKT[240] = -params.A[2];
  work.KKT[241] = -params.A[7];
  work.KKT[242] = -params.A[12];
  work.KKT[243] = -params.A[17];
  work.KKT[244] = -params.A[22];
  work.KKT[245] = -params.A[3];
  work.KKT[246] = -params.A[8];
  work.KKT[247] = -params.A[13];
  work.KKT[248] = -params.A[18];
  work.KKT[249] = -params.A[23];
  work.KKT[250] = -params.A[4];
  work.KKT[251] = -params.A[9];
  work.KKT[252] = -params.A[14];
  work.KKT[253] = -params.A[19];
  work.KKT[254] = -params.A[24];
  work.KKT[202] = 1;
  work.KKT[207] = 1;
  work.KKT[211] = 1;
  work.KKT[214] = 1;
  work.KKT[229] = 1;
}
