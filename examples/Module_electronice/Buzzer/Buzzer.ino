#include "MeMCore.h"

MeBuzzer buzzer; //declarare buzzer
int distanta = 0;

void setup() {
  //acest cod este executat o singura data
}

void loop() {
  //acest cod este executat si rulat la infinit
  buzzer.tone(800, 1000); //primul parametru (800) reprezinta nota si poate avea valori intre 31 si 65535, iar al doilea parametru (1000) reprezinta durata in milisecunde
  delay(1000);
}
