// equivalenza array e puntatori
#include<stdio.h>
#include<stdlib.h>


int main(int argc, char **argv){

  int a[]={23, 45,2, 4,9, 34, 34, 23, 90, 17, 18, 19};
  int *pa;


  printf("Il mio array a[] si trova in memoria all'indirizzo %p\n", a);     // indirizzo di memoria array lo ottengo usando il nome dell'array SENZA []
  printf("Il mio array a[] si trova in memoria all'indirizzo %p\n", &a[0]); // l'indirizzo del primo elemento e' comunque l'indirizzo dell'array

  pa=a;   // memorizzo nel puntatore l'indirizzo dell'array (equivalente a pa=&a[0])

  printf("Il primo e il secondo elemento dell'array contengono %d e %d\n", pa[0], pa[1]);  // anche per i puntatori posso usare le []
  printf("Il primo elemento dell'array contiene %d\n", *a);                                // vale anche il viceversa!
  
  printf("sizeof(array)     restituisce %zd\n", sizeof(a));    // sizeof() si comporta pero' diversamente
  printf("sizeof(puntatore) restituisce %zd\n", sizeof(pa));

  return 0;
}

/* 
   ESECUZIONE

Il mio array a[] si trova in memoria all'indirizzo 0x7fff35820770
Il mio array a[] si trova in memoria all'indirizzo 0x7fff35820770
Il primo e il secondo elemento dell'array contengono 23 e 45
Il primo elemento dell'array contiene 23
sizeof(array)     restituisce 48
sizeof(puntatore) restituisce 8

*/
