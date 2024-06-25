#include <ESP32Servo.h>
Servo myservo; 
int pos = 0; 

int servoPin = 25;
int btn = 33;


void setup() {
  myservo.attach(servoPin);
  Serial.begin(115200);
}

void loop() {

  float btnval = analogRead(btn);
  Serial.println((btnval/4085)*180);
  myservo.write((btnval/4085)*180);
  delay(100);


}
