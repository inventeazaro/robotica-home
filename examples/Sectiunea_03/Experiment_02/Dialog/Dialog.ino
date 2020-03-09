/*
Vom afisa o serie de mesaje pe consola seriala.
*/

void setup() {
  //acest cod este executat o singura data
  Serial.begin(9600); //initializam consola seriala
}

void loop() {
  //acest cod este executat si repetat la infinit
  Serial.println("Hello kid!");                                 //afisam mesajul pe consola seriala
  delay(5000);                                                  //asteapta 5 secunde
  Serial.println("Hello robot!");                               //afisam mesajul pe consola seriala
  delay(5000);                                                  //asteapta 5 secunde
  Serial.println("Cum merge treaba?");                          //afisam mesajul pe consola seriala
  delay(5000);                                                  //asteapta 5 secunde
  Serial.println("Greu, am multe teme de facut");               //afisam mesajul pe consola seriala
  delay(5000);                                                  //asteapta 5 secunde
  Serial.println("Vrei sa te ajut?");                           //afisam mesajul pe consola seriala
  delay(5000);                                                  //asteapta 5 secunde
  Serial.println("Poti?");                                      //afisam mesajul pe consola seriala
  delay(5000);                                                  //asteapta 5 secunde
  Serial.println("Daca ma inveti cum, pot.");                   //afisam mesajul pe consola seriala
  delay(5000);                                                  //asteapta 5 secunde
}
