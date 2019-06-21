#define LED 13
#define BUTTON 2

int IsOn = 0;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT);
  Serial.begin(9600);
}

void loop() {
   if(digitalRead(BUTTON) == LOW){
      while(digitalRead(BUTTON) != HIGH){
      }     
        IsOn = 1 - IsOn;
        digitalWrite(LED, IsOn);
   }

}
