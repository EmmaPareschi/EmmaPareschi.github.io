/* Emma Pareschi
 *  2.10.2018
 *  control intensity of led on pin 3
 */

int led_pin = 3; //define pin variable

void setup() {
  // put your setup code here, to run once:
  
  pinMode(led_pin, OUTPUT); //define pin

}

void loop() {
  // put your main code here, to run repeatedly:

  analogWrite(led_pin, 255); //led on, max
  delay(100);
  analogWrite(led_pin, 127); // led on, midium light
  delay(100);
  analogWrite(led_pin, 0); //led off
  delay(100);

}
