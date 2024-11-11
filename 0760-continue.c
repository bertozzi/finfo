// continue, specificatore di formato %c
#include <stdio.h>
 
int main (int argv, char **argc) {

  int n=-1;

  printf("Inserisci un numero tra 0 e 255 (0 per uscire)\n");

  do
  {
    scanf("%d",&n);

    if(n<=0 || n>255) continue; // i codici ascii estesi sono tra 0 e 255

    if(n>32)
      printf("Hai inserito un codice ASCII valido e stampabile che corrisponde al carattere: %c\n", n);
    else 
      printf("Hai inserito un codice ASCII che corrisponde ad un carattere di controllo\n");
  }
  while(n!=0);

   return 0;
}
