
int pirPin = D2; // Define o pino conectado ao sensor PIR.
int val; // Armazena o estado lido pelo sensor.

void setup() {
  Serial.begin(9600); 
}

void loop() {
  val = digitalRead(pirPin); // Lê o estado do sensor PIR.

  if (val == LOW) {
    Serial.println("No motion"); // Se não houver movimento, printa "No motion".
  } else {
    Serial.println("Motion detected  ALARM"); // Se detectar movimento, printa "Motion detected ALARM".
  }

  delay(100); // Aguarda 100 milissegundos antes de repetir.
}

