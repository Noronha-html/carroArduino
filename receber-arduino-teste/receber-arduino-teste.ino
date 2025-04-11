#define led 13

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  digitalWrite(led, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available() > 0)
  {
    char letter = Serial.read();
    if(letter == "A")
    {
      digitalWrite(led, HIGH);
    }
    else if(letter == "a")
    {
      digitalWrite(led, LOW);
    }
  }
}
