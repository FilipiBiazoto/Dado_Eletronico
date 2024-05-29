// C++ code
//
int aleatorio = 0;

void setup()
{
  pinMode(1, INPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop()
{
  if (digitalRead(1) == HIGH) {
    digitalWrite(2, HIGH);
    delay(100); // Wait for 1000 millisecond(s)
    digitalWrite(3, HIGH);
    delay(100); // Wait for 1000 millisecond(s)
    digitalWrite(2, LOW);
    delay(100); // Wait for 1000 millisecond(s)
    digitalWrite(5, HIGH);
    delay(100); // Wait for 1000 millisecond(s)
    digitalWrite(3, LOW);
    delay(100); // Wait for 1000 millisecond(s)
    digitalWrite(6, HIGH);
    delay(100); // Wait for 1000 millisecond(s)
    digitalWrite(5, LOW);
    delay(100); // Wait for 1000 millisecond(s)
    digitalWrite(7, HIGH);
    delay(100); // Wait for 1000 millisecond(s)
    digitalWrite(6, LOW);
    delay(100); // Wait for 1000 millisecond(s)
    digitalWrite(8, HIGH);
    delay(100); // Wait for 1000 millisecond(s)
    digitalWrite(7, LOW);
    delay(100); // Wait for 1000 millisecond(s)
    digitalWrite(8, LOW);
    delay(100); // Wait for 1000 millisecond(s)
    aleatorio = random(1, 6 + 1);
    if (aleatorio == 1) {
      digitalWrite(2, LOW);
      digitalWrite(3, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      digitalWrite(9, LOW);
      delay(5000); // Wait for 5000 millisecond(s)
    }
    if (aleatorio == 2) {
      digitalWrite(2, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(5, LOW);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(8, LOW);
      digitalWrite(9, HIGH);
      delay(5000); // Wait for 5000 millisecond(s)
    }
    if (aleatorio == 3) {
      digitalWrite(2, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      digitalWrite(9, HIGH);
      delay(5000); // Wait for 5000 millisecond(s)
    }
    if (aleatorio == 4) {
      digitalWrite(2, LOW);
      digitalWrite(3, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(8, HIGH);
      digitalWrite(9, HIGH);
      delay(5000); // Wait for 5000 millisecond(s)
    }
    if (aleatorio == 5) {
      digitalWrite(2, HIGH);
      digitalWrite(3, LOW);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, LOW);
      digitalWrite(8, HIGH);
      digitalWrite(9, HIGH);
      delay(5000); // Wait for 5000 millisecond(s)
    }
    if (aleatorio == 6) {
      digitalWrite(2, HIGH);
      digitalWrite(3, LOW);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(9, HIGH);
      delay(5000); // Wait for 5000 millisecond(s)
    }
  } else {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    delay(1000); // Wait for 1000 millisecond(s)
  }
}
