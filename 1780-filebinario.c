// lettura file binario
#include<stdio.h>
#include<stdlib.h>

#include<ctype.h>

#define SIZE (200)

int main(int argc, char **argv){

  unsigned char buffer[SIZE];
  int i,j;
  char myfile[] = "files/test.gif";

  FILE *bf;

  bf=fopen(myfile, "rb"); // notare la 'b'
  if(!bf)
  {
    printf("Errore non riesco ad aprire il file!\n");
    exit(1);
  }

  i = fread(buffer, sizeof(unsigned char), SIZE, bf); // leggo 200 elementi e li pongo nell'array "buffer"
  fclose(bf);

  printf("Dal file [%s] ho letto %d bytes\n", myfile, i); // il valore restituito da fread() permette di verificare quanti elementi ho letto


  // stampo quanto letto su due colonne, una che contiene il valore esadecimale di ogni singolo byte
  // e una che contiene il relativo carattere se e solo se stampabile
  printf("-------------------------------+------------");

  for(i=0; i < SIZE; i+=10) // considero 10 caratteri alla volta
  {
    printf("\n");
    for(j=0; j< 10; ++j) // in questo ciclo stampo i valori esadecimali
    {
      printf("%2x ", buffer[i+j]);
    }

    printf(" | ");

    for(j=0; j< 10; ++j) // in questo ciclo stampo i caratteri (se stampabili)
    {
      unsigned char c = buffer[i+j];
      if(isprint(c)) // isprint() mi permette di capire se e' un carattere stampabile
	printf("%c", c);
      else
	printf(" "); // se non lo e' stampo uno spazio per mantenere incolonnamento
    }

  }

    printf("\n-------------------------------+------------\n");

  return 0;
}

