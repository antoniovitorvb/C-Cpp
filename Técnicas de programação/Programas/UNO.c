/*	JOGO UNO

INTEGRANTES:
	- Antonio Vitor Villas Bôas
	- Gabriel Guerreiro
*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>
#include"pilha.h"
#include"lista.h"
#include<windows.h>

int vez,x,y;

int tlv(tplista *j1,int vet[52],int tam){ //Transfere Lista para um Vetor auxiliar
	//printf("   %d",l->info);
	int i;
	tipo n;
	for(i=0;i<tam;i++){
		n=j1->info;
		j1=j1->prox;
		//printf("\n\n\t\t%d",n);
		vet[i]=n;
	}
	/*for(i=0;i<tam;i++){
		printf("   %d",vet[i]);
	}*/
}

int imprime_carta(tplista *j1,int vet[52],int tam){ //Traduz o catálogo para número e cor da carta
    
    tlv(j1,vet,tam);
	int n,i;
        
	for(i=0;i<tam;i++){
	
		n=vet[i];
		switch (n){
           
           case 0:
                printf ("\tAm 0");
                break;         
           
           case 1:
                printf ("\tAm 1");
                break;
           
           case 2:
               printf ("\tAm 2");
                break;
                
            case 3:
                printf ("\tAm 3");
                break;      
                
            case 4:
                printf ("\tAm 4");
                break;               
                
            case 5:
                printf ("\tAm 5");
                break;               
                
            case 6:
                printf ("\tAm 6");
                break;              

           case 7:
                printf ("\tAm 7");
                break;

           case 8:
                printf ("\tAm 8");
                break;

           case 9:
                printf ("\tAm 9");
                break;

           case 10:
                printf ("\tAm +2");
                break;

           case 11:
                printf ("\tAm +2");
                break;

           case 12:
                printf ("\tAz 0");
                break;

           case 13:
                printf ("\tAz 1");
                break;

           case 14:
                printf ("\tAz 2");
                break;

           case 15:
                printf ("\tAz 3");
                break;

           case 16:
                printf ("\tAz 4");
                break;

           case 17:
                printf ("\tAz 5");
                break;

           case 18:
                printf ("\tAz 6");
                break;

           case 19:
                printf ("\tAz 7");
                break;

           case 20:
                printf ("\tAz 8");
                break;

           case 21:
                printf ("\tAz 9");
                break;

           case 22:
                printf ("\tAz +2");
                break;

           case 23:
                printf ("\tAz +2");
                break;

           case 24:
                printf ("\tVd 0");
                break;

           case 25:
                printf ("\tVd 1");
                break;

           case 26:
                printf ("\tVd 2");
                break;

           case 27:
                printf ("\tVd 3");
                break;

           case 28:
                printf ("\tVd 4");
                break;

           case 29:
                printf ("\tVd 5");
                break;

           case 30:
                printf ("\tVd 6");
                break;

           case 31:
                printf ("\tVd 7");
                break;

           case 32:
                printf ("\tVd 8");
                break;

           case 33:
                printf ("\tVd 9");
                break;

           case 34:
                printf ("\tVd +2");
                break;

           case 35:
                printf ("\tVd +2");
                break;
                
           case 36:
                printf ("\tVm 0");
                break;

           case 37:
                printf ("\tVm 1");
                break;

           case 38:
                printf ("\tVm 2");
                break;
                
           case 39:
                printf ("\tVm 3");
                break;

           case 40:
                printf ("\tVm 4");
                break;

           case 41:
                printf ("\tVm 5");
                break;

           case 42:
                printf ("\tVm 6");
                break;

           case 43:
                printf ("\tVm 7");
                break;

           case 44:
                printf ("\tVm 8");
                break;

           case 45:
               printf ("\tVm 9");
               break;

           case 46:
                printf ("\tVm +2");
                break;

           case 47:
                printf ("\tVm +2");
                break;

           case 48:
                printf ("\t+4");
                break;

           case 49:
                printf ("\t+4");
                break;

           case 50:
                printf ("\tCoringa");
                break;

           case 51:
                printf ("\tCoringa");
                break;

           default:
                printf ("A carta não existe");
                break;
           }        
    }
}

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

void menu(){

    int OP, op, back=1;
     
	do{
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
        		printf ("\n\n\n\t Que os jogos comecem... Jogador, você começa! \n\n	[Tecle 1 para começar]\n\n");
        		scanf("%d",&op); //DAR VALOR A VARIALVEL PARA TOMADA DE DECISÃO (JOGAR OU VOLTAR)
        		system("cls"); // LIMPAR A TELA PARA APARENTAR QUE MUDOU DE TELA
        		back=0; // VARIAVEL PARA FAZER O PROGRAMA VOLTAR PARA O INICIO
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
        	break;
          
			default:
      			printf ("\n\n\n\n Escreva uma das funções anteriores\n");
		        system ("pause");
    	    break;
    	}
    }while (back!=0);// CONDIÇÃO PARA FORÇAR O JOGO A VOLTAR AO INICIO.

