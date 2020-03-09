/*
Pinul pe care se afla butonul poate returna doar doua valori:
0 - cand butonul este apasat
1023 - cand butonul nu este apasat
*/

int buton;

void setup() {
  //acest cod este executat o singura data
  Serial.begin (9600); //initializare consola seriala
}
void loop() {
  //acest cod este executat si repetat la infinit
  buton = analogRead(7); //citire valoare
  Serial.println(buton); //afisare valoare
  if(buton == 0)
    Serial.println("Butonul este apasat"); 
  else //buton == 1023
    Serial.println("Butonul nu este apasat"); 
}

 
