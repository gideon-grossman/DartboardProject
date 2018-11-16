#ifndef __MOTOR_H_
#define __MOTOR_H_

#define CW1 5//7 //4
#define CW2 4//9 //8
#define CCW1 3
#define CCW2 2


void MotorSetup();
void AllTransistorsOff();
void CW();
void CCW();

#endif //__MOTOR_H_
