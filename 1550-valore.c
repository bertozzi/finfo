// passaggio argomenti per valore
#include<stdio.h>
#include<stdlib.h>

void incrementadidue(int a)
{
  a = a + 2; // il parametro di una funzione e' di fatto una variabile locale, viene creato ogni volta che la funzione viene invocata e distrutto ogni volta che la funzione termina

  return; // non obbligatorio per void
}


int main(int argc, char **argv){

  int i, x=1;

  for(i=1; i<10; i++)
  {
    incrementadidue(x);

    printf("Al giro #%d, x vale %d\n", i, x);
  }

  incrementadidue(10); // ??

  return 0;
}

/*
OUTPUT:

Al giro #1, x vale 1
Al giro #2, x vale 1
Al giro #3, x vale 1
Al giro #4, x vale 1
Al giro #5, x vale 1
Al giro #6, x vale 1
Al giro #7, x vale 1
Al giro #8, x vale 1
Al giro #9, x vale 1

*/
