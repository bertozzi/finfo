// come risolvere problema buffer di tastiera
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){

  char sc;
  char str[100];


  printf("Inserisci un carattere: ");
  sc=getchar();
  printf("Ho letto il carattere '%c'\n", sc);

  // se l'utente ha inserito un singolo carattere nel buffer di tastiera finisce: il carattere + invio (\n)
  // la getchar() rimuove il carattere, ma lo '\n' rimane. Letture successive potrebbero venir confuse dalla
  // presenza dello '\n' 
  // posso rimuovere usando un secondo getchar()

  //getchar();  // remove the \n

  // Ma c'e' da fidarsi sul fatto che l'utente abbia premuto un solo tasto? -> NO 
  while(getchar()!='\n');  // remove the whole keyboard buffer up to the first '\n'




  printf("Inserisci una parola: ");
  scanf("%[^\n]", str);
  printf("Ho letto la stringa '%s'\n", str);


  return 0;
}

