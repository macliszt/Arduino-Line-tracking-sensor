//Arduino line detector

//Define the pins
#define line 13
#define blue 5
#define buzz 6
#define red 4
int val;
void setup() {
  Serial.begin(9600);
  pinMode(line, INPUT);
  pinMode(buzz, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
}

void loop() {
  val = digitalRead(line);
  Serial.println(val);

//  The Sensor reads "0" when it detects a white line 
 if (val == 0){
  tone(buzz,450);
  digitalWrite(red,HIGH);
  digitalWrite(blue,LOW);
 }
// The sensor reads "1" when it detects black line
 else{ 
  noTone(buzz);
  digitalWrite(red,LOW);
  digitalWrite(blue,HIGH);
 }
 delay(500);
}
