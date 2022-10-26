// Iterazioni, il ciclo while() pericolo ciclo infinito
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(int argc, char **argv){

  int x;
  
  printf("Inserisci il valore per il countdown: ");
  scanf("%d", &x);

  while(x!=0) //XXX raggiungeremo sempre il valore 0?
  {
    printf("%3d...\n", x);
    --x;       
    sleep(1);
  }

  printf("START!\n");


  return 0;
}

