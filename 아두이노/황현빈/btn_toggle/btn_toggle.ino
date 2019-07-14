boolean B=LOW;
void setup(){
  pinMode(4, INPUT);
  pinMode(13, OUTPUT);
}
void loop(){
  if(digitalRead(4) == LOW){
    while(digitalRead(4)==LOW){}
      digitalWrite(13, !B);
      B=!B;
   }
}
