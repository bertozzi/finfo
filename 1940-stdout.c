// stdout e stderr come stream di output
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){

  fprintf(stdout, "Scrivere su stdout con la fprintf() e' come usare la printf()\n");

  for(int i=0; i<10; ++i)
  {
    fprintf(stdout, "a"); // stdout -> output normale
    // fflush(stdout); // cosa succede a scommentarlo? Cosa fa questa funzione?
    fprintf(stderr, "A"); // stderr -> messaggi errori
  } // quindi se stampo ad ogni ciclo una "a" e poi una "A" dovrei ottenere "aAaAaAaA...." perche' non succede?
  printf("\n");


  // posso scrivere su stdin?
  int num = fprintf(stdin, "Hello World!\n"); // la fprintf() restituisce il numero di caratteri stampati o un numero negativo in caso di errore
  printf("Ho stampato su stdin %d caratteri\n", num);

  return 0;
}

