#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main (){
	
setlocale (LC_ALL,"portuguese");
	
int cont,n;
float media,QT[3],QL[3],SQT,SQL;

SQT=0;
SQL=0;

printf ("\n OBB Médias:\n");

for (n=1;n<4;n++){
	
	printf ("\n QT%d = ",n);
	scanf ("%f",&QT[n]);
	
	printf (" QL%d = ",n);
	scanf ("%f",&QL[n]);
	
	SQT+=QT[n];
	SQL+=QL[n];
}

media=(8*SQT+2*SQL)/30;

if (media<7){
	printf("\n\n Xii... Partiu final painho! tomou média = %.1f.\n\n",media);
}else{
	printf ("\n\n ALUNO MIZERÁVI, BROCOU! Média = %.1f.\n\n",media);
}

system ("PAUSE");
}
