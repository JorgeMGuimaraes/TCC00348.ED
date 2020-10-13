#include "TAB.h"

//Libera todos os nos recursivamente a partir do no 'node'.
void TAB_liberar(TAB* node) {
    if(node){
        TAB_liberar(node->esquerda);
        TAB_liberar(node->direita);
        free(node);
        return;
    }
}

//Busca uma informacao 'elemento' recursivamente a partir do no 'node' percorrendo a esquerda, se nao encontrar tentar pela direita
TAB* TAB_buscar(int valor, TAB* node) {
    if((!node) || (node->info == valor)) return node;
    TAB* resposta = TAB_buscar(valor, node->esquerda);
    if(resposta) return resposta;
    return TAB_buscar(valor, node->direita);
}

// Imprime os valores dos nos 'node' e recursivamente seu filho a esquerda e a direita, nesta ordem.
void imprimir_auxiliar(TAB* node, int andar){
    if(node){
        int j;
        imprimir_auxiliar(node->esquerda, andar + 1);
        for(j = 0; j <= andar; j++){ printf("   "); }
        printf("%d\n", node->info);
        imprimir_auxiliar(node->direita, andar + 1);
        return;
    }
    return;
}

// Imprime os valores dos nos 'node' e recursivamente seu filho a esquerda e a direita, nesta ordem.
void TAB_imprimir(TAB* node) {
    imprimir_auxiliar(node, 1);
    return;
}
//Retorna um no recem criado contendo a informacao 'valor' e com os nos filhos 'esquerda' e 'direita' posicionados.
TAB* TAB_criar(int valor, TAB* esquerda, TAB* direita){
    TAB* node       = (TAB*)malloc(sizeof(TAB));
    node->info      = valor;
    node->esquerda  = esquerda;
    node->direita   = direita;
    return node;
}
