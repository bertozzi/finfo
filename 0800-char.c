// il tipo char
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){

  char c;
  unsigned int code;

  printf("Inserisci il codice ASCII di un carattere: ");
  scanf("%u", &code);

  if(code<=255)
  {
    c=code;
    printf("Il codice ASCII %u corrisponde al carattere \"%c\"\n", code, c);
  }


  return 0;
}

