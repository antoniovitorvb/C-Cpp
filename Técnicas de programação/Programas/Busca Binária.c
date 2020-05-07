#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int ordena_vet(int vet[10]){
	
	int i, j, aux;

	for (i=0;i<10;i++){
    	for (j=i+1;j<10;j++){
    		if (vet[j]<vet[i]){
	   		aux=vet[i];
	   		vet[i]=vet[j];
	   		vet[j]=aux;
			}
		}
	}
}

int buscabin(int *vet, int i, int valor){
	
	int ini,fim,meio;
	
	ini=0;
	fim=i-1;
	
	while(ini<=fim){
		meio=(ini+fim)/2;
		if(valor==vet[meio]){
			return meio;
		}else{
			if(valor<vet[meio]){
				fim=meio-1;
			}else{
				ini=meio+1;
			}
		}
	}
	return -1;
}

int main(){
	
	int vet[10],i,n,valor;
	
	setlocale(LC_ALL,"portuguese");
	
	for(i=0;i<10;i++){
		
		printf("\n\nDigite o %dº valor:  ",i+1);
		scanf("%d",&vet[i]);
		
		system("cls");
	}
	
	ordena_vet(vet);
	
	printf("\n\n");
	
	for(i=0;i<10;i++){
		printf("   %d",vet[i]);
	}
	
	printf("\n\nQual valor deseja encontrar?   ");
	scanf("%d",&n);
	
	buscabin(vet,i,valor);
	
	printf("\n	%d está na posição:   %d\n\n",n);
}
