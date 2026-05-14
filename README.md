# Pisca LED com Arduino

Projeto simples de pisca LED utilizando Arduino Uno no Tinkercad.

## Componentes
- Arduino Uno
- LED
- Resistor 220?
- Protoboard

## Funcionamento
O LED liga e desliga continuamente usando a função `digitalWrite()` e `delay()`.

## Código principal

```cpp
void setup() {
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH);
  delay(1000);

  digitalWrite(13, LOW);
  delay(1000);
}