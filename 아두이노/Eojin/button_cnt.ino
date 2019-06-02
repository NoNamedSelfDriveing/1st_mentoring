#define button1 3
#define led1  5
#define led2  6
#define led3  7

int num_of_pushed = 0;


void setup() {
 pinMode(button1, INPUT);

 pinMode(led1, OUTPUT);
 pinMode(led2, OUTPUT);
 pinMode(led3, OUTPUT);
}

void loop() {
  if(digitalRead(button1) == LOW){
    num_of_pushed++; 
    delay(150);
  }
  if(num_of_pushed % 3 == 0){
    switch(num_of_pushed/3){
      case 1:
          digitalWrite(led1, HIGH);
          digitalWrite(led2, LOW);
          digitalWrite(led3, LOW);
          break;
      case 2:
        digitalWrite(led1, LOW);
        digitalWrite(led2, HIGH);
        digitalWrite(led3, LOW);
        break;
      case 3:
        digitalWrite(led1, LOW);
        digitalWrite(led2, LOW);
        digitalWrite(led3, HIGH);
        break;
      }
    }
    else{
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
    }
    if(num_of_pushed == 12){
        num_of_pushed = 3;
        delay(150);
        
    }
}
