// ciclo for(;;) definizione variabili all'interno del for(;;) stesso, accenno a visibilità variabili
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(int argc, char **argv){

  int max;

  printf("Inserisci un numero intero positivo: ");
  scanf("%d", &max);

  printf("Ok contiamo\n");
  for (int x=max; x>0; --x) // il C99 permette questo (come il C++) 
  {
    printf("%d\n", x);
    sleep(1);
  }

  // printf("Ora x vale %d\n", x); // se scommento, errore di compilazione? Perché?

  return 0;
}

