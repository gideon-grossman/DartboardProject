#include  "Motor.h"


void MotorSetup()
{
  pinMode(STBY, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(PWM, OUTPUT);
}

void Brake(){
  digitalWrite(PWM, LOW);
}

void Rotate()
{
//  analogWrite(PWM, PWM_DUTY_CYCLE);
  digitalWrite(PWM, HIGH);
}

void RecoverFromISD()
{
  digitalWrite(STBY, HIGH);
  delayMicroseconds(1600);
  digitalWrite(STBY, LOW);
  delayMicroseconds(10);
  digitalWrite(STBY, HIGH);
}

void CCW() {
  RecoverFromISD();
  digitalWrite(STBY, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN1, HIGH);
  Rotate();
  delay(14000);
  Brake();
}

void CW() {
  RecoverFromISD();
  digitalWrite(STBY, HIGH);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  Rotate();
  delay(14000);
  Brake();
}
