void setup() {
  // put your setup code here, to run once:
  
  pinMode(2,INPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
 
}

void loop() {
  // put your main code here, to run repeatedly:
  int c=0;
  
 
  if((digitalRead(2)==LOW)&&(digitalRead(2)==HIGH)){
    c++;
    }
  }
  switch(c){
    case 3:
    digitalWrite(4,HIGH);
    delay(100);
    digitalWrite(4,LOW);
    break;
    case 6:
    digitalWrite(5,HIGH);
    delay(100);
    digitalWrite(5,LOW);
    break;
    case 9:
    digitalWrite(6,HIGH);
    delay(100);
    digitalWrite(6,LOW);
    c=0;
    break;
  }

}
