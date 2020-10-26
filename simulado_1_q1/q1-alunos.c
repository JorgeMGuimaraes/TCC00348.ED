#include <stdio.h>
#include <stdlib.h>
#include "TABB.h"
//#include "TABB.c" <-- enviar descomentado

int contar_elementos(TABB* node) {
    int total_elementos = 0;
    if(node) {
        total_elementos = 1 + contar_elementos(node->esq);
        total_elementos += contar_elementos(node->dir);
    }
    return total_elementos;
}

int *arv2vet(TABB *a) {
    int
        comprimento = contar_elementos(a),
        menor       = 1,
        i           = 0;
	int* out;
    out             = malloc(comprimento * sizeof(int));

    while(i < comprimento){
        TABB* temp;
        temp = busca(menor, a);
        if(temp){ 
            out[i] = temp->info;
            i++;
        }
        menor++;
    }
    return out;
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