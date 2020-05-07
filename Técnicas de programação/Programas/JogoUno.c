#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include"pilha.h"
#include"lista.h"

embaralhar(int emb[52],int embaux[52]){//Função que embaralha o deck

	int i,t;
		
	for(i=0;i<54;i++){//Dá os valores iniciais do vet emb
		emb[i]=i+1;
	//	printf("  %d",emb[i]);
	}
	//printf("\n\n\n");

	srand(time(NULL));
	t=rand()%13+7;//define quantas vezes emb[] será desordenado, no caso, de 7 a 20 vezes
	
	//printf("%d\n\n",t);
	i=0;
	
	while(i<t){
		embaux[40]=emb[0];   embaux[9]=emb[11];   embaux[45]=emb[22];  embaux[14]=emb[33];  embaux[49]=emb[44];
		embaux[38]=emb[1];   embaux[13]=emb[12];  embaux[19]=emb[23];  embaux[36]=emb[34];  embaux[22]=emb[45]; 
		embaux[30]=emb[2];   embaux[16]=emb[13];  embaux[37]=emb[24];  embaux[5]=emb[35];   embaux[34]=emb[46]; 
		embaux[25]=emb[3];   embaux[24]=emb[14];  embaux[12]=emb[25];  embaux[1]=emb[36];   embaux[42]=emb[47];	//estabelece um "padrão" para desordenar os valores
		embaux[43]=emb[4];   embaux[28]=emb[15];  embaux[46]=emb[26];  embaux[11]=emb[37];  embaux[29]=emb[48];	//esse processo se repetirá i vezes
		embaux[18]=emb[5];   embaux[33]=emb[16];  embaux[21]=emb[27];  embaux[20]=emb[38];  embaux[15]=emb[49]; 
		embaux[7]=emb[6];    embaux[51]=emb[17];  embaux[0]=emb[28];   embaux[27]=emb[39];  embaux[47]=emb[50]; 
		embaux[6]=emb[7];    embaux[8]=emb[18];  embaux[4]=emb[29];   embaux[39]=emb[40];  embaux[50]=emb[51]; 
		embaux[17]=emb[8];   embaux[3]=emb[19];   embaux[35]=emb[30];  embaux[44]=emb[41];   
		embaux[2]=emb[9];    embaux[41]=emb[20];  embaux[48]=emb[31];  embaux[10]=emb[42];   
		embaux[23]=emb[10];  embaux[32]=emb[21];  embaux[31]=emb[32];  embaux[26]=emb[43];
	
		emb[0]=embaux[0];   emb[11]=embaux[11];  emb[22]=embaux[22];  emb[33]=embaux[33];  emb[44]=embaux[44];
		emb[1]=embaux[1];   emb[12]=embaux[12];  emb[23]=embaux[23];  emb[34]=embaux[34];  emb[45]=embaux[45]; 
		emb[2]=embaux[2];   emb[13]=embaux[13];  emb[24]=embaux[24];  emb[35]=embaux[35];  emb[46]=embaux[46]; 
		emb[3]=embaux[3];   emb[14]=embaux[14];  emb[25]=embaux[25];  emb[36]=embaux[36];  emb[47]=embaux[47];	
		emb[4]=embaux[4];   emb[15]=embaux[15];  emb[26]=embaux[26];  emb[37]=embaux[37];  emb[48]=embaux[48];	
		emb[5]=embaux[5];   emb[16]=embaux[16];  emb[27]=embaux[27];  emb[38]=embaux[38];  emb[49]=embaux[49]; 
		emb[6]=embaux[6];   emb[17]=embaux[17];  emb[28]=embaux[28];  emb[39]=embaux[39];  emb[50]=embaux[50]; 
		emb[7]=embaux[7];   emb[18]=embaux[18];  emb[29]=embaux[29];  emb[40]=embaux[40];  emb[51]=embaux[51]; 
		emb[8]=embaux[8];   emb[19]=embaux[19];  emb[30]=embaux[30];  emb[41]=embaux[41];   
		emb[9]=embaux[9];   emb[20]=embaux[20];  emb[31]=embaux[31];  emb[42]=embaux[42];  
		emb[10]=embaux[10]; emb[21]=embaux[21];  emb[32]=embaux[32];  emb[43]=embaux[43];
	
		i++;
	}
	
	/*for(i=0;i<54;i++){
		printf("  %d",emb[i]);
	}
	printf("\n\n\n");*/
}

menu(){

    int OP, op, back=0;
     
	do{
		
	back++; // VARIAVEL PARA FAZER O PROGRAMA VOLTAR PARA O INICIO
	system("cls"); // PARA LIMPAR A TELA EM CASO DE DEFAULT NO MENU PRINCIPAL
	system("color f0"); // FUNDO BRANCO COM LETRA PRETA
	printf ("\n\t Seja Bem Vindo ao UNO!\n"); //INSTRUÇÃO
	printf("\n\n\t Vocês estão prontos para jogar ??? \n\n"); //INSTRUÇÃO
	printf("\n\t\t 1 -> Partiu Fight ! \n\n\t\t 2 -> Ler Instruções \n\n\n\t\tDIGITE (1 OU 2): "); //INSTRUÇÃO
	scanf("%d",&OP); //DAR VALOR A VARIAVEL PARA TOMADA DE DECISÃO (JOGAR OU REGRAS)
	system("cls"); // LIMPAR A TELA PARA APARENTAR QUE MUDOU DE TELA
     
     switch (OP){
     case 1:
     	system("color f0"); // FUNDO BRANCO COM LETRA PRETA
        printf ("\n\n\n\t Que os jogos comecem... Jogador, você começa! \n\n");
        scanf("%d",&op); //DAR VALOR A VARIALVEL PARA TOMADA DE DECISÃO (JOGAR OU VOLTAR)
        system("cls"); // LIMPAR A TELA PARA APARENTAR QUE MUDOU DE TELA
        back=1;
        break;
		    
     case 2:
     	system("color f0"); // FUNDO BRANCO COM LETRA PRETA
     	printf ("\n\n\t Instruções: "
                 "\n\n\t Objetivo: Ser o primeiro jogador a ficar sem cartas na mão, utilizando todos os meios possíveis para impedir que o adversário o faça."
                 "\n\n\t Como Jogar: Cada jogar receberá 7 cartas e o baralho dará a carta inicial do jogo.\n"
                 "\t\t Você só poderá jogar uma carta de mesma cor, de mesmo número ou símbolo que estiver na mesa."
                 "\n\n\t Cartas Especiais: \n"
                 "\t\t +2: o jogador seguinte apanha duas cartas e passa o seu turno ao jogador seguinte;\n\n"
                 "\t\t Muda de Cor: pode ser jogada a qualquer momento do jogo independentemente da cor que se encontra no topo. O participante que jogar \n"
                 "\t\t\t essa carta escolhe a cor da próxima. Exceto se voce tiver\n\n"
                 "\t\t +4: o jogador seguinte apanha quatro cartas do baralho e perde o turno, o jogador que a descartou decidirá a próxima cor do jogo."
                 "\n\t\t\t (verde, azul, vermelho ou amarelo). Esta carta só pode ser jogada quando o jogador não possuir nenhuma outra carta que possa usar.\n\n");
        system ("pause"); 
        back=0;
        break;
          
     default:
     	printf ("\n\n\n\n Escreva uma das funções anteriores\n");
        back=0;
        system ("pause");
        break;
    }
    }while (back==0);// CONDIÇÃO PARA FORÇAR O JOGO A VOLTAR AO INICIO.

	//system ("pause"); //ACABOU
}

