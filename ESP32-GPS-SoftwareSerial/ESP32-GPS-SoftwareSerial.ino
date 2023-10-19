#include <SoftwareSerial.h>

#define RX_PIN 15
#define TX_PIN 2

SoftwareSerial gpsSerial(RX_PIN, RX_PIN);

void setup() {
  gpsSerial.begin(9600);
  Serial.begin(9600);
}

void loop() {
  while(gpsSerial.available()){
    Serial.print((char) gpsSerial.read());
  }
}
