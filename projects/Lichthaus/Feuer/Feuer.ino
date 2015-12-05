int green1 = 3;
int green2 = 5;
int red1  = 6;
int red2  = 9;
int blue1 = 10;
int blue2 = 16;

const int LightInPin = A0;

int green1Value = 0;
int green2Value = 0;
int red1Value  =  0;
int red2Value  =  0;
int blue1Value =  0;
int blue2Value =  0;

int LightValue = 0;

int redMin   = 10; //10  //60
int redMax   = 40; //40  //240
int greenMin = 10; //10  //60
int greenMax = 30; //30  //170
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
  LightValue = analogRead(LightInPin);
  if ( LightValue > 1000 ) {  
    green1Value = random(greenMin, greenMax);
    red1Value   = random(redMin, redMax);   
    green2Value = random(greenMin, greenMax);
    red2Value   = random(redMin, redMax);
  } 
  else {
    green1Value = 0;
    red1Value   = 0;   
    green2Value = 0;
    red2Value   = 0;
  }

  analogWrite(green1, green1Value);
  delay (random(delayMin, delayMax));
  analogWrite(red1, red1Value);
  delay (random(delayMin, delayMax));
  analogWrite(green2, green2Value);
  delay (random(delayMin, delayMax));
  analogWrite(red2, red2Value);
  delay (random(delayMin, delayMax)); 
}


