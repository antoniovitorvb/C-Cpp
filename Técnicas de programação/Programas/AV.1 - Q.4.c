#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
#include<ctype.h>
#include"Pilha.h"

main(){

    setlocale(LC_ALL,"portuguese");
    
    tp_pilha Peq;
    tipo e;
    char eq[50];
    int vet[50];
    int aux,valor,resp,s;
    
    printf("\nEscreva uma equa��o de modelo Polon�s Reverso:\n   Ex.:  (Tradicional: 8/4 = 2)\n         (Polon�s Reverso: 8 4 / = 2\n\n\t");
    gets(eq);
    
    s=strlen(eq);//Para saber o tamanho da Equa��o
    
    inic_pilha(&Peq);//Peq=Pilha da Equa��o
    
    for (aux=s-1;aux>=0;aux--){
        push(&Peq,e);//Equa��o foi empilhada
        }
    while(!pilha_vazia(&Peq)){
        
        pop_n(Peq,&s); //retirar� s elementos da pilha

        isdigit(char x)=valor
        
        if (valor==0){
            if(s=='*'){
                vet[i]*vet[i-1]=resp;
                }
            if(s=='/'){
                vet[i]/vet[i-1]=resp;
                }
            if(s=='+'){
                vet[i]+vet[i-1]=resp;
                }    
            if(s=='-'){
                vet[i]-vet[i-1]=resp;    
        }else{
            for (i=o;i<s;i++){
                pop_n(Peq,&s)=vet[i]; //Salvar� os n�meros inteiros no vet
                }
            }
        }
    
    printf("\n\nResultado = %d",resp);
            
    system("pause");
    return 0;
    }
}