//system ("pause"); //ACABOU
}

void cava_jog(tplista *j1, int x,tp_pilha deck){ //Recebe a mão do jogador e quantas cartas irá cavar
 
	int i;
	tipo e;
	
	for(i=0;i<x;i++){
		pop(&deck,&e);
		insere_lista_ordenada(&j1,e);
	}
}

void cava_COM(tp_pilha mc,int x,tp_pilha deck){ //Recebe a mão do computador e quantas cartas irá cavar
	
	int i;
	tipo e;
	
	for(i=0;i<x;i++){
		pop(&deck,&e);
		push(&mc,e);
	}
}

int coringa(tp_pilha monte,int vez,tplista *j1,tp_pilha mc,tp_pilha deck){ //50 ou 51(catálogo)
	
	int cor,t;
	tipo e,f;
	
	pop(&monte,&e);
	
	if(vez==1){ //vez do Jogador
		printf("\n\n\t\tSelecione uma cor para trocar:\n"
			   "\t\t\t1) Amarelo\n"
			   "\t\t\t2) Azul\n"
			   "\t\t\t3) Verde\n"
			   "\t\t\t4) Vermelho\n\n\t");
			   scanf("%d",cor);
			   return cor;
	}else{ //Vez do computador
		srand(time(NULL));
		t=rand()%3+1;
		switch(t){
			case 1:
				printf("\n\n\tO COM escolheu Amarelo!\n\n");
				return 1;
				break;
			case 2:
				printf("\n\n\tO COM escolheu Azul!\n\n");
				return 2;
				break;
			case 3:
				printf("\n\n\tO COM escolheu Verde!\n\n");
				return 3;
				break;
			case 4:
				printf("\n\n\tO COM escolheu Vermelho!\n\n");
				return 4;
				break;			
		}
	}
}

int acao_COM(tplista *j1,tp_pilha monte,tp_pilha deck,tp_pilha mc,tp_pilha mcaux,int x){ //Define que ação o COM irá tomar partir da carta do monte
	
	tipo e,m,n;
	
	mostratopo(&monte,&e);
	
	if(e>=0&&e<=9){ //Carta -> número Amarelo
		while(n!=0||n!=1||n!=2||n!=3||n!=4||n!=5||n!=6||n!=7||n!=8||n!=9||n!=11||n!=12||n!=48||n!=49||n!=50||n!=51||n!=e+12||n!=e+24||n!=e+36||!pilha_vazia(&mc)){
			pop(&mc,&n);
			push(&mcaux,n);
		}
		if(pilha_vazia(&mc)){
			x=1;
			cava_COM(mc,x,deck);
		}else{
			push(&monte,n);  //põe a carta certa no monte
		} 
		
		while(!pilha_vazia(&mcaux)){
			pop(&mcaux,&m);
			push(&mc,m);
		}
	}
	
	if(e>=12&&e<=21){ //Carta -> número Azul
		while(n!=12||n!=13||n!=14||n!=15||n!=16||n!=17||n!=18||n!=19||n!=20||n!=21||n!=22||n!=23||n!=e-12||n!=e+12||n!=e+24||n!=48||n!=49||n!=50||n!=51||!pilha_vazia(&mc)){
			pop(&mc,&n);
			push(&mcaux,n);	
		}
		if(pilha_vazia(&mc)){
			x=1;
			cava_COM(mc,x,deck);
		}else{
			push(&monte,n);
		}
	
		while(!pilha_vazia(&mcaux)){
			pop(&mcaux,&m);
			push(&mc,m);
		}		
	}
	
	if(e>=24&&e<=33){ //Carta -> número Verde
		while(n!=24||n!=25||n!=26||n!=27||n!=28||n!=29||n!=30||n!=31||n!=32||n!=33||n!=34||n!=35||n!=e-24||n!=e-12||n!=e+12||n!=48||n!=49||n!=50||n!=51||!pilha_vazia(&mc)){
			pop(&mc,&n);
			push(&mcaux,n);	
		}
		if(pilha_vazia(&mc)){
			x=1;
			cava_COM(mc,x,deck);
		}else{
			push(&monte,n);
		}
	
		while(!pilha_vazia(&mcaux)){
			pop(&mcaux,&m);
			push(&mc,m);
		}		
	}
	
	if(e>=36&&e<=45){ //Carta -> número Vermelho
		while(n!=36||n!=37||n!=38||n!=39||n!=40||n!=41||n!=42||n!=43||n!=44||n!=45||n!=46||n!=47||n!=e-36||n!=e-24||n!=e-12||n!=48||n!=49||n!=50||n!=51||!pilha_vazia(&mc)){
			pop(&mc,&n);
			push(&mcaux,n);
		}
		if(pilha_vazia(&mc)){
			x=1;
			cava_COM(mc,x,deck);
		}else{
			push(&monte,n);
		}
			
		while(!pilha_vazia(&mcaux)){
			pop(&mcaux,&m);
			push(&mc,m);
		}		
	}
	
	if(e==10||e==11||e==22||e==23||e==34||e==35||e==46||e==47){ //Carta -> +2
		while(n!=10||n!=11||n!=22||n!=23||n!=34||n!=35||n!=46||n!=47||n!=48||n!=48||!pilha_vazia(&mc)){
			pop(&mc,&n);
			push(&mcaux,n);
		}
		if(pilha_vazia(&mc)){
			x=2;
			cava_COM(mc,x,deck);
		}else{
			push(&monte,n);
			x=x+2;
		}
		
		while(!pilha_vazia(&mcaux)){
			pop(&mcaux,&m);
			push(&mc,m);
		}
	}
	
	if(e==48||e==49){
		while(n!=48||n!=49||!pilha_vazia(&mc)){
			pop(&mc,&n);
			push(&mcaux,n);
		}
		if(pilha_vazia(&mc)){
			x=x+2;
			cava_COM(mc,x,deck);
		}else{
			push(&monte,n);
		}
	}
	
	if(e==50||e==51){ //Carta -> Troca de Cor
		
	}
	
}

