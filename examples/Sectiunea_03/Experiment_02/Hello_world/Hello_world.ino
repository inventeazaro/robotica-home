/*
Vom afisa un mesaj in consola seriala.
*/


void setup() {
  //acest cod este executat o singura data
  Serial.begin(9600); //initializam consola seriala
}

void loop() {
  //acest cod este executat si repetat la infinit
  Serial.println("Hello Madalina");  //afisam mesajul in consola seriala
  delay(1000);                       //asteapta 1 secunda     
}
