// prototipi di funzione
#include<stdio.h>
#include<stdlib.h>


// nel prototipo indico:
// tipo restituito
// nome
// tipo dei parametri formali
void saluta(void);
void arrivederci(void);
int lancio_dado(void);
int lancio_dadi(int);
int chiedi_numero_dadi(void);


int main(int argc, char **argv){

  saluta(); 

  int dadi_da_lanciare = chiedi_numero_dadi(); 

  int risultato = lancio_dadi(dadi_da_lanciare); 

  printf("Hai ottenuto: %d\n", risultato);

  arrivederci(); 

  return 0;
}






void saluta(void)
{
 printf("Benvenuto al programma di simulazione giuoco dei dadi\n");
} 

void arrivederci(void)
{
  printf("Grazie di aver giocato, torna presto!\n");
}

int lancio_dado(void)
{
  return 1+rand()%6; 
}

int lancio_dadi(int n)
{
  int sum=0;
  for(int i=0; i<n; ++i)
    sum += lancio_dado();

  return sum;
}


int chiedi_numero_dadi()
{
  int dadi;

  printf("Quanti dadi vuoi lanciare? ");
  scanf("%d", &dadi);

  return dadi;
}


