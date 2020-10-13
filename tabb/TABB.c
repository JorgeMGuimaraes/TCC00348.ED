#include "TABB.h"

//Retorna um novo no com a info 'valor', assim como seus filhos a 'esquerda' e a 'direita'. Se for o primeiro, cria a arvore.
TABB* TABB_criar(int valor, TABB* esquerda, TABB* direita){
    TABB* node      = (TABB*) malloc(sizeof(TABB));
    node->info      = valor;
    node->esquerda  = esquerda;
    node->direita   = direita;
    return node;
}

//Libera a arvore, no a no, recursivamente
void TABB_liberar(TABB* node){
    if(node){
        TABB_liberar(node->esquerda);
        TABB_liberar(node->direita);
        return;
    }
    return;
}

//Insere um novo nocom info 'valor' como filho de 'node'
TABB* TABB_inserir(int valor, TABB* node){
    if(!node) { TABB_criar(valor, NULL, NULL); }
    else if(valor < node->info) { node->esquerda = TABB_inserir(valor, node->esquerda); }
    else if(valor > node->info) { node->direita = TABB_inserir(valor, node->direita); }
    return node;
}

//Nao impelentado
TABB* TABB_retirar(int valor, TABB* node){
    return NULL;
}

//Busca recursivamente um 'valor' a partir do no 'node' e retorna o no da informacao
TABB* TABB_buscar(int valor, TABB* node){
    if(!node) {return NULL; }
    if(valor < node->info) {return TABB_buscar(valor, node->esquerda); }
    if(valor > node->info) { return TABB_buscar(valor, node->direita); }
    return node;
}

// Imprime os valores dos nos 'node' e recursivamente seu filho a esquerda e a direita, nesta ordem.
void imprimir_aux(TABB* node, int andar){
    if(node){
        int j;
        imprimir_aux(node->esquerda, andar + 1);
        for (j = 0; j <= andar; j++) {printf("   "); }
        printf("%d\n", node->info);
        imprimir_aux(node->direita, andar + 1);
        return;
    }
    return;
}

// Imprime os valores dos nos 'node' e recursivamente seu filho a esquerda e a direita, nesta ordem.
void TABB_imprimir(TABB* node){
    imprimir_aux(node, 1);
}
