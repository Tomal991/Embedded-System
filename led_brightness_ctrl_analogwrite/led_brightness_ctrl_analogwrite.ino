

int p = 12;
void setup()
{
  pinMode(p, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  /*analogWrite(p,255);
    delay(100);
    analogWrite(p,200);
    delay(100);
    analogWrite(p,150);
    delay(100);
    analogWrite(p,100);
    delay(100);
    analogWrite(p,50);
    delay(100);
    analogWrite(p,0);*/


  for (int i = 0; i <= 255; i = i + 5) {

    analogWrite(p, i);
    delay(100);
  }

}




//Alternate

/*int led = 12;
int brightness = 0;
int fadeAmount = 15;

void setup()

  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  analogWrite(led, brightness);
  brightness = brightness + fadeAmount;

  if (brightness == 0 || brightness == 255) {

    fadeAmount = -fadeAmount;
    Serial.println(fadeAmount);
  }
  delay(250);

}*/
