/*
 * Vom transforma mBotul intr-un robot de sumo cu semnalizare prin leduri la intalnirea unui adversar
 */

//includere biblioteca 
#include "MeMCore.h"

//declarare motoare

//declarare senzori
 MeUltrasonicSensor ochi(PORT_3); //declarare senzor linie
 MeLineFollower degetele(PORT_2); //declarare senzor ultrasonic

//definire buzzer

//definire LEDuri

//functie miscare a motoarelor
void miscare(int VitezaStanga, int VitezaDreapta) {
  //miscare motoare
}

void setup() {
  //initializare LEDuri
  //asteapta 2 secunde
}

void loop() {
  //daca detecteaza linia alba se intoarce in ring
  if (degetele.readSensors() != S1_IN_S2_IN) {
    //setare culoare LEDuri (verde)
    //pornire LEDuri
    //miscare spate timp de jumatate de secunda (pentru a ajunge inapoi in centrul ringului)
    //rotire 
  }
  else if (ochi.distanceCm() < 50)
  {  
    //setare culoare LEDuri (rosu)
    //pornire LEDuri
    //activare buzzer
    //atac adversar(miscare fata)
  }
  else
  {
    //stingere LEDuri
    //oprire buzzer
    //cautare adversar(rotire)
  }
}


