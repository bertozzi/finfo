// uso fscanf() per leggere parola per parola e valore di ritorno per determinare se sono a fine file
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

  while(fscanf(fp, " %s", parola) == 1) // leggo stringa fino a prima spaziatura, controllo che lettura sia andata a buon fine
    // fscanf() restituisce il numero di specificatori di formato che e' riuscita a leggere 
    // quindi, in questo caso dove la stringa di formato ne contiene uno solo, se la lettura va a buon fine restituisce 1 
  {
    printf("Ho letto [%s]\n", parola);
  }

  fclose(fp);

  return 0;
}

/* OUTPUT
Ho letto [#0:]
Ho letto [pippo]
Ho letto [#1:]
Ho letto [paperino]
Ho letto [#2:]
Ho letto [pluto]
Ho letto [#3:]
Ho letto [gastone]
Ho letto [#4:]
Ho letto [topolino]
*/


