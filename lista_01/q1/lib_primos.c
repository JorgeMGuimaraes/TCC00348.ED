/* Implementacao da biblioteca de primos */

//Retorna o numero se for primo, ou zero caso contrario.
int get_primo(int numero) {
    if(numero < 2){ return 0; }

    int
    meio = numero / 2,
    i;
    for(i = 2; i < meio; i++) {
        if(numero % i == 0) { return 0;}
    }
    return numero;
}