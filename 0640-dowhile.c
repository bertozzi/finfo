// Iterazioni, ciclo do-while() calcolo MCD
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){

  int a, b, r;
  printf("----- Massimo Comune Divisore -----\n");
  printf("Introdurre due numeri interi positivi:\n");

  printf("Primo numero: ");
  scanf("%d", &a);

  printf("Secondo numero: ");
  scanf("%d", &b);

  printf("Il Massimo Comun Divisore di %d e %d e': ", a, b);

  // algoritmo di Euclide
  do { 
    r = a % b;
    a = b;
    b = r;
  } while (r > 0);

  printf("%d\n", a);



  return 0;
}



