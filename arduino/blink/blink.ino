void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(2000);
  digitalWrite(13, HIGH);
  delay(4);
  digitalWrite(13, LOW);
  delay(4000);
  digitalWrite(13, HIGH);
  delay(9000);
  digitalWrite(13, LOW);
  delay(1000);
  digitalWrite(13, HIGH);
  delay(60);
  digitalWrite(13, LOW);
  delay(3000);
  digitalWrite(13, HIGH);
  delay(7000);
  digitalWrite(13, LOW);
  delay(20);
}
