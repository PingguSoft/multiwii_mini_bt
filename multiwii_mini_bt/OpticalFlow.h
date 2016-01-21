#ifdef OPTFLOW

#ifndef __OPTICALFLOW_H__
#define __OPTICALFLOW_H__
/* Optical Flow mode flag */
extern int8_t optflowMode;

/* Angles of correction */
extern int16_t optflow_angle[2];

extern int8_t optFlowCosZ;

extern void initOptflow();
extern void Optflow_update();
#endif

#endif