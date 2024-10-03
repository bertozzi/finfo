// OR logico e anticipo costrutto if-else
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){

  int n;

  printf("Dammi un numero tra 10 e 20.\n"); 
  scanf("%d",  &n);


  if (n < 10  ||  n > 20)  // costrutto if()-else, ne parleremo meglio piu' avanti
    //XXX sono operatori, (10 <= n <= 20) NON funzionerebbe
    printf("Il tuo numero non e' compreso nell'intervallo 10-20\n");
  else 
    printf("Grazie!\n");




  return 0;
}

