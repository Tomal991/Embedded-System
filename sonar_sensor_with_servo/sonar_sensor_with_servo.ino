#include <Servo.h>

Servo servo;
int trig=2;
int echo=3;

void setup()
{
 pinMode(trig,OUTPUT);
 pinMode(echo,INPUT);
 servo.attach(10);
 Serial.begin(9600);
}

void loop()
{
  long duration,cm,in;
  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  duration=pulseIn(echo,HIGH);
  cm=(duration/2)/29.1;
  in=cm/2.54;
  if(in>=40 && in<=60){
    
    servo.write(90);
  }
  else{
    servo.write(0);
    
  }
  Serial.print("distance=");

  Serial.print(cm);
  Serial.print("cm, ");

  Serial.print(in);
  Serial.println("in , ");
  delay(250);
  
  
}