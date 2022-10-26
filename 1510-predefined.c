// esempio di NON utilizzo delle funzioni predefinite
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>


int main(int argc, char **argv){

  // obiettivo del programma, stampare i vari codici ASCII indicando anche di che tipo sono

  for (unsigned char c = 0; c < 128; c++) { // ciclo su tutti i codici ASCII (non considero per semplicita' il codice ASCII esteso)

    printf("Il carattere ASCII %3d [", c);
    if (c<' ' || c==127)
      printf("--");
    else
      printf("%c", c);

    printf("] e' un carattere ");

    if      (c>='0' && c<='9') printf("numerico\n");
    else if (c>='a' && c<='z') printf("lettera minuscola\n");
    else if (c>='A' && c<='Z') printf("lettera maiuscola\n");
    else if (c==' ' || c=='\n' || c=='\t' || c=='\r' || c=='\v' || c=='\f') printf("di spaziatura\n");
    else if ((c>='!' && c<='/') || (c>=':' && c<='@') || (c>='[' && c<='`') || (c>='{' && c<='~')) printf("d'interpunzione\n");
    else if (c==127 || c<' ' ) printf("di controllo\n"); // ho semplificato notevolmente la condizione...
    else                 printf("Errore\n");
  }


  return 0;
}

