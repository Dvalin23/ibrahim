const int motionPin = 2;    // PIR sensor input pin
const int outputPin = 7;   // e.g., LED or Relay

void setup() {
  pinMode(motionPin, INPUT);
  pinMode(outputPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int motionState = digitalRead(motionPin);

  if (motionState == HIGH) {
    // Action when motion is detected
    digitalWrite(outputPin, HIGH);
    Serial.println("Motion detected!");
    delay(5000); // Keep output active for 5 seconds
  } else {
    // Action when no motion is present
    digitalWrite(outputPin, LOW);
  }
} 