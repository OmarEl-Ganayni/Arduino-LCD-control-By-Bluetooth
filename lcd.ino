#include <LiquidCrystal.h> 
// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);


void setup() {
  Serial.begin(9600); // Default connection rate for my BT module`

}

void loop() {
  
 if(Serial.available() ){
lcd.write(Serial.read());
 }
}

