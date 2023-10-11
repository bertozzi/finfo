// scrittura formattata
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){

  char str[][100] = { "pippo", "paperino", "pluto", "gastone" };

  int i;

  FILE *fp;

  fp=fopen("files/stringhe.txt", "w");
  if(!fp)
  {
    printf("Errore non riesco ad aprire il file!\n");
    exit(1);
  }

  for(i=0; i < 4; ++i)
  {
    fprintf(fp, "#%d: %s\n", i, str[i]);
  }

  fclose(fp);

  return 0;
}

