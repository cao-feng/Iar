#define INCLUDED_PARAM_XYPOSITION_SMC_H

//////////////////////////////////////////////////////////
// This header was generated by MATLAB. 
// 14-Feb-2017 17:55:14
///////////////////////////////////////////////////////////////////////////////
/*
CtrData.RefModel.Am = { 
    { -1.7706754608, -1.4000000000,  0.0000000000,  0.0000000000}, 
    {  1.0000000000,  0.0000000000,  0.0000000000,  0.0000000000}, 
    {  0.0000000000,  4.0000000000, -4.0000000000,  0.0000000000}, 
    {  0.0000000000,  0.0000000000,  1.0000000000,  0.0000000000} 
};
CtrData.KalmanParam.Qk =    {  0.0100000000};
CtrData.KalmanParam.Rk = { 
    {  0.0100000000,  0.0000000000}, 
    {  0.0000000000,  0.1000000000} 
};
CtrData.SMC.Q= { 
    { 10.0000000000,  0.0000000000,  0.0000000000,  0.0000000000,  0.0000000000}, 
    {  0.0000000000,  0.1000000000,  0.0000000000,  0.0000000000,  0.0000000000}, 
    {  0.0000000000,  0.0000000000,  3.0000000000,  0.0000000000,  0.0000000000}, 
    {  0.0000000000,  0.0000000000,  0.0000000000,  0.5000000000,  0.0000000000}, 
    {  0.0000000000,  0.0000000000,  0.0000000000,  0.0000000000,  0.1000000000} 
};
CtrData.SMC.R =     {  1.0000000000};
CtrData.SMC.AA = { 
    {  2.0000000000,  0.0000000000,  0.0000000000,  0.0000000000,  0.0000000000}, 
    {  0.0000000000,  1.0000000000,  0.0000000000,  0.0000000000,  0.0000000000}, 
    {  0.0000000000,  0.0000000000,  1.0000000000,  0.0000000000,  0.0000000000}, 
    {  0.0000000000,  0.0000000000,  0.0000000000,  0.1000000000,  0.0000000000}, 
    {  0.0000000000,  0.0000000000,  0.0000000000,  0.0000000000,  0.1000000000} 
};
CtrData.SMC.rou =     {  0.5000000000};
CtrData.SMC.fai =     { -1.8000000000};
*/
///////////////////////////////////////////////////////////////////////////////

#define MRSMC_Control  
#define K_Pos 4
#define Ky_Pos 4
//////////////////////////////Kalman Model////////////////////////////////
double Pos_Kalman_A[4][4] = 
{ 
    {  0.9651449523, -0.0061622834, -0.1121699354,  0.0000698757}, 
    {  0.0196495977,  0.9999380128, -0.0935501666, -0.0018143821}, 
    {  0.0012608908,  0.1248240077,  0.8012056657, -0.0018108080}, 
    {  0.0000085242,  0.0012759844, -0.0008311312,  0.9936868604} 
};

double Pos_Kalman_B[4][3] = 
{ 
    {  0.2935892784,  0.1121699354, -0.0000698757}, 
    {  0.0029532517,  0.0935501666,  0.0018143821}, 
    {  0.0001273616,  0.0739676533,  0.0018108080}, 
    {  0.0000006422,  0.0195551334,  0.0063131396} 
};

double Pos_Kalman_C[4][4] = 
{ 
    {  1.0000000000,  0.0000000000, -0.1168035012,  0.0000608063}, 
    {  0.0000000000,  1.0000000000, -0.0912606818, -0.0018156895}, 
    {  0.0000000000,  0.0000000000,  0.9286668692, -0.0018102049}, 
    {  0.0000000000,  0.0000000000, -0.0181020488,  0.9937230709} 
};

double Pos_Kalman_D[4][3] = 
{ 
    {  0.0000000000,  0.1168035012, -0.0000608063}, 
    {  0.0000000000,  0.0912606818,  0.0018156895}, 
    {  0.0000000000,  0.0713331308,  0.0018102049}, 
    {  0.0000000000,  0.0181020488,  0.0062769291} 
};

//////////////////////////////Plant Model////////////////////////////////
double Pos_A_d[4][4] = 
{ 
    {  0.9651449523, -0.0061622834,  0.0000000000,  0.0000000000}, 
    {  0.0196495977,  0.9999380128,  0.0000000000,  0.0000000000}, 
    {  0.0012608908,  0.1248240077,  0.8751733190,  0.0000000000}, 
    {  0.0000085242,  0.0012759844,  0.0187240021,  1.0000000000} 
};

double Pos_B_d[4] = 
    {  0.2935892784,  0.0029532517,  0.0001273616,  0.0000006422};

//////////////////////////////Reference Model////////////////////////////////
double Pos_A_refmodel[4][4] = 
{ 
    {  0.9649327484, -0.0275074445,  0.0000000000,  0.0000000000}, 
    {  0.0196481746,  0.9997232891,  0.0000000000,  0.0000000000}, 
    {  0.0007698744,  0.0768763987,  0.9231163464,  0.0000000000}, 
    {  0.0000051821,  0.0007790501,  0.0192209134,  1.0000000000} 
};

double Pos_B_refmodel[4] = 
    {  0.0275074445,  0.0002767109,  0.0000072549,  0.0000000365};

double Pos_C_refmodel[4] = 
    {  0.0000000000,  0.0000000000,  1.0000000000,  0.0000000000};

//////////////////////////////Controller Param////////////////////////////////
double Pos_F[4] = 
    {  0.0000000000,  0.0727109435,  0.0000000000,  0.0000000000};

double Pos_Br=  0.0937004136; 

double Perror[4]; 

double PKlp[5]= 
    { -0.1877851750, -0.3223779905, -0.0153049784, -0.1196996102, -0.0204637571};

double PKnp= -0.0099305675; 

double PK1[4]= 
    {  0.0000000000, -0.0727109435,  0.0000000000,  0.0000000000};

double PK2=  0.0937004136; 

double PSr[4]= 
    {  3.3698409770,  9.3560874533,  1.0271048647,  3.0302300834};

double PSi = 0.572412; 

double X_PosX_Ref[4] , X_PosX_smc[4]; 
double X_PosY_Ref[4] , X_PosY_smc[4]; 