/*
 * I control the led with the switch
 */


int led_pin = 3; //define pin variable
int sw_pin = 8; //define the pin of the sw

int sw_value = 0; //variable I use to read the switch status

void setup() {
  // put your setup code here, to run once:
    
  pinMode(led_pin, OUTPUT); //define pin
  pinMode(sw_pin, INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  sw_value = digitalRead(sw_pin); //read the switch

  //print on serial the switch status
  Serial.print("the status of the switch is: ");
  Serial.println(sw_value);

  if (sw_value == HIGH) {
    digitalWrite(led_pin, HIGH); //if the sw not pressed => light on
  } else {
    digitalWrite(led_pin, LOW); //if sw pressed => led blinks
    delay(100);
    digitalWrite(led_pin, HIGH);
    delay(100);
  }

}
