algoritmo "Hora_Extra"
var:
s,semana,d,t,h: real
q,x,v,vt: real
inicio

escreva ("Digite o seu salario: ")
leia (S)

escreva ("Quantos dias você trabalha por semana? ")
leia (semana)

escreva ("Quantas horas você trabalha por dia? ")
leia (d)

T <- 4 * semana * d

H <- S / T

escreval ("Você recebe R$",h,"/h")

escreva ("Digite a quantidade de horas extras feitas no mês: ")
leia (Q)

X <- H * 1.5

V <- X * Q

escreval ("Voce recebera: R$",v)

escreval ("valor total a ser pago: ")

vt <- v+s

escreval ("R$",vt)

fimalgoritmo
