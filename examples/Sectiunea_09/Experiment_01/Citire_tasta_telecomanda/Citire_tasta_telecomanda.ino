/*
  Afisam in consola seriala ce taste de pe telecomanda sunt apasate.
*/

//includere biblioteci
#include "MeMCore.h"

//definire receptor infrarosu (IR)

void setup() {
  //acest cod este executat o singura data
  //initializare receptor IR
  //initializare consola seriala
}

void loop() {
  //acest cod este executat si repetat la infinit
  //incercam coduri de taste de la 1 la 100 pentru a vedea ce buton este apasat
  for (int i = 1; i <= 100; i++) {
    if (receptor.keyPressed(i)) {
      //printam pe seriala codul apasat
    }
  }
  receptor.loop(); //functie necesara updatarii receptorului
}
