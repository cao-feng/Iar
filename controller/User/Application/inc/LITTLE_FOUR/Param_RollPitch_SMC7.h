#define INCLUDED_PARAM_ROLLPITCH_SMC_H

// Header for FRAME TYPE. 
// This header was generated by MATLAB. 
// 27-Sep-2016 16:40:15
//
///////////////////////////////////////////////////////////////////////////////
/*
CtrData.RefModel.Am = { 
    { -21.7416341377, -200.0000000000, -740.0000000000}, 
    {  1.0000000000,  0.0000000000,  0.0000000000}, 
    {  0.0000000000,  1.0000000000,  0.0000000000} 
};
CtrData.KalmanParam.Qk =    { 10000000.0000000000};
CtrData.KalmanParam.Rk = { 
    { 100.0000000000,  0.0000000000}, 
    {  0.0000000000,  1.0000000000} 
};
CtrData.SMC.Q= { 
    {  1.0000000000,  0.0000000000,  0.0000000000}, 
    {  0.0000000000, 100.0000000000,  0.0000000000}, 
    {  0.0000000000,  0.0000000000, 1000.0000000000} 
};
CtrData.SMC.R =     {  1.0000000000};
CtrData.SMC.AA = { 
    {  1.0000000000,  0.0000000000,  0.0000000000}, 
    {  0.0000000000,  1.0000000000,  0.0000000000}, 
    {  0.0000000000,  0.0000000000,  2.5000000000} 
};
CtrData.SMC.rou =     { 20.0000000000};
CtrData.SMC.fai =     { -22.0000000000};
*/
///////////////////////////////////////////////////////////////////////////

#define MRSMC_Control  
#define K_Roll 3
#define Ky_Roll 3
//////////////////////////////Kalman Model////////////////////////////////
double Kalman_A[3][3] = 
{ 
    {  0.6069201583, -4.1363880413,  5.2917868495}, 
    {  0.0159280731,  0.8159843716, -0.4784236741}, 
    {  0.0001723866,  0.0111564708,  0.8523832250} 
};

double Kalman_B[3][3] = 
{ 
    {  0.0191123683, -0.1857309492, -5.2917868495}, 
    {  0.0002068497,  0.1372381235,  0.4784236741}, 
    {  0.0000014325,  0.0085195692,  0.1476167750} 
};

double Kalman_C[3][3] = 
{ 
    {  1.0000000000, -0.6427771892,  4.5977301081}, 
    {  0.0000000000,  0.8667678090, -0.5787281122}, 
    {  0.0000000000, -0.0057872811,  0.8629777153} 
};

double Kalman_D[3][3] = 
{ 
    {  0.0000000000,  0.6427771892, -4.5977301081}, 
    {  0.0000000000,  0.1332321910,  0.5787281122}, 
    {  0.0000000000,  0.0057872811,  0.1370222847} 
};

//////////////////////////////Plant  Model////////////////////////////////
double Ati_A_d[3][3] = 
{ 
    {  0.6069201583, -4.3221189905,  0.0000000000}, 
    {  0.0159280731,  0.9532224951,  0.0000000000}, 
    {  0.0001723866,  0.0196760400,  1.0000000000} 
};

double Ati_B_d[3] = 
    {  0.0191123683,  0.0002068497,  0.0000014325};

double Alt_F[3] = 
    {  0.0000000000, -59.4643405778, 616.7092348075};

double Alt_Br= 616.7092348075; 

//////////////////////////////Reference Model////////////////////////////////
double A_refmodel[3][3] = 
{ 
    {  0.6166929225, -3.3278727252, -11.8400893958}, 
    {  0.0160001208,  0.9645616952, -0.1278485642}, 
    {  0.0001727683,  0.0197563866,  0.9991153612} 
};

double B_refmodel[3] = 
    { 11.8400893958,  0.1278485642,  0.0008846388};

double C_refmodel[3] = 
    {  0.0000000000,  0.0000000000,  1.0000000000};

//////////////////////////////Controller Param////////////////////////////////
double error[3]; 

double Klp[3]= 
    { -12.6454069540, -163.0141346880, -620.3592949546};

double Knp= -163.5696659806; 

double K1[3]= 
    {  0.0000000000, 59.4643405778, -616.7092348075};

double K2= 616.7092348075; 

double S[3]= 
    {  0.1019004169,  1.5198523677,  6.8754053362};

double X_Roll_Ref[3] , X_Roll_smc[3] , theta_error_roll; 
double X_Pitch_Ref[3] , X_Pitch_smc[3] , theta_error_pitch; 