/*void ImprimirM�o (int *j1, int tamanho){
	int t;
	
	printf ("sua mao tem %d de tamanho", tamanho);
	
	for (t=0; t<tamanho; t++){
		printf ("\n -----");
		printf ("\n -   -");
		printf ("\n -%d -", j1 + 1);
		printf ("\n -   -");
		printf ("\n -----");
	}
	
}*/

void Turno (){
	int fim=0 , vez=1;
	
	do{
		switch (vez){
			case 1: //vez do jogador 
				//colocar aqui a fun��o de a��o do jogador
				if (maovazia==1){ 
					printf ("\n\n Sua mao ficou vazia voce venceu! \n");
					fim++;
				}
				else {
					
					printf ("\n\n Agora � a vez do adversario...");
					vez=2;
				}
				break;
				
			case 2: //vez do computador
				//colocar aqui a fun��o de a��o do computador
				if (pilhavazia==1){
					printf("\n\n O computador esta com a m�o vazia, ele venceu! =(");
					fim++;
				}
				else {
					
					printf ("\n\n Agora � a sua vez!");
					vez=1
					
				}
		}
	} while (fim=0);
	
}
