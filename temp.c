void setup() {
   pinMode(A1, INPUT);
   Serial.begin(9600);
}

void loop() {
   float temp = analogRead(A1) / 1023.0 * 5.0 * 100.0;
   //Serial.println("temperature: " + to_string(temp));
   delay(1000);
}
