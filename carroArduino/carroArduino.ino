int wheel1 = 8;
int wheel2 = 9;
int wheel3 = 10;
int wheel4 = 11;

const int trigPin = 13;
const int echoPin = A0;

void setup() {
  // put your setup code here, to run once:
  pinMode(wheel1, OUTPUT);
  pinMode(wheel2, OUTPUT);
  pinMode(wheel3, OUTPUT);
  pinMode(wheel4, OUTPUT);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  driveAndtSop();
}

void driveAndtSop() {
  digitalWrite(trigPin, HIGH);

  // Lê o tempo que o pulso levou pra voltar
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Calcula a distância em cm
  long duracao = pulseIn(echoPin, HIGH);
  float distancia = duracao * 0.034 / 2;

  if(distancia < 100)
  {
    digitalWrite(wheel1, LOW);
    digitalWrite(wheel2, LOW);

    digitalWrite(wheel3, LOW);
    digitalWrite(wheel4, LOW);
  }
  else
  {
    digitalWrite(wheel1, LOW);
    digitalWrite(wheel2, HIGH);

    digitalWrite(wheel3, LOW);
    digitalWrite(wheel4, HIGH);
  }

  delay(100);
}