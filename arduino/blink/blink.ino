void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  // sets up the specified pin,(13)to act as an input or an output,(output)
}
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH);
  // sends a signal to the pin telling it to turn on
  delay(1000);
  // tells pin to stay on for however many milliseconds
  digitalWrite(13, LOW);
  // sends a signal to the telling it to turn off
  delay(2000);
  // tells pin to stay off for however many milliseconds
  digitalWrite(13, HIGH);
  // sends a signal to the pin telling it to turn on
  delay(4);
  // tells pin to stay on for however many milliseconds
  digitalWrite(13, LOW);
  // sends a signal to the telling it to turn off
  delay(4000);
  // tells pin to stay off for however many milliseconds
  digitalWrite(13, HIGH);
  // sends a signal to the pin telling it to turn on
  delay(9000);
  // tells pin to stay on for however many milliseconds
  digitalWrite(13, LOW);
  // sends a signal to the telling it to turn off
  delay(1000);
  // tells pin to stay off for however many milliseconds
  digitalWrite(13, HIGH);
  // sends a signal to the pin telling it to turn on
  delay(60);
  // tells pin to stay on for however many milliseconds
  digitalWrite(13, LOW);
  // sends a signal to the telling it to turn off
  delay(3000);
  // tells pin to stay off for however many milliseconds
  digitalWrite(13, HIGH);
  // sends a signal to the pin telling it to turn on
  delay(7000);
  // tells pin to stay on for however many milliseconds
  digitalWrite(13, LOW);
  // sends a signal to the telling it to turn off
  delay(20);
  // tells pin to stay off for however many milliseconds
}
