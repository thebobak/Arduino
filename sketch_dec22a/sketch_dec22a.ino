/*
 * Button.pde
 */
const int ledPin = 13;

const int col1 = 8;
const int col2 = 7;
const int col3 = 6;
const int col4 = 5;

const int row1 = 12;
const int row2 = 11;
const int row3 = 10;
const int row4 = 9;




boolean ledCols[] = {0,    0,0,0,0};
boolean ledRows[] = {0,    0,0,0,0};



void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(0));
  
  pinMode(ledPin, OUTPUT);
  
  pinMode(row1, OUTPUT);
  pinMode(row2, OUTPUT);
  pinMode(row3, OUTPUT);
  pinMode(row4, OUTPUT);
  pinMode(col1, OUTPUT);
  pinMode(col2, OUTPUT);
  pinMode(col3, OUTPUT);
  pinMode(col4, OUTPUT);
  delay(1000);
  digitalWrite(ledPin, HIGH);
  delay(100);
  digitalWrite(ledPin,LOW);
  delay(100);
  digitalWrite(ledPin, HIGH);
  delay(100);
  digitalWrite(ledPin,LOW);
  delay(100);
  digitalWrite(ledPin, HIGH);
  delay(100);
  digitalWrite(ledPin,LOW);
  delay(100);
  
  
  
  
  
}

void loop() {

  
  digitalWrite(col1,ledCols[1]);
  digitalWrite(col2,ledCols[2]);
  digitalWrite(col3,ledCols[3]);
  digitalWrite(col4,ledCols[4]);
  
  digitalWrite(row1,ledRows[1]);
  digitalWrite(row2,ledRows[2]);
  digitalWrite(row3,ledRows[3]);
  digitalWrite(row4,ledRows[4]);
  
  delay(50);
  randomSeed(analogRead(0));
  for(int i=0; i<4; i++) {
    boolean shift = random(0,2);
    
    ledCols[i] = ledCols[i] ^ shift;
      for(int j=0; j<4; j++) {
        
        ledRows[j] = ledRows[j] ^ shift;
      }
      
  }
}
