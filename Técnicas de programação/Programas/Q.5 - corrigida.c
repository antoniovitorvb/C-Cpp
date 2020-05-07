#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int maior (int vet[], int i){
	
	int r;
	
	if(i==0){
		return vet[0];
	}else{
		r=maior(vet,i-1);
		if(r>vet[i-1]){
			return r;
		}else{
			return vet[i-1];
		}
	}
}

int main(){
	
	setlocale(LC_ALL,"portuguese");
	int vet[5]; int i;
		
	for(i=0;i<5;i++){
		printf("\n\nDigite o %dº valor",i+1);
		scanf("%d",vet[i]);
		system("cls");
	}
	printf("O maior número é: %d",maior(vet));
}
