#include<stdio.h>
#include<stdlib.h>
#include<math.h>

main(){
	
	int mat[5][5],DS[5]; //matriz5x5 e vetor que armazena os valores da diagonal secundária
	int i,j,tamanho=0;
	float fat;
	
	printf("\n\n\tDigite o valores POSITIVOS a serem inseridos na matriz 5x5:\n");
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf ("a%d%d = ",i+1,j+1);
			scanf ("%d",&mat[i][j]);
		}
	}
	
	for(i=0;i<5;i++){ //pega os valores da DS e armazena em DS[]
		if((mat[5-i][i])%2==0){
			DS[i]=mat[5-i][i];
			tamanho++;
		}
	}

	i=1;
	fat=1;
	
	for(j=0;j<tamanho;j++){
	
		   while (i<=DS[j]) {
			
			fat = fat*i;
			i++;
			}	
		printf ("\n %d! = %.0f \n\n",DS[j],fat);	
	}

	system ("PAUSE");
	return 1;
}
