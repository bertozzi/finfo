// formatted input
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){

  FILE *fp=fopen("files/stringhe.txt", "r"); // e' lo stesso file precedentemente scritto
  if(!fp)
  {
    printf("Errore non riesco ad aprire il file!\n");
    exit(1);
  }

  char parola[1000]; // array sufficientemente "largo", ricordatevi che i byte non li pagate (per ora)

  while(fscanf(fp, " %s", parola)==1) // leggo stringa fino a prima spaziatura, controllo che lettura sia andata a buon fine
  {
    printf("Ho letto [%s]\n", parola);
  }

  fclose(fp);

  return 0;
}

