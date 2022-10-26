// esempi di operazioni bit a bit
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){

  int a;
  printf("Inserisci un numero intero: ");
  scanf("%d", &a);


  printf("Il numero inserito vale: %d (%08x)\n", a, a);

  int c1 = ~a; // nego bit a bit, quindi gli 1->0 e gli 0->1 e' un complemento a tutti gli effetti

  printf("Il suo complemento a uno vale: %d (%08x)\n", c1, c1);
  
  int c2 = ~a + 1;  // come il precedente ma aggiungo 1 -> complemento a 2

  printf("Il suo complemento a due vale: %d (%08x)\n", c2, c2);


  int b;
  printf("Quale bit vuoi esaminare? ");
  scanf("%d", &b);

  int bit = (a & (1 << b)) >> b ; 
  // tramite (1<<b) creo un numero che dal punto di vista binario ha un solo '1' nella posizione 'b'.a
  // con l'and bit a bit isolo il bit corrispondente di a
  // l'ulteriore shift lo riporta nella posizione 'bit meno significativo'
  // Semplificando potevo scrivere ((a >> b) & 1)

  printf("Il bit %d di %d vale %d\n", b, a, bit); 

  return 0;
}

