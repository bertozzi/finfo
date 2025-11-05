// esempio memory leak
#include<stdio.h>
#include<stdlib.h>


int main(int argc, char **argv){

  unsigned int n;
  int *myarr;      // per gestire array di interi allocato dinamicamente
  int sum;

  while(1)
  {
    printf("Quanti interi vuoi sommare (0 per terminare)? ");
    scanf("%u", &n);

    if(!n)
      break;

    myarr = malloc(sizeof(int) * n); // alloco array per memorizzare quanto leggero' da tastiera
    if(!myarr)
    {
      printf("Non sono riuscito ad allocare quanto richiesto! Esco...\n");
      exit(1); // termina il programma
    }

    printf("Solo per debug ti dico che hai allocato il buffer all'indirizzo %p\n", myarr);

    // prima li leggo
    for(int i = 0; i < n; ++i)
    {
      printf("Inserisci numero intero: ");
      scanf("%d", &myarr[i]);
    }

    // poi li sommo (potevo fare senza memorizzarli ma questo e' un esempio)
    sum = 0;
    for(int i = 0; i < n; ++i)
      sum += myarr[i];

    printf("Il totale vale: %d\n", sum);

    // il codice funziona da un punto di vista pratico (o, per essere piu' precisi, funziona inizialmente)
    // pero' ad ogni ciclo ripeto una malloc(). Ogni volta viene riservata un'area di memoria
    // MAI piu' liberata. 
    // Quando ripeto la malloc() l'indirizzo di questa area di memoria lo perdiamo
    // Non solo non riusciamo piu' ad accedervi ma neanche la possiamo liberare
    // MEMORY LEAK
    // Ripetendo il tutto, io rischio di esaurire la memoria.
  }



  return 0;
}

