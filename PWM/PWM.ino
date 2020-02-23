#define PWM_Pin 5
#define LED_Pin 4
#define PM_Pin 0

int value;

void setup() {
  Serial.begin(9600);
  pinMode(PWM_Pin, OUTPUT);
  pinMode(LED_Pin, OUTPUT);
}

void loop() {
  /* настройка потенциометра */
  value = analogRead(PM_Pin);
  value = map(value, 0, 1023, 0, 255);
  constrain(value, 0, 255);
  Serial.println(value);

  /* включение ШИМ пина */
  analogWrite(PWM_Pin, value);
  delay(30);
}
