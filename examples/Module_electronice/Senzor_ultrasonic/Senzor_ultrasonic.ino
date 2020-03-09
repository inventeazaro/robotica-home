#include "MeMCore.h"

MeUltrasonicSensor SenzorDistanta(PORT_3); //definire senzor de distanta
int distanta; 

void setup()
{
  //acest cod este executat o singura data 
  Serial.begin(9600); //initializare consola seriala
}

void loop()
{
  //acest cod este executat si repetat la infinit 
  distanta = SenzorDistanta.distanceCm(); //citire valoare
  Serial.println(distanta); //afisare valoare (in centimetri)
  delay(100); 
}
