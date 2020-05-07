#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
	setlocale (LC_ALL,"portuguese");
	
	int anos,t,i;
	float dep,total,rend;
	
	printf("Qual valor vc pretende poupar?  ");
	scanf("%f",&dep);
	
	printf("\n\nQuantos anos pretende render?  ");
	scanf("%d",&anos);
	
	t=anos*12;
	total=dep;
	
	for (i=1;i<=t;i++){
		total+=dep*(0.25/100);
	}
	
	printf("\n\nSeu total após %d anos será de R$%.2f",anos,total);
}
