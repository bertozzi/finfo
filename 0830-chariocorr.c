// lettura da tastiera di simboli, versione corretta per evitare contenuto buffer tastiera
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){

  int a, b;
  char c, d;

  printf("Inserisci un numero da tastiera: ");
  scanf("%d", &a);

  printf("Inserisci un secondo numero da tastiera: ");
  scanf("%d", &b);

  printf("I numeri sono %d & %d\n", a, b);

 
  printf("Inserisci un simbolo da tastiera: ");
  scanf(" %c", &c);  // lo spazio prima dello specificatore di formato indica alla scanf() di ignorare eventuali spaziature iniziali

  printf("Inserisci un secondo simbolo da tastiera: ");
  scanf(" %c", &d);

  printf("I simboli inseriti sono %c & %c\n", c, d);

  return 0;
}

