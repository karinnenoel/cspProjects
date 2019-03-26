void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  // sets data rate to 9600 bits per second
  Serial.setTimeout(10);
  // sets maximum miliseconds to wait for serial data to 10
  pinMode(13, OUTPUT);
  // sets up the specified pin,(13)to act as an input or an output,(output)
  Serial.println("Hello, good day to you sir or madam. :D");
  // sends weclome message to the user via the serial monitor
  Serial.println("Send 'On' to turn on the LED.");
  // sends intructions to the user via the serial monitor
  Serial.println("Send 'Off' to turn off the LED.");
  // sends instructions to the user via the serial monitor
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0) {
    // if the number of bytes available to read is greater than 0 then store it as the command variable
    String command;
    // declares a string variable called command
    command = Serial.readString();
    // storing Serial.readString as command
    command.trim();
    // gets rid of any extra characters that might appear to the computer even though they're not visible to the user
    if (command == "On") {
      // if the user types "On" then it will run the following code
      digitalWrite(13, HIGH);
      // turns light on
      Serial.println("On");
      // when the user types "On" the serial monitor will print it
    }
    else if (command == "Off") {
      // if the user types "Off" instead of "On" it will run the following code
      digitalWrite(13, LOW);
      // turns light off
      Serial.println("Off");
      // when the user typed "Off" the serial monitor will print it
    }
  }

}
