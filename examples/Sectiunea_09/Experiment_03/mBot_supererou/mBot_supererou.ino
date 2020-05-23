/*
   Ne vom transforma mBotul intr-un supererou, atribuind fiecarei taste de pe telecomanda o putere speciala:
   - Sinister strike - dash forward al robotului de 3 secunde
   - Cloak of shadows - o rotire pe loc a robotului care induce in eroare inamicul, deoarece este mai greu de prins
   - Deadly charge - aprindem ledurile RGB intermitent si folosim un sunet similar cu piu piu piu
   - Ultimate - un sunet puternic urmat de rotirea robotului pe loc + luminarea ledurilor rgb intermitent + sunete de piu piu piu
*/

//includere biblioteca
#include "MeMCore.h"

//declarare motoare
//declarare receptor infrarosu (IR)
//declarare Buzzer
//declarare LED-uri RGB

//declarare variabila tasta

void lumina (int r, int g, int b) {
  //aprindere LED-uri timp de 300 ms
}

//functie pentru miscarea motoarelor robotului
void miscare(int viteza_stanga, int viteza_dreapta, int durata)
{
  //pornire motoare 
  //asteapta 
}

//mers rapid in fata timp de 2 secunde
void Sinister_strike() {
  //miscare in fata timp de 2 secunde
  //oprire
}

//rotire pe loc pentru inducerea in eroare a inamicului
void Cloak_of_shadows() {
  //rotire in cerc timp de 4 secunde
  //oprire
}

//aprinderea LED-urilor RGB intermitent + sunet
void Deadly_charge() {
  //pornire buzzer timp de 1 secunda
  for (int i = 1; i <= 4; i++) {
    //aprindere LED-uri (rosu)
    //oprire LED-uri
  }
}

//sunet puternic urmat de rotirea robotului pe loc + aprinderea LED-urilor RGB intermitent + sunete de shooter
void Ultimate() {
  //pornire buzzer timp de 1s
  //miscare in cerc 200ms
  for (int i = 1; i <= 3; i++) {
    //aprindere LED-uri (albastru)
    //aprindere LED-uri (verde)
    //aprindere LED-uri (rosu)
  }
  //oprire LED-uri
  //oprire motoare
}

void setup() {
  //acest cod este executat o singura data
  //initializare receptor IR
  //initializare LED-uri
}

void loop() {
  //acest cod este executat si repetat la infinit
  for (int i = 0; i <= 100; i++) {
    if (receptor.keyPressed(i)) {
      tasta = i; //citirea tastei transmisa de telecomanda
  }
  switch (tasta) {
    //in functie de ce tasta a fost apasata, miscam robotul sau apelam powerup-ul corespunzator
    case 64: //miscare in fata timp de 200 ms
      break;
    case 7: //viraj stanga timp de 200 ms
      break;
    case 9: //viraj dreapta timp de 200 ms
      break;
    case 25: //miscare in spate timp de 200 ms
      break;
    case 0: //oprire motoare
      break;
    case 69: //apelare functie Sinister_strike
      break;
    case 70: //apelare functie Cloak_of_shadows
      break;
    case 71: //apelare functie Deadly_charge
      break;
    case 67: //apelare functie Ultimate
      break;
    default: break;
  }
  receptor.loop(); //functie necesara updatarii receptorului
  }
}
