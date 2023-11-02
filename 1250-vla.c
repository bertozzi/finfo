// Variable Length Array: problema durata automatica
#include<stdio.h>
#include<stdlib.h>

// nelle intenzioni, genero n lanci di un dado e restituisco il relativo valore
int *genera_array_lanci(int n)
{

  int v[n];

  for(int i=0; i<n; ++i)
    v[i]=rand()%6+1;

  return v;
} // l'array v[] e' locale alla funzione. Viene quindi distrutto quando la funzione termina. Quindi l'indirizzo di memoria restituito non e' piu' utilizzabile

int main(int argc, char **argv){

  int n;

  printf("Quanti lanci di dado vuoi simulare? "); 
  scanf("%d", &n);

  int *lanci=genera_array_lanci(n);

  printf("Hai ottenuto i seguenti valori: ");
  for(int i=0; i<n; ++i)
    printf(" %d", lanci[i]);

  printf("\n");

  return 0;
}

