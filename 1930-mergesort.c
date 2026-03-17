// Bottom up Mergesort
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void stampaarray(int *, int);
void merge(int *, int *, int, int, int);  // funzione di appoggio per merge dei subset

// prende in ingresso vettore da ordinare e relativa numerosita'
void mergesort(int *a, int n){
  int i, m;

  // alloca il vettore ausiliario 
  int *extra = malloc(sizeof(*a) * n);

  // m: dimensione blocco da esaminare, inizialmente 1, poi 2, 4, 8 ecc.
  for (m = 1; m < n - 1; m += m)
    // i e' l'indice dell'elemento iniziale dei blocchi "a sinistra"
    // ogni volta mi sposto di 2m elementi 
    for (i = 0; i < n - 1; i += m + m)
    {
      int from = i;          // indice primo elemento del blocco sinistro
      int mid  = i + m - 1;  // indice ultimo elemento del blocco sinistro
      // l'indice dell'ultimo elemento blocco destro sarebbe i+2m-1 
      // ma se la dimensione dell'array iniziale non e' potenza di due
      // "a destra" rischio di uscire e quindi controllo che questro indice non sia > n - 1
      // nel caso lo tronco a  n - 1.
      int to   = ((i+m+m-1) > (n - 1)) ? n - 1 : (i+m+m-1);

      // uso merge() per "unire in maniera ordinata" i blocchi
      // di a[] da indice from a indice to
      // usando extra come appoggio
      merge(a, extra, from, mid, to);
    }
  free(extra);
}





void merge(int *a, int *extra, int start, int m, int end){
  int i, j, k;

  // se il blocco "a sinistra" supera end non c'e' un blocco destro: nulla da fondere
  if(m>end) return;

  // copia SOLO la meta' sinistra a[start..m] in extra[start..m]
  // e' una ottimizzazione, perche'?
  for (i = start; i <= m; i++)
    extra[i] = a[i];

  /* Fusione:
   *   i - cursore su extra[start..m]   (meta' sinistra, gia' copiata)
   *   j - cursore su a[m+1..end]      (meta' destra, ancora in a[])
   *   k - cursore sulla posizione di scrittura in a[]
   *
   * Il ciclo termina appena uno dei due cursori raggiunge la fine del proprio
   * blocco; l'altro while sistemera' eventuali elementi rimasti 
   */
  i = start;
  j = m + 1;
  k = start;

  while (i <= m && j <= end) {
    if (extra[i] <= a[j])
      a[k++] = extra[i++]; // preleva dalla meta' sinistra (extra)
    else
      a[k++] = a[j++];     // preleva dalla meta' destra (a[])
  }

  /* Se restano elementi nella meta' sinistra, copiali in a[].
   * (Se invece restano elementi nella meta' destra, sono gia' in a[] nella
   * posizione giusta: non occorre fare nulla.) */
  while (i <= m)
    a[k++] = extra[i++];
}


int main(int argc, char **argv)
{
   int i, j, n, *a;
   clock_t start,stop; // misureremo i tempi
   double quick; // stima velocita'


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
   mergesort(a,n);

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



