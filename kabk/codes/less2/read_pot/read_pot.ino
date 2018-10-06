/*
 * read the values of a potentiometer
 */

 int pot_pin = A0; //define the pin of the potentiometer

 int pot_value = 0; //variable to save the pot values

 

void setup() {
  // put your setup code here, to run once:

  pinMode(pot_pin, INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  pot_value = analogRead(pot_pin); //read the pot

  Serial.print("the value of the potentiometer is :");
  Serial.println(pot_value);  //print on serial monitor the pot value

  delay(100); //wait 100ms

}
