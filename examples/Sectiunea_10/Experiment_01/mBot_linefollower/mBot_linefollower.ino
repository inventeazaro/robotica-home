/*
 * Vom transforma mBot-ul intr-un robot linefollower (care se poate deplasa pe un traseu urmarind linia neagra).
 */

//includere biblioteci
#include "MeMCore.h"

//declarare motoare
//declarare senzor linie
//declarare variabile
int stare = 0;
int distanta;

//functie pentru miscarea motoarelor robotului
void miscare(int VitezaStanga, int VitezaDreapta)
{
  MotorStanga.run(-VitezaStanga);
  MotorDreapta.run(VitezaDreapta);
}

void lineFollower() {
  //citire valoare senzor linie
  int linie = SenzorLinie.readSensors();
  switch (linie)
  {
    case S1_IN_S2_IN:
      //miscare in fata
      stare = 1;
      break;
    case S1_IN_S2_OUT: 
      //miscare in fata
      stare = 2;
      break;
    case S1_OUT_S2_IN: 
      //miscare in fata
      stare = 3;
      break;
    case S1_OUT_S2_OUT:
      if (stare == 2) {
        //viraj la stanga
      }
      if (stare == 3) {
        //viraj la dreapta
      }
      if (stare == 1) {
        //rotire
      }
      break;
    default: break;
  }
}

void setup() {
  Serial.begin(9600);
  Serial.println("Start");
}

void loop() {
  //apelare functie lineFollower
}
