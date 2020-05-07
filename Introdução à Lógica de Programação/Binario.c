#include <stdio.h>
#include <stdlib.h>
#include<locale.h>  
main() {
	
	setlocale (LC_ALL,"portuguese");
	
	int dec,bin,cont;
	
	printf("Digite um número: ");
	scanf("%d", &dec);
	
	printf ("\n %d(10) = ",dec);
	
	for(cont = 31; cont >= 0; cont--){
		
		bin = dec >> cont;
		
		if(bin & 1){
			printf("1");
		}else{
			printf("0");
		}
	}
	
	printf("\n");
	system("pause");
}
