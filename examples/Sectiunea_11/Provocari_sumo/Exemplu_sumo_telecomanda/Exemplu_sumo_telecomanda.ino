/*
   Vom transforma mBotul intr-un robot de sumo.
*/

//includere biblioteca MeMCore
#include "MeMCore.h"

//declarare motoare

//declarare senzori

//definire receptor infrarosu (IR)
uint32_t value = 0x00;
int var = 0;

//functie miscare
void miscare(int VitezaStanga, int VitezaDreapta) {

}

void setup() {
//initializare receptor IR
//initializare consola seriala
//pauza 2sec
}

void loop() {
if (receptor.decode()) {
  //decodarea semnalului transmis de telecomanda
  } else value = 0x00;
  if (value == 0x44){
  var = 1;
  }
  while (var == 1){
  if (senzor_linie.readSensors() != S1_IN_S2_IN) {
    //miscare spate timp de jumatate de secunda (pentru a ajunge inapoi in centrul ringului)
    
    //rotire
    
  } else if (senzor_ultrasonic.distanceCm() < 20) {
    //atac adversar (miscare fata)
   
   
  } else {
    //cautare adversar (rotire)
   
  }
  }
}




