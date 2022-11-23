// passaggio array bidimensionali a funzione
#include<stdio.h>
#include<stdlib.h>

// 3 possibilita'
// 1: dimensioni note a priori
// 2: VLA
// 3: come puntatori a puntatori

#define SIZE 8

// questa funzione stampa solamente il contenuto di un array di dimensioni ben definite
// al momento della compilazione
void stampa(int scacchiera[SIZE][SIZE])
{
  for(int i = 0; i < SIZE; ++i)
  {
    for(int j = 0; j < SIZE; ++j)
    {
      printf("%d", scacchiera[j][i]);
    }
  printf("\n");
  }
}

// se non conosco le dimensioni a priori allora posso sfruttare
// i VLA se il mio compilatore li ammette
void stampa_vla(int righe, int colonne, int scacchiera[righe][colonne]) // nell'elenco dei parametri l'array DEVE essere dopo le dimensioni
{
  for(int i = 0; i < colonne; ++i)
  {
    for(int j = 0; j < righe; ++j)
    {
      printf("%d", scacchiera[j][i]);
    }
  printf("\n");
  }
}

// in maniera piu' generale posso usare
// array di array ovvero puntatori a puntatori
void stampa_punct(int *scacchiera, int righe, int colonne) // ma comunque devo passare lo stesso le dimensioni in qualche modo...
{
  for(int i = 0; i < colonne; ++i)
  {
    for(int j = 0; j < righe; ++j)
    {
      printf("%d", scacchiera[j*colonne + i]);
    }
  printf("\n");
  }
}


int main(int argc, char **argv){

  int dim;

  printf("Indica la dimensione della scacchiera (quadrata) che vuoi stampare: ");
  scanf("%d", &dim);
  

  // alloco con VLA (per semplicita')
  int scacchiera[dim][dim];

  // riempo di valori alternati per simulare quadretti
  for(int i = 0; i < dim; ++i)
    for(int j = 0; j < dim; ++j)
      scacchiera[i][j] = (i+j)%2?0:1;

  
  printf("\n");
  stampa(scacchiera);
  
  printf("\n");
  stampa_vla(dim, dim, scacchiera);

  printf("\n");
  stampa_punct((int *)scacchiera, dim, dim);
  
  


  return 0;
}

