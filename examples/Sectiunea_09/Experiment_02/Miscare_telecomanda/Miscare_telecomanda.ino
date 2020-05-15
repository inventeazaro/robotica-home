/*
   Vom misca mBot-ul prin intermediul telecomenzii.
*/

#include "MeMCore.h" //includere biblioteca

//declarare motoare
//definire receptor infrarosu (IR)
//declarare variabila tasta

void miscare(int viteza_stanga, int viteza_dreapta, int durata) //functie pentru miscarea motoarelor robotului
{
  MotorStanga.run(-viteza_stanga);
  MotorDreapta.run(viteza_dreapta);
  delay(durata);
}

void setup() {
  //initializare receptor IR
}

void loop() {
  for (int i = 0; i <= 100; i++) {
    if (receptor.keyPressed(i)) {
      //citirea tastei transmisa de telecomanda
    }
  }
  switch (tasta) {
    //afisam pe consola seriala ce tasta a fost apasata si miscam mBotul
    case 64:
      //miscare in fata timp de 200 ms
      break;
    case 7:
      //viraj stanga timp de 200 ms
      break;
    case 9:
      //viraj dreapta timp de 200 ms
      break;
    case 25:
      //mers in spate timp de 200 ms
      break;
    case 0:
      //oprire motoare
      break;
    default: break;
  }
  receptor.loop(); //functie necesara updatarii receptorului
}
