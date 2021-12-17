#include <Servo.h>

Servo servo1;
Servo servo2;
int trig=2;
int echo=3;
int sensor=10;
int state=LOW;

void setup()
{
 pinMode(trig,OUTPUT);
 pinMode(echo,INPUT);
 pinMode(sensor, INPUT);
 servo1.attach(11);
 servo2.attach(12);
 Serial.begin(9600);
}

void loop()
{
  
  long duration,cm,in;
  long value=digitalRead(sensor);
  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  duration=pulseIn(echo,HIGH);
  cm=(duration/2)/29.1;
  in=cm/2.54;
  
 
  if(value==HIGH){
    servo1.write(90);
    delay(100);
    if(state==LOW){
      Serial.println("Motion detected");
      state=HIGH;
    }
    
  }
  if(value==LOW){
    servo1.write(0);
    delay(100);
    if(state==HIGH){
      Serial.println("Motion stopped");
      state=LOW;
    }
    
  }
   if(in>=20 && in<=30){
    
    servo2.write(90);
   
  }
  else{
    
    servo2.write(0);
    servo1.write(0);
  }
  
  Serial.print("distance=");

  Serial.print(cm);
  Serial.print("cm, ");

  Serial.print(in);
  Serial.println("in , ");
  delay(250);
  
  
}