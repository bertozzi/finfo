// operatori di incremento/decremento prefissi e postfissi
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){

 int m = 66, n;
  n = ++m; // l'operatore e' prefisso: prima eseguo incremento, poi rendo disponibile valore per il resto delle operazioni (in questo caso l'assegnamento a n)
  printf("m = %d, n= %d\n", m, n);


  n = m++; // l'operatore e' postfisso: prime rendo disponibile valore per il resto delle operazioni (in questo caso l'assegnamento a n) e solo dopo eseguo l'incremento
  printf("m = %d, n= %d\n", m, n);


  printf("m++ = %d\n", m++);
  printf("m   = %d\n", m);
  printf("++m = %d\n", ++m);

  m=m++; // FIXME risultato potenzialmente non definito!
  printf("m   = %d\n", m);

  n = m++ + m++; // FIXME come sopra!
  printf("n   = %d\n", n);


  return 0;
}

