// fgets() e fputs()
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

  
  char buffer[100]; // leggo fino a 100 caratteri alla volta
  int i = 0; // lo uso per contare il numero di operazioni

  // char *fgets(char *s, int size, FILE *stream);
  while( fgets(buffer, 100, fileinput) != NULL) // fgets() restituisce NULL se non riesce a leggere nulla
  {
    printf("Ho letto [%s]\n", buffer);
    //  int fputs(const char *s, FILE *stream);
    fputs(buffer, fileoutput); // scrivo quanto letto nel secondo file
    ++i;
  }

  fclose(fileinput);
  fclose(fileoutput);

  printf("Nel ricopiare il file ho fatto %d operazioni di lettura e scrittura\n", i);

  return 0;
}
