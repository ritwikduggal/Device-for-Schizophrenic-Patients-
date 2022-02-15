int PulsePin = 0;
int LED = 13;
int Signal;
int Threshold = 550;
void setup() {
  pinMode(13, OUTPUT);
  Serial.begin(9600);  
}

void loop(){
  Signal = analogRead(PulsePin);
  Serial.println(Signal);
  if(Signal > Threshold)
  {
    digitalWrite(LED, HIGH);
  }
  else {
    digitalWrite(LED, LOW);
  }
}
