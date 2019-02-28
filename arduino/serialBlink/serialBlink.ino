void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  Serial.println("Hello, good day to you sir or madam. :D");
  Serial.println("Send 'On' to turn on the LED.");
  Serial.println("Send 'Off' to turn off the LED.");
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH);
  Serial.println("On");
  delay(1000);
  digitalWrite(13, LOW);
  Serial.println("Off");
  delay(1000);
}
