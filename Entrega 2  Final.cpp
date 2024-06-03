//Nessa versão preliminar só consegui criar essas duas funções com ajuda do copilot para rodarem no projeto do tinkercad, sendo necessário repetir a função para cada entrada e saída correspondente
void setup() {
  pinMode(10, INPUT_PULLUP);
  pinMode(11, INPUT_PULLUP);
  pinMode(12, INPUT_PULLUP);
  pinMode(13, INPUT_PULLUP);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);

  Serial.begin(9600);
}

void loop () {
  // Converta a leitura para temperatura em graus Celsius
  float tensao1 = analogRead(A1) * 5.0 / 1023.0;
  float temperaturaCelsius1 = (tensao1 - 0.5) * 100.0;

  // Exiba a temperatura no monitor serial
  Serial.print("Temperatura (°C): ");
  Serial.println(temperaturaCelsius1);

  // Acenda o LED se a temperatura for superior a um limite
  if (temperaturaCelsius1 > 23.0) {
    digitalWrite(1, HIGH);
  } else {
    digitalWrite(1, LOW);
  }

  delay(1000); // Aguarde 1 segundo antes de fazer a próxima leitura

  // Converta a leitura para temperatura em graus Celsius
  float tensao2 = analogRead(A2) * 5.0 / 1023.0;
  float temperaturaCelsius2 = (tensao2 - 0.5) * 100.0;

  // Exiba a temperatura no monitor serial
  Serial.print("Temperatura (°C): ");
  Serial.println(temperaturaCelsius2);

  // Acenda o LED se a temperatura for superior a um limite
  if (temperaturaCelsius2 > 23.0) {
    digitalWrite(2, HIGH);
  } else {
    digitalWrite(2, LOW);
  }

  delay(1000); // Aguarde 1 segundo antes de fazer a próxima leitura

  // Converta a leitura para temperatura em graus Celsius
  float tensao3 = analogRead(A3) * 5.0 / 1023.0;
  float temperaturaCelsius3 = (tensao3 - 0.5) * 100.0;

  // Exiba a temperatura no monitor serial
  Serial.print("Temperatura (°C): ");
  Serial.println(temperaturaCelsius3);

  // Acenda o LED se a temperatura for superior a um limite
  if (temperaturaCelsius3 > 23.0) {
    digitalWrite(3, HIGH);
  } else {
    digitalWrite(3, LOW);
  }

  delay(1000); // Aguarde 1 segundo antes de fazer a próxima leitura
  // Converta a leitura para temperatura em graus Celsius
  float tensao4 = analogRead(A4) * 5.0 / 1023.0;
  float temperaturaCelsius4 = (tensao4 - 0.5) * 100.0;

  // Exiba a temperatura no monitor serial
  Serial.print("Temperatura (°C): ");
  Serial.println(temperaturaCelsius4);

  // Acenda o LED se a temperatura for superior a um limite
  if (temperaturaCelsius4 > 23.0) {
    digitalWrite(4, HIGH);
  } else {
    digitalWrite(4, LOW);
  }

  delay(1000); // Aguarde 1 segundo antes de fazer a próxima leitura

  // Converta a leitura para temperatura em graus Celsius
  float tensao5 = analogRead(A5) * 5.0 / 1023.0;
  float temperaturaCelsius5 = (tensao5 - 0.5) * 100.0;

  // Exiba a temperatura no monitor serial
  Serial.print("Temperatura (°C): ");
  Serial.println(temperaturaCelsius5);

  // Acenda o LED se a temperatura for superior a um limite
  if (temperaturaCelsius5 > 23.0) {
    digitalWrite(5, HIGH);
  } else {
    digitalWrite(5, LOW);
  }

  delay(1000); // Aguarde 1 segundo antes de fazer a próxima leitura

  // Verifica se o interruptor está pressionado
  if (digitalRead(10) == HIGH) {
    digitalWrite(6, HIGH); // Acende o LED
  } else {
    digitalWrite(6, LOW); // Desliga o LED
  }
  delay(1000); // Aguarde 1 segundo antes de fazer a próxima leitura

  // Verifica se o interruptor está pressionado
  if (digitalRead(11) == HIGH) {
    digitalWrite(7, HIGH); // Acende o LED
  } else {
    digitalWrite(7, LOW); // Desliga o LED
  }
  delay(1000); // Aguarde 1 segundo antes de fazer a próxima leitura

  // Verifica se o interruptor está pressionado
  if (digitalRead(12) == HIGH) {
    digitalWrite(8, HIGH); // Acende o LED
  } else {
    digitalWrite(8, LOW); // Desliga o LED
  }
  delay(1000); // Aguarde 1 segundo antes de fazer a próxima leitura

  // Verifica se o interruptor está pressionado
  if (digitalRead(13) == HIGH) {
    digitalWrite(9, HIGH); // Acende o LED
  } else {
    digitalWrite(9, LOW); // Desliga o LED
  }
  delay(1000); // Aguarde 1 segundo antes de fazer a próxima leitura
}

