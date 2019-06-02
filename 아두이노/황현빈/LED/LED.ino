void setup() {
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
}
void loop() {
  /*
  1. 전부 키기
  digitalWrite(2,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(5,HIGH);
   */
  /*
  2. 순차적
  digitalWrite(2,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(3,LOW);
  digitalWrite(5,LOW);
  delay(1000);
  digitalWrite(2,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(5,LOW);
  delay(1000);
  digitalWrite(2,LOW);
  digitalWrite(4,LOW);
  digitalWrite(3,HIGH);
  digitalWrite(5,LOW);
  delay(1000);
  digitalWrite(2,LOW);
  digitalWrite(4,LOW);
  digitalWrite(3,LOW);
  digitalWrite(5,HIGH);
  delay(1000);
   */
  /* 
  3. 홀수 짝수
  digitalWrite(2,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(5,LOW);
  delay(1000);
  digitalWrite(3,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(2,LOW);
  digitalWrite(4,LOW);
  delay(1000);
  */
}
