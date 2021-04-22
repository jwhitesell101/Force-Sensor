#include <LiquidCrystal.h> //new
LiquidCrystal lcd(4, 5, 6, 7, 8, 9);
int FSR_Pin =  A0;
//analog pin
void setup() {
  Serial.begin(9600);
}

void loop() {
  int force;
  int FSRReading = analogRead(FSR_Pin);
  lcd.clear();
  lcd.setCursor(0, 0);

  lcd.print("Force in PA ");
  lcd.print(FSRReading);

  Serial.println(FSRReading);

  delay(1000); //makes output faster or slower
}
