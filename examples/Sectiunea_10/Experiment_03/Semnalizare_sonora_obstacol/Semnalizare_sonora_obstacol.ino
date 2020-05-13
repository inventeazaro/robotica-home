/*
   Linefollower cu semnalizare sonora la intalnirea unui obstacol.
*/

//includere biblioteca
#include "MeMCore.h"

//declarare motoare
//declarare senzor ultrasonic
//declarare buzzer
//declarare senzor linie

//declarare variabile

void miscare(int viteza_stanga, int viteza_dreapta) { //functie pentru miscarea motoarelor
  MotorStanga.run(-viteza_stanga);
  MotorDreapta.run(viteza_dreapta);
}

void lineFollower() { //functie lineFollower
  //citire valoare senzor line in variabila linie
  switch (linie)
  {
    case S1_IN_S2_IN: //miscare in fata
      stare = 1; break;
    case S1_IN_S2_OUT: //miscare in fata
      stare = 2; break;
    case S1_OUT_S2_IN: //miscare in fata
      stare = 3; break;
    case S1_OUT_S2_OUT: //verifica ultima stare a senzorilor si cauta linia
      if (stare == 2) {
        //viraj stanga
      } if (stare == 3) {
        //viraj dreapta
      } if (stare == 1) {
        //rotire pe loc
      }
      break;
    default: break;
  }
}

void setup() {
}

void loop() {
  //citire valoare senzor de distanta in variabila distanta
  if (distanta < 10) { //daca detecteaza un obstacol
    //oprire
    //generare nota buzzer
  }
  else {
    //apelare functie lineFollower
  }
}
