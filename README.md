# cte_planck
Determinar a constante de planck experimentalmente com Arduino 

- Duas Ideias

![i)](https://github.com/SageScroll18144/cte_planck#ideia-inicial) A primeira ideia que motivou esse projeto: Utilizar as equações de eletrodinâmica para determinar a constante. 

![ii)](https://github.com/SageScroll18144/cte_planck#ideia-atual) A Atual e mais promissora: Utilizar as equações clássicas para determinar a constante.

## Ideia inicial

- A principal ideia é utilizar as seguintes equações: 

```
-> E = cte_planck * f = P * T = i * U * T

-> i * U * T = cte_planck * f

-> U/R * U * T = cte_planck * f

-> U²/R * T * (1/f) = cte_planck
```

### Váriaveis
- Tensão: Obtida pelo _datasheet_ do Arduino
- Tempo/Frequência: Obtido no _datasheet_ do LED
- Resistência do LDR: Obtida no cálculo!

### Cálculo de Resistência 
- Para determinar a resistência foi implementado um divisor de tensão
![Screenshot](/imgs/calc_dvt.jpeg)

### Circuito
![Screenshot](/imgs/planck_fto.png)

#### Obs.: Falta o LED!

### Código
- O código pode ser visto: *https://github.com/SageScroll18144/cte_planck/blob/main/exp_planck/exp_planck.ino*

## Ideia Atual

- A principal ideia é utilizar as seguintes equações:

```
	   h <=> cte_planck
-------------------------------------	
-> E = h * f           | c =  λ * f |
                       |            |
-> h * f = e * Vo      | f = c / λ  |
                       |            |
-> h =  λ * e * Vo / c 
```

### Váriaveis
- e: Carga Elementar 
- c: Velocidade da Luz
- λ: Amplitude do LED
- Vo: Tensão de corte
- f: Frequência

#### Obs.: A amplitude inicialmente vai ser utilizada o valor do _datasheet_, entretanto possivelmente será implementado um espectrômetro para automatizar mais o processo
