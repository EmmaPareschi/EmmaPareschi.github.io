
 int led_pin = 3; //led pin
 int pot_pin = A0; //define the pin of the potentiometer

 int pot_value = 0; //variable to save the pot values

void setup() {
  // put your setup code here, to run once:
  pinMode(pot_pin, INPUT);
  pinMode(led_pin, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  pot_value = analogRead(pot_pin); //read the pot
  
  pot_value = map(pot_value, 0, 1023, 0, 255); //map the values

  analogWrite(led_pin, pot_value); //light on the led

  

}
