// do-while, controllo input utente
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){

  int n;

  do
  {
    printf("Inserisci un numero tra 0 e 15: ");
    scanf("%d", &n);
  }
  while(n < 0 || n > 15); // ripeto fino a quando il numero inserito NON e' nell'intervallo richiesto



  return 0;
}

