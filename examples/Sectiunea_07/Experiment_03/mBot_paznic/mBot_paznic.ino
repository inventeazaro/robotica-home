/*
 Transformam mBot-ul in paznic de noapte. 
 Folosind senzorul de lumina putem detecta cand "se face noapte", 
 moment in care robotul trebuie sa patruleze in jurul cladirii pazite 
 (sa inconjoare cutia de patru ori, dupa care se face iar zi).
*/

//includere biblioteca
#include "MeMCore.h"
//declarare motoare (stanga si dreapta)

//declarare variabila lumina
int lumina;

void setup() {
  //acest cod este executat o singura data
  //declarare pin 6 ca pin de intrare
}

void loop() {
  //acest cod este executat si repetat la infinit
  //citire valoare senzor de lumina in variabila lumina
  if (lumina < 600) {
    for (int i = 1; i <= 4; i++) {
      //miscare in fata
      //asteapta doua secunde
      //rotire la stanga
      //asteapta ? secunde
    }
  } else {
    //oprire motoare
  }
}
