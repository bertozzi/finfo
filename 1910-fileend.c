// uso di valore restituito da fscanf() per individuare che si e' arrivati a fine file
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

  while((fscanf(fp, " %s", parola)) == 1) // se fscanf() restituisce un valore != 1 allora vuol dire che non e' riuscita a leggere una stringa
  {
    printf("Ho letto [ %s ]\n", parola);
  }

  fclose(fp);

  return 0;
}

