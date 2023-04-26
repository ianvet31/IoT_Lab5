void setup() {
   pinMode(A2, INPUT);
   pinMode(3, OUTPUT);
   pinMode(8, INPUT);
   Serial.begin(9600);
}
void loop() {
   int an = analogRead(A2);
   delay(100);
   //Serial.write("ppm: " + to_string(an));
   int dig = digitalRead(8);
   delay(100);
   if (dig == HIGH) {
     digitalWrite(3, HIGH);
   }
   else {
     digitalWrite(3, LOW);
   }
}
