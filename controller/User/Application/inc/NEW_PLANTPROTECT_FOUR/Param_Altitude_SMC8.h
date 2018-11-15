#define INCLUDED_PARAM_ALTITUDE_SMC_H

//////////////////////////////////////////////////////////
//
// This header was generated by MATLAB. 
//////////////////////////////////////////////////////////

// 04-Sep-2015 11:23:09

#define K_Alt 4
#define Ky_Alt 4
//////////////////////////////Kalman Model////////////////////////////////
double Kalman_A_Alt[4][4] = 
{ 
    {  0.7486782640,  0.0000000000, -0.0414425440,  0.0000038897}, 
    {  0.0131249424,  1.0000000000, -0.1141628242, -0.0001713904}, 
    { -0.0001906135,  0.0593772993,  0.8694799773, -0.0001893839}, 
    { -0.0000039079,  0.0005993019, -0.0009948272,  0.9980003038} 
};

double Kalman_B_Alt[4][4] = 
{ 
    {  0.0034968739,  0.0450659645,  0.0414425440, -0.0000038897}, 
    {  0.0000363138,  0.0047331640,  0.1141628242,  0.0001713904}, 
    {  0.0000007425,  0.0007461213,  0.0761800398,  0.0001893839}, 
    {  0.0000000038,  0.0000076997,  0.0204463675,  0.0019996962} 
};

double Kalman_C_Alt[4][4] = 
{ 
    {  0.9432235689,  0.0000000000, -0.0522114587,  0.0000049005}, 
    { -0.0037192444,  1.0000000000, -0.1132304264, -0.0001714779}, 
    { -0.0005221146,  0.0000000000,  0.9265827911, -0.0001895023}, 
    {  0.0000049005,  0.0000000000, -0.0189502325,  0.9980040927} 
};

double Kalman_D_Alt[4][4] = 
{ 
    {  0.0000000000,  0.0567764311,  0.0522114587, -0.0000049005}, 
    {  0.0000000000,  0.0037192444,  0.1132304264,  0.0001714779}, 
    {  0.0000000000,  0.0005221146,  0.0734172089,  0.0001895023}, 
    {  0.0000000000, -0.0000049005,  0.0189502325,  0.0019959073} 
};

//////////////////////////////Reference Model////////////////////////////////
double A_refmodel_Alt[4][4] = 
{ 
    {  0.7264957964, -1.5033036144, -0.0095844362, -0.9276290189}, 
    {  0.0171783152,  0.9841705238, -0.0000658578, -0.0097684166}, 
    {  0.0005418046,  0.0590520089,  0.9456591607, -0.0002010376}, 
    {  0.0000037229,  0.0005976484,  0.0194515378,  0.9999989766} 
};

double B_refmodel_Alt[4] = 
    {  0.9276290189,  0.0097684166,  0.0002010376,  0.0000010234};

double C_refmodel_Alt[4] = 
    {  0.0000000000,  0.0000000000,  0.0000000000,  1.0000000000};

double error_Alt[5]; 
double Klp_Alt[5]= 
    { -10.1709432519, -152.8220971191, -292.6166798535, -817.2637836191, -551.2327819328};

double Knp_Alt= -4.9940506778; 

double K1_Alt[4]= 
    { -17.6202592073, -446.8517753922,  0.0000000000, -275.7713813849};

double K2_Alt= 275.7713813849; 

double S_Alt[5]= 
    { 10.2259223274, 153.3031096812, 292.9208828277, 818.3925502272, 551.8894555681};

double X_Alt_Ref[4] , X_Alt_smc[4]; 