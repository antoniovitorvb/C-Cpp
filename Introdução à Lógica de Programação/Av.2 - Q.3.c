#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main (){
	
	setlocale(LC_ALL,"portuguese");

	int n,l,i,pal;
	char stn[100];
	
	
	printf ("\n	O.B.B. N�meros Pal�ndromos	\n\n");
	
	printf ("Digite um valor:  ");
	scanf ("%d",&n);
	
	itoa(n,stn,10); //stn ser� a string do valor dado
	
	l=strlen(stn);
	
	if (stn[i]==stn[l]-i-1){
	   printf ("\n\n%d possui os seguintes pal�dromos: \n");
	   for (i=0;i<l;i++){
	    	pal++;
	    	printf ("\n%c",stn[i]);
	    }
	}
return 0;
system ("PAUSE");
}
