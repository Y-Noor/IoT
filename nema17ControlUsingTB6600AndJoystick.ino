#define x 25
#define y 26
#define btn 27
const int stepPin = 32; 
const int dirPin = 33; 





void setup() {
  pinMode(stepPin,OUTPUT); 
  pinMode(dirPin,OUTPUT);

  pinMode(x,INPUT);
  pinMode(y,INPUT);
  pinMode(btn,INPUT);


  Serial.begin(115200);

}

void loop() {

  int xval = analogRead(x) - 1850;
  int yval = analogRead(y) - 1870;
  int btnval = analogRead(btn);

  
  if (btnval == 0){
    Serial.println("pressed!")
  }
  if (xval>2000){
  Serial.println("x: ");
  Serial.println(xval);
  }
  if (yval>2000){
  digitalWrite(dirPin,HIGH); // Enables the motor to move in a particular direction
  digitalWrite(stepPin,HIGH); 
  delayMicroseconds(50); 
  digitalWrite(stepPin,LOW); 
  delayMicroseconds(50); 
  }

  if (xval<-1800){
  Serial.println("x: ");
  Serial.println(xval);
  }

  if (yval<-1800){
  digitalWrite(dirPin,LOW); // Enables the motor to move in a particular direction
  digitalWrite(stepPin,HIGH); 
  delayMicroseconds(50); 
  digitalWrite(stepPin,LOW); 
  delayMicroseconds(50); 
  }



}
