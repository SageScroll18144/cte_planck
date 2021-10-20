# cte_planck
Uma *tentativa* de determinar a constante de planck experimentalmente com Arduino rs

## Ideia inicial

- A principal ideia é utilizar as seguintes equações: 

```
* E = cte_planck * (1/T) = P * T = i * U * T

-> i * U * T = cte_planck * (1/T)

-> U/R * U * T = cte_planck * (1/T)

-> U²/R * T² = cte_planck
```

## Cálculo de Resistência 
- Para determinar a resistência foi implementado um divisor de tensão
![Screenshot](/imgs/calc_dvt.jpeg)

## Circuito
![Screenshot](/imgs/planck_fto.png)

#### Obs.: Falta o LED!

## Código
