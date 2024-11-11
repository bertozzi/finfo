// Iterazioni, ciclo do-while() cifre binarie
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){

  int n, i, r;

  printf("Inserisci un numero intero positivo: ");
  scanf("%d", &n);

  i=0;

  // ogni volta divido per 2, il resto che ottengo e' il relativo bit (a partire dal meno significativo)
  do
  {
    r = n%2; // resto divisione per 2 puo' essere solo 1 o 0
    n = n/2; 

    printf("BIT %d:\t%d\n", i++, r);

  }while(n);

  return 0;
}



