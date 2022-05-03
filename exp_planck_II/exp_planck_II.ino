#define e 1.6*pow(10, -19)
#define c 3*1e8
#define lambda 123 //variavel vai dx de existir
#define Rled 150
#define Iled 20 * pow(10,-3)

#define lim_ft 110 //quando o led já estiver bom baixa luminosidade
#define T_lim -(Rled* Iled - 5)

const int led = A0;
const int ldr = A1;

int init_value_ldr;

int getVo(){
  boolean isOn = false;
  int analog_value;
  
  while(!isOn){
    for(int i=init_value_ldr;i<1024;i+=10){
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

double cte_planck(){
  return lambda * e * getVo() / c; 
}

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  init_value_ldr = analogRead(ldr);
}

void loop() {
  Serial.println(c, 21);
}
