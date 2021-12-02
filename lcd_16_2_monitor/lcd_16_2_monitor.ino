#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
                // RS,EN, D4,D5,D6,D7

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  Serial.begin(9600);

}

void loop() {
  
  lcd.setCursor(0, 0);
  String name="Intesarul Haque";
  lcd.print(name);
  Serial.println(name);
  
  lcd.setCursor(0, 1);
  String id="182-15-2170";
  lcd.print(id);
  Serial.println(id);
  
  // print the number of seconds since reset:
  //lcd.print(millis() / 1000);
  
  delay(500);
  lcd.clear();
  delay(500);
}
 