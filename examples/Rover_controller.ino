

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0 ) {
    inByte = Serial.read();

    Serial.Print("I received: ");
    Serial.println(inByte, DEC);
  }
  
}
