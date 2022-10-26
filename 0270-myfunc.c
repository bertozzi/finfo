// esempio definizione di propria funzione
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

// funzione che calcola la lunghezza dell'ipotenusa di un triangolo rettangolo date le lunghezze dei cateti
float ipotenusa(float cateto1, float cateto2) // intestazione funzione
{                              // inizio corpo funzione
  float risultato;

  risultato = sqrt(cateto1*cateto1 + cateto2*cateto2);

  return risultato;           // return restituisce valore a chi invoca la funzione
}                             // fine corpo funzione





int main(int argc, char **argv){

  float c1, c2;

  printf("Inserisci le misure dei cateti di un triangolo rettangolo: ");
  scanf("%f%f", &c1, &c2);

  printf("Il risultato per %f e %f e' %f\n", c1, c2, ipotenusa(c1,c2));  // invocazione funzione

  printf("Inserisci le misure dei cateti di un triangolo rettangolo: ");
  scanf("%f%f", &c1, &c2);

  printf("Il risultato per %f e %f e' %f\n", c1, c2, ipotenusa(c2,c1));  // seconda invocazione funzione

  return 0;
}

/* Nel caso in esame la funzione e' molto semplice, da un punto di vista tecnico praticamente non sensata. 
   Potevo usare:

   printf("Il risultato per %f e %f e' %f\n", c1, c2, sqrt(c1*c1 + c2*c2) ); 

   Tuttavia migliora notevolmente la leggibilita' della main 

 */
