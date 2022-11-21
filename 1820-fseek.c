// fseek() ftell() e rewind()
#include<stdio.h>
#include<stdlib.h>

#include<ctype.h>

#define SIZE (200)

int main(int argc, char **argv){

  FILE *bf;

  bf=fopen("files/test.gif", "rb");
  if(!bf)
  {
    perror("Errore");
    exit(1);
  }

  // il formato GIF contiene nei primi 6 bytes i codici ASCII di "GIF89a", li devo saltare

  long position = ftell(bf);
  printf("Nel file sono alla posizione %ld\n", position);
  fseek(bf, 6, SEEK_SET); // SEEK_SET indica che l'offset è relativo all'inizio del file, altri valori possono essere SEEK_END o SEEK_CUR

  position = ftell(bf);
  printf("Dopo la fseek() sono alla posizione %ld\n", position);

  short w, h;
  fread(&w, sizeof(short), 1, bf); // leggo un singolo short (2 byte)
  fread(&h, sizeof(short), 1, bf); // leggo un singolo short (2 byte)

  printf("L'immagine GIF ha dimensioni %dx%d\n", w, h);

  position = ftell(bf);
  printf("Dopo aver letto due short sono alla posizione %ld\n", position);

  rewind(bf);
  position = ftell(bf);
  printf("Dopo la rewind() sono alla posizione %ld\n", position);

  fclose(bf);

  return 0;
}

