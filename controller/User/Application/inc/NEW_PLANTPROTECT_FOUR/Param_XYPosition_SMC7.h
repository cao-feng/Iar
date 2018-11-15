#define INCLUDED_PARAM_XYPOSITION_SMC_H

//////////////////////////////////////////////////////////
//
// This header was generated by MATLAB. 
//////////////////////////////////////////////////////////

// 05-Sep-2015 12:54:21

#define MRSMC_Control  
#define K_Pos 3
#define Ky_Pos 3
//////////////////////////////Kalman Model////////////////////////////////
double Pos_Kalman_A[3][3] = 
{ 
    {  0.9582157407, -0.0102894451, -0.0002610288}, 
    {  0.0195793003,  0.9850436723, -0.0063835879}, 
    {  0.0001971858,  0.0090726804,  0.9862517910} 
};

double Pos_Kalman_B[3][3] = 
{ 
    {  0.3503777733,  0.0069057873,  0.0002610288}, 
    {  0.0035287018,  0.0149222505,  0.0063835879}, 
    {  0.0000236081,  0.0109270916,  0.0137482090} 
};

double Pos_Kalman_C[3][3] = 
{ 
    {  1.0000000000, -0.0072591167, -0.0002949335}, 
    {  0.0000000000,  0.9852193743, -0.0063780306}, 
    {  0.0000000000, -0.0106300511,  0.9863794083} 
};

double Pos_Kalman_D[3][3] = 
{ 
    {  0.0000000000,  0.0072591167,  0.0002949335}, 
    {  0.0000000000,  0.0147806257,  0.0063780306}, 
    {  0.0000000000,  0.0106300511,  0.0136205917} 
};

//////////////////////////////Reference Model////////////////////////////////
double Pos_A_refmodel[3][3] = 
{ 
    {  0.9354801307, -0.0657896505,  0.0000000000}, 
    {  0.0193498972,  0.9993347914,  0.0000000000}, 
    {  0.0001956496,  0.0199955408,  1.0000000000} 
};

double Pos_B_refmodel[3] = 
    {  0.0657896505,  0.0006652086,  0.0000044592};

double Pos_C_refmodel[3] = 
    {  0.0000000000,  1.0000000000,  0.0000000000};

double Perror[3]; 

double PKlp[4]= 
    { -0.2298526203, -0.6350652141, -0.4838293590, -0.0874010862};

double PKnp= -0.0469982336; 

double PK1[3]= 
    { -0.0652481712, -0.1803366765,  0.0000000000};

double PK2=  0.1899938469; 

double PSr[3]= 
    {  1.1889924137,  6.4363552267,  4.6823974236};

double PSi = 0.929834; 

double X_PosX_Ref[3] , X_PosX_smc[3]; 
double X_PosY_Ref[3] , X_PosY_smc[3]; 
#define N_STATE    3