/*
 * Vom misca mBot-ul prin intermediul telecomenzii.
 */

//includere biblioteca 
#include "MeMCore.h"
//definire receptor infrarosu (IR)
MeIR receptor;
//declarare variabila tasta apasata (value)
uint32_t value = 0x00;
//functie pentru miscarea motoarelor robotului

void setup() {
  //initializare receptor IR,  consola seriala
}

void loop() {
  //acest cod este executat si repetat la infinit
  if (receptor.decode()){
    //decodarea semnalului transmis de telecomanda   
  } else value = 0x00;
  switch (value) {
    //afisam pe consola seriala ce tasta a fost apasata si miscam mBot-ul
    case 0x40: //miscare in fata timp de 0.1 secunde      break;
    case 0x7:  //miscare in stanga timp de 0.1 secunde    break;
    case 0x9:  //miscare in dreapta timp de 0.1 secunde   break;
    case 0x19: //miscare in spate timp de 0.1 secunde     break;
    case 0x00: //oprire                                   break;
    default: break;
  }  
}
