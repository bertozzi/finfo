// operatore ternario ? e %s
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){

  int n;

  printf("Introduci un numero intero: ");
  scanf("%d", &n);

  printf("Il numero %d e' %s\n", n, (n%2 ? "dispari" : "pari")); // possiamo vederlo con un if()-else "in linea"

  /* codice alternativo con if()-else 
  if(n%2)
    printf("Il numero %d e' dispari\n", n);
  else
    printf("Il numero %d e' pari\n", n);
    */ 



  return 0;
}

