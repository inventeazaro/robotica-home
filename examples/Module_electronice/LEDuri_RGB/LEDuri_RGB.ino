/*
Pe MBot exista doua LEDuri RGB, pe pinul 13
*/

#include "Adafruit_NeoPixel.h"

//declarare LEDuri RBG (2 - numarul de LEDuri, 13 - pinul pe care se afla)
Adafruit_NeoPixel LEDs = Adafruit_NeoPixel(2, 13, NEO_GRB + NEO_KHZ800);

void setup() {
  //acest cod este executat o singura data
  LEDs.begin(); //initializare LEDuri RGB
}

void loop() {
  //acest cod este executat si repetat la infinit
  LEDs.setPixelColor(0, LEDs.Color(255, 0, 0)); //setare culoare LED1 (rosu)
  LEDs.setPixelColor(1, LEDs.Color(255, 0, 0)); //setare culoare LED2 (rosu)
  LEDs.show(); 
}
