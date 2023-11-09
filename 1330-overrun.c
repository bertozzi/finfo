// buffer overrun nei puntatori
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){

  int *a = NULL;           // non necessario inizializzare ma cosi' almeno fallisce subito...
  unsigned long n;

  printf("Quanti interi vuoi sommare? ");
  scanf("%lu", &n);

  // ho letto quanti interi voglio sommare, qui dovrei allocare il relativo buffer per creare l'array. MA me ne dimentico...

  int sum = 0;
  for(int i=0; i<n; ++i)
  {
    printf("Inserisci numero intero: ");
    scanf("%d", &a[i]); // FIXME a punta a cosa?
    sum += a[i];
  }

  printf("Hai inserito i seguenti numeri:\n");
  for(int i=0; i<n; ++i)
  {
    printf("%3d: %6d\n", i+1, a[i]);
  }

  printf("Il totale vale: %d\n", sum);
    



  return 0;
}

