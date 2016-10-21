
int voltage; 

void setup() {
pinMode(A0,INPUT);
Serial.begin(9600);
Serial.println("setup");


}

void loop() {
  voltage=analogRead(A0);
  Serial.println(voltage);

  delay(100);
  
  }
  
