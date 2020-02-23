//включение светодиода после удержания кнопки в течение 10 секунд


#define BUTTON 2
#define LED1 3
#define LED2 4
#define LED3 5

void setup() {
  // put your setup code here, to run once:
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(BUTTON, INPUT);
  Serial.begin(9600);
}

int increment = 0;

void loop() {
  // put your main code here, to run repeatedly:
  bool button_state = digitalRead(BUTTON);
  Serial.println(button_state);
  delay(500);
  if (button_state)
    increment++;
  else
    increment = 0;

  if (increment >= 5)
    digitalWrite(LED1, HIGH);
  else
    digitalWrite(LED1, LOW);
}
