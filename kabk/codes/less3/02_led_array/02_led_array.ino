

int pin_led_1 = 2;
int pin_led_2 = 3;
int pin_led_3 = 4;
int pin_led_4 = 5;
int pin_led_5 = 6;
int pin_led_6 = 7;

void setup() {
  // iniztialize all the pins
  pinMode(pin_led_1, OUTPUT);
  pinMode(pin_led_2, OUTPUT);
  pinMode(pin_led_3, OUTPUT);
  pinMode(pin_led_4, OUTPUT);
  pinMode(pin_led_5, OUTPUT);
  pinMode(pin_led_6, OUTPUT);
}

void loop() {
  // turn on all the LEDs
  digitalWrite(pin_led_1, HIGH);
  digitalWrite(pin_led_2, HIGH);
  digitalWrite(pin_led_3, HIGH);
  digitalWrite(pin_led_4, HIGH);
  digitalWrite(pin_led_5, HIGH);
  digitalWrite(pin_led_6, HIGH);

  delay(1000); //wait 1 second
  
  // turn on all the LEDs 
  digitalWrite(pin_led_1, LOW);
  digitalWrite(pin_led_2, LOW);
  digitalWrite(pin_led_3, LOW);
  digitalWrite(pin_led_4, LOW);
  digitalWrite(pin_led_5, LOW);
  digitalWrite(pin_led_6, LOW);

  delay(1000); //wait 1 second

}
