// qsort()
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void stampaarray(int *, int);
int mycomp(const void*, const void*);

int main(int argc, char **argv){

  srand(time(0));

   int n;
   printf("Quanti elementi vuoi ordinare? ");
   scanf("%d", &n);

   int a[n]; // VLA e' comunque limitato come dimensioni massime

   srand(time(0));

   // genera array, banalmente metto nel mio array tutti i numeri da 1 a n
   for (int i=0; i<n; i++)
     a[i]=(i+1);

   // mescola gli elementi dell'array ovvero genero una coppia a caso e scambio gli elementi
   for (int i=0; i<n; i++){
     int j = rand()%n;
     int t = a[i];
     a[i] = a[j];
     a[j] = t;
   }
   // visualizza array mescolato
   printf("ARRAY DA ORDINARE\n");
   stampaarray(a,n);


   // invoco ordinamento
   qsort(a, n, sizeof(a[0]), mycomp); // passo: 1. array, 2. n. elementi array, 3. dimensione ciascun elemento, 4. callback di comparazione

   // visualizza array ordinato
   printf("ARRAY ORDINATO\n");
   stampaarray(a,n);



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

// deve restituire valore < = > 0 a seconda del confronto, occorre cast visto che obbligatorio usare void*
int mycomp(const void* a, const void* b){

  int ai = *((int*)a); // a e' puntatore a void (int*)a e' puntatore a int, *((int *)a) e' l'int contenuto all'indirizzo in a
  int bi = *((int*)b);

  return ai-bi;
}


