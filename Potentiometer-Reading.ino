const int potpin = A0;
void setup() {
  Serial.begin(9600);

}

void loop() {
   int potvalue = analogRead(potpin);
   Serial.print("potvalue= ");
   Serial.println(potvalue);
   delay(1000);

}
