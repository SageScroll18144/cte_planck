#define e 1.6*pow(10, -19)
#define c 3*1e8
#define lim_ft 110 //quando o led já estiver bom baixa luminosidade
#define T_lim 5 //tensao máx na porta analogica(calcular de acordo com o Resistor do LED)

const int led = A0;
const int ldr = A1;

int getVo(){
  boolean isOn = false;
  int analog_value;
  
  while(!isOn){
    for(int i=0;i<1024;i+=10){
      if(isOn = analogRead(ldr) >= lim_ft) {
        analog_value = i;
        break;
      }
      analogWrite(led, i);   
      delay(1500);
    }
      
  }
  return T_lim*analog_value/1023;
}

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop() {
  Serial.println(c, 21);
}
