#include  "TransistorsMotor.h"


void MotorSetup()
{
  pinMode(CW_A1, OUTPUT);
  pinMode(CW_A2, OUTPUT);
  pinMode(CCW_A1, OUTPUT);
  pinMode(CCW_A2, OUTPUT);

  pinMode(CW_B1, OUTPUT);
  pinMode(CW_B2, OUTPUT);
  pinMode(CCW_B1, OUTPUT);
  pinMode(CCW_B2, OUTPUT);
}

void AllTransistorsOff(){
  digitalWrite(CW_A1, LOW);
  digitalWrite(CCW_A1, LOW);
  digitalWrite(CW_A2, LOW);
  digitalWrite(CCW_A2, LOW);
  digitalWrite(CW_B1, LOW);
  digitalWrite(CCW_B1, LOW);
  digitalWrite(CW_B2, LOW);
  digitalWrite(CCW_B2, LOW);
}

void CCW_A() {
  Serial.print("CCW_A\r\n");
  AllTransistorsOff();
  digitalWrite(CCW_A1, HIGH);
  digitalWrite(CCW_A2, HIGH);
  delay(MOTOR_MOTION_DURATION);
  AllTransistorsOff();
}

void CW_A() {
  Serial.print("CW_A\r\n");
  AllTransistorsOff();
  digitalWrite(CW_A1, HIGH);
  digitalWrite(CW_A2, HIGH);
  delay(MOTOR_MOTION_DURATION);
  AllTransistorsOff();
}

void CCW_B() {
  Serial.print("CCW_B\r\n");
  AllTransistorsOff();
  digitalWrite(CCW_B1, HIGH);
  digitalWrite(CCW_B2, HIGH);
  delay(MOTOR_MOTION_DURATION);
  AllTransistorsOff();
}

void CW_B() {
  Serial.print("CW_B\r\n");
  AllTransistorsOff();
  digitalWrite(CW_B1, HIGH);
  digitalWrite(CW_B2, HIGH);
  delay(MOTOR_MOTION_DURATION);
  AllTransistorsOff();
}
