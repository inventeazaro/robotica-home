/*
   La apasarea butonului, mBot va executa o miscare in zig-zag, apoi se va opri.
*/

//includere biblioteca
#include "MeMCore.h"

//declarare motoare

//functie de miscare
void miscare(int viteza_stanga, int viteza_dreapta, int durata)
{
  //pornire motoare
  //asteapta
}

//functie de mers in zig-zag - utilizeaza functia miscare
void zig_zag()
{
  //asteapta jumatate de secunda
  //rotire la stanga 0.3 secunde
  //mers inainte o secunda
  //rotire la dreapta 0.6 secunde
  //mers inainte o secunda
  //rotire la stanga 0.6 secunde
  //mers inainte o secunda
  //rotire la dreapta 0.6 secunde
  //mers inainte o secunda
  //oprire
}

void setup()
{
  //acest cod este executat o singura data
  //initializare buton
}

void loop()
{
  //acest cod este executat si rulat la infinit
  //cand butonul este apasat robotul se va misca in zig-zag
  while (analogRead(7) < 10) {
    //apelare functie zig_zag
  }
}
