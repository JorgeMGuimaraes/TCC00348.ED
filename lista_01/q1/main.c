#include <stdio.h>
#include "lib_primos.h"

int main(void) {
    //Tests
    int teste = 1;
    if(get_primo(1) == 0) { printf("Teste %d passou\n", teste); }
    else { printf("Teste %d falhou\n", teste); }
    teste++;
    if(get_primo(2) == 2) { printf("Teste %d passou\n", teste); }
    else { printf("Teste %d falhou\n", teste); }
    teste++;
    if(get_primo(3) == 3) { printf("Teste %d passou\n", teste); }
    else { printf("Teste %d falhou\n", teste); }
    teste++;
    if(get_primo(6) == 0) { printf("Teste %d passou\n", teste); }
    else { printf("Teste %d falhou\n", teste); }
    teste++;
    if(get_primo(11) == 11) { printf("Teste %d passou\n", teste); }
    else { printf("Teste %d falhou\n", teste); }
    teste++;
    if(get_primo(0) == 0) { printf("Teste %d passou\n", teste); }
    else { printf("Teste %d falhou\n", teste); }
    teste++;
    if(get_primo(-1) == 0) { printf("Teste %d passou\n", teste); }
    else { printf("Teste %d falhou\n", teste); }
    teste++;

    // Exit
    return 0;
}