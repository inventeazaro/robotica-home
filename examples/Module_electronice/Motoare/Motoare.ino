/*
Miscarea robotului in fata si in spate
*/

#include "MeMCore.h"
MeDCMotor MotorStanga(M1); //declarare motoare
MeDCMotor MotorDreapta(M2);

void setup()
{
  //acest cod este executat o singura data
}

void loop()
{
  //acest cod este executat si repetat la infinit
  //mergi in fata o secunda
  MotorStanga.run(-100); 
  MotorDreapta.run(100); 
  delay(1000);
  //mergi in spate o secunda
  MotorStanga.run(100); 
  MotorDreapta.run(-100); 
  delay(1000);
}

