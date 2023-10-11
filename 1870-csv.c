// lettura file di tipo CSV
#include<stdio.h>
#include<stdlib.h>

// i file CSV (Comma Separated Values) sono file in cui, riga per riga, trovo dati separati da "," o comunque da qualche carattere specifico
// li useremo spesso nei temi di esame
// nel file di esempio ho, riga per riga, 4 numeri (un intero e tre a virgola mobile) separati da ","
// leggere una riga come stringa per poi cercare di "spezzettarla" in memoria e' complicato
// molto piu' sensato interpretare i dati gia' in fase di lettura

int main(int argc, char **argv){

  FILE *fp=fopen("files/trees.csv", "r");
  if(!fp)
  {
    perror("Errore non riesco ad aprire il file");
    exit(1);
  }

  int indice;
  float diametro, altezza, volume;

  // leggo e stampo quanto letto
  while(fscanf(fp, "%d,%f,%f,%f ", &indice, &diametro, &altezza, &volume) == 4) // se non ho letto 4 elementi o il file non e' fatto come me lo aspetto o sono arrivato in fondo
  {
    printf("#%02d  %6.3f   %6.3f   %6.3f \n", indice, diametro, altezza, volume);
  }

  fclose(fp);

  return 0;
}

