

int p=12;
int t=8;
void setup()
{
  pinMode(p, OUTPUT);
  pinMode(t, INPUT);
  Serial.begin(9600);
}

void loop()
{
  int v=digitalRead(t);
  Serial.println(v);
  
  if(v==1){
    digitalWrite(p,LOW);  
  }
  if(v==0){
    digitalWrite(p,HIGH);    
  }
}