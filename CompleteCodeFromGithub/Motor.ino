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
  analogWrite(PWM, PWM_DUTY_CYCLE);
}

void CCW() {
  digitalWrite(STBY, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN1, HIGH);
  Rotate();
  delay(1000);
  Brake();
}

void CW() {
  digitalWrite(STBY, HIGH);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  Rotate();
  delay(1000);
  Brake();
}
