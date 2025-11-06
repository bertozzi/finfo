// nuovi elementi string.h -> strlen()
#include<stdio.h>
#include<stdlib.h>
#include<string.h> // obbligatorio per usare funzioni di stringa

int main(int argc, char **argv){

  char a[400]="Gatto"; // buffer sufficientemente largo


  // stampo stringa
  printf("a[] contiene '%s' ed e' lunga %ld caratteri\n", a, strlen(a));

  // leggo stringa da tastiera
  printf("Inserisci una frase: ");
  scanf("%[^\n]", a); // la lettura termina al primo \n
  printf("Ora a[] contiene '%s' ed e' lunga %lu caratteri\n", a, strlen(a)); //ATTENZIONE: in laboratorio %u


  return 0;
}

/*

   size_t strlen(const char *s);

   restituisce il numero di caratteri nella stringa ad eccezione di '\0'

*/

