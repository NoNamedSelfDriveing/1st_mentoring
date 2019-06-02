int count = 0;
void setup() {
 pinMode(4,INPUT);
 pinMode(2, OUTPUT); 
 pinMode(5, OUTPUT);
 pinMode(6, OUTPUT);
 Serial.begin(9600);
}
void loop() {
  if (digitalRead(4)==LOW){
    count=count+1;
    Serial.println(count);
    if(count == 3){
        digitalWrite(2, HIGH);
        digitalWrite(6, LOW);
        digitalWrite(5, LOW);
        delay(200);
      }
    else if(count == 6){
        digitalWrite(2, LOW);
        digitalWrite(5, LOW);
        digitalWrite(6, HIGH);
        delay(200);
      }
    else if(count == 9){
        digitalWrite(6, LOW);
        digitalWrite(2, LOW);
        digitalWrite(5, HIGH);
        delay(200);
        count = 0;
      }
      else{
        digitalWrite(2, LOW);
        digitalWrite(5, LOW);
        digitalWrite(6, LOW);
      }
      delay(200);
  }
}
