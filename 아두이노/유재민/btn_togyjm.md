int count=0;
int toggle=0;
void setup() {
  pinMode(3,INPUT);
  pinMode(13,OUTPUT);

}

void loop() {
    int nInput=digitalRead(3);
   while(nInput==0){
    if(toggle%2==0){
      count=0;
      

    }
    else if(toggle%2==1){
      count=1;
     
    }
    toggle++;
    delay(150);
    break;
   }
    while(nInput==0){
      nInput=digitalRead(3);
      continue; 
   }


   if(nInput==1){
    
    if(count==1){
      digitalWrite(13,HIGH);
    
    }
   else if(count==0){
      digitalWrite(13,LOW);
      
   }
   }
   
}
