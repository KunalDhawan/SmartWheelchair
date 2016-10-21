int a0,a1,a2,a3,a4,a5;

void setup() {
pinMode(A0,INPUT);
pinMode(A1,INPUT);
pinMode(A2,INPUT);
pinMode(A3,INPUT);
pinMode(A4,INPUT);
pinMode(A5,INPUT);
Serial.begin(9600);
Serial.println("setup");  
  // put your setup code here, to run once:

}

void loop() {
a0=analogRead(A0);
a1=analogRead(A1);
a2=analogRead(A2);
a3=analogRead(A3);
a4=analogRead(A4);
a5=analogRead(A5);
Serial.println("a0");
Serial.println(a0);
Serial.println("a1");
Serial.println(a1);
Serial.println("a2");
Serial.println(a2);
Serial.println("a3");
Serial.println(a3);
Serial.println("a4");
Serial.println(a4);
Serial.println("a5");
Serial.println(a5);


  delay(100);  
  
  
  
  
  // put your main code here, to run repeatedly:

}
