// numeri casuali, intervallo valori
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(int argc, char **argv){

  srand(time(0)); // sempre solo UNA ED UNA VOLTA subito all'inizio della main

  int a,b; // usero' per memorizzare intervallo numeri


  printf("Inserisci due valori per la generazione di numeri casuali: ");
  scanf("%d%d", &a, &b);

  int random = a + rand()%(b-a); // ATTENZIONE manca controllo per b > a !

  printf("Ho estratto %d\n", random);

  return 0;

}

