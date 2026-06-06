/*
 * Active Buzzer Module Test
 * Tests active buzzer with different patterns
 * 
 * Connections:
 * Active Buzzer VCC -> 5V
 * Active Buzzer GND -> GND
 * Active Buzzer Signal -> Pin 9
 */

#define ACTIVE_BUZZER 9

void setup() {
  Serial.begin(9600);
  Serial.println("Active Buzzer Test Starting...");
  
  pinMode(ACTIVE_BUZZER, OUTPUT);
  digitalWrite(ACTIVE_BUZZER, LOW);
}

void loop() {
  Serial.println("Testing Active Buzzer...");
  
  // Continuous beep
  Serial.println("Continuous beep for 2 seconds");
  digitalWrite(ACTIVE_BUZZER, HIGH);
  delay(2000);
  digitalWrite(ACTIVE_BUZZER, LOW);
  delay(1000);
  
  // Short beeps
  Serial.println("Short beeps");
  for(int i = 0; i < 5; i++) {
    digitalWrite(ACTIVE_BUZZER, HIGH);
    delay(100);
    digitalWrite(ACTIVE_BUZZER, LOW);
    delay(100);
  }
  delay(1000);
  
  // SOS pattern (... --- ...)
  Serial.println("SOS Pattern");
  // Short beeps (S)
  for(int i = 0; i < 3; i++) {
    digitalWrite(ACTIVE_BUZZER, HIGH);
    delay(200);
    digitalWrite(ACTIVE_BUZZER, LOW);
    delay(200);
  }
  delay(300);
  
  // Long beeps (O)
  for(int i = 0; i < 3; i++) {
    digitalWrite(ACTIVE_BUZZER, HIGH);
    delay(600);
    digitalWrite(ACTIVE_BUZZER, LOW);
    delay(200);
  }
  delay(300);
  
  // Short beeps (S)
  for(int i = 0; i < 3; i++) {
    digitalWrite(ACTIVE_BUZZER, HIGH);
    delay(200);
    digitalWrite(ACTIVE_BUZZER, LOW);
    delay(200);
  }
  
  delay(3000);
  
  // Rapid beeps
  Serial.println("Rapid beeps");
  for(int i = 0; i < 20; i++) {
    digitalWrite(ACTIVE_BUZZER, HIGH);
    delay(50);
    digitalWrite(ACTIVE_BUZZER, LOW);
    delay(50);
  }
  
  delay(2000);
}