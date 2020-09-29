#include <stdio.h>
#include <stdlib.h>

typedef struct lse{
  int info;
  struct lse *prox;
} TLSE;

TLSE* inserel(TLSE *l, int elem);
void imprimel(TLSE *l);
void liberal(TLSE *l);
TLSE* retiral(TLSE *l, int elem);
TLSE* buscal(TLSE *l, int elem);

void implrec(TLSE *l);
void implrecrev(TLSE *l);
void liblrec(TLSE *l);
TLSE* buscalrec(TLSE *l, int elem);
TLSE* retlrec(TLSE *l, int elem);