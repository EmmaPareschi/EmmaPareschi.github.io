#include <ESP8266WiFi.h> //Including library to use esp8266
#include "ThingSpeak.h"   //Including library to send data to thingspeak

//WiFi credentials
char ssid[] = "VFNL-F52600";   // your network SSID (name) 
char pass[] = "WYNG5WT62U7B7";   // your network password

WiFiClient  client;

//ThingSpeak credentials credentials
unsigned long myChannelNumber = 739610;
char myWriteAPIKey[] = "W1ANLYD6BF60MPX2";

float data = 345;  //data that I sendf to thingspeak
int wait = 20000; // Time between two uplinks

void setup() {
 
  Serial.begin(9600);
  Serial.println();

  WiFi.begin(ssid, pass);

  Serial.print("Connecting");
    
  while (WiFi.status() != WL_CONNECTED)
    {
      delay(500);
      Serial.print(".");
      }
    
    Serial.println(); 
    Serial.println("\nConnected.");
    
  ThingSpeak.begin(client);  //Initialize ThingSpeak

}

void loop() {

  // set the ThingSpeak fields with the values
  ThingSpeak.setField(1, data);

  // send uplink
  ThingSpeak.writeFields(myChannelNumber, myWriteAPIKey);

  // wait before the next measurment
  delay(wait);

}
