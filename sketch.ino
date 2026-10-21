const int led = 32;

// Tiempos en milisegundos
int tiempoEncendido = 1000;
int tiempoApagado = 500;

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  digitalWrite(led, HIGH);      // Enciende el LED
  delay(tiempoEncendido);

  digitalWrite(led, LOW);       // Apaga el LED
  delay(tiempoApagado);
}
