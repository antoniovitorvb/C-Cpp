#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main () {
	setlocale (LC_ALL,"portuguese");
	
	int cont,p;
	float fat;
	
	printf ("Digite um número: ");
	scanf ("%d",&p);
	cont =1;
	fat = 1;
	
	if (p>0) {
	   while (cont<=p) {
		
		fat = fat*cont;
		cont++;
		printf ("\n %.0f",fat);
		}
	} else {
		do {
		printf ("\n | ERROR: número negativo. | \n\n");
		printf ("Digite um número: ");
		scanf ("%d",&p);
		} while (p<0);
		
		while (cont<=p) {
		
		fat = fat*cont;
		cont++;
		printf ("\n %.0f \n",fat);
	
		}
		
	}
	
	printf ("\n %d! = %.0f \n\n",p,fat);
	
	system ("PAUSE");
	return 0;
}
