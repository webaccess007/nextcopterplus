/*********************************************************************
 * imu.h
 ********************************************************************/

//***********************************************************
//* Externals
//***********************************************************

extern void getEstimatedAttitude(void);
extern void UpdateIMUvalues(void);
extern int16_t	angle[2];

extern float accSmooth[NUMBEROFAXIS];
//extern int16_t accSmooth[NUMBEROFAXIS];
