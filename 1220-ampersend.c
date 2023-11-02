// operatore &
#include<stdio.h>
#include<stdlib.h>

int a;

int main(int argc, char **argv){
  int b;
  char c;
  float d;
  double e[100];

  printf("Gli indirizzi in memoria delle variabili sono:\n");

  printf(" a si trova in %p (%ld byte)\n", &a, sizeof(a));  // l'operatore & restituisce l'indirizzo di una variabile, %p e' lo specificatore previsto per gli indirizzi
  printf(" b si trova in %p (%ld byte)\n", &b, sizeof(b));
  printf(" c si trova in %p (%ld byte)\n", &c, sizeof(c));
  printf(" d si trova in %p (%ld byte)\n", &d, sizeof(d));
  printf(" e si trova in %p (%ld byte)\n", &e, sizeof(e)); //  si noti come per gli array non occorre usare & 



  return 0;
}

/* ESEMPIO ESECUZIONE

Gli indirizzi in memoria delle variabili sono:
 a si trova in 0x56085d9fc014 (4 byte)
 b si trova in 0x7ffea9903480 (4 byte)
 c si trova in 0x7ffea990347f (1 byte)
 d si trova in 0x7ffea9903484 (4 byte)


Curioso come l'indirizzo di a sia cosi' differente...
*/


