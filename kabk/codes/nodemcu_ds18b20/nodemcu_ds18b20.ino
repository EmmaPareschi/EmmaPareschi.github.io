// Include the libraries we need
#include <OneWire.h>
#include <DallasTemperature.h>

// Data wire is plugged into port D4 of NodeMCU v2 (GPIO2)
#define ONE_WIRE_BUS 2

// Setup a oneWire instance to communicate with any OneWire devices
OneWire oneWire(ONE_WIRE_BUS);

// Pass our oneWire reference to Dallas Temperature. 
DallasTemperature sensors(&oneWire);

void setup(void)
{
  // start serial port
  Serial.begin(9600);

  // Start up the library
  sensors.begin();
}

void loop(void)
{ 

  // Send the command to get temperatures
  sensors.requestTemperatures();

  float tempC = sensors.getTempCByIndex(0);
  
    Serial.print("Temperature: ");
    Serial.println(tempC);

  delay(2000);
}
