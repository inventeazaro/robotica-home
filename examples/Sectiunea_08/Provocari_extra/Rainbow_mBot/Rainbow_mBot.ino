/*
Generarea unei culori aleatorii a LED-urilor RGB la fiecare apasare de buton.
*/

//includere biblioteca
#include "MeMCore.h"

//declarare LED-uri RBG

//declarare variabile pentru cele trei culori

void setup() {
  //acest cod este executat o singura data
  //initializare LED-uri RGB
  //initializare buton
}

void loop() {
  // acest cod este executat la infinit
  while (analogRead(7) < 10) {
    //cand butonul este apasat LED-urile isi schimba culoarea (culoare random)
    //declarare valori random pentru cele trei culori
    //setare culoare LED1 (random)
    //setare culoare LED2 (random)
    //aprindere LED-uri
    delay(200);
  }
}
