#include<stdlib.h>
#include<stdio.h>
#include"lista.h"
#include"Pilha.h"
#include<string.h>
#include<windows.h>
#include<time.h>
#include<windows.h>
//endereço :
//vermelha1: 0 a 18 ; (19,20=block; 21,22=vv; 23,24=+2)
//amarela:  24 a 22 (23 24 25)
//Verde: 26 a 35 (36 37 38)
//azul 39 48 ( 49 50 51)
//c++4: 52; C: 53




tp_pilha monte;
tipo vmonte[107];
int cave; //acumula a quantidade de cartas a serem cavadas durante uma sequencia de cartas ++2 ou ++4. O player só cava o equivalente ao cave quando ele n tem mais ++2 ou ++4 na mão.
tp_pilha pilha;
int vez=0; //quando vez=1, a vezé do player 1, quando vez=2, a vezé do player 2.
char s1[10], s2[10];

//	srand(time(NULL));


void gotoxy(int x, int y)
{
     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){x-1,y-1});
}

void embaralhar(int vet[], int vetSize) //embaralha os endereços do vetor
{
	int i;
	srand(time(NULL));
	for (i = 0; i < vetSize; i++)
	{	
			//srand(time(NULL));
		int r = rand() % vetSize;

		int temp = vet[i];
		vet[i] = vet[r];
		vet[r] = temp;
	}
}

void define_senha()
{
	system("cls");
	gotoxy(15,12);
	printf("Player 1, digite sua senha de no maximo 10 letras: ");
	gets(s1);
	system("cls");
	gotoxy(15,12);
	printf("Player 2, digite sua senha de no maximo 10 letras: ");
	gets(s2);
}

int senha()
{
	system("cls");
	gotoxy(25,12);
	char s[10];
	while(1)
	{
	
	if(vez==1)
	{

		printf("Player 1, digite sua senha:");
		gets(s);
		if(!strcmp(s,s1)) return 1;
		else 
		{ 
		  system("cls");
		  gotoxy(26,12);
		  printf("Senha incorreta\n");	
		  
		  
		  
		}
	}
	if(vez==2)
	{
		system("cls");
		printf("Player 2, digite sua senha:");
		gets(s);
		if(!strcmp(s,s2)) return 1;
		else 
		{ 
		  system("cls");
		  gotoxy(25,12);
		  printf("Senha incorreta");	
		}
	}
	}
}

void descarte()
{
	int i; //variável que é ativada se a carta eh impar
	int x; //ultima carta do descarte
	int z=1;
	system("cls");
	gotoxy(22,12); printf("Descarte: ");

 		pop(&pilha,&x); //retira a ultima carta do descarte para ver qual é e a coloca de novo no descarte
 		push(&pilha,x); //printf("%d",x);
 		
 		if(!pilha_vazia(&pilha))
		 {
		   
		if(x%2==0) i=0; //par
		else i=1; //impar
	
			if(x>=0&&x<=18)//verme
	{
		if(x==0) printf("(VM%d)", 0);
		else
		{
		if(i) printf("(VM%d)", (x+1)/2 );
		else printf("(VM%d)",(x/2));
		}
	}
	else if(x>=25&&x<=43)//Amarelo
	{
		if(x==25) printf("(AM%d)", 0);
		else
		{
		if(i) printf("(AM%d)", (x-1)/2 -12);
		else printf("(AM%d)",(x/2)-12);
		}
	}
	 else if(x>=50&&x<=68)//Verde
	{
		if(x==50) printf("(VD%d)", 0);
		else
		{
		if(i) printf("(VD%d)", (x+1)/2 -25);
		else printf("(VD%d)",(x/2)-25);
		}
	}
	 else if(x>=75&&x<=93)//Azul
	{
		if(x==75) printf("(AZ%d)", 0);
		else
		{
		if(i) printf("(AZ%d)", (x-1)/2 -37);
		else printf("(AZ%d)",(x/2)-37);
		}
	}
		//Para cartas especiais:
		else if(x==19||x==20) printf("(VM++2)");
		else if(x==21||x==22) printf("(VMTR)");
		else if(x==23||x==24) printf("(VMBK)");
		else if(x==44||x==45) printf("(AM++2)");
		else if(x==46||x==47) printf("(AMTR)");
		else if(x==48||x==49) printf("(AMBK)");
		else if(x==69||x==70) printf("(VD++2)");
		else if(x==71||x==72) printf("(VDTR)");
		else if(x==73||x==74) printf("(VDBK)");
		else if(x==94||x==95) printf("(AZ++2)");
		else if(x==96||x==97) printf("(AZTR)");
		else if(x==98||x==99) printf("(AZBK)");
		//CORINGAS

		else if(x==1000) printf("Vermelha");
		else if(x==2000) printf("Amarela");
		else if(x==3000) printf("Verde");
		else if(x==4000) printf("Azul");
	}
		
	}

