/*
  Il vom transforma pe mBot intr-un robot line follower ce se opresete la intalnirea unui obstacol.
 */

#include "MeMCore.h" //includere biblioteci
//declarare motoare 
//declarare senzor ultrasonic

MeLineFollower line(PORT_2);//declarare senzor linefollower

int val = 0;//declarare variabile
int distanta; 

void miscare(int VitezaStanga, int VitezaDreapta) { //functie pentru miscarea motoarelor 
}

void lineFollower() { //functie linefollower
  int linie = line.readSensors(); //citire valoare senzor line in variabila linie
  switch (linie)
  {
    case S1_IN_S2_IN: //miscare in fata    val = 1; break;
    case S1_IN_S2_OUT: //miscare in fata  val = 2; break;
    case S1_OUT_S2_IN: //miscare in fata   val = 3; break;
    case S1_OUT_S2_OUT: //verifica ultima stare a senzorilor si cauta linia
      if (val == 2) //viraj stanga
      if (val == 3) //viraj dreapta
      if (val == 1) //rotire pe loc
    break; 
    default: break;
  }
}
void setup() { 
}
void loop() {
  //citire valoare senzor de distanta in variabila distanta
  if (distanta < 10) {
    //oprire la detectarea unui obstacol
  }
  else {
    //apelare functie lineFollower
  }
}