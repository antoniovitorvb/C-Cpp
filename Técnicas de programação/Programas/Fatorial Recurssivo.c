#include<stdio.h>

long int fat(n){
	
	if ((n==1)||(n==0)){
		return 1;
	}else{
		return fat(n-1)*n;
	}
}

main(){
	
	int n;
	            
	printf("\n\tFatorial\n\nDigite um valor:  ");
	scanf("%d",&n);
	
	printf("\n\t%d! = %.0d \n\n",n, fat(n));
}