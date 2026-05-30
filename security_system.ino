#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

const int buttonPin = 7;
const int buzzerPin = 8;

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(buzzerPin, OUTPUT);
  lcd.begin(16, 2);
}

void loop() {
  if (digitalRead(buttonPin) == LOW) {

    lcd.setCursor(0, 0);
    lcd.print("ALERT!         ");

    lcd.setCursor(0, 1);
    lcd.print("Intruder       ");

    digitalWrite(buzzerPin, HIGH);

  } else {

    lcd.setCursor(0, 0);
    lcd.print("Home Secure    ");

    lcd.setCursor(0, 1);
    lcd.print("               ");

    digitalWrite(buzzerPin, LOW);
  }

  delay(100);
}