int turno(tplista *j1,tp_pilha mc,tp_pilha mcaux,tp_pilha deck,tp_pilha monte, int x,int vez,int vet[52],int tam){ //Gere a vez de quem jogará até uma das mãos acabarem as cartas
	
	int fim=0;
	vez=1;
	
	do{
		switch (vez){
			case 1: //vez do jogador 
				imprime_carta(j1,vet,tam);
				
				if (lista_vazia(j1)){ 
					printf ("\n\n\tAê pae! Você ganhou desse não-serumaninho\n\n\n");
					fim++;
					system("pause");
				}else{
					printf ("\n\n\tAgora é a vez do adversario...");
					vez=2;
				}
				break;
				
			case 2: //vez do computador
				//colocar aqui a função de ação do computador
				if (pilha_vazia(&mc)){
					printf("\n\n\tPôo pae... Perdeu pro Computador?! Tô dilatado com essa sua burrice! O.o\n\n\n");
					fim++;
					system("pause");
				}
				else{
					
					printf ("\n\n Agora é a sua vez!");
					vez=1;
				}
		}
	}while(fim=0);
	system("pause");
}

int main(){
	
	system("color f0");
	setlocale(LC_ALL,"portuguese");
	
	tp_pilha deck,monte;
	tp_pilha mc,mcaux;	//Mão do Computador
	tplista *j1;	//Mão do Jogador
	int emb[52],embaux[52];
	
	j1=inic_lista();
	inic_pilha(&deck);
	inic_pilha(&mc);	inic_pilha(&mcaux);
	inic_pilha(&monte);
	
	int i,k,tam;
	int vet[52];
	tipo m,n,e;
	
	menu();
	
	embaralhar(emb,embaux);
	
	for (k=0;k<52;k++){//Empilha todos valores de emb no Deck
		push(&deck,emb[k]);
	}
	//imprime_pilha(deck);
	for(i=0;i<7;i++){
		pop(&deck,&m);
		insere_lista_ordenada(&j1,m);//tira do Deck e vai pra mão do jogador
		
		pop(&deck,&n);
		push(&mc,n);
	}
	/*imprime_pilha(deck);
	printf("\n\nMão Jogador\n");
	imprime_lista(j1);
	printf("\n\nMão Computador\n");
	imprime_pilha(mc);*/
	tam=tamanho_lista(j1);		

	pop(&deck,&e);
	push(&monte,e); //põe a primeira carta na mesa
	//imprime_pilha(monte);
	
	imprime_carta(j1,vet,tam);
	printf("\n\n\n\n\n\n\n\n");
	
	while(!lista_vazia(j1)||(!pilha_vazia(&mc)&&!pilha_vazia(&mcaux)){ //Sairá do laço quando a mão do jogador ou do COM estiver vazia
		turno(j1,mc,mcaux,deck,monte,x,vez,vet,tam);
	}
}
