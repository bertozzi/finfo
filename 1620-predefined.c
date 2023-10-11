// esempio funzioni predefinite: ctype.h
#include<stdio.h>
#include<stdlib.h>

#include<ctype.h> // devo includere header opportuno


int main(int argc, char **argv){

  // obiettivo del programma, stampare i vari codici ASCII indicando anche di che tipo sono

  for (unsigned char c = 0; c < 128; c++) { // ciclo su tutti i codici ASCII (non considero per semplicita' il codice ASCII esteso)
    printf("Il codice ASCII %3d [", c);
    if (!isprint(c))
      printf("--");
    else
      printf("%c", c);

    printf("] e' un carattere ");

    if      (isdigit(c)) printf("numerico\n");
    else if (islower(c)) printf("lettera minuscola\n");
    else if (isupper(c)) printf("lettera maiuscola\n");
    else if (isspace(c)) printf("di spaziatura\n");
    else if (iscntrl(c)) printf("di controllo\n");
    else if (ispunct(c)) printf("d'interpunzione\n");
    else                 printf("Errore\n");
  }

  // si noti come l'uso di funzioni predefinite:
  // 1. semplifichi il codice
  // 2. migliori la leggibilita'

  return 0;
}

