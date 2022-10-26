// esempio memory leak
#include<stdio.h>
#include<stdlib.h>


int legginumerierestituiscisomma(unsigned int quanti)
{
  int *myarr = malloc(sizeof(int)*quanti); // alloco array per memorizzare quanto leggero' da tastiera
  if(!myarr)
  {
    printf("Non sono riuscito ad allocare quanto richiesto! Esco...\n");
    exit(1); // termina il programma
  }
  
  printf("Solo per debug ti dico che hai allocato il buffer all'indirizzo %p\n", myarr);

  // prima li leggo
  for(int i=0; i<quanti; ++i)
  {
    printf("Inserisci numero intero: ");
    scanf("%d", &myarr[i]);
  }

  // poi li sommo (potevo fare senza memorizzarli ma questo e' un esempio)
  int sum = 0;
  for(int i=0; i<quanti; ++i)
    sum += myarr[i];

  return sum; // termina la funzione. A parte ritornare dove era stata chiamata restituendo il valore contenuto in sum, vengono DISTRUTTE le varaibili locali: myarr, sum e quanti.
  // e quanto avevo allocato? che fine fa?
}


int main(int argc, char **argv){

  unsigned int n;

  printf("Quanti interi vuoi sommare? ");
  scanf("%u", &n);

  int sum = legginumerierestituiscisomma(n);
  printf("Il totale vale: %d\n", sum);
    
  printf("Dai, mi sto divertendo sommiamone altri, dimmi quanti: ");
  scanf("%u", &n);

  sum = legginumerierestituiscisomma(n);
  printf("Il nuovo totale vale: %d\n", sum);



  return 0;
}

