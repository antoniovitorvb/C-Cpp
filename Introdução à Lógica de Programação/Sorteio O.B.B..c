#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>
#include"pilha.h"

void ordenar_MEGASENA(int ms[5]){

int i,j,aux,troca=1;

for (i=0;i<6;i++){
	troca=0;
    for (j=i+1;j<=5;j++){
    	if (ms[j] < ms[i]){
    		troca=1;
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

void ordenar_LOTOFACIL(int lf[24]){
	
	int i,j,aux,troca=1;
	
	for (i=0;i<15;i++){
		troca=0;
 		   for (j=i+1;j<14;j++){
 			   	if (lf[j] < lf[i]){
    				troca=1;
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

	int i,j,aux,troca=1;

	for (i=0;i<10;i++){
		troca=0;
	    for (j=i+1;j<9;j++){
	    	if (lfn[j] < lfn[i]){
    			troca=1;
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

embaralha_lf(int emb[24]){
	
	int r=0,t;
	int embaux[24];
		
	srand(time(NULL));
	t=rand()%13+7;	//define quantas vezes emb[] será desordenado, no caso, de 7 a 20 vezes
	//printf("%d\n\n",t);
	
	while(r<t){
		embaux[23]=emb[0];   embaux[5]=emb[11];    embaux[19]=emb[22];  
		embaux[12]=emb[1];   embaux[16]=emb[12];   embaux[14]=emb[23]; 
		embaux[8]=emb[2];    embaux[11]=emb[13];   embaux[7]=emb[24]; 
		embaux[10]=emb[3];   embaux[6]=emb[14];   
		embaux[24]=emb[4];   embaux[22]=emb[15];   
		embaux[1]=emb[5];    embaux[15]=emb[16];  //estabelece um "padrão" para desordenar os valores
		embaux[9]=emb[6];    embaux[2]=emb[17];  //esse processo se repetirá i vezes
		embaux[13]=emb[7];   embaux[21]=emb[18];  
		embaux[18]=emb[8];   embaux[4]=emb[19];
		embaux[20]=emb[9];   embaux[0]=emb[20]; 
		embaux[3]=emb[10];   embaux[17]=emb[21];  
	
		emb[0]=embaux[0];   emb[11]=embaux[11];  emb[22]=embaux[22];
		emb[1]=embaux[1];   emb[12]=embaux[12];  emb[23]=embaux[23];
		emb[2]=embaux[2];   emb[13]=embaux[13];  emb[24]=embaux[24];
		emb[3]=embaux[3];   emb[14]=embaux[14];  emb[25]=embaux[25];
		emb[4]=embaux[4];   emb[15]=embaux[15];  
		emb[5]=embaux[5];   emb[16]=embaux[16];  
		emb[6]=embaux[6];   emb[17]=embaux[17];  
		emb[7]=embaux[7];   emb[18]=embaux[18];  
		emb[8]=embaux[8];   emb[19]=embaux[19];  
		emb[9]=embaux[9];   emb[20]=embaux[20];  
		emb[10]=embaux[10]; emb[21]=embaux[21];  
	
		r++;
	}
}

int main (){
		
	int jogo,i,j,k,r;
	int ms[5],lf[14],qui[4],lfn[9],emb[24];
	tipo e;
	
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
			
			for(i=0;i<24;i++){//Dá os valores iniciais do vet emb
				emb[i]=i+1;
				//printf("  %d",emb[i]);
			}
			embaralha_lf(emb);
			
			for(i=0;i<25;i++){
				push(&aux,emb[i]);
			}
			
			for(i=0;i<15;i++){
				lf[i]=pop(&aux,&e);
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
				  if(lf[j] == lf[i]){
				     	lf[i]=rand()%79+1; 
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
			
			srand(time(0));
			
			for(i=0; i<10; i++){
				lfn[i]=rand()%24+1;
			}
			
			for(i=0;i<10;i++){
			    for (j=i+1;j<=10;j++){
			        do{
				  		if(lfn[j] == lfn[i]){
				     		lfn[i]=rand()%24+1; 
						}
					}while(lfn[j]==lfn[i]);
				}
			}
			printf("\n");
			ordenar_NotLOTOFACIL(lfn);

			printf("\n\nDeseja continuar?\n		1)Sim\n		2)Não\n");
			scanf("%d",&k);
			system("cls");
		break;
	}

	}while(k<2);
//	system("PAUSE");
}
