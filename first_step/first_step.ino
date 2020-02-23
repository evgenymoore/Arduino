#define LED1 2
#define LED2 3
#define BUTTON 5

void setup() {
  // put your setup code here, to run once:
  pinMode(LED1, OUTPUT); //настройка пинов в режим выхода
  //pinMode(LED1, INPUT); //настройка пинов в режим входа
  pinMode(LED2, OUTPUT);
  pinMode(BUTTON, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED1, HIGH);
  delay(500);
  digitalWrite(LED1, LOW);
  delay(500);
  //digitalWrite(LED1, LOW);
}
