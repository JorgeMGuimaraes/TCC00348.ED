#include "TLSE.h"

TLSE* inserel(TLSE *l, int elem){
  TLSE *novo = (TLSE *) malloc(sizeof(TLSE));
  novo->prox = l;
  novo->info = elem;
  return novo;
}

void imprimel(TLSE *l){
  TLSE *p = l;
  while(p){
    printf("% d ", p->info);
    p = p->prox;
  }
}

void implrec(TLSE *l){
  if(l){
    printf("% d ", l->info);
    implrec(l->prox);
  }
}

void implrecrev(TLSE *l){
  if(l){
    implrecrev(l->prox);
    printf("% d ", l->info);
  }
}

void liberal(TLSE *l){
  TLSE *p = l, *q;
  while(p){
    q = p;
    p = p->prox;
    free(q);
  }
}

void liblrec(TLSE *l){
  if(l){
    liblrec(l->prox);
    printf("Liberando o no que contem a info %d...\n", l->info);
    free(l);
  }
}

TLSE* buscal(TLSE *l, int elem){
  TLSE *p = l;
  while((p) && (p->info != elem)) p = p->prox;
  return p;
}

TLSE* buscalrec(TLSE *l, int elem){
  if((!l) || (l->info == elem)) return l;
  return buscalrec(l->prox, elem);
}

TLSE* retiral(TLSE *l, int elem){
  TLSE *p = l, *ant = NULL;
  while((p) && (p->info != elem)){
    ant = p;
    p = p->prox;
  }
  if(!p) return l;
  if(!ant) l = l->prox;
  else ant->prox = p->prox;
  free(p);
  return l;
}

TLSE* retlrec(TLSE *l, int elem){
  if(!l) return l;
  if(l->info == elem){
    TLSE *t = l;
    l = l->prox;
    free(t);
  }
  else l->prox = retlrec(l->prox, elem);
  return l;
}

/*
 l -> 1 -> 2 -> 3 -> |
 l = rlr(l, 3); l -> 1 -> 2 -> |
 l -> 1 -> = rlr(2 -> 3 -> |, 3) = 2 -> |
             l' -> 2 -> = rlr(3 -> |, 3) = |
                          l'' -> |
*/