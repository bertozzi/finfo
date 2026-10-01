// precedenza diversa da ordine di valutazione
#include<stdio.h>
#include<stdlib.h>

int main()
{
  int x;

  // printf restituisce il numero di caratteri stampati: ad esempio printf("x") restituira' 1 visto
  // che viene stampato un singolo carattere

  // quindi posso usare la printf() in espressioni matematiche
  x = printf("A") + printf("B") * printf("C");

  // visto che * ha precedenza rispetto + prima verra'
  // "valutata" come printf("A") + (printf("B") * printf("C"))

  return 0;
}

  // la precedenza raggruppa A + (B * C), quindi x vale 1 + 1*1 = 2
  // ma l'ordine in cui vengono chiamate le printf NON e' definito dal C:
  // l'output potrebbe essere ABC, BCA, CBA... dipende dal compilatore
