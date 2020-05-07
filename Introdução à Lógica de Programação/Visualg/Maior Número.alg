algoritmo "Maior numero"

var
a,b,c: real

inicio

escreva ("digite um número: ")
leia (a)

escreva ("digite um número: ")
leia (b)

escreva ("digite um número: ")
leia (c)

se (a>b)e(a>c) entao
   escreval (a," É maior que",b," e",c)

senao
   se (b>a)e(b>c) entao
      escreval (b," É maior que",a," e",c)
   senao
      escreval (c," É maior que",a," e",b)
   fimse
fimse

fimalgoritmo
