// indirizzo di una funzione in memoria
#include<stdio.h>
#include<stdlib.h>

void helloworld(void)
{
  printf("Hello world!\n");
}

int main(int argc, char **argv){

  helloworld();

  printf("La funzione helloworld() si trova all'indirizzo di memoria %p\n", helloworld);

  return 0;
}

