// esempio lingering pointer
// lingering -> remaining present although waning or gradually dying
#include<stdio.h>
#include<stdlib.h>


// questa funzione crea solo l'array leggendo da tastiera
int *legginumerierestituisci(unsigned int quanti) 
{
  int myarr[quanti]; // uso VLA
  
  // leggo i numeri
  for(int i=0; i<quanti; ++i)
  {
    printf("Inserisci numero intero: ");
    scanf("%d", &myarr[i]);
  }

  // restituisco indirizzo di dove si trovano
  return myarr; // termina la funzione. Variabili locali come myarr vengono DISTRUTTE
}


int main(int argc, char **argv){

  unsigned int n;

  printf("Quanti interi vuoi leggere da tastiera? ");
  scanf("%u", &n);

  int *numbers = legginumerierestituisci(n);

  printf("Da tastiera e' stato immesso: \n");
  for(int i=0; i<n; ++i)
    printf("%2d: %d\n", i, numbers[i]);
    
  return 0;
}

