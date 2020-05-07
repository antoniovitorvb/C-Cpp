//Árvore Binária de Busca
/*				 *esq|pai|*dir
				/		    \
	   *esq|info|*dir  *esq|info|*dir
	   */
#include<stdio.h>
#include<stdlib.h>

typedef int tipo;

typedef struct tp_no{
	int info;
	struct tp_no *esq;
	struct tp_no *dir;
}tparvore;

tparvore *arv;

tparvore *inic_arvore(){
	return NULL;
}

int arvore_vazia(tparvore *arv){

	if(arv==NULL){
		return 1;
	}else{
		return 0;
	}
}

tparvore *aloca(){ //aloca e retorna o endereço

	tparvore *pt;

	pt=(tparvore*)malloc(sizeof(tparvore));
	return pt;
}

int insere_arvore(tparvore **arv,tipo e){

	tparvore *pai=NULL,*novo,*p=*arv;
	novo=aloca();//cria um novo elemento e coloca o endereço dele no novo

	if(novo==NULL){
		return 0;//não deu para alocar (novo==null)
	}else{
		novo->info=e;//coloca o valor no info do novo elemento
		novo->esq=NULL;//faz esse novo elemento ter status de ultimo
		novo->dir=NULL;//faz esse novo elemento ter status de ultimo
		
		while(p!=NULL){
			pai=p;
			if(e<p->info){
				p=p->esq;
			}else{
				p=p->dir;
			}
		}
		if(pai!=NULL){
			if(e<pai->info){
				pai->esq=novo;
			}else{
				pai->dir=novo;
			}
		}else{
			*arv=novo;
		}
	}
	
	return 1;
}

/*main(){
	
	tparvore *a
	
	a=inic_arvore();
	insere_arvore(&a, e);
}*/
