//Nessa versão preliminar só consegui criar essas duas funções com ajuda do copilot para rodarem no projeto do tinkercad, sendo necessário repetir a função para cada entrada e saída correspondente
// Pino do sensor TMP36
const int tmp36Pin = A1;

// Pino do LED
const int ledPin = 1;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // Leitura da tensão do sensor TMP36
  int leituraTmp36 = analogRead(tmp36Pin);

  // Converta a leitura para temperatura em graus Celsius
  float tensao = leituraTmp36 * 5.0 / 1023.0;
  float temperaturaCelsius = (tensao - 0.5) * 100.0;

  // Exiba a temperatura no monitor serial
  Serial.print("Temperatura (°C): ");
  Serial.println(temperaturaCelsius);

  // Acenda o LED se a temperatura for superior a um limite
  if (temperaturaCelsius > 23.0) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }

  delay(1000); // Aguarde 1 segundo antes de fazer a próxima leitura
}
// Pino do LED
const int ledPin = 6; 

// Pino do interruptor 
const int interruptorPin = 10; 

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(interruptorPin, INPUT_PULLUP); // Configura o pino como entrada com pull-up interno
}

void loop() {
  // Verifica se o interruptor está pressionado
  if (digitalRead(interruptorPin) == LOW) {
    digitalWrite(ledPin, HIGH); // Acende o LED
  } else {
    digitalWrite(ledPin, LOW); // Desliga o LED
  }
}

