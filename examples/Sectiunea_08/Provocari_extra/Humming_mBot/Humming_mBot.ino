/*
 * Vom genera un sunet aleatoriu la fiecare apasare de buton.
 */

//includere biblioteca MeMCore
#include "MeMCore.h"

//declarare buzzer

//declarare variabila pentru nota random

void setup() {
  //acest cod este executat o singura data
}

void loop() {
  //acest cod este executat si rulat la infinit
  //cand butonul este apasat buzzer-ul este pornit - nota este random
  while (analogRead(7)<10) {
  //cand butonul este apasat buzzer-ul este pornit - nota este random
    //calculare valoare random a notei
    //pornire buzzer cu nota random si durata de o secunda
    delay(1000);
  }
}
