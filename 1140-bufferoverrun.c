// esempio buffer overrun
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){

  int i, sum=0;
  unsigned long n;

  int numbers[5]; // un po' piccolino!

  printf("Quanti interi vuoi sommare? ");
  scanf("%lu", &n);  // cosa succede se inseriamo un numero superiore a 5?

  for(i=0; i<n; ++i)
  {
    printf("Inserisci numero intero: ");
    scanf("%d", &numbers[i]);
    sum += numbers[i];
  }

  printf("Hai inserito i seguenti numeri:\n");
  for(i=0; i<n; ++i)
  {
    printf("%3d: %6d\n", i+1, numbers[i]);
  }

  printf("Il totale vale: %d\n", sum);
    



  return 0;
}

