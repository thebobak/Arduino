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
  delay(2000);
}

void loop() {
  if (digitalRead(10) == HIGH) {
    delay(10);
  } else {
    usbMIDI.sendNoteOn(100, 127, 1); // send GO command          
    delay(1000);
    usbMIDI.sendNoteOff(100,127,1);
  }
  
    if (digitalRead(9) == HIGH) {
    delay(10);
  } else {
    usbMIDI.sendNoteOn(101, 127, 1); // SEND Panic Command
    usbMIDI.sendNoteOff(101,127,1);
    delay(1000);
  }
  delay(10);
}
