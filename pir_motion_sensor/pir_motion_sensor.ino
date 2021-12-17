int led=12;
int state=LOW;
int value=0;
int sensor=10;
  
  void setup()
{
  pinMode(led, OUTPUT);
  pinMode(sensor, INPUT);
  Serial.begin(9600);
}

void loop()
{
  value=digitalRead(sensor);
  if(value==HIGH){
    digitalWrite(led,HIGH);
    delay(100);
    
    if(state==LOW){
      Serial.println("Motion detected");
      state=HIGH;
    }
  }
  
  else{
    digitalWrite(led,LOW);
    delay(200);
    
    if(state==HIGH){
      Serial.println("Motion stopped");
      state=LOW;
    }
  }
  
}