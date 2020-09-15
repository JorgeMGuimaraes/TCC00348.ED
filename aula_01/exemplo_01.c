#include <stdio.h>
int main(void){
  char *p, a = 97, b;

  printf("a = %p\tb = %p\tp = %p\n", &a, &b, &p);
  p = &a;
  printf("a = %c\tb = %c\t p = %p\n", a, b, p);

  (*p) = 100;
  printf("a = %c\tb = %c\t p = %p\n", a, b, p);

  b = 11 + (*p);
  printf("a = %c\tb = %c\tp = %p\n", a, b, p);

  (*p)++;
  printf("a = %c\tb = %c\tp = %p\n", a, b, p);

  p++;
  printf("a = %c\tb = %c\tp = %p\n", a, b, p);

  p++;
  printf("a = %c\tb = %c\tp = %p\n", a, b, p);

  p++;
  printf("a = %c\tb = %c\tp = %p\n", a, b, p);

  p = (char *) 127;
  printf("a = %c\tb = %c\tp = %p\n", a, b, p);

  return 0;
}