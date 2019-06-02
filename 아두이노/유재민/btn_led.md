void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(2,INPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);

}

void loop() {
   int buttonState = digitalRead(2);
  Serial.println(buttonState);
  if(buttonState==LOW){
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);
  delay(500);    
  }
  else{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);}
  delay(500);
}
