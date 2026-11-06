#include <Arduino.h> // Inclui o cabeçalho necessário para usar as funções do framework Arduino

const int sensorPin = 34; // Pino analógico do ESP32 onde o sensor está conectado

void setup() {
  Serial.begin(115200); // Inicializa a comunicação serial
  delay(1000); // Aguarda 1 segundo para estabilizar
  Serial.println("Iniciando leitura do sensor...");
}

void loop() {
  int valor = analogRead(sensorPin); // Lê o valor analógico do sensor

  // Converte o valor lido para porcentagem (0 a 100%)
  float porcentagem = (valor / 4095.0) * 100.0;

  // Exibe o valor lido e a porcentagem no monitor serial
  Serial.print("Valor do sensor: ");
  Serial.print(valor);
  Serial.print(" | Porcentagem: ");
  Serial.print(porcentagem, 2); // Exibe a porcentagem com 2 casas decimais
  Serial.println("%");

  // Aguarda 1 segundo antes de realizar a próxima leitura
  delay(1000);
}