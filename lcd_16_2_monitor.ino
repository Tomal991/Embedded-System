// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
                // RS,EN, D4,D5,D6,D7

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2); 

}

void loop() {
  
  lcd.setCursor(0, 0);
  lcd.print("hello, world!");
  lcd.setCursor(0, 1);
  lcd.print("hello, 1234!");
  
  // print the number of seconds since reset:
  //lcd.print(millis() / 1000);
  delay(500);
  lcd.clear();
  delay(500);
}
 