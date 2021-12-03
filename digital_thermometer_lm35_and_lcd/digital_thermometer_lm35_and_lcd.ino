#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int t=0;

void setup() {
  
  pinMode(t,INPUT);
  lcd.begin(16, 2);
  Serial.begin(9600);
}

void loop() {
  
  float mv,v,cel;
  v=analogRead(t);
  mv=(v/1024.0)*5000;
  cel=mv/10;
  Serial.println("the temparature is");
  Serial.print(cel);
  Serial.print(" degree centigrade\n");
   
  lcd.setCursor(0, 0);
  lcd.print("Temparature is");
  lcd.setCursor(0, 1);
  lcd.print(cel);
  lcd.setCursor(6, 1);
  lcd.print("Celcius");
  delay(1000);
}
 