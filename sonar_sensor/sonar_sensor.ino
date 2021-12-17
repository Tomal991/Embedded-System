// C++ code
//

int trig=2;
int echo=3;

void setup()
{
 pinMode(trig,OUTPUT);
 pinMode(echo,INPUT);
 
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

  Serial.print("distance=");
  
  Serial.print(cm);
  Serial.print("cm, ");
  
  Serial.print(in);
  Serial.println("in , ");
  delay(250);


}
