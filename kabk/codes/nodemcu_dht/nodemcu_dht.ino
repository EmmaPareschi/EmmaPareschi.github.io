#include <DHT.h>  // Including library for dht

#define DHTPIN 5          //pin where the dht11 is connected
DHT dht(DHTPIN, DHT11);   //create an object dht, define pin and model

float temp = 0;   //variable where to save temperture
float hum = 0;    //variable where to save humidity

int wait = 1000;

void setup() {  
  
  Serial.begin(9600);  // Initialize serial
  dht.begin();          //Initialize DHT

}

void loop() {

     temp = dht.readTemperature();  //save the temperature in the variable temp
     hum = dht.readHumidity();      //save the humidity in the variable hum

     Serial.print("Temperature: "); Serial.print(temp); Serial.println(" °C"); //print on serial temperature
     Serial.print("Humidity: "); Serial.print(hum); Serial.println(" %");      //print on serial humidity
     Serial.println("");
      
     delay(wait);

}
