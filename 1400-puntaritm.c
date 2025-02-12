// aritmetica dei puntatori
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){

  int a[8]={3, 4, 5, 6, 77, 88, 99, 34};
  int *fp;

  fp=a;

  printf("Ora fp vale %p, e ha dimensione %ld mentre a[] ha dimensione %ld\n", fp, sizeof(fp), sizeof(a));

  for(int i=0; i<8; ++i)
  {
    printf("All'indirizzo %p trovo %d\n", fp, *fp);
    fp = fp + 1; // NON mi sposto di un byte ma del numero di byte occupati da un int (4 nel nostro caso)
  }

  return 0;
}

/* esempio esecuzione

Ora fp vale 0x7fff7dde7200, e ha dimensione 8 mentre a[] ha dimensione 32
All'indirizzo 0x7fff7dde7200 trovo 3
All'indirizzo 0x7fff7dde7204 trovo 4
All'indirizzo 0x7fff7dde7208 trovo 5
All'indirizzo 0x7fff7dde720c trovo 6
All'indirizzo 0x7fff7dde7210 trovo 77
All'indirizzo 0x7fff7dde7214 trovo 88
All'indirizzo 0x7fff7dde7218 trovo 99
All'indirizzo 0x7fff7dde721c trovo 34

*/

