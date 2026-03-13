// union: definizione e uso base
#include<stdio.h>
#include<stdlib.h>

// una union occupa tanta memoria quanto il suo campo piu' grande
// tutti i campi condividono la stessa area di memoria
union dato
{
  int    i;
  float  f;
  char   c;
};

int main(int argc, char **argv){

  union dato d;

  printf("sizeof(union dato) = %ld\n", sizeof(d));  // dimensione del campo piu' grande

  // scrivere un campo sovrascrive gli altri
  d.i = 65;
  printf("d.i = %d\n", d.i);
  printf("d.c = %c\n", d.c);  // 65 e' il codice ASCII di 'A'

  d.f = 3.14f;
  printf("d.f = %f\n", d.f);
  printf("d.i = %d\n", d.i);  // valore non significativo: f ha sovrascritto i

  return 0;
}
