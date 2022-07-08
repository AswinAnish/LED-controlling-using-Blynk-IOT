//Include the library files
#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

#define BLYNK_AUTH_TOKEN "AUTH_TOKEN" //Enter your blynk auth token

char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "WIFI_NAME";//Enter your WIFI name
char pass[] = "WIFI_PASS";//Enter your WIFI password

//Get the button value
BLYNK_WRITE(V0) {
  digitalWrite(D2, param.asInt());
}

void setup() {
  //Set the LED pin as an output pin
  pinMode(D2, OUTPUT);
  
  //Initialize the Blynk library'
  Blynk.begin(auth, ssid, pass, "blynk.cloud", 80);
}

void loop() {
  //Run the Blynk library
  Blynk.run();
}    
