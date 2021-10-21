# cte_planck
Uma _tentativa_ de determinar a constante de planck experimentalmente com Arduino _rsrsrs_

## Ideia inicial

- A principal ideia é utilizar as seguintes equações: 

```
-> E = cte_planck * f = P * T = i * U * T

-> i * U * T = cte_planck * f

-> U/R * U * T = cte_planck * f

-> U²/R * T * (1/f) = cte_planck
```

## Váriaveis
- Tensão: Obtida pelo _datasheet_ do Arduino
- Tempo/Frequência: Obtido no _datasheet_ do LED
- Resistência do LDR: Obtida no cálculo!

## Cálculo de Resistência 
- Para determinar a resistência foi implementado um divisor de tensão
![Screenshot](/imgs/calc_dvt.jpeg)

## Circuito
![Screenshot](/imgs/planck_fto.png)

#### Obs.: Falta o LED!

## Código
- O código pode ser visto: *https://github.com/SageScroll18144/cte_planck/blob/main/exp_planck/exp_planck.ino*
