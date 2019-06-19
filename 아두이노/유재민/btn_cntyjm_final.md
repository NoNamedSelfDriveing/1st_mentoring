int count=0; void setup() { // put your setup code here, to run once:

Serial.begin(9600); pinMode(2,INPUT);

pinMode(8,OUTPUT); pinMode(9,OUTPUT); pinMode(10,OUTPUT);

}

void loop() { int buttonState = digitalRead(2); Serial.println(buttonState); if(count>9){ count=1; }

if(buttonState==LOW){

  while(1){
  buttonState=digitalRead(2);  
  Serial.println(buttonState); 
  if(buttonState==HIGH){
  count++;
  
  break;
  }
  
  }
}

switch(count){ case 3: digitalWrite(10,LOW); digitalWrite(8,HIGH); break;
case 6: digitalWrite(8,LOW); digitalWrite(9,HIGH); break; 
case 9: digitalWrite(9,LOW); digitalWrite(10,HIGH); break; 


default:
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);

  break;


}
}
