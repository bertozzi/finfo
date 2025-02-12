// scrittura in file binario di singole variabili
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){

  unsigned short intlp, prefix;
  unsigned int number;

  FILE *f = fopen("numeri.dat", "wb"); 
  if(!f)
  {
    perror("");
    exit(EXIT_FAILURE);
  }

  while(1) // ciclo infinito
  {
    printf("Inserire prefisso internazionale, prefisso operatore e numero separati da spazi (0 0 0 per terminare): ");
    scanf("%hu%hu%u", &intlp, &prefix, &number); 

    if(!intlp) // se == 0 allora esco dal ciclo
      break;

    // uso 3 fwrite per scrivere sul file i 3 dati
    fwrite(&intlp,  sizeof(intlp),  1, f);
    fwrite(&prefix, sizeof(prefix), 1, f);
    fwrite(&number, sizeof(number), 1, f);
  }

  fclose(f);

  return 0;
}

