#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

int main(){
	
	char palavra[30],espaco[30],erros[5]; //reserva espa�o para a palavra
	char letra;
	int tamanho,continuar,tentativas=0,pontos,acerto,cont1,cont2;
	
	setlocale(LC_ALL,"portuguese"); //Permite o uso de acentos

	//do{
	printf("\n			JOGO DA FORCA\n\n");
	printf("Jogador, digite uma palavra sem que seu advers�rio veja:\n   ");
	gets(palavra);
	system("cls");
	
	printf("\n			JOGO DA FORCA\nOBS.: Voc� ter� 5 chances para acertar a palavra!\n\n");
	
		//tentativas=5;
		tamanho=strlen(palavra);//tamanho  da palavra
		printf("	");
		for(cont1=0;cont1<tamanho;cont1++){ //troca as letras por _
			
			espaco[cont1]='_';
			printf(" %c",espaco[cont1]); //printa em tela o _
		}

		while(tentativas<6){
			
			printf("\n\nDigite uma letra:  ");
			scanf("%c",&letra);
					
			for(cont1=0;cont1<tamanho;cont1++){
				
				if(letra==palavra[cont1]){ //se acertou a letra, troca _ pela letra e ganha um ponto
					espaco[cont1]=palavra[cont1];
					pontos++;
					acerto=1;
				}else{
					acerto=0;
				}
			}
			system("cls");
			printf("\n			JOGO DA FORCA\n\n");
			printf("	");
			for(cont1=0;cont1<tamanho;cont1++){
				printf(" %c",espaco[cont1]);
			}
			
			if(pontos==tamanho+1){//Se acertou tudo
				printf("\n\n\tVoc� acertou a palavra, parab�ns!\n\n");
				break;//Finaliza o jogo
			}
			
			if(acerto==0){
				
				tentativas++;
				
				if(tentativas==4){
					printf("\n\nVoc� perdeu!\n\n	Resposta correta:  %s",palavra); //acabaram as tentativas e mostra a resposta certa
				}else{
					printf("\n\nVoc� tem mais %d chances\n",5-tentativas);
				}
			}
								
			/*if(acerto==0){ //se errou
				tentativas--;
					
				if(tentativas==0){
					
				}else{
					printf("Voc� ainda tem %d chances\n\n",tentativas);
					erros[cont2]=letra;
					printf("%d  ",erros);
					cont2++;
				}
			}else{
				if(pontos==tamanho){//Se j� acertou tudo
					printf("\n\n%s\n",palavra);
					printf("Voc� acertou a palavra, parab�ns!");
				}
			}*/
		}
		
	/*printf("\n\nDeseja jogar mais uma vez?\n\n   1)Sim\n   2)N�o\n");//responder 1 ou 2!
	scanf("%d",continuar);*/
	
	//}while(continuar!=2);
	return 0;
	system ("pause");
}
