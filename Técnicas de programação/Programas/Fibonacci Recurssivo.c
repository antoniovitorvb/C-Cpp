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
	
	printf("\n	Sequ�ncia de Fibonacci\n\n Digite um n�mero para o termo que deseja:  ");
	scanf("%d",&n);
	
	printf("\n\n	O %d� termo da Sequ�ncia �: %d\n\n",n,fibo(n));
}
