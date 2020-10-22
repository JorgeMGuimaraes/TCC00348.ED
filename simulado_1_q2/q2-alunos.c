#include <stdio.h>
#include <stdlib.h>
#include "TABB.h"
//#include "TABB.c" <-- enviar descomentado

#define SEGUE_PADRAO 1
#define NAO_SEGUE_PADRAO 0

int testar_esquerda(TABB* a){
	if(a->esq || a->dir) { return NAO_SEGUE_PADRAO; }
	return SEGUE_PADRAO;
}

int teste(TABB *a){
	if(a){
		if(a->esq){
			if(testar_esquerda(a->esq) == SEGUE_PADRAO){
				if(a->dir) { return teste(a->dir); }
				return SEGUE_PADRAO;
			}
		}
	}
	return NAO_SEGUE_PADRAO;
}

void assert(int resultado, int esperado, int indice_teste){
	if(resultado ==  esperado){ printf("Teste %d passou.\n", indice_teste); }
	else{ printf("Teste %d falhou.\n", indice_teste); }
	return;
}
int main() {	
	TABB *a = NULL;
	int num;
	/*Testes*/
	/*
	printf("iniciando testes...\n");
	TABB *teste1 = NULL, *teste2 = NULL, *teste3 = NULL, *teste4 = NULL, *teste5 = NULL, *teste6 = NULL;
	
	//teste 1
	teste1 = insere(2, teste1);
	teste1 = insere(1, teste1);
	assert(teste(teste1), SEGUE_PADRAO, 1);

	//teste 2
	teste2 = insere(3, teste2);
	teste2 = insere(1, teste2);
	teste2 = insere(5, teste2);
	teste2 = insere(4, teste2);
	assert(teste(teste2), SEGUE_PADRAO, 2);

	// teste 3
	assert(teste(teste3), NAO_SEGUE_PADRAO, 3);

	// teste 4
	teste4 = insere(2, teste4);
	teste4 = insere(1, teste4);
	teste4 = insere(3, teste4);
	assert(teste(teste4), NAO_SEGUE_PADRAO, 4);

	// teste 5
	teste5 = insere(3, teste5);
	teste5 = insere(1, teste5);
	teste5 = insere(5, teste5);
	teste5 = insere(4, teste5);
	teste5 = insere(7, teste5);
	teste5 = insere(6, teste5);
	assert(teste(teste5), SEGUE_PADRAO, 5);

	// teste 6
	teste6 = insere(2, teste6);
	assert(teste(teste6), NAO_SEGUE_PADRAO, 6);
	*/
	/*End Testes*/
 
	do{
		scanf("%d", &num); 
		if (num < 0) break;
		a = insere(num, a);
	}while(1);
  printf("%d\n", teste(a));
	return 0;
}
