// buffer di tastiera
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){


  char a;

  printf("Inserisci una frase: ");

  do
  {
    scanf("%c", &a);
    printf("Il codice ASCII di [%c] e' %d\n", a, a);
  }
  while(a != '\n'); // si', le sequenze di escape si possono usare anche come caratteri singoli e non solo nelle stringhe di formato

  return 0;
}

