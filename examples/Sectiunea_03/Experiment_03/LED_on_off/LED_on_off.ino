/*
Vom aprinde un LED de pe mBot atunci cand scriem "ON" in consola seriala.
*/

void setup() {
  //acest cod este executat o singura data
  //initializam consola seriala
  //initializam pinul pe care se afla LEDul (13)
}
void loop() { 
  //acest cod este executat si repetat la infinit 
  if (Serial.available() > 0) {                   //verificam daca este pornita seriala
    if (Serial.readString() == "ON"){             //punem conditia ca robotul sa citeasca "ON" in consola seriala
                                                  //LED-ul este aprins
    } else {
                                                  //LED-ul este stins
    }
  }
}