void imprime_jogo(tplista *l) //recebe o player que está jogando
{
	//system("cls");
	int i; //variável que é ativada se a carta eh impar
	tipo x=0; //carta
	int z=1;

	//printf("%d"l->info);					
		descarte();
		
		gotoxy(1,1); printf("Player %d",vez);
		gotoxy(50,5); printf("Cave acumulado: %d",cave); 

		//	gotoxy(3,23); imprime_lista(l);

	gotoxy(2,21);
	
	while(l!=NULL) //imprime as cartas do jogador
	{
		
		x=l->info;
		if(x%2==0) i=0; //par
		else i=1; //impar
		printf("| %d carta",z);
		if(x>=0&&x<=18){//verme
	
			if(x==0) printf("(VM%d)", 0);
			else{
			
				if(i) printf("(VM%d)", (x+1)/2 );
				else printf("(VM%d)",(x/2));
			}
	
		}else{ 
			if(x>=25&&x<=43)//Amarelo
	
			if(x==25) printf("(AM%d)", 0);
			else{
				if(i) printf("(AM%d)", (x-1)/2 -12);
				else printf("(AM%d)",(x/2)-12);
			}
		}else 	
	 		if(x>=50&&x<=68){//Verde
	
				if(x==50) printf("(VD%d)", 0);
				else{
		
					if(i) printf("(VD%d)", (x+1)/2 -25);
					else printf("(VD%d)",(x/2)-25);
				}
			}else
	  			if(x>=75&&x<=93){//Azul
	
					if(x==75) printf("(AZ%d)", 0);
					else{
		
						if(i) printf("(AZ%d)", (x-1)/2 -37);
						else printf("(AZ%d)",(x/2)-37);
					}
				}
		//Para cartas especiais:
		else if(x==19||x==20) printf("(VM++2)");
		else if(x==21||x==22) printf("(VMTR)");
		else if(x==23||x==24) printf("(VMBK)");
		else if(x==44||x==45) printf("(AM++2)");
		else if(x==46||x==47) printf("(AMTR)");
		else if(x==48||x==49) printf("(AMBK)");
		else if(x==69||x==70) printf("(VD++2)");
		else if(x==71||x==72) printf("(VDTR)");
		else if(x==73||x==74) printf("(VDBK)");
		else if(x==94||x==95) printf("(AZ++2)");
		else if(x==96||x==97) printf("(AZTR)");
		else if(x==98||x==99) printf("(AZBK)");
		//CORINGAS
		else if(x>=100&&x<=103) printf("(C++4)");
		else if(x>=104&&x<=107) printf("(Cor)");
		
		
		printf("|");
		l=l->prox;
		z++;

			};
				gotoxy(2,18); printf("Cave (666) ou selecione a posicao da carta que quer jogar: ");
}

void cava(tplista **p, int x)//recebe o player que vai cavar e a quantidade de cartas
{ 

	int i;
	tipo y;
	
	for(i=0;i<x;i++)
	{
	
	pop(&monte,&y);
	insere_lista_ordenada(p,y);
	
	}
}

void coringa(int carta) // se o player colocar uma coringa, define a cor que ele quer no jogo e aumenta o cava
{
	int a;

	
	if(carta==100||carta==101||carta==102||carta==103)//terminar
	{
		cave=cave+4;
	}
	gotoxy(2,18);
	printf("Aperte 1 para vermelho, 2 para amarelo, 3 para verde, 4 para azul: ");
	scanf("%d",&a);fflush(stdin);
	if(a==1) push(&pilha, 1000); //define a cor como vermelha
	else if (a==2) push(&pilha, 2000);//amarelo
	else if (a==3) push(&pilha, 3000);//verde
	else if(a==4) push(&pilha, 4000);//azul
	
}


