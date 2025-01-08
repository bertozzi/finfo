// uso di fgets() per evitare buffer overrun
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){

  char mystring[11];

  printf("Inserisci una frase di massimo 10 caratteri: ");
  scanf("%[^\n]", mystring);
  printf("Hai inserito [%s]\n", mystring);

  getchar(); // remove the \n

  // la scanf() legge da tastiera fino al primo \n, non conosce la dimensione dell'array di destinazione
  // quindi se l'utente inserisce piu' di 10 caratteri -> buffer overrun

  // grazie alla fgets() posso scrivere il codice precedente in modo che sia a prova di errore
  printf("Inserisci una frase di massimo 10 caratteri: ");
  fgets(mystring, 11, stdin);
  printf("Hai inserito [%s]\n", mystring);

  
  return 0;
}

