/*
Afisam in consola seriala ce tastele de pe telecomanda sunt apasate.
MBotul are un receptor IR, iar telecomanda un emitator IR.
*/

#include "MeMCore.h"

MeIR receptor; //definire receptor infrarosu (IR)
uint32_t value = 0x00; 

void setup() {
  //acest cod este executat o singura data
  receptor.begin(); //initializare receptor IR
  Serial.begin(9600); //initializare consola seriala
}

void loop() {
  //acest cod este executat si repetat la infinit
  if (receptor.decode()) {
    value = (receptor.value >> 16 & 0xFF); //decodarea semnalului transmis de telecomanda 
    Serial.print("0x");
    Serial.println(value, HEX); //afisam valoarea hexazecimala a tastei apasate
  }
  
  switch (value) {
    //afisam pe consola seriala ce tasta a fost apasata
    case 0x15: Serial.println("mijloc"); delay(100); break;
    case 0x40: Serial.println("inainte"); delay(100); break;
    case 0x7:  Serial.println("stanga"); delay(100); break;
    case 0x9:  Serial.println("dreapta"); delay(100); break;
    case 0x19: Serial.println("spate"); delay(100); break;
    case 0x45: Serial.println("A");  delay(100); break;
    case 0x46: Serial.println("B");  delay(100); break;
    case 0x47: Serial.println("C");  delay(100); break;
    case 0x44: Serial.println("D");  delay(100); break;
    case 0x43: Serial.println("E");  delay(100); break;
    case 0xD:  Serial.println("F");  delay(100); break;
    case 0x16: Serial.println("0");  delay(100); break;
    case 0xC:  Serial.println("1");  delay(100); break; 
    case 0x18: Serial.println("2");  delay(100); break;
    case 0x5E: Serial.println("3");  delay(100); break;
    case 0x8:  Serial.println("4");  delay(100); break;
    case 0x1C: Serial.println("5");  delay(100); break;
    case 0x5A: Serial.println("6");  delay(500); break;
    case 0x42: Serial.println("7");  delay(500); break;
    case 0x52: Serial.println("8");  delay(500); break;
    case 0x4A: Serial.println("9");  delay(500); break;
    default:
    break;
  }
}
