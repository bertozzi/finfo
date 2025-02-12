// lettura fino a fine file da  file binario
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){

  unsigned short intlp, prefix;
  unsigned int number;

  FILE *f = fopen("numeri.dat", "rb");  // apro il file precedentemente generato
  if(!f)
  {
    perror("");
    exit(EXIT_FAILURE);
  }

  // la fread() ha la stessa sintassi della fwrite
  // restituisce il numero di "elementi" letti e quindi ci permette
  // di capire se la lettura sia andata o meno a buon fine
  // la uso quindi direttamente come condizione del ciclo
  // assumo che il file sia corretto ovvero che contenga sempre
  // una tripletta formata da due unsigned short e un unsigned int
  // di conseguenza controllo solo se riesce a leggere il primo unsigned short
  while( fread(&intlp,  sizeof(intlp),  1, f) == 1 ) 
  {
    fread(&prefix, sizeof(prefix), 1, f);
    fread(&number, sizeof(number), 1, f);

    printf("Numero letto %04u %u %u\n", intlp, prefix, number); 

  }

  fclose(f);

  return 0;
}

