int vermelhoCarro = 10;
int amareloCarro = 11;
int verdeCarro = 12;

int vermelhoP = 8;
int verdeP = 9;

void setup(){
  pinMode(vermelhoCarro, OUTPUT);
  pinMode(amareloCarro, OUTPUT);
  pinMode(verdeCarro, OUTPUT);
  pinMode(vermelhoP, OUTPUT);
  pinMode(verdeP, OUTPUT);
}

void loop(){

  // Carro verde / pedestre vermelho
  digitalWrite(verdeCarro, HIGH);
  digitalWrite(vermelhoP, HIGH);
  digitalWrite(vermelhoCarro, LOW);
  digitalWrite(amareloCarro, LOW);
  digitalWrite(verdeP, LOW);
  delay(3000);

  // Amarelo carros
  digitalWrite(verdeCarro, LOW);
  digitalWrite(amareloCarro, HIGH);
  delay(1000);
  digitalWrite(amareloCarro, LOW);

  // Carro vermelho / pedestre verde
  digitalWrite(vermelhoCarro, HIGH);
  digitalWrite(verdeP, HIGH);
  digitalWrite(vermelhoP, LOW);
  delay(3000);

  // Reset
  digitalWrite(vermelhoCarro, LOW);
  digitalWrite(verdeP, LOW);
}