// inizializzazione array, differenti casi
#include<stdio.h>
#include<stdlib.h>

#define SIZE (10)

int main(int argc, char **argv){

  int a[SIZE] = {1,2,3,4,5,6,7,8,9,10}; // inizializzazione completa
  int b[SIZE] = {1,2,3};                // inizializzazione parziale, gli elementi dall'indice 3 in avanti valgono 0
  int c[SIZE] = {0};                    // inizializzazione a 0
  int d[]     = {1,2,3,4,5,6,7,8,9,10}; // inizializzazione completa con omissione dimensioni


  int g[SIZE];                          // non inizializzato

  printf("I valori di a[] sono: ");
  for(int i=0; i<SIZE; ++i)
    printf("%2d ", a[i]);
  printf("\n");

  printf("I valori di b[] sono: ");
  for(int i=0; i<SIZE; ++i)
    printf("%2d ", b[i]);
  printf("\n");

  printf("I valori di c[] sono: ");
  for(int i=0; i<SIZE; ++i)
    printf("%2d ", c[i]);
  printf("\n");

  printf("I valori di d[] sono: ");
  for(int i=0; i<SIZE; ++i)
    printf("%2d ", d[i]);
  printf("\n");

  printf("I valori di g[] sono: ");
  for(int i=0; i<SIZE; ++i)
    printf("%2d ", g[i]);
  printf("\n");

  return 0;
}

/* 
   ESEMPIO OUTPUT

I valori di a[] sono:  1  2  3  4  5  6  7  8  9 10 
I valori di b[] sono:  1  2  3  0  0  0  0  0  0  0 
I valori di c[] sono:  0  0  0  0  0  0  0  0  0  0 
I valori di d[] sono:  1  2  3  4  5  6  7  8  9 10 
I valori di g[] sono: -195493144 32750 601474432 21947  0  0 601473184 21947 2147008320 32765 

*/

