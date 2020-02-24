#define PM 0
#define LED1 9
#define LED2 10
#define LED3 11
#define LED4 12

void number_hex(uint8_t level_2, uint8_t level_3, uint8_t level_4, 
uint8_t level_5, uint8_t level_6, uint8_t level_7, uint8_t level_8);

void number_bin(uint8_t level_1, uint8_t level_2, uint8_t level_3,
uint8_t level_4); 

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(PM, OUTPUT);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
}

uint16_t value;

void loop() {
  /* настройка потенциометра */
  value = analogRead(PM);
  value = map(value, 0, 1023, 0, 15);
  constrain(value, 0, 15);
  Serial.println(value);

  /* настройка индикатора */
 /* setup number(2, 3, 4, 5, 6, 7, 8); */
  switch(value){
  case 0: number_hex(0, 1, 1, 1, 1, 1, 1);
          number_bin(0, 0, 0, 0);
          break;
  case 1: number_hex(0, 0, 0, 1, 0, 0, 1);
          number_bin(0, 0, 0, 1);
          break; 
  case 2: number_hex(1, 0, 1, 1, 1, 1, 0);
          number_bin(0, 0, 1, 0);
          break;
  case 3: number_hex(1, 0, 1, 1, 0, 1, 1);
          number_bin(0, 0, 1, 1);
          break;
  case 4: number_hex(1, 1, 0, 1, 0, 0, 1);
          number_bin(0, 1, 0, 0);
          break;
  case 5: number_hex(1, 1, 1, 0, 0, 1, 1);
          number_bin(0, 1, 0, 1);
          break;
  case 6: number_hex(1, 1, 1, 0, 1, 1, 1);
          number_bin(0, 1, 1, 0);
          break; 
  case 7: number_hex(0, 0, 1, 1, 0, 0, 1);
          number_bin(0, 1, 1, 1);
          break;
  case 8: number_hex(1, 1, 1, 1, 1, 1, 1);
          number_bin(1, 0, 0, 0);
          break;
  case 9: number_hex(1, 1, 1, 1, 0, 1, 1);
          number_bin(1, 0, 0, 1);
          break;
  case 10: number_hex(1, 1, 1, 1, 1, 0, 1);
           number_bin(1, 0, 1, 0);
           break;
  case 11: number_hex(1, 1, 0, 0, 1, 1, 1);
           number_bin(1, 0, 1, 1);
           break;
  case 12: number_hex(0, 1, 1, 0, 1, 1, 0);
           number_bin(1, 1, 0, 0);
           break;        
  case 13: number_hex(1, 0, 0, 1, 1, 1, 1);
           number_bin(1, 1, 0, 1);
           break;
  case 14: number_hex(1, 1, 1, 0, 1, 1, 0);
           number_bin(1, 1, 1, 0);
           break;
  case 15: number_hex(1, 1, 1, 0, 1, 0, 0);
           number_bin(1, 1, 1, 1);
           break;                                               
  }
  delay(30);
}

void number_hex(uint8_t level_2, uint8_t level_3, uint8_t level_4, 
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

void number_bin(uint8_t level_1, uint8_t level_2, uint8_t level_3,
uint8_t level_4)
{
  digitalWrite(LED1, level_1);
  digitalWrite(LED2, level_2);
  digitalWrite(LED3, level_3);
  digitalWrite(LED4, level_4);  
}
