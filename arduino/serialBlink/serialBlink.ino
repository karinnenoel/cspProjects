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
  if (Serial.readString() == "On") {
    digitalWrite(13, HIGH);
    Serial.println("On");
  }
  else if (Serial.readString() == "Off") {
    digitalWrite(13, LOW);
    Serial.println("Off");
  }
}
