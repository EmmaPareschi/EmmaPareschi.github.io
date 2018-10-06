/* Emma Pareschi
 *  2.10.2018
 *  first sketch
 *  blink led connected to pin 3
 */

int led_pin = 10; //define pin variable


void setup() {
  // put your setup code here, to run once:
  
  pinMode(led_pin, OUTPUT); //define pin

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led_pin, HIGH); // turn on Led
  delay(1000); //wait 1000ms, 1 second
  digitalWrite(led_pin, LOW); //turn off Led
  delay(1000); // wait 1sec 

}
