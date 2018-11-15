#define INCLUDED_UBLOX_PARAM_ALTITUDE_SMC_H

// Header for JP_CAN_HEX 
// This header was generated by MATLAB. 
// 08-Feb-2017 11:34:54
//
///////////////////////////////////////////////////////////////////////////////
/*
CtrData.RefModel.Am = { 
    { -9.8172796057, -20.0000000000,  0.0000000000}, 
    {  1.0000000000,  0.0000000000,  0.0000000000}, 
    {  0.0000000000,  1.0000000000,  0.0000000000} 
};
CtrData.U2AKalmanParam.Qk =    { 1200.0000000000};
CtrData.U2AKalmanParam.Rk =     {  1.0000000000};
CtrData.V2PKalmanParam.Qk =    { 10.0000000000};
CtrData.V2PKalmanParam.Rk =     { 400.0000000000};
CtrData.A2PKalmanParam.Qk =    { 10.0000000000};
CtrData.A2PKalmanParam.Rk = { 
    {  0.4000000000,  0.0000000000}, 
    {  0.0000000000,  0.6000000000} 
};
CtrData.SMC.Q= { 
    { 100.0000000000,  0.0000000000,  0.0000000000,  0.0000000000}, 
    {  0.0000000000, 10.0000000000,  0.0000000000,  0.0000000000}, 
    {  0.0000000000,  0.0000000000, 10.0000000000,  0.0000000000}, 
    {  0.0000000000,  0.0000000000,  0.0000000000,  0.1000000000} 
};
CtrData.SMC.R =     {  1.0000000000};
CtrData.SMC.AA = { 
    {  2.0000000000,  0.0000000000,  0.0000000000,  0.0000000000}, 
    {  0.0000000000,  2.0000000000,  0.0000000000,  0.0000000000}, 
    {  0.0000000000,  0.0000000000,  0.5000000000,  0.0000000000}, 
    {  0.0000000000,  0.0000000000,  0.0000000000,  0.0000000000} 
};
CtrData.SMC.rou =     {  5.0000000000};
CtrData.SMC.fai =     { -10.0000000000};
*/
///////////////////////////////////////////////////////////////////////////

#define MRSMC_Theta_Control  
#define Ublox_K_Alt 3
double Ublox_X_Alt_Ref[3]; 
#define Ublox_U2AKalman_K_Alt 1
double Ublox_X_Alt_U2AKalman[1]; 
#define Ublox_V2PKalman_K_Alt 2
double Ublox_X_Alt_V2PKalman[2]; 
#define Ublox_A2PKalman_K_Alt 4
double Ublox_X_Alt_A2PKalman[4]; 
//////////////////////////////U2A Kalman Model////////////////////////////////
double Ublox_Alt_U2AKalman_A[1][1] = 
    {  0.7893047703};

double Ublox_Alt_U2AKalman_B[1][2] = 
    {  0.0034683355,  0.0324234325};

double Ublox_Alt_U2AKalman_C[1][1] = 
    {  0.9605423881};

double Ublox_Alt_U2AKalman_D[1][2] = 
    {  0.0000000000,  0.0394576119};

//////////////////////////////V2Alt Kalman Model////////////////////////////////
double Ublox_Alt_V2PKalman_A[2][2] = 
{ 
    {  0.9228737915, -0.0003954657}, 
    {  0.0178961188,  0.9978400322} 
};

double Ublox_Alt_V2PKalman_B[2][2] = 
{ 
    {  0.0192209134,  0.0001382418}, 
    {  0.0001947716,  0.0007550540} 
};

double Ublox_Alt_V2PKalman_C[1][2] = 
    {  1.7503330806,  2.8537729165};

double Ublox_Alt_V2PKalman_D[1][2] = 
    {  0.0000000000,  0.0024144901};

//////////////////////////////A2Alt Kalman Model////////////////////////////////
double Ublox_Alt_A2PKalman_A[4][4] = 
{ 
    {  1.0000000000, -0.0915965633, -0.0243153385,  0.0199998000}, 
    {  0.0768836536,  0.8583336762, -0.0195516837,  0.0007790814}, 
    {  0.0200000000, -0.0305643306,  0.9795003125,  0.0001999987}, 
    {  0.0000000000,  0.0000000000,  0.0000000000,  0.9999800002} 
};

double Ublox_Alt_A2PKalman_B[4][3] = 
{ 
    {  0.0200000000,  0.0915965633,  0.0243153385}, 
    {  0.0007790866,  0.0647826701,  0.0195516837}, 
    {  0.0002000000,  0.0305643306,  0.0204996875}, 
    {  0.0000000000,  0.0000000000,  0.0000000000} 
};

double Ublox_Alt_A2PKalman_C[3][4] = 
{ 
    {  1.0000000000, -0.0915965633, -0.0243153385,  0.0000000000}, 
    {  0.0000000000,  0.9374505804, -0.0191549329,  0.0000000000}, 
    {  0.0000000000, -0.0287323993,  0.9799866193,  0.0000000000} 
};

double Ublox_Alt_A2PKalman_D[3][3] = 
{ 
    {  0.0000000000,  0.0915965633,  0.0243153385}, 
    {  0.0000000000,  0.0625494196,  0.0191549329}, 
    {  0.0000000000,  0.0287323993,  0.0200133807} 
};

//////////////////////////////Reference Model////////////////////////////////
double Ublox_Alt_A_d[3][3] = 
{ 
    {  0.8217282028,  0.0000000000,  0.0000000000}, 
    {  0.0181589813,  1.0000000000,  0.0000000000}, 
    {  0.0001875284,  0.0200000000,  1.0000000000} 
};

double Ublox_Alt_B_d[3] = 
    {  0.0034683355,  0.0000358176,  0.0000002426};

double Ublox_Alt_F[3] = 
    {  0.0000000000, 104.7129459249,  0.0000000000};

double Ublox_Alt_Br= 104.7129459249; 

double Ublox_A_refmodel_Alt[3][3] = 
{ 
    {  0.8182175496, -0.3626958917,  0.0000000000}, 
    {  0.0181347946,  0.9962518986,  0.0000000000}, 
    {  0.0001874051,  0.0199746025,  1.0000000000} 
};

double Ublox_B_refmodel_Alt[3] = 
    {  0.3626958917,  0.0037481014,  0.0000253975};

double Ublox_C_refmodel_Alt[3] = 
    {  0.0000000000,  1.0000000000,  0.0000000000};

double Ublox_error_Alt[4]; 

double Ublox_Klp_Alt[4]= 
    { -39.8331964562, -315.9075881075, -320.5815407997,  -2.0298922790};

double Ublox_Knp_Alt = -3.2095415033; 

double Ublox_K1_Alt[3]= 
    {  0.0000000000, -104.7129459249,  0.0000000000};

double Ublox_K2_Alt = 104.7129459249; 

double Ublox_S_Alt[4]= 
    {  8.1563788643, 60.5640040463, 49.9419528419, -0.3162277660};
