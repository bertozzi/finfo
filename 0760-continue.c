// continue, specificatore di formato %c
#include <stdio.h>
 
int main (int argv, char **argc) {

  int n=-1;

  printf("Inserisci un numero tra 0 e 255 (0 per uscire)\n");

  do
  {
    scanf("%d",&n);

    // i codici ascii estesi sono tra 0 e 255 se viene inserito un valore al di fuori di questo
    // intervallo non devo proseguire con l'esecuzione 
    // soluzione: uso lo statement "continue" che salta subito
    // alla valutazione della condizione di ciclo nel caso di while() e do-while()
    // o all'aggiornamento per il for()
    if(n <= 0 || n > 255) continue;

    if(n >= 32)
      printf("Hai inserito un codice ASCII valido e stampabile che corrisponde al carattere: %c\n", n);
    else 
      printf("Hai inserito un codice ASCII che corrisponde ad un carattere di controllo\n");
  }
  while(n != 0);

   return 0;
}
