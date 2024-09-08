
// NeuralMesh Solution


// Digital pin for the buzzer
#define BUZZER_PIN 2

void setup() {
  // Set the buzzer pin as OUTPUT
  pinMode(BUZZER_PIN, OUTPUT);
}

void loop() {
  // Turn on the buzzer
  digitalWrite(BUZZER_PIN, HIGH);
  delay(1000); // Buzzer on for 1 second

  // Turn off the buzzer
  digitalWrite(BUZZER_PIN, LOW);
  delay(1000); // Buzzer off for 1 second
}
