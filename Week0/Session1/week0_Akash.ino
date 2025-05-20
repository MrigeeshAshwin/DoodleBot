int pot1Pin = A0;
int pot2Pin = A1;
int buzzer1Pin = 9;
int buzzer2Pin = 10;
int buzzer3Pin = 11;
int ledPins[] = {2, 3, 4, 5, 6};
int numLeds = 5;
int rangeThird = 1023 / 3;
int currentLed = 0;
unsigned long lastLedTime = 0;

void setup() {
  pinMode(buzzer1Pin, OUTPUT);
  pinMode(buzzer2Pin, OUTPUT);
  pinMode(buzzer3Pin, OUTPUT);
  for (int i = 0; i < numLeds; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
  noTone(buzzer1Pin);
  noTone(buzzer2Pin);
  noTone(buzzer3Pin);
  for (int i = 0; i < numLeds; i++) {
    digitalWrite(ledPins[i], LOW);
  }
}

void loop() {
  int pot1Value = analogRead(pot1Pin);
  int pot2Value = analogRead(pot2Pin);

  noTone(buzzer1Pin);
  noTone(buzzer2Pin);
  noTone(buzzer3Pin);
  if (pot1Value <= rangeThird) {
    tone(buzzer1Pin, 400);
  } else if (pot1Value <= 2 * rangeThird) {
    tone(buzzer2Pin, 600);
  } else {
    tone(buzzer3Pin, 800);
  }

  long ledDelay = map(pot2Value, 0, 1023, 200, 1200);
  if (millis() - lastLedTime >= ledDelay) {
    for (int i = 0; i < numLeds; i++) {
      digitalWrite(ledPins[i], LOW);
    }
    digitalWrite(ledPins[currentLed], HIGH);
    currentLed = (currentLed + 1) % numLeds;
    lastLedTime = millis();
  }
  delay(50);
}

//https://www.tinkercad.com/things/8T0dPmAtyuN/editel?sharecode=GByOTSyvHZt8IiNdjNkVdkCTJK3n3c9wj3OrnOYmbQE