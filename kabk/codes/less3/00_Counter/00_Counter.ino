/*
Emma Pareschi October 2018
I count the times the push button is pressed
 */

// this constant won't change:
const int  buttonPin = A0;    // the pin that the pushbutton is attached to

// Variables will change:
int buttonPushCounter = 0;   // counter for the number of button presses
int buttonState = 0;         // current state of the button
int lastButtonState = 1;     // previous state of the button

void setup() {
  // initialize the button pin as a input:
  pinMode(buttonPin, INPUT_PULLUP);
  // initialize serial communication:
  Serial.begin(9600);
}

void loop() {
  
  // read the pushbutton input pin:
  buttonState = digitalRead(buttonPin);

  // compare the buttonState to its previous state
  if (buttonState != lastButtonState) {
    
    // if the state has changed
      buttonPushCounter = buttonPushCounter + 1;   
               
    // Delay a little bit to avoid bouncing
    delay(50);
  }


  Serial.print("Counter: ");
  Serial.println(buttonPushCounter);

  lastButtonState = buttonState;

}









