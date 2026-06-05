const int Trig = 9;
const int Echo = 10;
const int red_led =4;
const int green_led = 5;
const int blue_led= 6;

const int red_distance_to_trigger = 20;

const int blue_distance_to_trigger = 35;
const int deadzone = 5;

 long getDistanceCm() {
    digitalWrite(Trig , HIGH);
    delayMicroseconds(10);
    digitalWrite(Trig , LOW);
    long duration = pulseIn(Echo, HIGH);
    if(duration == 0){
      Serial.println("Nothing detected ");
      return 999;

    }
  return duration/58;
  }

void setup() {
  pinMode(Trig, OUTPUT);
  pinMode(Echo, INPUT);
  pinMode(red_led, OUTPUT);
  pinMode(green_led, OUTPUT);
  pinMode(blue_led, OUTPUT);

}

void loop() {
  long distance = getDistanceCm();
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.print("cm");

  if (distance <= red_distance_to_trigger){
    digitalWrite(red_led , HIGH);
  
  }else if (distance >= blue_distance_to_trigger){
    digitalWrite(blue_led, HIGH);
    
  delay(100);  
  } 
  
 

}
