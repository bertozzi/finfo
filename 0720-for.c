// errore uscita, tipo long long
#include<stdio.h>
#include<stdlib.h>



int main(int argc, char **argv){

  long long fact = 1, j;

  for(j=1; j<10; j = j + 1)
    fact = fact * j;

  printf("Il fattoriale di 10 e' %lld\n", fact);

  return 0;
}

