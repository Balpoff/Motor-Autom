#define IN1 5
#define IN2 4
#define ENA 3

int input = 0;

void setup() {
  Serial.begin(115200);
}

void loop() {
  if (Serial.available() > 0) {
    input = Serial.parseInt();
    motor(input);
  }
}

int motor(int i) {
  digitalWrite (IN1, LOW);
  digitalWrite (IN2, HIGH);
  analogWrite(ENA, i);
}
