// code to read and activate LEDs based off sound sensor 

#define micSnsr 35
#define grn 32
#define yllw 33
#define rd 25

void setup() {
  pinMode(micSnsr, INPUT);
  pinMode(grn, OUTPUT);
  pinMode(yllw, OUTPUT);
  pinMode(rd, OUTPUT);
  Serial.begin(115200);
}

void loop() {
  int mic =analogRead(micSnsr);
  Serial.println(mic);
  bool gf = false;
  bool yf = false;
  bool rf = false;

  if (mic < 1000){
    gf = true;
  }
  if (mic >1500){
    yf = true;
  }
  if (mic > 2500){
    rf = true;
  }

  if (rf){
    digitalWrite(yllw, LOW);
    digitalWrite(grn, LOW);
    digitalWrite(rd, HIGH);
    if (mic > 3000){
      for (int i=0; i<40; i++){
        digitalWrite(rd, HIGH);
        delay(250);
        digitalWrite(rd, LOW);
        delay(250);
      }
    }
  }
  else if (yf){
    digitalWrite(grn, HIGH);
    digitalWrite(rd, LOW);
    digitalWrite(yllw, HIGH);
    rf = false;
    delay(1000);

  }
  else if (gf){
    digitalWrite(yllw, LOW);
    digitalWrite(rd, LOW);
    digitalWrite(grn, HIGH);
    yf = false;
    rf = false;

  }



}
