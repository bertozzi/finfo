// uso sbagliato di feof()
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){

  FILE *fp=fopen("files/parole.txt", "r");
  if(!fp)
  {
    printf("Errore non riesco ad aprire il file!\n");
    exit(1);
  }

  char parola[1000]; // array sufficientemente "largo"

  // feof() restituisce "true" se raggiunta fine file
  // XXX ma solo DOPO che ho tentato di leggere oltre la fine del file...
  while(!feof(fp)) 
  {
    fscanf(fp, " %s", parola);
    printf("Ho letto [ %s ]\n", parola);
  }

  fclose(fp);

  return 0;
}

