#define INCLUDED_PARAM_YAW_SMC_H

//////////////////////////////////////////////////////////
//
// This header was generated by MATLAB. 
//////////////////////////////////////////////////////////

// 27-Dec-2015 15:46:04

#define K_Yaw 2
#define Ky_Yaw 2
//////////////////////////////Kalman Model////////////////////////////////
double Kalman_AYaw[2][2] = 
{ 
    {  0.8600103236, -0.0065981807}, 
    {  0.0107758203,  0.9844135092} 
};

double Kalman_BYaw[2][3] = 
{ 
    { -0.0001171202,  0.0551568263,  0.0065981807}, 
    { -0.0000011885,  0.0083633190,  0.0155864908} 
};

double Kalman_CYaw[2][2] = 
{ 
    {  0.9397303254, -0.0072098093}, 
    { -0.0072098093,  0.9845514988} 
};

double Kalman_DYaw[2][3] = 
{ 
    {  0.0000000000,  0.0602696746,  0.0072098093}, 
    {  0.0000000000,  0.0072098093,  0.0154485012} 
};

//////////////////////////////Reference Model////////////////////////////////
double A_refmodelYaw[2][2] = 
{ 
    {  0.8234626200, -0.5313531881}, 
    {  0.0181970270,  0.9945146738} 
};

double B_refmodelYaw[2] = 
    {  0.5313531881,  0.0054853262};

double C_refmodelYaw[2] = 
    {  0.0000000000,  1.0000000000};

double errorYaw[2]; 
double KlpYaw[2]= 
    { 3910.3624426380, 11549.0363966266};

double KnpYaw= -285978.3262631719; 

double K1Yaw[2]= 
    { 811.7731421121, 4771.7021584818};

double K2Yaw= -4771.7021584818; 

double SYaw[2]= 
    { -0.0057142253, -0.0190232814};

double X_Yaw_Ref[2] , X_Yaw_smc[2]; 