#include<stdio.h>
#include<stdlib.h>

funcao (int vet[], int x, int *y){
	int i=0;
	while (i<6){
		if (vet[i]%2 == 0){
			vet[i]=0;
		}
		if (i==5){
			x=20;
			*y=10;
		}
		i++;
	}
}

main (){
	int num[6]={1,2,3,4,5,6};
	int x=0,y=0,i;
	int a=40,b=30;
	
	funcao(num,x,&b);
	
	printf ("\n\n Linha 1:	");
	for (i=0;i<6;i++){
		printf ("%d   ",num[i]);
	}
	printf ("\n\n Linha 2:	%d   %d",x,y);
}
