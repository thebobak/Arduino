/*
 * Button.pde
 */
const int ledPin = 8;
const byte SC_ESCAPE = 0xB1;
 
void setup() {
  Serial.begin(9600);
  pinMode(10, INPUT_PULLUP);
  pinMode(9, INPUT_PULLUP);
  
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, HIGH);
  Keyboard.begin();
  delay(4000);
}

void loop() {
  if (digitalRead(10) == HIGH) {
    delay(10);
  } else {
    Keyboard.print(" "); // we print a space            
    delay(1000);
  }
  
    if (digitalRead(9) == HIGH) {
    delay(10);
  } else {
    Keyboard.press(KEY_ESC); // SEND ESCAPE KEY
    Keyboard.releaseAll();    
    delay(1000);
  }
  delay(10);
}
