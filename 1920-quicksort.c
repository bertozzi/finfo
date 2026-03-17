// Quicksort
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void stampaarray(int *, int);

void quicksort(int *x, int primo, int ultimo)  // prototipo differente rispetto a bubble sort, indico anche quale parte dell'array va ordinata
{
  if (primo >= ultimo) return;                 // condizione uscita della ricorsione, se array ha dimensione nulla o solo un elemento esco

  int pivot = x[primo];                        //prendiamo, per semplicita', come pivot il primo elemento della sequenza 

  int i = primo+1;                             // i e j li imposto come indice del primo e ultimo elemento della parte
  int j = ultimo;                              // di array da ordinare
  while (i < j)  
  { 
    while (i < ultimo && x[i] <= pivot)        // cerca, partendo da sinistra, il primo elemento > pivot
      i++;
    while (j > primo && x[j] > pivot)          // cerca, partendo da destra, il primo elemento < pivot
      j--;
    if (i < j)                                 // li scambia
    {
      int temp = x[i];
      x[i] = x[j];
      x[j] = temp;
    }
  }

  int temp = x[primo];                         // ho "diviso" l'array in due sottoarray: da un lato elementi <= pivot, dall'altro > pivot
  x[primo] = x[j];                             // metto il pivot in mezzo tra questi due sottoarray
  x[j] = temp;

  
  quicksort(x,primo, j-1);                    // ordino ricorsivamente i due sottoarray
  quicksort(x,j+1, ultimo);                   // il pivot lo escludo in quanto gia' in posizione corretta
}


int main(int argc, char **argv)
{
   int i, j, n, *a;
   clock_t start,stop; // misureremo i tempi
   double quick; // stima velocità


   if(argc<2){
     fprintf(stderr,"errore, manca l'argomento numerico\n");
     exit(EXIT_FAILURE);
   }
   n=atoi(argv[1]);
   a=malloc(sizeof(*a)*n);

   srand(time(0));

   // genera array
   for (i=0; i<n; i++)
     a[i]=(i+1);

   // mescola gli elementi dell'array
   for (i=0; i<n; i++){
     j = rand()%n;
     int t = a[i];
     a[i] = a[j];
     a[j] = t;
   }

   // visualizza array mescolato
   printf(" Array da ordinare\n");
   stampaarray(a,n);

   getchar();

   // inizio cronometro
   start=clock(); // restituisce il "CPU time" 

   // invoco ordinamento
   quicksort(a,0,n-1);

   //fine cronometro
   stop=clock();
   quick=(double)stop-start; // se voglio i secondi divido per CLOCKS_PER_SEC

   // visualizza array ordinato
   printf(" Array ordinato\n");
   stampaarray(a,n);

   printf("\n");

   printf("\nTempo di esecuzione quicksort: %g\n",quick/CLOCKS_PER_SEC);


   return 0;
}


void stampaarray(int *a, int n){
  int i;
  if(n < 200)
  {
    for (i = 0; i < n; i++){
      printf("%5d ",a[i]);
      printf((i+1)%15 ? "" : "\n");
    }
  }
  else
  {
    printf(" Array troppo grosso, mi limito a stampare i primi 30 e gli ultimi 30 elementi\n");

    for (i = 0; i < 30; i++){
      printf("%5d ",a[i]);
      printf((i+1)%15?"":"\n");
    }
     printf("  ...\n");
    for (i = n - 30; i < n; i++){
      printf("%5d ",a[i]);
      printf((n-i-1)%15?"":"\n");
    }
  }

   printf("\n");
}



