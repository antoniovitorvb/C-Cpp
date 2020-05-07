#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

main(int C[2][2]){
	
	setlocale(LC_ALL,"portuguese");
	
	int A[2][2],B[2][2],C[2][2];
	int i,j,k;
	
	printf ("\n	O.B.B. Multiplicação de Matrizes	\n\n");
	
	printf ("\n A(2x2): \n\n");
	
	for (i=0;i<2;i++){
		for (j=0;j<2;j++){
			printf ("a%d%d = ",i+1,j+1);
			scanf ("%d",&A[i][j]);
		}
	}
	
	printf ("\nA(2x2) = %d  %d\n",A[0][0],A[0][1]);
	printf ("         %d  %d\n",A[1][0],A[1][1]);
	
	printf ("\n B(2x2): \n\n");
		for (i=0;i<2;i++){
		for (j=0;j<2;j++){
			printf ("b%d%d = ",i+1,j+1);
			scanf ("%d",&B[i][j]);
		}
	}
	printf ("\nB(2x2) = %d  %d\n",B[0][0],B[0][1]);
	printf ("         %d  %d\n",B[1][0],B[1][1]);
	
	
	printf ("\n\nC(2x2) = %d  %d\n",C[0][0],C[0][1]);
	printf ("         %d  %d\n",C[1][0],C[1][1]);
}

multi (int A[2][2],int B[2][2]){
      
      int C[2][2];
      int i,j,k;
            
      for (i=0;i<2; i++) {
      	  for (j=0; j<2; j++) {
	      for (k=0; k<2; k++) {
              	  C[i][j] = C[i][j] + (A[i][k]*B[k][j]);
              }
      }
}

}
