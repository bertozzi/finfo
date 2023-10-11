// ciclo for(;;) operatore "," in aggiornamento
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){

  int x, sum, max;

  printf("Inserisci un numero intero positivo: ");
  scanf("%d", &max);

  for (x=1, sum=0; x <= max; sum = sum + x, x = x + 1); // corpo del ciclo -> istruzione nulla

  printf("La somma dei numeri da 1 a %d e' %d\n", max, sum);

  return 0;
}

