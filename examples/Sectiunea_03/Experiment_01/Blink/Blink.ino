/*
Vom aprinde un LED de pe mBot care clipeste o data pe secunda.
*/

void setup() {
  //acest cod este executat o singura data
  pinMode(13, OUTPUT); //initializarea pinului pe care se afla LED-ul
}

void loop() {
  //acest cod este executat si repetat la infinit
  digitalWrite(13, HIGH);   //LED-ul este aprins
  delay(1000);              //asteapta o secunda
  digitalWrite(13, LOW);    //LED-ul este stins
  delay(1000);              //asteapta o secunda
}
