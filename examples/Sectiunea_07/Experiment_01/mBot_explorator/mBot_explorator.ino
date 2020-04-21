/*
 Vom transforma mBot-ul intr-un robot explorator, care se plimba prin jur si evita obstacolele pe care le intalneste.
*/

//includere biblioteca 
#include "MeMCore.h"
//declarare motoare (stanga si dreapta)
//definire senzor de distanta

//declarare variabila distanta
int distanta;

//declarare variabila viteza

void setup()
{
  //acest cod este executat o singura data
}

void loop()
{
  //acest cod este executat si repetat la infinit
  //citire valoare senzor de distanta in variabila
  if (distanta < 10) {
    //miscare motoare in spate
    //asteapta jumatate de secunda
    //miscare motoare la stanga (sau la dreapta)
    //asteapta jumatate de secunda
  } else {
    //miscare motoare in fata
  }
}
