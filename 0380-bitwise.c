// esempi di operazioni bit a bit, stampa di un numero in formato binario
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){

  int a;
  printf("Inserisci un numero intero < 256: ");
  scanf("%d", &a);


  printf("Il numero inserito e' %d e in binario vale ", a);

  printf("%d", (a>>7)&1 ); // in questo caso sposto l'ottavo bit nella posizione 0 ovvero come 'bit meno significativo'. Tramite l'and bit a bit tengo solo lui
  printf("%d", (a>>6)&1 );
  printf("%d", (a>>5)&1 );
  printf("%d", (a>>4)&1 );
  printf("%d", (a>>3)&1 );
  printf("%d", (a>>2)&1 );
  printf("%d", (a>>1)&1 );
  printf("%d", (a>>0)&1 );

  // piu' avanti scopriremo quanto questo codice e' brutto, ma per ora non abbiamo parlato di cicli...

  printf("\n");


  return 0;
}

