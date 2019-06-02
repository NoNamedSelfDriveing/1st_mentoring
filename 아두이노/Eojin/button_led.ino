int button1 = 3;
int button2 = 4;
int led1 = 5;
int led2 = 6;
int led3 = 7;
int led4 = 8;


void setup() {
 pinMode(button1, INPUT);
 pinMode(button2, INPUT);
 pinMode(led1, OUTPUT);
 pinMode(led2, OUTPUT);
 pinMode(led3, OUTPUT);
 pinMode(led4, OUTPUT);
}

void loop() {
  if(digitalRead(button1) == LOW){
      digitalWrite(led1, HIGH);
      digitalWrite(led3, HIGH); 
  }
  else{
      digitalWrite(led1, LOW);
      digitalWrite(led3, LOW);
  }
  if(digitalRead(button2) == LOW){
      digitalWrite(led1, HIGH);
      digitalWrite(led3, HIGH); 
  }
  else{
      digitalWrite(led1, LOW);
      digitalWrite(led3, LOW);
  }
  
}
