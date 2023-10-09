// esempi di operazioni bit a bit
#include<stdio.h>
#include<stdlib.h>

// funzione di appoggio
void stampabinario(int);

int main(int argc, char **argv){

  int a;
  printf("Inserisci un numero intero: ");
  scanf("%d", &a);


  printf("Il numero inserito vale: %d (%08x)\n", a, a);
  printf("In binario vale: ");
  stampabinario(a);
  printf("\n\n");

  int c1 = ~a; // nego bit a bit, quindi gli 1->0 e gli 0->1 e' un complemento a tutti gli effetti

  printf("Il suo complemento a uno vale: %d (%08x)\n", c1, c1);
  printf("In binario vale: ");
  stampabinario(c1);
  printf("\n\n");
  
  int c2 = ~a + 1;  // come il precedente ma aggiungo 1 -> complemento a 2

  printf("Il suo complemento a due vale: %d (%08x)\n", c2, c2);
  printf("In binario vale: ");
  stampabinario(c2);
  printf("\n\n");


  int b;
  printf("Quale bit vuoi esaminare? ");
  scanf("%d", &b);

  int bit = (a >> b) & 1 ; 
  // tramite (1<<b) creo un numero che dal punto di vista binario ha un solo '1' nella posizione 'b'.a
  // con l'and bit a bit isolo il bit corrispondente di a
  // l'ulteriore shift lo riporta nella posizione 'bit meno significativo'
  // Semplificando potevo scrivere ((a >> b) & 1)

  printf("Il bit %d di %d vale %d\n", b, a, bit); 

  return 0;
}


void stampabinario(int x)
{
  // questa funzione stampa i 32 bit di un int
  // non conosciamo ancora il controllo di flusso, quindi e' scritta
  // in maniera non particolarmente efficiente

  // per stampare estraggo i singoli bit portandoli nella posizione meno significativa
  // mediante shift a destra e poi li isolo con un and bit a bit

  printf("%d", x >> 31 & 1);
  printf("%d", x >> 30 & 1);
  printf("%d", x >> 29 & 1);
  printf("%d", x >> 28 & 1);
  printf("%d", x >> 27 & 1);
  printf("%d", x >> 26 & 1);
  printf("%d", x >> 25 & 1);
  printf("%d", x >> 24 & 1);
  printf(" ");
  printf("%d", x >> 23 & 1);
  printf("%d", x >> 22 & 1);
  printf("%d", x >> 21 & 1);
  printf("%d", x >> 20 & 1);
  printf("%d", x >> 19 & 1);
  printf("%d", x >> 18 & 1);
  printf("%d", x >> 17 & 1);
  printf("%d", x >> 16 & 1);
  printf(" ");
  printf("%d", x >> 15 & 1);
  printf("%d", x >> 14 & 1);
  printf("%d", x >> 13 & 1);
  printf("%d", x >> 12 & 1);
  printf("%d", x >> 11 & 1);
  printf("%d", x >> 10 & 1);
  printf("%d", x >>  9 & 1);
  printf("%d", x >>  8 & 1);
  printf(" ");
  printf("%d", x >>  7 & 1);
  printf("%d", x >>  6 & 1);
  printf("%d", x >>  5 & 1);
  printf("%d", x >>  4 & 1);
  printf("%d", x >>  3 & 1);
  printf("%d", x >>  2 & 1);
  printf("%d", x >>  1 & 1);
  printf("%d", x       & 1);
}


