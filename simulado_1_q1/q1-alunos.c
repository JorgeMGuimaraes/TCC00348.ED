#include <stdio.h>
#include <stdlib.h>
#include "TABB.h"

int contar_elementos(TABB* node) {
    int total_elementos = 0;
    if(node) {
        total_elementos = 1 + contar_elementos(node->esq);
        total_elementos += contar_elementos(node->dir);
    }
    return total_elementos;
}
int arv2vet_aux(TABB* a, int menor){
    if(a){
        if(a->esq){
            if(a->esq->info <= menor) {
                return arv2vet_aux(a->esq, menor);
            }
        }
        else if(a->dir){
            if(a->dir->info <= menor){
                return arv2vet_aux(a->dir, menor);}
            }
        else { return a->info ;}
    }
}
int *arv2vet(TABB *a) {
	int tamanho = contar_elementos(a),
        i       = 0,
        menor   = __INT32_MAX__;
    int vetor_saida[tamanho];

    for (i = 0; i < tamanho; i++) {
        int menor = arv2vet_aux(a, menor);
        vetor_saida[i] = menor;
    }
    return vetor_saida;
}

int main() {
  TABB *a = NULL;
  int num, i, totalElementos = 0;
  int *resp;
	do{
		scanf("%d", &num);
		if (num < 0) break;
		a = insere(num, a);
  	totalElementos += 1;
	}while(1);
    int total = contar_elementos(a);
    printf("%d\n", total);

	resp = arv2vet(a);
    for(i = 0; i < totalElementos; i++){
  	if(i) {
    	printf(" ");
  	}
  	printf("%d", resp[i]);
	}
	printf("\n");

    free(resp);
	return 0;
}
