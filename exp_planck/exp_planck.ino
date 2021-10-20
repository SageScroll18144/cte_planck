#include <math.h>

#define ll long long

#define DDP 5
#define R_dvt 2200
#define pinR_dvt A0

double R_LDR;

//Definições do LED Utilizado

ll int freq = pow(10, 4);

double cte_planck;

void setup() {Serial.begin(9600);}

void loop() {   
  R_LDR = (DDP*R_dvt/(analogRead(pinR_dvt)*(5/1023))) - R_dvt;
  
  cte_planck = pow(DDP, 2) * (1/R_LDR) * pow((1/freq), 2);
  
  Serial.println(cte_planck);
  Serial.println(R_LDR);
  
}
