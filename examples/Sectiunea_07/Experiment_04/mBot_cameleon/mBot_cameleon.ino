/*
 Vom transforma mBot-ul intr-un cameleon care isi schimba culoarea cand detecteaza obiecte:
 - aprindem LED-urile verzi daca nu exista obstacole
 - aprindem LED-urile galbene daca se apropie de un obstacol (distanta < 20)
 - aprindem LED-urile rosii si generam o nota cu buzzerul daca e un obstacol in fata
*/

//includere biblioteca
#include "MeMCore.h"

//definire motoare (stanga si dreapta)
//definire senzor de distanta
//definire LED-uri RGB
//declarare buzzer

//declarare variabila distanta

//declarare variabila viteza

void setup()
{
  //acest cod este executat o singura data
  //initializare LED-uri RGB
}

void loop()
{
  //acest cod este executat si repetat la infinit
  //citire valoare senzor de distanta in variabila distanta
  if (distanta < 20 && distanta > 10) {
    //aprinde LED-uri galbene
  } else if (distanta < 10) {
    //aprinde LED-uri rosii
    //pornire buzzer
    //miscare motoare in spate timp de jumatate de secunda
    //miscare motoare la stanga (sau la dreapta) timp de jumatate de secunda
  } else {
    //miscare motoare in fata
    //aprinde LED-uri verzi
  }
}
