PulseOximeter pox;
void setup() {
  pinMode(2, INPUT);
  pinMode(3, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  if (Serial.available() > 0) {
      if (pox.begin()) {
          string oxygen = pox.getSpO2();
          string heartrate = pox.getHeartRate();
          //Serial.println("Oxygen level: " + oxygen + "; Heart rate: " + heartrate);
      }
      digitalWrite(3, HIGH);
  } else {
      Serial.println("No data");
      digitalWrite(3, LOW);
  }
  delay(1000);
}
