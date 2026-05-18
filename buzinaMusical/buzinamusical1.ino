

int buzina = 13;
void setup(){
pinMode(buzina,OUTPUT);

}

void loop(){

//DÓ
  
  tone(buzina,2616);
  delay(200);
  noTone(buzina);
  delay(100);
  
//RÉ
  
  tone(buzina,2936);
  delay(200);
  noTone(buzina);
  delay(100);
  
  
//MI  
  tone(buzina,3296);
  delay(200);
  noTone(buzina);
  delay(100);
  
//FÁ
  
   tone(buzina,3492);
  delay(200);
  noTone(buzina);
  delay(100);
  
  
//SOL
  
  tone(buzina,3919);
  delay(200);
  noTone(buzina);
  delay(100);
  
  
//LÀ
  
  tone(buzina,4400);
  delay(200);
  noTone(buzina);
  delay(100);
  
//SI
  
  tone(buzina,4938);
  delay(200);
  noTone(buzina);
  delay(100);
  
  

}