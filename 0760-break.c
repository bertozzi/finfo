// comando break per interrompere ciclo
#include <stdio.h>
 
int main (int argv, char **argc) {

  int n;

  printf("Inserisci un numero intero positivo: ");
  scanf("%d", &n);

  int i;
  for(i = n - 1; i > 1; --i) // why > and not >= ?
  {
    if(!(n%i))
      break;
  }

  printf("Il piu' grande divisore di %d diverso da %d stesso e' %d\n", n, n, i);

  return 0;
}
