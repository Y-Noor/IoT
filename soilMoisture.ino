#define moisture 4     

void setup() {
  Serial.begin(115200);

  pinMode(moisture, INPUT);

}

void loop() {
  float moistureVal = analogRead(moisture);
  delay(500);
  Serial.println(moistureVal);

}