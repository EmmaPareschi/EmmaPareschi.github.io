int redPin= 3;
int greenPin = 5;
int bluePin = 6;

int wait = 1000;


void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  setColor(255, 0, 0); // Red Color
  delay(wait);
  
  setColor(0, 255, 0); // Green Color
  delay(wait);
  
  setColor(0, 0, 255); // Blue Color
  delay(wait);
  
  setColor(255,255,255); // White Color
  delay(wait);
  
  setColor(170, 0, 255); // Purple Color
  delay(wait);
}

void setColor(int redValue, int greenValue, int blueValue) {
  analogWrite(redPin, redValue);
  analogWrite(greenPin, greenValue);
  analogWrite(bluePin, blueValue);
}
