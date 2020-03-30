/*
 * Vom realiza un instrument muzical cu ajutorul senzorului de distanta si al buzzer-ului. 
 * Pentru fiecare valoare a distantei vom genera o nota muzicala diferita, 
 * iar la final vom putea canta la mBot apropiind mana de senzorul ultrasonic. 
 */

//includere biblioteca
#include "MeMCore.h"

//declarare buzzer
//declarare senzor ultrasonic
//declarare variabile (distanta)

void setup()
{
  //initializare consola seriala
}
void loop()
{
  //citire valoare senzor ultrasonic in variabila distanta
  //afisare valoare senzor ultrasonic
  int sunet = map(distanta, 0, 400, 800, 5000); //transformam valoarea primita de la senzorul ultrasonic intr-o nota muzicala
  //afisare valoare buzzer
  buzzer.tone(sunet, 100);
  //asteapta 0.1 secunde
}
