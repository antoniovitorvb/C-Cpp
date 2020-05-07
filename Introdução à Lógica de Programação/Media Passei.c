#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
	
	setlocale (LC_ALL,"portuguese");
	
	int calc,n,k;
	float qt[2],ql[2],me,QTt,QLt,nt,qtp,qlp,qt3,ql3;
	
	do{
		
	printf ("\n	O.B.B. Passei\n\n");
	
	QTt = 0;
	QLt = 0;
	
	printf ("1) Calcular Média Parcial\n2) Calcular Média Final\n3) Calcular QT.3\n");
	scanf ("%d",&calc);
	
	switch (calc){
	
	case 1:
		printf ("  QT:  ");
		scanf ("%f",&qtp);
		
		printf ("  QL:  ");
		scanf ("%f",&qlp);
		
		me=0.8*qtp+0.2*qlp;
		
		if (me<7){
		printf ("\nSua média parcial foi %.1f. ALUNO MISERÁVEL, ESTUDE...\n\n",me);
		}else{
			printf ("\nSua média parcial foi %.1f. Continue brocando miserávi!\n\n",me);
		}
		printf("Voltar ao Menu?\n   1) Sim\n   2) Não\n");
		scanf("%d",&k);
		system("cls");
		break;
		
	case 2:	
	     for (n=0;n<3;n++) {

	     	printf (" QT %d:  ",n+1);
		scanf ("%f",&qt[n]);
		
	    	printf (" QL %d:  ",n+1);
	    	scanf ("%f",&ql[n]);
	    	
	    	QTt+=qt[n];
	    	QLt+=ql[n];
		printf ("\n");	
		}

		me = (QTt*0.8+QLt*0.2)/3;
	
		if (me<7) {
		
			if (me<1){
				printf ("Pivete... sua média foi %.1f. Nem vá pra final fiu...\n\n",me);
			}else{
			
				nt = (5-me*0.6)/0.4;
		
				printf ("Sua média foi %.1f. FUDEU PAI! Precisa de %.1f na final\n\n",me,nt);
		}
	
		}else{
		      printf ("\n\n Sua média foi %.1f. PASSOU MISERÁVI!\n\n",me);
		      }
		printf("Voltar ao Menu?\n   1) Sim\n   2) Não\n");
		scanf("%d",&k);
		system("cls");
	break;
	
	case 3:
	     
	     for (n=0;n<2;n++) {

	     	printf (" QT %d:  ",n+1);
		scanf ("%f",&qt[n]);
		
	    	printf (" QL %d:  ",n+1);
	    	scanf ("%f",&ql[n]);
	    	
	    	QTt+=qt[n];
	    	QLt+=ql[n];
		printf ("\n");	
		}
		
		printf(" QL 3:  ");
		scanf("%f",&ql3);
		
		QLt+=ql3;
		qt3 = ((21-0.2*QLt)/0.8)-QTt;
		
		if (qt3<=10){
			printf("\nVei, estude pra tirar %.1f nessa prova! #PartiuBrocar\n\n",qt3);
		}else{
			me = ((QTt+10)*0.8+QLt*0.2)/3;
			nt = (5-me*0.6)/0.4;
			
			printf("\nAluno miserável, vadiar dá nisso... precisar tirar 10,0 e ainda vai pra final precisando de %.1f!\n\n",nt);
		}
		break;
		printf("Voltar ao Menu?\n   1) Sim\n   2) Não\n");
		scanf("%d",&k);
		system("cls");
       }
}while(k<2);
system("PAUSE");
}
