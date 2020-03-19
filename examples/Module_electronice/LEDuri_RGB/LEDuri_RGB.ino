/*
Pe MBot exista doua LED-uri RGB, conectate pe pinul 13.
*/

#include "MeMCore.h"

//declarare LEDuri RBG ()
MeRGBLed rgb(2);

void setup() {
  //acest cod este executat o singura data
  rgb.setpin(13);
  rgb.setColor(0,0,0); // setam ledurile pe pozitia inchis ca sa anulam culorile anterioare
  rgb.show();
}

void loop() {
  //acest cod este executat si repetat la infinit
  rgb.setColor(0, 255,0,0); // acest cod controleaza primul led
  rgb.setColor(1, 255,0,0); // acest cod controleaza al doilea led
  rgb.show(); // acest cod afiseaza culorile pe leduri
}
