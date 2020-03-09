/*
  Vom misca mBot-ul in fata si in spate folosind consola seriala
*/

//includere biblioteca

//declarare motoare

void setup() {
  //acest cod este executat o singura data
  //initializare consola seriala
}
void loop() { 
  //acest cod este executat si repetat la infinit 
  if (Serial.available() > 0) {
    String mesaj = Serial.readString(); //citire mesaj din consola seriala
    if (mesaj == "fata"){ 
      //mergi in fata
    } else if (mesaj == "spate"){ 
      //mergi in spate
    } else {
      //oprire
    }
  }
}
