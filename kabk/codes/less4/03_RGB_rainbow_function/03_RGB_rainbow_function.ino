/*
 * Example from: https://gist.github.com/zachflower/79df9ed5ca398264d3b6
 */


int redPin= 3;
int greenPin = 5;
int bluePin = 6;

int r = 0;
int g = 0;
int b = 0;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  Serial.begin(9600);
  
}

void loop() { 

  rainbow();
  delay(2000);


}

void rainbow(){
 
  setColor(255, 0, 0);    // red
  
  setColor(0, 255, 0);    // green
  
  setColor(0, 0, 255);    // blue
  
  setColor(255, 255, 0);  // yellow
  
  setColor(80, 0, 80);    // purple
  
  setColor(0, 255, 255);  // aqua
  
  setColor(0,0,0); //off
  
}

void setColor(int red, int green, int blue) {
  while ( r != red || g != green || b != blue ) {
    if ( r < red ) r += 1;
    if ( r > red ) r -= 1;

    if ( g < green ) g += 1;
    if ( g > green ) g -= 1;

    if ( b < blue ) b += 1;
    if ( b > blue ) b -= 1;

  Serial.print(r); Serial.print(", ");
  Serial.print(g); Serial.print(", ");
  Serial.print(b); Serial.println(", ");
  
    _setColor();
    delay(10);
  }

}

void _setColor() {
  analogWrite(redPin, r);
  analogWrite(greenPin, g);
  analogWrite(bluePin, b); 
}
