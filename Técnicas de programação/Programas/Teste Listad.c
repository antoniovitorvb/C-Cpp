#include<stdio.h>
#include<stdlib.h>
#include"listad.h"

ordena(){
	
}

int main(){
	
	tplistad *lista;
	tipo e;
	
	lista = inic_listad();
	insere_listad(lista, 20);
	insere_listad(lista, 30);
	insere_listad(lista, 10);
	insere_listad(lista, 50);
	insere_listad(lista, 40);
	imprime_listad(lista);
}
