int wheel1 = 8;
int wheel2 = 9;
int wheel3 = 10;
int wheel4 = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(wheel1, OUTPUT);
  pinMode(wheel2, OUTPUT);
  pinMode(wheel3, OUTPUT);
  pinMode(wheel4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(wheel1, LOW);
  digitalWrite(wheel2, HIGH);

  digitalWrite(wheel3, HIGH);
  digitalWrite(wheel4, LOW);
}