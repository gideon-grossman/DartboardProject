#ifndef __MOTOR_H_
#define __MOTOR_H_
#define STBY 2
#define IN1 4//7 //4
#define IN2 8//9 //8
#define PWM 3
#define PWM_DUTY_CYCLE 30
void MotorSetup();
void RecoverFromISD();
void CW();
void CCW();

#endif //__MOTOR_H_
