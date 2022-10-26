// esempi funzioni predefinite -> numeri casuali 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(int argc, char **argv){

  printf("Risultato della funzione rand(): %d\n", rand());

  srand(time(0));

  printf("Risultato della funzione rand() dopo l'invocazione di srand(): %d\n", rand());

  return 0;
}

