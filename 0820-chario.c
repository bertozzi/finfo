// lettura da tastiera di simboli, accortezze...
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){

  int a, b;
  char c, d;

  printf("Inserisci un numero da tastiera: ");
  scanf("%d", &a);

  printf("Inserisci un secondo numero da tastiera: ");
  scanf("%d", &b); // PROBLEMA: quando premo i tasti i relativi simboli finiscono in input al programma. Tutti. Incluso l'invio dopo il numero...

  printf("I numeri sono %d & %d\n", a, b);

 
  printf("Inserisci un simbolo da tastiera: ");
  scanf("%c", &c);  // gia' qui non funziona! cosa e' successo?

  printf("Inserisci un secondo simbolo da tastiera: ");
  scanf("%c", &d);

  printf("I simboli inseriti sono %c & %c\n", c, d);

  return 0;
}

