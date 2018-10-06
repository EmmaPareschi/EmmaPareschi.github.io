/* read a sw connected to pin 8
 *  
 */


int sw_pin = 8; //define the pin of the sw

int sw_value = 0; //variable I use to read the switch status


void setup() {
  // put your setup code here, to run once:

  pinMode(sw_pin, INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  sw_value = digitalRead(sw_pin);
  Serial.println(sw_value);
  delay(50);

}
