#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
#include<ctype.h>

main(){
	
setlocale (LC_ALL,"portuguese");

char nome[3][40];
int cont,i,maior=0,mcont;

for (i=0;i<3;i++){
	
	printf ("\n Digite %d º nome:  ",i+1);
	gets (nome[i]);
	
	cont=strlen(nome[1]);	

	if (cont>=maior){
	   maior=cont;
	   mcont=i;
	   }
}

printf ("\n\n O maior nome é: %s com %d caracteres \n\n",nome[mcont],maior);

system ("PAUSE");
}
