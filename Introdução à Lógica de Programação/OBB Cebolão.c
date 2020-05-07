#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
#include<ctype.h>

main(){
	
	setlocale (LC_ALL,"portuguese");
	
	char frase[50],r;
	int x,i,n;
	
	printf ("\n O.B.B. Cebolão \n\n");
	
	printf ("Digite algo útil:  ");
	gets(frase);
	
	x=strlen(frase);
	
	for (i=0;i<x;i++){
		if (frase[i]=='r'){
			frase[i]='l';
		}else{
		      if(frase[i]=='R'){
			frase[i]='L';
			}
		}
	}
	
printf("\n%s \n\n",frase);
	
system("PAUSE");
}
