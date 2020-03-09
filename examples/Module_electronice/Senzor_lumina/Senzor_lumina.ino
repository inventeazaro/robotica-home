/*
Citirea si afisarea valorilor senzorului de lumina 
*/

int lumina; 

void setup() {
  //acest cod este executat o singura data
  pinMode(6, INPUT); //declarare pin 6 ca pin de intrare
  Serial.begin(9600); //initializare consola seriala
}

void loop() {
  //acest cod este executat si repetat la infinit
  lumina = analogRead(6); //citire valoare
  Serial.println(lumina); //afisare valoare
}
