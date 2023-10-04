// operatore AND logico, > e cortocircuito valutazioni espressioni logiche

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){
  int n, d;

  printf("Introduci due interi positivi: ");
  scanf("%d", &n);
  scanf("%d", &d);

  int risultato = (d > 0 && n%d == 0); // prima viene stimato d > 0, se e solo se vera si stima anche n%d == 0
  // perche'? Ma perche' se stimassi n%d senza controllare il valore di d, rischio una divisione per 0
  // il cortocircuto avviene in quanto ho un AND logico (&&). In questo caso basta che una delle due componenti
  // dell'and sia falsa per far si' che tutta l'espressione sia falsa. Se d>0 e' falsxa diventa del tutto
  // inutile valutare anche l'altra sottoespressione
  
  printf("Il risultato dell'espressione (%d > 0 && %d%%%d) e' %d\n", d, n, d, risultato);
       


  return 0;
}

