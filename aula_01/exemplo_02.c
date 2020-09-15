#include <stdio.h>

void troca(int x, int y);

int main(void){
 int a = 5, b = 7;
 troca(a, b);
 printf("a = %d\t b = %d\n", a, b);
 return 0;
}

void troca(int x, int y){
 int temp = x;
 x = y;
 y = temp;
}