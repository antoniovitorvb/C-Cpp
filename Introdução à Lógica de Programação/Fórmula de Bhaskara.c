#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

main (){
	
	setlocale(LC_ALL,"portuguese");
	
	float a,b,c,r1,r2,delta,n;
	
	
	printf("\n Fórmula de Bhaskara \n\n");
	
	printf("a.x²+b.x+c \n");
	
	printf ("a = ");
	scanf ("%f",&a);
	
	printf ("b = ");
	scanf ("%f",&b);
	
	printf ("c = ");
	scanf ("%f",&c);
	
	delta = b*b-4*a*c;

	if (delta==0){
	   
	   r1=-b/2*a;
 	   printf("As raízes são iguais, logo: \n");
	   printf("R = %.1f",r1);
	   }
 	   if (delta>0){
	   	r1=(-b+sqrt(delta))/2*a;
	   	r2=(-b-sqrt(delta))/2*a;
	   	printf ("As raízes são: \n");
	   	printf ("R1 = %.1f e R2 = %.1f",r1,r2);
	   }
	   if (delta<0){
	   	printf ("As raízes são complexas.\n");
	   	//printf ("R1 = %.1f %.1fi e R2 = %.1f %.1fi",(-b/2*a),(/2*a),(-b/2*a),(/2*a));
	   	}
	

}
