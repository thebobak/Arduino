#include <LiquidCrystal.h>

const int pingPin = 7;
unsigned int duration, inches;
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);


void setup() {
  Serial.begin(9600);
    lcd.begin(16, 2);
    
}

void loop() {
  lcd.setCursor(0, 1);
  pinMode(pingPin, OUTPUT);          // Set pin to OUTPUT
  digitalWrite(pingPin, LOW);        // Ensure pin is low
  delayMicroseconds(2);
  digitalWrite(pingPin, HIGH);       // Start ranging
  delayMicroseconds(5);              //   with 5 microsecond burst
  digitalWrite(pingPin, LOW);        // End ranging
  pinMode(pingPin, INPUT);           // Set pin to INPUT
  duration = pulseIn(pingPin, HIGH); // Read echo pulse
  inches = duration / 74 / 2;        // Convert to inches
  lcd.print(inches);            // Display result
  lcd.print(" inches");
  Serial.println(inches);
  delay(200);		             // Short delay
}
