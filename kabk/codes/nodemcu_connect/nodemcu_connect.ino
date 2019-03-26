#include <ESP8266WiFi.h>  //include library

//WiFi credentials
char ssid[] = "WiFi Network";   // your network SSID (name) 
char pass[] = "Password";   // your network password

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
