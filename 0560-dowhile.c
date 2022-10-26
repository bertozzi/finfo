// Iterazioni, ciclo do-while() cifre binarie, operatore sizeof()
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){

  int n, nbit;

  printf("Inserisci un numero intero: ");
  scanf("%d", &n);

  nbit = sizeof(n)*8; // sizeof(variabile) restituisce i byte utilizzati per quel tipo di dato (dipendono da compilatore e architettura)

  printf("%+12d in binario si rappresenta come: ", n);

  // uso lo scorrimento bit a bit
  do
  {
    nbit--;
    printf("%d", (n >> nbit) & 1);

    if(!(nbit%8))
      printf(" ");

  }while(nbit);

  printf("\n");

  return 0;
}



