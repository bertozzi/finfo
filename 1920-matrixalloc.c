// allocazione dinamica array bidimensionali usando puntatori a puntatori
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){

  // posso vedere una matrice come un insieme di righe
  // una singola riga di una matrice la posso gestire con un array
  // tante righe diventano un array di array


  // leggo dimensioni da usare
  int nrows, ncols;
  printf("Inserisci le dimensioni della matrice che vuoi gestire: ");
  scanf("%d%d", &nrows, &ncols); 

  int **matrix;  // un puntatore di puntatori permette di gestire un array di array

  // Passo 1: alloco matrix, in pratica un singolo array di puntatori a int
  matrix = malloc(nrows*sizeof(int *)); 
  // Passo 2: dopo questa riga, ammesso che la malloc() abbia fatto il suo dovere, l'elemento i-esimo matrix[i] è un puntatore ad int
  //          li devo inizializzare tutti facendoli puntare a opportuna riga
  for(int i = 0; i < nrows; ++i)
    matrix[i] = malloc(ncols*sizeof(int));


  // allocazione finita, adesso posso usarla come un semplice array bidimensionale

  // esempio di scrittura (inizializzo con numeri casuali tra 0 e 99)
  for(int r = 0; r < nrows; ++r)
    for(int c = 0; c < ncols; ++c)
      matrix[r][c] = rand()%100;
  
  // esempio di lettura (stampa)
  for(int r = 0; r < nrows; ++r)
  {
    for(int c = 0; c < ncols; ++c)
      printf("%2d ", matrix[r][c]);
    printf("\n");
  }

  return 0;
}

