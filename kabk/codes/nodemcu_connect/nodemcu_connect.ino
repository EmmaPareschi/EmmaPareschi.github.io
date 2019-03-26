#include <ESP8266WiFi.h>  //include library

//WiFi credentials
char ssid[] = "VFNL-F52600";   // your network SSID (name) 
char pass[] = "WYNG5WT62U7B7";   // your network password

void setup()
{
  
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
  Serial.print("Connected");
 
}

void loop() {
  }
