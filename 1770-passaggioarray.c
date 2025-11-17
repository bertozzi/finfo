// passaggio array monodimensionale a funzione, gestire le dimensioni
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

// 3 possibilita'
// 1: dimensioni note a priori
// 2: VLA
// 3: come puntatori ad area allocata dinamicamente

#define SIZE 8000

// DIMENSIONI NOITE A PRIORI
// questa funzione stampa solamente il contenuto di un array di dimensioni ben definite
// al momento della compilazione
void stampa_stat(int a[SIZE])
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
  

  // definisco un VLA 
  int numbers_vla[n];

  // dcefinisco array allocato dinamicamente
  int *numbers_dyn = malloc(sizeof(int) * n);

  // definisco array statico (ho esagerato con SIZE di modo che funzioni)
  int numbers_stat[SIZE];


  // riempiamoli di valori random
  for(int i = 0; i < n; ++i)
  {
    int caso = rand()%1000;

    numbers_vla[i]  = caso;
    numbers_dyn[i]  = caso;
    numbers_stat[i] = caso;
  }

  
  printf("\n");
  // stampa array statico, non passo la dimensione in quanto gia' definito nella funzione
  stampa_stat(numbers);
  
  printf("\n");
  // stampa VLA, obbligatorio passare   anche numero elementi
  stampa_vla(n, numbers);

  printf("\n");
  // stampa array allocato dinamicamente, obbligatorio passare   anche numero elementi ma non necessariamente prima dell'array
  stampa_punct(numbers, n);


  return 0;
}