layout_tela(){
	printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tCATÁLOGO de CARTAS\n\n"
		   "\t\t\t\t\t\tAm 0->0\t  Az 0->13\tVd 0->24\tVm 0->36\t+4->48\n"
		   "\t\t\t\t\t\tAm 1->1\t  Az 1->14\tVd 1->25\tVm 1->37\t+4->49\n"
		   "\t\t\t\t\t\tAm 2->2\t  Az 2->15\tVd 2->26\tVm 2->38\tCoringa->51\n"
		   "\t\t\t\t\t\tAm 3->3\t  Az 3->16\tVd 3->27\tVm 3->39\tCoringa->52\n"
		   "\t\t\t\t\t\tAm 4->4\t  Az 4->17\tVd 4->28\tVm 4->40\n"
		   "\t\t\t\t\t\tAm 5->5\t  Az 5->18\tVd 5->29\tVm 5->41\n"
		   "\t\t\t\t\t\tAm 6->6\t  Az 6->19\tVd 6->30\tVm 6->42\n"
		   "\t\t\t\t\t\tAm 7->7\t  Az 7->20\tVd 7->31\tVm 7->43\n"
		   "\t\t\t\t\t\tAm 8->8\t  Az 8->21\tVd 8->32\tVm 8->44\n"
		   "\t\t\t\t\t\tAm 9->9\t  Az 9->22\tVd 9->33\tVm 9->45\n"
		   "\t\t\t\t\t\tAm+2->10  Az+2->23      Vd+2->34        Vm+2->46\n"
		   "\t\t\t\t\t\tAm+2->11  Az+2->24      Vd+2->35        Vm+2->47\n");
}

