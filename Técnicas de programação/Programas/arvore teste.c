#include<stdio.h>
#include<stdlib.h>
#include"abb.h"

int main(){
	
	tparvore *a;
	
	a=inic_arvore();
	
	insere_arvore(&a,10);
	insere_arvore(&a,5);
	insere_arvore(&a,20);
}
