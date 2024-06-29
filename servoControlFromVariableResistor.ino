#include <ESP32Servo.h>
Servo myservo; 
int pos = 0; 

int servoPin = 25;
int res = 33;


void setup() {
  myservo.attach(servoPin);
  Serial.begin(115200);
}

  void loop() {

  float resVal = analogRead(res);
  Serial.println((resVal/4085)*180);
  myservo.write((resVal/4085)*180);
  delay(100);


}
