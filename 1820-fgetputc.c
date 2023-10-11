// fgetc() e fputc()
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){

  FILE *fileinput, *fileoutput;  // definisco il puntatore alla struct FILE
  char nomefile[1000];

  printf("Inserisci il nome del file da ricopiare: ");
  scanf("%s", nomefile);

  fileinput = fopen(nomefile, "r"); // apro il file in lettura
  if(!fileinput)
  {
    perror("Non riesco ad aprire il file indicato");
    exit(EXIT_FAILURE);
  }

  printf("Inserisci il nome del file in cui vuoi ricopiare il contenuto del primo file: ");
  scanf("%s", nomefile);

  fileoutput = fopen(nomefile, "w"); // apro il secondo file in scrittura (se esistente verra' azzerato!)
  if(!fileoutput)
  {
    perror("Non riesco ad aprire il file indicato");
    exit(EXIT_FAILURE);
  }

  // leggo carattere per carattere il primo file e man mano che leggo scrivo nel secondo file
  int c; // devo usare int per EOF
  int i = 0; // lo uso per contare il numero di operazioni

  //   int fgetc(FILE *stream);
  while( (c = fgetc(fileinput)) != EOF) // fgetc() restituisce EOF se arriviamo alla fine del file oppure il codice ASCII del carattere letto
  {
    printf("Ho letto [%c]\n", c);
    //     int fputc(int c, FILE *stream);
    fputc(c, fileoutput); // scrivo quanto letto nel secondo file
    ++i;
  }

  fclose(fileinput);
  fclose(fileoutput);

  printf("Nel ricopiare il file ho fatto %d operazioni di lettura e scrittura\n", i);

  return 0;
}
