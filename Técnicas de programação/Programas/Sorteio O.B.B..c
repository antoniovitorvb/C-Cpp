#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>

void ordenar_MEGASENA(int ms[5]){

int i,j,aux;

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
    printf("   %d",ms[i]);
}
printf("\n\n\n");
}

void ordenar_LOTOFACIL(int lf[14]){
	
	int i,j,aux;

	for (i=0;i<14;i++){
    	for (j=i+1;j<=14;j++){
    		if (lf[j]<lf[i]){
				aux=lf[i];
	   			lf[i]=lf[j];
	   			lf[j]=aux;
			}
		}
	}
		
	for (i=0;i<5;i++){
		printf("   %d",lf[i]);
	}
	printf("\n");
	
	for (i=5;i<10;i++){
		printf("   %d",lf[i]);
		
	}
	printf("\n");
	
	for (i=10;i<15;i++){
		printf("   %d",lf[i]);
	}
	
	printf("\n\n\n");
}

void ordenar_QUINA(int qui[4]){
	
	int i,j,aux,troca=1;
	
	for (i=0;i<5;i++){
		troca=0;
		for(j=i+1;j<=4;j++){
			if (qui[j]<qui[i]){
				troca=1;
				aux=qui[i];
				qui[i]=qui[j];
				qui[j]=aux;
			}
		}
	}
	
	for (i=0;i<5;i++){
		printf("   %d",qui[i]);
	}
	printf("\n\n\n");
}

void ordenar_NotLOTOFACIL(int lfn[9]){

	int i,j,aux;

	for (i=0;i<10;i++){
	    for (j=i+1;j<9;j++){
	    	if (lfn[j] < lfn[i]){
				aux=lfn[i];
	 	  		lfn[i]=lfn[j];
	   			lfn[j]=aux;
			}
		}
	}
		
	for (i=0;i<5;i++){
		printf("   %d",lfn[i]);
	}
	printf("\n");
	
	for (i=5;i<10;i++){
		printf("   %d",lfn[i]);
		
	}
	printf("\n\n\n");
}

int main (){
		
	int jogo,i,j,k,r;
	int ms[5],qui[4],emb[24],embaux[24],lf[14],lfn[9];
	
	system("color 1F");
	setlocale(LC_ALL,"portuguese");
	
	do{

	printf ("\n	O.B.B. Apostadores \n\n");
			
	printf ("Qual Jogo você vai apostar? \n\n	1) Mega Sena \n	2) Loto Fácil \n	3) Quina \n	4) Loto Fácil [!]\n");
	scanf ("%d",&jogo);

		
	switch (jogo) {
		
		case 1:
			printf ("\n\n	MEGA SENA:\n");
			
			srand(time(0));
			for(i=0; i<6; i++){
				ms[i]=rand()%59+1;
			}
			
			for(i=0;i<6;i++){
				for(j=i+1;j<=5;j++){
					do{
					   if(ms[j] == ms[i]){
					      	ms[i]=rand()%59+1;
						}
					}while(ms[j] == ms[i]);
				}
			}
			
			printf("\n");
			ordenar_MEGASENA(ms);
			
			printf("\n\nDeseja continuar?\n		1)Sim\n		2)Não\n");
			scanf("%d",&k);
			system("cls");		
		break;
		
		case 2:
			printf ("\n\n	LOTO FÁCIL:\n");
			
						srand(time(0));
			for(i=0; i<15; i++){
				lf[i]=rand()%24+1;
			}
			
			for(i=0;i<15;i++){
				for(j=i+1;j<=15;j++){
					do{
					   if(lf[j] == lf[i]){
					      	lf[i]=rand()%24+1;
						}
					}while(lf[j] == lf[i]);
				}
			}
			
			ordenar_LOTOFACIL(lf);
			
			printf("\n\nDeseja continuar?\n		1)Sim\n		2)Não\n");
			scanf("%d",&k);
			system("cls");
		break;
		
		case 3:
				printf ("\n\n	QUINA:\n");
			
			srand(time(0));
			
			for(i=0; i<5; i++){
				qui[i]=rand()%79+1;
			}
			
			for(i=0;i<5;i++){
			    for (j=i+1;j<=5;j++){
			        do{
				  		if(qui[j] == qui[i]){
				     		qui[i]=rand()%79+1; 
						}
					}while(qui[j] == qui[i]);
				}
			}
			printf("\n");
			ordenar_QUINA(qui);

			printf("\n\nDeseja continuar?\n		1)Sim\n		2)Não\n");
			scanf("%d",&k);
			system("cls");
			break;
			
		case 4:
			printf ("\n\n	LOTO FÁCIL: [Não Apostar!]\n");
			
			for(i=0; i<10; i++){
				lfn[i]=rand()%24+1;
			}
			
			for(i=0;i<10;i++){
			    for (j=i+1;j<=10;j++){
			        do{
				  		if(lfn[j]==lfn[i]){
				     		lfn[i]=rand()%24+1; 
						}
					}while(lfn[j]==lfn[i]);
				}
			}
			
			ordenar_NotLOTOFACIL(lfn);

			printf("\n\nDeseja continuar?\n		1)Sim\n		2)Não\n");
			scanf("%d",&k);
			system("cls");
		break;
	}

	}while(k<2);
}