int insere_na_pilha(tplista **p,tipo carta)//recebe o player e o ip da carta que ele quer inserir na pilha e a pilha.
{   
	int g;
	tipo last; //ultima carta da pilha, útil para verificar se o player pode inserir a carta que ele quer.
	pop(&pilha,&last);//salva a ultima carta da pilha em last
	push(&pilha,last);
	//esse if insere uma carta vermelha:
	if(((last>=0)&&(last<=24)||(last==1000))&&((carta>=0)&&(carta<=24))) //1000 refere a cor vermelha. Se o player anterior tiver colocado uma coringa e esolhido a cor vermelha, a ultima carta da pilha é 1000
	{

	  
	  push(&pilha,carta);	//insere a carta na pilha
	  remove_lista(p,carta);//remove a carta do player;
	  if(carta==19||carta==20||carta==21||carta==22||carta==23||carta==24) //se for uma carta especial vermelha
	  {
	  
	  if(carta==19||carta==20)//carta ++2
	  {
	   cave=cave+2;
	   	if(vez ==1) vez=2;
	  	else vez=1; return 1;
	   
	  }
	  else if(carta==21||carta==22) //troca
	  {
	  	if(vez ==1) vez=1;
	  	else vez=2;
	  	cava(p,cave);
	  	cave=0; return 1;
	  } 
	  else if(carta==23||carta==24) //BLOCK
	  {
	  	if(vez ==1) vez=1;
	  	else vez=2;
	  	cava(p,cave);
	  	cave=0; return 1;
	  }
	  
	  }
	  else if(carta>=0&&carta<=19) //carta num
	  {
	  	
	  	if(vez ==1) vez=2;
	  	else vez=1;
	  	cava(p,cave);
	  	cave=0; return 1;
	  	
	  	
	  }
	  //else return 0;
	 
	}
	//esse if insere carta amarela:
	else if((last>=25&&last<=49||last==2000)&&(carta>=25&&carta<=49)) //coringa referente a amarelo é 2000.
	{
	  
	  push(&pilha,carta);	//insere a carta na pilha
	  remove_lista(p,carta);//remove a carta do player;
	  if(carta==44||carta==45||carta==46||carta==47||carta==48||carta==49) //se for uma carta especial amarela
	  {
	  
	  if(carta==44||carta==45)//carta ++2
	  {
	   cave=cave+2;
	   	if(vez ==1) vez=2;
	  	else vez=1; return 1;
	   
	  }
	  else if(carta==46||carta==47) //troca
	  {
	  	if(vez ==1) vez=1;
	  	else vez=2;
	  	cava(p,cave);
	  	cave=0; return 1;
	  } 
	  else if(carta==48||carta==49) //BLOCK
	  {
	  	if(vez ==1) vez=1;
	  	else vez=2;
	  	cava(p,cave);
	  	cave=0; return 1;
	  }
	  
	  }
	  else if(carta>=25<=43) //carta num
	  {
	  	
	  	if(vez ==1) vez=2;
	  	else vez=1;
	  	cava(p,cave);
	  	cave=0; return 1;
	  	
	  	
	  }
	//  else return 0;
	}
	
	
		//esse if insere cartas verdes:
		else if((last>=50&&last<=74||last==3000)&&(carta>=50&&carta<=74)) //coringa referente a verde é 3000.
	{
	  push(&pilha,carta);	//insere a carta na pilha
	  remove_lista(p,carta);//remove a carta do player;
	  

	  if(carta==69||carta==74||carta==70||carta==71||carta==72||carta==73) //se for uma carta especial verde
	  {
	  
	  if(carta==69||carta==70)//carta ++2
	  {
	   cave=cave+2;
	   	if(vez ==1) vez=2;
	  	else vez=1;return 1;
	   
	  }
	  else if(carta==71||carta==72) //troca
	  {
	  	if(vez ==1) vez=1;
	  	else vez=2;
	  	cava(p,cave);
	  	cave=0;return 1;
	  } 
	  else if(carta==73||carta==74) //BLOCK
	  {
	  	if(vez ==1) vez=1;
	  	else vez=2;
	  	cava(p,cave);
	  	cave=0;return 1;
	  }
	  
	  }
	  else if(carta>=50&&carta<=68) //carta num
	  {
	  	
	  	if(vez ==1) vez=2;
	  	else vez=1;
	  	cava(p,cave);
	  	cave=0; return 1;
	  	
	  	
	  }
	 // else return 0;
	}
	
	
		//esse if insere cartas azuis:
		else if((last>=75&&last<=99||last==4000)&&(carta>=75&&carta<=99)) //coringa referente a azul é 4000.
	{
	  
	  push(&pilha,carta);	//insere a carta na pilha
	  remove_lista(p,carta);//remove a carta do player;
	  if(carta==94||carta==95||carta==96||carta==97||carta==98||carta==99) //se for uma carta especial azul
	  {
	  
	  if(carta==94||carta==95)//carta ++2
	  {
	   cave=cave+2;
	   	if(vez ==1) vez=2;
	  	else vez=1;return 1;
	   
	  }
	  else if(carta==96||carta==97) //troca
	  {
	  	if(vez ==1) vez=1;
	  	else vez=2;
	  	cava(p,cave);
	  	cave=0;return 1;
	  } 
	  else if(carta==98||carta==99) //BLOCK
	  {
	  	if(vez ==1) vez=1;
	  	else vez=2;
	  	cava(p,cave);
	  	cave=0;return 1;
	  }
	  
	  }
	  else if(carta>=75&&carta<=93) //carta num
	  {
	  	
	  	if(vez ==1) vez=2;
	  	else vez=1;
	  	cava(p,cave);
	  	cave=0; return 1;
	  	
	  	
	  }
	 // else return 0;
	}
	//para cartas 0:
	else if((last==0||last==25||last==50||last==75)&&(carta==0||carta==25||carta==50||carta==75))
	{

	 
	  push(&pilha,carta);	//insere a carta na pilha
	  remove_lista(p,carta);//remove a carta do player;
	  	if(vez ==1) vez=2;
	  	else vez=1;
	  	cava(p,cave);
	  	cave=0;
	  return 1;
	}
	//para cartas 1:
	else if((last==1||last==2||last==26||last==27||last==51||last==52||last==76||last==77)&&(carta==1||carta==2||carta==26||carta==27||carta==51||carta==52||carta==76||carta==77))
	{
	  
	  push(&pilha,carta);	//insere a carta na pilha
	  remove_lista(p,carta);//remove a carta do player;
	  	if(vez ==1) vez=2;
	  	else vez=1;
	  	cava(p,cave);
	  	cave=0;
	  return 1;
	}	
	
	
	//para cartas 2
	else if((last==3||last==4||last==28||last==29||last==53||last==54||last==78||last==79)&&(carta==3||carta==4||carta==28||carta==29||carta==53||carta==54||carta==78||carta==79))
	{
	  
	  push(&pilha,carta);	//insere a carta na pilha
	  remove_lista(p,carta);//remove a carta do player;
	  	if(vez ==1) vez=2;
	  	else vez=1;
	  	cava(p,cave);
	  	cave=0;
	  return 1;
	}	
	
	//para cartas 3
	else if((last==5||last==6||last==30||last==31||last==55||last==56||last==80||last==81)&&(carta==5||carta==6||carta==30||carta==31||carta==55||carta==56||carta==80||carta==81))
	{
	 
	  push(&pilha,carta);	//insere a carta na pilha
	  remove_lista(p,carta);//remove a carta do player;
	  	if(vez ==1) vez=2;
	  	else vez=1;
	  	cava(p,cave);
	  	cave=0;
	  return 1;
	}
	
	//para cartas 4
	else if((last==7||last==8||last==32||last==33||last==57||last==58||last==82||last==83)&&(carta==7||carta==8||carta==32||carta==33||carta==57||carta==58||carta==82||carta==83))
	{
	  
	  push(&pilha,carta);	//insere a carta na pilh
	  remove_lista(p,carta);//remove a carta do player;
	  	if(vez ==1) vez=2;
	  	else vez=1;
	  	cava(p,cave);
	  	cave=0;
	  return 1;
	}
	
	//para cartas 5
	else if((last==9||last==10||last==34||last==35||last==59||last==60||last==84||last==85)&&(carta==9||carta==10||carta==34||carta==35||carta==59||carta==60||carta==84||carta==85))
	{
	  
	  push(&pilha,carta);	//insere a carta na pilha
	  remove_lista(p,carta);//remove a carta do player;
	  	if(vez ==1) vez=2;
	  	else vez=1;
	  	cava(p,cave);
	  	cave=0;
	  return 1;
	}
	
	//para cartas 6
	else if((last==11||last==12||last==36||last==37||last==61||last==62||last==86||last==87)&&(carta==11||carta==12||carta==36||carta==37||carta==61||carta==62||carta==86||carta==87))
	{
	  
	  push(&pilha,carta);	//insere a carta na pilha
	  remove_lista(p,carta);//remove a carta do player;
	  	if(vez ==1) vez=2;
	  	else vez=1;
	  	cava(p,cave);
	  	cave=0;
	  return 1;
	}
	
	//para cartas 7
	else if((last==13||last==14||last==38||last==39||last==63||last==64||last==88||last==89)&&(carta==13||carta==14||carta==38||carta==39||carta==63||carta==64||carta==88||carta==89))
	{
	  
	  push(&pilha,carta);	//insere a carta na pilha
      remove_lista(p,carta);//remove a carta do player;
	  	if(vez ==1) vez=2;
	  	else vez=1;
	  	cava(p,cave);
	  	cave=0;
	  return 1;
	}
	
	//para cartas 8
	else if((last==15||last==16||last==40||last==41||last==65||last==66||last==90||last==91)&&(carta==15||carta==16||carta==40||carta==41||carta==65||carta==66||carta==90||carta==91))
	{
	  
	  push(&pilha,carta);	//insere a carta na pilha
	  remove_lista(p,carta);//remove a carta do player;
	  	if(vez ==1) vez=2;
	  	else vez=1;
	  	cava(p,cave);
	  	cave=0;
	  return 1;
	}
	
	//para cartas 9
	else if((last==17||last==18||last==42||last==43||last==67||last==68||last==92||last==93)&&(carta==17||carta==18||carta==42||carta==43||carta==67||carta==68||carta==92||carta==93))
	{
	  
	  push(&pilha,carta);	//insere a carta na pilha
	  remove_lista(p,carta);//remove a carta do player;
	  	if(vez ==1) vez=2;
	  	else vez=1;
	  	cava(p,cave);
	  	cave=0;
	  return 1;
	}
	
	//para cartas ++2
	
	else if((last==19||last==20||last==44||last==45||last==69||last==70||last==94||last==95)&&(carta==19||carta==20||carta==44||carta==45||carta==69||carta==70||carta==94||carta==95))
	{
	  
	  push(&pilha,carta);	//insere a carta na pilha
	  remove_lista(p,carta);//remove a carta do player;
	  cave=cave+2;
	 	if(vez ==1) vez=2;
	  	else vez=1;

	  return 1;
	}
	
	//para cartas TROCA
	
	else if((last==21||last==22||last==46||last==47||last==71||last==72||last==96||last==97)&&(carta==21||carta==22||carta==46||carta==47||carta==71||carta==72||carta==96||carta==97))
	{
	 
	  push(&pilha,carta);	//insere a carta na pilha
	  remove_lista(p,carta);//remove a carta do player;  
	  
	  	if(vez ==1) vez=1;
	  	else vez=2;
	  	cava(p,cave);
	  	cave=0;
	  return 1;
	}
	
	//para cartas BLOCK
	else if((last==23||last==24||last==48||last==49||last==73||last==74||last==98||last==99)&&(carta==23||carta==24||carta==48||carta==49||carta==73||carta==74||carta==98||carta==99))
	{
	  
	  push(&pilha,carta);	//insere a carta na pilha
	  remove_lista(p,carta);//remove a carta do player;
	  
	  	if(vez ==1) vez=1;
	  	else vez=2;
	  	cava(p,cave);
	  	cave=0;
	  return 1;
	}
	
	//Coringas:
	else if(carta>=100&&carta<=107)
	{
		
	
		remove_lista(p,carta);
	  	
		
		if(vez ==1) vez=2;
	  	else vez=1;
	  	coringa(carta);
		
		return 1; 
	}
	 else return 0; //O player não pode jogar essa carta.
}

