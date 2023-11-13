// esempio lingering pointer
// lingering -> remaining present although waning or gradually dying
#include<stdio.h>
#include<stdlib.h>


// questa funzione crea solo l'array leggendo da tastiera
char *readline(void)
{
  char tmp[1000]; // sto largo...
  fscanf("%[^\n]", tmp); // leggo linea
  
  return tmp; // termina la funzione. Variabili locali come tmp vengono DISTRUTTE
}


int main(int argc, char **argv){

  printf("Inserisci una frase: ");
  char *frase=readline();
  printf("Hai inserito: %s\n", frase);
    
  return 0;
}

