#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

main(){
	setlocale(LC_ALL,"portuguese");
	
	int num[10],n,par=0,impar=0,dif,Q;
	
	for (n=0;n<10;n++){
		
	    printf ("\n Digite 10 valores: \n");
	    scanf ("%d",num[n]);
	    
	    Q=num[n]/2;
	    
	    if (Q==0){
	    	par+=num[n];
	    }else{
	    	impar+=num[n];
	    }
	    system("cls");
	}
	
	dif=par-impar;
	
	printf("A diferença entre os números pares e ímpares é: %d",dif);
	
system("PAUSE");
}
