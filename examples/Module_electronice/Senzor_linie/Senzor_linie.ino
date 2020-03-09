/*
Pe MBot exista doi senzori de linie
*/

#include "MeMCore.h"

MeLineFollower SenzorLinie(PORT_2); //definire senzor de linie

void setup()
{
  //acest cod este executat o singura data
  Serial.begin(9600); //initializare consola seriala
}

void loop()
{
  //acest cod este executat si repetat la infinit
  int valoare = SenzorLinie.readSensors(); //citire valoare
  
  switch(valoare)
  {
    case S1_IN_S2_IN: Serial.println("Senzorii 1 si 2 sunt pe linia neagra"); break;
    case S1_IN_S2_OUT: Serial.println("Senzorul 2 este inafara liniei negre"); break;
    case S1_OUT_S2_IN: Serial.println("Senzorul 1 este inafara liniei negre"); break;
    case S1_OUT_S2_OUT: Serial.println("Senzorii 1 si 2 sunt inafara liniei negre"); break;
    default: break;
  }
  delay(200);
}

