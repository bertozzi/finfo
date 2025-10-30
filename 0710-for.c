// ciclo for(;;) uso dell'operatore ","
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){

  int m, n;

  /* l'operatore "," permette di concatenare espressioni
     a volte usato per le inizializzazioni dei for(;;) 
   */
  for (m = 1, n = 8; m < n; m=m+1, n=n-1)
    printf("m = %d n = %d\n", m, n);

  return 0;
}

/* OUTPUT

m = 1 n = 8
m = 2 n = 7
m = 3 n = 6
m = 4 n = 5

*/
