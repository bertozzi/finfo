// operatore AND logico, > e cortocircuito valutazioni espressioni logiche

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){
  int n, d;

  printf("Introduci due interi positivi: ");
  scanf("%d", &n);
  scanf("%d", &d);

  int risultato = (d > 0 && n%d == 0);

  printf("Il risultato dell'espressione (%d > 0 && %d%%%d) e' %d\n", d, n, d, risultato);
       


  return 0;
}

