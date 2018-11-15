#define INCLUDED_PARAM_YAW_SMC_H

//////////////////////////////////////////////////////////
//
// This header was generated by MATLAB. 
//////////////////////////////////////////////////////////

// 18-Apr-2015 16:31:18

#define K_Yaw 2
#define Ky_Yaw 2
//////////////////////////////Kalman Model////////////////////////////////
double Kalman_AYaw[2][2] = 
{ 
    {  0.9315806765, -0.0212708901}, 
    {  0.0190682464,  0.9696702206} 
};

double Kalman_BYaw[2][3] = 
{ 
    { -0.0001260074,  0.0010897213,  0.0212708901}, 
    { -0.0000012747,  0.0002506363,  0.0303297794} 
};

double Kalman_CYaw[2][2] = 
{ 
    {  0.9988316116, -0.0228064385}, 
    { -0.0002280644,  0.9701108155} 
};

double Kalman_DYaw[2][3] = 
{ 
    {  0.0000000000,  0.0011683884,  0.0228064385}, 
    {  0.0000000000,  0.0002280644,  0.0298891845} 
};

//////////////////////////////Reference Model////////////////////////////////
double A_refmodelYaw[2][2] = 
{ 
    {  0.9412841309, -0.0485214680}, 
    {  0.0194085872,  0.9995098925} 
};

double B_refmodelYaw[2] = 
    {  0.0485214680,  0.0004901075};

double C_refmodelYaw[2] = 
    {  0.0000000000,  1.0000000000};

double errorYaw[2]; 
double KlpYaw[2]= 
    { 1349.1810309224, 2376.4349418711};

double KnpYaw= -94033.9966034841; 

double K1Yaw[2]= 
    { -74.3841838098, 383.2888057708};

double K2Yaw= -383.2888057708; 

double SYaw[2]= 
    { -0.0163042652, -0.0293481490};

double X_Yaw_Ref[2] , X_Yaw_smc[2]; 