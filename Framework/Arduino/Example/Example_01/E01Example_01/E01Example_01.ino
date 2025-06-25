/**
* 상수
*/
const int NUMBER_LED = 13;

/** 초기화 */
void setup() {
  pinMode(NUMBER_LED, OUTPUT);
}

/** 상태를 갱신한다 */
void loop() {
  digitalWrite(NUMBER_LED, HIGH);
  delay(500);

  digitalWrite(NUMBER_LED, LOW);
  delay(500);
}
