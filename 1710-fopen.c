// uso di fopen() e perror()
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

