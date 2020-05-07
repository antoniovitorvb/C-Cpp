#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
       
       float nota[3][5];
       int x=0,y=0,a=1,n,av;
       float me[3];
       
       setlocale (LC_ALL,"portuguese");
       
for (x=0;x<3;x++) {
       	   me[x]=0;
}

for (y=0;y<3;y++) {
    
    printf ("\n Aluno %d: \n",a);
    a++;
    av=1;
    printf ("\n");   
    for (x=0;x<5;x++){
    	
    	printf ("AV.%d: \n",av);
    	scanf ("%f",&nota[y][x]);
    	av++;
	}
}
for (x=0;x<3;x++) {

    for (y=0;y<5;y++){
    	
	me[x]+=nota[x][y];
	}
}
n=1;
for(x=0;x<3;x++){
	
   me[x]=me[x]/5;
   //printf ("\n Aluno %d - Média: %.1f",n,me[x]);
   if (me[x]>7){
      printf ("\n Aluno %d aprovado com média = %.1f",n,me[x]);
   }else{
   	 printf ("\n Aluno %d reprovado com média = %.1f",n,me[x]);
   }
n++;
}
printf ("\n\n");
system ("PAUSE");
}
