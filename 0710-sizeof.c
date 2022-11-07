// sizeof()

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){

  int a;

  // i due possibili usi di sizeof()
  printf("Il numero di byte occupati dalla variabile ""a"" e' %ld\n", sizeof(a));     // a sizeof() posso passare nome variabile
  printf("Il numero di byte occupati da un ""int"" e' %ld\n", sizeof(int));   // oppure tipo di dato

  return 0;
}

