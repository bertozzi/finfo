// nuovi concetti: definizione di funzione
#include<stdio.h>
#include<stdlib.h>


// funzione che non prende in ingresso dati e non restituisce niente
void saluta(void)
{
 printf("Benvenuto al programma di simulazione giuoco dei dadi\n");
} // return non obbligatorio, termino quando incontro }

// funzione che non prende in ingresso dati e non restituisce niente
void arrivederci(void)
{
  printf("Grazie di aver giocato, torna presto!\n");
}

// funzione che non prende in ingresso dati MA restituisce un singolo dato di tipo int
int lancio_dado(void)
{
  return 1+rand()%6; // return obbligatorio
}

// funzione che prende in ingresso un int e restituisce un int
int lancio_dadi(int n)
{
  int sum=0;
  for(int i=0; i<n; ++i)
    sum += lancio_dado();

  return sum;
}


int chiedi_numero_dadi(void)
{
  int dadi;

  printf("Quanti dadi vuoi lanciare? ");
  scanf("%d", &dadi);

  return dadi;
}



int main(int argc, char **argv){

  saluta(); // invocazione funzione che non prende in ingresso niente

  int dadi_da_lanciare = chiedi_numero_dadi(); // invocazione funzione che non prende in ingresso niente ma che restituisce un int

  int risultato = lancio_dadi(dadi_da_lanciare); // invocazione funzione che prende argomento

  printf("Hai ottenuto: %d\n", risultato);

  arrivederci(); 

  return 0;
}

// si noti come la main() e' molto piu' leggibile e comprensibile
// in pratica ho nascosto i dettagli implementativi nelle funzioni (in questo esempio si e' anche esagerato!)
