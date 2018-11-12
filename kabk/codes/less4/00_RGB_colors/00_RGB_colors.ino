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

  //Color Red
  analogWrite(redPin, 255);
  analogWrite(greenPin, 0);
  analogWrite(bluePin, 0);
  delay(wait);

  //Color Green
  analogWrite(redPin, 0);
  analogWrite(greenPin, 255);
  analogWrite(bluePin, 0);
  delay(wait);

  //Color Blue
  analogWrite(redPin, 0);
  analogWrite(greenPin, 0);
  analogWrite(bluePin, 255);
  delay(wait);

  //Color White
  analogWrite(redPin, 255);
  analogWrite(greenPin, 255);
  analogWrite(bluePin, 255);
  delay(wait);
  
  //Color Purple
  analogWrite(redPin, 170);
  analogWrite(greenPin, 0);
  analogWrite(bluePin, 255);
  delay(wait);

}

