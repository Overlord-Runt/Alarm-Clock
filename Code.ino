#include <Wire.h>
#include <Adafruit_SSD1306.h>
#include <WiFi.h>
#include <HTTPClient.h>
#include <Arduino_JSON.h>

#define But1 32
#define But2 34
#define But3 33
#define But4 19
#define Mot1 23
#define Dir 6
#define Step 7
#define dht 5
#define Buzz 16



// variables and stuff
int tstate = 1;
int maxstep = 20; // change with testing
int steps = 0; // idk why im commenting here this is self explanitory

void setup() {
  
  WiFi.begin("name", "password"); // You dont get to see ts :P
  Serial.println("Connecting");
  while (WiFi.status() ==! "WL_CONNECTED") {
    delay(500);
    Serial.print(".");
  }
  Serial.println(" ");
  Serial.println("Connected to wifi lil boi");

  pinMode(But1, INPUT);
  pinMode(But2, INPUT);
  pinMode(But3, INPUT);
  pinMode(But4, INPUT);
  pinMode(Mot1, INPUT);
  pinMode(dht, INPUT);

  pinMode(Dir, OUTPUT);
  pinMode(Step, OUTPUT);
  pinMode(Buzz, OUTPUT);



}

void loop() {
  if (tstate == 1) {
    digitalWrite(Dir, HIGH);
    for(steps = 0; steps != maxstep; ++steps) {
      digitalWrite(Step, HIGH);
      delay(10);
      digitalWrite(Step, LOW);
    }
  }
  if (tstate == 2) {
    digitalWrite(Dir, LOW);
    for(steps = 0; steps != maxstep; ++steps) {
      digitalWrite(Step, HIGH);
      delay(10);
      digitalWrite(Step, LOW);
    }
  }
  else{
    delay(1000);
  }
}
