// uso di fopen() in "append"
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){

  FILE *fp;  

  fp = fopen("files/numeri.txt", "a");  // uso "w" per aprire in modalita' "append" un file gia' esistente

  if(!fp) 
  {
    perror("Errore in apertura del file ilmiofile.txt");   
    exit(EXIT_FAILURE); 
  }

  fclose(fp); 

  return 0;
}

// se compilate ed eseguite questo esercizio non avete messaggi di errore
// il file di cui viene fornito il nome e' gia' esistente e non viene modificato
// dall'esecuzione di questo programma. 
// Le cose sarebbero molto differenti se avessi usato "w" come modalita'. In questo caso,
// il file sarebbe stato azzerato e il suo contenuto perso;
// nella modalita' "append", viceversa, ogni cosa che scrivo nel file verra' 
// ad esso accodata. Quindi tutto cio' che si trova gia' nel file viene preservato

