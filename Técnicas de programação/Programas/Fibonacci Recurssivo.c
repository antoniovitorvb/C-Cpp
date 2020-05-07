#include<stdio.h>
#include<locale.h>

int fibo (n){
	
	if (n==1||n==2){
		return 1;
	}else{
		return fibo(n-1)+fibo(n-2);
	}
}

main (){
	
	int i,n;
	setlocale(LC_ALL,"portuguese");
	
	printf("\n	Sequência de Fibonacci\n\n Digite um número para o termo que deseja:  ");
	scanf("%d",&n);
	
	printf("\n\n	O %dº termo da Sequência é: %d\n\n",n,fibo(n));
}
