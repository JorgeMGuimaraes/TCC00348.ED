#include "TLSE.h"

int main(void){
  TLSE *l = NULL;
  l = inserel(l, 3);
  l = inserel(l, 2);
  l = inserel(l, 1);

  implrec(l);
  printf("\n");

  if(buscalrec(l, 5)) printf("Sim!\n");
  else printf("Nao!\n");

  l = retlrec(l, 3);
  implrec(l);
  printf("\n");

  liblrec(l);
  return 0;
}