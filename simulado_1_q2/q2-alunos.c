#include <stdio.h>
#include <stdlib.h>
#include "TABB.h"

int teste(TABB *a){
  // Complete aqui
}

int main() {	
	TABB *a = NULL;
	int num;
  
	do{
		scanf("%d", &num); 
		if (num < 0) break;
		a = insere(num, a);
	}while(1);
  printf("%d\n", teste(a));
	return 0;
}
