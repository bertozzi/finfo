// esempio di uso di array di stringhe, gli argomenti sulla linea di comando
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){

  int i;

  printf("La tua linea di comando e' composta dalle seguenti %d parole\n", argc);
  for(i=0; i<argc; ++i)
  {
    printf(" #%d: %s\n", i, argv[i]);
  }


  return 0;
}

