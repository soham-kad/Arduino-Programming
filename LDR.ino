
void setup() {
  Serial.begin(9600);

}

void loop() {
  int ldrValue = analogRead(A0);
  Serial.print("LDR Value: ");
  Serial.print(ldrVlaue);
  delay(1000);
}
