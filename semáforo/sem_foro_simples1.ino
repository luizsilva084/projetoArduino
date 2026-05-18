// semáforo simples

// Declara as portas do arduino utilizadas

int verde = 8;
int amarelo = 9;
int vermelho = 10;

//Configura as portas como saída de informação/energia

void setup(){
  
  pinMode(vermelho,OUTPUT);
  pinMode(amarelo,OUTPUT);
  pinMode(verde,OUTPUT);
  
  
}

void loop(){
 digitalWrite(verde,HIGH);
 delay(1000);
 digitalWrite(verde,LOW);
  
 digitalWrite(amarelo,HIGH);
 delay(1000);
 digitalWrite(amarelo,LOW);
  
 digitalWrite(vermelho,HIGH);
 delay(1000);
 digitalWrite(vermelho,LOW);
}