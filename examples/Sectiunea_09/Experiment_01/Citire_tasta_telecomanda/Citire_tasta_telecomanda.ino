/*
  Afisam in consola seriala ce taste de pe telecomanda sunt apasate.
*/

//includere biblioteca 
#include “MeMCore.h”
MeIR receptor; //definire receptor infrarosu (IR)
uint32_t value = 0x00; //declarare variabila tasta apasata

void setup() {
  //acest cod este executat o singura data
  //initializare receptor IR
  //initializare consola seriala
 
}

void loop() {
  //acest cod este executat si repetat la infinit
  if (receptor.decode()) {
    //decodarea semnalului transmis de telecomanda 
    value = receptor.value >> 16 & 0xFF;   
    //afisam valoarea hexazecimala a tastei apasate  
    Serial.print("0x"); 
    Serial.println(value, HEX);
  }
}
