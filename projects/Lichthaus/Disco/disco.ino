int green1 = 3;
int green2 = 5;
int red1  = 6;
int red2  = 9;
int blue1 = 10;
int blue2 = 16;

int green1Value = 0;
int green2Value = 0;
int red1Value  =  0;
int red2Value  =  0;
int blue1Value =  0;
int blue2Value =  0;

int redMin = 10;
int redMax = 20;
int greenMin = 0;
int greenMax = 10;
int delayMin = 20;
int delayMax = 50;

void setup() {                
  pinMode(green1, OUTPUT);  
  pinMode(green2, OUTPUT);
  pinMode(red1,   OUTPUT);
  pinMode(red2,   OUTPUT);
  pinMode(blue1,  OUTPUT);
  pinMode(blue2,  OUTPUT);

  analogWrite(blue1, 0);
  digitalWrite(blue2, LOW);
}

void loop() {
  // 1111111111111111111
  if (random(0, 255) > 125 ) {
    analogWrite(red1,0);    
  } 
  else {
    analogWrite(red1,255);
  }
  
  if (random(0, 255) > 125 ) {
    analogWrite(green1,0);    
  } 
  else {
    analogWrite(green1,255);
  }
  
    if (random(0, 255) > 125 ) {
    analogWrite(blue1,0);    
  } 
  else {
    analogWrite(blue1,255);
  }
  
  // 1111111111111111111
  if (random(0, 255) > 125 ) {
    analogWrite(red2,0);    
  } 
  else {
    analogWrite(red2,255);
  }
  
  if (random(0, 255) > 125 ) {
    analogWrite(green2,0);    
  } 
  else {
    analogWrite(green2,255);
  }
  
    if (random(0, 255) > 125 ) {
  digitalWrite(blue2, LOW);
  } 
  else {
  digitalWrite(blue2, HIGH);
  }
  
  delay (400);
}



