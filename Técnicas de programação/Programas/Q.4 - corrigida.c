#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include"pilha.h"

int Q4 (char vet[]){
	
	tp_pilha peq;
	int i,x,y,z,s;
	
	s=strlen(vet);
	
	inic_pilha(&peq);
	push(&peq,y); push(&peq,x);
	
	for (i=0;i<s;i++){
		
		if(isdigit(vet[i])){
			push(&peq,vet[i]-48);
		}else{
			pop(&peq,&x); pop(&peq,&y);
			
			if(vet[i]=='+'){
				z=x+y;
				push(&peq,z);
			}
			if(vet[i]=='-'){
				z=x-y;
				push(&peq,z);
			}
			if(vet[i]=='*'){
				z=x*y;
				push(&peq,z);
			}
			if(vet[i]=='/'){
				z=x/y;
				push(&peq,z);
			}
		}
	}
}
