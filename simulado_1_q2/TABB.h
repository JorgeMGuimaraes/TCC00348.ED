#include <stdio.h>
#include <stdlib.h>

typedef struct arvbinbusca{
    int info;
    struct arvbinbusca *esq, *dir;
}TABB;

TABB* cria(int x, TABB* e, TABB* d);
void imprime(TABB *t);
void libera(TABB* t);
TABB* busca(int e, TABB* t);
TABB* insere(int e, TABB* t);
TABB* retira(int e, TABB *t);

