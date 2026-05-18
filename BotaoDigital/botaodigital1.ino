#define ledpin 10  // define o pino do LED
#define buttonpin 2

void setup() {
  pinMode(ledpin, OUTPUT);
  pinMode(buttonpin, INPUT);
}

void loop() {
  int state = digitalRead(buttonpin);
  delay(150);

  if (state == HIGH) {
    digitalWrite(ledpin, HIGH);
  } else {
    digitalWrite(ledpin, LOW);
  }
}