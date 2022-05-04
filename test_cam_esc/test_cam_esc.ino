//teste na cam escura para saber o valor analogico da tensão de corte

const int ldr = A1;
const int led = A0;
const int pot = A2;
void setup() {Serial.begin(9600);}

void loop() {

  analogWrite(led, analogRead(pot));
  
  Serial.print("leitura do LDR: ");
  Serial.println(analogRead(ldr));
  Serial.print("escrita do POT: ");
  Serial.println(analogRead(led));

  delay(1000);
}
