/*
   Vom transforma mBotul intr-un robot de sumo. 
   Cautarea adversarului se face intr-o directie aleatorie, folosind functia random() pentru setarea vitezei.
*/

//includere biblioteca MeMCore
#include "MeMCore.h"

//declarare motoare
MeDCMotor MotorStanga(M1);
MeDCMotor MotorDreapta(M2);

//declarare senzori
MeUltrasonicSensor ochi(PORT_3);
MeLineFollower degetele(PORT_2);

//functie miscare
void miscare(int VitezaStanga, int VitezaDreapta) {
  MotorStanga.run(-VitezaStanga);
  MotorDreapta.run(VitezaDreapta);
}

void setup() {
  delay(2000);
}

void loop() {
  if (degetele.readSensors() != S1_IN_S2_IN) {
    //miscare spate timp de jumatate de secunda (pentru a ajunge inapoi in centrul ringului)
    //rotire timp de jumatate de secunda
  } else if (ochi.distanceCm() < 50) {
    //atac adversar (miscare fata)
  } else {
    //setare viteze aleatorii pentru motoare
    int viteza1 = random(-255, 255);
    int viteza2 = random(-255, 255);
    //setare viteze motoare 
  }
}

