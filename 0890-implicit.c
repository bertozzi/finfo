// conversioni implicite o automatiche
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int main(int argc, char **argv){

  float ris;
  unsigned int a = 42;
  long b = 17;
  short c = 1;

  ris = a/b + c; 

  // a e' unsigned int mentre b e' long e c e' short
  // conversioni implicite nell'ordine:
  //  1. c viene convertito automaticamente in int
  //  2. devo calcolare a/b ma a e b tipi differenti, converto nel tipo di ordine maggiore ovvero converto a in long ed effettuo il calcolo
  //  3. il risultato di a/b e', dopo le conversioni, di tipo long devo calcolare somma con c che era stato convertito in int. Ai fini del calcolo converto c in long
  //  4. conversione di assegnamento, converto il risultato in float 

  printf("Il risultato di %d/%ld+%d e' %f\n", a, b, c, ris); // OUTPUT: Il risultato di 42/17+1 e' 3.000000 XXX come mai?

  return 0;
}

