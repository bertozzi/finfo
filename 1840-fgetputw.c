// putw()
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(int argc, char **argv){

  srand(time(0));

  FILE *fout = fopen("numeri.txt", "w");

  if(!fout)
  {
    perror("Non riesco ad aprire il file di output");
    exit(EXIT_FAILURE);
  }

  for(int i=0; i<10; ++i)
    putw((rand()%50+1), fout);



  return 0;
}

