#ifndef __MOTOR_H_
#define __MOTOR_H_

//1st motor
#define CW_A1 5//7 //4
#define CW_A2 4//9 //8
#define CCW_A1 3
#define CCW_A2 2

//2nd motor
#define CW_B1 6
#define CW_B2 7
#define CCW_B1 8
#define CCW_B2 9

#define MOTOR_MOTION_DURATION 15000

void MotorSetup();
void AllTransistorsOff();
void CW_A();
void CCW_A();
void CW_B();
void CCW_B();

#endif //__MOTOR_H_
