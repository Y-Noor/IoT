#define forcePin 25

void setup() {
  pinMode(forcePin, INPUT);
  Serial.begin(115200);
}


void loop() {
  float forceVal = analogRead(forcePin);
  Serial.println(forceVal);
  delay(1000);
}
