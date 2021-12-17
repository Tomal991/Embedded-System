#include <Servo.h>

Servo myservo;
int L1=2;
int L2=3;
int R1=5;
int R2=6;
void setup()
{
   pinMode(L1, OUTPUT);
   pinMode(L2, OUTPUT);
   pinMode(R1, OUTPUT);
   pinMode(R2, OUTPUT);
  
   myservo.attach(12);
   Serial.begin(9600);
}

void loop()
{

 //forward
  digitalWrite(L1,HIGH);
  digitalWrite(L2,LOW);
  digitalWrite(R1,HIGH);
  digitalWrite(R2,LOW);
  delay(2000);
  
  //backward
  digitalWrite(L1,LOW);
  digitalWrite(L2,HIGH);
  digitalWrite(R1,LOW);
  digitalWrite(R2,HIGH);
  delay(2000);
  
  
  
  myservo.write(0);
  delay(1000);
  myservo.write(45);
   delay(1000);
  myservo.write(90);
   delay(1000);
  myservo.write(135);
   delay(1000);
  myservo.write(180);
   delay(1000);

  
}