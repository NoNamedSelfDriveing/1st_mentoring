void setup(){
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  
  }
void loop(){
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  }
 
/*
void loop() {
  int a;
  for(a=2;a<4;a++){
  digitalWrite(a,HIGH);
  digitalWrite(a+2,HIGH);
  delay(500);
  digitalWrite(a,LOW);
  digitalWrite(a+2,LOW);
  delay(500);
  
  }
}*/
/*void loop() {
  int a;
  for(a=2;a<6;a++){
  digitalWrite(a,HIGH);
  delay(500);
  digitalWrite(a,LOW);
  delay(500);
  }
}*/
  
