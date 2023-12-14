// puntatore ad una funzione: definizione, inizializzazione e uso
#include<stdio.h>
#include<stdlib.h>

void helloworld(void)
{
  printf("Hello world!\n");
}

int main(int argc, char **argv){

  helloworld();

  printf("La funzione helloworld() si trova all'indirizzo di memoria %p\n", helloworld);

  void (*pf)(void);   // DEFINIZIONE PUNTATORE A FUNZIONE: puntatore di nome pf ad una funzione che restituisce un void e non prende argomenti in ingresso

  pf = helloworld;    // INIZIALIZZAZIONE PUNTATORE A FUNZIONE:  metto in pf l'indirizzo della funzione

  // stampo pf per semplice verifica che contenga l'indirizzo corretto
  printf("Il puntatore a funzione pf contiene l'indirizzo di memoria %p\n", pf);

  pf();              // USO: invoco la funzione puntata tramite il puntatore

  return 0;
}

/* NOTE
   questo e' solo un esempio di sintassi. 
   Quello che va capito (oltre alla sintassi) e' che una volta
   che ho un puntatore ad una determinata funzione e' che posso usarlo per
   invocare quella funzione.
   Di fatto l'uso principale dei puntatori a funzione e' esattamente quello di usarli
   per generalizzare il codice ad esempio per le cosiddette "callback"
   ovvero poter passare ad una funzione non solo dati ma un "blocco" di codice
   */
