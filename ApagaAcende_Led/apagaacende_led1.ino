#define ledpin 10  // define o pino do LED
#define buttonpin 2

int led_status=0;

void setup() {
  pinMode(ledpin, OUTPUT);
  pinMode(buttonpin, INPUT);
}

void loop() {
  int state = digitalRead(buttonpin);
  delay(150);

  if (state == HIGH && led_status ==0 ) {
    digitalWrite(ledpin, HIGH);
    led_status = 1;
    delay(300);
  } else if (state == HIGH && led_status ==1 ) {
    digitalWrite(ledpin, LOW);
    led_status = 0;
    delay(300);
  }
}