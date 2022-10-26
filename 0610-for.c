// for(;;) omissione espressioni
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){

  int i, sum=0;

  printf("Inserisci un numero intero positivo: ");
  scanf("%d", &i);

  printf("La somma dei numeri da 1 a %d vale ", i);

  for(; i>0; ++i) // inutile inizializzare i, contiene gia' il valore necessario
    sum +=i;

  printf("%d\n", sum);

  return 0;
}

