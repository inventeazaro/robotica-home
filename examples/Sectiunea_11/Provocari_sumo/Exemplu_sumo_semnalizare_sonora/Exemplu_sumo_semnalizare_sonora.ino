/*
 * Vom transforma mBotul intr-un robot de sumo cu semnalizare sonora la intalnirea unui adversar.
 */

//includere biblioteca MeMCore
#include "MeMCore.h"

//declarare motoare

//declarare senzori
 MeUltrasonicSensor ochi(PORT_3); //declarare senzor linie
 MeLineFollower degetele(PORT_2); //declarare senzor ultrasonic

//definire buzzer

//functie miscare a motoarelor
void miscare(int VitezaStanga, int VitezaDreapta) {
  //miscare motoare
}

void setup() {
  //asteapta 2 secunde
}

void loop() {
  //daca detecteaza linia alba se intoarce in ring
  if (degetele.readSensors() != S1_IN_S2_IN) {
    //miscare spate timp de jumatate de secunda (pentru a ajunge inapoi in centrul ringului)
    //rotire  
  }
  else{
  if (ochi.distanceCm() < 50)
  {    
    //activare buzzer
    //atac adversar (miscare fata) 
  }
  
  else
  {
    //oprire buzzer
    //cautare adversar (rotire)
  }
 }
}


