#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main () {

	setlocale (LC_ALL,"portuguese");
	char (ch);
	printf ("Digite o código do produto: ");
	scanf ("%d", &ch);
	
	switch (ch) {
		case 1:
		printf ("\n Enlatado\n");
		break;
		
		case 2:
		printf ("\n Higiene\n");
		break;
		
		case 3:
		printf ("\n Higiene\n");
		break;
		
		case 4:
		printf ("\n Limpeza\n");
		break;
		
		case 5:
		printf ("\n Limpeza\n");
		break;
		
		default:
			printf ("\n|  Código Inválido  |\n");
	}
	//system ("PAUSE");
	return 0;
}
