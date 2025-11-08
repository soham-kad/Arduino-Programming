// dimmable led project
int readvalue;
int pot=A0;
float voltage;
int dl =500;
int ledPin = 3;
void setup() {
  // put your setup code here, to run onc
  pinMode(A0, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  readvalue= analogRead(pot);
  voltage = (255./1023.)*readvalue;
  Serial.print("pot value = ");
  Serial.println(voltage);
  analogWrite(ledPin, voltage);
  

}
