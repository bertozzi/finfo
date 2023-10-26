// limiti delle variabili "singole"
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){

  // supponiamo di voler calcolare la somma di n numeri ma anche, per qualche motivo, di volerli memorizzare
  unsigned int n;

  printf("Quanti numeri vuoi sommare (max 100)? ");
  scanf("%u", &n);

  // uso di variabili singole per gestire i numeri da memorizzare
  int x1=0, x2=0, x3=0, x4=0, x5=0, x6=0, /* .... */ x100=0;
  int sum = 0;


  if(n>=1)
  {
    printf("Inserisci il numero #1: ");
    scanf("%d", &x1);
  }

  if(n>=2)
  {
    printf("Inserisci il numero #2: ");
    scanf("%d", &x2);
  }

  if(n>=3)
  {
    printf("Inserisci il numero #3: ");
    scanf("%d", &x3);
  }

  if(n>=4)
  {
    printf("Inserisci il numero #4: ");
    scanf("%d", &x4);
  }

  /* 
     ... 
     ...
  */

  if(n==100)
  {
    printf("Inserisci il numero #100: ");
    scanf("%d", &x100);
  }

  sum = x1 + x2 +x3 +x4 +x5 +x6 + /*....*/ x100;
  printf("La loro somma e': %d\n", sum);


  return 0;
}
