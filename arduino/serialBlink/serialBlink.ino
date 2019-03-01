void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.setTimeout(10);
  pinMode(13, OUTPUT);
  Serial.println("Hello, good day to you sir or madam. :D");
  Serial.println("Send 'On' to turn on the LED.");
  Serial.println("Send 'Off' to turn off the LED.");
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0) {
    String command;
    command = Serial.readString();
    if command == "On") {
    digitalWrite(13, HIGH);
      Serial.println("On");
    }
    else if command == "Off") {
    digitalWrite(13, LOW);
      Serial.println("Off");
    }
  }

}
