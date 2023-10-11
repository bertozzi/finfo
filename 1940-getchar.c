// getchar() 
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){

  char sc;


  printf("Inserisci un carattere: ");
  sc=getchar();
  printf("Ho letto il carattere '%c'\n", sc);

  printf("Inserisci un secondo carattere: ");
  sc=getchar();
  printf("Ho letto il carattere '%c'\n", sc); // perche' non funziona?


  return 0;
}

