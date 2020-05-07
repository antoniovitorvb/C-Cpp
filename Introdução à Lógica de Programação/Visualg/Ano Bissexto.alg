algoritmo "anobissexto"

var
Y: inteiro

inicio

escreval ("Digite um ano")
leia (y)

se (((y%4=0)e(y%100<>0))ou(y%400=0)) entao
   escreval ("")
   escreval (y," é um ano bissexto")
   
senao
   escreval ("")
   escreval(y," não é um ano bissexto")

fimse

fimalgoritmo
