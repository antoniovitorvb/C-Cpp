#include<stdio.h>
#include<stdlib.h>
#include<math.h>

main(){
	
	int n,cont,x,y;
	
	printf("\n\n\tSequência de Fibonacci \n\n Digite quantos termos deseja ver: ");
	scanf("%d",&n);
	
	x=1;
	y=0;
	printf("  1"); //primeiro termo que se repete
	
	for(cont=0;cont<n;cont++){
		
		x=x+y;
		y=x-y;
		printf("  %d",x);

	}
	return 1;
	system("PAUSE");
}
