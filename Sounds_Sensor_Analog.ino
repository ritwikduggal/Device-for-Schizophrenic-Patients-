const int sound_input = A1;
void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println(analogRead(sound_input))0;

}
