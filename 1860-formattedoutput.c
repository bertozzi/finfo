// scrittura formattata
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){

  //array of strings
  char str[][100] = { "pippo", "paperino", "pluto", "gastone", "topolino" };

  int i;

  FILE *fp;

  fp=fopen("files/stringhe.txt", "w");
  if(!fp)
  {
    printf("Errore non riesco ad aprire il file!\n");
    exit(1);
  }

  for(i=0; i < 5; ++i)
  {
    fprintf(fp, "#%d: %s\n", i, str[i]); // like printf(), instead of writing on ther console, we write to a file using the same layout
  }

  fclose(fp);

  return 0;
}

