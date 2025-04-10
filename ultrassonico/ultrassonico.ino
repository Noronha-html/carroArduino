const int trigPin = 12;
const int echoPin = A0;
const int buzzer = 8;

void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  // Envia um pulso de 10 microssegundos no TRIG
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Lê o tempo que o pulso levou pra voltar
  long duracao = pulseIn(echoPin, HIGH);

  // Calcula a distância em cm
  float distancia = duracao * 0.034 / 2;

  if(distancia > 0 && distancia < 500)
  {
    digitalWrite(buzzer, HIGH);
  }
  else
  {
    digitalWrite(buzzer, LOW);
  }

  // Mostra no Serial Monitor
  Serial.print("Distância: ");
  Serial.print(distancia);
  Serial.println(" cm");

  delay(500);
}