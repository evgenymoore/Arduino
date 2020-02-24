#define PM 0

void number(uint8_t level_2, uint8_t level_3, uint8_t level_4, 
uint8_t level_5, uint8_t level_6, uint8_t level_7, uint8_t level_8);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(PM, OUTPUT);
  //pinMode(LED, OUTPUT);
}

uint16_t value;

void loop() {
  /* настройка потенциометра */
  value = analogRead(PM);
  value = map(value, 0, 1023, 0, 9);
  constrain(value, 0, 9);
  Serial.println(value);

  /* настройка индикатора */
 /* setup number(2, 3, 4, 5, 6, 7, 8); */
  switch(value){
  case 0: number(0, 1, 1, 1, 1, 1, 1);
          break;
  case 1: number(0, 0, 0, 1, 0, 0, 1);
          break; 
  case 2: number(1, 0, 1, 1, 1, 1, 0);
          break;
  case 3: number(1, 0, 1, 1, 0, 1, 1);
          break;
  case 4: number(1, 1, 0, 1, 0, 0, 1);
          break;
  case 5: number(1, 1, 1, 0, 0, 1, 1);
          break;
  case 6: number(1, 1, 1, 0, 1, 1, 1);
          break; 
  case 7: number(0, 0, 1, 1, 0, 0, 1);
          break;
  case 8: number(1, 1, 1, 1, 1, 1, 1);
          break;
  case 9: number(1, 1, 1, 1, 0, 1, 1);
          break;                                       
  }
  delay(30);
}

void number(uint8_t level_2, uint8_t level_3, uint8_t level_4, 
uint8_t level_5, uint8_t level_6, uint8_t level_7, uint8_t level_8)
{
  digitalWrite(2, level_2);
  digitalWrite(3, level_3);
  digitalWrite(4, level_4);
  digitalWrite(5, level_5);
  digitalWrite(6, level_6);
  digitalWrite(7, level_7);
  digitalWrite(8, level_8);
}