/*comparar_monte_mao(tplista *j1,tp_pilha monte,int vez){
	
	int descarte,carta;
	tipo e;
	//double carta;
	printf("\n\n\tEscolha uma carta. Se não tiver uma compatível com a do topo do monte, cave:\n\n");
	turno();
	//if( ((pop(monte)>=0) && (pop(monte)<=11) && (carta<=11)&&(carta>=0))  ||  (pop(monte)=0&&((carta=12)||(carta=24)||carta=36))  || ((pop(monte)=0)&&((carta=12)||(carta=24)||(carta=36)     )
	
	if (vez==1){
		
		descarte=mostratopo(&monte,&e);//entra no switch a partir da carta que estiver no topo da pilha do descarte.
		
		switch(descarte){
		case 0: // 0 amarelo
				switch(carta){
										
					case 1:
						printf("Pode jogar");
						
					break;
					case 2:
						printf("Pode jogar");
					break;
					case 3:
						printf("Pode jogar");
					break;
					case 4:
						printf("Pode jogar");
					break;
					case 5:
						printf("Pode jogar");
					break;
					case 6:
						printf("Pode jogar");
					break;
					case 7:
						printf("Pode jogar");
					break;
					case 8:
						printf("Pode jogar");
					break;
					case 9:
						printf("Pode jogar");
					break;
					case 10:
						printf("Pode jogar");
					break;
					case 11:
						printf("Pode jogar");
					break;
					case 12:
						printf("Pode jogar");
					break;
					case 24:
						printf("Pode jogar");
					break;
					case 36:
						printf("Pode jogar");
					break;
					default:
						printf("Você precisa cavar");
				}
				break;
	
		case 1: // 1 amarelo
				switch(carta){
					case 0: 
					printf("pode jogar");					
					break;
					case 2:
						printf("Pode jogar");
					break;
					case 3:
						printf("Pode jogar");
					break;
					case 4:
						printf("Pode jogar");
					break;
					case 5:
						printf("Pode jogar");
					break;
					case 6:
						printf("Pode jogar");
					break;
					case 7:
						printf("Pode jogar");
					break;
					case 8:
						printf("Pode jogar");
					break;
					case 9:
						printf("Pode jogar");
					break;
					case 10:
						printf("Pode jogar");
					break;
					case 11:
						printf("Pode jogar");
					break;
					case 13:
						printf("Pode jogar");
					break;
					case 25:
						printf("Pode jogar");
					break;
					case 37:
						printf("Pode jogar");
					break;
					default:
						printf("Você precisa cavar");
						break;					
				}
				break;
				
	    case 2: // 2 Amarelo
				switch(carta){
										
					case 0:
						printf("Pode jogar");
					break;
					case 1:
						printf("Pode jogar");
					break;
					case 3:
						printf("Pode jogar");
					break;
					case 4:
						printf("Pode jogar");
					break;
					case 5:
						printf("Pode jogar");
					break;
					case 6:
						printf("Pode jogar");
					break;
					case 7:
						printf("Pode jogar");
					break;
					case 8:
						printf("Pode jogar");
					break;
					case 9:
						printf("Pode jogar");
					break;
					case 10:
						printf("Pode jogar");
					break;
					case 11:
						printf("Pode jogar");
					break;
					case 14:
						printf("Pode jogar");
					break;
					case 26:
						printf("Pode jogar");
					break;
					case 38:
						printf("Pode jogar");
					break;
					default:
						printf("Você precisa cavar");
						break;				
				}
				break;
		
		case 3: // 3 Amarelo
				switch(carta){
										
					case 0:
						printf("Pode jogar");
					break;
					case 1:
						printf("Pode jogar");
					break;
					case 2:
						printf("Pode jogar");
					break;
					case 4:
						printf("Pode jogar");
					break;
					case 5:
						printf("Pode jogar");
					break;
					case 6:
						printf("Pode jogar");
					break;
					case 7:
						printf("Pode jogar");
					break;
					case 8:
						printf("Pode jogar");
					break;
					case 9:
						printf("Pode jogar");
					break;
					case 10:
						printf("Pode jogar");
					break;
					case 11:
						printf("Pode jogar");
					break;
					case 15:
						printf("Pode jogar");
					break;
					case 27:
						printf("Pode jogar");
					break;
					case 39:
						printf("Pode jogar");
					break;
					default:
						printf("Você precisa cavar");
						break;				
				}
				break;
			
		case 4: // 4 Amarelo
				switch(carta){
										
					case 0:
						printf("Pode jogar");
					break;
					case 1:
						printf("Pode jogar");
					break;
					case 2:
						printf("Pode jogar");
					break;
					case 3:
						printf("Pode jogar");
					break;
					case 5:
						printf("Pode jogar");
					break;
					case 6:
						printf("Pode jogar");
					break;
					case 7:
						printf("Pode jogar");
					break;
					case 8:
						printf("Pode jogar");
					break;
					case 9:
						printf("Pode jogar");
					break;
					case 10:
						printf("Pode jogar");
					break;
					case 11:
						printf("Pode jogar");
					break;
					case 16:
						printf("Pode jogar");
					break;
					case 28:
						printf("Pode jogar");
					break;
					case 40:
						printf("Pode jogar");
					break;
					default:
						printf("Você precisa cavar");
						break;					
				}
				break;	
		
		case 5: // 5 Amarelo
				switch(carta){
										
					case 0:
						printf("Pode jogar");
					break;
					case 1:
						printf("Pode jogar");
					break;
					case 2:
						printf("Pode jogar");
					break;
					case 3:
						printf("Pode jogar");
					break;
					case 4:
						printf("Pode jogar");
					break;
					case 6:
						printf("Pode jogar");
					break;
					case 7:
						printf("Pode jogar");
					break;
					case 8:
						printf("Pode jogar");
					break;
					case 9:
						printf("Pode jogar");
					break;
					case 10:
						printf("Pode jogar");
					break;
					case 11:
						printf("Pode jogar");
					break;
					case 17:
						printf("Pode jogar");
					break;
					case 29:
						printf("Pode jogar");
					break;
					case 41:
						printf("Pode jogar");
					break;
					default:
						printf("Você precisa cavar");
						break;						
				}
				break;
				
		case 6: // 6 Amarelo
				switch(carta){
										
					case 0:
						printf("Pode jogar");
					break;
					case 1:
						printf("Pode jogar");
					break;
					case 2:
						printf("Pode jogar");
					break;
					case 3:
						printf("Pode jogar");
					break;
					case 4:
						printf("Pode jogar");
					break;
					case 5:
						printf("Pode jogar");
					break;
					case 7:
						printf("Pode jogar");
					break;
					case 8:
						printf("Pode jogar");
					break;
					case 9:
						printf("Pode jogar");
					break;
					case 10:
						printf("Pode jogar");
					break;
					case 11:
						printf("Pode jogar");
					break;
					case 18:
						printf("Pode jogar");
					break;
					case 30:
						printf("Pode jogar");
					break;
					case 42:
						printf("Pode jogar");
					break;
					default:
						printf("Você precisa cavar");
						break;						
				}
				break;
				
		case 7: // 7 Amarelo
				switch(carta){
										
					case 0:
						printf("Pode jogar");
					break;
					case 1:
						printf("Pode jogar");
					break;
					case 2:
						printf("Pode jogar");
					break;
					case 3:
						printf("Pode jogar");
					break;
					case 4:
						printf("Pode jogar");
					break;
					case 5:
						printf("Pode jogar");
					break;
					case 6:
						printf("Pode jogar");
					break;
					case 8:
						printf("Pode jogar");
					break;
					case 9:
						printf("Pode jogar");
					break;
					case 10:
						printf("Pode jogar");
					break;
					case 11:
						printf("Pode jogar");
					break;
					case 19:
						printf("Pode jogar");
					break;
					case 31:
						printf("Pode jogar");
					break;
					case 43:
						printf("Pode jogar");
					break;
					default:
						printf("Você precisa cavar");
						break;						
				}
				break;
		
		case 8: // 8 Amarelo
				switch(carta){
										
					case 0:
						printf("Pode jogar");
					break;
					case 1:
						printf("Pode jogar");
					break;
					case 2:
						printf("Pode jogar");
					break;
					case 3:
						printf("Pode jogar");
					break;
					case 4:
						printf("Pode jogar");
					break;
					case 5:
						printf("Pode jogar");
					break;
					case 6:
						printf("Pode jogar");
					break;
					case 7:
						printf("Pode jogar");
					break;
					case 9:
						printf("Pode jogar");
					break;
					case 10:
						printf("Pode jogar");
					break;
					case 11:
						printf("Pode jogar");
					break;
					case 20:
						printf("Pode jogar");
					break;
					case 32:
						printf("Pode jogar");
					break;
					case 44:
						printf("Pode jogar");
					break;
					default:
						printf("Você precisa cavar");
						break;			
				}		
				break;
				
		case 9: // 9 Amarelo
				switch(carta){
										
					case 0:
						printf("Pode jogar");
					break;
					case 1:
						printf("Pode jogar");
					break;
					case 2:
						printf("Pode jogar");
					break;
					case 3:
						printf("Pode jogar");
					break;
					case 4:
						printf("Pode jogar");
					break;
					case 5:
						printf("Pode jogar");
					break;
					case 6:
						printf("Pode jogar");
					break;
					case 7:
						printf("Pode jogar");
					break;
					case 8:
						printf("Pode jogar");
					break;
					case 10:
						printf("Pode jogar");
					break;
					case 11:
						printf("Pode jogar");
					break;
					case 21:
						printf("Pode jogar");
					break;
					case 33:
						printf("Pode jogar");
					break;
					case 45:
						printf("Pode jogar");
					break;
					default:
						printf("Você precisa cavar");
						break;						
				}
				break;
					
		case 10: // carta +2 Amarelo
				switch(carta){
										
					case 0:
						printf("Pode jogar");
					break;
					case 1:
						printf("Pode jogar");
					break;
					case 2:
						printf("Pode jogar");
					break;
					case 3:
						printf("Pode jogar");
					break;
					case 4:
						printf("Pode jogar");
					break;
					case 5:
						printf("Pode jogar");
					break;
					case 6:
						printf("Pode jogar");
					break;
					case 7:
						printf("Pode jogar");
					break;
					case 8:
						printf("Pode jogar");
					break;
					case 9:
						printf("Pode jogar");
					break;
					case 11:
						printf("Pode jogar");
					break;
					case 22:
						printf("Pode jogar");
					break;
					case 34:
						printf("Pode jogar");
					break;
					case 46:
						printf("Pode jogar");
					break;
					case 23:
						printf("Pode jogar");
					break;
					case 35:
						printf("Pode jogar");
					break;
					case 47:
						printf("Pode jogar");
					break;
					default:
						printf("Você precisa cavar");
						break;						
				}
				break;
		
		case 11: // carta +2 amarela
				switch(carta){
										
					case 0:
						printf("Pode jogar");
					break;
					case 1:
						printf("Pode jogar");
					break;
					case 2:
						printf("Pode jogar");
					break;
					case 3:
						printf("Pode jogar");
					break;
					case 4:
						printf("Pode jogar");
					break;
					case 5:
						printf("Pode jogar");
					break;
					case 6:
						printf("Pode jogar");
					break;
					case 7:
						printf("Pode jogar");
					break;
					case 8:
						printf("Pode jogar");
					break;
					case 9:
						printf("Pode jogar");
					break;
					case 10:
						printf("Pode jogar");
					break;
					case 22:                         //+2 azul
						printf("Pode jogar");
					break;
					case 34:                         //+2 verde
						printf("Pode jogar");
					break;
					case 46:                         //+2vermelho
						printf("Pode jogar");
					break;
					case 23:                         //+2 azul
						printf("Pode jogar");
					break;
					case 35:                         //+2 verde
						printf("Pode jogar");
					break;
					case 47:                        //+2 vermelho
						printf("Pode jogar");
					break;
					default:
						printf("Você precisa cavar");
						break;						
				}
				break;
				
		case 12: // 0 Azul
				switch(carta){
										
					case 0:
						printf("Pode jogar");
					break;
					case 13:
						printf("Pode jogar");
					break;
					case 14:
						printf("Pode jogar");
					break;
					case 15:
						printf("Pode jogar");
					break;
					case 16:
						printf("Pode jogar");
					break;
					case 17:
						printf("Pode jogar");
					break;
					case 18:
						printf("Pode jogar");
					break;
					case 19:
						printf("Pode jogar");
					break;
					case 20:
						printf("Pode jogar");
					break;
					case 21:
						printf("Pode jogar");
					break;
					case 22:
						printf("Pode jogar");
					break;
					case 23:                         
						printf("Pode jogar");
					break;
					case 24:                         
						printf("Pode jogar");
					break;
					case 36:                         
						printf("Pode jogar");
					break;
					default:
						printf("Você precisa cavar");
						break;					
				}
				break;
				
		case 13: // 1 Azul
				switch(carta){
										
					case 1:
						printf("Pode jogar");
					break;
					case 12:
						printf("Pode jogar");
					break;
					case 14:
						printf("Pode jogar");
					break;
					case 15:
						printf("Pode jogar");
					break;
					case 16:
						printf("Pode jogar");
					break;
					case 17:
						printf("Pode jogar");
					break;
					case 18:
						printf("Pode jogar");
					break;
					case 19:
						printf("Pode jogar");
					break;
					case 20:
						printf("Pode jogar");
					break;
					case 21:
						printf("Pode jogar");
					break;
					case 22:
						printf("Pode jogar");
					break;
					case 23:                         
						printf("Pode jogar");
					break;
					case 25:                         
						printf("Pode jogar");
					break;
					case 37:                         
						printf("Pode jogar");
					break;
					default:
						printf("Você precisa cavar");
						break;					
				}
				break;
				
		case 14: // 2 Azul
				switch(carta){
										
					case 2:
						printf("Pode jogar");
					break;
					case 12:
						printf("Pode jogar");
					break;
					case 13:
						printf("Pode jogar");
					break;
					case 15:
						printf("Pode jogar");
					break;
					case 16:
						printf("Pode jogar");
					break;
					case 17:
						printf("Pode jogar");
					break;
					case 18:
						printf("Pode jogar");
					break;
					case 19:
						printf("Pode jogar");
					break;
					case 20:
						printf("Pode jogar");
					break;
					case 21:
						printf("Pode jogar");
					break;
					case 22:
						printf("Pode jogar");
					break;
					case 23:                         
						printf("Pode jogar");
					break;
					case 26:                         
						printf("Pode jogar");
					break;
					case 38:                         
						printf("Pode jogar");
					break;
					default:
						printf("Você precisa cavar");
						break;					
				}
				break;
				
		case 15: // 3 Azul
				switch(carta){
										
					case 3:
						printf("Pode jogar");
					break;
					case 12:
						printf("Pode jogar");
					break;
					case 13:
						printf("Pode jogar");
					break;
					case 14:
						printf("Pode jogar");
					break;
					case 16:
						printf("Pode jogar");
					break;
					case 17:
						printf("Pode jogar");
					break;
					case 18:
						printf("Pode jogar");
					break;
					case 19:
						printf("Pode jogar");
					break;
					case 20:
						printf("Pode jogar");
					break;
					case 21:
						printf("Pode jogar");
					break;
					case 22:
						printf("Pode jogar");
					break;
					case 23:                         
						printf("Pode jogar");
					break;
					case 27:                         
						printf("Pode jogar");
					break;
					case 39:                         
						printf("Pode jogar");
					break;
					default:
						printf("Você precisa cavar");
						break;					
				}
				break;
						
		case 16: // 4 Azul
				switch(carta){
										
					case 4:
						printf("Pode jogar");
					break;
					case 12:
						printf("Pode jogar");
					break;
					case 13:
						printf("Pode jogar");
					break;
					case 14:
						printf("Pode jogar");
					break;
					case 15:
						printf("Pode jogar");
					break;
					case 17:
						printf("Pode jogar");
					break;
					case 18:
						printf("Pode jogar");
					break;
					case 19:
						printf("Pode jogar");
					break;
					case 20:
						printf("Pode jogar");
					break;
					case 21:
						printf("Pode jogar");
					break;
					case 22:
						printf("Pode jogar");
					break;
					case 23:                         
						printf("Pode jogar");
					break;
					case 28:                         
						printf("Pode jogar");
					break;
					case 40:                         
						printf("Pode jogar");
					break;
					default:
						printf("Você precisa cavar");
						break;					
				}
				break;
				
		case 17: // 5 Azul
				switch(carta){
										
					case 5:
						printf("Pode jogar");
					break;
					case 12:
						printf("Pode jogar");
					break;
					case 13:
						printf("Pode jogar");
					break;
					case 14:
						printf("Pode jogar");
					break;
					case 15:
						printf("Pode jogar");
					break;
					case 16:
						printf("Pode jogar");
					break;
					case 18:
						printf("Pode jogar");
					break;
					case 19:
						printf("Pode jogar");
					break;
					case 20:
						printf("Pode jogar");
					break;
					case 21:
						printf("Pode jogar");
					break;
					case 22:
						printf("Pode jogar");
					break;
					case 23:                         
						printf("Pode jogar");
					break;
					case 29:                         
						printf("Pode jogar");
					break;
					case 41:                         
						printf("Pode jogar");
					break;
					default:
						printf("Você precisa cavar");
						break;					
				}
				break;
						
		case 18: // 6 Azul
				switch(carta){
										
					case 6:
						printf("Pode jogar");
					break;
					case 12:
						printf("Pode jogar");
					break;
					case 13:
						printf("Pode jogar");
					break;
					case 14:
						printf("Pode jogar");
					break;
					case 15:
						printf("Pode jogar");
					break;
					case 16:
						printf("Pode jogar");
					break;
					case 17:
						printf("Pode jogar");
					break;
					case 19:
						printf("Pode jogar");
					break;
					case 20:
						printf("Pode jogar");
					break;
					case 21:
						printf("Pode jogar");
					break;
					case 22:
						printf("Pode jogar");
					break;
					case 23:                         
						printf("Pode jogar");
					break;
					case 30:                         
						printf("Pode jogar");
					break;
					case 42:                         
						printf("Pode jogar");
					break;
					default:
						printf("Você precisa cavar");
						break;					
				}
				break;
				
		case 19: // 7 Azul
				switch(carta){
										
					case 7:
						printf("Pode jogar");
					break;
					case 12:
						printf("Pode jogar");
					break;
					case 13:
						printf("Pode jogar");
					break;
					case 14:
						printf("Pode jogar");
					break;
					case 15:
						printf("Pode jogar");
					break;
					case 16:
						printf("Pode jogar");
					break;
					case 17:
						printf("Pode jogar");
					break;
					case 18:
						printf("Pode jogar");
					break;
					case 20:
						printf("Pode jogar");
					break;
					case 21:
						printf("Pode jogar");
					break;
					case 22:
						printf("Pode jogar");
					break;
					case 23:                         
						printf("Pode jogar");
					break;
					case 31:                         
						printf("Pode jogar");
					break;
					case 43:                         
						printf("Pode jogar");
					break;
					default:
						printf("Você precisa cavar");
						break;					
				}
				break;
				
		case 20: // 8 Azul
				switch(carta){
										
					case 8:
						printf("Pode jogar");
					break;
					case 12:
						printf("Pode jogar");
					break;
					case 13:
						printf("Pode jogar");
					break;
					case 14:
						printf("Pode jogar");
					break;
					case 15:
						printf("Pode jogar");
					break;
					case 16:
						printf("Pode jogar");
					break;
					case 17:
						printf("Pode jogar");
					break;
					case 18:
						printf("Pode jogar");
					break;
					case 19:
						printf("Pode jogar");
					break;
					case 21:
						printf("Pode jogar");
					break;
					case 22:
						printf("Pode jogar");
					break;
					case 23:                         
						printf("Pode jogar");
					break;
					case 32:                         
						printf("Pode jogar");
					break;
					case 44:                         
						printf("Pode jogar");
					break;
					default:
						printf("Você precisa cavar");
						break;					
				}
				break;
						
		case 21: // 9 Azul
				switch(carta){
										
					case 9:
						printf("Pode jogar");
					break;
					case 12:
						printf("Pode jogar");
					break;
					case 13:
						printf("Pode jogar");
					break;
					case 14:
						printf("Pode jogar");
					break;
					case 15:
						printf("Pode jogar");
					break;
					case 16:
						printf("Pode jogar");
					break;
					case 17:
						printf("Pode jogar");
					break;
					case 18:
						printf("Pode jogar");
					break;
					case 19:
						printf("Pode jogar");
					break;
					case 20:
						printf("Pode jogar");
					break;
					case 22:
						printf("Pode jogar");
					break;
					case 23:                         
						printf("Pode jogar");
					break;
					case 33:                         
						printf("Pode jogar");
					break;
					case 45:                         
						printf("Pode jogar");
					break;
					default:
						printf("Você precisa cavar");
						break;					
				}
				break;
						
		case 22: // carta +2 Azul
				switch(carta){
										
					case 10:
						printf("Pode jogar");
					break;
					case 12:
						printf("Pode jogar");
					break;
					case 13:
						printf("Pode jogar");
					break;
					case 14:
						printf("Pode jogar");
					break;
					case 15:
						printf("Pode jogar");
					break;
					case 16:
						printf("Pode jogar");
					break;
					case 17:
						printf("Pode jogar");
					break;
					case 18:
						printf("Pode jogar");
					break;
					case 19:
						printf("Pode jogar");
					break;
					case 20:
						printf("Pode jogar");
					break;
					case 21:
						printf("Pode jogar");
					break;
					case 23:                         
						printf("Pode jogar");
					break;
					case 11:                         
						printf("Pode jogar");
					break;
					case 34:                         
						printf("Pode jogar");
					break;
					case 3:                         
						printf("Pode jogar");
					break;
					default:
						printf("Você precisa cavar");
						break;					
				}
				break;
		
		case 23: // carta + 2 Azul
				switch(carta){
										
					case 10:
						printf("Pode jogar");
					break;
					case 12:
						printf("Pode jogar");
					break;
					case 13:
						printf("Pode jogar");
					break;
					case 14:
						printf("Pode jogar");
					break;
					case 15:
						printf("Pode jogar");
					break;
					case 16:
						printf("Pode jogar");
					break;
					case 17:
						printf("Pode jogar");
					break;
					case 18:
						printf("Pode jogar");
					break;
					case 19:
						printf("Pode jogar");
					break;
					case 20:
						printf("Pode jogar");
					break;
					case 21:
						printf("Pode jogar");
					break;
					case 22:                         
						printf("Pode jogar");
					break;
					case 11:                         
						printf("Pode jogar");
					break;
					case 34:                         
						printf("Pode jogar");
					break;
					case 35:                         
						printf("Pode jogar");
					break;
					default:
						printf("Você precisa cavar");
						break;					
				}
				break;
						
		case 24: // 0 verde
				switch(carta){
										
					case 0:
						printf("Pode jogar");
					break;
					case 12:
						printf("Pode jogar");
					break;
					case 25:
						printf("Pode jogar");
					break;
					case 26:
						printf("Pode jogar");
					break;
					case 27:
						printf("Pode jogar");
					break;
					case 28:
						printf("Pode jogar");
					break;
					case 29:
						printf("Pode jogar");
					break;
					case 30:
						printf("Pode jogar");
					break;
					case 31:
						printf("Pode jogar");
					break;
					case 32:
						printf("Pode jogar");
					break;
					case 33:
						printf("Pode jogar");
					break;
					case 34:                         
						printf("Pode jogar");
					break;
					case 35:                         
						printf("Pode jogar");
					break;
					case 48:                         
						printf("Pode jogar");
					break;
					default:
						printf("Você precisa cavar");
						break;					
				}
				break;
						
		case 25: // 1 verde
				switch(carta){
										
					case 1:
						printf("Pode jogar");
					break;
					case 13:
						printf("Pode jogar");
					break;
					case 24:
						printf("Pode jogar");
					break;
					case 26:
						printf("Pode jogar");
					break;
					case 27:
						printf("Pode jogar");
					break;
					case 28:
						printf("Pode jogar");
					break;
					case 29:
						printf("Pode jogar");
					break;
					case 30:
						printf("Pode jogar");
					break;
					case 31:
						printf("Pode jogar");
					break;
					case 32:
						printf("Pode jogar");
					break;
					case 33:
						printf("Pode jogar");
					break;
					case 34:                         
						printf("Pode jogar");
					break;
					case 35:                         
						printf("Pode jogar");
					break;
					case 37:                         
						printf("Pode jogar");
					break;
					default:
						printf("Você precisa cavar");
						break;					
				}
				break;
						
		case 26: // 2 verde
				switch(carta){
										
					case 2:
						printf("Pode jogar");
					break;
					case 14:
						printf("Pode jogar");
					break;
					case 24:
						printf("Pode jogar");
					break;
					case 25:
						printf("Pode jogar");
					break;
					case 27:
						printf("Pode jogar");
					break;
					case 28:
						printf("Pode jogar");
					break;
					case 29:
						printf("Pode jogar");
					break;
					case 30:
						printf("Pode jogar");
					break;
					case 31:
						printf("Pode jogar");
					break;
					case 32:
						printf("Pode jogar");
					break;
					case 33:
						printf("Pode jogar");
					break;
					case 34:                         
						printf("Pode jogar");
					break;
					case 35:                         
						printf("Pode jogar");
					break;
					case 38:                         
						printf("Pode jogar");
					break;
					default:
						printf("Você precisa cavar");
						break;					
				}
				break;
		
		case 27: // 3 verde
				switch(carta){
										
					case 3:
						printf("Pode jogar");
					break;
					case 15:
						printf("Pode jogar");
					break;
					case 24:
						printf("Pode jogar");
					break;
					case 25:
						printf("Pode jogar");
					break;
					case 26:
						printf("Pode jogar");
					break;
					case 28:
						printf("Pode jogar");
					break;
					case 29:
						printf("Pode jogar");
					break;
					case 30:
						printf("Pode jogar");
					break;
					case 31:
						printf("Pode jogar");
					break;
					case 32:
						printf("Pode jogar");
					break;
					case 33:
						printf("Pode jogar");
					break;
					case 34:                         
						printf("Pode jogar");
					break;
					case 35:                         
						printf("Pode jogar");
					break;
					case 39:                         
						printf("Pode jogar");
					break;
					default:
						printf("Você precisa cavar");
						break;					
				}
				break;
						
		case 28: // 4 verde
				switch(carta){
										
					case 4:
						printf("Pode jogar");
					break;
					case 16:
						printf("Pode jogar");
					break;
					case 24:
						printf("Pode jogar");
					break;
					case 25:
						printf("Pode jogar");
					break;
					case 26:
						printf("Pode jogar");
					break;
					case 27:
						printf("Pode jogar");
					break;
					case 29:
						printf("Pode jogar");
					break;
					case 30:
						printf("Pode jogar");
					break;
					case 31:
						printf("Pode jogar");
					break;
					case 32:
						printf("Pode jogar");
					break;
					case 33:
						printf("Pode jogar");
					break;
					case 34:                         
						printf("Pode jogar");
					break;
					case 35:                         
						printf("Pode jogar");
					break;
					case 40:                         
						printf("Pode jogar");
					break;
					default:
						printf("Você precisa cavar");
						break;					
				}
				break;
						
		case 29: // 5 verde
				switch(carta){
										
					case 5:
						printf("Pode jogar");
					break;
					case 17:
						printf("Pode jogar");
					break;
					case 24:
						printf("Pode jogar");
					break;
					case 25:
						printf("Pode jogar");
					break;
					case 26:
						printf("Pode jogar");
					break;
					case 27:
						printf("Pode jogar");
					break;
					case 28:
						printf("Pode jogar");
					break;
					case 30:
						printf("Pode jogar");
					break;
					case 31:
						printf("Pode jogar");
					break;
					case 32:
						printf("Pode jogar");
					break;
					case 33:
						printf("Pode jogar");
					break;
					case 34:                         
						printf("Pode jogar");
					break;
					case 35:                         
						printf("Pode jogar");
					break;
					case 41:                         
						printf("Pode jogar");
					break;
					default:
						printf("Você precisa cavar");
						break;					
				}
				break;
						
		case 30: // 6 verde
				switch(carta){
										
					case 6:
						printf("Pode jogar");
					break;
					case 18:
						printf("Pode jogar");
					break;
					case 24:
						printf("Pode jogar");
					break;
					case 25:
						printf("Pode jogar");
					break;
					case 26:
						printf("Pode jogar");
					break;
					case 27:
						printf("Pode jogar");
					break;
					case 28:
						printf("Pode jogar");
					break;
					case 29:
						printf("Pode jogar");
					break;
					case 31:
						printf("Pode jogar");
					break;
					case 32:
						printf("Pode jogar");
					break;
					case 33:
						printf("Pode jogar");
					break;
					case 34:                         
						printf("Pode jogar");
					break;
					case 35:                         
						printf("Pode jogar");
					break;
					case 42:                         
						printf("Pode jogar");
					break;
					default:
						printf("Você precisa cavar");
						break;					
				}
				break;
						
		case 31: // 7 verde
				switch(carta){
										
					case 7:
						printf("Pode jogar");
					break;
					case 19:
						printf("Pode jogar");
					break;
					case 24:
						printf("Pode jogar");
					break;
					case 25:
						printf("Pode jogar");
					break;
					case 26:
						printf("Pode jogar");
					break;
					case 27:
						printf("Pode jogar");
					break;
					case 28:
						printf("Pode jogar");
					break;
					case 29:
						printf("Pode jogar");
					break;
					case 30:
						printf("Pode jogar");
					break;
					case 32:
						printf("Pode jogar");
					break;
					case 33:
						printf("Pode jogar");
					break;
					case 34:                         
						printf("Pode jogar");
					break;
					case 35:                         
						printf("Pode jogar");
					break;
					case 43:                         
						printf("Pode jogar");
					break;
					default:
						printf("Você precisa cavar");
						break;					
				}
				break;
		
		case 32: // 8 verde
				switch(carta){
										
					case 8:
						printf("Pode jogar");
					break;
					case 20:
						printf("Pode jogar");
					break;
					case 24:
						printf("Pode jogar");
					break;
					case 25:
						printf("Pode jogar");
					break;
					case 26:
						printf("Pode jogar");
					break;
					case 27:
						printf("Pode jogar");
					break;
					case 28:
						printf("Pode jogar");
					break;
					case 29:
						printf("Pode jogar");
					break;
					case 30:
						printf("Pode jogar");
					break;
					case 31:
						printf("Pode jogar");
					break;
					case 33:
						printf("Pode jogar");
					break;
					case 34:                         
						printf("Pode jogar");
					break;
					case 35:                         
						printf("Pode jogar");
					break;
					case 44:                         
						printf("Pode jogar");
					break;
					default:
						printf("Você precisa cavar");
						break;					
				}
				break;
						
		case 33: // 9 verde
				switch(carta){
										
					case 9:
						printf("Pode jogar");
					break;
					case 21:
						printf("Pode jogar");
					break;
					case 24:
						printf("Pode jogar");
					break;
					case 25:
						printf("Pode jogar");
					break;
					case 26:
						printf("Pode jogar");
					break;
					case 27:
						printf("Pode jogar");
					break;
					case 28:
						printf("Pode jogar");
					break;
					case 29:
						printf("Pode jogar");
					break;
					case 30:
						printf("Pode jogar");
					break;
					case 31:
						printf("Pode jogar");
					break;
					case 32:
						printf("Pode jogar");
					break;
					case 34:                         
						printf("Pode jogar");
					break;
					case 35:                         
						printf("Pode jogar");
					break;
					case 45:                         
						printf("Pode jogar");
					break;
					default:
						printf("Você precisa cavar");
						break;					
				}
				break;			
			
		case 34: // carta +2 verde
				switch(carta){
										
					case 10:
						printf("Pode jogar");
					break;
					case 11:
						printf("Pode jogar");
					break;
					case 24:
						printf("Pode jogar");
					break;
					case 25:
						printf("Pode jogar");
					break;
					case 26:
						printf("Pode jogar");
					break;
					case 27:
						printf("Pode jogar");
					break;
					case 28:
						printf("Pode jogar");
					break;
					case 29:
						printf("Pode jogar");
					break;
					case 30:
						printf("Pode jogar");
					break;
					case 31:
						printf("Pode jogar");
					break;
					case 32:
						printf("Pode jogar");
					break;
					case 33:                         
						printf("Pode jogar");
					break;
					case 35:                         
						printf("Pode jogar");
					break;
					case 46:                         
						printf("Pode jogar");
					break;
					case 22:                         
						printf("Pode jogar");
					break;
					case 23:                         
						printf("Pode jogar");
					break;
					case 47:                         
						printf("Pode jogar");
					break;
					default:
						printf("Você precisa cavar");
						break;					
				}
				break;
		
		case 35: // carta +2 verde
				switch(carta){
										
					case 10:
						printf("Pode jogar");
					break;
					case 11:
						printf("Pode jogar");
					break;
					case 24:
						printf("Pode jogar");
					break;
					case 25:
						printf("Pode jogar");
					break;
					case 26:
						printf("Pode jogar");
					break;
					case 27:
						printf("Pode jogar");
					break;
					case 28:
						printf("Pode jogar");
					break;
					case 29:
						printf("Pode jogar");
					break;
					case 30:
						printf("Pode jogar");
					break;
					case 31:
						printf("Pode jogar");
					break;
					case 32:
						printf("Pode jogar");
					break;
					case 33:                         
						printf("Pode jogar");
					break;
					case 34:                         
						printf("Pode jogar");
					break;
					case 46:                         
						printf("Pode jogar");
					break;
					case 22:                         
						printf("Pode jogar");
					break;
					case 23:                         
						printf("Pode jogar");
					break;
					case 47:                         
						printf("Pode jogar");
					break;
					default:
						printf("Você precisa cavar");
						break;					
				}
				break;
						
		case 36: // 0 vermelho
				switch(carta){
										
					case 0:
						printf("Pode jogar");
					break;
					case 12:
						printf("Pode jogar");
					break;
					case 24:
						printf("Pode jogar");
					break;
					case 37:
						printf("Pode jogar");
					break;
					case 38:
						printf("Pode jogar");
					break;
					case 39:
						printf("Pode jogar");
					break;
					case 40:
						printf("Pode jogar");
					break;
					case 41:
						printf("Pode jogar");
					break;
					case 42:
						printf("Pode jogar");
					break;
					case 43:
						printf("Pode jogar");
					break;
					case 44:
						printf("Pode jogar");
					break;
					case 45:                         
						printf("Pode jogar");
					break;
					case 46:                         
						printf("Pode jogar");
					break;
					case 47:                         
						printf("Pode jogar");
					break;
					default:
						printf("Você precisa cavar");
						break;									
				}
				break;
						
		case 37: // 1 vermelho
				switch(carta){
										
					case 1:
						printf("Pode jogar");
					break;
					case 13:
						printf("Pode jogar");
					break;
					case 25:
						printf("Pode jogar");
					break;
					case 36:
						printf("Pode jogar");
					break;
					case 38:
						printf("Pode jogar");
					break;
					case 39:
						printf("Pode jogar");
					break;
					case 40:
						printf("Pode jogar");
					break;
					case 41:
						printf("Pode jogar");
					break;
					case 42:
						printf("Pode jogar");
					break;
					case 43:
						printf("Pode jogar");
					break;
					case 44:
						printf("Pode jogar");
					break;
					case 45:                         
						printf("Pode jogar");
					break;
					case 46:                         
						printf("Pode jogar");
					break;
					case 47:                         
						printf("Pode jogar");
					break;
					default:
						printf("Você precisa cavar");
						break;					
				}
				break;
						
		case 38: // 2 vermelho
				switch(carta){
										
					case 2:
						printf("Pode jogar");
					break;
					case 14:
						printf("Pode jogar");
					break;
					case 26:
						printf("Pode jogar");
					break;
					case 36:
						printf("Pode jogar");
					break;
					case 37:
						printf("Pode jogar");
					break;
					case 39:
						printf("Pode jogar");
					break;
					case 40:
						printf("Pode jogar");
					break;
					case 41:
						printf("Pode jogar");
					break;
					case 42:
						printf("Pode jogar");
					break;
					case 43:
						printf("Pode jogar");
					break;
					case 44:
						printf("Pode jogar");
					break;
					case 45:                         
						printf("Pode jogar");
					break;
					case 46:                         
						printf("Pode jogar");
					break;
					case 47:                         
						printf("Pode jogar");
					break;
					default:
						printf("Você precisa cavar");
						break;					
				}
				break;
		
		case 39: // 3 vermelho
				switch(carta){
										
					case 3:
						printf("Pode jogar");
					break;
					case 15:
						printf("Pode jogar");
					break;
					case 27:
						printf("Pode jogar");
					break;
					case 36:
						printf("Pode jogar");
					break;
					case 37:
						printf("Pode jogar");
					break;
					case 38:
						printf("Pode jogar");
					break;
					case 40:
						printf("Pode jogar");
					break;
					case 41:
						printf("Pode jogar");
					break;
					case 42:
						printf("Pode jogar");
					break;
					case 43:
						printf("Pode jogar");
					break;
					case 44:
						printf("Pode jogar");
					break;
					case 45:                         
						printf("Pode jogar");
					break;
					case 46:                         
						printf("Pode jogar");
					break;
					case 47:                         
						printf("Pode jogar");
					break;
					default:
						printf("Você precisa cavar");
						break;					
				}
				break;
		
		case 40: // 4 vermelho
				switch(carta){
										
					case 4:
						printf("Pode jogar");
					break;
					case 16:
						printf("Pode jogar");
					break;
					case 28:
						printf("Pode jogar");
					break;
					case 36:
						printf("Pode jogar");
					break;
					case 37:
						printf("Pode jogar");
					break;
					case 38:
						printf("Pode jogar");
					break;
					case 39:
						printf("Pode jogar");
					break;
					case 41:
						printf("Pode jogar");
					break;
					case 42:
						printf("Pode jogar");
					break;
					case 43:
						printf("Pode jogar");
					break;
					case 44:
						printf("Pode jogar");
					break;
					case 45:                         
						printf("Pode jogar");
					break;
					case 46:                         
						printf("Pode jogar");
					break;
					case 47:                         
						printf("Pode jogar");
					break;
					default:
						printf("Você precisa cavar");
						break;					
				}
				break;
				
		case 41: // 5 vermelho
				switch(carta){
										
					case 5:
						printf("Pode jogar");
					break;
					case 17:
						printf("Pode jogar");
					break;
					case 29:
						printf("Pode jogar");
					break;
					case 36:
						printf("Pode jogar");
					break;
					case 37:
						printf("Pode jogar");
					break;
					case 38:
						printf("Pode jogar");
					break;
					case 39:
						printf("Pode jogar");
					break;
					case 40:
						printf("Pode jogar");
					break;
					case 42:
						printf("Pode jogar");
					break;
					case 43:
						printf("Pode jogar");
					break;
					case 44:
						printf("Pode jogar");
					break;
					case 45:                         
						printf("Pode jogar");
					break;
					case 46:                         
						printf("Pode jogar");
					break;
					case 47:                         
						printf("Pode jogar");
					break;
					default:
						printf("Você precisa cavar");
						break;					
				}
				break;
		
		case 42: // 6 vermelho
				switch(carta){
										
					case 6:
						printf("Pode jogar");
					break;
					case 18:
						printf("Pode jogar");
					break;
					case 30:
						printf("Pode jogar");
					break;
					case 36:
						printf("Pode jogar");
					break;
					case 37:
						printf("Pode jogar");
					break;
					case 38:
						printf("Pode jogar");
					break;
					case 39:
						printf("Pode jogar");
					break;
					case 40:
						printf("Pode jogar");
					break;
					case 41:
						printf("Pode jogar");
					break;
					case 43:
						printf("Pode jogar");
					break;
					case 44:
						printf("Pode jogar");
					break;
					case 45:                         
						printf("Pode jogar");
					break;
					case 46:                         
						printf("Pode jogar");
					break;
					case 47:                         
						printf("Pode jogar");
					break;
					default:
						printf("Você precisa cavar");
						break;				
				}
				break;
		
		case 43: // 7 vermelho
				switch(carta){
										
					case 7:
						printf("Pode jogar");
					break;
					case 19:
						printf("Pode jogar");
					break;
					case 31:
						printf("Pode jogar");
					break;
					case 36:
						printf("Pode jogar");
					break;
					case 37:
						printf("Pode jogar");
					break;
					case 38:
						printf("Pode jogar");
					break;
					case 39:
						printf("Pode jogar");
					break;
					case 40:
						printf("Pode jogar");
					break;
					case 41:
						printf("Pode jogar");
					break;
					case 42:
						printf("Pode jogar");
					break;
					case 44:
						printf("Pode jogar");
					break;
					case 45:                         
						printf("Pode jogar");
					break;
					case 46:                         
						printf("Pode jogar");
					break;
					case 47:                         
						printf("Pode jogar");
					break;
					default:
						printf("Você precisa cavar");
						break;					
				}
				break;
					
		case 44: // 8 vermelho
				switch(carta){
										
					case 8:
						printf("Pode jogar");
					break;
					case 20:
						printf("Pode jogar");
					break;
					case 32:
						printf("Pode jogar");
					break;
					case 36:
						printf("Pode jogar");
					break;
					case 37:
						printf("Pode jogar");
					break;
					case 38:
						printf("Pode jogar");
					break;
					case 39:
						printf("Pode jogar");
					break;
					case 40:
						printf("Pode jogar");
					break;
					case 41:
						printf("Pode jogar");
					break;
					case 42:
						printf("Pode jogar");
					break;
					case 43:
						printf("Pode jogar");
					break;
					case 45:                         
						printf("Pode jogar");
					break;
					case 46:                         
						printf("Pode jogar");
					break;
					case 47:                         
						printf("Pode jogar");
					break;
					default:
						printf("Você precisa cavar");
						break;					
				}
				break;
		
		case 45: // 9 vermelho
				switch(carta){
										
					case 9:
						printf("Pode jogar");
					break;
					case 21:
						printf("Pode jogar");
					break;
					case 33:
						printf("Pode jogar");
					break;
					case 36:
						printf("Pode jogar");
					break;
					case 37:
						printf("Pode jogar");
					break;
					case 38:
						printf("Pode jogar");
					break;
					case 39:
						printf("Pode jogar");
					break;
					case 40:
						printf("Pode jogar");
					break;
					case 41:
						printf("Pode jogar");
					break;
					case 42:
						printf("Pode jogar");
					break;
					case 43:
						printf("Pode jogar");
					break;
					case 44:                         
						printf("Pode jogar");
					break;
					case 46:                         
						printf("Pode jogar");
					break;
					case 47:                         
						printf("Pode jogar");
					break;
					default:
						printf("Você precisa cavar");
						break;					
				}
				break;
		
		case 46: // carta +2 vermelho
				switch(carta){
										
					case 10:
						printf("Pode jogar");
					break;
					case 11:
						printf("Pode jogar");
					break;
					case 22:
						printf("Pode jogar");
					break;
					case 23:
						printf("Pode jogar");
					break;
					case 36:
						printf("Pode jogar");
					break;
					case 37:
						printf("Pode jogar");
					break;
					case 38:
						printf("Pode jogar");
					break;
					case 39:
						printf("Pode jogar");
					break;
					case 40:
						printf("Pode jogar");
					break;
					case 41:
						printf("Pode jogar");
					break;
					case 42:
						printf("Pode jogar");
					break;
					case 43:
						printf("Pode jogar");
					break;
					case 44:                         
						printf("Pode jogar");
					break;
					case 45:                         
						printf("Pode jogar");
					break;
					case 47:                         
						printf("Pode jogar");
					break;
					default:
						printf("Você precisa cavar");
						break;					
				}
				break;
						
		case 47: // carta +2 vermelho
				switch(carta){
										
					case 10:
						printf("Pode jogar");
					break;
					case 11:
						printf("Pode jogar");
					break;
					case 22:
						printf("Pode jogar");
					break;
					case 23:
						printf("Pode jogar");
					break;
					case 36:
						printf("Pode jogar");
					break;
					case 37:
						printf("Pode jogar");
					break;
					case 38:
						printf("Pode jogar");
					break;
					case 39:
						printf("Pode jogar");
					break;
					case 40:
						printf("Pode jogar");
					break;
					case 41:
						printf("Pode jogar");
					break;
					case 42:
						printf("Pode jogar");
					break;
					case 43:
						printf("Pode jogar");
					break;
					case 44:                         
						printf("Pode jogar");
					break;
					case 45:                         
						printf("Pode jogar");
					break;
					case 46:                         
						printf("Pode jogar");
					break;
					default:
						printf("Você precisa cavar");
						break;					
				}
				break;
		
			}	
	}
}

void turno(tplista *j1,tp_pilha mc){
	
	int fim=0,vez=1;
	
	do{
		switch (vez){
			case 1: //vez do jogador
				
				
				comparar_monte_mao();
				
				if (lista_vazia(j1)){ 
					printf ("\n\n\tParabêns !! Você ganhou!\n");
					fim++;
				}else{					
					printf ("\n\n Agora é a vez do adversario...");
					vez=2;
				}
				break;
				
			case 2: //vez do computador
				//colocar aqui a função de ação do computador
				if (pilha_vazia(&mc)){
					printf("\n\n\tVixe... Perdeu, pae !! Tenta de novo aê...");
					fim++;
				}else{
					vez=1;
					printf ("\n\n Agora é a sua vez!");
				}
				break;
		}
	} while (fim=0);
}*/

