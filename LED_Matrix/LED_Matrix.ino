/*
 * Button.pde
 */
const int ledPin = 13;

const int col1 = 12;
const int col2 = 11;
const int col3 = 10;
const int col4 = 9;

const int row1 = 8;
const int row2 = 7;
const int row3 = 6;
const int row4 = 5;
const int row5 = 4;
const int row6 = 3;
const int row7 = 2;

int REFRESH_RATE = 5;
int FRAME_RATE = 50;

int POT_PIN = 0;


boolean ledRows[][7] = 
{
 {1,0,0,1,0,0,1},
 {1,0,0,1,0,0,1},
 {1,0,0,1,0,0,1},
 {1,1,1,1,1,1,1}
};


boolean LETTER_B[][7] = 
{
  {0,1,1,0,1,1,0},
  {1,0,0,1,0,0,1},
  {1,0,0,1,0,0,1},
  {1,1,1,1,1,1,1}
};

boolean LETTER_O[][7] = 
{
  {1,1,1,1,1,1,1},
  {1,0,0,0,0,0,1},
  {1,0,0,0,0,0,1},
  {1,1,1,1,1,1,1}
};

boolean LETTER_A[][7] = 
{
  {0,1,1,1,1,1,1},
  {1,0,0,0,1,0,0},
  {1,0,0,0,1,0,0},
  {0,1,1,1,1,1,1}
};

boolean LETTER_K[][7] = 
{
  {1,1,0,0,0,1,1},
  {0,0,1,0,1,0,0},
  {0,0,0,1,0,0,0},
  {1,1,1,1,1,1,1}
};


void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(0));
  
  pinMode(ledPin, OUTPUT);
  
  pinMode(row1, OUTPUT);
  pinMode(row2, OUTPUT);
  pinMode(row3, OUTPUT);
  pinMode(row4, OUTPUT);
  pinMode(row5, OUTPUT);
  pinMode(row6, OUTPUT);
  pinMode(row7, OUTPUT);
  pinMode(col1, OUTPUT);
  pinMode(col2, OUTPUT);
  pinMode(col3, OUTPUT);
  pinMode(col4, OUTPUT);
  delay(1000);
  
  // Blink Status led //
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


void draw(){
  REFRESH_RATE = analogRead(POT_PIN);
   digitalWrite(col1,HIGH);
                       //   c  r 
  digitalWrite(row1,ledRows[0][0]);
  digitalWrite(row2,ledRows[0][1]);
  digitalWrite(row3,ledRows[0][2]);
  digitalWrite(row4,ledRows[0][3]);
  digitalWrite(row5,ledRows[0][4]);
  digitalWrite(row6,ledRows[0][5]);
  digitalWrite(row7,ledRows[0][6]);
  
  delay(REFRESH_RATE);
  digitalWrite(col1,LOW);
  
  digitalWrite(col2,HIGH);
  digitalWrite(row1,ledRows[1][0]);
  digitalWrite(row2,ledRows[1][1]);
  digitalWrite(row3,ledRows[1][2]);
  digitalWrite(row4,ledRows[1][3]);
  digitalWrite(row5,ledRows[1][4]);
  digitalWrite(row6,ledRows[1][5]);
  digitalWrite(row7,ledRows[1][6]);
  
  delay(REFRESH_RATE);
  digitalWrite(col2,LOW);
  
  digitalWrite(col3,HIGH);
  digitalWrite(row1,ledRows[2][0]);
  digitalWrite(row2,ledRows[2][1]);
  digitalWrite(row3,ledRows[2][2]);
  digitalWrite(row4,ledRows[2][3]);
  digitalWrite(row5,ledRows[2][4]);
  digitalWrite(row6,ledRows[2][5]);
  digitalWrite(row7,ledRows[2][6]);
  
  delay(REFRESH_RATE);
  digitalWrite(col3,LOW);
  
  digitalWrite(col4,HIGH);
  digitalWrite(row1,ledRows[3][0]);
  digitalWrite(row2,ledRows[3][1]);
  digitalWrite(row3,ledRows[3][2]);
  digitalWrite(row4,ledRows[3][3]);
  digitalWrite(row5,ledRows[3][4]);
  digitalWrite(row6,ledRows[3][5]);
  digitalWrite(row7,ledRows[3][6]);
  
  delay(REFRESH_RATE);
  digitalWrite(col4,LOW);
}


void loop() {
  
  
  // DRAW B //
  for(int c=0;c<4;c++) {
    for(int r=0;r<7;r++){
      ledRows[c][r] = LETTER_B[c][r];
      REFRESH_RATE = analogRead(POT_PIN);
    }
  }
  
 for(int i=0; i< FRAME_RATE; i++){
  draw();
  delay(1);
 }
  
  
    // DRAW 0 //
  for(int c=0;c<4;c++) {
    for(int r=0;r<7;r++){
      ledRows[c][r] = LETTER_O[c][r];
      REFRESH_RATE = analogRead(POT_PIN);
    }
  }
  
  
  
 for(int i=0; i< FRAME_RATE; i++){
  draw();
  delay(1);
 }
 

    // DRAW B //
  for(int c=0;c<4;c++) {
    for(int r=0;r<7;r++){
      ledRows[c][r] = LETTER_B[c][r];
      REFRESH_RATE = analogRead(POT_PIN);
    }
  }
  
  
  
 for(int i=0; i< FRAME_RATE; i++){
  draw();
  delay(1);
 }
  
    // DRAW A //
  for(int c=0;c<4;c++) {
    for(int r=0;r<7;r++){
      ledRows[c][r] = LETTER_A[c][r];
      REFRESH_RATE = analogRead(POT_PIN);
    }
  }
  
  
  
 for(int i=0; i< FRAME_RATE; i++){
  draw();
  delay(1);
 }
  
    // DRAW K //
  for(int c=0;c<4;c++) {
    for(int r=0;r<7;r++){
      ledRows[c][r] = LETTER_K[c][r];
      REFRESH_RATE = analogRead(POT_PIN);
    }
  }
  
  
  
 for(int i=0; i< FRAME_RATE; i++){
  draw();
  delay(1);
 }
  
}
