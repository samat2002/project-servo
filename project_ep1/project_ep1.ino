/*************************************************************
  Blynk is a platform with iOS and Android apps to control
  ESP32, Arduino, Raspberry Pi and the likes over the Internet.
  You can easily build mobile and web interfaces for any
  projects by simply dragging and dropping widgets.

    Downloads, docs, tutorials: https://www.blynk.io
    Sketch generator:           https://examples.blynk.cc
    Blynk community:            https://community.blynk.cc
    Follow us:                  https://www.fb.com/blynkapp
                                https://twitter.com/blynk_app

  Blynk library is licensed under MIT license
 *************************************************************
  Blynk.Edgent implements:
  - Blynk.Inject - Dynamic WiFi credentials provisioning
  - Blynk.Air    - Over The Air firmware updates
  - Device state indication using a physical LED
  - Credentials reset using a physical Button
 *************************************************************/

/* Fill in information from your Blynk Template here */
/* Read more: https://bit.ly/BlynkInject */
//#define BLYNK_TEMPLATE_ID "TMPLGI3HPtsg"
//#define BLYNK_TEMPLATE_NAME "test"
#define BLYNK_TEMPLATE_ID "TMPL6DiJWS9TC"
#define BLYNK_TEMPLATE_NAME "project"
//#define BLYNK_AUTH_TOKEN "qK6lGP2fjEhGfjlnbw_cKeh75ABhXsAb"

#define BLYNK_FIRMWARE_VERSION        "0.1.0"

#define BLYNK_PRINT Serial
//#define BLYNK_DEBUG

#define APP_DEBUG

// Uncomment your board, or configure a custom board in Settings.h
//#define USE_ESP32_DEV_MODULE
//#define USE_ESP32C3_DEV_MODULE
//#define USE_ESP32S2_DEV_KIT
//#define USE_WROVER_BOARD
//#define USE_TTGO_T7
//#define USE_TTGO_T_OI

#include "BlynkEdgent.h"

#include <ESP32Servo.h>
// Servo myservo1;
Servo myservo2;
Servo myservo3;
Servo myservo4;

BLYNK_WRITE(V0){
  // myservo1.write(param.asInt());
  myservo2.write(param.asInt());
  myservo3.write(param.asInt());
  myservo4.write(param.asInt());
}
// BLYNK_WRITE(V1){
//   myservo1.write(90);
//   delay(1000);
//   myservo1.write(180);
//   delay(1000);
// //  myservo1.write(0);
// //  delay(1000);
//   myservo1.write(90);
// }
BLYNK_WRITE(V2){
  // myservo2.write(90);
  // delay(1000);
  myservo2.write(0);
  delay(1000);
  myservo2.write(90);
}
BLYNK_WRITE(V3){
  //myservo3.write(90);
  // delay(1000);
  myservo3.write(0);
  delay(1000);
  myservo3.write(90);
}
BLYNK_WRITE(V4){
  // myservo4.write(90);
  // delay(1000);
  myservo4.write(0);
  delay(1000);
  myservo4.write(90);
}

void setup()
{
  // myservo1.attach(2); // D2 (กำหนดขาควบคุม Servo)
  myservo2.attach(4); // D4 (กำหนดขาควบคุม Servo)
  myservo3.attach(12); // D12 (กำหนดขาควบคุม Servo)
  myservo4.attach(14); // D14 (กำหนดขาควบคุม Servo)
//  myservo2.write(90);
//  pinMode(2, OUTPUT);
  Serial.begin(9600);
  delay(100);

  BlynkEdgent.begin();
}

void loop() {
  BlynkEdgent.run();
}
