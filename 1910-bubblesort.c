// bubblesort
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void stampaarray(int *, int); 

// bubblesort implementation
void bsort(int *a, int n)
{                                        // takes as input: array of int and number of elements
  int tmp;                               // used for swaps 
  int sup = n-1;                         // index of last element swapped during the last pass, initially latest element
  int last;                              // used to track the latest swap at each round

  while (sup >= 0) {                     // round cycle, terminate if no more swaps needed
    last = -1;
    for (int i = 0; i < sup; i++)        // consider each element
      if ((a[i]>a[i+1])) {               // compare against the following one 
	tmp=a[i];                        // swap if not ordered
	a[i]=a[i+1];
	a[i+1]=tmp;
	last = i;                        // track the latest element that was swapped
      }
    sup = last;                          // elements with index > sup are alredy in the right order
  }
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



  srand(time(0));

  // genera array
  for (i=0; i<n; i++)
    a[i]=i+1;
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
  bsort(a,n);

  //fine cronometro
  stop=clock();
  quick=(double)stop-start; // se voglio i secondi divido per CLOCKS_PER_SEC

  // visualizza array ordinato
  printf(" Array ordinato\n");
  stampaarray(a,n);




  printf("\n");

  printf("\nTempo di esecuzione bsort sort: %g\n",quick/CLOCKS_PER_SEC);


  return 0;
}


void stampaarray(int *a, int n){
  int i;
  if(n<200)
  {
    for (i=0; i<n; i++){
      printf("%5d ",a[i]);
      printf((i+1)%15 ? "" : "\n");
    }
  }
  else
  {
    printf(" Array troppo grosso, mi limito a stampare i primi 30 e gli ultimi 30 elementi\n");

    for (i=0; i<30; i++){
      printf("%5d ",a[i]);
      printf((i+1)%15?"":"\n");
    }
     printf("  ...\n");
    for (i=n-30; i<n; i++){
      printf("%5d ",a[i]);
      printf((n-i-1)%15?"":"\n");
    }
  }

   printf("\n");
}

