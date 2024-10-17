// conversioni di assegnamento
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){

  float a = -76543.99;  

  int          b = a;  // perdo i decimali, NON viene arrotondato
  short        c = a;  // risultato incoerente, uno short non puo' memorizzare un numero cosi' grande
  unsigned int d = a;  // risultato incoerente, d non puo' memorizzare numeri negativi

  printf("Quando converto %f in int ottengo          %d\n", a, b);
  printf("Quando converto %f in short ottengo        %d\n", a, c);
  printf("Quando converto %f in unsigned int ottengo %u\n", a, d);

  return 0;
}

/*

 OUTPUT

 Quando converto -76543.992188 in int ottengo          -76543
 Quando converto -76543.992188 in short ottengo        -11007
 Quando converto -76543.992188 in unsigned int ottengo 4294890753

 NOTA: il compilatore non da' warning neanche se gli dico di darmi tutti i warning possibili!

 */

