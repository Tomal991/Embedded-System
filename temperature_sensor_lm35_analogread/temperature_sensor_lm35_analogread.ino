int t=0;
void setup()
{
  pinMode(t, INPUT);
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
}