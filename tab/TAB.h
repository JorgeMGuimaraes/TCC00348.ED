#ifndef TAB_H
#define TAB_H

#include <stdio.h>
#include <stdlib.h>

typedef struct arvore_binaria {
    int info;
    struct arvore_binaria *esquerda, *direita;
} TAB;

void TAB_liberar(TAB* node);
TAB* TAB_buscar(int valor, TAB* node);
void TAB_imprimir(TAB* node);


TAB* TAB_criar(int valor, TAB* esquerda, TAB* direita);

#endif