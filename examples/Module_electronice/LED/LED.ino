void setup() {
  pinMode(13, OUTPUT); //initializarea pinului 13 ca pin de intrare
}
void loop() {  
  digitalWrite(13, HIGH); //LEDul este aprins
  delay(1000);
  digitalWrite(13, LOW); //LEDul este stins
  delay(1000);
}
