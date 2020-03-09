/*
Vom aprinde LED-urile RGB in functie de mesajele scrise in consola seriala
*/

//includere biblioteca
#include "Adafruit_NeoPixel.h"

//declarare LEDuri RBG 

void setup() {
  //acest cod este executat o singura data
  //initializare consola seriala
  //initializare LED-uri RGB
}
void loop() { 
  //acest cod este executat si repetat la infinit 
  if (Serial.available() > 0) {
    String culoare = Serial.readString();
    if (culoare == "rosu"){ 
      //setare culoare LED1 & LED2 (rosu)
      //pornire LED-uri 
    } else if (culoare == "verde"){
      //setare culoare LED1 & LED2 (verde)
      //pornire LED-uri
    } else if (culoare == "albastru"){
      //setare culoare LED1 & LED2 (albastru)
      //pornire LED-uri 
    }    
  }
}
