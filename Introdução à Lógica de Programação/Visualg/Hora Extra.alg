algoritmo "Hora_Extra"
var:
s,semana,d,t,h: real
q,x,v,vt: real
inicio

escreva ("Digite o seu salario: ")
leia (S)

escreva ("Quantos dias voc� trabalha por semana? ")
leia (semana)

escreva ("Quantas horas voc� trabalha por dia? ")
leia (d)

T <- 4 * semana * d

H <- S / T

escreval ("Voc� recebe R$",h,"/h")

escreva ("Digite a quantidade de horas extras feitas no m�s: ")
leia (Q)

X <- H * 1.5

V <- X * Q

escreval ("Voce recebera: R$",v)

escreval ("valor total a ser pago: ")

vt <- v+s

escreval ("R$",vt)

fimalgoritmo
