// uso corretto di feof()
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){

  FILE *fp=fopen("files/parole.txt", "r");
  if(!fp)
  {
    printf("Errore non riesco ad aprire il file!\n");
    exit(1);
  }

  char parola[100]; // array sufficientemente "largo"

  while(1)
  {
    fscanf(fp, " %s", parola);

    if(feof(fp)) // se la lettura precedente fallisce in quanto a fine file, feof() mi restituisce un valore !=0. Chiaramente devo uscire
      break;

    printf("Ho letto [ %s ]\n", parola);
  }

  fclose(fp);

  return 0;
}

