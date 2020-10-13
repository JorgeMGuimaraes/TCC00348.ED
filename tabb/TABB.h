#ifndef TABB_H
#define TABB_H
#include <stdio.h>
#include <stdlib.h>

typedef struct arvore_binaria_busca {
    int info;
    struct arvore_binaria_busca *esquerda, *direita;
}TABB;

TABB*   TABB_criar(int valor, TABB* esquerda, TABB* direita);
void    TABB_liberar(TABB* node);
TABB*   TABB_inserir(int valor, TABB* node);
TABB*   TABB_retirar(int valor, TABB* node);
TABB*   TABB_buscar(int valor, TABB* node);
void    TABB_imprimir(TABB* node);

#endif