#include <stdio.h>

void troca(int *px, int *py);

int main(void){
 int
    a = 5,
    b = 7;
 troca(&a, &b);
 printf("a = %d\t b = %d\n", a, b);
 return 0;
}

void troca(int *px, int *py){
 int temp   = *px;
 *px        = *py;
 *py        = temp;
}