// esempio lingering pointer
// lingering -> remaining present although waning or gradually dying
#include<stdio.h>
#include<stdlib.h>


// questa funzione crea solo l'array leggendo da tastiera
char *readline(void)
{
  char c, tmp[1000]; // sto largo...
  int i = 0;
  do
  {
    scanf("%c", &c); // leggo carattere per carattere
    tmp[i] = c;
    ++i;
  }
  while(c != '\n');
  
  return tmp; // termina la funzione. Variabili locali come tmp vengono DISTRUTTE
}


int main(int argc, char **argv){

  printf("Inserisci una frase: ");
  char *frase = readline();
  int i = 0;
  printf("Hai inserito: ");
  do
  {
    printf("%c", frase[i++]);
  }while(frase[i] != '\n');
    
  return 0;
}

