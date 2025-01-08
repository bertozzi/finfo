// uso di fopen() in scrittura
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){

  FILE *fp;  // definisco il puntatore alla struct FILE

  fp = fopen("ilmiofile.txt", "w");  // identico all'esercizio precedente ma uso "w" per aprire in scrittura

  // fopen() restituisce um indirizzo valido se l'operazione ha avuto successo oppure NULL se e' fallita

  if(!fp) // se errore in apertura fp==NULL e quindi !fp e' "vero"
  {
    perror("Errore in apertura del file ilmiofile.txt");   // perror stampa la stringa passata + ": " + causa errore
    exit(EXIT_FAILURE); // esco segnalando errore!
  }

  fclose(fp); // chiudo file ovvero disassocio stream

  return 0;
}

// se compilate ed eseguite questo esercizio non avete messaggi di errore
// il file "ilmiofile.txt" viene creato e di dimensioni pari a 0 byte (l'abbiamo solo aperto, 
// non vi viene scritto dentro niente).
// cosa succede se provate ad aprire un file gia' esistente? Cambiate il nome del file nella fopen() e provate
