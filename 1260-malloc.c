// introduzione a malloc() e free(): rivisitazione problema durata automatica VLA
#include<stdio.h>
#include<stdlib.h>

// nelle intenzioni, genero n lanci di un dado e restituisco il relativo valore
int *genera_array_lanci(int n)
{

  int *v=malloc(n * sizeof(int));   // era int v[n];

  for(int i=0; i<n; ++i)
    v[i]=rand()%6+1;

  return v;
} // anche quando la funzione termina l'area allocata con malloc() rimane e non viene distrutta come nel caso dei VLA

int main(int argc, char **argv){

  int n;

  printf("Quanti lanci di dado vuoi simulare? "); // era "Quanti numeri vuoi sommare (max 100)? "
  scanf("%d", &n);

  int *lanci=genera_array_lanci(n);

  printf("Hai ottenuto i seguenti valori: ");
  for(int i=0; i<n; ++i)
    printf(" %d", lanci[i]);

  free(lanci);

  printf("\n");

  return 0;
}

