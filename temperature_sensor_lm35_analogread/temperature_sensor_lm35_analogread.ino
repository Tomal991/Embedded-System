int t=0;
int red=13;
int green=12;
void setup()
{
  pinMode(t, INPUT);
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  float mv,v,cel;
  v=analogRead(t);
  mv=(v/1024.0)*5000;
  cel=mv/10;
  Serial.println("the temparature is ");
  Serial.print(cel);
  Serial.print(" degree centigrade");
  Serial.println();
  delay(1000);
  
  if(cel>30){
    digitalWrite(red,HIGH);
  }
  if(cel<25){
    digitalWrite(green,HIGH);
  }
}