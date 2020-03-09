/*
Vom realiza un mBot de politie care porneste sirena atunci cand detecteaza infractorii. 
Vom folosi LED-urile RGB si buzzer-ul pentru sirena si senzorul ultrasonic pentru a detecta infractorii. 
*/

//includere biblioteci
#include "MeMCore.h"
#include "Adafruit_NeoPixel.h"

//declarare LED-uri
//declarare buzzer
//declarare senzor ultrasonic
//declarare variabile (distanta)

void setup() {
  //acest cod este executat o singura data
  //initializare consola seriala
  //initializare LED-uri RGB
}

void loop() {
  //acest cod este executat si repetat la infinit
    //citire valoare senzor ultrasonic
    //afisare valoare senzor ultrasonic 
  if (distanta < 10) {
    //setare culoare LED1 (rosu)
    //setare culoare LED2 (albastru)
    //pornire LED-uri
    //pornire buzzer
    //setare culoare LED1 (albastru)
    //setare culoare LED2 (rosu)
    //pornire LED-uri
    //pornire buzzer
  } else {
    //oprire LED-uri
  }
}
