algoritmo "Divisão com resto"

var
a,b,r: inteiro
q: real
inicio

escreva ("Digite um numerador: ")
leia (a)

escreva ("Digite um denominador: ")
leia (b)

se (a < b) entao
   escreval ("Essa divisão não possuirá resto")
   se (b=0)  entao
      escreval ("impossível dividir")
   fimse
senao

   r <- a % b
   q <- (a-r) / b

   se (r=0) entao
      q <- a/b
      escreval ("O quociente é: ",q," e o resto é: ",r)
      escreval ("Logo,",a," é multiplo de",b)
   senao
      escreval ("O quociente é: ",q," e o resto é: ",r)
   fimse
fimse

fimalgoritmo
