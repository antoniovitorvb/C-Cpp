#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int matriz[2][2],maior,menor,i,j;
	
	printf ("\n A(3x3): \n\n");
	
	for (i=0;i<3;i++){
		for (j=0;j<3;j++){
			printf ("a%d%d = ",i+1,j+1);
			scanf ("%d",&matriz[i][j]);
			
			if ((i==0)&&(j==0)){
				menor=maior=matriz[i][j];
			}
			if (matriz[i][j]>maior){
			   maior=matriz[i][j];
			   }else{
			menor=matriz[i][j];
			}
		}
	}
	printf ("\n   %d  %d  %d\n",matriz[0][0],matriz[0][1],matriz[0][2]);
	printf ("   %d  %d  %d\n",matriz[1][0],matriz[1][1],matriz[1][2]);
	printf ("   %d  %d  %d\n",matriz[2][0],matriz[2][1],matriz[2][2]);
	
	printf ("\nO maior número da matriz é: %d \n",maior);
	printf ("O menor número da matriz é: %d \n\n",menor);
	
system("PAUSE");
}
