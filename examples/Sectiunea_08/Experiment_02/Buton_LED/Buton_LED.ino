/*
  Vom aprinde LED-ul de stare cat timp butonul este apasat.
*/

#include "MeMCore.h" //includere biblioteca

void setup() {
  //acest cod este executat o singura data
  //initializare LED
  //initializare buton
}

void loop() {
  while (analogRead(7) < 10) //cat timp butonul este apasat
  {
    //LED-ul este aprins
  }
  //LED-ul este stins
}
