// I/O stringa
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){

  char a[400]="Tanto va la gatta al lardo che ci lascia lo zampino"; // buffer sufficientemente largo


  // stampo stringa
  printf("a[] contiene '%s'\n", a);

  // leggo stringa da tastiera
  printf("Inserisci una parola: ");
  scanf("%s", a); // attenzione la lettura termina alla prima spaziatura
  printf("Ora a[] contiene '%s'\n", a);

  printf("Inserisci una frase: ");
  scanf(" %[^\n]", a); // la lettura termina al primo \n lo spazio iniziale serve per ignorare eventuali spaziature iniziali, come lo '\n' lasciato nel buffer di ingresso dalla lettura precedente
  printf("Ora a[] contiene '%s'\n", a);


  return 0;
}

