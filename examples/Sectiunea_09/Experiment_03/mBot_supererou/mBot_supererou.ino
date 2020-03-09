/*
 * Ne vom transforma mBot-ul intr-un supererou, atribuind fiecarei taste de pe telecomanda o putere speciala:
 * - Sinister strike - dash forward al robotului de 3 secunde
 * - Cloak of shadows - o rotire pe loc a robotului care induce in eroare inamicul, deoarece este mai greu de prins 
 * - Deadly charge - aprindem ledurile RGB intermitent si folosim un sunet similar cu piu piu piu
 * - Ultimata - un sunet puternic urmat de rotirea robotului pe loc + luminarea ledurilor rgb intermitent + sunete de piu piu piu
 */
 
//includere biblioteca
#include "MeMCore.h"
//definire receptor infrarosu (IR)
MeIR receptor; 
//definire variabila valoare tasta telecomanda
uint32_t value = 0x00; 
//declarare variabile de masurat timpul
unsigned long timp_curent, timp_regenerare;
//declarare vector - contine ultimul moment in care a fost apasata fiecare tasta pentru powerup
int stamina[4] = {0, 0, 0, 0};

//declarare motoare

//declarare Buzzer

//declarare LED-uri RGB


void rosu() {
  //aprindere LED-uri rosii timp de 0.3 secunde
}

void albastru() {
  //aprindere leduri albastre timp de 0.3 secunde
}

void verde() {
  //aprindere LED-uri albastre timp de 0.3 secunde
}

void stop_leds() {
  //stingere LED-uri timp de 0.3 secunde
}

//functie pentru miscarea motoarelor robotului
void miscare(int VitezaStanga, int VitezaDreapta)
{
  //miscare motoare
}

//dash forward al robotului timp de 2 secunde
void Sinister_strike() {
  //miscare in fata timp de 2 secunde apoi oprire
}

//rotire pe loc pentru inducerea in eroare a inamicului
void Cloak_of_shadows() {
  //rotire in cerc timp de 4 secunde apoi oprire
}

//aprinderea LED-urilor RGB intermitent + sunet
void Deadly_charge() {
  //generare nota buzzer timp de o secunda
  
  //aprindere intermitenta a LED-urilor (de 4 ori)
  rosu();
  stop_leds();
  rosu();
  stop_leds();
  rosu();
  stop_leds();
  rosu();
  stop_leds();
}

//sunet puternic urmat de rotirea robotului pe loc + aprinderea LED-urilor RGB intermitent + sunete de shooter
void Ultimate() {
  //pornire buzzer timp de o secunda
  //miscare in cerc
  //aprindere LED-uri (albastru-verde-rosu de 3 ori)
  albastru();
  stop_leds();
  verde();
  stop_leds();
  rosu();
  stop_leds();
  albastru();
  stop_leds();
  verde();
  stop_leds();
  rosu();
  stop_leds();
  albastru();
  stop_leds();
  verde();
  stop_leds();
  rosu();
  stop_leds();
  //oprire
  miscare(0, 0);
}

//functie care returneaza pentru fiecare tasta indicele care ii corespunde in vectorul de stamina
int index( uint32_t tasta) {
  switch (tasta) {
    case 0x45: return 0; break;
    case 0x46: return 1; break;
    case 0x47: return 2; break;
    case 0x43: return 3; break;
    default: return 4; break;
  }
}

//functie ce calculeaza cat timp a trecut de la ultima apasare a tastei de powerup
//daca a trecut destul timp pentru regenerare se executa powerup-ul corespunzator
//altfel se afiseaza un mesaj in seriala
void Enough_stamina(uint32_t tasta) {
  //calcul timp curent
  timp_curent = millis();
  //calcul timp de la ultima apasare
  timp_regenerare = timp_curent - stamina[index(tasta)];
  if (timp_regenerare >= 4000)
  {
    Utilizare_power(tasta); //apelarea powerup-ului
    stamina[index(tasta)] = millis(); //stocarea ultimei utilizari in vector
  }
  else {
    Serial.print("Nu ai destula stamina");
  }
}

//functie ce apeleaza powerup-ul corespunzator tastei
void Utilizare_power(uint32_t tasta) {
  switch (tasta) {
    case 0x45: Sinister_strike(); break;
    case 0x46: Cloak_of_shadows(); break;
    case 0x47: Deadly_charge(); break;
    case 0x43: Ultimate(); break;
    default: miscare(0, 0); break;
  }
}

void setup() {
  //acest cod este executat o singura data
  receptor.begin(); //initializare receptor IR
  //initializare consola seriala
  //initializare LEDuri
}


void loop() {
  //acest cod este executat si repetat la infinit
  if (receptor.decode()) {
    value = receptor.value >> 16 & 0xFF; //decodarea semnalului transmis de telecomanda
  } else value = 0x44;

  switch (value) {
    //in functie de ce tasta a fost apasata, miscam robotul sau apelam powerup-ul corespunzator
    case 0x40: //miscare in fata timp de 0.2 secunde       break;
    case 0x7:  //miscare la stanga timp de 0.2 secunde     break;
    case 0x9:  //miscare la dreapta timp de 0.2 secunde    break;
    case 0x19: //miscare in spate timp de 0.2 secunde      break;
    case 0x15: //oprire timp de 0.2 secunde                break;
    case 0x45: Enough_stamina(value); break;
    case 0x46: Enough_stamina(value); break;
    case 0x47: Enough_stamina(value); break;
    case 0x43: Enough_stamina(value); break;
  }
}
