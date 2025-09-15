// passaggio array monodimensionale a funzione, gestire le dimensioni
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

// 3 possibilita'
// 1: dimensioni note a priori
// 2: VLA
// 3: come puntatori a puntatori

#define SIZE 8

// DIMENSIONI NOITE A PRIORI
// questa funzione stampa solamente il contenuto di un array di dimensioni ben definite
// al momento della compilazione
void stampa(int a[SIZE])
{
  for(int i = 0; i < SIZE; ++i)
    printf("%d ", a[i]);
  printf("\n");
}

// USO VLA
// se non conosco le dimensioni a priori allora posso sfruttare
// i VLA se il mio compilatore li ammette
void stampa_vla(int dim, int a[dim]) // nell'elenco dei parametri l'array DEVE essere DOPO le dimensioni
{
  for(int i = 0; i < dim; ++i)
    printf("%d ", a[i]);
  printf("\n");
}

// PUNTATORI
// in maniera piu' generale posso usare
// i puntatori
void stampa_punct(int *a, int dim) // ma comunque devo passare lo stesso le dimensioni in qualche modo...
{
  for(int i = 0; i < dim; ++i)
    printf("%d ", a[i]);
  printf("\n");
}


int main(int argc, char **argv){

  srand(time(NULL));

  int n;

  printf("Dimmi quanti numeri casuali generare: ");
  scanf("%d", &n);
  

  // alloco con VLA (per semplicita')
  int numbers[n];

  // riempo di valori casuali
  for(int i = 0; i < n; ++i)
      numbers[i] = rand()%1000;

  
  printf("\n");
  stampa(numbers);
  
  printf("\n");
  stampa_vla(n, numbers);

  printf("\n");
  stampa_punct(numbers, n);


  return 0;
}

