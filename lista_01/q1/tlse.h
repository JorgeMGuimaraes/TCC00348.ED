#include <stdio.h>
#include <stlib.h>

typedef struct lse{
int info;
struct lse *prox;
} TLSE;
//Cria lista vazia
TLSE* inicializa(void);
//Insere no início
TLSE* ins_ini(TLSE *l,
int x);

//Imprime a lista
void imprime(TLSE *l);
//Busca primeira vez de x
TLSE* busca(TLSE *l, int x);
//Liberação da lista
void libera(TLSE *l);
//Retira a primeira vez de x
TLSE* retira(TLSE *l, int x);
//Inserção ordenada de x
TLSE* ins_ord(TLSE *l, int x);