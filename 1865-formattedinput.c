// uso fscanf() per interpretare conenuto riga
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){

  FILE *fp=fopen("files/stringhe.txt", "r"); // e' lo stesso file precedentemente scritto
  if(!fp)
  {
    printf("Errore non riesco ad aprire il file!\n");
    exit(1);
  }

  int indice;
  char parola[1000]; // array sufficientemente "largo", ricordatevi che i byte non li pagate (per ora)

  // devo usare stringa di formato che mi permette di estrarre cio' che voglio dal file 
  // tralasciando tutto il resto
  while(fscanf(fp, "#%d: %s\n", &indice, parola) == 2) // leggo sia indice della riga che stringa
  {
    printf("Ho letto %d e [%s]\n", indice, parola);
  }

  fclose(fp);

  return 0;
}

