#include <stdio.h>
#include <stdlib.h>
#include "TABB.h"


int *arv2vet(TABB *a) {
	// Complete aqui
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
