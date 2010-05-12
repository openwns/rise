/*******************************************************************************
 * This file is part of openWNS (open Wireless Network Simulator)
 * _____________________________________________________________________________
 *
 * Copyright (C) 2004-2007
 * Chair of Communication Networks (ComNets)
 * Kopernikusstr. 5, D-52074 Aachen, Germany
 * phone: ++49-241-80-27910,
 * fax: ++49-241-80-22242
 * email: info@openwns.org
 * www: http://www.openwns.org
 * _____________________________________________________________________________
 *
 * openWNS is free software; you can redistribute it and/or modify it under the
 * terms of the GNU Lesser General Public License version 2 as published by the
 * Free Software Foundation;
 *
 * openWNS is distributed in the hope that it will be useful, but WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR
 * A PARTICULAR PURPOSE.  See the GNU Lesser General Public License for more
 * details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 ******************************************************************************/

#include <RISE/antenna/pattern/twodimensional/Directed120.hpp>

using namespace rise::antenna::pattern::twodimensional;

Directed120::Directed120()
{
	pd_startUp();
}

Directed120::~Directed120()
{}

Directed120* Directed120::myself = 0;

void Directed120::pd_startUp()
{
	type = "Internal";
	pattern = "Directed_120";
	unsigned long int horSize = 720;
	unsigned long int vertSize = 1;
	pd_elevationVector = Double64Vector(vertSize + 1);
	pd_azimuthVector = Double64Vector(horSize + 1);
	pd_gain = 6.15;
	for (unsigned long int i = 0; i <= vertSize; i++)
	{
		pd_elevationVector[i] = 0;
	}
	pd_azimuthVector[0] = 0;
	pd_azimuthVector[1] = -0.0002206;
	pd_azimuthVector[2] = -0.0008836;
	pd_azimuthVector[3] = -0.001988;
	pd_azimuthVector[4] = -0.0035341;
	pd_azimuthVector[5] = -0.005522;
	pd_azimuthVector[6] = -0.0079523;
	pd_azimuthVector[7] = -0.0108231;
	pd_azimuthVector[8] = -0.0141354;
	pd_azimuthVector[9] = -0.0178895;
	pd_azimuthVector[10] = -0.022085;
	pd_azimuthVector[11] = -0.0267209;
	pd_azimuthVector[12] = -0.0317973;
	pd_azimuthVector[13] = -0.0373152;
	pd_azimuthVector[14] = -0.0432736;
	pd_azimuthVector[15] = -0.049672;
	pd_azimuthVector[16] = -0.0565098;
	pd_azimuthVector[17] = -0.0637879;
	pd_azimuthVector[18] = -0.0715056;
	pd_azimuthVector[19] = -0.0796615;
	pd_azimuthVector[20] = -0.0882565;
	pd_azimuthVector[21] = -0.0972915;
	pd_azimuthVector[22] = -0.1067639;
	pd_azimuthVector[23] = -0.1166738;
	pd_azimuthVector[24] = -0.127021;
	pd_azimuthVector[25] = -0.1378066;
	pd_azimuthVector[26] = -0.1490275;
	pd_azimuthVector[27] = -0.160685;
	pd_azimuthVector[28] = -0.1727784;
	pd_azimuthVector[29] = -0.1853076;
	pd_azimuthVector[30] = -0.1982716;
	pd_azimuthVector[31] = -0.2116695;
	pd_azimuthVector[32] = -0.2255021;
	pd_azimuthVector[33] = -0.2397676;
	pd_azimuthVector[34] = -0.2544665;
	pd_azimuthVector[35] = -0.2695977;
	pd_azimuthVector[36] = -0.2851602;
	pd_azimuthVector[37] = -0.3011537;
	pd_azimuthVector[38] = -0.3175781;
	pd_azimuthVector[39] = -0.3344328;
	pd_azimuthVector[40] = -0.3517161;
	pd_azimuthVector[41] = -0.3694287;
	pd_azimuthVector[42] = -0.3875692;
	pd_azimuthVector[43] = -0.4061371;
	pd_azimuthVector[44] = -0.4251311;
	pd_azimuthVector[45] = -0.4445508;
	pd_azimuthVector[46] = -0.4643966;
	pd_azimuthVector[47] = -0.4846666;
	pd_azimuthVector[48] = -0.5053599;
	pd_azimuthVector[49] = -0.5264754;
	pd_azimuthVector[50] = -0.5480146;
	pd_azimuthVector[51] = -0.5699733;
	pd_azimuthVector[52] = -0.5923532;
	pd_azimuthVector[53] = -0.6151531;
	pd_azimuthVector[54] = -0.6383702;
	pd_azimuthVector[55] = -0.662006;
	pd_azimuthVector[56] = -0.6860583;
	pd_azimuthVector[57] = -0.7105268;
	pd_azimuthVector[58] = -0.7354102;
	pd_azimuthVector[59] = -0.7607074;
	pd_azimuthVector[60] = -0.7864172;
	pd_azimuthVector[61] = -0.8125398;
	pd_azimuthVector[62] = -0.8390729;
	pd_azimuthVector[63] = -0.8660166;
	pd_azimuthVector[64] = -0.8933688;
	pd_azimuthVector[65] = -0.9211296;
	pd_azimuthVector[66] = -0.9492967;
	pd_azimuthVector[67] = -0.9778688;
	pd_azimuthVector[68] = -1.006846;
	pd_azimuthVector[69] = -1.036227;
	pd_azimuthVector[70] = -1.066009;
	pd_azimuthVector[71] = -1.096194;
	pd_azimuthVector[72] = -1.126778;
	pd_azimuthVector[73] = -1.157761;
	pd_azimuthVector[74] = -1.18914;
	pd_azimuthVector[75] = -1.220917;
	pd_azimuthVector[76] = -1.253088;
	pd_azimuthVector[77] = -1.285653;
	pd_azimuthVector[78] = -1.31861;
	pd_azimuthVector[79] = -1.351958;
	pd_azimuthVector[80] = -1.385696;
	pd_azimuthVector[81] = -1.419823;
	pd_azimuthVector[82] = -1.454336;
	pd_azimuthVector[83] = -1.489235;
	pd_azimuthVector[84] = -1.524519;
	pd_azimuthVector[85] = -1.560185;
	pd_azimuthVector[86] = -1.596232;
	pd_azimuthVector[87] = -1.632659;
	pd_azimuthVector[88] = -1.669464;
	pd_azimuthVector[89] = -1.706647;
	pd_azimuthVector[90] = -1.744205;
	pd_azimuthVector[91] = -1.782136;
	pd_azimuthVector[92] = -1.82044;
	pd_azimuthVector[93] = -1.859114;
	pd_azimuthVector[94] = -1.898159;
	pd_azimuthVector[95] = -1.937569;
	pd_azimuthVector[96] = -1.977345;
	pd_azimuthVector[97] = -2.017486;
	pd_azimuthVector[98] = -2.057989;
	pd_azimuthVector[99] = -2.098853;
	pd_azimuthVector[100] = -2.140076;
	pd_azimuthVector[101] = -2.181655;
	pd_azimuthVector[102] = -2.223592;
	pd_azimuthVector[103] = -2.265881;
	pd_azimuthVector[104] = -2.308523;
	pd_azimuthVector[105] = -2.351514;
	pd_azimuthVector[106] = -2.394854;
	pd_azimuthVector[107] = -2.43854;
	pd_azimuthVector[108] = -2.482572;
	pd_azimuthVector[109] = -2.526944;
	pd_azimuthVector[110] = -2.571658;
	pd_azimuthVector[111] = -2.616713;
	pd_azimuthVector[112] = -2.662101;
	pd_azimuthVector[113] = -2.707826;
	pd_azimuthVector[114] = -2.753884;
	pd_azimuthVector[115] = -2.800272;
	pd_azimuthVector[116] = -2.846989;
	pd_azimuthVector[117] = -2.894033;
	pd_azimuthVector[118] = -2.941401;
	pd_azimuthVector[119] = -2.989092;
	pd_azimuthVector[120] = -3.037103;
	pd_azimuthVector[121] = -3.085431;
	pd_azimuthVector[122] = -3.134077;
	pd_azimuthVector[123] = -3.183035;
	pd_azimuthVector[124] = -3.232306;
	pd_azimuthVector[125] = -3.281886;
	pd_azimuthVector[126] = -3.331772;
	pd_azimuthVector[127] = -3.381965;
	pd_azimuthVector[128] = -3.432459;
	pd_azimuthVector[129] = -3.483253;
	pd_azimuthVector[130] = -3.534344;
	pd_azimuthVector[131] = -3.585732;
	pd_azimuthVector[132] = -3.637414;
	pd_azimuthVector[133] = -3.689384;
	pd_azimuthVector[134] = -3.741644;
	pd_azimuthVector[135] = -3.794188;
	pd_azimuthVector[136] = -3.847015;
	pd_azimuthVector[137] = -3.900123;
	pd_azimuthVector[138] = -3.95351;
	pd_azimuthVector[139] = -4.007172;
	pd_azimuthVector[140] = -4.061105;
	pd_azimuthVector[141] = -4.115311;
	pd_azimuthVector[142] = -4.169783;
	pd_azimuthVector[143] = -4.224522;
	pd_azimuthVector[144] = -4.27952;
	pd_azimuthVector[145] = -4.334779;
	pd_azimuthVector[146] = -4.390295;
	pd_azimuthVector[147] = -4.446064;
	pd_azimuthVector[148] = -4.502085;
	pd_azimuthVector[149] = -4.558354;
	pd_azimuthVector[150] = -4.614869;
	pd_azimuthVector[151] = -4.671627;
	pd_azimuthVector[152] = -4.728622;
	pd_azimuthVector[153] = -4.785855;
	pd_azimuthVector[154] = -4.843325;
	pd_azimuthVector[155] = -4.901023;
	pd_azimuthVector[156] = -4.958948;
	pd_azimuthVector[157] = -5.017099;
	pd_azimuthVector[158] = -5.075471;
	pd_azimuthVector[159] = -5.134062;
	pd_azimuthVector[160] = -5.192869;
	pd_azimuthVector[161] = -5.251889;
	pd_azimuthVector[162] = -5.311117;
	pd_azimuthVector[163] = -5.37055;
	pd_azimuthVector[164] = -5.430186;
	pd_azimuthVector[165] = -5.490024;
	pd_azimuthVector[166] = -5.550056;
	pd_azimuthVector[167] = -5.61028;
	pd_azimuthVector[168] = -5.670695;
	pd_azimuthVector[169] = -5.731294;
	pd_azimuthVector[170] = -5.792077;
	pd_azimuthVector[171] = -5.853038;
	pd_azimuthVector[172] = -5.914177;
	pd_azimuthVector[173] = -5.975486;
	pd_azimuthVector[174] = -6.036964;
	pd_azimuthVector[175] = -6.098609;
	pd_azimuthVector[176] = -6.160414;
	pd_azimuthVector[177] = -6.222377;
	pd_azimuthVector[178] = -6.284494;
	pd_azimuthVector[179] = -6.346763;
	pd_azimuthVector[180] = -6.409177;
	pd_azimuthVector[181] = -6.471736;
	pd_azimuthVector[182] = -6.534431;
	pd_azimuthVector[183] = -6.597263;
	pd_azimuthVector[184] = -6.660227;
	pd_azimuthVector[185] = -6.723318;
	pd_azimuthVector[186] = -6.786533;
	pd_azimuthVector[187] = -6.849867;
	pd_azimuthVector[188] = -6.913318;
	pd_azimuthVector[189] = -6.976879;
	pd_azimuthVector[190] = -7.040549;
	pd_azimuthVector[191] = -7.104322;
	pd_azimuthVector[192] = -7.168197;
	pd_azimuthVector[193] = -7.232164;
	pd_azimuthVector[194] = -7.296223;
	pd_azimuthVector[195] = -7.36037;
	pd_azimuthVector[196] = -7.424596;
	pd_azimuthVector[197] = -7.488904;
	pd_azimuthVector[198] = -7.553284;
	pd_azimuthVector[199] = -7.617734;
	pd_azimuthVector[200] = -7.682249;
	pd_azimuthVector[201] = -7.746826;
	pd_azimuthVector[202] = -7.811457;
	pd_azimuthVector[203] = -7.87614;
	pd_azimuthVector[204] = -7.940872;
	pd_azimuthVector[205] = -8.005643;
	pd_azimuthVector[206] = -8.070455;
	pd_azimuthVector[207] = -8.135298;
	pd_azimuthVector[208] = -8.200171;
	pd_azimuthVector[209] = -8.265068;
	pd_azimuthVector[210] = -8.329982;
	pd_azimuthVector[211] = -8.39491;
	pd_azimuthVector[212] = -8.459846;
	pd_azimuthVector[213] = -8.52479;
	pd_azimuthVector[214] = -8.589732;
	pd_azimuthVector[215] = -8.654667;
	pd_azimuthVector[216] = -8.719593;
	pd_azimuthVector[217] = -8.7845;
	pd_azimuthVector[218] = -8.84939;
	pd_azimuthVector[219] = -8.914253;
	pd_azimuthVector[220] = -8.979084;
	pd_azimuthVector[221] = -9.043878;
	pd_azimuthVector[222] = -9.108631;
	pd_azimuthVector[223] = -9.173335;
	pd_azimuthVector[224] = -9.237989;
	pd_azimuthVector[225] = -9.302587;
	pd_azimuthVector[226] = -9.36712;
	pd_azimuthVector[227] = -9.431582;
	pd_azimuthVector[228] = -9.495973;
	pd_azimuthVector[229] = -9.560282;
	pd_azimuthVector[230] = -9.624508;
	pd_azimuthVector[231] = -9.688641;
	pd_azimuthVector[232] = -9.75268;
	pd_azimuthVector[233] = -9.816616;
	pd_azimuthVector[234] = -9.880444;
	pd_azimuthVector[235] = -9.944157;
	pd_azimuthVector[236] = -10.00775;
	pd_azimuthVector[237] = -10.07122;
	pd_azimuthVector[238] = -10.13456;
	pd_azimuthVector[239] = -10.19775;
	pd_azimuthVector[240] = -10.26081;
	pd_azimuthVector[241] = -10.32372;
	pd_azimuthVector[242] = -10.38647;
	pd_azimuthVector[243] = -10.44907;
	pd_azimuthVector[244] = -10.51149;
	pd_azimuthVector[245] = -10.57374;
	pd_azimuthVector[246] = -10.63581;
	pd_azimuthVector[247] = -10.6977;
	pd_azimuthVector[248] = -10.75939;
	pd_azimuthVector[249] = -10.82088;
	pd_azimuthVector[250] = -10.88217;
	pd_azimuthVector[251] = -10.94325;
	pd_azimuthVector[252] = -11.00411;
	pd_azimuthVector[253] = -11.06474;
	pd_azimuthVector[254] = -11.12515;
	pd_azimuthVector[255] = -11.18532;
	pd_azimuthVector[256] = -11.24524;
	pd_azimuthVector[257] = -11.30492;
	pd_azimuthVector[258] = -11.36433;
	pd_azimuthVector[259] = -11.42349;
	pd_azimuthVector[260] = -11.48237;
	pd_azimuthVector[261] = -11.54098;
	pd_azimuthVector[262] = -11.5993;
	pd_azimuthVector[263] = -11.65734;
	pd_azimuthVector[264] = -11.71508;
	pd_azimuthVector[265] = -11.77251;
	pd_azimuthVector[266] = -11.82963;
	pd_azimuthVector[267] = -11.88644;
	pd_azimuthVector[268] = -11.94292;
	pd_azimuthVector[269] = -11.99907;
	pd_azimuthVector[270] = -12.05488;
	pd_azimuthVector[271] = -12.11035;
	pd_azimuthVector[272] = -12.16547;
	pd_azimuthVector[273] = -12.22023;
	pd_azimuthVector[274] = -12.27462;
	pd_azimuthVector[275] = -12.32864;
	pd_azimuthVector[276] = -12.38228;
	pd_azimuthVector[277] = -12.43554;
	pd_azimuthVector[278] = -12.4884;
	pd_azimuthVector[279] = -12.54086;
	pd_azimuthVector[280] = -12.59292;
	pd_azimuthVector[281] = -12.64456;
	pd_azimuthVector[282] = -12.69577;
	pd_azimuthVector[283] = -12.74656;
	pd_azimuthVector[284] = -12.79692;
	pd_azimuthVector[285] = -12.84683;
	pd_azimuthVector[286] = -12.8963;
	pd_azimuthVector[287] = -12.9453;
	pd_azimuthVector[288] = -12.99385;
	pd_azimuthVector[289] = -13.04193;
	pd_azimuthVector[290] = -13.08952;
	pd_azimuthVector[291] = -13.13664;
	pd_azimuthVector[292] = -13.18326;
	pd_azimuthVector[293] = -13.22939;
	pd_azimuthVector[294] = -13.275;
	pd_azimuthVector[295] = -13.32012;
	pd_azimuthVector[296] = -13.36471;
	pd_azimuthVector[297] = -13.40878;
	pd_azimuthVector[298] = -13.45231;
	pd_azimuthVector[299] = -13.49531;
	pd_azimuthVector[300] = -13.53776;
	pd_azimuthVector[301] = -13.57966;
	pd_azimuthVector[302] = -13.621;
	pd_azimuthVector[303] = -13.66178;
	pd_azimuthVector[304] = -13.70199;
	pd_azimuthVector[305] = -13.74162;
	pd_azimuthVector[306] = -13.78066;
	pd_azimuthVector[307] = -13.81911;
	pd_azimuthVector[308] = -13.85697;
	pd_azimuthVector[309] = -13.89423;
	pd_azimuthVector[310] = -13.93087;
	pd_azimuthVector[311] = -13.9669;
	pd_azimuthVector[312] = -14.00231;
	pd_azimuthVector[313] = -14.03709;
	pd_azimuthVector[314] = -14.07124;
	pd_azimuthVector[315] = -14.10475;
	pd_azimuthVector[316] = -14.13761;
	pd_azimuthVector[317] = -14.16983;
	pd_azimuthVector[318] = -14.20139;
	pd_azimuthVector[319] = -14.23228;
	pd_azimuthVector[320] = -14.26251;
	pd_azimuthVector[321] = -14.29207;
	pd_azimuthVector[322] = -14.32095;
	pd_azimuthVector[323] = -14.34915;
	pd_azimuthVector[324] = -14.37666;
	pd_azimuthVector[325] = -14.40347;
	pd_azimuthVector[326] = -14.42959;
	pd_azimuthVector[327] = -14.45501;
	pd_azimuthVector[328] = -14.47972;
	pd_azimuthVector[329] = -14.50372;
	pd_azimuthVector[330] = -14.527;
	pd_azimuthVector[331] = -14.54956;
	pd_azimuthVector[332] = -14.5714;
	pd_azimuthVector[333] = -14.59251;
	pd_azimuthVector[334] = -14.61289;
	pd_azimuthVector[335] = -14.63253;
	pd_azimuthVector[336] = -14.65143;
	pd_azimuthVector[337] = -14.66959;
	pd_azimuthVector[338] = -14.687;
	pd_azimuthVector[339] = -14.70366;
	pd_azimuthVector[340] = -14.71957;
	pd_azimuthVector[341] = -14.73472;
	pd_azimuthVector[342] = -14.74911;
	pd_azimuthVector[343] = -14.76274;
	pd_azimuthVector[344] = -14.7756;
	pd_azimuthVector[345] = -14.7877;
	pd_azimuthVector[346] = -14.79903;
	pd_azimuthVector[347] = -14.80959;
	pd_azimuthVector[348] = -14.81937;
	pd_azimuthVector[349] = -14.82838;
	pd_azimuthVector[350] = -14.83661;
	pd_azimuthVector[351] = -14.84406;
	pd_azimuthVector[352] = -14.85073;
	pd_azimuthVector[353] = -14.85662;
	pd_azimuthVector[354] = -14.86173;
	pd_azimuthVector[355] = -14.86605;
	pd_azimuthVector[356] = -14.86959;
	pd_azimuthVector[357] = -14.87234;
	pd_azimuthVector[358] = -14.8743;
	pd_azimuthVector[359] = -14.87548;
	pd_azimuthVector[360] = -14.87588;
	pd_azimuthVector[361] = -14.87548;
	pd_azimuthVector[362] = -14.8743;
	pd_azimuthVector[363] = -14.87234;
	pd_azimuthVector[364] = -14.86959;
	pd_azimuthVector[365] = -14.86605;
	pd_azimuthVector[366] = -14.86173;
	pd_azimuthVector[367] = -14.85662;
	pd_azimuthVector[368] = -14.85073;
	pd_azimuthVector[369] = -14.84406;
	pd_azimuthVector[370] = -14.83661;
	pd_azimuthVector[371] = -14.82838;
	pd_azimuthVector[372] = -14.81937;
	pd_azimuthVector[373] = -14.80959;
	pd_azimuthVector[374] = -14.79903;
	pd_azimuthVector[375] = -14.7877;
	pd_azimuthVector[376] = -14.7756;
	pd_azimuthVector[377] = -14.76274;
	pd_azimuthVector[378] = -14.74911;
	pd_azimuthVector[379] = -14.73472;
	pd_azimuthVector[380] = -14.71957;
	pd_azimuthVector[381] = -14.70366;
	pd_azimuthVector[382] = -14.687;
	pd_azimuthVector[383] = -14.66959;
	pd_azimuthVector[384] = -14.65143;
	pd_azimuthVector[385] = -14.63253;
	pd_azimuthVector[386] = -14.61289;
	pd_azimuthVector[387] = -14.59251;
	pd_azimuthVector[388] = -14.5714;
	pd_azimuthVector[389] = -14.54956;
	pd_azimuthVector[390] = -14.527;
	pd_azimuthVector[391] = -14.50372;
	pd_azimuthVector[392] = -14.47972;
	pd_azimuthVector[393] = -14.45501;
	pd_azimuthVector[394] = -14.42959;
	pd_azimuthVector[395] = -14.40347;
	pd_azimuthVector[396] = -14.37666;
	pd_azimuthVector[397] = -14.34915;
	pd_azimuthVector[398] = -14.32095;
	pd_azimuthVector[399] = -14.29207;
	pd_azimuthVector[400] = -14.26251;
	pd_azimuthVector[401] = -14.23228;
	pd_azimuthVector[402] = -14.20139;
	pd_azimuthVector[403] = -14.16983;
	pd_azimuthVector[404] = -14.13761;
	pd_azimuthVector[405] = -14.10475;
	pd_azimuthVector[406] = -14.07124;
	pd_azimuthVector[407] = -14.03709;
	pd_azimuthVector[408] = -14.00231;
	pd_azimuthVector[409] = -13.9669;
	pd_azimuthVector[410] = -13.93087;
	pd_azimuthVector[411] = -13.89423;
	pd_azimuthVector[412] = -13.85697;
	pd_azimuthVector[413] = -13.81911;
	pd_azimuthVector[414] = -13.78066;
	pd_azimuthVector[415] = -13.74162;
	pd_azimuthVector[416] = -13.70199;
	pd_azimuthVector[417] = -13.66178;
	pd_azimuthVector[418] = -13.621;
	pd_azimuthVector[419] = -13.57966;
	pd_azimuthVector[420] = -13.53776;
	pd_azimuthVector[421] = -13.49531;
	pd_azimuthVector[422] = -13.45231;
	pd_azimuthVector[423] = -13.40878;
	pd_azimuthVector[424] = -13.36471;
	pd_azimuthVector[425] = -13.32012;
	pd_azimuthVector[426] = -13.275;
	pd_azimuthVector[427] = -13.22939;
	pd_azimuthVector[428] = -13.18326;
	pd_azimuthVector[429] = -13.13664;
	pd_azimuthVector[430] = -13.08952;
	pd_azimuthVector[431] = -13.04193;
	pd_azimuthVector[432] = -12.99385;
	pd_azimuthVector[433] = -12.9453;
	pd_azimuthVector[434] = -12.8963;
	pd_azimuthVector[435] = -12.84683;
	pd_azimuthVector[436] = -12.79692;
	pd_azimuthVector[437] = -12.74656;
	pd_azimuthVector[438] = -12.69577;
	pd_azimuthVector[439] = -12.64456;
	pd_azimuthVector[440] = -12.59292;
	pd_azimuthVector[441] = -12.54086;
	pd_azimuthVector[442] = -12.4884;
	pd_azimuthVector[443] = -12.43554;
	pd_azimuthVector[444] = -12.38228;
	pd_azimuthVector[445] = -12.32864;
	pd_azimuthVector[446] = -12.27462;
	pd_azimuthVector[447] = -12.22023;
	pd_azimuthVector[448] = -12.16547;
	pd_azimuthVector[449] = -12.11035;
	pd_azimuthVector[450] = -12.05488;
	pd_azimuthVector[451] = -11.99907;
	pd_azimuthVector[452] = -11.94292;
	pd_azimuthVector[453] = -11.88644;
	pd_azimuthVector[454] = -11.82963;
	pd_azimuthVector[455] = -11.77251;
	pd_azimuthVector[456] = -11.71508;
	pd_azimuthVector[457] = -11.65734;
	pd_azimuthVector[458] = -11.5993;
	pd_azimuthVector[459] = -11.54098;
	pd_azimuthVector[460] = -11.48237;
	pd_azimuthVector[461] = -11.42349;
	pd_azimuthVector[462] = -11.36433;
	pd_azimuthVector[463] = -11.30492;
	pd_azimuthVector[464] = -11.24524;
	pd_azimuthVector[465] = -11.18532;
	pd_azimuthVector[466] = -11.12515;
	pd_azimuthVector[467] = -11.06474;
	pd_azimuthVector[468] = -11.00411;
	pd_azimuthVector[469] = -10.94325;
	pd_azimuthVector[470] = -10.88217;
	pd_azimuthVector[471] = -10.82088;
	pd_azimuthVector[472] = -10.75939;
	pd_azimuthVector[473] = -10.6977;
	pd_azimuthVector[474] = -10.63581;
	pd_azimuthVector[475] = -10.57374;
	pd_azimuthVector[476] = -10.51149;
	pd_azimuthVector[477] = -10.44907;
	pd_azimuthVector[478] = -10.38647;
	pd_azimuthVector[479] = -10.32372;
	pd_azimuthVector[480] = -10.26081;
	pd_azimuthVector[481] = -10.19775;
	pd_azimuthVector[482] = -10.13456;
	pd_azimuthVector[483] = -10.07122;
	pd_azimuthVector[484] = -10.00775;
	pd_azimuthVector[485] = -9.944157;
	pd_azimuthVector[486] = -9.880444;
	pd_azimuthVector[487] = -9.816616;
	pd_azimuthVector[488] = -9.75268;
	pd_azimuthVector[489] = -9.688641;
	pd_azimuthVector[490] = -9.624508;
	pd_azimuthVector[491] = -9.560282;
	pd_azimuthVector[492] = -9.495973;
	pd_azimuthVector[493] = -9.431582;
	pd_azimuthVector[494] = -9.36712;
	pd_azimuthVector[495] = -9.302587;
	pd_azimuthVector[496] = -9.237989;
	pd_azimuthVector[497] = -9.173335;
	pd_azimuthVector[498] = -9.108631;
	pd_azimuthVector[499] = -9.043878;
	pd_azimuthVector[500] = -8.979084;
	pd_azimuthVector[501] = -8.914253;
	pd_azimuthVector[502] = -8.84939;
	pd_azimuthVector[503] = -8.7845;
	pd_azimuthVector[504] = -8.719593;
	pd_azimuthVector[505] = -8.654667;
	pd_azimuthVector[506] = -8.589732;
	pd_azimuthVector[507] = -8.52479;
	pd_azimuthVector[508] = -8.459846;
	pd_azimuthVector[509] = -8.39491;
	pd_azimuthVector[510] = -8.329982;
	pd_azimuthVector[511] = -8.265068;
	pd_azimuthVector[512] = -8.200171;
	pd_azimuthVector[513] = -8.135298;
	pd_azimuthVector[514] = -8.070455;
	pd_azimuthVector[515] = -8.005643;
	pd_azimuthVector[516] = -7.940872;
	pd_azimuthVector[517] = -7.87614;
	pd_azimuthVector[518] = -7.811457;
	pd_azimuthVector[519] = -7.746826;
	pd_azimuthVector[520] = -7.682249;
	pd_azimuthVector[521] = -7.617734;
	pd_azimuthVector[522] = -7.553284;
	pd_azimuthVector[523] = -7.488904;
	pd_azimuthVector[524] = -7.424596;
	pd_azimuthVector[525] = -7.36037;
	pd_azimuthVector[526] = -7.296223;
	pd_azimuthVector[527] = -7.232164;
	pd_azimuthVector[528] = -7.168197;
	pd_azimuthVector[529] = -7.104322;
	pd_azimuthVector[530] = -7.040549;
	pd_azimuthVector[531] = -6.976879;
	pd_azimuthVector[532] = -6.913318;
	pd_azimuthVector[533] = -6.849867;
	pd_azimuthVector[534] = -6.786533;
	pd_azimuthVector[535] = -6.723318;
	pd_azimuthVector[536] = -6.660227;
	pd_azimuthVector[537] = -6.597263;
	pd_azimuthVector[538] = -6.534431;
	pd_azimuthVector[539] = -6.471736;
	pd_azimuthVector[540] = -6.409177;
	pd_azimuthVector[541] = -6.346763;
	pd_azimuthVector[542] = -6.284494;
	pd_azimuthVector[543] = -6.222377;
	pd_azimuthVector[544] = -6.160414;
	pd_azimuthVector[545] = -6.098609;
	pd_azimuthVector[546] = -6.036964;
	pd_azimuthVector[547] = -5.975486;
	pd_azimuthVector[548] = -5.914177;
	pd_azimuthVector[549] = -5.853038;
	pd_azimuthVector[550] = -5.792077;
	pd_azimuthVector[551] = -5.731294;
	pd_azimuthVector[552] = -5.670695;
	pd_azimuthVector[553] = -5.61028;
	pd_azimuthVector[554] = -5.550056;
	pd_azimuthVector[555] = -5.490024;
	pd_azimuthVector[556] = -5.430186;
	pd_azimuthVector[557] = -5.37055;
	pd_azimuthVector[558] = -5.311117;
	pd_azimuthVector[559] = -5.251889;
	pd_azimuthVector[560] = -5.192869;
	pd_azimuthVector[561] = -5.134062;
	pd_azimuthVector[562] = -5.075471;
	pd_azimuthVector[563] = -5.017099;
	pd_azimuthVector[564] = -4.958948;
	pd_azimuthVector[565] = -4.901023;
	pd_azimuthVector[566] = -4.843325;
	pd_azimuthVector[567] = -4.785855;
	pd_azimuthVector[568] = -4.728622;
	pd_azimuthVector[569] = -4.671627;
	pd_azimuthVector[570] = -4.614869;
	pd_azimuthVector[571] = -4.558354;
	pd_azimuthVector[572] = -4.502085;
	pd_azimuthVector[573] = -4.446064;
	pd_azimuthVector[574] = -4.390295;
	pd_azimuthVector[575] = -4.334779;
	pd_azimuthVector[576] = -4.27952;
	pd_azimuthVector[577] = -4.224522;
	pd_azimuthVector[578] = -4.169783;
	pd_azimuthVector[579] = -4.115311;
	pd_azimuthVector[580] = -4.061105;
	pd_azimuthVector[581] = -4.007172;
	pd_azimuthVector[582] = -3.95351;
	pd_azimuthVector[583] = -3.900123;
	pd_azimuthVector[584] = -3.847015;
	pd_azimuthVector[585] = -3.794188;
	pd_azimuthVector[586] = -3.741644;
	pd_azimuthVector[587] = -3.689384;
	pd_azimuthVector[588] = -3.637414;
	pd_azimuthVector[589] = -3.585732;
	pd_azimuthVector[590] = -3.534344;
	pd_azimuthVector[591] = -3.483253;
	pd_azimuthVector[592] = -3.432459;
	pd_azimuthVector[593] = -3.381965;
	pd_azimuthVector[594] = -3.331772;
	pd_azimuthVector[595] = -3.281886;
	pd_azimuthVector[596] = -3.232306;
	pd_azimuthVector[597] = -3.183035;
	pd_azimuthVector[598] = -3.134077;
	pd_azimuthVector[599] = -3.085431;
	pd_azimuthVector[600] = -3.037103;
	pd_azimuthVector[601] = -2.989092;
	pd_azimuthVector[602] = -2.941401;
	pd_azimuthVector[603] = -2.894033;
	pd_azimuthVector[604] = -2.846989;
	pd_azimuthVector[605] = -2.800272;
	pd_azimuthVector[606] = -2.753884;
	pd_azimuthVector[607] = -2.707826;
	pd_azimuthVector[608] = -2.662101;
	pd_azimuthVector[609] = -2.616713;
	pd_azimuthVector[610] = -2.571658;
	pd_azimuthVector[611] = -2.526944;
	pd_azimuthVector[612] = -2.482572;
	pd_azimuthVector[613] = -2.43854;
	pd_azimuthVector[614] = -2.394854;
	pd_azimuthVector[615] = -2.351514;
	pd_azimuthVector[616] = -2.308523;
	pd_azimuthVector[617] = -2.265881;
	pd_azimuthVector[618] = -2.223592;
	pd_azimuthVector[619] = -2.181655;
	pd_azimuthVector[620] = -2.140076;
	pd_azimuthVector[621] = -2.098853;
	pd_azimuthVector[622] = -2.057989;
	pd_azimuthVector[623] = -2.017486;
	pd_azimuthVector[624] = -1.977345;
	pd_azimuthVector[625] = -1.937569;
	pd_azimuthVector[626] = -1.898159;
	pd_azimuthVector[627] = -1.859114;
	pd_azimuthVector[628] = -1.82044;
	pd_azimuthVector[629] = -1.782136;
	pd_azimuthVector[630] = -1.744205;
	pd_azimuthVector[631] = -1.706647;
	pd_azimuthVector[632] = -1.669464;
	pd_azimuthVector[633] = -1.632659;
	pd_azimuthVector[634] = -1.596232;
	pd_azimuthVector[635] = -1.560185;
	pd_azimuthVector[636] = -1.524519;
	pd_azimuthVector[637] = -1.489235;
	pd_azimuthVector[638] = -1.454336;
	pd_azimuthVector[639] = -1.419823;
	pd_azimuthVector[640] = -1.385696;
	pd_azimuthVector[641] = -1.351958;
	pd_azimuthVector[642] = -1.31861;
	pd_azimuthVector[643] = -1.285653;
	pd_azimuthVector[644] = -1.253088;
	pd_azimuthVector[645] = -1.220917;
	pd_azimuthVector[646] = -1.18914;
	pd_azimuthVector[647] = -1.157761;
	pd_azimuthVector[648] = -1.126778;
	pd_azimuthVector[649] = -1.096194;
	pd_azimuthVector[650] = -1.066009;
	pd_azimuthVector[651] = -1.036227;
	pd_azimuthVector[652] = -1.006846;
	pd_azimuthVector[653] = -0.9778688;
	pd_azimuthVector[654] = -0.9492967;
	pd_azimuthVector[655] = -0.9211296;
	pd_azimuthVector[656] = -0.8933688;
	pd_azimuthVector[657] = -0.8660166;
	pd_azimuthVector[658] = -0.8390729;
	pd_azimuthVector[659] = -0.8125398;
	pd_azimuthVector[660] = -0.7864172;
	pd_azimuthVector[661] = -0.7607074;
	pd_azimuthVector[662] = -0.7354102;
	pd_azimuthVector[663] = -0.7105268;
	pd_azimuthVector[664] = -0.6860583;
	pd_azimuthVector[665] = -0.662006;
	pd_azimuthVector[666] = -0.6383702;
	pd_azimuthVector[667] = -0.6151531;
	pd_azimuthVector[668] = -0.5923532;
	pd_azimuthVector[669] = -0.5699733;
	pd_azimuthVector[670] = -0.5480146;
	pd_azimuthVector[671] = -0.5264754;
	pd_azimuthVector[672] = -0.5053599;
	pd_azimuthVector[673] = -0.4846666;
	pd_azimuthVector[674] = -0.4643966;
	pd_azimuthVector[675] = -0.4445508;
	pd_azimuthVector[676] = -0.4251311;
	pd_azimuthVector[677] = -0.4061371;
	pd_azimuthVector[678] = -0.3875692;
	pd_azimuthVector[679] = -0.3694287;
	pd_azimuthVector[680] = -0.3517161;
	pd_azimuthVector[681] = -0.3344328;
	pd_azimuthVector[682] = -0.3175781;
	pd_azimuthVector[683] = -0.3011537;
	pd_azimuthVector[684] = -0.2851602;
	pd_azimuthVector[685] = -0.2695977;
	pd_azimuthVector[686] = -0.2544665;
	pd_azimuthVector[687] = -0.2397676;
	pd_azimuthVector[688] = -0.2255021;
	pd_azimuthVector[689] = -0.2116695;
	pd_azimuthVector[690] = -0.1982716;
	pd_azimuthVector[691] = -0.1853076;
	pd_azimuthVector[692] = -0.1727784;
	pd_azimuthVector[693] = -0.160685;
	pd_azimuthVector[694] = -0.1490275;
	pd_azimuthVector[695] = -0.1378066;
	pd_azimuthVector[696] = -0.127021;
	pd_azimuthVector[697] = -0.1166738;
	pd_azimuthVector[698] = -0.1067639;
	pd_azimuthVector[699] = -0.0972915;
	pd_azimuthVector[700] = -0.0882565;
	pd_azimuthVector[701] = -0.0796615;
	pd_azimuthVector[702] = -0.0715056;
	pd_azimuthVector[703] = -0.0637879;
	pd_azimuthVector[704] = -0.0565098;
	pd_azimuthVector[705] = -0.049672;
	pd_azimuthVector[706] = -0.0432736;
	pd_azimuthVector[707] = -0.0373152;
	pd_azimuthVector[708] = -0.0317973;
	pd_azimuthVector[709] = -0.0267209;
	pd_azimuthVector[710] = -0.022085;
	pd_azimuthVector[711] = -0.0178895;
	pd_azimuthVector[712] = -0.0141354;
	pd_azimuthVector[713] = -0.0108231;
	pd_azimuthVector[714] = -0.0079523;
	pd_azimuthVector[715] = -0.005522;
	pd_azimuthVector[716] = -0.0035341;
	pd_azimuthVector[717] = -0.001988;
	pd_azimuthVector[718] = -0.0008836;
	pd_azimuthVector[719] = -0.0002206;
	pd_azimuthVector[720] = 0;
	TwoDimensional::pd_startUp();
}