int trcarta(tplista *l,int x) //recebe a posição da carta na mão do player e "traduz" a carta para o ip dela.  
{
	//x= a posição da carta que o player quer jogar
	//*l é o player
	int i;
	
	if(x<=tamanho_lista(l)) //Se for possível que o usuario tenha tal posição de carta na mão
	{
	
	for(i=0;i<x-1;i++)
	{
		l=l->prox;
	}
	
	return l->info;
	
	}
	
	else return 999; //código para dizer a função game que o usuario n tem tal carta
}

void game(tplista **p1, tplista **p2)
{
	int g;
	//imprime_pilha(monte);
	cava(p1, 7); imprime_lista(*p1); //cartas iniciais
	cava(p2, 7);
	//imprime_lista(&p1);
	
	vez=1; //player 1 sempre é o primeiro a jogar.
	int e; //posição da carta que o player quer jogar
	tipo x;
	
	define_senha();
	
	while(!lista_vazia(*p1)&&!lista_vazia(*p2))
	{ gotoxy(29,1);
	if(vez==1) //vez do player 1
	{
			if(senha())
			{
			  imprime_jogo(*p1);
			  scanf("%d",&e); //o que o player quer fazer? se e=666 ele cava, se não ele joga uma carta
			  fflush(stdin);
			  
				if(e==666)
				{
					 if(cave)//caso tenha cave acumulado
					{
				 		cava(p1,cave); cave=0;
				    } //caso tenha cave acumulado
				
					else cava(p1,1);
				
					vez=2;
				}
				else
				{
					x=trcarta(*p1,e);	//x salva o ip da carta.
			
			
				if(x!=999) //se a função trcarta não tiver retornado que o usuario não possue tal posição de carta, faça:
				{
					
					if(insere_na_pilha(p1,x)==1)
					{
							printf("ok");
					} //player jogou a carta e ocorreu tudo bem
					
					else //player não pode jogar tal carta.
					{
						printf("Mensagem: Nao pode jogar essa carta! Aperte Z para continuar");
						scanf("%d",g);fflush(stdin);
						vez=1; //volta para o player jogar de novo
					//	cava(p1,cave); cave=0; //caso tenha cave e o player inseriu uma carta numerica
				}
					
					}
					else //caso trcarta retore que ele n tem a posição de carta que jogou
					{
						printf("Mensagem: Voce nao tem essa posicao de carta! Aperte Z para continuar");
						scanf("%d",g);fflush(stdin);
						vez=1; //volta para o player jogar de novo
						//cava(p1,cave); cave=0; //caso tenha cave e o player inseriu uma carta numerica
					}
					
				}
				
			
			}
	}
		
		
		if(vez==2) //vez do player 2
		{
			if(senha(vez))
			{
			
			imprime_jogo(*p2);
			  scanf("%d",&e); //o que o player quer fazer? se e=666 ele cava, se não ele joga uma carta
			  fflush(stdin);
			  
				if(e==666)
				{
					 if(cave)//caso tenha cave acumulado
					{
				 		cava(p2,cave); cave=0;
				    } //caso tenha cave acumulado
				
					else cava(p2,1);
				
					vez=1;
				}
				
				
else
{
x=trcarta(*p2,e);	//x salva o ip da carta.
if(x!=999)
{

  if(insere_na_pilha(p2,x)==1)
  {
	printf("ok");
  }

  	else //player não pode jogar essa carta
	{
			printf("Mensagem: Voce nao tem essa posicao de carta! Aperte Z para continuar");
			scanf("%d",g);fflush(stdin);
			vez=2; //volta para o player jogar de novo
			//cava(p2,cave); cave=0; //caso tenha cave e o player inseriu uma carta numerica
	}
}

else
{
	printf("Mensagem: Nao pode jogar essa carta! Aperte Z para continuar");
	scanf("%d",g);fflush(stdin);
	vez=2; //volta para o player jogar de novo
	//cava(p2,cave); cave=0; //caso tenha cave e o player inseriu uma carta numerica
}
				
}
			
			}
		}
		
	}	
	
	if(lista_vazia(*p1)) printf("\nPlayer 1 ganhou.");
	else if(lista_vazia(*p2)) printf("\nPlayer 2 ganhou"); 
}

int main()
{
tplista *p1, *p2;
p1=inic_lista();
p2=inic_lista();
//tp_pilha monte;
//tp_pilha pilha;
inic_pilha(&pilha);
inic_pilha(&monte);
cave=0; int v=0,a=0;
int i;
	for(i=0;i<108;i++)
	{
		vmonte[i]=i; //joga os endereços das cartas em um vetor
	}
	
	embaralhar(vmonte,107);

for(i=0;i<108;i++)
{
	
	push(&monte,vmonte[i]);//joga o vetor embaralhado na pilha do monte
}
	while(a==0)//impede que a primeira carta do monte seja coringa
	{
	
	pop(&monte,&v); 
	
	
	if((v>=0&&v<=18)||(v>=25&&v<=43)||(v>=50&&v<=68)||(v>=75&&v<=93))  //Impede que a  primeira carta do monte seja uma carta especial ou coringa 
	{
		push(&pilha,v); //se for uma carte diferente de coringa, a coloca no descarte
		a=1;
	}
	else push(&monte,v);//se a carta for uma coringa, a insere de novo no monte 
	}

game(&p1,&p2);

system("pause");
}

