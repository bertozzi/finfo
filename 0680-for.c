// Iterazione, ciclo for
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){

  int n;

/*
Inizializzazione: n=1      -> eseguita una e una sola volta prima di tutto il resto
Condizione:       n <= ... -> eseguita ("valutata") prima di decidere se eseguire o meno il corpo del ciclo
Aggiornmamento:   n = n +1 -> eseguito solo dopo il corpo del ciclo
*/

  for (n = 1; n <= 1267; n=n+1)
    printf("%d ", n);
  
  /* equivalente con while()
   *
   * n=1;
   * while(n <= 126)
   * {
   *   printf("%d ", n);
   *   n=n+1;
   * }
   */

  printf("\nOra n pero' vale %d\n" ,n);

  return 0;
}

