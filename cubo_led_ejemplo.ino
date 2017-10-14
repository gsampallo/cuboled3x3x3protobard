void setup() {
  // put your setup code here, to run once:
    for (int i=0;i<12;i++)
    {
        pinMode(i,OUTPUT);    // PINS0-10 are set as output
    }
}

void loop() {
  for (int j=0;j<3;j++) {
    digitalWrite(j,LOW); 
    for (int i=3;i<12;i++) {
      digitalWrite(i,HIGH);  
      delay(200);
     // digitalWrite(i,LOW);  
    }
   // digitalWrite(j,HIGH); 
  }
}
