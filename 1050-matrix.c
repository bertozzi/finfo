// array bidimensionale
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

// chiede ad utente valori di una matrice 2x2 e se possibile ne calcola e stampa l'inversa
int main(int argc, char **argv){

  float m1[2][2];

  printf("Inserisci i valore di una matrice M  2x2\n");
  for(int row=0; row<2; ++row)
    for(int col=0; col<2; ++col)
    {
      printf(" M%d,%d: ", row+1, col+1);
      scanf("%f", &m1[row][col]);
    }

  float det = m1[0][0]*m1[1][1] - m1[0][1]*m1[1][0];

  printf("Hai inserito la matrice\n");
  for(int row=0; row<2; ++row)
  {
    printf("|");
    for(int col=0; col<2; ++col)
      printf("%8.2f ", m1[row][col]);
    printf("|\n");
  }
  printf("Il suo determinante e' %f\n", det);

  printf("La matrice trasposta e'\n");
  for(int row=0; row<2; ++row)
  {
    printf("|");
    for(int col=0; col<2; ++col)
      printf("%8.2f ", m1[col][row]);
    printf("|\n");
  }


  return 0;
}

