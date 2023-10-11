// if() nidificati
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){

  int a, b;
  printf("Inserisci due numeri interi da confrontare: ");
  scanf("%d%d", &a, &b);
  if (a != b)
  {
    printf("I due numeri sono diversi tra di loro, ovvero:\n");
    // nested if else
    if (a > b)
    {
      printf(" il primo e' piu' grande del secondo\n");
    }
    else
    {
      printf(" il secondo e' piu' grande del primo\n");
    }
  }
  else
  {
    printf("I due numeri sono uguali\n");
  }


  return 0;
}

