#define time 2000

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.write("A");
  delay(time);
  Serial.write("a");
  delay(time);
}