DC(tplista *j1,tp_pilha mc,tp_pilha deck){	//Distribui Cartas
	
	int i;
	tipo m,n;
	
	for(i=0;i<7;i++){
		pop(&deck,&m);
		insere_lista_ordenada(&j1,m);//tira do Deck e vai pra mão do jogador
		
		pop(&deck,&n);
		push(&mc,n);
	}
	
	imprime_pilha(deck);
	printf("\n\nMão Jogador\n");
	imprime_lista(j1);
	printf("\n\nMão Computador\n");
	imprime_pilha(mc);
}

int main(){
	
	system("color f0");
	setlocale(LC_ALL,"portuguese");
	tp_pilha deck,mc,monte;
	tipo e;
	tplista *j1;
	int emb[52],embaux[52];
	
	j1=inic_lista();
	inic_pilha(&deck);
	inic_pilha(&mc);
	inic_pilha(&monte);
	srand(time(NULL));
	
	int i,k;
	tipo m,n,o;
	
	embaralhar(emb,embaux);
	//layout_tela();
	
	for (k=0;k<52;k++){//Empilha todos valores de emb no Deck
		push(&deck,emb[k]);
	}
	imprime_pilha(deck);
	//mostratopo(&deck,&e);
	
	//pop(&deck,&e);
		
	DC(j1,mc,deck);
		
	/*printf("\n\nMão Computador\n");
	imprime_pilha(mc);
	printf("\n\nMão Jogador\n");
	imprime_lista(j1);
	printf("\n\nPrimeira carta do monte\n");
	imprime_pilha(monte);
	printf("\n\n\n");*/
}
