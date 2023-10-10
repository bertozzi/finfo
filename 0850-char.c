// apici singoli, il tipo char e' comunque un tipo di dato numerico intero
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){

  // stampo i codici ASCII delle lettere e delle cifre

  for(char a='A'; a<='Z'; ++a)
    printf("Il codice ASCII di [%c] e' %d\n", a, a);

  for(char a='0'; a<='9'; ++a)
    printf("Il codice ASCII di [%c] e' %d\n", a, a);


  return 0;
}

