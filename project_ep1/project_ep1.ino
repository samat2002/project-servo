#define BLYNK_TEMPLATE_ID "TMPL6DiJWS9TC"
#define BLYNK_TEMPLATE_NAME "project"

#define BLYNK_FIRMWARE_VERSION        "0.1.0"

#define BLYNK_PRINT Serial

#define APP_DEBUG

#include "BlynkEdgent.h"

#include <ESP32Servo.h>
Servo myservo2;
Servo myservo3;
Servo myservo4;

BLYNK_WRITE(V0){
  myservo2.write(param.asInt());
  myservo3.write(param.asInt());
  myservo4.write(param.asInt());
}
BLYNK_WRITE(V2){
  myservo2.write(0);
  delay(1000);
  myservo2.write(90);
}
BLYNK_WRITE(V3){
  myservo3.write(0);
  delay(1000);
  myservo3.write(90);
}
BLYNK_WRITE(V4){
  myservo4.write(0);
  delay(1000);
  myservo4.write(90);
}

void setup()
{
  myservo2.attach(4); // D4 (กำหนดขาควบคุม Servo)
  myservo3.attach(12); // D12 (กำหนดขาควบคุม Servo)
  myservo4.attach(14); // D14 (กำหนดขาควบคุม Servo)
  Serial.begin(9600);
  delay(100);
  BlynkEdgent.begin();
}

void loop() {
  BlynkEdgent.run();
}
