// uso di fopen() per file in lettura e perror()
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){

  FILE *fp;  // definisco il puntatore alla struct FILE

  fp = fopen("ilmiofile.txt", "r");  // tento di aprire il file "ilmiofile.txt" in lettura ("r")

  // fopen() restituisce um indirizzo valido se l'operazione ha avuto successo oppure NULL se e' fallita

  if(!fp) // se errore in apertura fp==NULL e quindi !fp e' "vero"
  {
    perror("Errore in apertura del file ilmiofile.txt");   // perror stampa la stringa passata + ": " + causa errore
    exit(EXIT_FAILURE); // esco segnalando errore!
  }

  fclose(fp); // chiudo file ovvero disassocio stream

  return 0;
}

// quando compilato ed eseguito fornisce il seguente messaggio:
// "Errore in apertura del file ilmiofile.txt: No such file or directory"
// in pratica fallisce in quanto non riesce ad aprire il file perche' non esiste
// ma l'apertura di un file puo' fallire per altri motivi (permessi, percorso sbagliato ecc.)
// per questo e' importante l'uso di perror()
