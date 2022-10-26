// lettura file di tipo CSV in array di struct
#include<stdio.h>
#include<stdlib.h>

// il file contiene, riga per riga, 4 numeri: 1 intero e 3 a virgola mobile separati da ","
// definisco opportuna struttura

struct dati
{
  int indice;
  float diametro, altezza, volume;
};


int main(int argc, char **argv){

  FILE *fp=fopen("files/trees.csv", "r");
  if(!fp)
  {
    printf("Errore non riesco ad aprire il file!\n");
    exit(1);
  }

  // passo 1: calcolo quante righe ha il file
  char tmp[1000]; // array sufficientemente largo per leggere tutta una riga
  int nrighe = 0;
  while(fscanf(fp, " %[^\n]", tmp) == 1) 
    ++nrighe;

  fseek(fp, 0, SEEK_SET);

  // passo 2: ora che so quante righe ha il file so quanti elementi deve avere il mio array per poterli memorizzare tutti
  struct dati *ad = malloc(nrighe * sizeof(struct dati));

  // passo 3: leggo e memorizzo i dati
  for(int i=0; i<nrighe; ++i)
    fscanf(fp, "%d,%f,%f,%f ", &ad[i].indice, &ad[i].diametro, &ad[i].altezza, &ad[i].volume);
  fclose(fp);


  // passo 4: li stampo
  for(int i=0; i<nrighe; ++i)
    printf("#%d:\t%.2f\t%.2f\t%.2f\n", ad[i].indice, ad[i].diametro, ad[i].altezza, ad[i].volume);


  return 0;
}

