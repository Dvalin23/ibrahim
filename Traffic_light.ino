const int red1 = 2;
const int green1 = 3;
const int  blue1= 4;

//const int red2= 5;
//const int yellow2 = 6;
//const int green2= 7;



void setup() {
  pinMode(red1, OUTPUT);
  pinMode(blue1, OUTPUT);
  pinMode(green1, OUTPUT);
  //pinMode(red2, OUTPUT);
  //pinMode(yellow2, OUTPUT);
  //pinMode(green2, OUTPUT);
   

}

void loop() {
  digitalWrite( green1, HIGH);
  digitalWrite( red1, HIGH);
  digitalWrite( blue1, HIGH);
  delay(1000);

  digitalWrite(green1, HIGH);
  digitalWrite( blue1, LOW);
  digitalWrite( red1, LOW);
  delay(1000);

  digitalWrite(red1, HIGH);
  digitalWrite(green1, LOW);
  digitalWrite( blue1, LOW);
  delay(1000);

  digitalWrite(blue1, HIGH);
  digitalWrite(red1, LOW);
  digitalWrite( green1, LOW);
  delay(1000);

  digitalWrite(red1, HIGH);
  digitalWrite( blue1, LOW);
  digitalWrite( green1, LOW);
  delay(3000);
digitalWrite(blue1, HIGH);
  digitalWrite( green1, LOW);
  digitalWrite( red1, LOW);
  delay(3000);
digitalWrite(green1, HIGH);
  digitalWrite( blue1, LOW);
  digitalWrite( red1, LOW);
  delay(3000);

digitalWrite(red1, HIGH);
  digitalWrite( blue1, LOW);
  digitalWrite( green1, LOW);
  delay(500);
digitalWrite(blue1, HIGH);
  digitalWrite( green1, LOW);
  digitalWrite( red1, LOW);
  delay(500);
digitalWrite(green1, HIGH);
  digitalWrite( blue1, LOW);
  digitalWrite( red1, LOW);
  delay(500);






}
