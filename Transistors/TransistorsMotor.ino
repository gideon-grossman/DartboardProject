#include  "TransistorsMotor.h"


void MotorSetup()
{
  pinMode(CW1, OUTPUT);
  pinMode(CW2, OUTPUT);
  pinMode(CCW1, OUTPUT);
  pinMode(CCW2, OUTPUT);
}

void AllTransistorsOff(){
  digitalWrite(CW1, LOW);
  digitalWrite(CCW1, LOW);
  digitalWrite(CW2, LOW);
  digitalWrite(CCW2, LOW);
}

void CCW() {
  AllTransistorsOff();
  digitalWrite(CCW1, HIGH);
  digitalWrite(CCW2, HIGH);
  delay(15000);
  AllTransistorsOff();
}

void CW() {
  AllTransistorsOff();
  digitalWrite(CW1, HIGH);
  digitalWrite(CW2, HIGH);
  delay(15000);
  AllTransistorsOff();
}
