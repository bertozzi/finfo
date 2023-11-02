// allocazione dinamica memoria con malloc() e free(), controllo errore allocazione
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){

  int sum=0;
  unsigned long n;

  printf("Quanti interi vuoi sommare? ");
  scanf("%lu", &n);

  int *a=malloc(sizeof(int)*n); // con VLA potevo usare int a[n]; 
  if(!a) // equivalente a a==NULL
  {
    printf("ERRORE: non e' stato possibile allocare la memoria richiesta per %lu interi (%lu byte)\n", n, n*sizeof(int));
    exit(1);
  }

  for(int i=0; i<n; ++i)
  {
    printf("Inserisci numero intero: ");
    scanf("%d", &a[i]);
    sum += a[i];
  }

  printf("Hai inserito i seguenti numeri:\n");
  for(int i=0; i<n; ++i)
  {
    printf("%3d: %6d\n", i+1, a[i]);
  }

  free(a); // con VLA NON possibile

  printf("Il totale vale: %d\n", sum);
    



  return 0;
}

