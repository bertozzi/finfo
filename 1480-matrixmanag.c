// allocazione dinamica array bidimensionali usando un array monodimensionale
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){

  // posso vedere una matrice come un insieme di elementi
  // posso disaccoppiare ogranizzazione logica e "fisica"
  // usando un array monodimensionale


  // leggo dimensioni da usare
  int nrows, ncols;
  printf("Inserisci le dimensioni della matrice che vuoi gestire: ");
  scanf("%d%d", &nrows, &ncols); 

  int *matrix;  // un puntatore di puntatori permette di gestire un array di array

  // Alloco il numero necessario di byte per gestire nrows*ncols elementi
  matrix = malloc(nrows * ncols * sizeof(int));  

  // allocazione finita, pero' per usarla devo convertire
  // gli indici di riga e colonna dell'ipotetica matrice nel
  // corrispondente indice come se mettessi le righe
  // tutte di seguito l'una all'altra. La formula e'
  // indice nell'array = <indice di colonna> + <indice di riga> * <numero elementi nella riga>

  // esempio di scrittura (inizializzo con numeri casuali tra 0 e 99)
  for(int r = 0; r < nrows; ++r)
    for(int c = 0; c < ncols; ++c)
      matrix[c + r * ncols] = rand()%100;
  
  // esempio di lettura (stampa)
  for(int r = 0; r < nrows; ++r)
  {
    for(int c = 0; c < ncols; ++c)
      printf("%2d ", matrix[c + r * ncols]);
    printf("\n");
  }

  return 0;
}

