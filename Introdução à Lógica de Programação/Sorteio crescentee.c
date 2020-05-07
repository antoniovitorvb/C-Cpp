#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
// função ordenar_num, receendo o vetor "numero", o identificando como vetor "num" 
void ordenar_ms(int ms[5]){

int i, j, aux;

for (i=0;i<6;i++){
    for (j=i+1;j<=5;j++){
    	if (ms[j] < ms[i]){
	   aux=ms[i];
	   ms[i]=ms[j];
	   ms[j]=aux;
	}
	}
}
 
for (i=0;i<6;i++){
    printf("%i \t",ms[i]);
}
printf("\n");
}



int main() {

int i,j, ms[6];
srand(time(0));

for(i=0; i<6; i++) { 
ms[i]=rand()%59+1; 
}

for (i=0;i<6;i++){
    for (j=i+1;j<=5;j++){ 
    	do{
	   if(ms[j] == ms[i]){
	   	ms[i]=rand()%59+1; 
		}
	}while(ms[j] == ms[i]);
	}
}
for (i=0;i<6;i++){
//printf(" %i \t",numero[i]);
}
printf("\n");
ordenar_ms(ms);

system("PAUSE"); 
return 0;
}
