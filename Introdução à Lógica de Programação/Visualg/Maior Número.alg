algoritmo "Maior numero"

var
a,b,c: real

inicio

escreva ("digite um n�mero: ")
leia (a)

escreva ("digite um n�mero: ")
leia (b)

escreva ("digite um n�mero: ")
leia (c)

se (a>b)e(a>c) entao
   escreval (a," � maior que",b," e",c)

senao
   se (b>a)e(b>c) entao
      escreval (b," � maior que",a," e",c)
   senao
      escreval (c," � maior que",a," e",b)
   fimse
fimse

fimalgoritmo
