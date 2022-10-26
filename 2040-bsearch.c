// bsearch()
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void stampaarray(int *, int);
int mycomp(const void*, const void*);

int main(int argc, char **argv){

  srand(time(0));

   int n;
   printf("Quanti elementi vuoi generare? ");
   scanf("%d", &n);

   int a[n]; // VLA e' comunque limitato come dimensioni massime

   srand(time(0));

   // genera array ordinato, banalmente metto nel mio array numeri sempre crescenti sommando al precedente elemento uno step casuale
   a[0] = 1;
   for (int i=1; i<n; i++)
     a[i]=a[i-1] + rand()%10 + 1;

   // visualizza array mescolato
   printf("ARRAY GENERATO\n");
   stampaarray(a,n);

   int k;
   printf("Dimmi che numero vuoi ricercare: ");
   scanf("%d", &k);

   // invoco ordinamento
   int *risultato = bsearch(&k, a, n, sizeof(a[0]), mycomp); 

   if(risultato)
   {
     printf("Il numero ricercato si trova all'indice %ld\n", risultato - a);
   }
   else
   {
     printf("Numero non presente nell'array\n");
   }

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


