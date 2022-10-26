// la ricorsione, esempio Torre Hanoi
#include<stdio.h>
#include<stdlib.h>


/*
   spostare N dischi dal piolo X al piolo Y io lo posso vedere come
   se(N>0)
    - spostare N-1 dischi dal piolo X al terzo piolo
    - spostare 1 disco dal piolo X al piolo Y
    - spostare N-1 dischi dal terzo piolo al piolo Y
   altrimenti
    - esco
*/


static unsigned long numeromosse;  

void muovidisco (int, int);
void muovitorre (int, int, int);


int main(int argc, char **argv){
  int totale;           /* numero di dischi */

  printf("Torre di Hanoi\n");
  printf("Quanti dischi? ");
  scanf("%d", &totale);

  numeromosse = 0;
  muovitorre (totale, 1, 3);

  printf("\nNumero totale mosse per %d dischi =  %ld\n", totale, numeromosse);

  return 0;
}


// Muove una torre di "altezza" dischi dal disco partenza al disco arrivo
void muovitorre (int altezza, int partenza, int arrivo) {

  if(!altezza) return;

  int ausiliario = 6-partenza-arrivo; // a bit of magic! Ok spiegamola. 1+2+3=6 quindi dati i pioli x e y 6-x-y mi fornisce il terzo piolo

  muovitorre (altezza - 1, partenza, ausiliario);
  muovidisco (partenza, arrivo);
  muovitorre (altezza - 1, ausiliario, arrivo);

}


// muovo un singolo disco da sorgente a destinazione
void muovidisco (int sorgente, int destinazione) {

  numeromosse++; // aggiorno il numero di mosse fatte

  // in assenza di un servomeccanismo robotico che mi sposti i dischi fornisco semplicemente all'utente la mossa da fare...
  printf(" %ld: %d -> %d\n", numeromosse, sorgente, destinazione);
}






