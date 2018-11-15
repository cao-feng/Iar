#define INCLUDED_PARAM_ALTITUDE_SMC_H

// Header for FRAME TYPE 
// This header was generated by MATLAB. 
// 15-Feb-2017 10:20:40
//
///////////////////////////////////////////////////////////////////////////////
/*
CtrData.RefModel.Am = { 
    { -18.0815731168, -15.0000000000, -15.0000000000,  0.0000000000}, 
    {  1.0000000000,  0.0000000000,  0.0000000000,  0.0000000000}, 
    {  0.0000000000, 10.0000000000, -10.0000000000,  0.0000000000}, 
    {  0.0000000000,  0.0000000000,  1.0000000000,  0.0000000000} 
};
CtrData.KalmanParam.Qk =    { 2000.0000000000};
CtrData.KalmanParam.Rk = { 
    { 100.0000000000,  0.0000000000,  0.0000000000}, 
    {  0.0000000000,  1.0000000000,  0.0000000000}, 
    {  0.0000000000,  0.0000000000,  0.1000000000} 
};
CtrData.SMC.Q= { 
    {  1.0000000000,  0.0000000000,  0.0000000000,  0.0000000000,  0.0000000000}, 
    {  0.0000000000,  2.0000000000,  0.0000000000,  0.0000000000,  0.0000000000}, 
    {  0.0000000000,  0.0000000000,  1.0000000000,  0.0000000000,  0.0000000000}, 
    {  0.0000000000,  0.0000000000,  0.0000000000,  2.0000000000,  0.0000000000}, 
    {  0.0000000000,  0.0000000000,  0.0000000000,  0.0000000000,  1.0000000000} 
};
CtrData.SMC.R =     {  1.0000000000};
CtrData.SMC.AA = { 
    {  1.0000000000,  0.0000000000,  0.0000000000,  0.0000000000,  0.0000000000}, 
    {  0.0000000000,  2.0000000000,  0.0000000000,  0.0000000000,  0.0000000000}, 
    {  0.0000000000,  0.0000000000,  1.0000000000,  0.0000000000,  0.0000000000}, 
    {  0.0000000000,  0.0000000000,  0.0000000000,  1.0000000000,  0.0000000000}, 
    {  0.0000000000,  0.0000000000,  0.0000000000,  0.0000000000,  0.0000000000} 
};
CtrData.SMC.rou =     { 10.0000000000};
CtrData.SMC.fai =     { -5.0000000000};
*/
///////////////////////////////////////////////////////////////////////////

#define MRSMC_Theta_Control  
#define K_Alt 4
#define Ky_Alt 4
////////////////////////////// Kalman Model////////////////////////////////
double Kalman_A_Alt[4][4] = 
{ 
    {  0.6960323188,  0.0000000000, -0.0009901904, -0.0003924608}, 
    {  0.0167300417,  1.0000000000, -0.0068985273, -0.0328704179}, 
    {  0.0016428758,  0.1812692469,  0.8121665963, -0.0326069468}, 
    {  0.0000107075,  0.0018730753,  0.0147413857,  0.9650926213} 
};

double Kalman_B_Alt[4][4] = 
{ 
    {  0.0043305299,  0.0005067026,  0.0009901904,  0.0003924608}, 
    {  0.0000459097,  0.0000528442,  0.0068985273,  0.0328704179}, 
    {  0.0000029966,  0.0000202147,  0.0065641568,  0.0326069468}, 
    {  0.0000000154,  0.0000009057,  0.0033855390,  0.0349073787} 
};

double Kalman_C_Alt[4][4] = 
{ 
    {  0.9992725424,  0.0000000000, -0.0014215864, -0.0005634441}, 
    { -0.0000406354,  1.0000000000, -0.0068746690, -0.0328609617}, 
    { -0.0000142159,  0.0000000000,  0.9935074791, -0.0325495627}, 
    { -0.0000005634,  0.0000000000, -0.0032549563,  0.9657442024} 
};

double Kalman_D_Alt[4][4] = 
{ 
    {  0.0000000000,  0.0007274576,  0.0014215864,  0.0005634441}, 
    {  0.0000000000,  0.0000406354,  0.0068746690,  0.0328609617}, 
    {  0.0000000000,  0.0000142159,  0.0064925209,  0.0325495627}, 
    {  0.0000000000,  0.0000005634,  0.0032549563,  0.0342557976} 
};

//////////////////////////////Reference Model////////////////////////////////
double Alt_A_d[4][4] = 
{ 
    {  0.6965390214,  0.0000000000,  0.0000000000,  0.0000000000}, 
    {  0.0167828859,  1.0000000000,  0.0000000000,  0.0000000000}, 
    {  0.0016630905,  0.1812692469,  0.8187307531,  0.0000000000}, 
    {  0.0000116132,  0.0018730753,  0.0181269247,  1.0000000000} 
};

double Alt_B_d[4] = 
    {  0.0043305299,  0.0000459097,  0.0000029966,  0.0000000154};

double Alt_F[4] = 
    {  0.0000000000, 58.1322128745, 58.1322128745,  0.0000000000};

double Alt_Br= 116.2644257490; 

double A_refmodel_Alt[4][4] = 
{ 
    {  0.6940151663, -0.2764130388, -0.2265463101,  0.0000000000}, 
    {  0.0167653116,  0.9971583743, -0.0024933364,  0.0000000000}, 
    {  0.0016622243,  0.1810865034,  0.8185652073,  0.0000000000}, 
    {  0.0000116096,  0.0018721449,  0.0181260648,  1.0000000000} 
};

double B_refmodel_Alt[4] = 
    {  0.5029593489,  0.0053349621,  0.0003482892,  0.0000017903};

double C_refmodel_Alt[4] = 
    {  0.0000000000,  0.0000000000,  1.0000000000,  0.0000000000};

//////////////////////////////// controller ////////////////////////////////
double error_Alt[5]; 

double Klp_Alt[5]= 
    { -20.2383446312, -299.3880850675,  0.0494363003, -299.5412651960,  2.0232729936};

double Knp_Alt = -4.0465459871; 

double K1_Alt[4]= 
    {  0.0000000000, -58.1322128745, -58.1322128745,  0.0000000000};

double K2_Alt = 116.2644257490; 

double S_Alt[5]= 
    {  9.5772564321, 175.2994555545,  0.7022393275, 148.0478739889, -1.0000000000};

double Sr_Alt[4]= 
    {  9.5772564321, 175.2994555545,  0.7022393275, 148.0478739889};

double Si_Alt = -1.000000; 

double X_Alt_Ref[4] , X_Alt_smc[4]; 