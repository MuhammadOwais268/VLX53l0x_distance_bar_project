#include <Arduino.h>
#include <Wire.h>
#include "VLXReader.h"

VLXReader reader;

void setup() {
  Serial.begin(9600);
  Wire.begin();
  reader.begin();
}

void loop() {
  int distance = reader.getDistance();
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" mm");

  reader.displayBatteryBar(distance);
  delay(200);
}
