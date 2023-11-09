// esempio lingering pointer corretto
// lingering -> remaining present although waning or gradually dying
#include<stdio.h>
#include<stdlib.h>


// questa funzione crea solo l'array leggendo da tastiera
char *readline(void)
{
  char c, tmp[1000]; // sto largo...
  int i=0;
  do
  {
    scanf("%c", &c); // leggo carattere per carattere
    tmp[i] = c;
    ++i;
  }
  while(c != '\n');

  char *nbuffer = malloc(i*sizeof(char)); // alloco nuovo buffer e lo dimensiono in base al numero di caratteri letti
  while(i>=0)
  {
    --i;
    nbuffer[i] = tmp[i];
  }
  
  return nbuffer; // nbuffer viene effettivamente distrutto, tuttavia il suo contenuto viene restituito e sopratutto cio' che avevo allocato con malloc() rimane
}


int main(int argc, char **argv){

  printf("Inserisci una frase: ");
  char *frase=readline();
  int i = 0;
  printf("Hai inserito: ");
  do
  {
    printf("%c", frase[i++]);
  }while(frase[i] != '\n');

  printf("\n");

  free(frase);
    
  return 0;
}

