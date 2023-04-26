Adafruit_GPS GPS;
void setup() {
  Serial.begin(9600);
}
void loop() {
  if (Serial.available() > 0) {
      string gpsreading = GPS.read();
      //Serial.println(gpsreading);
  } else {
      Serial.write("No data received");
  }
  delay(1000);
}
